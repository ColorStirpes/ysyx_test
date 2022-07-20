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
        tracep->declBit(c+1009,"reset", false,-1);
        tracep->declBit(c+1010,"clock", false,-1);
        tracep->declBus(c+1011,"instr", false,-1, 31,0);
        tracep->declQuad(c+1012,"momory_data", false,-1, 63,0);
        tracep->declBit(c+1014,"fetch_enb", false,-1);
        tracep->declQuad(c+1015,"pc", false,-1, 63,0);
        tracep->declBus(c+1017,"memop", false,-1, 1,0);
        tracep->declBit(c+1018,"mem_ena", false,-1);
        tracep->declBit(c+1019,"mem_wr", false,-1);
        tracep->declQuad(c+1020,"mem_addr", false,-1, 63,0);
        tracep->declQuad(c+1022,"mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+1024,"difftest_instr", false,-1, 31,0);
        tracep->declQuad(c+1025,"difftest_pc", false,-1, 63,0);
        tracep->declBit(c+1009,"top reset", false,-1);
        tracep->declBit(c+1010,"top clock", false,-1);
        tracep->declBus(c+1011,"top instr", false,-1, 31,0);
        tracep->declQuad(c+1012,"top momory_data", false,-1, 63,0);
        tracep->declBit(c+1014,"top fetch_enb", false,-1);
        tracep->declQuad(c+1015,"top pc", false,-1, 63,0);
        tracep->declBus(c+1017,"top memop", false,-1, 1,0);
        tracep->declBit(c+1018,"top mem_ena", false,-1);
        tracep->declBit(c+1019,"top mem_wr", false,-1);
        tracep->declQuad(c+1020,"top mem_addr", false,-1, 63,0);
        tracep->declQuad(c+1022,"top mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+1024,"top difftest_instr", false,-1, 31,0);
        tracep->declQuad(c+1025,"top difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+214,"top rdata", false,-1, 63,0);
        tracep->declBus(c+1027,"top wmask", false,-1, 7,0);
        tracep->declBit(c+845,"top mux_pc", false,-1);
        tracep->declQuad(c+846,"top branch", false,-1, 63,0);
        tracep->declBit(c+848,"top pre_jump", false,-1);
        tracep->declQuad(c+216,"top pre_branch", false,-1, 63,0);
        tracep->declBit(c+218,"top pc_ready", false,-1);
        tracep->declBit(c+219,"top pc_valid", false,-1);
        tracep->declBit(c+220,"top if_ready", false,-1);
        tracep->declBit(c+221,"top if_valid", false,-1);
        tracep->declBit(c+222,"top ID_pre_jump", false,-1);
        tracep->declQuad(c+223,"top ID_pre_branch", false,-1, 63,0);
        tracep->declQuad(c+225,"top ID_pc", false,-1, 63,0);
        tracep->declBus(c+227,"top ID_instr", false,-1, 31,0);
        tracep->declBit(c+1041,"top nop", false,-1);
        tracep->declBit(c+228,"top load_stall", false,-1);
        tracep->declQuad(c+225,"top id_pc", false,-1, 63,0);
        tracep->declBus(c+227,"top id_instr", false,-1, 31,0);
        tracep->declBus(c+849,"top jumptype", false,-1, 1,0);
        tracep->declBit(c+850,"top error_pre", false,-1);
        tracep->declBit(c+229,"top id_w_ena", false,-1);
        tracep->declBus(c+230,"top id_w_addr", false,-1, 4,0);
        tracep->declQuad(c+851,"top id_data1", false,-1, 63,0);
        tracep->declQuad(c+853,"top id_data2", false,-1, 63,0);
        tracep->declBit(c+231,"top id_mem_ena", false,-1);
        tracep->declBit(c+232,"top id_mem_wr", false,-1);
        tracep->declQuad(c+233,"top id_imm", false,-1, 63,0);
        tracep->declBus(c+235,"top id_exop", false,-1, 2,0);
        tracep->declBus(c+236,"top id_aluop", false,-1, 4,0);
        tracep->declBus(c+237,"top id_memwop", false,-1, 2,0);
        tracep->declBus(c+238,"top id_memrop", false,-1, 2,0);
        tracep->declBit(c+239,"top id_ready", false,-1);
        tracep->declBit(c+240,"top id_valid", false,-1);
        tracep->declBit(c+241,"top EX_w_ena", false,-1);
        tracep->declBus(c+242,"top EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"top EX_data1", false,-1, 63,0);
        tracep->declQuad(c+245,"top EX_data2", false,-1, 63,0);
        tracep->declQuad(c+247,"top EX_imm", false,-1, 63,0);
        tracep->declBus(c+249,"top EX_exop", false,-1, 2,0);
        tracep->declBus(c+250,"top EX_aluop", false,-1, 4,0);
        tracep->declBus(c+251,"top EX_memwop", false,-1, 2,0);
        tracep->declBus(c+252,"top EX_memrop", false,-1, 2,0);
        tracep->declBit(c+253,"top EX_mem_ena", false,-1);
        tracep->declBit(c+254,"top EX_mem_wr", false,-1);
        tracep->declBus(c+255,"top EX_instr", false,-1, 31,0);
        tracep->declQuad(c+256,"top EX_pc", false,-1, 63,0);
        tracep->declBit(c+241,"top ex_w_ena", false,-1);
        tracep->declBus(c+242,"top ex_w_addr", false,-1, 4,0);
        tracep->declQuad(c+258,"top ex_w_data", false,-1, 63,0);
        tracep->declBus(c+251,"top ex_memwop", false,-1, 2,0);
        tracep->declBus(c+252,"top ex_memrop", false,-1, 2,0);
        tracep->declBit(c+253,"top ex_mem_ena", false,-1);
        tracep->declBit(c+254,"top ex_mem_wr", false,-1);
        tracep->declQuad(c+260,"top ex_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+245,"top ex_mem_data", false,-1, 63,0);
        tracep->declBus(c+255,"top ex_instr", false,-1, 31,0);
        tracep->declQuad(c+256,"top ex_pc", false,-1, 63,0);
        tracep->declBit(c+262,"top ex_ready", false,-1);
        tracep->declBit(c+263,"top ex_valid", false,-1);
        tracep->declBit(c+264,"top MEM_w_ena", false,-1);
        tracep->declBus(c+265,"top MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+266,"top MEM_w_data", false,-1, 63,0);
        tracep->declBus(c+268,"top MEM_memwop", false,-1, 2,0);
        tracep->declBus(c+269,"top MEM_memrop", false,-1, 2,0);
        tracep->declBit(c+270,"top MEM_mem_ena", false,-1);
        tracep->declBit(c+271,"top MEM_mem_wr", false,-1);
        tracep->declQuad(c+272,"top MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+274,"top MEM_mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+276,"top MEM_instr", false,-1, 31,0);
        tracep->declQuad(c+277,"top MEM_pc", false,-1, 63,0);
        tracep->declBit(c+264,"top mem_w_ena", false,-1);
        tracep->declBus(c+265,"top mem_w_addr", false,-1, 4,0);
        tracep->declQuad(c+279,"top mem_w_data", false,-1, 63,0);
        tracep->declQuad(c+277,"top mem_pc", false,-1, 63,0);
        tracep->declBus(c+276,"top mem_instr", false,-1, 31,0);
        tracep->declBit(c+281,"top mem_ready", false,-1);
        tracep->declBit(c+282,"top mem_valid", false,-1);
        tracep->declBit(c+283,"top WB_w_ena", false,-1);
        tracep->declBus(c+284,"top WB_w_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"top WB_w_data", false,-1, 63,0);
        tracep->declQuad(c+287,"top WB_pc", false,-1, 63,0);
        tracep->declBus(c+289,"top WB_instr", false,-1, 31,0);
        tracep->declBit(c+283,"top wb_w_ena", false,-1);
        tracep->declBus(c+284,"top wb_w_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"top wb_w_data", false,-1, 63,0);
        tracep->declBit(c+1009,"top ysyx_22040931_IF reset", false,-1);
        tracep->declBit(c+1010,"top ysyx_22040931_IF clock", false,-1);
        tracep->declBit(c+1042,"top ysyx_22040931_IF flush", false,-1);
        tracep->declBit(c+1043,"top ysyx_22040931_IF stall", false,-1);
        tracep->declBit(c+220,"top ysyx_22040931_IF if_ready", false,-1);
        tracep->declBit(c+218,"top ysyx_22040931_IF pc_ready", false,-1);
        tracep->declBit(c+219,"top ysyx_22040931_IF pc_valid", false,-1);
        tracep->declBit(c+850,"top ysyx_22040931_IF error_pre", false,-1);
        tracep->declBit(c+845,"top ysyx_22040931_IF id_jump", false,-1);
        tracep->declBus(c+849,"top ysyx_22040931_IF id_jumptype", false,-1, 1,0);
        tracep->declQuad(c+225,"top ysyx_22040931_IF id_pc", false,-1, 63,0);
        tracep->declQuad(c+846,"top ysyx_22040931_IF id_branch", false,-1, 63,0);
        tracep->declBit(c+848,"top ysyx_22040931_IF pre_jump", false,-1);
        tracep->declQuad(c+216,"top ysyx_22040931_IF pre_branch", false,-1, 63,0);
        tracep->declBit(c+1014,"top ysyx_22040931_IF fetch_enb", false,-1);
        tracep->declQuad(c+1015,"top ysyx_22040931_IF if_pc", false,-1, 63,0);
        tracep->declBit(c+290,"top ysyx_22040931_IF pc_now_valid", false,-1);
        tracep->declBit(c+1044,"top ysyx_22040931_IF pc_go", false,-1);
        tracep->declQuad(c+1028,"top ysyx_22040931_IF pc_i", false,-1, 63,0);
        tracep->declBit(c+1009,"top ysyx_22040931_IF predictor reset", false,-1);
        tracep->declBit(c+1010,"top ysyx_22040931_IF predictor clock", false,-1);
        tracep->declBit(c+218,"top ysyx_22040931_IF predictor pc_ready", false,-1);
        tracep->declBit(c+850,"top ysyx_22040931_IF predictor nop", false,-1);
        tracep->declQuad(c+846,"top ysyx_22040931_IF predictor id_branch", false,-1, 63,0);
        tracep->declBus(c+849,"top ysyx_22040931_IF predictor id_jumptype", false,-1, 1,0);
        tracep->declBit(c+845,"top ysyx_22040931_IF predictor id_jump", false,-1);
        tracep->declQuad(c+225,"top ysyx_22040931_IF predictor id_pc", false,-1, 63,0);
        tracep->declQuad(c+1015,"top ysyx_22040931_IF predictor pc", false,-1, 63,0);
        tracep->declBit(c+848,"top ysyx_22040931_IF predictor jump", false,-1);
        tracep->declQuad(c+216,"top ysyx_22040931_IF predictor branch", false,-1, 63,0);
        tracep->declBit(c+855,"top ysyx_22040931_IF predictor valid_pre", false,-1);
        tracep->declBit(c+1030,"top ysyx_22040931_IF predictor dir_jump", false,-1);
        tracep->declBit(c+1031,"top ysyx_22040931_IF predictor tar_hit", false,-1);
        tracep->declBit(c+1009,"top ysyx_22040931_IF predictor direction_predictor reset", false,-1);
        tracep->declBit(c+1010,"top ysyx_22040931_IF predictor direction_predictor clock", false,-1);
        tracep->declBit(c+855,"top ysyx_22040931_IF predictor direction_predictor valid_pre", false,-1);
        tracep->declQuad(c+225,"top ysyx_22040931_IF predictor direction_predictor id_pc", false,-1, 63,0);
        tracep->declBit(c+845,"top ysyx_22040931_IF predictor direction_predictor id_jump", false,-1);
        tracep->declBus(c+849,"top ysyx_22040931_IF predictor direction_predictor id_jumptype", false,-1, 1,0);
        tracep->declQuad(c+1015,"top ysyx_22040931_IF predictor direction_predictor pc", false,-1, 63,0);
        tracep->declBit(c+1030,"top ysyx_22040931_IF predictor direction_predictor jump", false,-1);
        tracep->declBus(c+1032,"top ysyx_22040931_IF predictor direction_predictor hash", false,-1, 7,0);
        tracep->declBus(c+1033,"top ysyx_22040931_IF predictor direction_predictor pht_index", false,-1, 7,0);
        tracep->declBus(c+291,"top ysyx_22040931_IF predictor direction_predictor id_hash", false,-1, 7,0);
        tracep->declBus(c+292,"top ysyx_22040931_IF predictor direction_predictor id_pht_index", false,-1, 7,0);
        tracep->declBus(c+293,"top ysyx_22040931_IF predictor direction_predictor i", false,-1, 31,0);
        tracep->declBus(c+294,"top ysyx_22040931_IF predictor direction_predictor j", false,-1, 31,0);
        tracep->declBit(c+1009,"top ysyx_22040931_IF predictor target_predictor reset", false,-1);
        tracep->declBit(c+1010,"top ysyx_22040931_IF predictor target_predictor clock", false,-1);
        tracep->declBit(c+855,"top ysyx_22040931_IF predictor target_predictor valid_pre", false,-1);
        tracep->declQuad(c+1015,"top ysyx_22040931_IF predictor target_predictor pc", false,-1, 63,0);
        tracep->declQuad(c+225,"top ysyx_22040931_IF predictor target_predictor id_pc", false,-1, 63,0);
        tracep->declQuad(c+846,"top ysyx_22040931_IF predictor target_predictor id_branch", false,-1, 63,0);
        tracep->declBus(c+849,"top ysyx_22040931_IF predictor target_predictor id_jumptype", false,-1, 1,0);
        tracep->declQuad(c+216,"top ysyx_22040931_IF predictor target_predictor branch", false,-1, 63,0);
        tracep->declBit(c+1031,"top ysyx_22040931_IF predictor target_predictor hit", false,-1);
        tracep->declBus(c+1034,"top ysyx_22040931_IF predictor target_predictor btb_index", false,-1, 7,0);
        tracep->declBus(c+295,"top ysyx_22040931_IF predictor target_predictor id_btb_index", false,-1, 7,0);
        tracep->declBus(c+296,"top ysyx_22040931_IF predictor target_predictor jumptype", false,-1, 1,0);
        tracep->declBus(c+297,"top ysyx_22040931_IF predictor target_predictor i", false,-1, 31,0);
        tracep->declBus(c+298,"top ysyx_22040931_IF predictor target_predictor j", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declQuad(c+299+i*2,"top ysyx_22040931_IF predictor target_predictor RAS", true,(i+0), 63,0);}}
        tracep->declBus(c+331,"top ysyx_22040931_IF predictor target_predictor ras_index", false,-1, 3,0);
        tracep->declBit(c+1009,"top ysyx_22040931_IF ysyx_22040931_PC reset", false,-1);
        tracep->declBit(c+1010,"top ysyx_22040931_IF ysyx_22040931_PC clock", false,-1);
        tracep->declBit(c+218,"top ysyx_22040931_IF ysyx_22040931_PC pc_ready", false,-1);
        tracep->declQuad(c+1028,"top ysyx_22040931_IF ysyx_22040931_PC pc_i", false,-1, 63,0);
        tracep->declBit(c+1014,"top ysyx_22040931_IF ysyx_22040931_PC fetch_enb", false,-1);
        tracep->declQuad(c+1015,"top ysyx_22040931_IF ysyx_22040931_PC pc_o", false,-1, 63,0);
        tracep->declBit(c+1009,"top if_id reset", false,-1);
        tracep->declBit(c+1010,"top if_id clock", false,-1);
        tracep->declBit(c+1045,"top if_id flush", false,-1);
        tracep->declBit(c+228,"top if_id stall", false,-1);
        tracep->declBit(c+850,"top if_id nop", false,-1);
        tracep->declBit(c+219,"top if_id pc_valid", false,-1);
        tracep->declBit(c+239,"top if_id id_ready", false,-1);
        tracep->declBit(c+220,"top if_id if_ready", false,-1);
        tracep->declBit(c+221,"top if_id if_valid", false,-1);
        tracep->declBit(c+848,"top if_id IF_pre_jump", false,-1);
        tracep->declQuad(c+216,"top if_id IF_pre_branch", false,-1, 63,0);
        tracep->declQuad(c+1015,"top if_id IF_pc", false,-1, 63,0);
        tracep->declBus(c+1011,"top if_id IF_instr", false,-1, 31,0);
        tracep->declBit(c+222,"top if_id ID_pre_jump", false,-1);
        tracep->declQuad(c+223,"top if_id ID_pre_branch", false,-1, 63,0);
        tracep->declQuad(c+225,"top if_id ID_pc", false,-1, 63,0);
        tracep->declBus(c+227,"top if_id ID_instr", false,-1, 31,0);
        tracep->declBit(c+221,"top if_id if_now_valid", false,-1);
        tracep->declBit(c+332,"top if_id if_go", false,-1);
        tracep->declBit(c+1009,"top ysyx_22040931_ID reset", false,-1);
        tracep->declBit(c+1010,"top ysyx_22040931_ID clock", false,-1);
        tracep->declBit(c+283,"top ysyx_22040931_ID w_ena_i", false,-1);
        tracep->declBus(c+284,"top ysyx_22040931_ID w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+285,"top ysyx_22040931_ID w_data_i", false,-1, 63,0);
        tracep->declQuad(c+225,"top ysyx_22040931_ID pc_i", false,-1, 63,0);
        tracep->declBus(c+227,"top ysyx_22040931_ID instr", false,-1, 31,0);
        tracep->declBit(c+241,"top ysyx_22040931_ID ex_w_ena", false,-1);
        tracep->declBus(c+242,"top ysyx_22040931_ID ex_w_addr", false,-1, 4,0);
        tracep->declQuad(c+258,"top ysyx_22040931_ID ex_w_data", false,-1, 63,0);
        tracep->declBit(c+264,"top ysyx_22040931_ID mem_w_ena", false,-1);
        tracep->declBus(c+265,"top ysyx_22040931_ID mem_w_addr", false,-1, 4,0);
        tracep->declQuad(c+279,"top ysyx_22040931_ID mem_w_data", false,-1, 63,0);
        tracep->declBit(c+253,"top ysyx_22040931_ID ex_mem_ena", false,-1);
        tracep->declBit(c+253,"top ysyx_22040931_ID ex_mem_wr", false,-1);
        tracep->declBit(c+222,"top ysyx_22040931_ID pre_jump", false,-1);
        tracep->declQuad(c+223,"top ysyx_22040931_ID pre_branch", false,-1, 63,0);
        tracep->declBit(c+228,"top ysyx_22040931_ID load_stall", false,-1);
        tracep->declQuad(c+225,"top ysyx_22040931_ID pc_o", false,-1, 63,0);
        tracep->declBus(c+227,"top ysyx_22040931_ID instr_o", false,-1, 31,0);
        tracep->declQuad(c+846,"top ysyx_22040931_ID branch", false,-1, 63,0);
        tracep->declBit(c+845,"top ysyx_22040931_ID mux_pc", false,-1);
        tracep->declBus(c+849,"top ysyx_22040931_ID jumptype", false,-1, 1,0);
        tracep->declBit(c+850,"top ysyx_22040931_ID error_pre", false,-1);
        tracep->declBit(c+229,"top ysyx_22040931_ID w_ena", false,-1);
        tracep->declBus(c+230,"top ysyx_22040931_ID w_addr", false,-1, 4,0);
        tracep->declQuad(c+851,"top ysyx_22040931_ID data1", false,-1, 63,0);
        tracep->declQuad(c+853,"top ysyx_22040931_ID data2", false,-1, 63,0);
        tracep->declBit(c+231,"top ysyx_22040931_ID mem_ena", false,-1);
        tracep->declBit(c+232,"top ysyx_22040931_ID mem_wr", false,-1);
        tracep->declQuad(c+233,"top ysyx_22040931_ID imm", false,-1, 63,0);
        tracep->declBus(c+235,"top ysyx_22040931_ID exop", false,-1, 2,0);
        tracep->declBus(c+236,"top ysyx_22040931_ID aluop", false,-1, 4,0);
        tracep->declBus(c+237,"top ysyx_22040931_ID memwop", false,-1, 2,0);
        tracep->declBus(c+238,"top ysyx_22040931_ID memrop", false,-1, 2,0);
        tracep->declBus(c+333,"top ysyx_22040931_ID r_count", false,-1, 31,0);
        tracep->declBus(c+334,"top ysyx_22040931_ID count", false,-1, 31,0);
        tracep->declBus(c+335,"top ysyx_22040931_ID ztype", false,-1, 2,0);
        tracep->declBit(c+336,"top ysyx_22040931_ID r_ena1", false,-1);
        tracep->declBus(c+337,"top ysyx_22040931_ID r_addr1", false,-1, 4,0);
        tracep->declQuad(c+1035,"top ysyx_22040931_ID r_data1", false,-1, 63,0);
        tracep->declBit(c+338,"top ysyx_22040931_ID r_ena2", false,-1);
        tracep->declBus(c+339,"top ysyx_22040931_ID r_addr2", false,-1, 4,0);
        tracep->declQuad(c+1037,"top ysyx_22040931_ID r_data2", false,-1, 63,0);
        tracep->declQuad(c+1039,"top ysyx_22040931_ID ibranch", false,-1, 63,0);
        tracep->declQuad(c+340,"top ysyx_22040931_ID bbranch", false,-1, 63,0);
        tracep->declQuad(c+340,"top ysyx_22040931_ID jbranch", false,-1, 63,0);
        tracep->declBit(c+342,"top ysyx_22040931_ID need_ex1", false,-1);
        tracep->declBit(c+343,"top ysyx_22040931_ID need_ex2", false,-1);
        tracep->declBit(c+344,"top ysyx_22040931_ID need_mem1", false,-1);
        tracep->declBit(c+345,"top ysyx_22040931_ID need_mem2", false,-1);
        tracep->declBus(c+1046,"top ysyx_22040931_ID branch_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID branch_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID branch_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+846,"top ysyx_22040931_ID branch_mux out", false,-1, 63,0);
        tracep->declBus(c+335,"top ysyx_22040931_ID branch_mux key", false,-1, 2,0);
        tracep->declQuad(c+1048,"top ysyx_22040931_ID branch_mux default_out", false,-1, 63,0);
        tracep->declArray(c+856,"top ysyx_22040931_ID branch_mux lut", false,-1, 200,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID branch_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID branch_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID branch_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID branch_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+846,"top ysyx_22040931_ID branch_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+335,"top ysyx_22040931_ID branch_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1048,"top ysyx_22040931_ID branch_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+856,"top ysyx_22040931_ID branch_mux i1 lut", false,-1, 200,0);
        tracep->declBus(c+1051,"top ysyx_22040931_ID branch_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+863+i*3,"top ysyx_22040931_ID branch_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+872+i*1,"top ysyx_22040931_ID branch_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+875+i*2,"top ysyx_22040931_ID branch_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+881,"top ysyx_22040931_ID branch_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+883,"top ysyx_22040931_ID branch_mux i1 hit", false,-1);
        tracep->declBus(c+1052,"top ysyx_22040931_ID branch_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+227,"top ysyx_22040931_ID ysyx_22040931_Decoder instr", false,-1, 31,0);
        tracep->declQuad(c+851,"top ysyx_22040931_ID ysyx_22040931_Decoder r_data1", false,-1, 63,0);
        tracep->declQuad(c+853,"top ysyx_22040931_ID ysyx_22040931_Decoder r_data2", false,-1, 63,0);
        tracep->declBit(c+229,"top ysyx_22040931_ID ysyx_22040931_Decoder w_ena", false,-1);
        tracep->declBus(c+230,"top ysyx_22040931_ID ysyx_22040931_Decoder w_addr", false,-1, 4,0);
        tracep->declBit(c+336,"top ysyx_22040931_ID ysyx_22040931_Decoder r_ena1", false,-1);
        tracep->declBus(c+337,"top ysyx_22040931_ID ysyx_22040931_Decoder r_addr1", false,-1, 4,0);
        tracep->declBit(c+338,"top ysyx_22040931_ID ysyx_22040931_Decoder r_ena2", false,-1);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Decoder r_addr2", false,-1, 4,0);
        tracep->declBit(c+231,"top ysyx_22040931_ID ysyx_22040931_Decoder mem_ena", false,-1);
        tracep->declBit(c+232,"top ysyx_22040931_ID ysyx_22040931_Decoder mem_wr", false,-1);
        tracep->declBus(c+335,"top ysyx_22040931_ID ysyx_22040931_Decoder ztype", false,-1, 2,0);
        tracep->declBus(c+235,"top ysyx_22040931_ID ysyx_22040931_Decoder exop", false,-1, 2,0);
        tracep->declBus(c+236,"top ysyx_22040931_ID ysyx_22040931_Decoder aluop", false,-1, 4,0);
        tracep->declBus(c+237,"top ysyx_22040931_ID ysyx_22040931_Decoder memwop", false,-1, 2,0);
        tracep->declBus(c+238,"top ysyx_22040931_ID ysyx_22040931_Decoder memrop", false,-1, 2,0);
        tracep->declBit(c+845,"top ysyx_22040931_ID ysyx_22040931_Decoder jump", false,-1);
        tracep->declBit(c+346,"top ysyx_22040931_ID ysyx_22040931_Decoder itype", false,-1);
        tracep->declBit(c+347,"top ysyx_22040931_ID ysyx_22040931_Decoder stype", false,-1);
        tracep->declBit(c+348,"top ysyx_22040931_ID ysyx_22040931_Decoder utype", false,-1);
        tracep->declBit(c+349,"top ysyx_22040931_ID ysyx_22040931_Decoder rtype", false,-1);
        tracep->declBit(c+350,"top ysyx_22040931_ID ysyx_22040931_Decoder jtype", false,-1);
        tracep->declBit(c+351,"top ysyx_22040931_ID ysyx_22040931_Decoder btype", false,-1);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder r_exop", false,-1, 2,0);
        tracep->declBus(c+353,"top ysyx_22040931_ID ysyx_22040931_Decoder i_exop", false,-1, 2,0);
        tracep->declBus(c+354,"top ysyx_22040931_ID ysyx_22040931_Decoder s_exop", false,-1, 2,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder u_exop", false,-1, 2,0);
        tracep->declBus(c+356,"top ysyx_22040931_ID ysyx_22040931_Decoder j_exop", false,-1, 2,0);
        tracep->declBus(c+357,"top ysyx_22040931_ID ysyx_22040931_Decoder b_exop", false,-1, 2,0);
        tracep->declBus(c+358,"top ysyx_22040931_ID ysyx_22040931_Decoder r_aluop", false,-1, 4,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_Decoder i_aluop", false,-1, 4,0);
        tracep->declBus(c+360,"top ysyx_22040931_ID ysyx_22040931_Decoder s_aluop", false,-1, 4,0);
        tracep->declBus(c+361,"top ysyx_22040931_ID ysyx_22040931_Decoder u_aluop", false,-1, 4,0);
        tracep->declBus(c+362,"top ysyx_22040931_ID ysyx_22040931_Decoder j_aluop", false,-1, 4,0);
        tracep->declBus(c+363,"top ysyx_22040931_ID ysyx_22040931_Decoder b_aluop", false,-1, 4,0);
        tracep->declBit(c+364,"top ysyx_22040931_ID ysyx_22040931_Decoder ijump", false,-1);
        tracep->declBit(c+884,"top ysyx_22040931_ID ysyx_22040931_Decoder bjump", false,-1);
        tracep->declBit(c+365,"top ysyx_22040931_ID ysyx_22040931_Decoder jjump", false,-1);
        tracep->declBus(c+1053,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1054,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+366,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux out", false,-1, 10,0);
        tracep->declBus(c+335,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux key", false,-1, 2,0);
        tracep->declBus(c+1055,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux default_out", false,-1, 10,0);
        tracep->declArray(c+367,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux lut", false,-1, 83,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1054,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+366,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 out", false,-1, 10,0);
        tracep->declBus(c+335,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+1055,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 default_out", false,-1, 10,0);
        tracep->declArray(c+367,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 lut", false,-1, 83,0);
        tracep->declBus(c+1056,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+370+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 pair_list", true,(i+0), 13,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+376+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+382+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 data_list", true,(i+0), 10,0);}}
        tracep->declBus(c+388,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 lut_out", false,-1, 10,0);
        tracep->declBit(c+389,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 hit", false,-1);
        tracep->declBus(c+1057,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+845,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux out", false,-1, 0,0);
        tracep->declBus(c+335,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux key", false,-1, 2,0);
        tracep->declBus(c+1058,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux default_out", false,-1, 0,0);
        tracep->declBus(c+885,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux lut", false,-1, 11,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+845,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 out", false,-1, 0,0);
        tracep->declBus(c+335,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+1058,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 default_out", false,-1, 0,0);
        tracep->declBus(c+885,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 lut", false,-1, 11,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+886+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+889+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+892+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+895,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 lut_out", false,-1, 0,0);
        tracep->declBit(c+896,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 hit", false,-1);
        tracep->declBus(c+1052,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode", false,-1, 6,0);
        tracep->declBus(c+391,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode_3", false,-1, 2,0);
        tracep->declBus(c+392,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode_7", false,-1, 6,0);
        tracep->declBus(c+358,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype aluop", false,-1, 4,0);
        tracep->declBus(c+352,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype exop", false,-1, 2,0);
        tracep->declBit(c+349,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype rtype", false,-1);
        tracep->declBus(c+393,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype out", false,-1, 8,0);
        tracep->declBus(c+394,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype chose", false,-1, 16,0);
        tracep->declBus(c+1060,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+393,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype out", false,-1, 8,0);
        tracep->declBus(c+394,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype key", false,-1, 16,0);
        tracep->declBus(c+1063,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype default_out", false,-1, 8,0);
        tracep->declArray(c+1064,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype lut", false,-1, 727,0);
        tracep->declBus(c+1060,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+393,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 out", false,-1, 8,0);
        tracep->declBus(c+394,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 key", false,-1, 16,0);
        tracep->declBus(c+1063,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 default_out", false,-1, 8,0);
        tracep->declArray(c+1064,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 lut", false,-1, 727,0);
        tracep->declBus(c+1087,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+1+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 pair_list", true,(i+0), 25,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+29+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+57+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+395,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+396,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 hit", false,-1);
        tracep->declBus(c+1088,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 i", false,-1, 31,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode", false,-1, 6,0);
        tracep->declBus(c+391,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_3", false,-1, 2,0);
        tracep->declBit(c+397,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_1", false,-1);
        tracep->declBus(c+392,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_7", false,-1, 6,0);
        tracep->declBit(c+364,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype jump", false,-1);
        tracep->declBus(c+238,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype memrop", false,-1, 2,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype aluop", false,-1, 4,0);
        tracep->declBus(c+353,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype exop", false,-1, 2,0);
        tracep->declBit(c+346,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype itype", false,-1);
        tracep->declBus(c+398,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out", false,-1, 12,0);
        tracep->declBus(c+399,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out1", false,-1, 12,0);
        tracep->declBus(c+400,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out2", false,-1, 11,0);
        tracep->declBus(c+401,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out3", false,-1, 11,0);
        tracep->declBus(c+402,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out4", false,-1, 11,0);
        tracep->declBus(c+403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose1", false,-1, 9,0);
        tracep->declBus(c+404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose2", false,-1, 15,0);
        tracep->declBus(c+405,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose3", false,-1, 16,0);
        tracep->declBus(c+406,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose4", false,-1, 17,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1089,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+398,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype out", false,-1, 12,0);
        tracep->declBus(c+407,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype key", false,-1, 3,0);
        tracep->declBus(c+1090,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype default_out", false,-1, 12,0);
        tracep->declArray(c+408,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype lut", false,-1, 67,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1089,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+398,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 out", false,-1, 12,0);
        tracep->declBus(c+407,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 key", false,-1, 3,0);
        tracep->declBus(c+1090,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 default_out", false,-1, 12,0);
        tracep->declArray(c+408,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 lut", false,-1, 67,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+411+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+415+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+419+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 data_list", true,(i+0), 12,0);}}
        tracep->declBus(c+423,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 lut_out", false,-1, 12,0);
        tracep->declBit(c+424,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 hit", false,-1);
        tracep->declBus(c+1091,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 i", false,-1, 31,0);
        tracep->declBus(c+1089,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1092,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1089,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+399,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 out", false,-1, 12,0);
        tracep->declBus(c+403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 key", false,-1, 9,0);
        tracep->declBus(c+1090,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 default_out", false,-1, 12,0);
        tracep->declArray(c+1093,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 lut", false,-1, 298,0);
        tracep->declBus(c+1089,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1092,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1089,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+399,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 out", false,-1, 12,0);
        tracep->declBus(c+403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 key", false,-1, 9,0);
        tracep->declBus(c+1090,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 default_out", false,-1, 12,0);
        tracep->declArray(c+1093,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 lut", false,-1, 298,0);
        tracep->declBus(c+1103,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+85+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 pair_list", true,(i+0), 22,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+98+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+111+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 data_list", true,(i+0), 12,0);}}
        tracep->declBus(c+425,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 lut_out", false,-1, 12,0);
        tracep->declBit(c+426,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 hit", false,-1);
        tracep->declBus(c+1104,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 i", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1105,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1106,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+400,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 out", false,-1, 11,0);
        tracep->declBus(c+404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 key", false,-1, 15,0);
        tracep->declBus(c+1107,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 default_out", false,-1, 11,0);
        tracep->declArray(c+1108,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 lut", false,-1, 83,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1105,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1106,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+400,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 out", false,-1, 11,0);
        tracep->declBus(c+404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 key", false,-1, 15,0);
        tracep->declBus(c+1107,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1108,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 lut", false,-1, 83,0);
        tracep->declBus(c+1060,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+124+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+127+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 key_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+130+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+427,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+428,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 hit", false,-1);
        tracep->declBus(c+1052,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 i", false,-1, 31,0);
        tracep->declBus(c+1111,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1106,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+401,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 out", false,-1, 11,0);
        tracep->declBus(c+405,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 key", false,-1, 16,0);
        tracep->declBus(c+1107,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 default_out", false,-1, 11,0);
        tracep->declArray(c+1112,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 lut", false,-1, 144,0);
        tracep->declBus(c+1111,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1106,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+401,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 out", false,-1, 11,0);
        tracep->declBus(c+405,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 key", false,-1, 16,0);
        tracep->declBus(c+1107,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1112,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 lut", false,-1, 144,0);
        tracep->declBus(c+1117,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+133+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 pair_list", true,(i+0), 28,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+138+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+143+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+429,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+430,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 hit", false,-1);
        tracep->declBus(c+1118,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 i", false,-1, 31,0);
        tracep->declBus(c+1119,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1120,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1106,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+402,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 out", false,-1, 11,0);
        tracep->declBus(c+406,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 key", false,-1, 17,0);
        tracep->declBus(c+1107,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 default_out", false,-1, 11,0);
        tracep->declQuad(c+1121,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 lut", false,-1, 59,0);
        tracep->declBus(c+1119,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1120,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1106,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+402,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 out", false,-1, 11,0);
        tracep->declBus(c+406,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 key", false,-1, 17,0);
        tracep->declBus(c+1107,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 default_out", false,-1, 11,0);
        tracep->declQuad(c+1121,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 lut", false,-1, 59,0);
        tracep->declBus(c+1123,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+148+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 pair_list", true,(i+0), 29,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+150+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 key_list", true,(i+0), 17,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+152+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+431,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+432,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 hit", false,-1);
        tracep->declBus(c+1124,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 i", false,-1, 31,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype opcode", false,-1, 6,0);
        tracep->declBus(c+391,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype opcode_3", false,-1, 2,0);
        tracep->declBus(c+237,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype memwop", false,-1, 2,0);
        tracep->declBus(c+360,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype aluop", false,-1, 4,0);
        tracep->declBus(c+354,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype exop", false,-1, 2,0);
        tracep->declBit(c+347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype stype", false,-1);
        tracep->declBus(c+433,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype out", false,-1, 11,0);
        tracep->declBus(c+403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype chose", false,-1, 9,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1092,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1106,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+433,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype out", false,-1, 11,0);
        tracep->declBus(c+403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype key", false,-1, 9,0);
        tracep->declBus(c+1107,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype default_out", false,-1, 11,0);
        tracep->declArray(c+1125,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype lut", false,-1, 87,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1092,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1106,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+433,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 out", false,-1, 11,0);
        tracep->declBus(c+403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 key", false,-1, 9,0);
        tracep->declBus(c+1107,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1125,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 lut", false,-1, 87,0);
        tracep->declBus(c+1128,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+154+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 pair_list", true,(i+0), 21,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+158+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+162+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+434,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+435,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 hit", false,-1);
        tracep->declBus(c+1091,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 i", false,-1, 31,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype opcode", false,-1, 6,0);
        tracep->declBus(c+391,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype opcode_3", false,-1, 2,0);
        tracep->declQuad(c+851,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype r_data1", false,-1, 63,0);
        tracep->declQuad(c+853,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype r_data2", false,-1, 63,0);
        tracep->declBit(c+884,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype jump", false,-1);
        tracep->declBus(c+363,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype aluop", false,-1, 4,0);
        tracep->declBus(c+357,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype exop", false,-1, 2,0);
        tracep->declBit(c+351,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype btype", false,-1);
        tracep->declBus(c+436,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype chose", false,-1, 9,0);
        tracep->declBus(c+437,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype out", false,-1, 8,0);
        tracep->declBus(c+897,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype jumpb", false,-1, 2,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1092,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+884,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b out", false,-1, 0,0);
        tracep->declBus(c+436,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b key", false,-1, 9,0);
        tracep->declBus(c+1058,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b default_out", false,-1, 0,0);
        tracep->declArray(c+898,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b lut", false,-1, 65,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1092,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+884,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 out", false,-1, 0,0);
        tracep->declBus(c+436,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 key", false,-1, 9,0);
        tracep->declBus(c+1058,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 default_out", false,-1, 0,0);
        tracep->declArray(c+898,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 lut", false,-1, 65,0);
        tracep->declBus(c+1054,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+901+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+907+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+913+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+919,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 lut_out", false,-1, 0,0);
        tracep->declBit(c+920,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 hit", false,-1);
        tracep->declBus(c+1057,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 i", false,-1, 31,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1092,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+437,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype out", false,-1, 8,0);
        tracep->declBus(c+436,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype key", false,-1, 9,0);
        tracep->declBus(c+1063,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype default_out", false,-1, 8,0);
        tracep->declArray(c+1129,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype lut", false,-1, 113,0);
        tracep->declBus(c+1053,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1092,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+437,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 out", false,-1, 8,0);
        tracep->declBus(c+436,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 key", false,-1, 9,0);
        tracep->declBus(c+1063,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 default_out", false,-1, 8,0);
        tracep->declArray(c+1129,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 lut", false,-1, 113,0);
        tracep->declBus(c+1133,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+166+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 pair_list", true,(i+0), 18,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+172+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+178+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+438,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+439,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 hit", false,-1);
        tracep->declBus(c+1057,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 i", false,-1, 31,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype opcode", false,-1, 6,0);
        tracep->declBit(c+365,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype jump", false,-1);
        tracep->declBus(c+362,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype aluop", false,-1, 4,0);
        tracep->declBus(c+356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype exop", false,-1, 2,0);
        tracep->declBit(c+350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype jtype", false,-1);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype chose", false,-1, 6,0);
        tracep->declBus(c+440,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype out", false,-1, 9,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1134,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1092,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+440,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype out", false,-1, 9,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype key", false,-1, 6,0);
        tracep->declBus(c+1135,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype default_out", false,-1, 9,0);
        tracep->declBus(c+1136,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype lut", false,-1, 16,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1134,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1092,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+440,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 out", false,-1, 9,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 key", false,-1, 6,0);
        tracep->declBus(c+1135,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 default_out", false,-1, 9,0);
        tracep->declBus(c+1136,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 lut", false,-1, 16,0);
        tracep->declBus(c+1061,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+184+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+185+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+186+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 data_list", true,(i+0), 9,0);}}
        tracep->declBus(c+441,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 lut_out", false,-1, 9,0);
        tracep->declBit(c+442,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 hit", false,-1);
        tracep->declBus(c+1137,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 i", false,-1, 31,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype opcode", false,-1, 6,0);
        tracep->declBus(c+361,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype aluop", false,-1, 4,0);
        tracep->declBus(c+355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype exop", false,-1, 2,0);
        tracep->declBit(c+348,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype utype", false,-1);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype chose", false,-1, 6,0);
        tracep->declBus(c+443,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype out", false,-1, 8,0);
        tracep->declBus(c+1119,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1134,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+443,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype out", false,-1, 8,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype key", false,-1, 6,0);
        tracep->declBus(c+1063,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype default_out", false,-1, 8,0);
        tracep->declBus(c+1138,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype lut", false,-1, 31,0);
        tracep->declBus(c+1119,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1134,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1062,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+443,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 out", false,-1, 8,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 key", false,-1, 6,0);
        tracep->declBus(c+1063,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 default_out", false,-1, 8,0);
        tracep->declBus(c+1138,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 lut", false,-1, 31,0);
        tracep->declBus(c+1105,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+187+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 pair_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+189+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+191+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+444,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+445,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 hit", false,-1);
        tracep->declBus(c+1124,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 i", false,-1, 31,0);
        tracep->declBus(c+446,"top ysyx_22040931_ID ysyx_22040931_IMM instr", false,-1, 24,0);
        tracep->declBus(c+335,"top ysyx_22040931_ID ysyx_22040931_IMM opt", false,-1, 2,0);
        tracep->declQuad(c+233,"top ysyx_22040931_ID ysyx_22040931_IMM imm", false,-1, 63,0);
        tracep->declBus(c+1111,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+233,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux out", false,-1, 63,0);
        tracep->declBus(c+335,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux key", false,-1, 2,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux default_out", false,-1, 63,0);
        tracep->declArray(c+447,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux lut", false,-1, 334,0);
        tracep->declBus(c+1111,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+233,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+335,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+447,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 lut", false,-1, 334,0);
        tracep->declBus(c+1051,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+458+i*3,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+473+i*1,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+478+i*2,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+488,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+490,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 hit", false,-1);
        tracep->declBus(c+1118,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+1009,"top ysyx_22040931_ID ysyx_22040931_Regfile reset", false,-1);
        tracep->declBit(c+1010,"top ysyx_22040931_ID ysyx_22040931_Regfile clock", false,-1);
        tracep->declBit(c+283,"top ysyx_22040931_ID ysyx_22040931_Regfile w_ena", false,-1);
        tracep->declBus(c+284,"top ysyx_22040931_ID ysyx_22040931_Regfile w_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"top ysyx_22040931_ID ysyx_22040931_Regfile w_data", false,-1, 63,0);
        tracep->declBit(c+336,"top ysyx_22040931_ID ysyx_22040931_Regfile r_ena1", false,-1);
        tracep->declBus(c+337,"top ysyx_22040931_ID ysyx_22040931_Regfile r_addr1", false,-1, 4,0);
        tracep->declQuad(c+1035,"top ysyx_22040931_ID ysyx_22040931_Regfile r_data1", false,-1, 63,0);
        tracep->declBit(c+338,"top ysyx_22040931_ID ysyx_22040931_Regfile r_ena2", false,-1);
        tracep->declBus(c+339,"top ysyx_22040931_ID ysyx_22040931_Regfile r_addr2", false,-1, 4,0);
        tracep->declQuad(c+1037,"top ysyx_22040931_ID ysyx_22040931_Regfile r_data2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+491+i*2,"top ysyx_22040931_ID ysyx_22040931_Regfile regs", true,(i+0), 63,0);}}
        tracep->declBus(c+555,"top ysyx_22040931_ID ysyx_22040931_Regfile i", false,-1, 31,0);
        tracep->declBus(c+1111,"top ysyx_22040931_ID reg_data1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID reg_data1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID reg_data1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+851,"top ysyx_22040931_ID reg_data1 out", false,-1, 63,0);
        tracep->declBus(c+556,"top ysyx_22040931_ID reg_data1 key", false,-1, 3,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_ID reg_data1 default_out", false,-1, 63,0);
        tracep->declArray(c+921,"top ysyx_22040931_ID reg_data1 lut", false,-1, 339,0);
        tracep->declBus(c+1111,"top ysyx_22040931_ID reg_data1 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID reg_data1 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID reg_data1 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID reg_data1 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+851,"top ysyx_22040931_ID reg_data1 i1 out", false,-1, 63,0);
        tracep->declBus(c+556,"top ysyx_22040931_ID reg_data1 i1 key", false,-1, 3,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_ID reg_data1 i1 default_out", false,-1, 63,0);
        tracep->declArray(c+921,"top ysyx_22040931_ID reg_data1 i1 lut", false,-1, 339,0);
        tracep->declBus(c+1141,"top ysyx_22040931_ID reg_data1 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+932+i*3,"top ysyx_22040931_ID reg_data1 i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+947+i*1,"top ysyx_22040931_ID reg_data1 i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+952+i*2,"top ysyx_22040931_ID reg_data1 i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+962,"top ysyx_22040931_ID reg_data1 i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+964,"top ysyx_22040931_ID reg_data1 i1 hit", false,-1);
        tracep->declBus(c+1118,"top ysyx_22040931_ID reg_data1 i1 i", false,-1, 31,0);
        tracep->declBus(c+1111,"top ysyx_22040931_ID reg_data2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID reg_data2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID reg_data2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+853,"top ysyx_22040931_ID reg_data2 out", false,-1, 63,0);
        tracep->declBus(c+557,"top ysyx_22040931_ID reg_data2 key", false,-1, 3,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_ID reg_data2 default_out", false,-1, 63,0);
        tracep->declArray(c+965,"top ysyx_22040931_ID reg_data2 lut", false,-1, 339,0);
        tracep->declBus(c+1111,"top ysyx_22040931_ID reg_data2 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1059,"top ysyx_22040931_ID reg_data2 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_ID reg_data2 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_ID reg_data2 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+853,"top ysyx_22040931_ID reg_data2 i1 out", false,-1, 63,0);
        tracep->declBus(c+557,"top ysyx_22040931_ID reg_data2 i1 key", false,-1, 3,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_ID reg_data2 i1 default_out", false,-1, 63,0);
        tracep->declArray(c+965,"top ysyx_22040931_ID reg_data2 i1 lut", false,-1, 339,0);
        tracep->declBus(c+1141,"top ysyx_22040931_ID reg_data2 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+976+i*3,"top ysyx_22040931_ID reg_data2 i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+991+i*1,"top ysyx_22040931_ID reg_data2 i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+996+i*2,"top ysyx_22040931_ID reg_data2 i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1006,"top ysyx_22040931_ID reg_data2 i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+1008,"top ysyx_22040931_ID reg_data2 i1 hit", false,-1);
        tracep->declBus(c+1118,"top ysyx_22040931_ID reg_data2 i1 i", false,-1, 31,0);
        tracep->declBit(c+1009,"top id_ex reset", false,-1);
        tracep->declBit(c+1010,"top id_ex clock", false,-1);
        tracep->declBit(c+1142,"top id_ex flush", false,-1);
        tracep->declBit(c+1143,"top id_ex stall", false,-1);
        tracep->declBit(c+228,"top id_ex nop", false,-1);
        tracep->declBit(c+221,"top id_ex if_valid", false,-1);
        tracep->declBit(c+262,"top id_ex ex_ready", false,-1);
        tracep->declBit(c+239,"top id_ex id_ready", false,-1);
        tracep->declBit(c+240,"top id_ex id_valid", false,-1);
        tracep->declQuad(c+225,"top id_ex ID_pc", false,-1, 63,0);
        tracep->declBus(c+227,"top id_ex ID_instr", false,-1, 31,0);
        tracep->declBit(c+229,"top id_ex ID_w_ena", false,-1);
        tracep->declBus(c+230,"top id_ex ID_w_addr", false,-1, 4,0);
        tracep->declQuad(c+851,"top id_ex ID_data1", false,-1, 63,0);
        tracep->declQuad(c+853,"top id_ex ID_data2", false,-1, 63,0);
        tracep->declQuad(c+233,"top id_ex ID_imm", false,-1, 63,0);
        tracep->declBus(c+235,"top id_ex ID_exop", false,-1, 2,0);
        tracep->declBus(c+236,"top id_ex ID_aluop", false,-1, 4,0);
        tracep->declBus(c+237,"top id_ex ID_memwop", false,-1, 2,0);
        tracep->declBus(c+238,"top id_ex ID_memrop", false,-1, 2,0);
        tracep->declBit(c+231,"top id_ex ID_mem_ena", false,-1);
        tracep->declBit(c+232,"top id_ex ID_mem_wr", false,-1);
        tracep->declBit(c+241,"top id_ex EX_w_ena", false,-1);
        tracep->declBus(c+242,"top id_ex EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+243,"top id_ex EX_data1", false,-1, 63,0);
        tracep->declQuad(c+245,"top id_ex EX_data2", false,-1, 63,0);
        tracep->declQuad(c+247,"top id_ex EX_imm", false,-1, 63,0);
        tracep->declBus(c+249,"top id_ex EX_exop", false,-1, 2,0);
        tracep->declBus(c+250,"top id_ex EX_aluop", false,-1, 4,0);
        tracep->declBus(c+251,"top id_ex EX_memwop", false,-1, 2,0);
        tracep->declBus(c+252,"top id_ex EX_memrop", false,-1, 2,0);
        tracep->declBit(c+253,"top id_ex EX_mem_ena", false,-1);
        tracep->declBit(c+254,"top id_ex EX_mem_wr", false,-1);
        tracep->declBus(c+255,"top id_ex EX_instr", false,-1, 31,0);
        tracep->declQuad(c+256,"top id_ex EX_pc", false,-1, 63,0);
        tracep->declBit(c+1144,"top id_ex id_go", false,-1);
        tracep->declBit(c+240,"top id_ex id_now_valid", false,-1);
        tracep->declBit(c+241,"top ysyx_22040931_EX w_ena_i", false,-1);
        tracep->declBus(c+242,"top ysyx_22040931_EX w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+256,"top ysyx_22040931_EX pc_i", false,-1, 63,0);
        tracep->declBus(c+255,"top ysyx_22040931_EX instr", false,-1, 31,0);
        tracep->declQuad(c+243,"top ysyx_22040931_EX data1", false,-1, 63,0);
        tracep->declQuad(c+245,"top ysyx_22040931_EX data2", false,-1, 63,0);
        tracep->declQuad(c+247,"top ysyx_22040931_EX imm", false,-1, 63,0);
        tracep->declBus(c+249,"top ysyx_22040931_EX exop", false,-1, 2,0);
        tracep->declBus(c+250,"top ysyx_22040931_EX aluop", false,-1, 4,0);
        tracep->declBus(c+251,"top ysyx_22040931_EX memwop_i", false,-1, 2,0);
        tracep->declBus(c+252,"top ysyx_22040931_EX memrop_i", false,-1, 2,0);
        tracep->declBit(c+253,"top ysyx_22040931_EX mem_ena_i", false,-1);
        tracep->declBit(c+254,"top ysyx_22040931_EX mem_wr_i", false,-1);
        tracep->declBit(c+241,"top ysyx_22040931_EX w_ena", false,-1);
        tracep->declBus(c+242,"top ysyx_22040931_EX w_addr", false,-1, 4,0);
        tracep->declQuad(c+258,"top ysyx_22040931_EX w_data", false,-1, 63,0);
        tracep->declBus(c+251,"top ysyx_22040931_EX memwop", false,-1, 2,0);
        tracep->declBus(c+252,"top ysyx_22040931_EX memrop", false,-1, 2,0);
        tracep->declBit(c+253,"top ysyx_22040931_EX mem_ena", false,-1);
        tracep->declBit(c+254,"top ysyx_22040931_EX mem_wr", false,-1);
        tracep->declQuad(c+260,"top ysyx_22040931_EX mem_addr", false,-1, 63,0);
        tracep->declQuad(c+245,"top ysyx_22040931_EX mem_data", false,-1, 63,0);
        tracep->declBus(c+255,"top ysyx_22040931_EX instr_o", false,-1, 31,0);
        tracep->declQuad(c+256,"top ysyx_22040931_EX pc_o", false,-1, 63,0);
        tracep->declQuad(c+558,"top ysyx_22040931_EX result", false,-1, 63,0);
        tracep->declQuad(c+243,"top ysyx_22040931_EX ysyx_22040931_ALU num1", false,-1, 63,0);
        tracep->declQuad(c+245,"top ysyx_22040931_EX ysyx_22040931_ALU num2", false,-1, 63,0);
        tracep->declQuad(c+247,"top ysyx_22040931_EX ysyx_22040931_ALU imm", false,-1, 63,0);
        tracep->declQuad(c+256,"top ysyx_22040931_EX ysyx_22040931_ALU pc", false,-1, 63,0);
        tracep->declBus(c+250,"top ysyx_22040931_EX ysyx_22040931_ALU op", false,-1, 4,0);
        tracep->declQuad(c+558,"top ysyx_22040931_EX ysyx_22040931_ALU out", false,-1, 63,0);
        tracep->declQuad(c+243,"top ysyx_22040931_EX ysyx_22040931_ALU num1_s", false,-1, 63,0);
        tracep->declBus(c+560,"top ysyx_22040931_EX ysyx_22040931_ALU num1_sw", false,-1, 31,0);
        tracep->declQuad(c+245,"top ysyx_22040931_EX ysyx_22040931_ALU num2_s", false,-1, 63,0);
        tracep->declBus(c+561,"top ysyx_22040931_EX ysyx_22040931_ALU num2_sw", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_EX w_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_EX w_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_EX w_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+258,"top ysyx_22040931_EX w_data_mux out", false,-1, 63,0);
        tracep->declBus(c+249,"top ysyx_22040931_EX w_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_EX w_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+562,"top ysyx_22040931_EX w_data_mux lut", false,-1, 200,0);
        tracep->declBus(c+1046,"top ysyx_22040931_EX w_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_EX w_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_EX w_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_EX w_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+258,"top ysyx_22040931_EX w_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+249,"top ysyx_22040931_EX w_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_EX w_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+562,"top ysyx_22040931_EX w_data_mux i1 lut", false,-1, 200,0);
        tracep->declBus(c+1051,"top ysyx_22040931_EX w_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+569+i*3,"top ysyx_22040931_EX w_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+578+i*1,"top ysyx_22040931_EX w_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+581+i*2,"top ysyx_22040931_EX w_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+587,"top ysyx_22040931_EX w_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+589,"top ysyx_22040931_EX w_data_mux i1 hit", false,-1);
        tracep->declBus(c+1052,"top ysyx_22040931_EX w_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1119,"top ysyx_22040931_EX mem_addr_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_EX mem_addr_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_EX mem_addr_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+260,"top ysyx_22040931_EX mem_addr_mux out", false,-1, 63,0);
        tracep->declBus(c+249,"top ysyx_22040931_EX mem_addr_mux key", false,-1, 2,0);
        tracep->declQuad(c+1048,"top ysyx_22040931_EX mem_addr_mux default_out", false,-1, 63,0);
        tracep->declArray(c+590,"top ysyx_22040931_EX mem_addr_mux lut", false,-1, 133,0);
        tracep->declBus(c+1119,"top ysyx_22040931_EX mem_addr_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_EX mem_addr_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_EX mem_addr_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_EX mem_addr_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+260,"top ysyx_22040931_EX mem_addr_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+249,"top ysyx_22040931_EX mem_addr_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1048,"top ysyx_22040931_EX mem_addr_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+590,"top ysyx_22040931_EX mem_addr_mux i1 lut", false,-1, 133,0);
        tracep->declBus(c+1051,"top ysyx_22040931_EX mem_addr_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+595+i*3,"top ysyx_22040931_EX mem_addr_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+601+i*1,"top ysyx_22040931_EX mem_addr_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+603+i*2,"top ysyx_22040931_EX mem_addr_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+607,"top ysyx_22040931_EX mem_addr_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+609,"top ysyx_22040931_EX mem_addr_mux i1 hit", false,-1);
        tracep->declBus(c+1124,"top ysyx_22040931_EX mem_addr_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+1009,"top ex_mem reset", false,-1);
        tracep->declBit(c+1010,"top ex_mem clock", false,-1);
        tracep->declBit(c+1145,"top ex_mem flush", false,-1);
        tracep->declBit(c+1146,"top ex_mem stall", false,-1);
        tracep->declBit(c+240,"top ex_mem id_valid", false,-1);
        tracep->declBit(c+281,"top ex_mem mem_ready", false,-1);
        tracep->declBit(c+262,"top ex_mem ex_ready", false,-1);
        tracep->declBit(c+263,"top ex_mem ex_valid", false,-1);
        tracep->declQuad(c+256,"top ex_mem EX_pc", false,-1, 63,0);
        tracep->declBus(c+255,"top ex_mem EX_instr", false,-1, 31,0);
        tracep->declBit(c+241,"top ex_mem EX_w_ena", false,-1);
        tracep->declBus(c+242,"top ex_mem EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+258,"top ex_mem EX_w_data", false,-1, 63,0);
        tracep->declBus(c+251,"top ex_mem EX_memwop", false,-1, 2,0);
        tracep->declBus(c+252,"top ex_mem EX_memrop", false,-1, 2,0);
        tracep->declBit(c+253,"top ex_mem EX_mem_ena", false,-1);
        tracep->declBit(c+254,"top ex_mem EX_mem_wr", false,-1);
        tracep->declQuad(c+260,"top ex_mem EX_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+245,"top ex_mem EX_mem_data", false,-1, 63,0);
        tracep->declBit(c+264,"top ex_mem MEM_w_ena", false,-1);
        tracep->declBus(c+265,"top ex_mem MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+266,"top ex_mem MEM_w_data", false,-1, 63,0);
        tracep->declBus(c+268,"top ex_mem MEM_memwop", false,-1, 2,0);
        tracep->declBus(c+269,"top ex_mem MEM_memrop", false,-1, 2,0);
        tracep->declBit(c+270,"top ex_mem MEM_mem_ena", false,-1);
        tracep->declBit(c+271,"top ex_mem MEM_mem_wr", false,-1);
        tracep->declQuad(c+272,"top ex_mem MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+274,"top ex_mem MEM_mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+276,"top ex_mem MEM_instr", false,-1, 31,0);
        tracep->declQuad(c+277,"top ex_mem MEM_pc", false,-1, 63,0);
        tracep->declBit(c+263,"top ex_mem ex_now_valid", false,-1);
        tracep->declBit(c+1147,"top ex_mem ex_go", false,-1);
        tracep->declBit(c+264,"top ysyx_22040931_MEM w_ena_i", false,-1);
        tracep->declBus(c+265,"top ysyx_22040931_MEM w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+266,"top ysyx_22040931_MEM w_data_i", false,-1, 63,0);
        tracep->declBus(c+268,"top ysyx_22040931_MEM memwop", false,-1, 2,0);
        tracep->declBus(c+269,"top ysyx_22040931_MEM memrop", false,-1, 2,0);
        tracep->declBit(c+270,"top ysyx_22040931_MEM mem_ena_i", false,-1);
        tracep->declBit(c+271,"top ysyx_22040931_MEM mem_wr_i", false,-1);
        tracep->declQuad(c+272,"top ysyx_22040931_MEM mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+274,"top ysyx_22040931_MEM mem_stor_data_i", false,-1, 63,0);
        tracep->declQuad(c+214,"top ysyx_22040931_MEM mem_data", false,-1, 63,0);
        tracep->declQuad(c+277,"top ysyx_22040931_MEM pc_i", false,-1, 63,0);
        tracep->declBus(c+276,"top ysyx_22040931_MEM instr", false,-1, 31,0);
        tracep->declBit(c+264,"top ysyx_22040931_MEM w_ena", false,-1);
        tracep->declBus(c+265,"top ysyx_22040931_MEM w_addr", false,-1, 4,0);
        tracep->declQuad(c+279,"top ysyx_22040931_MEM w_data", false,-1, 63,0);
        tracep->declBus(c+1017,"top ysyx_22040931_MEM memop", false,-1, 1,0);
        tracep->declBit(c+1018,"top ysyx_22040931_MEM mem_ena", false,-1);
        tracep->declBit(c+1019,"top ysyx_22040931_MEM mem_wr", false,-1);
        tracep->declQuad(c+1020,"top ysyx_22040931_MEM mem_addr", false,-1, 63,0);
        tracep->declQuad(c+1022,"top ysyx_22040931_MEM mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+276,"top ysyx_22040931_MEM instr_o", false,-1, 31,0);
        tracep->declQuad(c+277,"top ysyx_22040931_MEM pc_o", false,-1, 63,0);
        tracep->declQuad(c+610,"top ysyx_22040931_MEM mem_r_data", false,-1, 63,0);
        tracep->declBus(c+612,"top ysyx_22040931_MEM memwrop", false,-1, 2,0);
        tracep->declQuad(c+613,"top ysyx_22040931_MEM stor_data_one", false,-1, 63,0);
        tracep->declQuad(c+615,"top ysyx_22040931_MEM stor_data_two", false,-1, 63,0);
        tracep->declQuad(c+617,"top ysyx_22040931_MEM stor_data_for", false,-1, 63,0);
        tracep->declBus(c+1134,"top ysyx_22040931_MEM memop_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_MEM memop_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1119,"top ysyx_22040931_MEM memop_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1017,"top ysyx_22040931_MEM memop_mux out", false,-1, 1,0);
        tracep->declBus(c+612,"top ysyx_22040931_MEM memop_mux key", false,-1, 2,0);
        tracep->declBus(c+1148,"top ysyx_22040931_MEM memop_mux default_out", false,-1, 1,0);
        tracep->declQuad(c+1149,"top ysyx_22040931_MEM memop_mux lut", false,-1, 34,0);
        tracep->declBus(c+1134,"top ysyx_22040931_MEM memop_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_MEM memop_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1119,"top ysyx_22040931_MEM memop_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_MEM memop_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1017,"top ysyx_22040931_MEM memop_mux i1 out", false,-1, 1,0);
        tracep->declBus(c+612,"top ysyx_22040931_MEM memop_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+1148,"top ysyx_22040931_MEM memop_mux i1 default_out", false,-1, 1,0);
        tracep->declQuad(c+1149,"top ysyx_22040931_MEM memop_mux i1 lut", false,-1, 34,0);
        tracep->declBus(c+1111,"top ysyx_22040931_MEM memop_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+193+i*1,"top ysyx_22040931_MEM memop_mux i1 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+200+i*1,"top ysyx_22040931_MEM memop_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+207+i*1,"top ysyx_22040931_MEM memop_mux i1 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+619,"top ysyx_22040931_MEM memop_mux i1 lut_out", false,-1, 1,0);
        tracep->declBit(c+620,"top ysyx_22040931_MEM memop_mux i1 hit", false,-1);
        tracep->declBus(c+1151,"top ysyx_22040931_MEM memop_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1134,"top ysyx_22040931_MEM mem_r_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_MEM mem_r_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_r_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+610,"top ysyx_22040931_MEM mem_r_data_mux out", false,-1, 63,0);
        tracep->declBus(c+269,"top ysyx_22040931_MEM mem_r_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_r_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+621,"top ysyx_22040931_MEM mem_r_data_mux lut", false,-1, 468,0);
        tracep->declBus(c+1134,"top ysyx_22040931_MEM mem_r_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_MEM mem_r_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_r_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_MEM mem_r_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+610,"top ysyx_22040931_MEM mem_r_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+269,"top ysyx_22040931_MEM mem_r_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_r_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+621,"top ysyx_22040931_MEM mem_r_data_mux i1 lut", false,-1, 468,0);
        tracep->declBus(c+1051,"top ysyx_22040931_MEM mem_r_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+636+i*3,"top ysyx_22040931_MEM mem_r_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+657+i*1,"top ysyx_22040931_MEM mem_r_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+664+i*2,"top ysyx_22040931_MEM mem_r_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+678,"top ysyx_22040931_MEM mem_r_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+680,"top ysyx_22040931_MEM mem_r_data_mux i1 hit", false,-1);
        tracep->declBus(c+1151,"top ysyx_22040931_MEM mem_r_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1059,"top ysyx_22040931_MEM mem_stor_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_MEM mem_stor_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_stor_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1022,"top ysyx_22040931_MEM mem_stor_data_mux out", false,-1, 63,0);
        tracep->declBus(c+268,"top ysyx_22040931_MEM mem_stor_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_stor_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+681,"top ysyx_22040931_MEM mem_stor_data_mux lut", false,-1, 267,0);
        tracep->declBus(c+1059,"top ysyx_22040931_MEM mem_stor_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1046,"top ysyx_22040931_MEM mem_stor_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_stor_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_MEM mem_stor_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1022,"top ysyx_22040931_MEM mem_stor_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+268,"top ysyx_22040931_MEM mem_stor_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_stor_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+681,"top ysyx_22040931_MEM mem_stor_data_mux i1 lut", false,-1, 267,0);
        tracep->declBus(c+1051,"top ysyx_22040931_MEM mem_stor_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+690+i*3,"top ysyx_22040931_MEM mem_stor_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+702+i*1,"top ysyx_22040931_MEM mem_stor_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+706+i*2,"top ysyx_22040931_MEM mem_stor_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+714,"top ysyx_22040931_MEM mem_stor_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+716,"top ysyx_22040931_MEM mem_stor_data_mux i1 hit", false,-1);
        tracep->declBus(c+1091,"top ysyx_22040931_MEM mem_stor_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1152,"top ysyx_22040931_MEM mem_stor_data1_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1053,"top ysyx_22040931_MEM mem_stor_data1_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_stor_data1_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+613,"top ysyx_22040931_MEM mem_stor_data1_mux out", false,-1, 63,0);
        tracep->declBus(c+717,"top ysyx_22040931_MEM mem_stor_data1_mux key", false,-1, 5,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_stor_data1_mux default_out", false,-1, 63,0);
        tracep->declArray(c+718,"top ysyx_22040931_MEM mem_stor_data1_mux lut", false,-1, 559,0);
        tracep->declBus(c+1152,"top ysyx_22040931_MEM mem_stor_data1_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1053,"top ysyx_22040931_MEM mem_stor_data1_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_stor_data1_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_MEM mem_stor_data1_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+613,"top ysyx_22040931_MEM mem_stor_data1_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+717,"top ysyx_22040931_MEM mem_stor_data1_mux i1 key", false,-1, 5,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_stor_data1_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+718,"top ysyx_22040931_MEM mem_stor_data1_mux i1 lut", false,-1, 559,0);
        tracep->declBus(c+1153,"top ysyx_22040931_MEM mem_stor_data1_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+736+i*3,"top ysyx_22040931_MEM mem_stor_data1_mux i1 pair_list", true,(i+0), 69,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+760+i*1,"top ysyx_22040931_MEM mem_stor_data1_mux i1 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+768+i*2,"top ysyx_22040931_MEM mem_stor_data1_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+784,"top ysyx_22040931_MEM mem_stor_data1_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+786,"top ysyx_22040931_MEM mem_stor_data1_mux i1 hit", false,-1);
        tracep->declBus(c+1154,"top ysyx_22040931_MEM mem_stor_data1_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1059,"top ysyx_22040931_MEM mem_stor_data2_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top ysyx_22040931_MEM mem_stor_data2_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_stor_data2_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+615,"top ysyx_22040931_MEM mem_stor_data2_mux out", false,-1, 63,0);
        tracep->declBus(c+787,"top ysyx_22040931_MEM mem_stor_data2_mux key", false,-1, 4,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_stor_data2_mux default_out", false,-1, 63,0);
        tracep->declArray(c+788,"top ysyx_22040931_MEM mem_stor_data2_mux lut", false,-1, 275,0);
        tracep->declBus(c+1059,"top ysyx_22040931_MEM mem_stor_data2_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1111,"top ysyx_22040931_MEM mem_stor_data2_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_stor_data2_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_MEM mem_stor_data2_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+615,"top ysyx_22040931_MEM mem_stor_data2_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+787,"top ysyx_22040931_MEM mem_stor_data2_mux i1 key", false,-1, 4,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_stor_data2_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+788,"top ysyx_22040931_MEM mem_stor_data2_mux i1 lut", false,-1, 275,0);
        tracep->declBus(c+1155,"top ysyx_22040931_MEM mem_stor_data2_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+797+i*3,"top ysyx_22040931_MEM mem_stor_data2_mux i1 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+809+i*1,"top ysyx_22040931_MEM mem_stor_data2_mux i1 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+813+i*2,"top ysyx_22040931_MEM mem_stor_data2_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+821,"top ysyx_22040931_MEM mem_stor_data2_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+823,"top ysyx_22040931_MEM mem_stor_data2_mux i1 hit", false,-1);
        tracep->declBus(c+1091,"top ysyx_22040931_MEM mem_stor_data2_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1119,"top ysyx_22040931_MEM mem_stor_data3_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1059,"top ysyx_22040931_MEM mem_stor_data3_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_stor_data3_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+617,"top ysyx_22040931_MEM mem_stor_data3_mux out", false,-1, 63,0);
        tracep->declBus(c+824,"top ysyx_22040931_MEM mem_stor_data3_mux key", false,-1, 3,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_stor_data3_mux default_out", false,-1, 63,0);
        tracep->declArray(c+825,"top ysyx_22040931_MEM mem_stor_data3_mux lut", false,-1, 135,0);
        tracep->declBus(c+1119,"top ysyx_22040931_MEM mem_stor_data3_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1059,"top ysyx_22040931_MEM mem_stor_data3_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1047,"top ysyx_22040931_MEM mem_stor_data3_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1050,"top ysyx_22040931_MEM mem_stor_data3_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+617,"top ysyx_22040931_MEM mem_stor_data3_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+824,"top ysyx_22040931_MEM mem_stor_data3_mux i1 key", false,-1, 3,0);
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_stor_data3_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+825,"top ysyx_22040931_MEM mem_stor_data3_mux i1 lut", false,-1, 135,0);
        tracep->declBus(c+1141,"top ysyx_22040931_MEM mem_stor_data3_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+830+i*3,"top ysyx_22040931_MEM mem_stor_data3_mux i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+836+i*1,"top ysyx_22040931_MEM mem_stor_data3_mux i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+838+i*2,"top ysyx_22040931_MEM mem_stor_data3_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+842,"top ysyx_22040931_MEM mem_stor_data3_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+844,"top ysyx_22040931_MEM mem_stor_data3_mux i1 hit", false,-1);
        tracep->declBus(c+1124,"top ysyx_22040931_MEM mem_stor_data3_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+1009,"top mem_wb reset", false,-1);
        tracep->declBit(c+1010,"top mem_wb clock", false,-1);
        tracep->declBit(c+1156,"top mem_wb flush", false,-1);
        tracep->declBit(c+1157,"top mem_wb stall", false,-1);
        tracep->declBit(c+263,"top mem_wb ex_valid", false,-1);
        tracep->declBit(c+281,"top mem_wb mem_ready", false,-1);
        tracep->declBit(c+282,"top mem_wb mem_valid", false,-1);
        tracep->declQuad(c+277,"top mem_wb MEM_pc", false,-1, 63,0);
        tracep->declBus(c+276,"top mem_wb MEM_instr", false,-1, 31,0);
        tracep->declBit(c+264,"top mem_wb MEM_w_ena", false,-1);
        tracep->declBus(c+265,"top mem_wb MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+279,"top mem_wb MEM_w_data", false,-1, 63,0);
        tracep->declBit(c+283,"top mem_wb WB_w_ena", false,-1);
        tracep->declBus(c+284,"top mem_wb WB_w_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"top mem_wb WB_w_data", false,-1, 63,0);
        tracep->declBus(c+289,"top mem_wb WB_instr", false,-1, 31,0);
        tracep->declQuad(c+287,"top mem_wb WB_pc", false,-1, 63,0);
        tracep->declBit(c+282,"top mem_wb mem_now_valid", false,-1);
        tracep->declBit(c+1158,"top mem_wb mem_go", false,-1);
        tracep->declBit(c+283,"top ysyx_22040931_WB w_ena_i", false,-1);
        tracep->declBus(c+284,"top ysyx_22040931_WB w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+285,"top ysyx_22040931_WB w_data_i", false,-1, 63,0);
        tracep->declQuad(c+287,"top ysyx_22040931_WB pc_i", false,-1, 63,0);
        tracep->declBit(c+283,"top ysyx_22040931_WB w_ena", false,-1);
        tracep->declBus(c+284,"top ysyx_22040931_WB w_addr", false,-1, 4,0);
        tracep->declQuad(c+285,"top ysyx_22040931_WB w_data", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp1398;
    VlWide<5>/*159:0*/ __Vtemp1399;
    VlWide<3>/*95:0*/ __Vtemp1400;
    VlWide<4>/*127:0*/ __Vtemp1401;
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
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__pre_branch),64);
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__pc_ready));
        tracep->fullBit(oldp+219,(vlSelf->top__DOT__pc_valid));
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__if_ready));
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__if_id__DOT__if_now_valid));
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__ID_pre_jump));
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__ID_pre_branch),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__ID_pc),64);
        tracep->fullIData(oldp+227,(vlSelf->top__DOT__ID_instr),32);
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__load_stall));
        tracep->fullBit(oldp+229,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 0xaU))));
        tracep->fullCData(oldp+230,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 7U))),5);
        tracep->fullBit(oldp+231,((IData)(((0U != (0xeU 
                                                   & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))) 
                                           | (0U != 
                                              (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))))));
        tracep->fullBit(oldp+232,((0U != (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))));
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__id_imm),64);
        tracep->fullCData(oldp+235,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+236,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))),5);
        tracep->fullCData(oldp+237,((7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))),3);
        tracep->fullCData(oldp+238,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                           >> 1U))),3);
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__id_ready));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__id_ex__DOT__id_now_valid));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__EX_w_ena));
        tracep->fullCData(oldp+242,(vlSelf->top__DOT__EX_w_addr),5);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__EX_data1),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__EX_data2),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__EX_imm),64);
        tracep->fullCData(oldp+249,(vlSelf->top__DOT__EX_exop),3);
        tracep->fullCData(oldp+250,(vlSelf->top__DOT__EX_aluop),5);
        tracep->fullCData(oldp+251,(vlSelf->top__DOT__EX_memwop),3);
        tracep->fullCData(oldp+252,(vlSelf->top__DOT__EX_memrop),3);
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__EX_mem_ena));
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__EX_mem_wr));
        tracep->fullIData(oldp+255,(vlSelf->top__DOT__EX_instr),32);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__EX_pc),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__ex_w_data),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__ex_mem_addr),64);
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__ex_ready));
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__MEM_w_ena));
        tracep->fullCData(oldp+265,(vlSelf->top__DOT__MEM_w_addr),5);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__MEM_w_data),64);
        tracep->fullCData(oldp+268,(vlSelf->top__DOT__MEM_memwop),3);
        tracep->fullCData(oldp+269,(vlSelf->top__DOT__MEM_memrop),3);
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__MEM_mem_ena));
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__MEM_mem_wr));
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__MEM_mem_addr),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__MEM_mem_stor_data),64);
        tracep->fullIData(oldp+276,(vlSelf->top__DOT__MEM_instr),32);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__MEM_pc),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__mem_w_data),64);
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__mem_ready));
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__mem_wb__DOT__mem_now_valid));
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__WB_w_ena));
        tracep->fullCData(oldp+284,(vlSelf->top__DOT__WB_w_addr),5);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__WB_w_data),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__WB_pc),64);
        tracep->fullIData(oldp+289,(vlSelf->top__DOT__WB_instr),32);
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid));
        tracep->fullCData(oldp+291,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_hash),8);
        tracep->fullCData(oldp+292,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index),8);
        tracep->fullIData(oldp+293,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i),32);
        tracep->fullIData(oldp+294,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j),32);
        tracep->fullCData(oldp+295,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__ID_pc 
                                                      >> 2U)))),8);
        tracep->fullCData(oldp+296,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__jumptype),2);
        tracep->fullIData(oldp+297,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__i),32);
        tracep->fullIData(oldp+298,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__j),32);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[1]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[2]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[3]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[4]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[5]),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[6]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[7]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[8]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[9]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[10]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[11]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[12]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[13]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[14]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[15]),64);
        tracep->fullCData(oldp+331,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index),4);
        tracep->fullBit(oldp+332,((1U & (~ (IData)(vlSelf->top__DOT__load_stall)))));
        tracep->fullIData(oldp+333,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__r_count),32);
        tracep->fullIData(oldp+334,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__count),32);
        tracep->fullCData(oldp+335,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype),3);
        tracep->fullBit(oldp+336,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 9U))));
        tracep->fullCData(oldp+337,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 0xfU))),5);
        tracep->fullBit(oldp+338,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 8U))));
        tracep->fullCData(oldp+339,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch),64);
        tracep->fullBit(oldp+342,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__EX_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 9U))))));
        tracep->fullBit(oldp+343,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__EX_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 8U))))));
        tracep->fullBit(oldp+344,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 9U))))));
        tracep->fullBit(oldp+345,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 8U))))));
        tracep->fullBit(oldp+346,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+347,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+348,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                         >> 8U))));
        tracep->fullBit(oldp+349,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                         >> 8U))));
        tracep->fullBit(oldp+350,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                         >> 9U))));
        tracep->fullBit(oldp+351,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                         >> 8U))));
        tracep->fullCData(oldp+352,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+353,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                           >> 9U))),3);
        tracep->fullCData(oldp+354,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                           >> 8U))),3);
        tracep->fullCData(oldp+355,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+356,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+357,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+358,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out))),5);
        tracep->fullCData(oldp+359,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                              >> 4U))),5);
        tracep->fullCData(oldp+360,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                              >> 3U))),5);
        tracep->fullCData(oldp+361,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out))),5);
        tracep->fullCData(oldp+362,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                              >> 1U))),5);
        tracep->fullCData(oldp+363,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out))),5);
        tracep->fullBit(oldp+364,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))));
        tracep->fullBit(oldp+365,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out))));
        tracep->fullSData(oldp+366,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1),11);
        tracep->fullWData(oldp+367,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4),84);
        tracep->fullSData(oldp+370,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[0]),14);
        tracep->fullSData(oldp+371,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[1]),14);
        tracep->fullSData(oldp+372,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[2]),14);
        tracep->fullSData(oldp+373,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[3]),14);
        tracep->fullSData(oldp+374,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[4]),14);
        tracep->fullSData(oldp+375,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[5]),14);
        tracep->fullCData(oldp+376,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+377,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+378,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+379,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+380,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullCData(oldp+381,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[5]),3);
        tracep->fullSData(oldp+382,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[0]),11);
        tracep->fullSData(oldp+383,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[1]),11);
        tracep->fullSData(oldp+384,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[2]),11);
        tracep->fullSData(oldp+385,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[3]),11);
        tracep->fullSData(oldp+386,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[4]),11);
        tracep->fullSData(oldp+387,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[5]),11);
        tracep->fullSData(oldp+388,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out),11);
        tracep->fullBit(oldp+389,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+390,((0x7fU & vlSelf->top__DOT__ID_instr)),7);
        tracep->fullCData(oldp+391,((7U & (vlSelf->top__DOT__ID_instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+392,((vlSelf->top__DOT__ID_instr 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+393,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out),9);
        tracep->fullIData(oldp+394,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose),17);
        tracep->fullSData(oldp+395,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+396,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+397,((1U & (vlSelf->top__DOT__ID_instr 
                                         >> 0x14U))));
        tracep->fullSData(oldp+398,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out),13);
        tracep->fullSData(oldp+399,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1),13);
        tracep->fullSData(oldp+400,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2),12);
        tracep->fullSData(oldp+401,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3),12);
        tracep->fullSData(oldp+402,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4),12);
        tracep->fullSData(oldp+403,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1),10);
        tracep->fullSData(oldp+404,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2),16);
        tracep->fullIData(oldp+405,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3),17);
        tracep->fullIData(oldp+406,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4),18);
        tracep->fullCData(oldp+407,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2),4);
        tracep->fullWData(oldp+408,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4),68);
        tracep->fullIData(oldp+411,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[0]),17);
        tracep->fullIData(oldp+412,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[1]),17);
        tracep->fullIData(oldp+413,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[2]),17);
        tracep->fullIData(oldp+414,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[3]),17);
        tracep->fullCData(oldp+415,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+416,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+417,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+418,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[3]),4);
        tracep->fullSData(oldp+419,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[0]),13);
        tracep->fullSData(oldp+420,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[1]),13);
        tracep->fullSData(oldp+421,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[2]),13);
        tracep->fullSData(oldp+422,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[3]),13);
        tracep->fullSData(oldp+423,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out),13);
        tracep->fullBit(oldp+424,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+425,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out),13);
        tracep->fullBit(oldp+426,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+427,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+428,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+429,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+430,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+431,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+432,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+433,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out),12);
        tracep->fullSData(oldp+434,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+435,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+436,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose),10);
        tracep->fullSData(oldp+437,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out),9);
        tracep->fullSData(oldp+438,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+440,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out),10);
        tracep->fullSData(oldp+441,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__lut_out),10);
        tracep->fullBit(oldp+442,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+443,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out),9);
        tracep->fullSData(oldp+444,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+445,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit));
        tracep->fullIData(oldp+446,((vlSelf->top__DOT__ID_instr 
                                     >> 7U)),25);
        tracep->fullWData(oldp+447,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4),335);
        tracep->fullWData(oldp+458,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+461,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+464,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+467,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+470,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+473,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+474,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+475,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+476,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+477,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+482,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+484,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+488,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+490,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit));
        tracep->fullQData(oldp+491,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+495,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+511,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+513,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+539,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+541,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+543,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+545,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+547,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+549,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[31]),64);
        tracep->fullIData(oldp+555,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__i),32);
        tracep->fullCData(oldp+556,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2),4);
        tracep->fullCData(oldp+557,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2),4);
        tracep->fullQData(oldp+558,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result),64);
        tracep->fullIData(oldp+560,((IData)(vlSelf->top__DOT__EX_data1)),32);
        tracep->fullIData(oldp+561,((IData)(vlSelf->top__DOT__EX_data2)),32);
        tracep->fullWData(oldp+562,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4),201);
        tracep->fullWData(oldp+569,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+572,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+575,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+578,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+579,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+580,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullQData(oldp+581,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+583,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+585,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+587,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+590,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4),134);
        tracep->fullWData(oldp+595,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+598,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullCData(oldp+601,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+602,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullQData(oldp+603,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+605,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+607,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+609,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit));
        tracep->fullQData(oldp+610,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data),64);
        tracep->fullCData(oldp+612,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop),3);
        tracep->fullQData(oldp+613,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one),64);
        tracep->fullQData(oldp+615,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two),64);
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for),64);
        tracep->fullCData(oldp+619,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out),2);
        tracep->fullBit(oldp+620,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+621,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4),469);
        tracep->fullWData(oldp+636,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+639,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+642,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+645,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+648,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+651,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+654,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[6]),67);
        tracep->fullCData(oldp+657,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+658,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+659,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+660,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+661,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullCData(oldp+662,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[5]),3);
        tracep->fullCData(oldp+663,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[6]),3);
        tracep->fullQData(oldp+664,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+666,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+668,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+670,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+672,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+674,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[5]),64);
        tracep->fullQData(oldp+676,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[6]),64);
        tracep->fullQData(oldp+678,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+680,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+681,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4),268);
        tracep->fullWData(oldp+690,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+693,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+696,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+699,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullCData(oldp+702,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+703,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+704,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+705,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullQData(oldp+706,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+708,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+710,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+712,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+714,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+716,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+717,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2),6);
        tracep->fullWData(oldp+718,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4),560);
        tracep->fullWData(oldp+736,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[0]),70);
        tracep->fullWData(oldp+739,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[1]),70);
        tracep->fullWData(oldp+742,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[2]),70);
        tracep->fullWData(oldp+745,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[3]),70);
        tracep->fullWData(oldp+748,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[4]),70);
        tracep->fullWData(oldp+751,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[5]),70);
        tracep->fullWData(oldp+754,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[6]),70);
        tracep->fullWData(oldp+757,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[7]),70);
        tracep->fullCData(oldp+760,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[0]),6);
        tracep->fullCData(oldp+761,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[1]),6);
        tracep->fullCData(oldp+762,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[2]),6);
        tracep->fullCData(oldp+763,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[3]),6);
        tracep->fullCData(oldp+764,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[4]),6);
        tracep->fullCData(oldp+765,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[5]),6);
        tracep->fullCData(oldp+766,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[6]),6);
        tracep->fullCData(oldp+767,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[7]),6);
        tracep->fullQData(oldp+768,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+770,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+772,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+774,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+776,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+778,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[5]),64);
        tracep->fullQData(oldp+780,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[6]),64);
        tracep->fullQData(oldp+782,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[7]),64);
        tracep->fullQData(oldp+784,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+786,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+787,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2),5);
        tracep->fullWData(oldp+788,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4),276);
        tracep->fullWData(oldp+797,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+800,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+803,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+806,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[3]),69);
        tracep->fullCData(oldp+809,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[0]),5);
        tracep->fullCData(oldp+810,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[1]),5);
        tracep->fullCData(oldp+811,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[2]),5);
        tracep->fullCData(oldp+812,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[3]),5);
        tracep->fullQData(oldp+813,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+815,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+817,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+819,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+821,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+823,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+824,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2),4);
        tracep->fullWData(oldp+825,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4),136);
        tracep->fullWData(oldp+830,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+833,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+836,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+837,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[1]),4);
        tracep->fullQData(oldp+838,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+840,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+842,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+844,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+845,(vlSelf->top__DOT__mux_pc));
        tracep->fullQData(oldp+846,(vlSelf->top__DOT__branch),64);
        tracep->fullBit(oldp+848,(vlSelf->top__DOT__pre_jump));
        tracep->fullCData(oldp+849,(vlSelf->top__DOT__jumptype),2);
        tracep->fullBit(oldp+850,(vlSelf->top__DOT__error_pre));
        tracep->fullQData(oldp+851,(vlSelf->top__DOT__id_data1),64);
        tracep->fullQData(oldp+853,(vlSelf->top__DOT__id_data2),64);
        tracep->fullBit(oldp+855,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre));
        tracep->fullWData(oldp+856,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4),201);
        tracep->fullWData(oldp+863,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+866,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+869,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+872,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+873,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+874,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullQData(oldp+875,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+877,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+879,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+881,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+883,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+884,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__bjump));
        tracep->fullSData(oldp+885,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4),12);
        tracep->fullCData(oldp+886,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+887,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+888,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+889,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+890,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+891,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullBit(oldp+892,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[0]));
        tracep->fullBit(oldp+893,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[1]));
        tracep->fullBit(oldp+894,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[2]));
        tracep->fullBit(oldp+895,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out));
        tracep->fullBit(oldp+896,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+897,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb),3);
        tracep->fullWData(oldp+898,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4),66);
        tracep->fullSData(oldp+901,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+902,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+903,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+904,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+905,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+906,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+907,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[0]),10);
        tracep->fullSData(oldp+908,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[1]),10);
        tracep->fullSData(oldp+909,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[2]),10);
        tracep->fullSData(oldp+910,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[3]),10);
        tracep->fullSData(oldp+911,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[4]),10);
        tracep->fullSData(oldp+912,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[5]),10);
        tracep->fullBit(oldp+913,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[0]));
        tracep->fullBit(oldp+914,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[1]));
        tracep->fullBit(oldp+915,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[2]));
        tracep->fullBit(oldp+916,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[3]));
        tracep->fullBit(oldp+917,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[4]));
        tracep->fullBit(oldp+918,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[5]));
        tracep->fullBit(oldp+919,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out));
        tracep->fullBit(oldp+920,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+921,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4),340);
        tracep->fullWData(oldp+932,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+935,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+938,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+941,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+944,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[4]),68);
        tracep->fullCData(oldp+947,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+948,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+949,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+950,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[3]),4);
        tracep->fullCData(oldp+951,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[4]),4);
        tracep->fullQData(oldp+952,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+954,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+956,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+958,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+960,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+962,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+964,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+965,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4),340);
        tracep->fullWData(oldp+976,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+979,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+982,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+985,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+988,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[4]),68);
        tracep->fullCData(oldp+991,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+992,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+993,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+994,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[3]),4);
        tracep->fullCData(oldp+995,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[4]),4);
        tracep->fullQData(oldp+996,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+998,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1000,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1002,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1004,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1006,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+1008,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+1009,(vlSelf->reset));
        tracep->fullBit(oldp+1010,(vlSelf->clock));
        tracep->fullIData(oldp+1011,(vlSelf->instr),32);
        tracep->fullQData(oldp+1012,(vlSelf->momory_data),64);
        tracep->fullBit(oldp+1014,(vlSelf->fetch_enb));
        tracep->fullQData(oldp+1015,(vlSelf->pc),64);
        tracep->fullCData(oldp+1017,(vlSelf->memop),2);
        tracep->fullBit(oldp+1018,(vlSelf->mem_ena));
        tracep->fullBit(oldp+1019,(vlSelf->mem_wr));
        tracep->fullQData(oldp+1020,(vlSelf->mem_addr),64);
        tracep->fullQData(oldp+1022,(vlSelf->mem_stor_data),64);
        tracep->fullIData(oldp+1024,(vlSelf->difftest_instr),32);
        tracep->fullQData(oldp+1025,(vlSelf->difftest_pc),64);
        tracep->fullCData(oldp+1027,(((3U == (IData)(vlSelf->memop))
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
        tracep->fullQData(oldp+1028,(((IData)(vlSelf->top__DOT__error_pre)
                                       ? ((IData)(vlSelf->top__DOT__mux_pc)
                                           ? vlSelf->top__DOT__branch
                                           : (4ULL 
                                              + vlSelf->top__DOT__ID_pc))
                                       : ((IData)(vlSelf->top__DOT__pre_jump)
                                           ? vlSelf->top__DOT__pre_branch
                                           : (4ULL 
                                              + vlSelf->pc)))),64);
        tracep->fullBit(oldp+1030,(((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre) 
                                    & (vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT
                                       [(0xffU & ((IData)(
                                                          (vlSelf->pc 
                                                           >> 3U)) 
                                                  ^ 
                                                  vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT
                                                  [
                                                  (0xffU 
                                                   & ((((IData)(
                                                                (vlSelf->pc 
                                                                 >> 0x1aU)) 
                                                        + (IData)(
                                                                  (vlSelf->pc 
                                                                   >> 0x12U))) 
                                                       + (IData)(
                                                                 (vlSelf->pc 
                                                                  >> 0xaU))) 
                                                      + (IData)(
                                                                (vlSelf->pc 
                                                                 >> 2U))))]))] 
                                       >> 1U))));
        tracep->fullBit(oldp+1031,((((vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                      [(0xffU & (IData)(
                                                        (vlSelf->pc 
                                                         >> 2U)))][3U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                                   [
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->pc 
                                                               >> 2U)))][2U] 
                                                   >> 2U)) 
                                    == (IData)(vlSelf->pc))));
        tracep->fullCData(oldp+1032,((0xffU & ((((IData)(
                                                         (vlSelf->pc 
                                                          >> 0x1aU)) 
                                                 + (IData)(
                                                           (vlSelf->pc 
                                                            >> 0x12U))) 
                                                + (IData)(
                                                          (vlSelf->pc 
                                                           >> 0xaU))) 
                                               + (IData)(
                                                         (vlSelf->pc 
                                                          >> 2U))))),8);
        tracep->fullCData(oldp+1033,((0xffU & ((IData)(
                                                       (vlSelf->pc 
                                                        >> 3U)) 
                                               ^ vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT
                                               [(0xffU 
                                                 & ((((IData)(
                                                              (vlSelf->pc 
                                                               >> 0x1aU)) 
                                                      + (IData)(
                                                                (vlSelf->pc 
                                                                 >> 0x12U))) 
                                                     + (IData)(
                                                               (vlSelf->pc 
                                                                >> 0xaU))) 
                                                    + (IData)(
                                                              (vlSelf->pc 
                                                               >> 2U))))]))),8);
        tracep->fullCData(oldp+1034,((0xffU & (IData)(
                                                      (vlSelf->pc 
                                                       >> 2U)))),8);
        tracep->fullQData(oldp+1035,(((IData)(vlSelf->reset)
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
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__ID_instr 
                                                      >> 0xfU))])
                                                  : 0ULL))),64);
        tracep->fullQData(oldp+1037,(((IData)(vlSelf->reset)
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
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__ID_instr 
                                                      >> 0x14U))])
                                                  : 0ULL))),64);
        tracep->fullQData(oldp+1039,((vlSelf->top__DOT__id_data1 
                                      + vlSelf->top__DOT__id_imm)),64);
        tracep->fullBit(oldp+1041,(vlSelf->top__DOT__nop));
        tracep->fullBit(oldp+1042,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__flush));
        tracep->fullBit(oldp+1043,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall));
        tracep->fullBit(oldp+1044,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall)))));
        tracep->fullBit(oldp+1045,(vlSelf->top__DOT__if_id__DOT__flush));
        tracep->fullIData(oldp+1046,(3U),32);
        tracep->fullIData(oldp+1047,(0x40U),32);
        tracep->fullQData(oldp+1048,(0x80000000ULL),64);
        tracep->fullIData(oldp+1050,(1U),32);
        tracep->fullIData(oldp+1051,(0x43U),32);
        tracep->fullIData(oldp+1052,(3U),32);
        tracep->fullIData(oldp+1053,(6U),32);
        tracep->fullIData(oldp+1054,(0xbU),32);
        tracep->fullSData(oldp+1055,(0U),11);
        tracep->fullIData(oldp+1056,(0xeU),32);
        tracep->fullIData(oldp+1057,(6U),32);
        tracep->fullBit(oldp+1058,(0U));
        tracep->fullIData(oldp+1059,(4U),32);
        tracep->fullIData(oldp+1060,(0x1cU),32);
        tracep->fullIData(oldp+1061,(0x11U),32);
        tracep->fullIData(oldp+1062,(9U),32);
        tracep->fullSData(oldp+1063,(0U),9);
        tracep->fullWData(oldp+1064,(Vtop__ConstPool__CONST_62d53ceb_0),728);
        tracep->fullIData(oldp+1087,(0x1aU),32);
        tracep->fullIData(oldp+1088,(0x1cU),32);
        tracep->fullIData(oldp+1089,(0xdU),32);
        tracep->fullSData(oldp+1090,(0U),13);
        tracep->fullIData(oldp+1091,(4U),32);
        tracep->fullIData(oldp+1092,(0xaU),32);
        tracep->fullWData(oldp+1093,(Vtop__ConstPool__CONST_f35eebe5_0),299);
        tracep->fullIData(oldp+1103,(0x17U),32);
        tracep->fullIData(oldp+1104,(0xdU),32);
        tracep->fullIData(oldp+1105,(0x10U),32);
        tracep->fullIData(oldp+1106,(0xcU),32);
        tracep->fullSData(oldp+1107,(0U),12);
        __Vtemp1398[0U] = 0x293f48U;
        __Vtemp1398[1U] = 0x404293f5U;
        __Vtemp1398[2U] = 0x93fU;
        tracep->fullWData(oldp+1108,(__Vtemp1398),84);
        tracep->fullIData(oldp+1111,(5U),32);
        __Vtemp1399[0U] = 0x29bf68U;
        __Vtemp1399[1U] = 0xe10537ecU;
        __Vtemp1399[2U] = 0x980064fcU;
        __Vtemp1399[3U] = 0xe580089fU;
        __Vtemp1399[4U] = 0x9bU;
        tracep->fullWData(oldp+1112,(__Vtemp1399),145);
        tracep->fullIData(oldp+1117,(0x1dU),32);
        tracep->fullIData(oldp+1118,(5U),32);
        tracep->fullIData(oldp+1119,(2U),32);
        tracep->fullIData(oldp+1120,(0x12U),32);
        tracep->fullQData(oldp+1121,(0x1cec000473b00ULL),60);
        tracep->fullIData(oldp+1123,(0x1eU),32);
        tracep->fullIData(oldp+1124,(2U),32);
        __Vtemp1400[0U] = 0x5ec23d79U;
        __Vtemp1400[1U] = 0x23d7d28fU;
        __Vtemp1400[2U] = 0x68f5fdU;
        tracep->fullWData(oldp+1125,(__Vtemp1400),88);
        tracep->fullIData(oldp+1128,(0x16U),32);
        __Vtemp1401[0U] = 0x3801c700U;
        __Vtemp1401[1U] = 0x131c036U;
        __Vtemp1401[2U] = 0x5c700f8eU;
        __Vtemp1401[3U] = 0x6380U;
        tracep->fullWData(oldp+1129,(__Vtemp1401),114);
        tracep->fullIData(oldp+1133,(0x13U),32);
        tracep->fullIData(oldp+1134,(7U),32);
        tracep->fullSData(oldp+1135,(0U),10);
        tracep->fullIData(oldp+1136,(0x1bfe1U),17);
        tracep->fullIData(oldp+1137,(1U),32);
        tracep->fullIData(oldp+1138,(0x2fee6f40U),32);
        tracep->fullQData(oldp+1139,(0ULL),64);
        tracep->fullIData(oldp+1141,(0x44U),32);
        tracep->fullBit(oldp+1142,(vlSelf->top__DOT__id_ex__DOT__flush));
        tracep->fullBit(oldp+1143,(vlSelf->top__DOT__id_ex__DOT__stall));
        tracep->fullBit(oldp+1144,((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))));
        tracep->fullBit(oldp+1145,(vlSelf->top__DOT__ex_mem__DOT__flush));
        tracep->fullBit(oldp+1146,(vlSelf->top__DOT__ex_mem__DOT__stall));
        tracep->fullBit(oldp+1147,((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))));
        tracep->fullCData(oldp+1148,(0U),2);
        tracep->fullQData(oldp+1149,(0x110d8db5fULL),35);
        tracep->fullIData(oldp+1151,(7U),32);
        tracep->fullIData(oldp+1152,(8U),32);
        tracep->fullIData(oldp+1153,(0x46U),32);
        tracep->fullIData(oldp+1154,(8U),32);
        tracep->fullIData(oldp+1155,(0x45U),32);
        tracep->fullBit(oldp+1156,(vlSelf->top__DOT__mem_wb__DOT__flush));
        tracep->fullBit(oldp+1157,(vlSelf->top__DOT__mem_wb__DOT__stall));
        tracep->fullBit(oldp+1158,((1U & (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__stall)))));
    }
}
