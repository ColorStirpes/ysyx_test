#include <isa.h>


word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  
#ifdef CONFIG_ETRACE
  char *log = NULL;  
#endif
 // switch(NO){
    cpu.mepc = epc;
    cpu.mcause = NO;
#ifdef CONFIG_ETRACE    
    log = "Environment call from M-mode\n";
#endif
  //}


#ifdef CONFIG_ETRACE    
    printf("exception: %s\n",log);
#endif

  return cpu.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
