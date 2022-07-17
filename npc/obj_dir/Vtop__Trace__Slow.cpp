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
        tracep->declBit(c+957,"reset", false,-1);
        tracep->declBit(c+958,"clock", false,-1);
        tracep->declBus(c+959,"instr", false,-1, 31,0);
        tracep->declQuad(c+960,"momory_data", false,-1, 63,0);
        tracep->declBit(c+962,"fetch_enb", false,-1);
        tracep->declQuad(c+963,"pc", false,-1, 63,0);
        tracep->declBus(c+965,"memop", false,-1, 1,0);
        tracep->declBit(c+966,"mem_ena", false,-1);
        tracep->declBit(c+967,"mem_wr", false,-1);
        tracep->declQuad(c+968,"mem_addr", false,-1, 63,0);
        tracep->declQuad(c+970,"mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+972,"difftest_instr", false,-1, 31,0);
        tracep->declQuad(c+973,"difftest_pc", false,-1, 63,0);
        tracep->declBit(c+957,"top reset", false,-1);
        tracep->declBit(c+958,"top clock", false,-1);
        tracep->declBus(c+959,"top instr", false,-1, 31,0);
        tracep->declQuad(c+960,"top momory_data", false,-1, 63,0);
        tracep->declBit(c+962,"top fetch_enb", false,-1);
        tracep->declQuad(c+963,"top pc", false,-1, 63,0);
        tracep->declBus(c+965,"top memop", false,-1, 1,0);
        tracep->declBit(c+966,"top mem_ena", false,-1);
        tracep->declBit(c+967,"top mem_wr", false,-1);
        tracep->declQuad(c+968,"top mem_addr", false,-1, 63,0);
        tracep->declQuad(c+970,"top mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+972,"top difftest_instr", false,-1, 31,0);
        tracep->declQuad(c+973,"top difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+214,"top rdata", false,-1, 63,0);
        tracep->declBus(c+975,"top wmask", false,-1, 7,0);
        tracep->declBit(c+797,"top mux_pc", false,-1);
        tracep->declQuad(c+798,"top branch", false,-1, 63,0);
        tracep->declBit(c+216,"top pc_ready", false,-1);
        tracep->declBit(c+217,"top pc_valid", false,-1);
        tracep->declBit(c+218,"top if_ready", false,-1);
        tracep->declBit(c+219,"top if_valid", false,-1);
        tracep->declQuad(c+220,"top ID_pc", false,-1, 63,0);
        tracep->declBus(c+222,"top ID_instr", false,-1, 31,0);
        tracep->declBit(c+797,"top nop", false,-1);
        tracep->declBit(c+223,"top load_stall", false,-1);
        tracep->declQuad(c+220,"top id_pc", false,-1, 63,0);
        tracep->declBus(c+222,"top id_instr", false,-1, 31,0);
        tracep->declBit(c+224,"top id_w_ena", false,-1);
        tracep->declBus(c+225,"top id_w_addr", false,-1, 4,0);
        tracep->declQuad(c+800,"top id_data1", false,-1, 63,0);
        tracep->declQuad(c+802,"top id_data2", false,-1, 63,0);
        tracep->declBit(c+226,"top id_mem_ena", false,-1);
        tracep->declBit(c+227,"top id_mem_wr", false,-1);
        tracep->declQuad(c+228,"top id_imm", false,-1, 63,0);
        tracep->declBus(c+230,"top id_exop", false,-1, 2,0);
        tracep->declBus(c+231,"top id_aluop", false,-1, 4,0);
        tracep->declBus(c+232,"top id_memwop", false,-1, 2,0);
        tracep->declBus(c+233,"top id_memrop", false,-1, 2,0);
        tracep->declBit(c+234,"top id_ready", false,-1);
        tracep->declBit(c+235,"top id_valid", false,-1);
        tracep->declBit(c+236,"top EX_w_ena", false,-1);
        tracep->declBus(c+237,"top EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+238,"top EX_data1", false,-1, 63,0);
        tracep->declQuad(c+240,"top EX_data2", false,-1, 63,0);
        tracep->declQuad(c+242,"top EX_imm", false,-1, 63,0);
        tracep->declBus(c+244,"top EX_exop", false,-1, 2,0);
        tracep->declBus(c+245,"top EX_aluop", false,-1, 4,0);
        tracep->declBus(c+246,"top EX_memwop", false,-1, 2,0);
        tracep->declBus(c+247,"top EX_memrop", false,-1, 2,0);
        tracep->declBit(c+248,"top EX_mem_ena", false,-1);
        tracep->declBit(c+249,"top EX_mem_wr", false,-1);
        tracep->declBus(c+250,"top EX_instr", false,-1, 31,0);
        tracep->declQuad(c+251,"top EX_pc", false,-1, 63,0);
        tracep->declBit(c+236,"top ex_w_ena", false,-1);
        tracep->declBus(c+237,"top ex_w_addr", false,-1, 4,0);
        tracep->declQuad(c+253,"top ex_w_data", false,-1, 63,0);
        tracep->declBus(c+246,"top ex_memwop", false,-1, 2,0);
        tracep->declBus(c+247,"top ex_memrop", false,-1, 2,0);
        tracep->declBit(c+248,"top ex_mem_ena", false,-1);
        tracep->declBit(c+249,"top ex_mem_wr", false,-1);
        tracep->declQuad(c+255,"top ex_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+240,"top ex_mem_data", false,-1, 63,0);
        tracep->declBus(c+250,"top ex_instr", false,-1, 31,0);
        tracep->declQuad(c+251,"top ex_pc", false,-1, 63,0);
        tracep->declBit(c+257,"top ex_ready", false,-1);
        tracep->declBit(c+258,"top ex_valid", false,-1);
        tracep->declBit(c+259,"top MEM_w_ena", false,-1);
        tracep->declBus(c+260,"top MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+261,"top MEM_w_data", false,-1, 63,0);
        tracep->declBus(c+263,"top MEM_memwop", false,-1, 2,0);
        tracep->declBus(c+264,"top MEM_memrop", false,-1, 2,0);
        tracep->declBit(c+265,"top MEM_mem_ena", false,-1);
        tracep->declBit(c+266,"top MEM_mem_wr", false,-1);
        tracep->declQuad(c+267,"top MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+269,"top MEM_mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+271,"top MEM_instr", false,-1, 31,0);
        tracep->declQuad(c+272,"top MEM_pc", false,-1, 63,0);
        tracep->declBit(c+259,"top mem_w_ena", false,-1);
        tracep->declBus(c+260,"top mem_w_addr", false,-1, 4,0);
        tracep->declQuad(c+274,"top mem_w_data", false,-1, 63,0);
        tracep->declQuad(c+272,"top mem_pc", false,-1, 63,0);
        tracep->declBus(c+271,"top mem_instr", false,-1, 31,0);
        tracep->declBit(c+276,"top mem_ready", false,-1);
        tracep->declBit(c+277,"top mem_valid", false,-1);
        tracep->declBit(c+278,"top WB_w_ena", false,-1);
        tracep->declBus(c+279,"top WB_w_addr", false,-1, 4,0);
        tracep->declQuad(c+280,"top WB_w_data", false,-1, 63,0);
        tracep->declQuad(c+282,"top WB_pc", false,-1, 63,0);
        tracep->declBus(c+284,"top WB_instr", false,-1, 31,0);
        tracep->declBit(c+278,"top wb_w_ena", false,-1);
        tracep->declBus(c+279,"top wb_w_addr", false,-1, 4,0);
        tracep->declQuad(c+280,"top wb_w_data", false,-1, 63,0);
        tracep->declBit(c+957,"top ysyx_22040931_IF reset", false,-1);
        tracep->declBit(c+958,"top ysyx_22040931_IF clock", false,-1);
        tracep->declBit(c+984,"top ysyx_22040931_IF flush", false,-1);
        tracep->declBit(c+985,"top ysyx_22040931_IF stall", false,-1);
        tracep->declBit(c+218,"top ysyx_22040931_IF if_ready", false,-1);
        tracep->declBit(c+216,"top ysyx_22040931_IF pc_ready", false,-1);
        tracep->declBit(c+217,"top ysyx_22040931_IF pc_valid", false,-1);
        tracep->declBit(c+797,"top ysyx_22040931_IF mux_pc", false,-1);
        tracep->declQuad(c+798,"top ysyx_22040931_IF branch", false,-1, 63,0);
        tracep->declBit(c+962,"top ysyx_22040931_IF fetch_enb", false,-1);
        tracep->declQuad(c+963,"top ysyx_22040931_IF if_pc", false,-1, 63,0);
        tracep->declBit(c+285,"top ysyx_22040931_IF pc_now_valid", false,-1);
        tracep->declBit(c+986,"top ysyx_22040931_IF pc_go", false,-1);
        tracep->declQuad(c+976,"top ysyx_22040931_IF pc_i", false,-1, 63,0);
        tracep->declBit(c+957,"top ysyx_22040931_IF ysyx_22040931_PC reset", false,-1);
        tracep->declBit(c+958,"top ysyx_22040931_IF ysyx_22040931_PC clock", false,-1);
        tracep->declBit(c+216,"top ysyx_22040931_IF ysyx_22040931_PC pc_ready", false,-1);
        tracep->declQuad(c+976,"top ysyx_22040931_IF ysyx_22040931_PC pc_i", false,-1, 63,0);
        tracep->declBit(c+962,"top ysyx_22040931_IF ysyx_22040931_PC fetch_enb", false,-1);
        tracep->declQuad(c+963,"top ysyx_22040931_IF ysyx_22040931_PC pc_o", false,-1, 63,0);
        tracep->declBit(c+957,"top if_id reset", false,-1);
        tracep->declBit(c+958,"top if_id clock", false,-1);
        tracep->declBit(c+987,"top if_id flush", false,-1);
        tracep->declBit(c+223,"top if_id stall", false,-1);
        tracep->declBit(c+797,"top if_id nop", false,-1);
        tracep->declBit(c+217,"top if_id pc_valid", false,-1);
        tracep->declBit(c+234,"top if_id id_ready", false,-1);
        tracep->declBit(c+218,"top if_id if_ready", false,-1);
        tracep->declBit(c+219,"top if_id if_valid", false,-1);
        tracep->declQuad(c+963,"top if_id IF_pc", false,-1, 63,0);
        tracep->declBus(c+959,"top if_id IF_instr", false,-1, 31,0);
        tracep->declQuad(c+220,"top if_id ID_pc", false,-1, 63,0);
        tracep->declBus(c+222,"top if_id ID_instr", false,-1, 31,0);
        tracep->declBit(c+219,"top if_id if_now_valid", false,-1);
        tracep->declBit(c+286,"top if_id if_go", false,-1);
        tracep->declBit(c+957,"top ysyx_22040931_ID reset", false,-1);
        tracep->declBit(c+958,"top ysyx_22040931_ID clock", false,-1);
        tracep->declBit(c+278,"top ysyx_22040931_ID w_ena_i", false,-1);
        tracep->declBus(c+279,"top ysyx_22040931_ID w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+280,"top ysyx_22040931_ID w_data_i", false,-1, 63,0);
        tracep->declQuad(c+220,"top ysyx_22040931_ID pc_i", false,-1, 63,0);
        tracep->declBus(c+222,"top ysyx_22040931_ID instr", false,-1, 31,0);
        tracep->declBit(c+236,"top ysyx_22040931_ID ex_w_ena", false,-1);
        tracep->declBus(c+237,"top ysyx_22040931_ID ex_w_addr", false,-1, 4,0);
        tracep->declQuad(c+253,"top ysyx_22040931_ID ex_w_data", false,-1, 63,0);
        tracep->declBit(c+259,"top ysyx_22040931_ID mem_w_ena", false,-1);
        tracep->declBus(c+260,"top ysyx_22040931_ID mem_w_addr", false,-1, 4,0);
        tracep->declQuad(c+274,"top ysyx_22040931_ID mem_w_data", false,-1, 63,0);
        tracep->declBit(c+248,"top ysyx_22040931_ID ex_mem_ena", false,-1);
        tracep->declBit(c+248,"top ysyx_22040931_ID ex_mem_wr", false,-1);
        tracep->declBit(c+797,"top ysyx_22040931_ID nop", false,-1);
        tracep->declBit(c+223,"top ysyx_22040931_ID load_stall", false,-1);
        tracep->declQuad(c+220,"top ysyx_22040931_ID pc_o", false,-1, 63,0);
        tracep->declBus(c+222,"top ysyx_22040931_ID instr_o", false,-1, 31,0);
        tracep->declQuad(c+798,"top ysyx_22040931_ID branch", false,-1, 63,0);
        tracep->declBit(c+797,"top ysyx_22040931_ID mux_pc", false,-1);
        tracep->declBit(c+224,"top ysyx_22040931_ID w_ena", false,-1);
        tracep->declBus(c+225,"top ysyx_22040931_ID w_addr", false,-1, 4,0);
        tracep->declQuad(c+800,"top ysyx_22040931_ID data1", false,-1, 63,0);
        tracep->declQuad(c+802,"top ysyx_22040931_ID data2", false,-1, 63,0);
        tracep->declBit(c+226,"top ysyx_22040931_ID mem_ena", false,-1);
        tracep->declBit(c+227,"top ysyx_22040931_ID mem_wr", false,-1);
        tracep->declQuad(c+228,"top ysyx_22040931_ID imm", false,-1, 63,0);
        tracep->declBus(c+230,"top ysyx_22040931_ID exop", false,-1, 2,0);
        tracep->declBus(c+231,"top ysyx_22040931_ID aluop", false,-1, 4,0);
        tracep->declBus(c+232,"top ysyx_22040931_ID memwop", false,-1, 2,0);
        tracep->declBus(c+233,"top ysyx_22040931_ID memrop", false,-1, 2,0);
        tracep->declBus(c+287,"top ysyx_22040931_ID ztype", false,-1, 2,0);
        tracep->declBit(c+288,"top ysyx_22040931_ID r_ena1", false,-1);
        tracep->declBus(c+289,"top ysyx_22040931_ID r_addr1", false,-1, 4,0);
        tracep->declQuad(c+978,"top ysyx_22040931_ID r_data1", false,-1, 63,0);
        tracep->declBit(c+290,"top ysyx_22040931_ID r_ena2", false,-1);
        tracep->declBus(c+291,"top ysyx_22040931_ID r_addr2", false,-1, 4,0);
        tracep->declQuad(c+980,"top ysyx_22040931_ID r_data2", false,-1, 63,0);
        tracep->declQuad(c+982,"top ysyx_22040931_ID ibranch", false,-1, 63,0);
        tracep->declQuad(c+292,"top ysyx_22040931_ID bbranch", false,-1, 63,0);
        tracep->declQuad(c+292,"top ysyx_22040931_ID jbranch", false,-1, 63,0);
        tracep->declBit(c+294,"top ysyx_22040931_ID need_ex1", false,-1);
        tracep->declBit(c+295,"top ysyx_22040931_ID need_ex2", false,-1);
        tracep->declBit(c+296,"top ysyx_22040931_ID need_mem1", false,-1);
        tracep->declBit(c+297,"top ysyx_22040931_ID need_mem2", false,-1);
        tracep->declBus(c+988,"top ysyx_22040931_ID branch_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID branch_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID branch_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+798,"top ysyx_22040931_ID branch_mux out", false,-1, 63,0);
        tracep->declBus(c+287,"top ysyx_22040931_ID branch_mux key", false,-1, 2,0);
        tracep->declQuad(c+990,"top ysyx_22040931_ID branch_mux default_out", false,-1, 63,0);
        tracep->declArray(c+804,"top ysyx_22040931_ID branch_mux lut", false,-1, 200,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID branch_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID branch_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID branch_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID branch_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+798,"top ysyx_22040931_ID branch_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+287,"top ysyx_22040931_ID branch_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+990,"top ysyx_22040931_ID branch_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+804,"top ysyx_22040931_ID branch_mux i1 lut", false,-1, 200,0);
        tracep->declBus(c+993,"top ysyx_22040931_ID branch_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+811+i*3,"top ysyx_22040931_ID branch_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+820+i*1,"top ysyx_22040931_ID branch_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+823+i*2,"top ysyx_22040931_ID branch_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+829,"top ysyx_22040931_ID branch_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+831,"top ysyx_22040931_ID branch_mux i1 hit", false,-1);
        tracep->declBus(c+994,"top ysyx_22040931_ID branch_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+222,"top ysyx_22040931_ID ysyx_22040931_Decoder instr", false,-1, 31,0);
        tracep->declQuad(c+800,"top ysyx_22040931_ID ysyx_22040931_Decoder r_data1", false,-1, 63,0);
        tracep->declQuad(c+802,"top ysyx_22040931_ID ysyx_22040931_Decoder r_data2", false,-1, 63,0);
        tracep->declBit(c+224,"top ysyx_22040931_ID ysyx_22040931_Decoder w_ena", false,-1);
        tracep->declBus(c+225,"top ysyx_22040931_ID ysyx_22040931_Decoder w_addr", false,-1, 4,0);
        tracep->declBit(c+288,"top ysyx_22040931_ID ysyx_22040931_Decoder r_ena1", false,-1);
        tracep->declBus(c+289,"top ysyx_22040931_ID ysyx_22040931_Decoder r_addr1", false,-1, 4,0);
        tracep->declBit(c+290,"top ysyx_22040931_ID ysyx_22040931_Decoder r_ena2", false,-1);
        tracep->declBus(c+291,"top ysyx_22040931_ID ysyx_22040931_Decoder r_addr2", false,-1, 4,0);
        tracep->declBit(c+226,"top ysyx_22040931_ID ysyx_22040931_Decoder mem_ena", false,-1);
        tracep->declBit(c+227,"top ysyx_22040931_ID ysyx_22040931_Decoder mem_wr", false,-1);
        tracep->declBus(c+287,"top ysyx_22040931_ID ysyx_22040931_Decoder ztype", false,-1, 2,0);
        tracep->declBus(c+230,"top ysyx_22040931_ID ysyx_22040931_Decoder exop", false,-1, 2,0);
        tracep->declBus(c+231,"top ysyx_22040931_ID ysyx_22040931_Decoder aluop", false,-1, 4,0);
        tracep->declBus(c+232,"top ysyx_22040931_ID ysyx_22040931_Decoder memwop", false,-1, 2,0);
        tracep->declBus(c+233,"top ysyx_22040931_ID ysyx_22040931_Decoder memrop", false,-1, 2,0);
        tracep->declBit(c+797,"top ysyx_22040931_ID ysyx_22040931_Decoder jump", false,-1);
        tracep->declBit(c+298,"top ysyx_22040931_ID ysyx_22040931_Decoder itype", false,-1);
        tracep->declBit(c+299,"top ysyx_22040931_ID ysyx_22040931_Decoder stype", false,-1);
        tracep->declBit(c+300,"top ysyx_22040931_ID ysyx_22040931_Decoder utype", false,-1);
        tracep->declBit(c+301,"top ysyx_22040931_ID ysyx_22040931_Decoder rtype", false,-1);
        tracep->declBit(c+302,"top ysyx_22040931_ID ysyx_22040931_Decoder jtype", false,-1);
        tracep->declBit(c+303,"top ysyx_22040931_ID ysyx_22040931_Decoder btype", false,-1);
        tracep->declBus(c+304,"top ysyx_22040931_ID ysyx_22040931_Decoder r_exop", false,-1, 2,0);
        tracep->declBus(c+305,"top ysyx_22040931_ID ysyx_22040931_Decoder i_exop", false,-1, 2,0);
        tracep->declBus(c+306,"top ysyx_22040931_ID ysyx_22040931_Decoder s_exop", false,-1, 2,0);
        tracep->declBus(c+307,"top ysyx_22040931_ID ysyx_22040931_Decoder u_exop", false,-1, 2,0);
        tracep->declBus(c+308,"top ysyx_22040931_ID ysyx_22040931_Decoder j_exop", false,-1, 2,0);
        tracep->declBus(c+309,"top ysyx_22040931_ID ysyx_22040931_Decoder b_exop", false,-1, 2,0);
        tracep->declBus(c+310,"top ysyx_22040931_ID ysyx_22040931_Decoder r_aluop", false,-1, 4,0);
        tracep->declBus(c+311,"top ysyx_22040931_ID ysyx_22040931_Decoder i_aluop", false,-1, 4,0);
        tracep->declBus(c+312,"top ysyx_22040931_ID ysyx_22040931_Decoder s_aluop", false,-1, 4,0);
        tracep->declBus(c+313,"top ysyx_22040931_ID ysyx_22040931_Decoder u_aluop", false,-1, 4,0);
        tracep->declBus(c+314,"top ysyx_22040931_ID ysyx_22040931_Decoder j_aluop", false,-1, 4,0);
        tracep->declBus(c+315,"top ysyx_22040931_ID ysyx_22040931_Decoder b_aluop", false,-1, 4,0);
        tracep->declBit(c+316,"top ysyx_22040931_ID ysyx_22040931_Decoder ijump", false,-1);
        tracep->declBit(c+832,"top ysyx_22040931_ID ysyx_22040931_Decoder bjump", false,-1);
        tracep->declBit(c+317,"top ysyx_22040931_ID ysyx_22040931_Decoder jjump", false,-1);
        tracep->declBus(c+995,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+996,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+318,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux out", false,-1, 10,0);
        tracep->declBus(c+287,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux key", false,-1, 2,0);
        tracep->declBus(c+997,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux default_out", false,-1, 10,0);
        tracep->declArray(c+319,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux lut", false,-1, 83,0);
        tracep->declBus(c+995,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+996,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+318,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 out", false,-1, 10,0);
        tracep->declBus(c+287,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+997,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 default_out", false,-1, 10,0);
        tracep->declArray(c+319,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 lut", false,-1, 83,0);
        tracep->declBus(c+998,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+322+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 pair_list", true,(i+0), 13,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+328+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+334+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 data_list", true,(i+0), 10,0);}}
        tracep->declBus(c+340,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 lut_out", false,-1, 10,0);
        tracep->declBit(c+341,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 hit", false,-1);
        tracep->declBus(c+999,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+797,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux out", false,-1, 0,0);
        tracep->declBus(c+287,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux key", false,-1, 2,0);
        tracep->declBus(c+1000,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux default_out", false,-1, 0,0);
        tracep->declBus(c+833,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux lut", false,-1, 11,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+797,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 out", false,-1, 0,0);
        tracep->declBus(c+287,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+1000,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 default_out", false,-1, 0,0);
        tracep->declBus(c+833,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 lut", false,-1, 11,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+834+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+837+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+840+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+843,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 lut_out", false,-1, 0,0);
        tracep->declBit(c+844,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 hit", false,-1);
        tracep->declBus(c+994,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode", false,-1, 6,0);
        tracep->declBus(c+343,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode_3", false,-1, 2,0);
        tracep->declBus(c+344,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode_7", false,-1, 6,0);
        tracep->declBus(c+310,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype aluop", false,-1, 4,0);
        tracep->declBus(c+304,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype exop", false,-1, 2,0);
        tracep->declBit(c+301,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype rtype", false,-1);
        tracep->declBus(c+345,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype out", false,-1, 8,0);
        tracep->declBus(c+346,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype chose", false,-1, 16,0);
        tracep->declBus(c+1002,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1003,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1004,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+345,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype out", false,-1, 8,0);
        tracep->declBus(c+346,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype key", false,-1, 16,0);
        tracep->declBus(c+1005,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype default_out", false,-1, 8,0);
        tracep->declArray(c+1006,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype lut", false,-1, 727,0);
        tracep->declBus(c+1002,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1003,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1004,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+345,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 out", false,-1, 8,0);
        tracep->declBus(c+346,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 key", false,-1, 16,0);
        tracep->declBus(c+1005,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 default_out", false,-1, 8,0);
        tracep->declArray(c+1006,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 lut", false,-1, 727,0);
        tracep->declBus(c+1029,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+1+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 pair_list", true,(i+0), 25,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+29+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+57+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+348,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 hit", false,-1);
        tracep->declBus(c+1030,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 i", false,-1, 31,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode", false,-1, 6,0);
        tracep->declBus(c+343,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_3", false,-1, 2,0);
        tracep->declBit(c+349,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_1", false,-1);
        tracep->declBus(c+344,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_7", false,-1, 6,0);
        tracep->declBit(c+316,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype jump", false,-1);
        tracep->declBus(c+233,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype memrop", false,-1, 2,0);
        tracep->declBus(c+311,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype aluop", false,-1, 4,0);
        tracep->declBus(c+305,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype exop", false,-1, 2,0);
        tracep->declBit(c+298,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype itype", false,-1);
        tracep->declBus(c+350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out", false,-1, 12,0);
        tracep->declBus(c+351,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out1", false,-1, 12,0);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out2", false,-1, 11,0);
        tracep->declBus(c+353,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out3", false,-1, 11,0);
        tracep->declBus(c+354,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out4", false,-1, 11,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose1", false,-1, 9,0);
        tracep->declBus(c+356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose2", false,-1, 15,0);
        tracep->declBus(c+357,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose3", false,-1, 16,0);
        tracep->declBus(c+358,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose4", false,-1, 17,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1031,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype out", false,-1, 12,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype key", false,-1, 3,0);
        tracep->declBus(c+1032,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype default_out", false,-1, 12,0);
        tracep->declArray(c+360,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype lut", false,-1, 67,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1031,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 out", false,-1, 12,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 key", false,-1, 3,0);
        tracep->declBus(c+1032,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 default_out", false,-1, 12,0);
        tracep->declArray(c+360,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 lut", false,-1, 67,0);
        tracep->declBus(c+1003,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+363+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+367+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+371+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 data_list", true,(i+0), 12,0);}}
        tracep->declBus(c+375,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 lut_out", false,-1, 12,0);
        tracep->declBit(c+376,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 hit", false,-1);
        tracep->declBus(c+1033,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 i", false,-1, 31,0);
        tracep->declBus(c+1031,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1031,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+351,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 out", false,-1, 12,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 key", false,-1, 9,0);
        tracep->declBus(c+1032,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 default_out", false,-1, 12,0);
        tracep->declArray(c+1035,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 lut", false,-1, 298,0);
        tracep->declBus(c+1031,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1031,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+351,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 out", false,-1, 12,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 key", false,-1, 9,0);
        tracep->declBus(c+1032,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 default_out", false,-1, 12,0);
        tracep->declArray(c+1035,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 lut", false,-1, 298,0);
        tracep->declBus(c+1045,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+85+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 pair_list", true,(i+0), 22,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+98+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+111+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 data_list", true,(i+0), 12,0);}}
        tracep->declBus(c+377,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 lut_out", false,-1, 12,0);
        tracep->declBit(c+378,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 hit", false,-1);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 i", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1048,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 out", false,-1, 11,0);
        tracep->declBus(c+356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 key", false,-1, 15,0);
        tracep->declBus(c+1049,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 default_out", false,-1, 11,0);
        tracep->declArray(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 lut", false,-1, 83,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1048,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 out", false,-1, 11,0);
        tracep->declBus(c+356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 key", false,-1, 15,0);
        tracep->declBus(c+1049,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 lut", false,-1, 83,0);
        tracep->declBus(c+1002,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+124+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+127+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 key_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+130+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+379,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+380,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 hit", false,-1);
        tracep->declBus(c+994,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 i", false,-1, 31,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1003,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1048,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+353,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 out", false,-1, 11,0);
        tracep->declBus(c+357,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 key", false,-1, 16,0);
        tracep->declBus(c+1049,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 default_out", false,-1, 11,0);
        tracep->declArray(c+1054,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 lut", false,-1, 144,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1003,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1048,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+353,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 out", false,-1, 11,0);
        tracep->declBus(c+357,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 key", false,-1, 16,0);
        tracep->declBus(c+1049,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1054,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 lut", false,-1, 144,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+133+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 pair_list", true,(i+0), 28,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+138+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+143+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+381,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+382,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 hit", false,-1);
        tracep->declBus(c+1060,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 i", false,-1, 31,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1048,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+354,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 out", false,-1, 11,0);
        tracep->declBus(c+358,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 key", false,-1, 17,0);
        tracep->declBus(c+1049,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 default_out", false,-1, 11,0);
        tracep->declQuad(c+1063,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 lut", false,-1, 59,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1048,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+354,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 out", false,-1, 11,0);
        tracep->declBus(c+358,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 key", false,-1, 17,0);
        tracep->declBus(c+1049,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 default_out", false,-1, 11,0);
        tracep->declQuad(c+1063,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 lut", false,-1, 59,0);
        tracep->declBus(c+1065,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+148+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 pair_list", true,(i+0), 29,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+150+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 key_list", true,(i+0), 17,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+152+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+383,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+384,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 hit", false,-1);
        tracep->declBus(c+1066,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 i", false,-1, 31,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype opcode", false,-1, 6,0);
        tracep->declBus(c+343,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype opcode_3", false,-1, 2,0);
        tracep->declBus(c+232,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype memwop", false,-1, 2,0);
        tracep->declBus(c+312,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype aluop", false,-1, 4,0);
        tracep->declBus(c+306,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype exop", false,-1, 2,0);
        tracep->declBit(c+299,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype stype", false,-1);
        tracep->declBus(c+385,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype out", false,-1, 11,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype chose", false,-1, 9,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1048,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+385,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype out", false,-1, 11,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype key", false,-1, 9,0);
        tracep->declBus(c+1049,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype default_out", false,-1, 11,0);
        tracep->declArray(c+1067,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype lut", false,-1, 87,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1048,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+385,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 out", false,-1, 11,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 key", false,-1, 9,0);
        tracep->declBus(c+1049,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1067,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 lut", false,-1, 87,0);
        tracep->declBus(c+1070,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+154+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 pair_list", true,(i+0), 21,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+158+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+162+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+387,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 hit", false,-1);
        tracep->declBus(c+1033,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 i", false,-1, 31,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype opcode", false,-1, 6,0);
        tracep->declBus(c+343,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype opcode_3", false,-1, 2,0);
        tracep->declQuad(c+800,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype r_data1", false,-1, 63,0);
        tracep->declQuad(c+802,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype r_data2", false,-1, 63,0);
        tracep->declBit(c+832,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype jump", false,-1);
        tracep->declBus(c+315,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype aluop", false,-1, 4,0);
        tracep->declBus(c+309,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype exop", false,-1, 2,0);
        tracep->declBit(c+303,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype btype", false,-1);
        tracep->declBus(c+388,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype chose", false,-1, 9,0);
        tracep->declBus(c+389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype out", false,-1, 8,0);
        tracep->declBus(c+845,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype jumpb", false,-1, 2,0);
        tracep->declBus(c+995,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+832,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b out", false,-1, 0,0);
        tracep->declBus(c+388,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b key", false,-1, 9,0);
        tracep->declBus(c+1000,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b default_out", false,-1, 0,0);
        tracep->declArray(c+846,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b lut", false,-1, 65,0);
        tracep->declBus(c+995,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+832,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 out", false,-1, 0,0);
        tracep->declBus(c+388,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 key", false,-1, 9,0);
        tracep->declBus(c+1000,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 default_out", false,-1, 0,0);
        tracep->declArray(c+846,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 lut", false,-1, 65,0);
        tracep->declBus(c+996,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+849+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+855+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+861+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+867,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 lut_out", false,-1, 0,0);
        tracep->declBit(c+868,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 hit", false,-1);
        tracep->declBus(c+999,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 i", false,-1, 31,0);
        tracep->declBus(c+995,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1004,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype out", false,-1, 8,0);
        tracep->declBus(c+388,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype key", false,-1, 9,0);
        tracep->declBus(c+1005,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype default_out", false,-1, 8,0);
        tracep->declArray(c+1071,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype lut", false,-1, 113,0);
        tracep->declBus(c+995,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1004,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 out", false,-1, 8,0);
        tracep->declBus(c+388,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 key", false,-1, 9,0);
        tracep->declBus(c+1005,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 default_out", false,-1, 8,0);
        tracep->declArray(c+1071,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 lut", false,-1, 113,0);
        tracep->declBus(c+1075,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+166+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 pair_list", true,(i+0), 18,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+172+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+178+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+391,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 hit", false,-1);
        tracep->declBus(c+999,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 i", false,-1, 31,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype opcode", false,-1, 6,0);
        tracep->declBit(c+317,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype jump", false,-1);
        tracep->declBus(c+314,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype aluop", false,-1, 4,0);
        tracep->declBus(c+308,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype exop", false,-1, 2,0);
        tracep->declBit(c+302,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype jtype", false,-1);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype chose", false,-1, 6,0);
        tracep->declBus(c+392,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype out", false,-1, 9,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1076,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+392,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype out", false,-1, 9,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype key", false,-1, 6,0);
        tracep->declBus(c+1077,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype default_out", false,-1, 9,0);
        tracep->declBus(c+1078,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype lut", false,-1, 16,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1076,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1034,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+392,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 out", false,-1, 9,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 key", false,-1, 6,0);
        tracep->declBus(c+1077,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 default_out", false,-1, 9,0);
        tracep->declBus(c+1078,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 lut", false,-1, 16,0);
        tracep->declBus(c+1003,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+184+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+185+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+186+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 data_list", true,(i+0), 9,0);}}
        tracep->declBus(c+393,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 lut_out", false,-1, 9,0);
        tracep->declBit(c+394,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 hit", false,-1);
        tracep->declBus(c+1079,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 i", false,-1, 31,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype opcode", false,-1, 6,0);
        tracep->declBus(c+313,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype aluop", false,-1, 4,0);
        tracep->declBus(c+307,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype exop", false,-1, 2,0);
        tracep->declBit(c+300,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype utype", false,-1);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype chose", false,-1, 6,0);
        tracep->declBus(c+395,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype out", false,-1, 8,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1076,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1004,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+395,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype out", false,-1, 8,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype key", false,-1, 6,0);
        tracep->declBus(c+1005,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype default_out", false,-1, 8,0);
        tracep->declBus(c+1080,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype lut", false,-1, 31,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1076,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1004,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+395,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 out", false,-1, 8,0);
        tracep->declBus(c+342,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 key", false,-1, 6,0);
        tracep->declBus(c+1005,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 default_out", false,-1, 8,0);
        tracep->declBus(c+1080,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 lut", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+187+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 pair_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+189+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+191+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+396,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+397,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 hit", false,-1);
        tracep->declBus(c+1066,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 i", false,-1, 31,0);
        tracep->declBus(c+398,"top ysyx_22040931_ID ysyx_22040931_IMM instr", false,-1, 24,0);
        tracep->declBus(c+287,"top ysyx_22040931_ID ysyx_22040931_IMM opt", false,-1, 2,0);
        tracep->declQuad(c+228,"top ysyx_22040931_ID ysyx_22040931_IMM imm", false,-1, 63,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+228,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux out", false,-1, 63,0);
        tracep->declBus(c+287,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux key", false,-1, 2,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux default_out", false,-1, 63,0);
        tracep->declArray(c+399,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux lut", false,-1, 334,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+228,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+287,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+399,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 lut", false,-1, 334,0);
        tracep->declBus(c+993,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+410+i*3,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+425+i*1,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+430+i*2,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+440,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+442,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 hit", false,-1);
        tracep->declBus(c+1060,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+957,"top ysyx_22040931_ID ysyx_22040931_Regfile reset", false,-1);
        tracep->declBit(c+958,"top ysyx_22040931_ID ysyx_22040931_Regfile clock", false,-1);
        tracep->declBit(c+278,"top ysyx_22040931_ID ysyx_22040931_Regfile w_ena", false,-1);
        tracep->declBus(c+279,"top ysyx_22040931_ID ysyx_22040931_Regfile w_addr", false,-1, 4,0);
        tracep->declQuad(c+280,"top ysyx_22040931_ID ysyx_22040931_Regfile w_data", false,-1, 63,0);
        tracep->declBit(c+288,"top ysyx_22040931_ID ysyx_22040931_Regfile r_ena1", false,-1);
        tracep->declBus(c+289,"top ysyx_22040931_ID ysyx_22040931_Regfile r_addr1", false,-1, 4,0);
        tracep->declQuad(c+978,"top ysyx_22040931_ID ysyx_22040931_Regfile r_data1", false,-1, 63,0);
        tracep->declBit(c+290,"top ysyx_22040931_ID ysyx_22040931_Regfile r_ena2", false,-1);
        tracep->declBus(c+291,"top ysyx_22040931_ID ysyx_22040931_Regfile r_addr2", false,-1, 4,0);
        tracep->declQuad(c+980,"top ysyx_22040931_ID ysyx_22040931_Regfile r_data2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+443+i*2,"top ysyx_22040931_ID ysyx_22040931_Regfile regs", true,(i+0), 63,0);}}
        tracep->declBus(c+507,"top ysyx_22040931_ID ysyx_22040931_Regfile i", false,-1, 31,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID reg_data1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID reg_data1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID reg_data1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+800,"top ysyx_22040931_ID reg_data1 out", false,-1, 63,0);
        tracep->declBus(c+508,"top ysyx_22040931_ID reg_data1 key", false,-1, 3,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_ID reg_data1 default_out", false,-1, 63,0);
        tracep->declArray(c+869,"top ysyx_22040931_ID reg_data1 lut", false,-1, 339,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID reg_data1 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID reg_data1 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID reg_data1 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID reg_data1 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+800,"top ysyx_22040931_ID reg_data1 i1 out", false,-1, 63,0);
        tracep->declBus(c+508,"top ysyx_22040931_ID reg_data1 i1 key", false,-1, 3,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_ID reg_data1 i1 default_out", false,-1, 63,0);
        tracep->declArray(c+869,"top ysyx_22040931_ID reg_data1 i1 lut", false,-1, 339,0);
        tracep->declBus(c+1083,"top ysyx_22040931_ID reg_data1 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+880+i*3,"top ysyx_22040931_ID reg_data1 i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+895+i*1,"top ysyx_22040931_ID reg_data1 i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+900+i*2,"top ysyx_22040931_ID reg_data1 i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+910,"top ysyx_22040931_ID reg_data1 i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+912,"top ysyx_22040931_ID reg_data1 i1 hit", false,-1);
        tracep->declBus(c+1060,"top ysyx_22040931_ID reg_data1 i1 i", false,-1, 31,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID reg_data2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID reg_data2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID reg_data2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+802,"top ysyx_22040931_ID reg_data2 out", false,-1, 63,0);
        tracep->declBus(c+509,"top ysyx_22040931_ID reg_data2 key", false,-1, 3,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_ID reg_data2 default_out", false,-1, 63,0);
        tracep->declArray(c+913,"top ysyx_22040931_ID reg_data2 lut", false,-1, 339,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID reg_data2 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1001,"top ysyx_22040931_ID reg_data2 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_ID reg_data2 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_ID reg_data2 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+802,"top ysyx_22040931_ID reg_data2 i1 out", false,-1, 63,0);
        tracep->declBus(c+509,"top ysyx_22040931_ID reg_data2 i1 key", false,-1, 3,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_ID reg_data2 i1 default_out", false,-1, 63,0);
        tracep->declArray(c+913,"top ysyx_22040931_ID reg_data2 i1 lut", false,-1, 339,0);
        tracep->declBus(c+1083,"top ysyx_22040931_ID reg_data2 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+924+i*3,"top ysyx_22040931_ID reg_data2 i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+939+i*1,"top ysyx_22040931_ID reg_data2 i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+944+i*2,"top ysyx_22040931_ID reg_data2 i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+954,"top ysyx_22040931_ID reg_data2 i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+956,"top ysyx_22040931_ID reg_data2 i1 hit", false,-1);
        tracep->declBus(c+1060,"top ysyx_22040931_ID reg_data2 i1 i", false,-1, 31,0);
        tracep->declBit(c+957,"top id_ex reset", false,-1);
        tracep->declBit(c+958,"top id_ex clock", false,-1);
        tracep->declBit(c+1084,"top id_ex flush", false,-1);
        tracep->declBit(c+1085,"top id_ex stall", false,-1);
        tracep->declBit(c+223,"top id_ex nop", false,-1);
        tracep->declBit(c+219,"top id_ex if_valid", false,-1);
        tracep->declBit(c+257,"top id_ex ex_ready", false,-1);
        tracep->declBit(c+234,"top id_ex id_ready", false,-1);
        tracep->declBit(c+235,"top id_ex id_valid", false,-1);
        tracep->declQuad(c+220,"top id_ex ID_pc", false,-1, 63,0);
        tracep->declBus(c+222,"top id_ex ID_instr", false,-1, 31,0);
        tracep->declBit(c+224,"top id_ex ID_w_ena", false,-1);
        tracep->declBus(c+225,"top id_ex ID_w_addr", false,-1, 4,0);
        tracep->declQuad(c+800,"top id_ex ID_data1", false,-1, 63,0);
        tracep->declQuad(c+802,"top id_ex ID_data2", false,-1, 63,0);
        tracep->declQuad(c+228,"top id_ex ID_imm", false,-1, 63,0);
        tracep->declBus(c+230,"top id_ex ID_exop", false,-1, 2,0);
        tracep->declBus(c+231,"top id_ex ID_aluop", false,-1, 4,0);
        tracep->declBus(c+232,"top id_ex ID_memwop", false,-1, 2,0);
        tracep->declBus(c+233,"top id_ex ID_memrop", false,-1, 2,0);
        tracep->declBit(c+226,"top id_ex ID_mem_ena", false,-1);
        tracep->declBit(c+227,"top id_ex ID_mem_wr", false,-1);
        tracep->declBit(c+236,"top id_ex EX_w_ena", false,-1);
        tracep->declBus(c+237,"top id_ex EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+238,"top id_ex EX_data1", false,-1, 63,0);
        tracep->declQuad(c+240,"top id_ex EX_data2", false,-1, 63,0);
        tracep->declQuad(c+242,"top id_ex EX_imm", false,-1, 63,0);
        tracep->declBus(c+244,"top id_ex EX_exop", false,-1, 2,0);
        tracep->declBus(c+245,"top id_ex EX_aluop", false,-1, 4,0);
        tracep->declBus(c+246,"top id_ex EX_memwop", false,-1, 2,0);
        tracep->declBus(c+247,"top id_ex EX_memrop", false,-1, 2,0);
        tracep->declBit(c+248,"top id_ex EX_mem_ena", false,-1);
        tracep->declBit(c+249,"top id_ex EX_mem_wr", false,-1);
        tracep->declBus(c+250,"top id_ex EX_instr", false,-1, 31,0);
        tracep->declQuad(c+251,"top id_ex EX_pc", false,-1, 63,0);
        tracep->declBit(c+1086,"top id_ex id_go", false,-1);
        tracep->declBit(c+235,"top id_ex id_now_valid", false,-1);
        tracep->declBit(c+236,"top ysyx_22040931_EX w_ena_i", false,-1);
        tracep->declBus(c+237,"top ysyx_22040931_EX w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+251,"top ysyx_22040931_EX pc_i", false,-1, 63,0);
        tracep->declBus(c+250,"top ysyx_22040931_EX instr", false,-1, 31,0);
        tracep->declQuad(c+238,"top ysyx_22040931_EX data1", false,-1, 63,0);
        tracep->declQuad(c+240,"top ysyx_22040931_EX data2", false,-1, 63,0);
        tracep->declQuad(c+242,"top ysyx_22040931_EX imm", false,-1, 63,0);
        tracep->declBus(c+244,"top ysyx_22040931_EX exop", false,-1, 2,0);
        tracep->declBus(c+245,"top ysyx_22040931_EX aluop", false,-1, 4,0);
        tracep->declBus(c+246,"top ysyx_22040931_EX memwop_i", false,-1, 2,0);
        tracep->declBus(c+247,"top ysyx_22040931_EX memrop_i", false,-1, 2,0);
        tracep->declBit(c+248,"top ysyx_22040931_EX mem_ena_i", false,-1);
        tracep->declBit(c+249,"top ysyx_22040931_EX mem_wr_i", false,-1);
        tracep->declBit(c+236,"top ysyx_22040931_EX w_ena", false,-1);
        tracep->declBus(c+237,"top ysyx_22040931_EX w_addr", false,-1, 4,0);
        tracep->declQuad(c+253,"top ysyx_22040931_EX w_data", false,-1, 63,0);
        tracep->declBus(c+246,"top ysyx_22040931_EX memwop", false,-1, 2,0);
        tracep->declBus(c+247,"top ysyx_22040931_EX memrop", false,-1, 2,0);
        tracep->declBit(c+248,"top ysyx_22040931_EX mem_ena", false,-1);
        tracep->declBit(c+249,"top ysyx_22040931_EX mem_wr", false,-1);
        tracep->declQuad(c+255,"top ysyx_22040931_EX mem_addr", false,-1, 63,0);
        tracep->declQuad(c+240,"top ysyx_22040931_EX mem_data", false,-1, 63,0);
        tracep->declBus(c+250,"top ysyx_22040931_EX instr_o", false,-1, 31,0);
        tracep->declQuad(c+251,"top ysyx_22040931_EX pc_o", false,-1, 63,0);
        tracep->declQuad(c+510,"top ysyx_22040931_EX result", false,-1, 63,0);
        tracep->declQuad(c+238,"top ysyx_22040931_EX ysyx_22040931_ALU num1", false,-1, 63,0);
        tracep->declQuad(c+240,"top ysyx_22040931_EX ysyx_22040931_ALU num2", false,-1, 63,0);
        tracep->declQuad(c+242,"top ysyx_22040931_EX ysyx_22040931_ALU imm", false,-1, 63,0);
        tracep->declQuad(c+251,"top ysyx_22040931_EX ysyx_22040931_ALU pc", false,-1, 63,0);
        tracep->declBus(c+245,"top ysyx_22040931_EX ysyx_22040931_ALU op", false,-1, 4,0);
        tracep->declQuad(c+510,"top ysyx_22040931_EX ysyx_22040931_ALU out", false,-1, 63,0);
        tracep->declQuad(c+238,"top ysyx_22040931_EX ysyx_22040931_ALU num1_s", false,-1, 63,0);
        tracep->declBus(c+512,"top ysyx_22040931_EX ysyx_22040931_ALU num1_sw", false,-1, 31,0);
        tracep->declQuad(c+240,"top ysyx_22040931_EX ysyx_22040931_ALU num2_s", false,-1, 63,0);
        tracep->declBus(c+513,"top ysyx_22040931_EX ysyx_22040931_ALU num2_sw", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_EX w_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_EX w_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_EX w_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+253,"top ysyx_22040931_EX w_data_mux out", false,-1, 63,0);
        tracep->declBus(c+244,"top ysyx_22040931_EX w_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_EX w_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+514,"top ysyx_22040931_EX w_data_mux lut", false,-1, 200,0);
        tracep->declBus(c+988,"top ysyx_22040931_EX w_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_EX w_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_EX w_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_EX w_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+253,"top ysyx_22040931_EX w_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+244,"top ysyx_22040931_EX w_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_EX w_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+514,"top ysyx_22040931_EX w_data_mux i1 lut", false,-1, 200,0);
        tracep->declBus(c+993,"top ysyx_22040931_EX w_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+521+i*3,"top ysyx_22040931_EX w_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+530+i*1,"top ysyx_22040931_EX w_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+533+i*2,"top ysyx_22040931_EX w_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+539,"top ysyx_22040931_EX w_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+541,"top ysyx_22040931_EX w_data_mux i1 hit", false,-1);
        tracep->declBus(c+994,"top ysyx_22040931_EX w_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1061,"top ysyx_22040931_EX mem_addr_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_EX mem_addr_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_EX mem_addr_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+255,"top ysyx_22040931_EX mem_addr_mux out", false,-1, 63,0);
        tracep->declBus(c+244,"top ysyx_22040931_EX mem_addr_mux key", false,-1, 2,0);
        tracep->declQuad(c+990,"top ysyx_22040931_EX mem_addr_mux default_out", false,-1, 63,0);
        tracep->declArray(c+542,"top ysyx_22040931_EX mem_addr_mux lut", false,-1, 133,0);
        tracep->declBus(c+1061,"top ysyx_22040931_EX mem_addr_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_EX mem_addr_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_EX mem_addr_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_EX mem_addr_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+255,"top ysyx_22040931_EX mem_addr_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+244,"top ysyx_22040931_EX mem_addr_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+990,"top ysyx_22040931_EX mem_addr_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+542,"top ysyx_22040931_EX mem_addr_mux i1 lut", false,-1, 133,0);
        tracep->declBus(c+993,"top ysyx_22040931_EX mem_addr_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+547+i*3,"top ysyx_22040931_EX mem_addr_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+553+i*1,"top ysyx_22040931_EX mem_addr_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+555+i*2,"top ysyx_22040931_EX mem_addr_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+559,"top ysyx_22040931_EX mem_addr_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+561,"top ysyx_22040931_EX mem_addr_mux i1 hit", false,-1);
        tracep->declBus(c+1066,"top ysyx_22040931_EX mem_addr_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+957,"top ex_mem reset", false,-1);
        tracep->declBit(c+958,"top ex_mem clock", false,-1);
        tracep->declBit(c+1087,"top ex_mem flush", false,-1);
        tracep->declBit(c+1088,"top ex_mem stall", false,-1);
        tracep->declBit(c+235,"top ex_mem id_valid", false,-1);
        tracep->declBit(c+276,"top ex_mem mem_ready", false,-1);
        tracep->declBit(c+257,"top ex_mem ex_ready", false,-1);
        tracep->declBit(c+258,"top ex_mem ex_valid", false,-1);
        tracep->declQuad(c+251,"top ex_mem EX_pc", false,-1, 63,0);
        tracep->declBus(c+250,"top ex_mem EX_instr", false,-1, 31,0);
        tracep->declBit(c+236,"top ex_mem EX_w_ena", false,-1);
        tracep->declBus(c+237,"top ex_mem EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+253,"top ex_mem EX_w_data", false,-1, 63,0);
        tracep->declBus(c+246,"top ex_mem EX_memwop", false,-1, 2,0);
        tracep->declBus(c+247,"top ex_mem EX_memrop", false,-1, 2,0);
        tracep->declBit(c+248,"top ex_mem EX_mem_ena", false,-1);
        tracep->declBit(c+249,"top ex_mem EX_mem_wr", false,-1);
        tracep->declQuad(c+255,"top ex_mem EX_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+240,"top ex_mem EX_mem_data", false,-1, 63,0);
        tracep->declBit(c+259,"top ex_mem MEM_w_ena", false,-1);
        tracep->declBus(c+260,"top ex_mem MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+261,"top ex_mem MEM_w_data", false,-1, 63,0);
        tracep->declBus(c+263,"top ex_mem MEM_memwop", false,-1, 2,0);
        tracep->declBus(c+264,"top ex_mem MEM_memrop", false,-1, 2,0);
        tracep->declBit(c+265,"top ex_mem MEM_mem_ena", false,-1);
        tracep->declBit(c+266,"top ex_mem MEM_mem_wr", false,-1);
        tracep->declQuad(c+267,"top ex_mem MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+269,"top ex_mem MEM_mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+271,"top ex_mem MEM_instr", false,-1, 31,0);
        tracep->declQuad(c+272,"top ex_mem MEM_pc", false,-1, 63,0);
        tracep->declBit(c+258,"top ex_mem ex_now_valid", false,-1);
        tracep->declBit(c+1089,"top ex_mem ex_go", false,-1);
        tracep->declBit(c+259,"top ysyx_22040931_MEM w_ena_i", false,-1);
        tracep->declBus(c+260,"top ysyx_22040931_MEM w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+261,"top ysyx_22040931_MEM w_data_i", false,-1, 63,0);
        tracep->declBus(c+263,"top ysyx_22040931_MEM memwop", false,-1, 2,0);
        tracep->declBus(c+264,"top ysyx_22040931_MEM memrop", false,-1, 2,0);
        tracep->declBit(c+265,"top ysyx_22040931_MEM mem_ena_i", false,-1);
        tracep->declBit(c+266,"top ysyx_22040931_MEM mem_wr_i", false,-1);
        tracep->declQuad(c+267,"top ysyx_22040931_MEM mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+269,"top ysyx_22040931_MEM mem_stor_data_i", false,-1, 63,0);
        tracep->declQuad(c+214,"top ysyx_22040931_MEM mem_data", false,-1, 63,0);
        tracep->declQuad(c+272,"top ysyx_22040931_MEM pc_i", false,-1, 63,0);
        tracep->declBus(c+271,"top ysyx_22040931_MEM instr", false,-1, 31,0);
        tracep->declBit(c+259,"top ysyx_22040931_MEM w_ena", false,-1);
        tracep->declBus(c+260,"top ysyx_22040931_MEM w_addr", false,-1, 4,0);
        tracep->declQuad(c+274,"top ysyx_22040931_MEM w_data", false,-1, 63,0);
        tracep->declBus(c+965,"top ysyx_22040931_MEM memop", false,-1, 1,0);
        tracep->declBit(c+966,"top ysyx_22040931_MEM mem_ena", false,-1);
        tracep->declBit(c+967,"top ysyx_22040931_MEM mem_wr", false,-1);
        tracep->declQuad(c+968,"top ysyx_22040931_MEM mem_addr", false,-1, 63,0);
        tracep->declQuad(c+970,"top ysyx_22040931_MEM mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+271,"top ysyx_22040931_MEM instr_o", false,-1, 31,0);
        tracep->declQuad(c+272,"top ysyx_22040931_MEM pc_o", false,-1, 63,0);
        tracep->declQuad(c+562,"top ysyx_22040931_MEM mem_r_data", false,-1, 63,0);
        tracep->declBus(c+564,"top ysyx_22040931_MEM memwrop", false,-1, 2,0);
        tracep->declQuad(c+565,"top ysyx_22040931_MEM stor_data_one", false,-1, 63,0);
        tracep->declQuad(c+567,"top ysyx_22040931_MEM stor_data_two", false,-1, 63,0);
        tracep->declQuad(c+569,"top ysyx_22040931_MEM stor_data_for", false,-1, 63,0);
        tracep->declBus(c+1076,"top ysyx_22040931_MEM memop_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_MEM memop_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1061,"top ysyx_22040931_MEM memop_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+965,"top ysyx_22040931_MEM memop_mux out", false,-1, 1,0);
        tracep->declBus(c+564,"top ysyx_22040931_MEM memop_mux key", false,-1, 2,0);
        tracep->declBus(c+1090,"top ysyx_22040931_MEM memop_mux default_out", false,-1, 1,0);
        tracep->declQuad(c+1091,"top ysyx_22040931_MEM memop_mux lut", false,-1, 34,0);
        tracep->declBus(c+1076,"top ysyx_22040931_MEM memop_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_MEM memop_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1061,"top ysyx_22040931_MEM memop_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_MEM memop_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+965,"top ysyx_22040931_MEM memop_mux i1 out", false,-1, 1,0);
        tracep->declBus(c+564,"top ysyx_22040931_MEM memop_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+1090,"top ysyx_22040931_MEM memop_mux i1 default_out", false,-1, 1,0);
        tracep->declQuad(c+1091,"top ysyx_22040931_MEM memop_mux i1 lut", false,-1, 34,0);
        tracep->declBus(c+1053,"top ysyx_22040931_MEM memop_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+193+i*1,"top ysyx_22040931_MEM memop_mux i1 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+200+i*1,"top ysyx_22040931_MEM memop_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+207+i*1,"top ysyx_22040931_MEM memop_mux i1 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+571,"top ysyx_22040931_MEM memop_mux i1 lut_out", false,-1, 1,0);
        tracep->declBit(c+572,"top ysyx_22040931_MEM memop_mux i1 hit", false,-1);
        tracep->declBus(c+1093,"top ysyx_22040931_MEM memop_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1076,"top ysyx_22040931_MEM mem_r_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_MEM mem_r_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_MEM mem_r_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+562,"top ysyx_22040931_MEM mem_r_data_mux out", false,-1, 63,0);
        tracep->declBus(c+264,"top ysyx_22040931_MEM mem_r_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_r_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+573,"top ysyx_22040931_MEM mem_r_data_mux lut", false,-1, 468,0);
        tracep->declBus(c+1076,"top ysyx_22040931_MEM mem_r_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_MEM mem_r_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_MEM mem_r_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_MEM mem_r_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+562,"top ysyx_22040931_MEM mem_r_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+264,"top ysyx_22040931_MEM mem_r_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_r_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+573,"top ysyx_22040931_MEM mem_r_data_mux i1 lut", false,-1, 468,0);
        tracep->declBus(c+993,"top ysyx_22040931_MEM mem_r_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+588+i*3,"top ysyx_22040931_MEM mem_r_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+609+i*1,"top ysyx_22040931_MEM mem_r_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+616+i*2,"top ysyx_22040931_MEM mem_r_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+630,"top ysyx_22040931_MEM mem_r_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+632,"top ysyx_22040931_MEM mem_r_data_mux i1 hit", false,-1);
        tracep->declBus(c+1093,"top ysyx_22040931_MEM mem_r_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1001,"top ysyx_22040931_MEM mem_stor_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_MEM mem_stor_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_MEM mem_stor_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+970,"top ysyx_22040931_MEM mem_stor_data_mux out", false,-1, 63,0);
        tracep->declBus(c+263,"top ysyx_22040931_MEM mem_stor_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_stor_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+633,"top ysyx_22040931_MEM mem_stor_data_mux lut", false,-1, 267,0);
        tracep->declBus(c+1001,"top ysyx_22040931_MEM mem_stor_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+988,"top ysyx_22040931_MEM mem_stor_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_MEM mem_stor_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_MEM mem_stor_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+970,"top ysyx_22040931_MEM mem_stor_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+263,"top ysyx_22040931_MEM mem_stor_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_stor_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+633,"top ysyx_22040931_MEM mem_stor_data_mux i1 lut", false,-1, 267,0);
        tracep->declBus(c+993,"top ysyx_22040931_MEM mem_stor_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+642+i*3,"top ysyx_22040931_MEM mem_stor_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+654+i*1,"top ysyx_22040931_MEM mem_stor_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+658+i*2,"top ysyx_22040931_MEM mem_stor_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+666,"top ysyx_22040931_MEM mem_stor_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+668,"top ysyx_22040931_MEM mem_stor_data_mux i1 hit", false,-1);
        tracep->declBus(c+1033,"top ysyx_22040931_MEM mem_stor_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1094,"top ysyx_22040931_MEM mem_stor_data1_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+995,"top ysyx_22040931_MEM mem_stor_data1_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_MEM mem_stor_data1_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+565,"top ysyx_22040931_MEM mem_stor_data1_mux out", false,-1, 63,0);
        tracep->declBus(c+669,"top ysyx_22040931_MEM mem_stor_data1_mux key", false,-1, 5,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_stor_data1_mux default_out", false,-1, 63,0);
        tracep->declArray(c+670,"top ysyx_22040931_MEM mem_stor_data1_mux lut", false,-1, 559,0);
        tracep->declBus(c+1094,"top ysyx_22040931_MEM mem_stor_data1_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+995,"top ysyx_22040931_MEM mem_stor_data1_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_MEM mem_stor_data1_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_MEM mem_stor_data1_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+565,"top ysyx_22040931_MEM mem_stor_data1_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+669,"top ysyx_22040931_MEM mem_stor_data1_mux i1 key", false,-1, 5,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_stor_data1_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+670,"top ysyx_22040931_MEM mem_stor_data1_mux i1 lut", false,-1, 559,0);
        tracep->declBus(c+1095,"top ysyx_22040931_MEM mem_stor_data1_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+688+i*3,"top ysyx_22040931_MEM mem_stor_data1_mux i1 pair_list", true,(i+0), 69,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+712+i*1,"top ysyx_22040931_MEM mem_stor_data1_mux i1 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+720+i*2,"top ysyx_22040931_MEM mem_stor_data1_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+736,"top ysyx_22040931_MEM mem_stor_data1_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+738,"top ysyx_22040931_MEM mem_stor_data1_mux i1 hit", false,-1);
        tracep->declBus(c+1096,"top ysyx_22040931_MEM mem_stor_data1_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1001,"top ysyx_22040931_MEM mem_stor_data2_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1053,"top ysyx_22040931_MEM mem_stor_data2_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_MEM mem_stor_data2_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+567,"top ysyx_22040931_MEM mem_stor_data2_mux out", false,-1, 63,0);
        tracep->declBus(c+739,"top ysyx_22040931_MEM mem_stor_data2_mux key", false,-1, 4,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_stor_data2_mux default_out", false,-1, 63,0);
        tracep->declArray(c+740,"top ysyx_22040931_MEM mem_stor_data2_mux lut", false,-1, 275,0);
        tracep->declBus(c+1001,"top ysyx_22040931_MEM mem_stor_data2_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1053,"top ysyx_22040931_MEM mem_stor_data2_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_MEM mem_stor_data2_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_MEM mem_stor_data2_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+567,"top ysyx_22040931_MEM mem_stor_data2_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+739,"top ysyx_22040931_MEM mem_stor_data2_mux i1 key", false,-1, 4,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_stor_data2_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+740,"top ysyx_22040931_MEM mem_stor_data2_mux i1 lut", false,-1, 275,0);
        tracep->declBus(c+1097,"top ysyx_22040931_MEM mem_stor_data2_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+749+i*3,"top ysyx_22040931_MEM mem_stor_data2_mux i1 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+761+i*1,"top ysyx_22040931_MEM mem_stor_data2_mux i1 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+765+i*2,"top ysyx_22040931_MEM mem_stor_data2_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+773,"top ysyx_22040931_MEM mem_stor_data2_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+775,"top ysyx_22040931_MEM mem_stor_data2_mux i1 hit", false,-1);
        tracep->declBus(c+1033,"top ysyx_22040931_MEM mem_stor_data2_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1061,"top ysyx_22040931_MEM mem_stor_data3_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1001,"top ysyx_22040931_MEM mem_stor_data3_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_MEM mem_stor_data3_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+569,"top ysyx_22040931_MEM mem_stor_data3_mux out", false,-1, 63,0);
        tracep->declBus(c+776,"top ysyx_22040931_MEM mem_stor_data3_mux key", false,-1, 3,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_stor_data3_mux default_out", false,-1, 63,0);
        tracep->declArray(c+777,"top ysyx_22040931_MEM mem_stor_data3_mux lut", false,-1, 135,0);
        tracep->declBus(c+1061,"top ysyx_22040931_MEM mem_stor_data3_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1001,"top ysyx_22040931_MEM mem_stor_data3_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+989,"top ysyx_22040931_MEM mem_stor_data3_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+992,"top ysyx_22040931_MEM mem_stor_data3_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+569,"top ysyx_22040931_MEM mem_stor_data3_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+776,"top ysyx_22040931_MEM mem_stor_data3_mux i1 key", false,-1, 3,0);
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_stor_data3_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+777,"top ysyx_22040931_MEM mem_stor_data3_mux i1 lut", false,-1, 135,0);
        tracep->declBus(c+1083,"top ysyx_22040931_MEM mem_stor_data3_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+782+i*3,"top ysyx_22040931_MEM mem_stor_data3_mux i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+788+i*1,"top ysyx_22040931_MEM mem_stor_data3_mux i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+790+i*2,"top ysyx_22040931_MEM mem_stor_data3_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+794,"top ysyx_22040931_MEM mem_stor_data3_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+796,"top ysyx_22040931_MEM mem_stor_data3_mux i1 hit", false,-1);
        tracep->declBus(c+1066,"top ysyx_22040931_MEM mem_stor_data3_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+957,"top mem_wb reset", false,-1);
        tracep->declBit(c+958,"top mem_wb clock", false,-1);
        tracep->declBit(c+1098,"top mem_wb flush", false,-1);
        tracep->declBit(c+1099,"top mem_wb stall", false,-1);
        tracep->declBit(c+258,"top mem_wb ex_valid", false,-1);
        tracep->declBit(c+276,"top mem_wb mem_ready", false,-1);
        tracep->declBit(c+277,"top mem_wb mem_valid", false,-1);
        tracep->declQuad(c+272,"top mem_wb MEM_pc", false,-1, 63,0);
        tracep->declBus(c+271,"top mem_wb MEM_instr", false,-1, 31,0);
        tracep->declBit(c+259,"top mem_wb MEM_w_ena", false,-1);
        tracep->declBus(c+260,"top mem_wb MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+274,"top mem_wb MEM_w_data", false,-1, 63,0);
        tracep->declBit(c+278,"top mem_wb WB_w_ena", false,-1);
        tracep->declBus(c+279,"top mem_wb WB_w_addr", false,-1, 4,0);
        tracep->declQuad(c+280,"top mem_wb WB_w_data", false,-1, 63,0);
        tracep->declBus(c+284,"top mem_wb WB_instr", false,-1, 31,0);
        tracep->declQuad(c+282,"top mem_wb WB_pc", false,-1, 63,0);
        tracep->declBit(c+277,"top mem_wb mem_now_valid", false,-1);
        tracep->declBit(c+1100,"top mem_wb mem_go", false,-1);
        tracep->declBit(c+278,"top ysyx_22040931_WB w_ena_i", false,-1);
        tracep->declBus(c+279,"top ysyx_22040931_WB w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+280,"top ysyx_22040931_WB w_data_i", false,-1, 63,0);
        tracep->declQuad(c+282,"top ysyx_22040931_WB pc_i", false,-1, 63,0);
        tracep->declBit(c+278,"top ysyx_22040931_WB w_ena", false,-1);
        tracep->declBus(c+279,"top ysyx_22040931_WB w_addr", false,-1, 4,0);
        tracep->declQuad(c+280,"top ysyx_22040931_WB w_data", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp1129;
    VlWide<5>/*159:0*/ __Vtemp1130;
    VlWide<3>/*95:0*/ __Vtemp1131;
    VlWide<4>/*127:0*/ __Vtemp1132;
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
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__load_stall));
        tracep->fullBit(oldp+224,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 0xaU))));
        tracep->fullCData(oldp+225,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 7U))),5);
        tracep->fullBit(oldp+226,((IData)(((0U != (0xeU 
                                                   & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))) 
                                           | (0U != 
                                              (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))))));
        tracep->fullBit(oldp+227,((0U != (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))));
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__id_imm),64);
        tracep->fullCData(oldp+230,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+231,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))),5);
        tracep->fullCData(oldp+232,((7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))),3);
        tracep->fullCData(oldp+233,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                           >> 1U))),3);
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__id_ready));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__id_ex__DOT__id_now_valid));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__EX_w_ena));
        tracep->fullCData(oldp+237,(vlSelf->top__DOT__EX_w_addr),5);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__EX_data1),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__EX_data2),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__EX_imm),64);
        tracep->fullCData(oldp+244,(vlSelf->top__DOT__EX_exop),3);
        tracep->fullCData(oldp+245,(vlSelf->top__DOT__EX_aluop),5);
        tracep->fullCData(oldp+246,(vlSelf->top__DOT__EX_memwop),3);
        tracep->fullCData(oldp+247,(vlSelf->top__DOT__EX_memrop),3);
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__EX_mem_ena));
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__EX_mem_wr));
        tracep->fullIData(oldp+250,(vlSelf->top__DOT__EX_instr),32);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__EX_pc),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__ex_w_data),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__ex_mem_addr),64);
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__ex_ready));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__MEM_w_ena));
        tracep->fullCData(oldp+260,(vlSelf->top__DOT__MEM_w_addr),5);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__MEM_w_data),64);
        tracep->fullCData(oldp+263,(vlSelf->top__DOT__MEM_memwop),3);
        tracep->fullCData(oldp+264,(vlSelf->top__DOT__MEM_memrop),3);
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__MEM_mem_ena));
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__MEM_mem_wr));
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__MEM_mem_addr),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__MEM_mem_stor_data),64);
        tracep->fullIData(oldp+271,(vlSelf->top__DOT__MEM_instr),32);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__MEM_pc),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__mem_w_data),64);
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__mem_ready));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__mem_wb__DOT__mem_now_valid));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__WB_w_ena));
        tracep->fullCData(oldp+279,(vlSelf->top__DOT__WB_w_addr),5);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__WB_w_data),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__WB_pc),64);
        tracep->fullIData(oldp+284,(vlSelf->top__DOT__WB_instr),32);
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid));
        tracep->fullBit(oldp+286,((1U & (~ (IData)(vlSelf->top__DOT__load_stall)))));
        tracep->fullCData(oldp+287,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype),3);
        tracep->fullBit(oldp+288,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 9U))));
        tracep->fullCData(oldp+289,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 0xfU))),5);
        tracep->fullBit(oldp+290,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 8U))));
        tracep->fullCData(oldp+291,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch),64);
        tracep->fullBit(oldp+294,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__EX_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 9U))))));
        tracep->fullBit(oldp+295,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__EX_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 8U))))));
        tracep->fullBit(oldp+296,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 9U))))));
        tracep->fullBit(oldp+297,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 8U))))));
        tracep->fullBit(oldp+298,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+299,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+300,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                         >> 8U))));
        tracep->fullBit(oldp+301,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                         >> 8U))));
        tracep->fullBit(oldp+302,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                         >> 9U))));
        tracep->fullBit(oldp+303,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                         >> 8U))));
        tracep->fullCData(oldp+304,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+305,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                           >> 9U))),3);
        tracep->fullCData(oldp+306,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                           >> 8U))),3);
        tracep->fullCData(oldp+307,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+308,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+309,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+310,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out))),5);
        tracep->fullCData(oldp+311,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                              >> 4U))),5);
        tracep->fullCData(oldp+312,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                              >> 3U))),5);
        tracep->fullCData(oldp+313,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out))),5);
        tracep->fullCData(oldp+314,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                              >> 1U))),5);
        tracep->fullCData(oldp+315,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out))),5);
        tracep->fullBit(oldp+316,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))));
        tracep->fullBit(oldp+317,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out))));
        tracep->fullSData(oldp+318,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1),11);
        tracep->fullWData(oldp+319,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4),84);
        tracep->fullSData(oldp+322,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[0]),14);
        tracep->fullSData(oldp+323,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[1]),14);
        tracep->fullSData(oldp+324,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[2]),14);
        tracep->fullSData(oldp+325,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[3]),14);
        tracep->fullSData(oldp+326,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[4]),14);
        tracep->fullSData(oldp+327,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[5]),14);
        tracep->fullCData(oldp+328,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+329,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+330,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+331,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+332,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullCData(oldp+333,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[5]),3);
        tracep->fullSData(oldp+334,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[0]),11);
        tracep->fullSData(oldp+335,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[1]),11);
        tracep->fullSData(oldp+336,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[2]),11);
        tracep->fullSData(oldp+337,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[3]),11);
        tracep->fullSData(oldp+338,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[4]),11);
        tracep->fullSData(oldp+339,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[5]),11);
        tracep->fullSData(oldp+340,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out),11);
        tracep->fullBit(oldp+341,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+342,((0x7fU & vlSelf->top__DOT__ID_instr)),7);
        tracep->fullCData(oldp+343,((7U & (vlSelf->top__DOT__ID_instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+344,((vlSelf->top__DOT__ID_instr 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+345,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out),9);
        tracep->fullIData(oldp+346,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose),17);
        tracep->fullSData(oldp+347,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+349,((1U & (vlSelf->top__DOT__ID_instr 
                                         >> 0x14U))));
        tracep->fullSData(oldp+350,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out),13);
        tracep->fullSData(oldp+351,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1),13);
        tracep->fullSData(oldp+352,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2),12);
        tracep->fullSData(oldp+353,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3),12);
        tracep->fullSData(oldp+354,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4),12);
        tracep->fullSData(oldp+355,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1),10);
        tracep->fullSData(oldp+356,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2),16);
        tracep->fullIData(oldp+357,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3),17);
        tracep->fullIData(oldp+358,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4),18);
        tracep->fullCData(oldp+359,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2),4);
        tracep->fullWData(oldp+360,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4),68);
        tracep->fullIData(oldp+363,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[0]),17);
        tracep->fullIData(oldp+364,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[1]),17);
        tracep->fullIData(oldp+365,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[2]),17);
        tracep->fullIData(oldp+366,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[3]),17);
        tracep->fullCData(oldp+367,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+368,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+369,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+370,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[3]),4);
        tracep->fullSData(oldp+371,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[0]),13);
        tracep->fullSData(oldp+372,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[1]),13);
        tracep->fullSData(oldp+373,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[2]),13);
        tracep->fullSData(oldp+374,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[3]),13);
        tracep->fullSData(oldp+375,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out),13);
        tracep->fullBit(oldp+376,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+377,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out),13);
        tracep->fullBit(oldp+378,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+379,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+380,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+381,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+382,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+383,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+384,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+385,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out),12);
        tracep->fullSData(oldp+386,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+388,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose),10);
        tracep->fullSData(oldp+389,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out),9);
        tracep->fullSData(oldp+390,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+391,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+392,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out),10);
        tracep->fullSData(oldp+393,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__lut_out),10);
        tracep->fullBit(oldp+394,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+395,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out),9);
        tracep->fullSData(oldp+396,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+397,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit));
        tracep->fullIData(oldp+398,((vlSelf->top__DOT__ID_instr 
                                     >> 7U)),25);
        tracep->fullWData(oldp+399,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4),335);
        tracep->fullWData(oldp+410,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+413,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+416,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+419,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+422,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+425,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+426,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+427,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+428,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+429,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullQData(oldp+430,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+442,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit));
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+447,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+449,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+451,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+453,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+455,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+457,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+459,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+461,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+463,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+465,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+467,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+469,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+471,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+473,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+475,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+477,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+479,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+481,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+483,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+485,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+487,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+489,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+491,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+495,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[31]),64);
        tracep->fullIData(oldp+507,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__i),32);
        tracep->fullCData(oldp+508,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2),4);
        tracep->fullCData(oldp+509,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2),4);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result),64);
        tracep->fullIData(oldp+512,((IData)(vlSelf->top__DOT__EX_data1)),32);
        tracep->fullIData(oldp+513,((IData)(vlSelf->top__DOT__EX_data2)),32);
        tracep->fullWData(oldp+514,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4),201);
        tracep->fullWData(oldp+521,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+524,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+527,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+530,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+531,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+532,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+539,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+541,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+542,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4),134);
        tracep->fullWData(oldp+547,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+550,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullCData(oldp+553,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+554,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+561,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit));
        tracep->fullQData(oldp+562,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data),64);
        tracep->fullCData(oldp+564,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop),3);
        tracep->fullQData(oldp+565,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one),64);
        tracep->fullQData(oldp+567,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two),64);
        tracep->fullQData(oldp+569,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for),64);
        tracep->fullCData(oldp+571,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out),2);
        tracep->fullBit(oldp+572,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+573,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4),469);
        tracep->fullWData(oldp+588,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+591,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+594,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+597,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+600,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+603,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+606,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[6]),67);
        tracep->fullCData(oldp+609,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+610,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+611,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+612,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+613,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullCData(oldp+614,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[5]),3);
        tracep->fullCData(oldp+615,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[6]),3);
        tracep->fullQData(oldp+616,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+618,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+620,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+622,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+624,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+626,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[5]),64);
        tracep->fullQData(oldp+628,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[6]),64);
        tracep->fullQData(oldp+630,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+632,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+633,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4),268);
        tracep->fullWData(oldp+642,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+645,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+648,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+651,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullCData(oldp+654,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+655,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+656,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+657,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullQData(oldp+658,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+660,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+662,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+664,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+666,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+668,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+669,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2),6);
        tracep->fullWData(oldp+670,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4),560);
        tracep->fullWData(oldp+688,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[0]),70);
        tracep->fullWData(oldp+691,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[1]),70);
        tracep->fullWData(oldp+694,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[2]),70);
        tracep->fullWData(oldp+697,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[3]),70);
        tracep->fullWData(oldp+700,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[4]),70);
        tracep->fullWData(oldp+703,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[5]),70);
        tracep->fullWData(oldp+706,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[6]),70);
        tracep->fullWData(oldp+709,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[7]),70);
        tracep->fullCData(oldp+712,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[0]),6);
        tracep->fullCData(oldp+713,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[1]),6);
        tracep->fullCData(oldp+714,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[2]),6);
        tracep->fullCData(oldp+715,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[3]),6);
        tracep->fullCData(oldp+716,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[4]),6);
        tracep->fullCData(oldp+717,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[5]),6);
        tracep->fullCData(oldp+718,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[6]),6);
        tracep->fullCData(oldp+719,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[7]),6);
        tracep->fullQData(oldp+720,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+722,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+724,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+726,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+728,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+730,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[5]),64);
        tracep->fullQData(oldp+732,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[6]),64);
        tracep->fullQData(oldp+734,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[7]),64);
        tracep->fullQData(oldp+736,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+738,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+739,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2),5);
        tracep->fullWData(oldp+740,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4),276);
        tracep->fullWData(oldp+749,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+752,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+755,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+758,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[3]),69);
        tracep->fullCData(oldp+761,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[0]),5);
        tracep->fullCData(oldp+762,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[1]),5);
        tracep->fullCData(oldp+763,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[2]),5);
        tracep->fullCData(oldp+764,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[3]),5);
        tracep->fullQData(oldp+765,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+767,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+769,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+771,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+773,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+775,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+776,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2),4);
        tracep->fullWData(oldp+777,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4),136);
        tracep->fullWData(oldp+782,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+785,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+788,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+789,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[1]),4);
        tracep->fullQData(oldp+790,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+792,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+794,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+796,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+797,(vlSelf->top__DOT__mux_pc));
        tracep->fullQData(oldp+798,(vlSelf->top__DOT__branch),64);
        tracep->fullQData(oldp+800,(vlSelf->top__DOT__id_data1),64);
        tracep->fullQData(oldp+802,(vlSelf->top__DOT__id_data2),64);
        tracep->fullWData(oldp+804,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4),201);
        tracep->fullWData(oldp+811,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+814,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+817,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+820,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+821,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+822,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullQData(oldp+823,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+825,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+827,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+829,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+831,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+832,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__bjump));
        tracep->fullSData(oldp+833,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4),12);
        tracep->fullCData(oldp+834,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+835,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+836,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+837,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+838,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+839,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullBit(oldp+840,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[0]));
        tracep->fullBit(oldp+841,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[1]));
        tracep->fullBit(oldp+842,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[2]));
        tracep->fullBit(oldp+843,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out));
        tracep->fullBit(oldp+844,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+845,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb),3);
        tracep->fullWData(oldp+846,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4),66);
        tracep->fullSData(oldp+849,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+850,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+851,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+852,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+853,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+854,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+855,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[0]),10);
        tracep->fullSData(oldp+856,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[1]),10);
        tracep->fullSData(oldp+857,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[2]),10);
        tracep->fullSData(oldp+858,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[3]),10);
        tracep->fullSData(oldp+859,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[4]),10);
        tracep->fullSData(oldp+860,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[5]),10);
        tracep->fullBit(oldp+861,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[0]));
        tracep->fullBit(oldp+862,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[1]));
        tracep->fullBit(oldp+863,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[2]));
        tracep->fullBit(oldp+864,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[3]));
        tracep->fullBit(oldp+865,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[4]));
        tracep->fullBit(oldp+866,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[5]));
        tracep->fullBit(oldp+867,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out));
        tracep->fullBit(oldp+868,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+869,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4),340);
        tracep->fullWData(oldp+880,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+883,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+886,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+889,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+892,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[4]),68);
        tracep->fullCData(oldp+895,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+896,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+897,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+898,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[3]),4);
        tracep->fullCData(oldp+899,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[4]),4);
        tracep->fullQData(oldp+900,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+902,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+904,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+906,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+908,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+910,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+912,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+913,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4),340);
        tracep->fullWData(oldp+924,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+927,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+930,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+933,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+936,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[4]),68);
        tracep->fullCData(oldp+939,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+940,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+941,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+942,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[3]),4);
        tracep->fullCData(oldp+943,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[4]),4);
        tracep->fullQData(oldp+944,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+946,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+948,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+950,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+952,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+954,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+956,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+957,(vlSelf->reset));
        tracep->fullBit(oldp+958,(vlSelf->clock));
        tracep->fullIData(oldp+959,(vlSelf->instr),32);
        tracep->fullQData(oldp+960,(vlSelf->momory_data),64);
        tracep->fullBit(oldp+962,(vlSelf->fetch_enb));
        tracep->fullQData(oldp+963,(vlSelf->pc),64);
        tracep->fullCData(oldp+965,(vlSelf->memop),2);
        tracep->fullBit(oldp+966,(vlSelf->mem_ena));
        tracep->fullBit(oldp+967,(vlSelf->mem_wr));
        tracep->fullQData(oldp+968,(vlSelf->mem_addr),64);
        tracep->fullQData(oldp+970,(vlSelf->mem_stor_data),64);
        tracep->fullIData(oldp+972,(vlSelf->difftest_instr),32);
        tracep->fullQData(oldp+973,(vlSelf->difftest_pc),64);
        tracep->fullCData(oldp+975,(((3U == (IData)(vlSelf->memop))
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
        tracep->fullQData(oldp+976,(((IData)(vlSelf->top__DOT__mux_pc)
                                      ? vlSelf->top__DOT__branch
                                      : (4ULL + vlSelf->pc))),64);
        tracep->fullQData(oldp+978,(((IData)(vlSelf->reset)
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
        tracep->fullQData(oldp+980,(((IData)(vlSelf->reset)
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
        tracep->fullQData(oldp+982,((vlSelf->top__DOT__id_data1 
                                     + vlSelf->top__DOT__id_imm)),64);
        tracep->fullBit(oldp+984,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__flush));
        tracep->fullBit(oldp+985,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall));
        tracep->fullBit(oldp+986,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall)))));
        tracep->fullBit(oldp+987,(vlSelf->top__DOT__if_id__DOT__flush));
        tracep->fullIData(oldp+988,(3U),32);
        tracep->fullIData(oldp+989,(0x40U),32);
        tracep->fullQData(oldp+990,(0x80000000ULL),64);
        tracep->fullIData(oldp+992,(1U),32);
        tracep->fullIData(oldp+993,(0x43U),32);
        tracep->fullIData(oldp+994,(3U),32);
        tracep->fullIData(oldp+995,(6U),32);
        tracep->fullIData(oldp+996,(0xbU),32);
        tracep->fullSData(oldp+997,(0U),11);
        tracep->fullIData(oldp+998,(0xeU),32);
        tracep->fullIData(oldp+999,(6U),32);
        tracep->fullBit(oldp+1000,(0U));
        tracep->fullIData(oldp+1001,(4U),32);
        tracep->fullIData(oldp+1002,(0x1cU),32);
        tracep->fullIData(oldp+1003,(0x11U),32);
        tracep->fullIData(oldp+1004,(9U),32);
        tracep->fullSData(oldp+1005,(0U),9);
        tracep->fullWData(oldp+1006,(Vtop__ConstPool__CONST_62d53ceb_0),728);
        tracep->fullIData(oldp+1029,(0x1aU),32);
        tracep->fullIData(oldp+1030,(0x1cU),32);
        tracep->fullIData(oldp+1031,(0xdU),32);
        tracep->fullSData(oldp+1032,(0U),13);
        tracep->fullIData(oldp+1033,(4U),32);
        tracep->fullIData(oldp+1034,(0xaU),32);
        tracep->fullWData(oldp+1035,(Vtop__ConstPool__CONST_f35eebe5_0),299);
        tracep->fullIData(oldp+1045,(0x17U),32);
        tracep->fullIData(oldp+1046,(0xdU),32);
        tracep->fullIData(oldp+1047,(0x10U),32);
        tracep->fullIData(oldp+1048,(0xcU),32);
        tracep->fullSData(oldp+1049,(0U),12);
        __Vtemp1129[0U] = 0x293f48U;
        __Vtemp1129[1U] = 0x404293f5U;
        __Vtemp1129[2U] = 0x93fU;
        tracep->fullWData(oldp+1050,(__Vtemp1129),84);
        tracep->fullIData(oldp+1053,(5U),32);
        __Vtemp1130[0U] = 0x29bf68U;
        __Vtemp1130[1U] = 0xe10537ecU;
        __Vtemp1130[2U] = 0x980064fcU;
        __Vtemp1130[3U] = 0xe580089fU;
        __Vtemp1130[4U] = 0x9bU;
        tracep->fullWData(oldp+1054,(__Vtemp1130),145);
        tracep->fullIData(oldp+1059,(0x1dU),32);
        tracep->fullIData(oldp+1060,(5U),32);
        tracep->fullIData(oldp+1061,(2U),32);
        tracep->fullIData(oldp+1062,(0x12U),32);
        tracep->fullQData(oldp+1063,(0x1cec000473b00ULL),60);
        tracep->fullIData(oldp+1065,(0x1eU),32);
        tracep->fullIData(oldp+1066,(2U),32);
        __Vtemp1131[0U] = 0x5ec23d79U;
        __Vtemp1131[1U] = 0x23d7d28fU;
        __Vtemp1131[2U] = 0x68f5fdU;
        tracep->fullWData(oldp+1067,(__Vtemp1131),88);
        tracep->fullIData(oldp+1070,(0x16U),32);
        __Vtemp1132[0U] = 0x3801c700U;
        __Vtemp1132[1U] = 0x131c036U;
        __Vtemp1132[2U] = 0x5c700f8eU;
        __Vtemp1132[3U] = 0x6380U;
        tracep->fullWData(oldp+1071,(__Vtemp1132),114);
        tracep->fullIData(oldp+1075,(0x13U),32);
        tracep->fullIData(oldp+1076,(7U),32);
        tracep->fullSData(oldp+1077,(0U),10);
        tracep->fullIData(oldp+1078,(0x1bfe1U),17);
        tracep->fullIData(oldp+1079,(1U),32);
        tracep->fullIData(oldp+1080,(0x2fee6f40U),32);
        tracep->fullQData(oldp+1081,(0ULL),64);
        tracep->fullIData(oldp+1083,(0x44U),32);
        tracep->fullBit(oldp+1084,(vlSelf->top__DOT__id_ex__DOT__flush));
        tracep->fullBit(oldp+1085,(vlSelf->top__DOT__id_ex__DOT__stall));
        tracep->fullBit(oldp+1086,((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))));
        tracep->fullBit(oldp+1087,(vlSelf->top__DOT__ex_mem__DOT__flush));
        tracep->fullBit(oldp+1088,(vlSelf->top__DOT__ex_mem__DOT__stall));
        tracep->fullBit(oldp+1089,((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))));
        tracep->fullCData(oldp+1090,(0U),2);
        tracep->fullQData(oldp+1091,(0x110d8db5fULL),35);
        tracep->fullIData(oldp+1093,(7U),32);
        tracep->fullIData(oldp+1094,(8U),32);
        tracep->fullIData(oldp+1095,(0x46U),32);
        tracep->fullIData(oldp+1096,(8U),32);
        tracep->fullIData(oldp+1097,(0x45U),32);
        tracep->fullBit(oldp+1098,(vlSelf->top__DOT__mem_wb__DOT__flush));
        tracep->fullBit(oldp+1099,(vlSelf->top__DOT__mem_wb__DOT__stall));
        tracep->fullBit(oldp+1100,((1U & (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__stall)))));
    }
}
