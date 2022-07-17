// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+939,"reset", false,-1);
        tracep->declBit(c+940,"clock", false,-1);
        tracep->declBus(c+941,"instr", false,-1, 31,0);
        tracep->declQuad(c+942,"momory_data", false,-1, 63,0);
        tracep->declBit(c+944,"fetch_enb", false,-1);
        tracep->declQuad(c+945,"pc", false,-1, 63,0);
        tracep->declBus(c+947,"memop", false,-1, 1,0);
        tracep->declBit(c+948,"mem_ena", false,-1);
        tracep->declBit(c+949,"mem_wr", false,-1);
        tracep->declQuad(c+950,"mem_addr", false,-1, 63,0);
        tracep->declQuad(c+952,"mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+954,"difftest_instr", false,-1, 31,0);
        tracep->declQuad(c+955,"difftest_pc", false,-1, 63,0);
        tracep->declBit(c+939,"top reset", false,-1);
        tracep->declBit(c+940,"top clock", false,-1);
        tracep->declBus(c+941,"top instr", false,-1, 31,0);
        tracep->declQuad(c+942,"top momory_data", false,-1, 63,0);
        tracep->declBit(c+944,"top fetch_enb", false,-1);
        tracep->declQuad(c+945,"top pc", false,-1, 63,0);
        tracep->declBus(c+947,"top memop", false,-1, 1,0);
        tracep->declBit(c+948,"top mem_ena", false,-1);
        tracep->declBit(c+949,"top mem_wr", false,-1);
        tracep->declQuad(c+950,"top mem_addr", false,-1, 63,0);
        tracep->declQuad(c+952,"top mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+954,"top difftest_instr", false,-1, 31,0);
        tracep->declQuad(c+955,"top difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+214,"top rdata", false,-1, 63,0);
        tracep->declBus(c+957,"top wmask", false,-1, 7,0);
        tracep->declBit(c+732,"top mux_pc", false,-1);
        tracep->declQuad(c+733,"top branch", false,-1, 63,0);
        tracep->declBit(c+216,"top pc_ready", false,-1);
        tracep->declBit(c+217,"top pc_valid", false,-1);
        tracep->declBit(c+218,"top if_ready", false,-1);
        tracep->declBit(c+219,"top if_valid", false,-1);
        tracep->declQuad(c+220,"top ID_pc", false,-1, 63,0);
        tracep->declBus(c+222,"top ID_instr", false,-1, 31,0);
        tracep->declBit(c+735,"top nop", false,-1);
        tracep->declQuad(c+220,"top id_pc", false,-1, 63,0);
        tracep->declBus(c+222,"top id_instr", false,-1, 31,0);
        tracep->declBit(c+223,"top id_w_ena", false,-1);
        tracep->declBus(c+224,"top id_w_addr", false,-1, 4,0);
        tracep->declQuad(c+736,"top id_data1", false,-1, 63,0);
        tracep->declQuad(c+738,"top id_data2", false,-1, 63,0);
        tracep->declBit(c+225,"top id_mem_ena", false,-1);
        tracep->declBit(c+226,"top id_mem_wr", false,-1);
        tracep->declQuad(c+227,"top id_imm", false,-1, 63,0);
        tracep->declBus(c+229,"top id_exop", false,-1, 2,0);
        tracep->declBus(c+230,"top id_aluop", false,-1, 4,0);
        tracep->declBus(c+231,"top id_memwop", false,-1, 2,0);
        tracep->declBus(c+232,"top id_memrop", false,-1, 2,0);
        tracep->declBit(c+233,"top id_ready", false,-1);
        tracep->declBit(c+234,"top id_valid", false,-1);
        tracep->declBit(c+235,"top EX_w_ena", false,-1);
        tracep->declBus(c+236,"top EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+237,"top EX_data1", false,-1, 63,0);
        tracep->declQuad(c+239,"top EX_data2", false,-1, 63,0);
        tracep->declQuad(c+241,"top EX_imm", false,-1, 63,0);
        tracep->declBus(c+243,"top EX_exop", false,-1, 2,0);
        tracep->declBus(c+244,"top EX_aluop", false,-1, 4,0);
        tracep->declBus(c+245,"top EX_memwop", false,-1, 2,0);
        tracep->declBus(c+246,"top EX_memrop", false,-1, 2,0);
        tracep->declBit(c+247,"top EX_mem_ena", false,-1);
        tracep->declBit(c+248,"top EX_mem_wr", false,-1);
        tracep->declBus(c+249,"top EX_instr", false,-1, 31,0);
        tracep->declQuad(c+250,"top EX_pc", false,-1, 63,0);
        tracep->declBit(c+235,"top ex_w_ena", false,-1);
        tracep->declBus(c+236,"top ex_w_addr", false,-1, 4,0);
        tracep->declQuad(c+252,"top ex_w_data", false,-1, 63,0);
        tracep->declBus(c+245,"top ex_memwop", false,-1, 2,0);
        tracep->declBus(c+246,"top ex_memrop", false,-1, 2,0);
        tracep->declBit(c+247,"top ex_mem_ena", false,-1);
        tracep->declBit(c+248,"top ex_mem_wr", false,-1);
        tracep->declQuad(c+254,"top ex_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+239,"top ex_mem_data", false,-1, 63,0);
        tracep->declBus(c+249,"top ex_instr", false,-1, 31,0);
        tracep->declQuad(c+250,"top ex_pc", false,-1, 63,0);
        tracep->declBit(c+256,"top ex_ready", false,-1);
        tracep->declBit(c+257,"top ex_valid", false,-1);
        tracep->declBit(c+258,"top MEM_w_ena", false,-1);
        tracep->declBus(c+259,"top MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+260,"top MEM_w_data", false,-1, 63,0);
        tracep->declBus(c+262,"top MEM_memwop", false,-1, 2,0);
        tracep->declBus(c+263,"top MEM_memrop", false,-1, 2,0);
        tracep->declBit(c+264,"top MEM_mem_ena", false,-1);
        tracep->declBit(c+265,"top MEM_mem_wr", false,-1);
        tracep->declQuad(c+266,"top MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+268,"top MEM_mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+270,"top MEM_instr", false,-1, 31,0);
        tracep->declQuad(c+271,"top MEM_pc", false,-1, 63,0);
        tracep->declBit(c+258,"top mem_w_ena", false,-1);
        tracep->declBus(c+259,"top mem_w_addr", false,-1, 4,0);
        tracep->declQuad(c+958,"top mem_w_data", false,-1, 63,0);
        tracep->declQuad(c+271,"top mem_pc", false,-1, 63,0);
        tracep->declBus(c+270,"top mem_instr", false,-1, 31,0);
        tracep->declBit(c+273,"top mem_ready", false,-1);
        tracep->declBit(c+274,"top mem_valid", false,-1);
        tracep->declBit(c+275,"top WB_w_ena", false,-1);
        tracep->declBus(c+276,"top WB_w_addr", false,-1, 4,0);
        tracep->declQuad(c+277,"top WB_w_data", false,-1, 63,0);
        tracep->declQuad(c+279,"top WB_pc", false,-1, 63,0);
        tracep->declBus(c+281,"top WB_instr", false,-1, 31,0);
        tracep->declBit(c+275,"top wb_w_ena", false,-1);
        tracep->declBus(c+276,"top wb_w_addr", false,-1, 4,0);
        tracep->declQuad(c+277,"top wb_w_data", false,-1, 63,0);
        tracep->declBit(c+939,"top ysyx_22040931_IF reset", false,-1);
        tracep->declBit(c+940,"top ysyx_22040931_IF clock", false,-1);
        tracep->declBit(c+968,"top ysyx_22040931_IF flush", false,-1);
        tracep->declBit(c+969,"top ysyx_22040931_IF stall", false,-1);
        tracep->declBit(c+218,"top ysyx_22040931_IF if_ready", false,-1);
        tracep->declBit(c+216,"top ysyx_22040931_IF pc_ready", false,-1);
        tracep->declBit(c+217,"top ysyx_22040931_IF pc_valid", false,-1);
        tracep->declBit(c+732,"top ysyx_22040931_IF mux_pc", false,-1);
        tracep->declQuad(c+733,"top ysyx_22040931_IF branch", false,-1, 63,0);
        tracep->declBit(c+944,"top ysyx_22040931_IF fetch_enb", false,-1);
        tracep->declQuad(c+945,"top ysyx_22040931_IF if_pc", false,-1, 63,0);
        tracep->declBit(c+282,"top ysyx_22040931_IF pc_now_valid", false,-1);
        tracep->declBit(c+970,"top ysyx_22040931_IF pc_go", false,-1);
        tracep->declQuad(c+960,"top ysyx_22040931_IF pc_i", false,-1, 63,0);
        tracep->declBit(c+939,"top ysyx_22040931_IF ysyx_22040931_PC reset", false,-1);
        tracep->declBit(c+940,"top ysyx_22040931_IF ysyx_22040931_PC clock", false,-1);
        tracep->declBit(c+216,"top ysyx_22040931_IF ysyx_22040931_PC pc_ready", false,-1);
        tracep->declQuad(c+960,"top ysyx_22040931_IF ysyx_22040931_PC pc_i", false,-1, 63,0);
        tracep->declBit(c+944,"top ysyx_22040931_IF ysyx_22040931_PC fetch_enb", false,-1);
        tracep->declQuad(c+945,"top ysyx_22040931_IF ysyx_22040931_PC pc_o", false,-1, 63,0);
        tracep->declBit(c+939,"top if_id reset", false,-1);
        tracep->declBit(c+940,"top if_id clock", false,-1);
        tracep->declBit(c+971,"top if_id flush", false,-1);
        tracep->declBit(c+972,"top if_id stall", false,-1);
        tracep->declBit(c+735,"top if_id nop", false,-1);
        tracep->declBit(c+217,"top if_id pc_valid", false,-1);
        tracep->declBit(c+233,"top if_id id_ready", false,-1);
        tracep->declBit(c+218,"top if_id if_ready", false,-1);
        tracep->declBit(c+219,"top if_id if_valid", false,-1);
        tracep->declQuad(c+945,"top if_id IF_pc", false,-1, 63,0);
        tracep->declBus(c+941,"top if_id IF_instr", false,-1, 31,0);
        tracep->declQuad(c+220,"top if_id ID_pc", false,-1, 63,0);
        tracep->declBus(c+222,"top if_id ID_instr", false,-1, 31,0);
        tracep->declBit(c+219,"top if_id if_now_valid", false,-1);
        tracep->declBit(c+973,"top if_id if_go", false,-1);
        tracep->declBit(c+939,"top ysyx_22040931_ID reset", false,-1);
        tracep->declBit(c+940,"top ysyx_22040931_ID clock", false,-1);
        tracep->declBit(c+275,"top ysyx_22040931_ID w_ena_i", false,-1);
        tracep->declBus(c+276,"top ysyx_22040931_ID w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+277,"top ysyx_22040931_ID w_data_i", false,-1, 63,0);
        tracep->declQuad(c+220,"top ysyx_22040931_ID pc_i", false,-1, 63,0);
        tracep->declBus(c+222,"top ysyx_22040931_ID instr", false,-1, 31,0);
        tracep->declBit(c+235,"top ysyx_22040931_ID ex_w_ena", false,-1);
        tracep->declBus(c+236,"top ysyx_22040931_ID ex_w_addr", false,-1, 4,0);
        tracep->declQuad(c+252,"top ysyx_22040931_ID ex_w_data", false,-1, 63,0);
        tracep->declBit(c+258,"top ysyx_22040931_ID mem_w_ena", false,-1);
        tracep->declBus(c+259,"top ysyx_22040931_ID mem_w_addr", false,-1, 4,0);
        tracep->declQuad(c+260,"top ysyx_22040931_ID mem_w_data", false,-1, 63,0);
        tracep->declBit(c+247,"top ysyx_22040931_ID ex_mem_ena", false,-1);
        tracep->declBit(c+247,"top ysyx_22040931_ID ex_mem_wr", false,-1);
        tracep->declBit(c+735,"top ysyx_22040931_ID nop", false,-1);
        tracep->declQuad(c+220,"top ysyx_22040931_ID pc_o", false,-1, 63,0);
        tracep->declBus(c+222,"top ysyx_22040931_ID instr_o", false,-1, 31,0);
        tracep->declQuad(c+733,"top ysyx_22040931_ID branch", false,-1, 63,0);
        tracep->declBit(c+732,"top ysyx_22040931_ID mux_pc", false,-1);
        tracep->declBit(c+223,"top ysyx_22040931_ID w_ena", false,-1);
        tracep->declBus(c+224,"top ysyx_22040931_ID w_addr", false,-1, 4,0);
        tracep->declQuad(c+736,"top ysyx_22040931_ID data1", false,-1, 63,0);
        tracep->declQuad(c+738,"top ysyx_22040931_ID data2", false,-1, 63,0);
        tracep->declBit(c+225,"top ysyx_22040931_ID mem_ena", false,-1);
        tracep->declBit(c+226,"top ysyx_22040931_ID mem_wr", false,-1);
        tracep->declQuad(c+227,"top ysyx_22040931_ID imm", false,-1, 63,0);
        tracep->declBus(c+229,"top ysyx_22040931_ID exop", false,-1, 2,0);
        tracep->declBus(c+230,"top ysyx_22040931_ID aluop", false,-1, 4,0);
        tracep->declBus(c+231,"top ysyx_22040931_ID memwop", false,-1, 2,0);
        tracep->declBus(c+232,"top ysyx_22040931_ID memrop", false,-1, 2,0);
        tracep->declBit(c+283,"top ysyx_22040931_ID load_stall", false,-1);
        tracep->declBus(c+284,"top ysyx_22040931_ID ztype", false,-1, 2,0);
        tracep->declBit(c+285,"top ysyx_22040931_ID r_ena1", false,-1);
        tracep->declBus(c+286,"top ysyx_22040931_ID r_addr1", false,-1, 4,0);
        tracep->declQuad(c+962,"top ysyx_22040931_ID r_data1", false,-1, 63,0);
        tracep->declBit(c+287,"top ysyx_22040931_ID r_ena2", false,-1);
        tracep->declBus(c+288,"top ysyx_22040931_ID r_addr2", false,-1, 4,0);
        tracep->declQuad(c+964,"top ysyx_22040931_ID r_data2", false,-1, 63,0);
        tracep->declQuad(c+966,"top ysyx_22040931_ID ibranch", false,-1, 63,0);
        tracep->declQuad(c+289,"top ysyx_22040931_ID bbranch", false,-1, 63,0);
        tracep->declQuad(c+289,"top ysyx_22040931_ID jbranch", false,-1, 63,0);
        tracep->declBit(c+291,"top ysyx_22040931_ID need_ex1", false,-1);
        tracep->declBit(c+292,"top ysyx_22040931_ID need_ex2", false,-1);
        tracep->declBit(c+293,"top ysyx_22040931_ID need_mem1", false,-1);
        tracep->declBit(c+294,"top ysyx_22040931_ID need_mem2", false,-1);
        tracep->declBus(c+974,"top ysyx_22040931_ID branch_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID branch_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_ID branch_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+733,"top ysyx_22040931_ID branch_mux out", false,-1, 63,0);
        tracep->declBus(c+284,"top ysyx_22040931_ID branch_mux key", false,-1, 2,0);
        tracep->declQuad(c+976,"top ysyx_22040931_ID branch_mux default_out", false,-1, 63,0);
        tracep->declArray(c+740,"top ysyx_22040931_ID branch_mux lut", false,-1, 200,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID branch_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID branch_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_ID branch_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID branch_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+733,"top ysyx_22040931_ID branch_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+284,"top ysyx_22040931_ID branch_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+976,"top ysyx_22040931_ID branch_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+740,"top ysyx_22040931_ID branch_mux i1 lut", false,-1, 200,0);
        tracep->declBus(c+979,"top ysyx_22040931_ID branch_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+747+i*3,"top ysyx_22040931_ID branch_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+756+i*1,"top ysyx_22040931_ID branch_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+759+i*2,"top ysyx_22040931_ID branch_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+765,"top ysyx_22040931_ID branch_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+767,"top ysyx_22040931_ID branch_mux i1 hit", false,-1);
        tracep->declBus(c+980,"top ysyx_22040931_ID branch_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+222,"top ysyx_22040931_ID ysyx_22040931_Decoder instr", false,-1, 31,0);
        tracep->declQuad(c+736,"top ysyx_22040931_ID ysyx_22040931_Decoder r_data1", false,-1, 63,0);
        tracep->declQuad(c+738,"top ysyx_22040931_ID ysyx_22040931_Decoder r_data2", false,-1, 63,0);
        tracep->declBit(c+223,"top ysyx_22040931_ID ysyx_22040931_Decoder w_ena", false,-1);
        tracep->declBus(c+224,"top ysyx_22040931_ID ysyx_22040931_Decoder w_addr", false,-1, 4,0);
        tracep->declBit(c+285,"top ysyx_22040931_ID ysyx_22040931_Decoder r_ena1", false,-1);
        tracep->declBus(c+286,"top ysyx_22040931_ID ysyx_22040931_Decoder r_addr1", false,-1, 4,0);
        tracep->declBit(c+287,"top ysyx_22040931_ID ysyx_22040931_Decoder r_ena2", false,-1);
        tracep->declBus(c+288,"top ysyx_22040931_ID ysyx_22040931_Decoder r_addr2", false,-1, 4,0);
        tracep->declBit(c+225,"top ysyx_22040931_ID ysyx_22040931_Decoder mem_ena", false,-1);
        tracep->declBit(c+226,"top ysyx_22040931_ID ysyx_22040931_Decoder mem_wr", false,-1);
        tracep->declBus(c+284,"top ysyx_22040931_ID ysyx_22040931_Decoder ztype", false,-1, 2,0);
        tracep->declBus(c+229,"top ysyx_22040931_ID ysyx_22040931_Decoder exop", false,-1, 2,0);
        tracep->declBus(c+230,"top ysyx_22040931_ID ysyx_22040931_Decoder aluop", false,-1, 4,0);
        tracep->declBus(c+231,"top ysyx_22040931_ID ysyx_22040931_Decoder memwop", false,-1, 2,0);
        tracep->declBus(c+232,"top ysyx_22040931_ID ysyx_22040931_Decoder memrop", false,-1, 2,0);
        tracep->declBit(c+732,"top ysyx_22040931_ID ysyx_22040931_Decoder jump", false,-1);
        tracep->declBit(c+295,"top ysyx_22040931_ID ysyx_22040931_Decoder itype", false,-1);
        tracep->declBit(c+296,"top ysyx_22040931_ID ysyx_22040931_Decoder stype", false,-1);
        tracep->declBit(c+297,"top ysyx_22040931_ID ysyx_22040931_Decoder utype", false,-1);
        tracep->declBit(c+298,"top ysyx_22040931_ID ysyx_22040931_Decoder rtype", false,-1);
        tracep->declBit(c+299,"top ysyx_22040931_ID ysyx_22040931_Decoder jtype", false,-1);
        tracep->declBit(c+300,"top ysyx_22040931_ID ysyx_22040931_Decoder btype", false,-1);
        tracep->declBus(c+301,"top ysyx_22040931_ID ysyx_22040931_Decoder r_exop", false,-1, 2,0);
        tracep->declBus(c+302,"top ysyx_22040931_ID ysyx_22040931_Decoder i_exop", false,-1, 2,0);
        tracep->declBus(c+303,"top ysyx_22040931_ID ysyx_22040931_Decoder s_exop", false,-1, 2,0);
        tracep->declBus(c+304,"top ysyx_22040931_ID ysyx_22040931_Decoder u_exop", false,-1, 2,0);
        tracep->declBus(c+305,"top ysyx_22040931_ID ysyx_22040931_Decoder j_exop", false,-1, 2,0);
        tracep->declBus(c+306,"top ysyx_22040931_ID ysyx_22040931_Decoder b_exop", false,-1, 2,0);
        tracep->declBus(c+307,"top ysyx_22040931_ID ysyx_22040931_Decoder r_aluop", false,-1, 4,0);
        tracep->declBus(c+308,"top ysyx_22040931_ID ysyx_22040931_Decoder i_aluop", false,-1, 4,0);
        tracep->declBus(c+309,"top ysyx_22040931_ID ysyx_22040931_Decoder s_aluop", false,-1, 4,0);
        tracep->declBus(c+310,"top ysyx_22040931_ID ysyx_22040931_Decoder u_aluop", false,-1, 4,0);
        tracep->declBus(c+311,"top ysyx_22040931_ID ysyx_22040931_Decoder j_aluop", false,-1, 4,0);
        tracep->declBus(c+312,"top ysyx_22040931_ID ysyx_22040931_Decoder b_aluop", false,-1, 4,0);
        tracep->declBit(c+313,"top ysyx_22040931_ID ysyx_22040931_Decoder ijump", false,-1);
        tracep->declBit(c+768,"top ysyx_22040931_ID ysyx_22040931_Decoder bjump", false,-1);
        tracep->declBit(c+314,"top ysyx_22040931_ID ysyx_22040931_Decoder jjump", false,-1);
        tracep->declBus(c+981,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+982,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+315,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux out", false,-1, 10,0);
        tracep->declBus(c+284,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux key", false,-1, 2,0);
        tracep->declBus(c+983,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux default_out", false,-1, 10,0);
        tracep->declArray(c+316,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux lut", false,-1, 83,0);
        tracep->declBus(c+981,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+982,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+315,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 out", false,-1, 10,0);
        tracep->declBus(c+284,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+983,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 default_out", false,-1, 10,0);
        tracep->declArray(c+316,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 lut", false,-1, 83,0);
        tracep->declBus(c+984,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+319+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 pair_list", true,(i+0), 13,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+325+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+331+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 data_list", true,(i+0), 10,0);}}
        tracep->declBus(c+337,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 lut_out", false,-1, 10,0);
        tracep->declBit(c+338,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 hit", false,-1);
        tracep->declBus(c+985,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+732,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux out", false,-1, 0,0);
        tracep->declBus(c+284,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux key", false,-1, 2,0);
        tracep->declBus(c+986,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux default_out", false,-1, 0,0);
        tracep->declBus(c+769,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux lut", false,-1, 11,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+732,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 out", false,-1, 0,0);
        tracep->declBus(c+284,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+986,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 default_out", false,-1, 0,0);
        tracep->declBus(c+769,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 lut", false,-1, 11,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+770+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+773+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+776+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+779,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 lut_out", false,-1, 0,0);
        tracep->declBit(c+780,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 hit", false,-1);
        tracep->declBus(c+980,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode", false,-1, 6,0);
        tracep->declBus(c+340,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode_3", false,-1, 2,0);
        tracep->declBus(c+341,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode_7", false,-1, 6,0);
        tracep->declBus(c+307,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype aluop", false,-1, 4,0);
        tracep->declBus(c+301,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype exop", false,-1, 2,0);
        tracep->declBit(c+298,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype rtype", false,-1);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype out", false,-1, 8,0);
        tracep->declBus(c+343,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype chose", false,-1, 16,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+990,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype out", false,-1, 8,0);
        tracep->declBus(c+343,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype key", false,-1, 16,0);
        tracep->declBus(c+991,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype default_out", false,-1, 8,0);
        tracep->declArray(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype lut", false,-1, 727,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+990,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 out", false,-1, 8,0);
        tracep->declBus(c+343,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 key", false,-1, 16,0);
        tracep->declBus(c+991,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 default_out", false,-1, 8,0);
        tracep->declArray(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 lut", false,-1, 727,0);
        tracep->declBus(c+1015,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+1+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 pair_list", true,(i+0), 25,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+29+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+57+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+344,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+345,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 hit", false,-1);
        tracep->declBus(c+1016,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 i", false,-1, 31,0);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode", false,-1, 6,0);
        tracep->declBus(c+340,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_3", false,-1, 2,0);
        tracep->declBit(c+346,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_1", false,-1);
        tracep->declBus(c+341,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_7", false,-1, 6,0);
        tracep->declBit(c+313,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype jump", false,-1);
        tracep->declBus(c+232,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype memrop", false,-1, 2,0);
        tracep->declBus(c+308,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype aluop", false,-1, 4,0);
        tracep->declBus(c+302,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype exop", false,-1, 2,0);
        tracep->declBit(c+295,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype itype", false,-1);
        tracep->declBus(c+347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out", false,-1, 12,0);
        tracep->declBus(c+348,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out1", false,-1, 12,0);
        tracep->declBus(c+349,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out2", false,-1, 11,0);
        tracep->declBus(c+350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out3", false,-1, 11,0);
        tracep->declBus(c+351,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out4", false,-1, 11,0);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose1", false,-1, 9,0);
        tracep->declBus(c+353,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose2", false,-1, 15,0);
        tracep->declBus(c+354,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose3", false,-1, 16,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose4", false,-1, 17,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1017,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype out", false,-1, 12,0);
        tracep->declBus(c+356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype key", false,-1, 3,0);
        tracep->declBus(c+1018,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype default_out", false,-1, 12,0);
        tracep->declArray(c+357,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype lut", false,-1, 67,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1017,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 out", false,-1, 12,0);
        tracep->declBus(c+356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 key", false,-1, 3,0);
        tracep->declBus(c+1018,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 default_out", false,-1, 12,0);
        tracep->declArray(c+357,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 lut", false,-1, 67,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+360+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+364+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+368+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 data_list", true,(i+0), 12,0);}}
        tracep->declBus(c+372,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 lut_out", false,-1, 12,0);
        tracep->declBit(c+373,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 hit", false,-1);
        tracep->declBus(c+1019,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 i", false,-1, 31,0);
        tracep->declBus(c+1017,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1020,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1017,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+348,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 out", false,-1, 12,0);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 key", false,-1, 9,0);
        tracep->declBus(c+1018,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 default_out", false,-1, 12,0);
        tracep->declArray(c+1021,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 lut", false,-1, 298,0);
        tracep->declBus(c+1017,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1020,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1017,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+348,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 out", false,-1, 12,0);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 key", false,-1, 9,0);
        tracep->declBus(c+1018,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 default_out", false,-1, 12,0);
        tracep->declArray(c+1021,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 lut", false,-1, 298,0);
        tracep->declBus(c+1031,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+85+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 pair_list", true,(i+0), 22,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+98+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+111+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 data_list", true,(i+0), 12,0);}}
        tracep->declBus(c+374,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 lut_out", false,-1, 12,0);
        tracep->declBit(c+375,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 hit", false,-1);
        tracep->declBus(c+1032,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 i", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1033,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+349,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 out", false,-1, 11,0);
        tracep->declBus(c+353,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 key", false,-1, 15,0);
        tracep->declBus(c+1035,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 default_out", false,-1, 11,0);
        tracep->declArray(c+1036,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 lut", false,-1, 83,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1033,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+349,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 out", false,-1, 11,0);
        tracep->declBus(c+353,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 key", false,-1, 15,0);
        tracep->declBus(c+1035,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1036,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 lut", false,-1, 83,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+124+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+127+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 key_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+130+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+376,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+377,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 hit", false,-1);
        tracep->declBus(c+980,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 i", false,-1, 31,0);
        tracep->declBus(c+1039,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 out", false,-1, 11,0);
        tracep->declBus(c+354,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 key", false,-1, 16,0);
        tracep->declBus(c+1035,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 default_out", false,-1, 11,0);
        tracep->declArray(c+1040,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 lut", false,-1, 144,0);
        tracep->declBus(c+1039,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 out", false,-1, 11,0);
        tracep->declBus(c+354,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 key", false,-1, 16,0);
        tracep->declBus(c+1035,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1040,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 lut", false,-1, 144,0);
        tracep->declBus(c+1045,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+133+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 pair_list", true,(i+0), 28,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+138+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+143+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+378,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+379,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 hit", false,-1);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 i", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1048,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+351,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 out", false,-1, 11,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 key", false,-1, 17,0);
        tracep->declBus(c+1035,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 default_out", false,-1, 11,0);
        tracep->declQuad(c+1049,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 lut", false,-1, 59,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1048,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+351,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 out", false,-1, 11,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 key", false,-1, 17,0);
        tracep->declBus(c+1035,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 default_out", false,-1, 11,0);
        tracep->declQuad(c+1049,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 lut", false,-1, 59,0);
        tracep->declBus(c+1051,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+148+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 pair_list", true,(i+0), 29,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+150+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 key_list", true,(i+0), 17,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+152+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+380,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+381,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 hit", false,-1);
        tracep->declBus(c+1052,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 i", false,-1, 31,0);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype opcode", false,-1, 6,0);
        tracep->declBus(c+340,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype opcode_3", false,-1, 2,0);
        tracep->declBus(c+231,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype memwop", false,-1, 2,0);
        tracep->declBus(c+309,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype aluop", false,-1, 4,0);
        tracep->declBus(c+303,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype exop", false,-1, 2,0);
        tracep->declBit(c+296,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype stype", false,-1);
        tracep->declBus(c+382,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype out", false,-1, 11,0);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype chose", false,-1, 9,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1020,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+382,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype out", false,-1, 11,0);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype key", false,-1, 9,0);
        tracep->declBus(c+1035,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype default_out", false,-1, 11,0);
        tracep->declArray(c+1053,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype lut", false,-1, 87,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1020,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+382,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 out", false,-1, 11,0);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 key", false,-1, 9,0);
        tracep->declBus(c+1035,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1053,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 lut", false,-1, 87,0);
        tracep->declBus(c+1056,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+154+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 pair_list", true,(i+0), 21,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+158+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+162+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+383,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+384,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 hit", false,-1);
        tracep->declBus(c+1019,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 i", false,-1, 31,0);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype opcode", false,-1, 6,0);
        tracep->declBus(c+340,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype opcode_3", false,-1, 2,0);
        tracep->declQuad(c+736,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype r_data1", false,-1, 63,0);
        tracep->declQuad(c+738,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype r_data2", false,-1, 63,0);
        tracep->declBit(c+768,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype jump", false,-1);
        tracep->declBus(c+312,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype aluop", false,-1, 4,0);
        tracep->declBus(c+306,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype exop", false,-1, 2,0);
        tracep->declBit(c+300,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype btype", false,-1);
        tracep->declBus(c+385,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype chose", false,-1, 9,0);
        tracep->declBus(c+386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype out", false,-1, 8,0);
        tracep->declBus(c+781,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype jumpb", false,-1, 2,0);
        tracep->declBus(c+981,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1020,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+768,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b out", false,-1, 0,0);
        tracep->declBus(c+385,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b key", false,-1, 9,0);
        tracep->declBus(c+986,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b default_out", false,-1, 0,0);
        tracep->declArray(c+782,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b lut", false,-1, 65,0);
        tracep->declBus(c+981,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1020,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+768,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 out", false,-1, 0,0);
        tracep->declBus(c+385,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 key", false,-1, 9,0);
        tracep->declBus(c+986,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 default_out", false,-1, 0,0);
        tracep->declArray(c+782,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 lut", false,-1, 65,0);
        tracep->declBus(c+982,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+785+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+791+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+797+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+803,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 lut_out", false,-1, 0,0);
        tracep->declBit(c+804,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 hit", false,-1);
        tracep->declBus(c+985,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 i", false,-1, 31,0);
        tracep->declBus(c+981,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1020,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+990,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype out", false,-1, 8,0);
        tracep->declBus(c+385,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype key", false,-1, 9,0);
        tracep->declBus(c+991,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype default_out", false,-1, 8,0);
        tracep->declArray(c+1057,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype lut", false,-1, 113,0);
        tracep->declBus(c+981,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1020,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+990,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 out", false,-1, 8,0);
        tracep->declBus(c+385,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 key", false,-1, 9,0);
        tracep->declBus(c+991,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 default_out", false,-1, 8,0);
        tracep->declArray(c+1057,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 lut", false,-1, 113,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+166+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 pair_list", true,(i+0), 18,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+172+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+178+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+387,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+388,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 hit", false,-1);
        tracep->declBus(c+985,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 i", false,-1, 31,0);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype opcode", false,-1, 6,0);
        tracep->declBit(c+314,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype jump", false,-1);
        tracep->declBus(c+311,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype aluop", false,-1, 4,0);
        tracep->declBus(c+305,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype exop", false,-1, 2,0);
        tracep->declBit(c+299,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype jtype", false,-1);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype chose", false,-1, 6,0);
        tracep->declBus(c+389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype out", false,-1, 9,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1020,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype out", false,-1, 9,0);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype key", false,-1, 6,0);
        tracep->declBus(c+1063,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype default_out", false,-1, 9,0);
        tracep->declBus(c+1064,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype lut", false,-1, 16,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1020,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 out", false,-1, 9,0);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 key", false,-1, 6,0);
        tracep->declBus(c+1063,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 default_out", false,-1, 9,0);
        tracep->declBus(c+1064,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 lut", false,-1, 16,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+184+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+185+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+186+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 data_list", true,(i+0), 9,0);}}
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 lut_out", false,-1, 9,0);
        tracep->declBit(c+391,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 hit", false,-1);
        tracep->declBus(c+1065,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 i", false,-1, 31,0);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype opcode", false,-1, 6,0);
        tracep->declBus(c+310,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype aluop", false,-1, 4,0);
        tracep->declBus(c+304,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype exop", false,-1, 2,0);
        tracep->declBit(c+297,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype utype", false,-1);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype chose", false,-1, 6,0);
        tracep->declBus(c+392,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype out", false,-1, 8,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+990,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+392,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype out", false,-1, 8,0);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype key", false,-1, 6,0);
        tracep->declBus(c+991,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype default_out", false,-1, 8,0);
        tracep->declBus(c+1066,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype lut", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+990,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+392,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 out", false,-1, 8,0);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 key", false,-1, 6,0);
        tracep->declBus(c+991,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 default_out", false,-1, 8,0);
        tracep->declBus(c+1066,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 lut", false,-1, 31,0);
        tracep->declBus(c+1033,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+187+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 pair_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+189+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+191+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+393,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+394,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 hit", false,-1);
        tracep->declBus(c+1052,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 i", false,-1, 31,0);
        tracep->declBus(c+395,"top ysyx_22040931_ID ysyx_22040931_IMM instr", false,-1, 24,0);
        tracep->declBus(c+284,"top ysyx_22040931_ID ysyx_22040931_IMM opt", false,-1, 2,0);
        tracep->declQuad(c+227,"top ysyx_22040931_ID ysyx_22040931_IMM imm", false,-1, 63,0);
        tracep->declBus(c+1039,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+227,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux out", false,-1, 63,0);
        tracep->declBus(c+284,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux key", false,-1, 2,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux default_out", false,-1, 63,0);
        tracep->declArray(c+396,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux lut", false,-1, 334,0);
        tracep->declBus(c+1039,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+227,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+284,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+396,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 lut", false,-1, 334,0);
        tracep->declBus(c+979,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+407+i*3,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+422+i*1,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+427+i*2,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+437,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+439,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 hit", false,-1);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+939,"top ysyx_22040931_ID ysyx_22040931_Regfile reset", false,-1);
        tracep->declBit(c+940,"top ysyx_22040931_ID ysyx_22040931_Regfile clock", false,-1);
        tracep->declBit(c+275,"top ysyx_22040931_ID ysyx_22040931_Regfile w_ena", false,-1);
        tracep->declBus(c+276,"top ysyx_22040931_ID ysyx_22040931_Regfile w_addr", false,-1, 4,0);
        tracep->declQuad(c+277,"top ysyx_22040931_ID ysyx_22040931_Regfile w_data", false,-1, 63,0);
        tracep->declBit(c+285,"top ysyx_22040931_ID ysyx_22040931_Regfile r_ena1", false,-1);
        tracep->declBus(c+286,"top ysyx_22040931_ID ysyx_22040931_Regfile r_addr1", false,-1, 4,0);
        tracep->declQuad(c+962,"top ysyx_22040931_ID ysyx_22040931_Regfile r_data1", false,-1, 63,0);
        tracep->declBit(c+287,"top ysyx_22040931_ID ysyx_22040931_Regfile r_ena2", false,-1);
        tracep->declBus(c+288,"top ysyx_22040931_ID ysyx_22040931_Regfile r_addr2", false,-1, 4,0);
        tracep->declQuad(c+964,"top ysyx_22040931_ID ysyx_22040931_Regfile r_data2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+440+i*2,"top ysyx_22040931_ID ysyx_22040931_Regfile regs", true,(i+0), 63,0);}}
        tracep->declBus(c+504,"top ysyx_22040931_ID ysyx_22040931_Regfile i", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID reg_data1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID reg_data1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_ID reg_data1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+736,"top ysyx_22040931_ID reg_data1 out", false,-1, 63,0);
        tracep->declBus(c+505,"top ysyx_22040931_ID reg_data1 key", false,-1, 3,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_ID reg_data1 default_out", false,-1, 63,0);
        tracep->declArray(c+805,"top ysyx_22040931_ID reg_data1 lut", false,-1, 271,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID reg_data1 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID reg_data1 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_ID reg_data1 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID reg_data1 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+736,"top ysyx_22040931_ID reg_data1 i1 out", false,-1, 63,0);
        tracep->declBus(c+505,"top ysyx_22040931_ID reg_data1 i1 key", false,-1, 3,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_ID reg_data1 i1 default_out", false,-1, 63,0);
        tracep->declArray(c+805,"top ysyx_22040931_ID reg_data1 i1 lut", false,-1, 271,0);
        tracep->declBus(c+1069,"top ysyx_22040931_ID reg_data1 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+814+i*3,"top ysyx_22040931_ID reg_data1 i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+826+i*1,"top ysyx_22040931_ID reg_data1 i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+830+i*2,"top ysyx_22040931_ID reg_data1 i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+838,"top ysyx_22040931_ID reg_data1 i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+840,"top ysyx_22040931_ID reg_data1 i1 hit", false,-1);
        tracep->declBus(c+1019,"top ysyx_22040931_ID reg_data1 i1 i", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID reg_data2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID reg_data2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_ID reg_data2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+738,"top ysyx_22040931_ID reg_data2 out", false,-1, 63,0);
        tracep->declBus(c+506,"top ysyx_22040931_ID reg_data2 key", false,-1, 3,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_ID reg_data2 default_out", false,-1, 63,0);
        tracep->declArray(c+841,"top ysyx_22040931_ID reg_data2 lut", false,-1, 271,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID reg_data2 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_ID reg_data2 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_ID reg_data2 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_ID reg_data2 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+738,"top ysyx_22040931_ID reg_data2 i1 out", false,-1, 63,0);
        tracep->declBus(c+506,"top ysyx_22040931_ID reg_data2 i1 key", false,-1, 3,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_ID reg_data2 i1 default_out", false,-1, 63,0);
        tracep->declArray(c+841,"top ysyx_22040931_ID reg_data2 i1 lut", false,-1, 271,0);
        tracep->declBus(c+1069,"top ysyx_22040931_ID reg_data2 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+850+i*3,"top ysyx_22040931_ID reg_data2 i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+862+i*1,"top ysyx_22040931_ID reg_data2 i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+866+i*2,"top ysyx_22040931_ID reg_data2 i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+874,"top ysyx_22040931_ID reg_data2 i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+876,"top ysyx_22040931_ID reg_data2 i1 hit", false,-1);
        tracep->declBus(c+1019,"top ysyx_22040931_ID reg_data2 i1 i", false,-1, 31,0);
        tracep->declBit(c+939,"top id_ex reset", false,-1);
        tracep->declBit(c+940,"top id_ex clock", false,-1);
        tracep->declBit(c+1070,"top id_ex flush", false,-1);
        tracep->declBit(c+1071,"top id_ex stall", false,-1);
        tracep->declBit(c+219,"top id_ex if_valid", false,-1);
        tracep->declBit(c+256,"top id_ex ex_ready", false,-1);
        tracep->declBit(c+233,"top id_ex id_ready", false,-1);
        tracep->declBit(c+234,"top id_ex id_valid", false,-1);
        tracep->declQuad(c+220,"top id_ex ID_pc", false,-1, 63,0);
        tracep->declBus(c+222,"top id_ex ID_instr", false,-1, 31,0);
        tracep->declBit(c+223,"top id_ex ID_w_ena", false,-1);
        tracep->declBus(c+224,"top id_ex ID_w_addr", false,-1, 4,0);
        tracep->declQuad(c+736,"top id_ex ID_data1", false,-1, 63,0);
        tracep->declQuad(c+738,"top id_ex ID_data2", false,-1, 63,0);
        tracep->declQuad(c+227,"top id_ex ID_imm", false,-1, 63,0);
        tracep->declBus(c+229,"top id_ex ID_exop", false,-1, 2,0);
        tracep->declBus(c+230,"top id_ex ID_aluop", false,-1, 4,0);
        tracep->declBus(c+231,"top id_ex ID_memwop", false,-1, 2,0);
        tracep->declBus(c+232,"top id_ex ID_memrop", false,-1, 2,0);
        tracep->declBit(c+225,"top id_ex ID_mem_ena", false,-1);
        tracep->declBit(c+226,"top id_ex ID_mem_wr", false,-1);
        tracep->declBit(c+235,"top id_ex EX_w_ena", false,-1);
        tracep->declBus(c+236,"top id_ex EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+237,"top id_ex EX_data1", false,-1, 63,0);
        tracep->declQuad(c+239,"top id_ex EX_data2", false,-1, 63,0);
        tracep->declQuad(c+241,"top id_ex EX_imm", false,-1, 63,0);
        tracep->declBus(c+243,"top id_ex EX_exop", false,-1, 2,0);
        tracep->declBus(c+244,"top id_ex EX_aluop", false,-1, 4,0);
        tracep->declBus(c+245,"top id_ex EX_memwop", false,-1, 2,0);
        tracep->declBus(c+246,"top id_ex EX_memrop", false,-1, 2,0);
        tracep->declBit(c+247,"top id_ex EX_mem_ena", false,-1);
        tracep->declBit(c+248,"top id_ex EX_mem_wr", false,-1);
        tracep->declBus(c+249,"top id_ex EX_instr", false,-1, 31,0);
        tracep->declQuad(c+250,"top id_ex EX_pc", false,-1, 63,0);
        tracep->declBit(c+1072,"top id_ex id_go", false,-1);
        tracep->declBit(c+234,"top id_ex id_now_valid", false,-1);
        tracep->declBit(c+235,"top ysyx_22040931_EX w_ena_i", false,-1);
        tracep->declBus(c+236,"top ysyx_22040931_EX w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+250,"top ysyx_22040931_EX pc_i", false,-1, 63,0);
        tracep->declBus(c+249,"top ysyx_22040931_EX instr", false,-1, 31,0);
        tracep->declQuad(c+237,"top ysyx_22040931_EX data1", false,-1, 63,0);
        tracep->declQuad(c+239,"top ysyx_22040931_EX data2", false,-1, 63,0);
        tracep->declQuad(c+241,"top ysyx_22040931_EX imm", false,-1, 63,0);
        tracep->declBus(c+243,"top ysyx_22040931_EX exop", false,-1, 2,0);
        tracep->declBus(c+244,"top ysyx_22040931_EX aluop", false,-1, 4,0);
        tracep->declBus(c+245,"top ysyx_22040931_EX memwop_i", false,-1, 2,0);
        tracep->declBus(c+246,"top ysyx_22040931_EX memrop_i", false,-1, 2,0);
        tracep->declBit(c+247,"top ysyx_22040931_EX mem_ena_i", false,-1);
        tracep->declBit(c+248,"top ysyx_22040931_EX mem_wr_i", false,-1);
        tracep->declBit(c+235,"top ysyx_22040931_EX w_ena", false,-1);
        tracep->declBus(c+236,"top ysyx_22040931_EX w_addr", false,-1, 4,0);
        tracep->declQuad(c+252,"top ysyx_22040931_EX w_data", false,-1, 63,0);
        tracep->declBus(c+245,"top ysyx_22040931_EX memwop", false,-1, 2,0);
        tracep->declBus(c+246,"top ysyx_22040931_EX memrop", false,-1, 2,0);
        tracep->declBit(c+247,"top ysyx_22040931_EX mem_ena", false,-1);
        tracep->declBit(c+248,"top ysyx_22040931_EX mem_wr", false,-1);
        tracep->declQuad(c+254,"top ysyx_22040931_EX mem_addr", false,-1, 63,0);
        tracep->declQuad(c+239,"top ysyx_22040931_EX mem_data", false,-1, 63,0);
        tracep->declBus(c+249,"top ysyx_22040931_EX instr_o", false,-1, 31,0);
        tracep->declQuad(c+250,"top ysyx_22040931_EX pc_o", false,-1, 63,0);
        tracep->declQuad(c+507,"top ysyx_22040931_EX result", false,-1, 63,0);
        tracep->declQuad(c+237,"top ysyx_22040931_EX ysyx_22040931_ALU num1", false,-1, 63,0);
        tracep->declQuad(c+239,"top ysyx_22040931_EX ysyx_22040931_ALU num2", false,-1, 63,0);
        tracep->declQuad(c+241,"top ysyx_22040931_EX ysyx_22040931_ALU imm", false,-1, 63,0);
        tracep->declQuad(c+250,"top ysyx_22040931_EX ysyx_22040931_ALU pc", false,-1, 63,0);
        tracep->declBus(c+244,"top ysyx_22040931_EX ysyx_22040931_ALU op", false,-1, 4,0);
        tracep->declQuad(c+507,"top ysyx_22040931_EX ysyx_22040931_ALU out", false,-1, 63,0);
        tracep->declQuad(c+237,"top ysyx_22040931_EX ysyx_22040931_ALU num1_s", false,-1, 63,0);
        tracep->declBus(c+509,"top ysyx_22040931_EX ysyx_22040931_ALU num1_sw", false,-1, 31,0);
        tracep->declQuad(c+239,"top ysyx_22040931_EX ysyx_22040931_ALU num2_s", false,-1, 63,0);
        tracep->declBus(c+510,"top ysyx_22040931_EX ysyx_22040931_ALU num2_sw", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_EX w_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_EX w_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_EX w_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+252,"top ysyx_22040931_EX w_data_mux out", false,-1, 63,0);
        tracep->declBus(c+243,"top ysyx_22040931_EX w_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_EX w_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+511,"top ysyx_22040931_EX w_data_mux lut", false,-1, 200,0);
        tracep->declBus(c+974,"top ysyx_22040931_EX w_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_EX w_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_EX w_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_EX w_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+252,"top ysyx_22040931_EX w_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+243,"top ysyx_22040931_EX w_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_EX w_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+511,"top ysyx_22040931_EX w_data_mux i1 lut", false,-1, 200,0);
        tracep->declBus(c+979,"top ysyx_22040931_EX w_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+518+i*3,"top ysyx_22040931_EX w_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+527+i*1,"top ysyx_22040931_EX w_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+530+i*2,"top ysyx_22040931_EX w_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+536,"top ysyx_22040931_EX w_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+538,"top ysyx_22040931_EX w_data_mux i1 hit", false,-1);
        tracep->declBus(c+980,"top ysyx_22040931_EX w_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_EX mem_addr_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_EX mem_addr_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_EX mem_addr_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+254,"top ysyx_22040931_EX mem_addr_mux out", false,-1, 63,0);
        tracep->declBus(c+243,"top ysyx_22040931_EX mem_addr_mux key", false,-1, 2,0);
        tracep->declQuad(c+976,"top ysyx_22040931_EX mem_addr_mux default_out", false,-1, 63,0);
        tracep->declArray(c+539,"top ysyx_22040931_EX mem_addr_mux lut", false,-1, 133,0);
        tracep->declBus(c+1047,"top ysyx_22040931_EX mem_addr_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_EX mem_addr_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_EX mem_addr_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_EX mem_addr_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+254,"top ysyx_22040931_EX mem_addr_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+243,"top ysyx_22040931_EX mem_addr_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+976,"top ysyx_22040931_EX mem_addr_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+539,"top ysyx_22040931_EX mem_addr_mux i1 lut", false,-1, 133,0);
        tracep->declBus(c+979,"top ysyx_22040931_EX mem_addr_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+544+i*3,"top ysyx_22040931_EX mem_addr_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+550+i*1,"top ysyx_22040931_EX mem_addr_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+552+i*2,"top ysyx_22040931_EX mem_addr_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+556,"top ysyx_22040931_EX mem_addr_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+558,"top ysyx_22040931_EX mem_addr_mux i1 hit", false,-1);
        tracep->declBus(c+1052,"top ysyx_22040931_EX mem_addr_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+939,"top ex_mem reset", false,-1);
        tracep->declBit(c+940,"top ex_mem clock", false,-1);
        tracep->declBit(c+1073,"top ex_mem flush", false,-1);
        tracep->declBit(c+1074,"top ex_mem stall", false,-1);
        tracep->declBit(c+234,"top ex_mem id_valid", false,-1);
        tracep->declBit(c+273,"top ex_mem mem_ready", false,-1);
        tracep->declBit(c+256,"top ex_mem ex_ready", false,-1);
        tracep->declBit(c+257,"top ex_mem ex_valid", false,-1);
        tracep->declQuad(c+250,"top ex_mem EX_pc", false,-1, 63,0);
        tracep->declBus(c+249,"top ex_mem EX_instr", false,-1, 31,0);
        tracep->declBit(c+235,"top ex_mem EX_w_ena", false,-1);
        tracep->declBus(c+236,"top ex_mem EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+252,"top ex_mem EX_w_data", false,-1, 63,0);
        tracep->declBus(c+245,"top ex_mem EX_memwop", false,-1, 2,0);
        tracep->declBus(c+246,"top ex_mem EX_memrop", false,-1, 2,0);
        tracep->declBit(c+247,"top ex_mem EX_mem_ena", false,-1);
        tracep->declBit(c+248,"top ex_mem EX_mem_wr", false,-1);
        tracep->declQuad(c+254,"top ex_mem EX_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+239,"top ex_mem EX_mem_data", false,-1, 63,0);
        tracep->declBit(c+258,"top ex_mem MEM_w_ena", false,-1);
        tracep->declBus(c+259,"top ex_mem MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+260,"top ex_mem MEM_w_data", false,-1, 63,0);
        tracep->declBus(c+262,"top ex_mem MEM_memwop", false,-1, 2,0);
        tracep->declBus(c+263,"top ex_mem MEM_memrop", false,-1, 2,0);
        tracep->declBit(c+264,"top ex_mem MEM_mem_ena", false,-1);
        tracep->declBit(c+265,"top ex_mem MEM_mem_wr", false,-1);
        tracep->declQuad(c+266,"top ex_mem MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+268,"top ex_mem MEM_mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+270,"top ex_mem MEM_instr", false,-1, 31,0);
        tracep->declQuad(c+271,"top ex_mem MEM_pc", false,-1, 63,0);
        tracep->declBit(c+257,"top ex_mem ex_now_valid", false,-1);
        tracep->declBit(c+1075,"top ex_mem ex_go", false,-1);
        tracep->declBit(c+258,"top ysyx_22040931_MEM w_ena_i", false,-1);
        tracep->declBus(c+259,"top ysyx_22040931_MEM w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+260,"top ysyx_22040931_MEM w_data_i", false,-1, 63,0);
        tracep->declBus(c+262,"top ysyx_22040931_MEM memwop", false,-1, 2,0);
        tracep->declBus(c+263,"top ysyx_22040931_MEM memrop", false,-1, 2,0);
        tracep->declBit(c+264,"top ysyx_22040931_MEM mem_ena_i", false,-1);
        tracep->declBit(c+265,"top ysyx_22040931_MEM mem_wr_i", false,-1);
        tracep->declQuad(c+266,"top ysyx_22040931_MEM mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+268,"top ysyx_22040931_MEM mem_stor_data_i", false,-1, 63,0);
        tracep->declQuad(c+942,"top ysyx_22040931_MEM mem_data", false,-1, 63,0);
        tracep->declQuad(c+271,"top ysyx_22040931_MEM pc_i", false,-1, 63,0);
        tracep->declBus(c+270,"top ysyx_22040931_MEM instr", false,-1, 31,0);
        tracep->declBit(c+258,"top ysyx_22040931_MEM w_ena", false,-1);
        tracep->declBus(c+259,"top ysyx_22040931_MEM w_addr", false,-1, 4,0);
        tracep->declQuad(c+958,"top ysyx_22040931_MEM w_data", false,-1, 63,0);
        tracep->declBus(c+947,"top ysyx_22040931_MEM memop", false,-1, 1,0);
        tracep->declBit(c+948,"top ysyx_22040931_MEM mem_ena", false,-1);
        tracep->declBit(c+949,"top ysyx_22040931_MEM mem_wr", false,-1);
        tracep->declQuad(c+950,"top ysyx_22040931_MEM mem_addr", false,-1, 63,0);
        tracep->declQuad(c+952,"top ysyx_22040931_MEM mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+270,"top ysyx_22040931_MEM instr_o", false,-1, 31,0);
        tracep->declQuad(c+271,"top ysyx_22040931_MEM pc_o", false,-1, 63,0);
        tracep->declQuad(c+877,"top ysyx_22040931_MEM mem_r_data", false,-1, 63,0);
        tracep->declBus(c+559,"top ysyx_22040931_MEM memwrop", false,-1, 2,0);
        tracep->declQuad(c+560,"top ysyx_22040931_MEM stor_data_one", false,-1, 63,0);
        tracep->declQuad(c+562,"top ysyx_22040931_MEM stor_data_two", false,-1, 63,0);
        tracep->declQuad(c+564,"top ysyx_22040931_MEM stor_data_for", false,-1, 63,0);
        tracep->declBus(c+1062,"top ysyx_22040931_MEM memop_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_MEM memop_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM memop_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+947,"top ysyx_22040931_MEM memop_mux out", false,-1, 1,0);
        tracep->declBus(c+559,"top ysyx_22040931_MEM memop_mux key", false,-1, 2,0);
        tracep->declBus(c+1076,"top ysyx_22040931_MEM memop_mux default_out", false,-1, 1,0);
        tracep->declQuad(c+1077,"top ysyx_22040931_MEM memop_mux lut", false,-1, 34,0);
        tracep->declBus(c+1062,"top ysyx_22040931_MEM memop_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_MEM memop_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM memop_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_MEM memop_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+947,"top ysyx_22040931_MEM memop_mux i1 out", false,-1, 1,0);
        tracep->declBus(c+559,"top ysyx_22040931_MEM memop_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+1076,"top ysyx_22040931_MEM memop_mux i1 default_out", false,-1, 1,0);
        tracep->declQuad(c+1077,"top ysyx_22040931_MEM memop_mux i1 lut", false,-1, 34,0);
        tracep->declBus(c+1039,"top ysyx_22040931_MEM memop_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+193+i*1,"top ysyx_22040931_MEM memop_mux i1 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+200+i*1,"top ysyx_22040931_MEM memop_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+207+i*1,"top ysyx_22040931_MEM memop_mux i1 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+566,"top ysyx_22040931_MEM memop_mux i1 lut_out", false,-1, 1,0);
        tracep->declBit(c+567,"top ysyx_22040931_MEM memop_mux i1 hit", false,-1);
        tracep->declBus(c+1079,"top ysyx_22040931_MEM memop_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_MEM mem_r_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_MEM mem_r_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_MEM mem_r_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+877,"top ysyx_22040931_MEM mem_r_data_mux out", false,-1, 63,0);
        tracep->declBus(c+263,"top ysyx_22040931_MEM mem_r_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_MEM mem_r_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+879,"top ysyx_22040931_MEM mem_r_data_mux lut", false,-1, 468,0);
        tracep->declBus(c+1062,"top ysyx_22040931_MEM mem_r_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_MEM mem_r_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_MEM mem_r_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_MEM mem_r_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+877,"top ysyx_22040931_MEM mem_r_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+263,"top ysyx_22040931_MEM mem_r_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_MEM mem_r_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+879,"top ysyx_22040931_MEM mem_r_data_mux i1 lut", false,-1, 468,0);
        tracep->declBus(c+979,"top ysyx_22040931_MEM mem_r_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+894+i*3,"top ysyx_22040931_MEM mem_r_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+915+i*1,"top ysyx_22040931_MEM mem_r_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+922+i*2,"top ysyx_22040931_MEM mem_r_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+936,"top ysyx_22040931_MEM mem_r_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+938,"top ysyx_22040931_MEM mem_r_data_mux i1 hit", false,-1);
        tracep->declBus(c+1079,"top ysyx_22040931_MEM mem_r_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_MEM mem_stor_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_MEM mem_stor_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_MEM mem_stor_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+952,"top ysyx_22040931_MEM mem_stor_data_mux out", false,-1, 63,0);
        tracep->declBus(c+262,"top ysyx_22040931_MEM mem_stor_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_MEM mem_stor_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+568,"top ysyx_22040931_MEM mem_stor_data_mux lut", false,-1, 267,0);
        tracep->declBus(c+987,"top ysyx_22040931_MEM mem_stor_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+974,"top ysyx_22040931_MEM mem_stor_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_MEM mem_stor_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_MEM mem_stor_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+952,"top ysyx_22040931_MEM mem_stor_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+262,"top ysyx_22040931_MEM mem_stor_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_MEM mem_stor_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+568,"top ysyx_22040931_MEM mem_stor_data_mux i1 lut", false,-1, 267,0);
        tracep->declBus(c+979,"top ysyx_22040931_MEM mem_stor_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+577+i*3,"top ysyx_22040931_MEM mem_stor_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+589+i*1,"top ysyx_22040931_MEM mem_stor_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+593+i*2,"top ysyx_22040931_MEM mem_stor_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+601,"top ysyx_22040931_MEM mem_stor_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+603,"top ysyx_22040931_MEM mem_stor_data_mux i1 hit", false,-1);
        tracep->declBus(c+1019,"top ysyx_22040931_MEM mem_stor_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1080,"top ysyx_22040931_MEM mem_stor_data1_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+981,"top ysyx_22040931_MEM mem_stor_data1_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_MEM mem_stor_data1_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+560,"top ysyx_22040931_MEM mem_stor_data1_mux out", false,-1, 63,0);
        tracep->declBus(c+604,"top ysyx_22040931_MEM mem_stor_data1_mux key", false,-1, 5,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_MEM mem_stor_data1_mux default_out", false,-1, 63,0);
        tracep->declArray(c+605,"top ysyx_22040931_MEM mem_stor_data1_mux lut", false,-1, 559,0);
        tracep->declBus(c+1080,"top ysyx_22040931_MEM mem_stor_data1_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+981,"top ysyx_22040931_MEM mem_stor_data1_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_MEM mem_stor_data1_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_MEM mem_stor_data1_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+560,"top ysyx_22040931_MEM mem_stor_data1_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+604,"top ysyx_22040931_MEM mem_stor_data1_mux i1 key", false,-1, 5,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_MEM mem_stor_data1_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+605,"top ysyx_22040931_MEM mem_stor_data1_mux i1 lut", false,-1, 559,0);
        tracep->declBus(c+1081,"top ysyx_22040931_MEM mem_stor_data1_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+623+i*3,"top ysyx_22040931_MEM mem_stor_data1_mux i1 pair_list", true,(i+0), 69,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+647+i*1,"top ysyx_22040931_MEM mem_stor_data1_mux i1 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+655+i*2,"top ysyx_22040931_MEM mem_stor_data1_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+671,"top ysyx_22040931_MEM mem_stor_data1_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+673,"top ysyx_22040931_MEM mem_stor_data1_mux i1 hit", false,-1);
        tracep->declBus(c+1082,"top ysyx_22040931_MEM mem_stor_data1_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_MEM mem_stor_data2_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1039,"top ysyx_22040931_MEM mem_stor_data2_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_MEM mem_stor_data2_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+562,"top ysyx_22040931_MEM mem_stor_data2_mux out", false,-1, 63,0);
        tracep->declBus(c+674,"top ysyx_22040931_MEM mem_stor_data2_mux key", false,-1, 4,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_MEM mem_stor_data2_mux default_out", false,-1, 63,0);
        tracep->declArray(c+675,"top ysyx_22040931_MEM mem_stor_data2_mux lut", false,-1, 275,0);
        tracep->declBus(c+987,"top ysyx_22040931_MEM mem_stor_data2_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1039,"top ysyx_22040931_MEM mem_stor_data2_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_MEM mem_stor_data2_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_MEM mem_stor_data2_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+562,"top ysyx_22040931_MEM mem_stor_data2_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+674,"top ysyx_22040931_MEM mem_stor_data2_mux i1 key", false,-1, 4,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_MEM mem_stor_data2_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+675,"top ysyx_22040931_MEM mem_stor_data2_mux i1 lut", false,-1, 275,0);
        tracep->declBus(c+1083,"top ysyx_22040931_MEM mem_stor_data2_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+684+i*3,"top ysyx_22040931_MEM mem_stor_data2_mux i1 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+696+i*1,"top ysyx_22040931_MEM mem_stor_data2_mux i1 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+700+i*2,"top ysyx_22040931_MEM mem_stor_data2_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+708,"top ysyx_22040931_MEM mem_stor_data2_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+710,"top ysyx_22040931_MEM mem_stor_data2_mux i1 hit", false,-1);
        tracep->declBus(c+1019,"top ysyx_22040931_MEM mem_stor_data2_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_stor_data3_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_MEM mem_stor_data3_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_MEM mem_stor_data3_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+564,"top ysyx_22040931_MEM mem_stor_data3_mux out", false,-1, 63,0);
        tracep->declBus(c+711,"top ysyx_22040931_MEM mem_stor_data3_mux key", false,-1, 3,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_MEM mem_stor_data3_mux default_out", false,-1, 63,0);
        tracep->declArray(c+712,"top ysyx_22040931_MEM mem_stor_data3_mux lut", false,-1, 135,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_stor_data3_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+987,"top ysyx_22040931_MEM mem_stor_data3_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+975,"top ysyx_22040931_MEM mem_stor_data3_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+978,"top ysyx_22040931_MEM mem_stor_data3_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+564,"top ysyx_22040931_MEM mem_stor_data3_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+711,"top ysyx_22040931_MEM mem_stor_data3_mux i1 key", false,-1, 3,0);
        tracep->declQuad(c+1067,"top ysyx_22040931_MEM mem_stor_data3_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+712,"top ysyx_22040931_MEM mem_stor_data3_mux i1 lut", false,-1, 135,0);
        tracep->declBus(c+1069,"top ysyx_22040931_MEM mem_stor_data3_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+717+i*3,"top ysyx_22040931_MEM mem_stor_data3_mux i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+723+i*1,"top ysyx_22040931_MEM mem_stor_data3_mux i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+725+i*2,"top ysyx_22040931_MEM mem_stor_data3_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+729,"top ysyx_22040931_MEM mem_stor_data3_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+731,"top ysyx_22040931_MEM mem_stor_data3_mux i1 hit", false,-1);
        tracep->declBus(c+1052,"top ysyx_22040931_MEM mem_stor_data3_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+939,"top mem_wb reset", false,-1);
        tracep->declBit(c+940,"top mem_wb clock", false,-1);
        tracep->declBit(c+1084,"top mem_wb flush", false,-1);
        tracep->declBit(c+1085,"top mem_wb stall", false,-1);
        tracep->declBit(c+257,"top mem_wb ex_valid", false,-1);
        tracep->declBit(c+273,"top mem_wb mem_ready", false,-1);
        tracep->declBit(c+274,"top mem_wb mem_valid", false,-1);
        tracep->declQuad(c+271,"top mem_wb MEM_pc", false,-1, 63,0);
        tracep->declBus(c+270,"top mem_wb MEM_instr", false,-1, 31,0);
        tracep->declBit(c+258,"top mem_wb MEM_w_ena", false,-1);
        tracep->declBus(c+259,"top mem_wb MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+958,"top mem_wb MEM_w_data", false,-1, 63,0);
        tracep->declBit(c+275,"top mem_wb WB_w_ena", false,-1);
        tracep->declBus(c+276,"top mem_wb WB_w_addr", false,-1, 4,0);
        tracep->declQuad(c+277,"top mem_wb WB_w_data", false,-1, 63,0);
        tracep->declBus(c+281,"top mem_wb WB_instr", false,-1, 31,0);
        tracep->declQuad(c+279,"top mem_wb WB_pc", false,-1, 63,0);
        tracep->declBit(c+274,"top mem_wb mem_now_valid", false,-1);
        tracep->declBit(c+1086,"top mem_wb mem_go", false,-1);
        tracep->declBit(c+275,"top ysyx_22040931_WB w_ena_i", false,-1);
        tracep->declBus(c+276,"top ysyx_22040931_WB w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+277,"top ysyx_22040931_WB w_data_i", false,-1, 63,0);
        tracep->declQuad(c+279,"top ysyx_22040931_WB pc_i", false,-1, 63,0);
        tracep->declBit(c+275,"top ysyx_22040931_WB w_ena", false,-1);
        tracep->declBus(c+276,"top ysyx_22040931_WB w_addr", false,-1, 4,0);
        tracep->declQuad(c+277,"top ysyx_22040931_WB w_data", false,-1, 63,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<23>/*735:0*/ Vtop__ConstPool__CONST_62d53ceb_0;
extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_f35eebe5_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp1093;
    VlWide<5>/*159:0*/ __Vtemp1094;
    VlWide<3>/*95:0*/ __Vtemp1095;
    VlWide<4>/*127:0*/ __Vtemp1096;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[0]),26);
        tracep->fullIData(oldp+2,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[1]),26);
        tracep->fullIData(oldp+3,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[2]),26);
        tracep->fullIData(oldp+4,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[3]),26);
        tracep->fullIData(oldp+5,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[4]),26);
        tracep->fullIData(oldp+6,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[5]),26);
        tracep->fullIData(oldp+7,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[6]),26);
        tracep->fullIData(oldp+8,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[7]),26);
        tracep->fullIData(oldp+9,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[8]),26);
        tracep->fullIData(oldp+10,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[9]),26);
        tracep->fullIData(oldp+11,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[10]),26);
        tracep->fullIData(oldp+12,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[11]),26);
        tracep->fullIData(oldp+13,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[12]),26);
        tracep->fullIData(oldp+14,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[13]),26);
        tracep->fullIData(oldp+15,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[14]),26);
        tracep->fullIData(oldp+16,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[15]),26);
        tracep->fullIData(oldp+17,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[16]),26);
        tracep->fullIData(oldp+18,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[17]),26);
        tracep->fullIData(oldp+19,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[18]),26);
        tracep->fullIData(oldp+20,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[19]),26);
        tracep->fullIData(oldp+21,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[20]),26);
        tracep->fullIData(oldp+22,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[21]),26);
        tracep->fullIData(oldp+23,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[22]),26);
        tracep->fullIData(oldp+24,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[23]),26);
        tracep->fullIData(oldp+25,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[24]),26);
        tracep->fullIData(oldp+26,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[25]),26);
        tracep->fullIData(oldp+27,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[26]),26);
        tracep->fullIData(oldp+28,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[27]),26);
        tracep->fullIData(oldp+29,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[0]),17);
        tracep->fullIData(oldp+30,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[1]),17);
        tracep->fullIData(oldp+31,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[2]),17);
        tracep->fullIData(oldp+32,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[3]),17);
        tracep->fullIData(oldp+33,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[4]),17);
        tracep->fullIData(oldp+34,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[5]),17);
        tracep->fullIData(oldp+35,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[6]),17);
        tracep->fullIData(oldp+36,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[7]),17);
        tracep->fullIData(oldp+37,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[8]),17);
        tracep->fullIData(oldp+38,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[9]),17);
        tracep->fullIData(oldp+39,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[10]),17);
        tracep->fullIData(oldp+40,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[11]),17);
        tracep->fullIData(oldp+41,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[12]),17);
        tracep->fullIData(oldp+42,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[13]),17);
        tracep->fullIData(oldp+43,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[14]),17);
        tracep->fullIData(oldp+44,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[15]),17);
        tracep->fullIData(oldp+45,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[16]),17);
        tracep->fullIData(oldp+46,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[17]),17);
        tracep->fullIData(oldp+47,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[18]),17);
        tracep->fullIData(oldp+48,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[19]),17);
        tracep->fullIData(oldp+49,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[20]),17);
        tracep->fullIData(oldp+50,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[21]),17);
        tracep->fullIData(oldp+51,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[22]),17);
        tracep->fullIData(oldp+52,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[23]),17);
        tracep->fullIData(oldp+53,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[24]),17);
        tracep->fullIData(oldp+54,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[25]),17);
        tracep->fullIData(oldp+55,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[26]),17);
        tracep->fullIData(oldp+56,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[27]),17);
        tracep->fullSData(oldp+57,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[0]),9);
        tracep->fullSData(oldp+58,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[1]),9);
        tracep->fullSData(oldp+59,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[2]),9);
        tracep->fullSData(oldp+60,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[3]),9);
        tracep->fullSData(oldp+61,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[4]),9);
        tracep->fullSData(oldp+62,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[5]),9);
        tracep->fullSData(oldp+63,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[6]),9);
        tracep->fullSData(oldp+64,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[7]),9);
        tracep->fullSData(oldp+65,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[8]),9);
        tracep->fullSData(oldp+66,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[9]),9);
        tracep->fullSData(oldp+67,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[10]),9);
        tracep->fullSData(oldp+68,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[11]),9);
        tracep->fullSData(oldp+69,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[12]),9);
        tracep->fullSData(oldp+70,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[13]),9);
        tracep->fullSData(oldp+71,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[14]),9);
        tracep->fullSData(oldp+72,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[15]),9);
        tracep->fullSData(oldp+73,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[16]),9);
        tracep->fullSData(oldp+74,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[17]),9);
        tracep->fullSData(oldp+75,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[18]),9);
        tracep->fullSData(oldp+76,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[19]),9);
        tracep->fullSData(oldp+77,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[20]),9);
        tracep->fullSData(oldp+78,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[21]),9);
        tracep->fullSData(oldp+79,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[22]),9);
        tracep->fullSData(oldp+80,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[23]),9);
        tracep->fullSData(oldp+81,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[24]),9);
        tracep->fullSData(oldp+82,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[25]),9);
        tracep->fullSData(oldp+83,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[26]),9);
        tracep->fullSData(oldp+84,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[27]),9);
        tracep->fullIData(oldp+85,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[0]),23);
        tracep->fullIData(oldp+86,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[1]),23);
        tracep->fullIData(oldp+87,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[2]),23);
        tracep->fullIData(oldp+88,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[3]),23);
        tracep->fullIData(oldp+89,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[4]),23);
        tracep->fullIData(oldp+90,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[5]),23);
        tracep->fullIData(oldp+91,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[6]),23);
        tracep->fullIData(oldp+92,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[7]),23);
        tracep->fullIData(oldp+93,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[8]),23);
        tracep->fullIData(oldp+94,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[9]),23);
        tracep->fullIData(oldp+95,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[10]),23);
        tracep->fullIData(oldp+96,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[11]),23);
        tracep->fullIData(oldp+97,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[12]),23);
        tracep->fullSData(oldp+98,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[0]),10);
        tracep->fullSData(oldp+99,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[1]),10);
        tracep->fullSData(oldp+100,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[2]),10);
        tracep->fullSData(oldp+101,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[3]),10);
        tracep->fullSData(oldp+102,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[4]),10);
        tracep->fullSData(oldp+103,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[5]),10);
        tracep->fullSData(oldp+104,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[6]),10);
        tracep->fullSData(oldp+105,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[7]),10);
        tracep->fullSData(oldp+106,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[8]),10);
        tracep->fullSData(oldp+107,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[9]),10);
        tracep->fullSData(oldp+108,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[10]),10);
        tracep->fullSData(oldp+109,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[11]),10);
        tracep->fullSData(oldp+110,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[12]),10);
        tracep->fullSData(oldp+111,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[0]),13);
        tracep->fullSData(oldp+112,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[1]),13);
        tracep->fullSData(oldp+113,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[2]),13);
        tracep->fullSData(oldp+114,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[3]),13);
        tracep->fullSData(oldp+115,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[4]),13);
        tracep->fullSData(oldp+116,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[5]),13);
        tracep->fullSData(oldp+117,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[6]),13);
        tracep->fullSData(oldp+118,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[7]),13);
        tracep->fullSData(oldp+119,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[8]),13);
        tracep->fullSData(oldp+120,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[9]),13);
        tracep->fullSData(oldp+121,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[10]),13);
        tracep->fullSData(oldp+122,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[11]),13);
        tracep->fullSData(oldp+123,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[12]),13);
        tracep->fullIData(oldp+124,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+125,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+126,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__pair_list[2]),28);
        tracep->fullSData(oldp+127,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list[0]),16);
        tracep->fullSData(oldp+128,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list[1]),16);
        tracep->fullSData(oldp+129,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list[2]),16);
        tracep->fullSData(oldp+130,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list[0]),12);
        tracep->fullSData(oldp+131,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list[1]),12);
        tracep->fullSData(oldp+132,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list[2]),12);
        tracep->fullIData(oldp+133,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[0]),29);
        tracep->fullIData(oldp+134,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[1]),29);
        tracep->fullIData(oldp+135,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[2]),29);
        tracep->fullIData(oldp+136,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[3]),29);
        tracep->fullIData(oldp+137,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[4]),29);
        tracep->fullIData(oldp+138,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[0]),17);
        tracep->fullIData(oldp+139,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[1]),17);
        tracep->fullIData(oldp+140,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[2]),17);
        tracep->fullIData(oldp+141,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[3]),17);
        tracep->fullIData(oldp+142,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[4]),17);
        tracep->fullSData(oldp+143,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[0]),12);
        tracep->fullSData(oldp+144,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[1]),12);
        tracep->fullSData(oldp+145,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[2]),12);
        tracep->fullSData(oldp+146,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[3]),12);
        tracep->fullSData(oldp+147,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[4]),12);
        tracep->fullIData(oldp+148,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__pair_list[0]),30);
        tracep->fullIData(oldp+149,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__pair_list[1]),30);
        tracep->fullIData(oldp+150,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__key_list[0]),18);
        tracep->fullIData(oldp+151,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__key_list[1]),18);
        tracep->fullSData(oldp+152,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__data_list[0]),12);
        tracep->fullSData(oldp+153,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__data_list[1]),12);
        tracep->fullIData(oldp+154,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__pair_list[0]),22);
        tracep->fullIData(oldp+155,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__pair_list[1]),22);
        tracep->fullIData(oldp+156,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__pair_list[2]),22);
        tracep->fullIData(oldp+157,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__pair_list[3]),22);
        tracep->fullSData(oldp+158,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list[0]),10);
        tracep->fullSData(oldp+159,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list[1]),10);
        tracep->fullSData(oldp+160,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list[2]),10);
        tracep->fullSData(oldp+161,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list[3]),10);
        tracep->fullSData(oldp+162,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list[0]),12);
        tracep->fullSData(oldp+163,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list[1]),12);
        tracep->fullSData(oldp+164,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list[2]),12);
        tracep->fullSData(oldp+165,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list[3]),12);
        tracep->fullIData(oldp+166,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[0]),19);
        tracep->fullIData(oldp+167,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[1]),19);
        tracep->fullIData(oldp+168,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[2]),19);
        tracep->fullIData(oldp+169,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[3]),19);
        tracep->fullIData(oldp+170,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[4]),19);
        tracep->fullIData(oldp+171,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[5]),19);
        tracep->fullSData(oldp+172,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[0]),10);
        tracep->fullSData(oldp+173,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[1]),10);
        tracep->fullSData(oldp+174,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[2]),10);
        tracep->fullSData(oldp+175,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[3]),10);
        tracep->fullSData(oldp+176,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[4]),10);
        tracep->fullSData(oldp+177,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[5]),10);
        tracep->fullSData(oldp+178,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[0]),9);
        tracep->fullSData(oldp+179,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[1]),9);
        tracep->fullSData(oldp+180,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[2]),9);
        tracep->fullSData(oldp+181,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[3]),9);
        tracep->fullSData(oldp+182,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[4]),9);
        tracep->fullSData(oldp+183,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[5]),9);
        tracep->fullIData(oldp+184,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__pair_list[0]),17);
        tracep->fullCData(oldp+185,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__key_list[0]),7);
        tracep->fullSData(oldp+186,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__data_list[0]),10);
        tracep->fullSData(oldp+187,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__pair_list[0]),16);
        tracep->fullSData(oldp+188,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__pair_list[1]),16);
        tracep->fullCData(oldp+189,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__key_list[0]),7);
        tracep->fullCData(oldp+190,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__key_list[1]),7);
        tracep->fullSData(oldp+191,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__data_list[0]),9);
        tracep->fullSData(oldp+192,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__data_list[1]),9);
        tracep->fullCData(oldp+193,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+194,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+195,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+196,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+197,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+198,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[5]),5);
        tracep->fullCData(oldp+199,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[6]),5);
        tracep->fullCData(oldp+200,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+201,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+202,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+203,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+204,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullCData(oldp+205,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[5]),3);
        tracep->fullCData(oldp+206,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[6]),3);
        tracep->fullCData(oldp+207,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[0]),2);
        tracep->fullCData(oldp+208,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[1]),2);
        tracep->fullCData(oldp+209,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[2]),2);
        tracep->fullCData(oldp+210,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[3]),2);
        tracep->fullCData(oldp+211,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[4]),2);
        tracep->fullCData(oldp+212,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[5]),2);
        tracep->fullCData(oldp+213,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[6]),2);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__rdata),64);
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__pc_ready));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__pc_valid));
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__if_ready));
        tracep->fullBit(oldp+219,(vlSelf->top__DOT__if_id__DOT__if_now_valid));
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__ID_pc),64);
        tracep->fullIData(oldp+222,(vlSelf->top__DOT__ID_instr),32);
        tracep->fullBit(oldp+223,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 0xaU))));
        tracep->fullCData(oldp+224,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 7U))),5);
        tracep->fullBit(oldp+225,((IData)(((0U != (0xeU 
                                                   & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))) 
                                           | (0U != 
                                              (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))))));
        tracep->fullBit(oldp+226,((0U != (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))));
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__id_imm),64);
        tracep->fullCData(oldp+229,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+230,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))),5);
        tracep->fullCData(oldp+231,((7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))),3);
        tracep->fullCData(oldp+232,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                           >> 1U))),3);
        tracep->fullBit(oldp+233,(vlSelf->top__DOT__id_ready));
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__id_ex__DOT__id_now_valid));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__EX_w_ena));
        tracep->fullCData(oldp+236,(vlSelf->top__DOT__EX_w_addr),5);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__EX_data1),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__EX_data2),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__EX_imm),64);
        tracep->fullCData(oldp+243,(vlSelf->top__DOT__EX_exop),3);
        tracep->fullCData(oldp+244,(vlSelf->top__DOT__EX_aluop),5);
        tracep->fullCData(oldp+245,(vlSelf->top__DOT__EX_memwop),3);
        tracep->fullCData(oldp+246,(vlSelf->top__DOT__EX_memrop),3);
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__EX_mem_ena));
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__EX_mem_wr));
        tracep->fullIData(oldp+249,(vlSelf->top__DOT__EX_instr),32);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__EX_pc),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__ex_w_data),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__ex_mem_addr),64);
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__ex_ready));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__MEM_w_ena));
        tracep->fullCData(oldp+259,(vlSelf->top__DOT__MEM_w_addr),5);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__MEM_w_data),64);
        tracep->fullCData(oldp+262,(vlSelf->top__DOT__MEM_memwop),3);
        tracep->fullCData(oldp+263,(vlSelf->top__DOT__MEM_memrop),3);
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__MEM_mem_ena));
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__MEM_mem_wr));
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__MEM_mem_addr),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__MEM_mem_stor_data),64);
        tracep->fullIData(oldp+270,(vlSelf->top__DOT__MEM_instr),32);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__MEM_pc),64);
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__mem_ready));
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__mem_wb__DOT__mem_now_valid));
        tracep->fullBit(oldp+275,(vlSelf->top__DOT__WB_w_ena));
        tracep->fullCData(oldp+276,(vlSelf->top__DOT__WB_w_addr),5);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__WB_w_data),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__WB_pc),64);
        tracep->fullIData(oldp+281,(vlSelf->top__DOT__WB_instr),32);
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid));
        tracep->fullBit(oldp+283,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU)))
                                    ? ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                       & (((IData)(vlSelf->top__DOT__EX_w_ena) 
                                           & (IData)(vlSelf->top__DOT__EX_mem_ena)) 
                                          & (IData)(vlSelf->top__DOT__EX_mem_ena)))
                                    : (((IData)(vlSelf->top__DOT__EX_w_addr) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__ID_instr 
                                             >> 0x14U))) 
                                       & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                          & (((IData)(vlSelf->top__DOT__EX_w_ena) 
                                              & (IData)(vlSelf->top__DOT__EX_mem_ena)) 
                                             & (IData)(vlSelf->top__DOT__EX_mem_ena)))))));
        tracep->fullCData(oldp+284,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype),3);
        tracep->fullBit(oldp+285,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 9U))));
        tracep->fullCData(oldp+286,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 0xfU))),5);
        tracep->fullBit(oldp+287,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 8U))));
        tracep->fullCData(oldp+288,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch),64);
        tracep->fullBit(oldp+291,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                      & (IData)(vlSelf->top__DOT__EX_w_ena)))));
        tracep->fullBit(oldp+292,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                      & (IData)(vlSelf->top__DOT__EX_w_ena)))));
        tracep->fullBit(oldp+293,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                      & (IData)(vlSelf->top__DOT__MEM_w_ena)))));
        tracep->fullBit(oldp+294,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                      & (IData)(vlSelf->top__DOT__MEM_w_ena)))));
        tracep->fullBit(oldp+295,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+296,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+297,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                         >> 8U))));
        tracep->fullBit(oldp+298,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                         >> 8U))));
        tracep->fullBit(oldp+299,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                         >> 9U))));
        tracep->fullBit(oldp+300,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                         >> 8U))));
        tracep->fullCData(oldp+301,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+302,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                           >> 9U))),3);
        tracep->fullCData(oldp+303,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                           >> 8U))),3);
        tracep->fullCData(oldp+304,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+305,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+306,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+307,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out))),5);
        tracep->fullCData(oldp+308,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                              >> 4U))),5);
        tracep->fullCData(oldp+309,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                              >> 3U))),5);
        tracep->fullCData(oldp+310,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out))),5);
        tracep->fullCData(oldp+311,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                              >> 1U))),5);
        tracep->fullCData(oldp+312,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out))),5);
        tracep->fullBit(oldp+313,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))));
        tracep->fullBit(oldp+314,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out))));
        tracep->fullSData(oldp+315,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1),11);
        tracep->fullWData(oldp+316,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4),84);
        tracep->fullSData(oldp+319,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[0]),14);
        tracep->fullSData(oldp+320,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[1]),14);
        tracep->fullSData(oldp+321,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[2]),14);
        tracep->fullSData(oldp+322,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[3]),14);
        tracep->fullSData(oldp+323,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[4]),14);
        tracep->fullSData(oldp+324,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[5]),14);
        tracep->fullCData(oldp+325,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+326,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+327,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+328,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+329,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullCData(oldp+330,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[5]),3);
        tracep->fullSData(oldp+331,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[0]),11);
        tracep->fullSData(oldp+332,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[1]),11);
        tracep->fullSData(oldp+333,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[2]),11);
        tracep->fullSData(oldp+334,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[3]),11);
        tracep->fullSData(oldp+335,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[4]),11);
        tracep->fullSData(oldp+336,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[5]),11);
        tracep->fullSData(oldp+337,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out),11);
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+339,((0x7fU & vlSelf->top__DOT__ID_instr)),7);
        tracep->fullCData(oldp+340,((7U & (vlSelf->top__DOT__ID_instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+341,((vlSelf->top__DOT__ID_instr 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+342,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out),9);
        tracep->fullIData(oldp+343,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose),17);
        tracep->fullSData(oldp+344,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+346,((1U & (vlSelf->top__DOT__ID_instr 
                                         >> 0x14U))));
        tracep->fullSData(oldp+347,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out),13);
        tracep->fullSData(oldp+348,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1),13);
        tracep->fullSData(oldp+349,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2),12);
        tracep->fullSData(oldp+350,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3),12);
        tracep->fullSData(oldp+351,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4),12);
        tracep->fullSData(oldp+352,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1),10);
        tracep->fullSData(oldp+353,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2),16);
        tracep->fullIData(oldp+354,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3),17);
        tracep->fullIData(oldp+355,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4),18);
        tracep->fullCData(oldp+356,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2),4);
        tracep->fullWData(oldp+357,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4),68);
        tracep->fullIData(oldp+360,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[0]),17);
        tracep->fullIData(oldp+361,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[1]),17);
        tracep->fullIData(oldp+362,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[2]),17);
        tracep->fullIData(oldp+363,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[3]),17);
        tracep->fullCData(oldp+364,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+365,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+366,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+367,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[3]),4);
        tracep->fullSData(oldp+368,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[0]),13);
        tracep->fullSData(oldp+369,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[1]),13);
        tracep->fullSData(oldp+370,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[2]),13);
        tracep->fullSData(oldp+371,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[3]),13);
        tracep->fullSData(oldp+372,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out),13);
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+374,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out),13);
        tracep->fullBit(oldp+375,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+376,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+377,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+378,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+379,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+380,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+381,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+382,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out),12);
        tracep->fullSData(oldp+383,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+384,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+385,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose),10);
        tracep->fullSData(oldp+386,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out),9);
        tracep->fullSData(oldp+387,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+389,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out),10);
        tracep->fullSData(oldp+390,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__lut_out),10);
        tracep->fullBit(oldp+391,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+392,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out),9);
        tracep->fullSData(oldp+393,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+394,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit));
        tracep->fullIData(oldp+395,((vlSelf->top__DOT__ID_instr 
                                     >> 7U)),25);
        tracep->fullWData(oldp+396,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4),335);
        tracep->fullWData(oldp+407,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+410,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+413,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+416,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+419,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+422,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+423,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+424,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+425,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+426,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+431,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit));
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+448,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+450,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+454,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+456,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+458,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+460,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+462,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+464,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+470,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+472,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+482,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+484,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+488,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+490,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+492,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+494,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[31]),64);
        tracep->fullIData(oldp+504,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__i),32);
        tracep->fullCData(oldp+505,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2),4);
        tracep->fullCData(oldp+506,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2),4);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result),64);
        tracep->fullIData(oldp+509,((IData)(vlSelf->top__DOT__EX_data1)),32);
        tracep->fullIData(oldp+510,((IData)(vlSelf->top__DOT__EX_data2)),32);
        tracep->fullWData(oldp+511,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4),201);
        tracep->fullWData(oldp+518,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+521,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+524,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+527,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+528,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+529,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullQData(oldp+530,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+532,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+534,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+536,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+538,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+539,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4),134);
        tracep->fullWData(oldp+544,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+547,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullCData(oldp+550,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+551,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullQData(oldp+552,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+554,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+556,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+558,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+559,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop),3);
        tracep->fullQData(oldp+560,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one),64);
        tracep->fullQData(oldp+562,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two),64);
        tracep->fullQData(oldp+564,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for),64);
        tracep->fullCData(oldp+566,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out),2);
        tracep->fullBit(oldp+567,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+568,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4),268);
        tracep->fullWData(oldp+577,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+580,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+583,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+586,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullCData(oldp+589,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+590,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+591,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+592,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullQData(oldp+593,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+597,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+599,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+601,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+603,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+604,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2),6);
        tracep->fullWData(oldp+605,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4),560);
        tracep->fullWData(oldp+623,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[0]),70);
        tracep->fullWData(oldp+626,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[1]),70);
        tracep->fullWData(oldp+629,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[2]),70);
        tracep->fullWData(oldp+632,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[3]),70);
        tracep->fullWData(oldp+635,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[4]),70);
        tracep->fullWData(oldp+638,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[5]),70);
        tracep->fullWData(oldp+641,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[6]),70);
        tracep->fullWData(oldp+644,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[7]),70);
        tracep->fullCData(oldp+647,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[0]),6);
        tracep->fullCData(oldp+648,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[1]),6);
        tracep->fullCData(oldp+649,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[2]),6);
        tracep->fullCData(oldp+650,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[3]),6);
        tracep->fullCData(oldp+651,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[4]),6);
        tracep->fullCData(oldp+652,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[5]),6);
        tracep->fullCData(oldp+653,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[6]),6);
        tracep->fullCData(oldp+654,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[7]),6);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+657,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+659,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+661,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+663,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+665,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[5]),64);
        tracep->fullQData(oldp+667,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[6]),64);
        tracep->fullQData(oldp+669,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[7]),64);
        tracep->fullQData(oldp+671,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+673,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+674,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2),5);
        tracep->fullWData(oldp+675,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4),276);
        tracep->fullWData(oldp+684,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+687,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+690,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+693,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[3]),69);
        tracep->fullCData(oldp+696,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[0]),5);
        tracep->fullCData(oldp+697,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[1]),5);
        tracep->fullCData(oldp+698,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[2]),5);
        tracep->fullCData(oldp+699,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[3]),5);
        tracep->fullQData(oldp+700,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+702,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+704,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+706,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+708,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+710,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+711,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2),4);
        tracep->fullWData(oldp+712,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4),136);
        tracep->fullWData(oldp+717,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+720,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+723,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+724,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[1]),4);
        tracep->fullQData(oldp+725,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+727,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+729,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+731,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+732,(vlSelf->top__DOT__mux_pc));
        tracep->fullQData(oldp+733,(vlSelf->top__DOT__branch),64);
        tracep->fullBit(oldp+735,(vlSelf->top__DOT__nop));
        tracep->fullQData(oldp+736,(vlSelf->top__DOT__id_data1),64);
        tracep->fullQData(oldp+738,(vlSelf->top__DOT__id_data2),64);
        tracep->fullWData(oldp+740,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4),201);
        tracep->fullWData(oldp+747,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+750,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+753,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+756,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+757,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+758,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullQData(oldp+759,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+761,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+763,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+765,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+767,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+768,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__bjump));
        tracep->fullSData(oldp+769,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4),12);
        tracep->fullCData(oldp+770,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+771,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+772,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+773,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+774,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+775,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullBit(oldp+776,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[0]));
        tracep->fullBit(oldp+777,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[1]));
        tracep->fullBit(oldp+778,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[2]));
        tracep->fullBit(oldp+779,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out));
        tracep->fullBit(oldp+780,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+781,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb),3);
        tracep->fullWData(oldp+782,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4),66);
        tracep->fullSData(oldp+785,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+786,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+787,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+788,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+789,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+790,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+791,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[0]),10);
        tracep->fullSData(oldp+792,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[1]),10);
        tracep->fullSData(oldp+793,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[2]),10);
        tracep->fullSData(oldp+794,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[3]),10);
        tracep->fullSData(oldp+795,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[4]),10);
        tracep->fullSData(oldp+796,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[5]),10);
        tracep->fullBit(oldp+797,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[0]));
        tracep->fullBit(oldp+798,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[1]));
        tracep->fullBit(oldp+799,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[2]));
        tracep->fullBit(oldp+800,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[3]));
        tracep->fullBit(oldp+801,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[4]));
        tracep->fullBit(oldp+802,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[5]));
        tracep->fullBit(oldp+803,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out));
        tracep->fullBit(oldp+804,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+805,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4),272);
        tracep->fullWData(oldp+814,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+817,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+820,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+823,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+826,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+827,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+828,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+829,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[3]),4);
        tracep->fullQData(oldp+830,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+832,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+834,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+836,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+838,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+840,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+841,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4),272);
        tracep->fullWData(oldp+850,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+853,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+856,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+859,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+862,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+863,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+864,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+865,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[3]),4);
        tracep->fullQData(oldp+866,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+868,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+870,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+872,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+874,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+876,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit));
        tracep->fullQData(oldp+877,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data),64);
        tracep->fullWData(oldp+879,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4),469);
        tracep->fullWData(oldp+894,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+897,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+900,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+903,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+906,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+909,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+912,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[6]),67);
        tracep->fullCData(oldp+915,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+916,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+917,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+918,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+919,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullCData(oldp+920,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[5]),3);
        tracep->fullCData(oldp+921,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[6]),3);
        tracep->fullQData(oldp+922,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+924,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+926,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+928,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+930,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+932,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[5]),64);
        tracep->fullQData(oldp+934,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[6]),64);
        tracep->fullQData(oldp+936,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+938,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+939,(vlSelf->reset));
        tracep->fullBit(oldp+940,(vlSelf->clock));
        tracep->fullIData(oldp+941,(vlSelf->instr),32);
        tracep->fullQData(oldp+942,(vlSelf->momory_data),64);
        tracep->fullBit(oldp+944,(vlSelf->fetch_enb));
        tracep->fullQData(oldp+945,(vlSelf->pc),64);
        tracep->fullCData(oldp+947,(vlSelf->memop),2);
        tracep->fullBit(oldp+948,(vlSelf->mem_ena));
        tracep->fullBit(oldp+949,(vlSelf->mem_wr));
        tracep->fullQData(oldp+950,(vlSelf->mem_addr),64);
        tracep->fullQData(oldp+952,(vlSelf->mem_stor_data),64);
        tracep->fullIData(oldp+954,(vlSelf->difftest_instr),32);
        tracep->fullQData(oldp+955,(vlSelf->difftest_pc),64);
        tracep->fullCData(oldp+957,(((3U == (IData)(vlSelf->memop))
                                      ? 0xffU : (0xffU 
                                                 & ((2U 
                                                     == (IData)(vlSelf->memop))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->mem_addr 
                                                                 >> 2U)))
                                                      ? 0xf0U
                                                      : 0xfU)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->memop))
                                                      ? 
                                                     ((IData)(3U) 
                                                      << 
                                                      (7U 
                                                       & ((IData)(vlSelf->mem_addr) 
                                                          << 1U)))
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->memop))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(vlSelf->mem_addr)))
                                                       : 0U)))))),8);
        tracep->fullQData(oldp+958,((((IData)(vlSelf->mem_ena) 
                                      & (~ (IData)(vlSelf->mem_wr)))
                                      ? vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data
                                      : vlSelf->top__DOT__MEM_w_data)),64);
        tracep->fullQData(oldp+960,(((IData)(vlSelf->top__DOT__mux_pc)
                                      ? vlSelf->top__DOT__branch
                                      : (4ULL + vlSelf->pc))),64);
        tracep->fullQData(oldp+962,(((IData)(vlSelf->reset)
                                      ? 0ULL : ((0x200U 
                                                 & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
                                                 ? 
                                                (((((0x1fU 
                                                     & (vlSelf->top__DOT__ID_instr 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSelf->top__DOT__WB_w_addr)) 
                                                   & (0U 
                                                      != (IData)(vlSelf->top__DOT__WB_w_addr))) 
                                                  & (IData)(vlSelf->top__DOT__WB_w_ena))
                                                  ? vlSelf->top__DOT__WB_w_data
                                                  : 
                                                 vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs
                                                 [(0x1fU 
                                                   & (vlSelf->top__DOT__ID_instr 
                                                      >> 0xfU))])
                                                 : 0ULL))),64);
        tracep->fullQData(oldp+964,(((IData)(vlSelf->reset)
                                      ? 0ULL : ((0x100U 
                                                 & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
                                                 ? 
                                                (((((0x1fU 
                                                     & (vlSelf->top__DOT__ID_instr 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->top__DOT__WB_w_addr)) 
                                                   & (0U 
                                                      != (IData)(vlSelf->top__DOT__WB_w_addr))) 
                                                  & (IData)(vlSelf->top__DOT__WB_w_ena))
                                                  ? vlSelf->top__DOT__WB_w_data
                                                  : 
                                                 vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs
                                                 [(0x1fU 
                                                   & (vlSelf->top__DOT__ID_instr 
                                                      >> 0x14U))])
                                                 : 0ULL))),64);
        tracep->fullQData(oldp+966,((vlSelf->top__DOT__id_data1 
                                     + vlSelf->top__DOT__id_imm)),64);
        tracep->fullBit(oldp+968,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__flush));
        tracep->fullBit(oldp+969,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall));
        tracep->fullBit(oldp+970,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall)))));
        tracep->fullBit(oldp+971,(vlSelf->top__DOT__if_id__DOT__flush));
        tracep->fullBit(oldp+972,(vlSelf->top__DOT__if_id__DOT__stall));
        tracep->fullBit(oldp+973,((1U & (~ (IData)(vlSelf->top__DOT__if_id__DOT__stall)))));
        tracep->fullIData(oldp+974,(3U),32);
        tracep->fullIData(oldp+975,(0x40U),32);
        tracep->fullQData(oldp+976,(0x80000000ULL),64);
        tracep->fullIData(oldp+978,(1U),32);
        tracep->fullIData(oldp+979,(0x43U),32);
        tracep->fullIData(oldp+980,(3U),32);
        tracep->fullIData(oldp+981,(6U),32);
        tracep->fullIData(oldp+982,(0xbU),32);
        tracep->fullSData(oldp+983,(0U),11);
        tracep->fullIData(oldp+984,(0xeU),32);
        tracep->fullIData(oldp+985,(6U),32);
        tracep->fullBit(oldp+986,(0U));
        tracep->fullIData(oldp+987,(4U),32);
        tracep->fullIData(oldp+988,(0x1cU),32);
        tracep->fullIData(oldp+989,(0x11U),32);
        tracep->fullIData(oldp+990,(9U),32);
        tracep->fullSData(oldp+991,(0U),9);
        tracep->fullWData(oldp+992,(Vtop__ConstPool__CONST_62d53ceb_0),728);
        tracep->fullIData(oldp+1015,(0x1aU),32);
        tracep->fullIData(oldp+1016,(0x1cU),32);
        tracep->fullIData(oldp+1017,(0xdU),32);
        tracep->fullSData(oldp+1018,(0U),13);
        tracep->fullIData(oldp+1019,(4U),32);
        tracep->fullIData(oldp+1020,(0xaU),32);
        tracep->fullWData(oldp+1021,(Vtop__ConstPool__CONST_f35eebe5_0),299);
        tracep->fullIData(oldp+1031,(0x17U),32);
        tracep->fullIData(oldp+1032,(0xdU),32);
        tracep->fullIData(oldp+1033,(0x10U),32);
        tracep->fullIData(oldp+1034,(0xcU),32);
        tracep->fullSData(oldp+1035,(0U),12);
        __Vtemp1093[0U] = 0x293f48U;
        __Vtemp1093[1U] = 0x404293f5U;
        __Vtemp1093[2U] = 0x93fU;
        tracep->fullWData(oldp+1036,(__Vtemp1093),84);
        tracep->fullIData(oldp+1039,(5U),32);
        __Vtemp1094[0U] = 0x29bf68U;
        __Vtemp1094[1U] = 0xe10537ecU;
        __Vtemp1094[2U] = 0x980064fcU;
        __Vtemp1094[3U] = 0xe580089fU;
        __Vtemp1094[4U] = 0x9bU;
        tracep->fullWData(oldp+1040,(__Vtemp1094),145);
        tracep->fullIData(oldp+1045,(0x1dU),32);
        tracep->fullIData(oldp+1046,(5U),32);
        tracep->fullIData(oldp+1047,(2U),32);
        tracep->fullIData(oldp+1048,(0x12U),32);
        tracep->fullQData(oldp+1049,(0x1cec000473b00ULL),60);
        tracep->fullIData(oldp+1051,(0x1eU),32);
        tracep->fullIData(oldp+1052,(2U),32);
        __Vtemp1095[0U] = 0x5ec23d79U;
        __Vtemp1095[1U] = 0x23d7d28fU;
        __Vtemp1095[2U] = 0x68f5fdU;
        tracep->fullWData(oldp+1053,(__Vtemp1095),88);
        tracep->fullIData(oldp+1056,(0x16U),32);
        __Vtemp1096[0U] = 0x3801c700U;
        __Vtemp1096[1U] = 0x131c036U;
        __Vtemp1096[2U] = 0x5c700f8eU;
        __Vtemp1096[3U] = 0x6380U;
        tracep->fullWData(oldp+1057,(__Vtemp1096),114);
        tracep->fullIData(oldp+1061,(0x13U),32);
        tracep->fullIData(oldp+1062,(7U),32);
        tracep->fullSData(oldp+1063,(0U),10);
        tracep->fullIData(oldp+1064,(0x1bfe1U),17);
        tracep->fullIData(oldp+1065,(1U),32);
        tracep->fullIData(oldp+1066,(0x2fee6f40U),32);
        tracep->fullQData(oldp+1067,(0ULL),64);
        tracep->fullIData(oldp+1069,(0x44U),32);
        tracep->fullBit(oldp+1070,(vlSelf->top__DOT__id_ex__DOT__flush));
        tracep->fullBit(oldp+1071,(vlSelf->top__DOT__id_ex__DOT__stall));
        tracep->fullBit(oldp+1072,((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))));
        tracep->fullBit(oldp+1073,(vlSelf->top__DOT__ex_mem__DOT__flush));
        tracep->fullBit(oldp+1074,(vlSelf->top__DOT__ex_mem__DOT__stall));
        tracep->fullBit(oldp+1075,((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))));
        tracep->fullCData(oldp+1076,(0U),2);
        tracep->fullQData(oldp+1077,(0x110d8db5fULL),35);
        tracep->fullIData(oldp+1079,(7U),32);
        tracep->fullIData(oldp+1080,(8U),32);
        tracep->fullIData(oldp+1081,(0x46U),32);
        tracep->fullIData(oldp+1082,(8U),32);
        tracep->fullIData(oldp+1083,(0x45U),32);
        tracep->fullBit(oldp+1084,(vlSelf->top__DOT__mem_wb__DOT__flush));
        tracep->fullBit(oldp+1085,(vlSelf->top__DOT__mem_wb__DOT__stall));
        tracep->fullBit(oldp+1086,((1U & (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__stall)))));
    }
}
