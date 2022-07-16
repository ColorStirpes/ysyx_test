#include <dlfcn.h>

#include "na.h"
#include "difftest-def.h"
#include "memory.h"


void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;


static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref()
{
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut)
{
  skip_dut_nr_inst += nr_dut;

  while (nr_ref-- > 0)
  {
    ref_difftest_exec(1);
  }
}



void init_difftest(char *ref_so_file, long img_size, int port)
{
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  // printf("Differential testing: *ON*");
  // printf("The result of every instruction will be compared with %s. "
  //     "This will help you a lot for debugging, but also significantly reduce the performance. "
  //     "If it is not necessary, you can turn it off in menuconfig.",
  //     ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, (void *)pmem, img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpuu, DIFFTEST_TO_REF);

}

///////////////////////////////////////////////////////////////////////////
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

const char* reg_name(int idx) {
  return regs[idx];
}

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  bool eqreg = true; 
  for(int i = 0; i < 32; i++)
      if(ref_r->gpr[i] != cpuu.gpr[i]){
      	  eqreg = false;
      	  printf("%s is different after executing instruction at PC = 0x%lx\n", reg_name(i), pc);
      	  printf("Right %s = %ld,but now is %s = %ld\n", reg_name(i), ref_r->gpr[i], reg_name(i), cpuu.gpr[i] );
      }
  
  if(ref_r->pc != cpuu.pc){
    printf("ref_r->pc:%lx,pc:%lx\n",ref_r->pc,cpuu.pc);
    eqreg = false;
    printf("The next pc is different after executing instruction at PC = 0x%lx\n", pc);
  }
      
  return eqreg;
}


static void checkregs(CPU_state *ref, vaddr_t pc)
{
  if (!isa_difftest_checkregs(ref, pc))
  {
    exit_now();
    dump_gpr();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc)
{
  CPU_state ref_r;

  if (skip_dut_nr_inst > 0)
  {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc)
    {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst--;
    if (skip_dut_nr_inst == 0)
      printf("can not catch up with ref.pc = %lx at pc = %lx", ref_r.pc, pc);
    return;
  }

 

  if (is_skip_ref)
  {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpuu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }
  ref_difftest_exec(1); 
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  //printf("dddddddddddddddddddd\n");
  checkregs(&ref_r, pc);
}
