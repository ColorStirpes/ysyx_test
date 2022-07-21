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
        tracep->declBit(c+1306,"reset", false,-1);
        tracep->declBit(c+1307,"clock", false,-1);
        tracep->declBus(c+1308,"instr", false,-1, 31,0);
        tracep->declQuad(c+1309,"momory_data", false,-1, 63,0);
        tracep->declBit(c+1311,"fetch_enb", false,-1);
        tracep->declQuad(c+1312,"pc", false,-1, 63,0);
        tracep->declBus(c+1314,"memop", false,-1, 1,0);
        tracep->declBit(c+1315,"mem_ena", false,-1);
        tracep->declBit(c+1316,"mem_wr", false,-1);
        tracep->declQuad(c+1317,"mem_addr", false,-1, 63,0);
        tracep->declQuad(c+1319,"mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+1321,"difftest_instr", false,-1, 31,0);
        tracep->declQuad(c+1322,"difftest_pc", false,-1, 63,0);
        tracep->declBit(c+1306,"top reset", false,-1);
        tracep->declBit(c+1307,"top clock", false,-1);
        tracep->declBus(c+1308,"top instr", false,-1, 31,0);
        tracep->declQuad(c+1309,"top momory_data", false,-1, 63,0);
        tracep->declBit(c+1311,"top fetch_enb", false,-1);
        tracep->declQuad(c+1312,"top pc", false,-1, 63,0);
        tracep->declBus(c+1314,"top memop", false,-1, 1,0);
        tracep->declBit(c+1315,"top mem_ena", false,-1);
        tracep->declBit(c+1316,"top mem_wr", false,-1);
        tracep->declQuad(c+1317,"top mem_addr", false,-1, 63,0);
        tracep->declQuad(c+1319,"top mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+1321,"top difftest_instr", false,-1, 31,0);
        tracep->declQuad(c+1322,"top difftest_pc", false,-1, 63,0);
        tracep->declQuad(c+238,"top rdata", false,-1, 63,0);
        tracep->declBus(c+1324,"top wmask", false,-1, 7,0);
        tracep->declBit(c+1142,"top mux_pc", false,-1);
        tracep->declQuad(c+1143,"top branch", false,-1, 63,0);
        tracep->declBit(c+1145,"top pre_jump", false,-1);
        tracep->declQuad(c+240,"top pre_branch", false,-1, 63,0);
        tracep->declBit(c+242,"top pc_ready", false,-1);
        tracep->declBit(c+243,"top pc_valid", false,-1);
        tracep->declBit(c+244,"top if_ready", false,-1);
        tracep->declBit(c+245,"top if_valid", false,-1);
        tracep->declBit(c+246,"top ID_pre_jump", false,-1);
        tracep->declQuad(c+247,"top ID_pre_branch", false,-1, 63,0);
        tracep->declQuad(c+249,"top ID_pc", false,-1, 63,0);
        tracep->declBus(c+251,"top ID_instr", false,-1, 31,0);
        tracep->declBit(c+1338,"top nop", false,-1);
        tracep->declBit(c+252,"top load_stall", false,-1);
        tracep->declQuad(c+249,"top id_pc", false,-1, 63,0);
        tracep->declBus(c+251,"top id_instr", false,-1, 31,0);
        tracep->declBus(c+1146,"top jumptype", false,-1, 1,0);
        tracep->declBit(c+1147,"top error_pre", false,-1);
        tracep->declBit(c+253,"top id_w_ena", false,-1);
        tracep->declBus(c+254,"top id_w_addr", false,-1, 4,0);
        tracep->declQuad(c+1148,"top id_data1", false,-1, 63,0);
        tracep->declQuad(c+1150,"top id_data2", false,-1, 63,0);
        tracep->declBit(c+255,"top id_mem_ena", false,-1);
        tracep->declBit(c+256,"top id_mem_wr", false,-1);
        tracep->declQuad(c+257,"top id_imm", false,-1, 63,0);
        tracep->declBus(c+259,"top id_exop", false,-1, 2,0);
        tracep->declBus(c+260,"top id_aluop", false,-1, 4,0);
        tracep->declBus(c+261,"top id_memwop", false,-1, 2,0);
        tracep->declBus(c+262,"top id_memrop", false,-1, 2,0);
        tracep->declBit(c+263,"top id_ready", false,-1);
        tracep->declBit(c+264,"top id_valid", false,-1);
        tracep->declBit(c+265,"top EX_w_ena", false,-1);
        tracep->declBus(c+266,"top EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+267,"top EX_data1", false,-1, 63,0);
        tracep->declQuad(c+269,"top EX_data2", false,-1, 63,0);
        tracep->declQuad(c+271,"top EX_imm", false,-1, 63,0);
        tracep->declBus(c+273,"top EX_exop", false,-1, 2,0);
        tracep->declBus(c+274,"top EX_aluop", false,-1, 4,0);
        tracep->declBus(c+275,"top EX_memwop", false,-1, 2,0);
        tracep->declBus(c+276,"top EX_memrop", false,-1, 2,0);
        tracep->declBit(c+277,"top EX_mem_ena", false,-1);
        tracep->declBit(c+278,"top EX_mem_wr", false,-1);
        tracep->declBus(c+279,"top EX_instr", false,-1, 31,0);
        tracep->declQuad(c+280,"top EX_pc", false,-1, 63,0);
        tracep->declBit(c+265,"top ex_w_ena", false,-1);
        tracep->declBus(c+266,"top ex_w_addr", false,-1, 4,0);
        tracep->declQuad(c+282,"top ex_w_data", false,-1, 63,0);
        tracep->declBus(c+275,"top ex_memwop", false,-1, 2,0);
        tracep->declBus(c+276,"top ex_memrop", false,-1, 2,0);
        tracep->declBit(c+277,"top ex_mem_ena", false,-1);
        tracep->declBit(c+278,"top ex_mem_wr", false,-1);
        tracep->declQuad(c+284,"top ex_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+269,"top ex_mem_data", false,-1, 63,0);
        tracep->declBus(c+279,"top ex_instr", false,-1, 31,0);
        tracep->declQuad(c+280,"top ex_pc", false,-1, 63,0);
        tracep->declBit(c+286,"top ex_ready", false,-1);
        tracep->declBit(c+287,"top ex_valid", false,-1);
        tracep->declBit(c+288,"top MEM_w_ena", false,-1);
        tracep->declBus(c+289,"top MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+290,"top MEM_w_data", false,-1, 63,0);
        tracep->declBus(c+292,"top MEM_memwop", false,-1, 2,0);
        tracep->declBus(c+293,"top MEM_memrop", false,-1, 2,0);
        tracep->declBit(c+294,"top MEM_mem_ena", false,-1);
        tracep->declBit(c+295,"top MEM_mem_wr", false,-1);
        tracep->declQuad(c+296,"top MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+298,"top MEM_mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+300,"top MEM_instr", false,-1, 31,0);
        tracep->declQuad(c+301,"top MEM_pc", false,-1, 63,0);
        tracep->declBit(c+288,"top mem_w_ena", false,-1);
        tracep->declBus(c+289,"top mem_w_addr", false,-1, 4,0);
        tracep->declQuad(c+303,"top mem_w_data", false,-1, 63,0);
        tracep->declQuad(c+301,"top mem_pc", false,-1, 63,0);
        tracep->declBus(c+300,"top mem_instr", false,-1, 31,0);
        tracep->declBit(c+305,"top mem_ready", false,-1);
        tracep->declBit(c+306,"top mem_valid", false,-1);
        tracep->declBit(c+307,"top WB_w_ena", false,-1);
        tracep->declBus(c+308,"top WB_w_addr", false,-1, 4,0);
        tracep->declQuad(c+309,"top WB_w_data", false,-1, 63,0);
        tracep->declQuad(c+311,"top WB_pc", false,-1, 63,0);
        tracep->declBus(c+313,"top WB_instr", false,-1, 31,0);
        tracep->declBit(c+307,"top wb_w_ena", false,-1);
        tracep->declBus(c+308,"top wb_w_addr", false,-1, 4,0);
        tracep->declQuad(c+309,"top wb_w_data", false,-1, 63,0);
        tracep->declBit(c+1306,"top ysyx_22040931_IF reset", false,-1);
        tracep->declBit(c+1307,"top ysyx_22040931_IF clock", false,-1);
        tracep->declBit(c+1339,"top ysyx_22040931_IF flush", false,-1);
        tracep->declBit(c+1340,"top ysyx_22040931_IF stall", false,-1);
        tracep->declBit(c+244,"top ysyx_22040931_IF if_ready", false,-1);
        tracep->declBit(c+242,"top ysyx_22040931_IF pc_ready", false,-1);
        tracep->declBit(c+243,"top ysyx_22040931_IF pc_valid", false,-1);
        tracep->declBit(c+1147,"top ysyx_22040931_IF error_pre", false,-1);
        tracep->declBit(c+1142,"top ysyx_22040931_IF id_jump", false,-1);
        tracep->declBus(c+1146,"top ysyx_22040931_IF id_jumptype", false,-1, 1,0);
        tracep->declQuad(c+249,"top ysyx_22040931_IF id_pc", false,-1, 63,0);
        tracep->declQuad(c+1143,"top ysyx_22040931_IF id_branch", false,-1, 63,0);
        tracep->declBit(c+1145,"top ysyx_22040931_IF pre_jump", false,-1);
        tracep->declQuad(c+240,"top ysyx_22040931_IF pre_branch", false,-1, 63,0);
        tracep->declBit(c+1311,"top ysyx_22040931_IF fetch_enb", false,-1);
        tracep->declQuad(c+1312,"top ysyx_22040931_IF if_pc", false,-1, 63,0);
        tracep->declBit(c+314,"top ysyx_22040931_IF pc_now_valid", false,-1);
        tracep->declBit(c+1341,"top ysyx_22040931_IF pc_go", false,-1);
        tracep->declQuad(c+1325,"top ysyx_22040931_IF pc_i", false,-1, 63,0);
        tracep->declBit(c+1306,"top ysyx_22040931_IF predictor reset", false,-1);
        tracep->declBit(c+1307,"top ysyx_22040931_IF predictor clock", false,-1);
        tracep->declBit(c+242,"top ysyx_22040931_IF predictor pc_ready", false,-1);
        tracep->declBit(c+1147,"top ysyx_22040931_IF predictor nop", false,-1);
        tracep->declQuad(c+1143,"top ysyx_22040931_IF predictor id_branch", false,-1, 63,0);
        tracep->declBus(c+1146,"top ysyx_22040931_IF predictor id_jumptype", false,-1, 1,0);
        tracep->declBit(c+1142,"top ysyx_22040931_IF predictor id_jump", false,-1);
        tracep->declQuad(c+249,"top ysyx_22040931_IF predictor id_pc", false,-1, 63,0);
        tracep->declQuad(c+1312,"top ysyx_22040931_IF predictor pc", false,-1, 63,0);
        tracep->declBit(c+1145,"top ysyx_22040931_IF predictor jump", false,-1);
        tracep->declQuad(c+240,"top ysyx_22040931_IF predictor branch", false,-1, 63,0);
        tracep->declBit(c+1152,"top ysyx_22040931_IF predictor valid_pre", false,-1);
        tracep->declBit(c+1327,"top ysyx_22040931_IF predictor dir_jump", false,-1);
        tracep->declBit(c+1328,"top ysyx_22040931_IF predictor tar_hit", false,-1);
        tracep->declBit(c+1306,"top ysyx_22040931_IF predictor direction_predictor reset", false,-1);
        tracep->declBit(c+1307,"top ysyx_22040931_IF predictor direction_predictor clock", false,-1);
        tracep->declBit(c+1152,"top ysyx_22040931_IF predictor direction_predictor valid_pre", false,-1);
        tracep->declQuad(c+249,"top ysyx_22040931_IF predictor direction_predictor id_pc", false,-1, 63,0);
        tracep->declBit(c+1142,"top ysyx_22040931_IF predictor direction_predictor id_jump", false,-1);
        tracep->declBus(c+1146,"top ysyx_22040931_IF predictor direction_predictor id_jumptype", false,-1, 1,0);
        tracep->declQuad(c+1312,"top ysyx_22040931_IF predictor direction_predictor pc", false,-1, 63,0);
        tracep->declBit(c+1327,"top ysyx_22040931_IF predictor direction_predictor jump", false,-1);
        tracep->declBus(c+1329,"top ysyx_22040931_IF predictor direction_predictor hash", false,-1, 7,0);
        tracep->declBus(c+1330,"top ysyx_22040931_IF predictor direction_predictor pht_index", false,-1, 7,0);
        tracep->declBus(c+315,"top ysyx_22040931_IF predictor direction_predictor id_hash", false,-1, 7,0);
        tracep->declBus(c+316,"top ysyx_22040931_IF predictor direction_predictor id_pht_index", false,-1, 7,0);
        tracep->declBus(c+317,"top ysyx_22040931_IF predictor direction_predictor i", false,-1, 31,0);
        tracep->declBus(c+318,"top ysyx_22040931_IF predictor direction_predictor j", false,-1, 31,0);
        tracep->declBit(c+1306,"top ysyx_22040931_IF predictor target_predictor reset", false,-1);
        tracep->declBit(c+1307,"top ysyx_22040931_IF predictor target_predictor clock", false,-1);
        tracep->declBit(c+1152,"top ysyx_22040931_IF predictor target_predictor valid_pre", false,-1);
        tracep->declQuad(c+1312,"top ysyx_22040931_IF predictor target_predictor pc", false,-1, 63,0);
        tracep->declQuad(c+249,"top ysyx_22040931_IF predictor target_predictor id_pc", false,-1, 63,0);
        tracep->declQuad(c+1143,"top ysyx_22040931_IF predictor target_predictor id_branch", false,-1, 63,0);
        tracep->declBus(c+1146,"top ysyx_22040931_IF predictor target_predictor id_jumptype", false,-1, 1,0);
        tracep->declQuad(c+240,"top ysyx_22040931_IF predictor target_predictor branch", false,-1, 63,0);
        tracep->declBit(c+1328,"top ysyx_22040931_IF predictor target_predictor hit", false,-1);
        tracep->declBus(c+1331,"top ysyx_22040931_IF predictor target_predictor btb_index", false,-1, 7,0);
        tracep->declBus(c+319,"top ysyx_22040931_IF predictor target_predictor id_btb_index", false,-1, 7,0);
        tracep->declBus(c+320,"top ysyx_22040931_IF predictor target_predictor jumptype", false,-1, 1,0);
        tracep->declBus(c+321,"top ysyx_22040931_IF predictor target_predictor i", false,-1, 31,0);
        tracep->declBus(c+322,"top ysyx_22040931_IF predictor target_predictor j", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declQuad(c+323+i*2,"top ysyx_22040931_IF predictor target_predictor RAS", true,(i+0), 63,0);}}
        tracep->declBus(c+355,"top ysyx_22040931_IF predictor target_predictor ras_index", false,-1, 3,0);
        tracep->declBit(c+1306,"top ysyx_22040931_IF ysyx_22040931_PC reset", false,-1);
        tracep->declBit(c+1307,"top ysyx_22040931_IF ysyx_22040931_PC clock", false,-1);
        tracep->declBit(c+242,"top ysyx_22040931_IF ysyx_22040931_PC pc_ready", false,-1);
        tracep->declQuad(c+1325,"top ysyx_22040931_IF ysyx_22040931_PC pc_i", false,-1, 63,0);
        tracep->declBit(c+1311,"top ysyx_22040931_IF ysyx_22040931_PC fetch_enb", false,-1);
        tracep->declQuad(c+1312,"top ysyx_22040931_IF ysyx_22040931_PC pc_o", false,-1, 63,0);
        tracep->declBit(c+1306,"top if_id reset", false,-1);
        tracep->declBit(c+1307,"top if_id clock", false,-1);
        tracep->declBit(c+1342,"top if_id flush", false,-1);
        tracep->declBit(c+252,"top if_id stall", false,-1);
        tracep->declBit(c+1147,"top if_id nop", false,-1);
        tracep->declBit(c+243,"top if_id pc_valid", false,-1);
        tracep->declBit(c+263,"top if_id id_ready", false,-1);
        tracep->declBit(c+244,"top if_id if_ready", false,-1);
        tracep->declBit(c+245,"top if_id if_valid", false,-1);
        tracep->declBit(c+1145,"top if_id IF_pre_jump", false,-1);
        tracep->declQuad(c+240,"top if_id IF_pre_branch", false,-1, 63,0);
        tracep->declQuad(c+1312,"top if_id IF_pc", false,-1, 63,0);
        tracep->declBus(c+1308,"top if_id IF_instr", false,-1, 31,0);
        tracep->declBit(c+246,"top if_id ID_pre_jump", false,-1);
        tracep->declQuad(c+247,"top if_id ID_pre_branch", false,-1, 63,0);
        tracep->declQuad(c+249,"top if_id ID_pc", false,-1, 63,0);
        tracep->declBus(c+251,"top if_id ID_instr", false,-1, 31,0);
        tracep->declBit(c+245,"top if_id if_now_valid", false,-1);
        tracep->declBit(c+356,"top if_id if_go", false,-1);
        tracep->declBit(c+1306,"top ysyx_22040931_ID reset", false,-1);
        tracep->declBit(c+1307,"top ysyx_22040931_ID clock", false,-1);
        tracep->declBit(c+307,"top ysyx_22040931_ID w_ena_i", false,-1);
        tracep->declBus(c+308,"top ysyx_22040931_ID w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+309,"top ysyx_22040931_ID w_data_i", false,-1, 63,0);
        tracep->declQuad(c+249,"top ysyx_22040931_ID pc_i", false,-1, 63,0);
        tracep->declBus(c+251,"top ysyx_22040931_ID instr", false,-1, 31,0);
        tracep->declBit(c+265,"top ysyx_22040931_ID ex_w_ena", false,-1);
        tracep->declBus(c+266,"top ysyx_22040931_ID ex_w_addr", false,-1, 4,0);
        tracep->declQuad(c+282,"top ysyx_22040931_ID ex_w_data", false,-1, 63,0);
        tracep->declBit(c+288,"top ysyx_22040931_ID mem_w_ena", false,-1);
        tracep->declBus(c+289,"top ysyx_22040931_ID mem_w_addr", false,-1, 4,0);
        tracep->declQuad(c+303,"top ysyx_22040931_ID mem_w_data", false,-1, 63,0);
        tracep->declBit(c+277,"top ysyx_22040931_ID ex_mem_ena", false,-1);
        tracep->declBit(c+277,"top ysyx_22040931_ID ex_mem_wr", false,-1);
        tracep->declBit(c+246,"top ysyx_22040931_ID pre_jump", false,-1);
        tracep->declQuad(c+247,"top ysyx_22040931_ID pre_branch", false,-1, 63,0);
        tracep->declBit(c+252,"top ysyx_22040931_ID load_stall", false,-1);
        tracep->declQuad(c+249,"top ysyx_22040931_ID pc_o", false,-1, 63,0);
        tracep->declBus(c+251,"top ysyx_22040931_ID instr_o", false,-1, 31,0);
        tracep->declQuad(c+1143,"top ysyx_22040931_ID branch", false,-1, 63,0);
        tracep->declBit(c+1142,"top ysyx_22040931_ID mux_pc", false,-1);
        tracep->declBus(c+1146,"top ysyx_22040931_ID jumptype", false,-1, 1,0);
        tracep->declBit(c+1147,"top ysyx_22040931_ID error_pre", false,-1);
        tracep->declBit(c+253,"top ysyx_22040931_ID w_ena", false,-1);
        tracep->declBus(c+254,"top ysyx_22040931_ID w_addr", false,-1, 4,0);
        tracep->declQuad(c+1148,"top ysyx_22040931_ID data1", false,-1, 63,0);
        tracep->declQuad(c+1150,"top ysyx_22040931_ID data2", false,-1, 63,0);
        tracep->declBit(c+255,"top ysyx_22040931_ID mem_ena", false,-1);
        tracep->declBit(c+256,"top ysyx_22040931_ID mem_wr", false,-1);
        tracep->declQuad(c+257,"top ysyx_22040931_ID imm", false,-1, 63,0);
        tracep->declBus(c+259,"top ysyx_22040931_ID exop", false,-1, 2,0);
        tracep->declBus(c+260,"top ysyx_22040931_ID aluop", false,-1, 4,0);
        tracep->declBus(c+261,"top ysyx_22040931_ID memwop", false,-1, 2,0);
        tracep->declBus(c+262,"top ysyx_22040931_ID memrop", false,-1, 2,0);
        tracep->declBus(c+357,"top ysyx_22040931_ID r_count", false,-1, 31,0);
        tracep->declBus(c+358,"top ysyx_22040931_ID count", false,-1, 31,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ztype", false,-1, 2,0);
        tracep->declBit(c+360,"top ysyx_22040931_ID r_ena1", false,-1);
        tracep->declBus(c+361,"top ysyx_22040931_ID r_addr1", false,-1, 4,0);
        tracep->declQuad(c+1332,"top ysyx_22040931_ID r_data1", false,-1, 63,0);
        tracep->declBit(c+362,"top ysyx_22040931_ID r_ena2", false,-1);
        tracep->declBus(c+363,"top ysyx_22040931_ID r_addr2", false,-1, 4,0);
        tracep->declQuad(c+1334,"top ysyx_22040931_ID r_data2", false,-1, 63,0);
        tracep->declQuad(c+1336,"top ysyx_22040931_ID ibranch", false,-1, 63,0);
        tracep->declQuad(c+364,"top ysyx_22040931_ID bbranch", false,-1, 63,0);
        tracep->declQuad(c+364,"top ysyx_22040931_ID jbranch", false,-1, 63,0);
        tracep->declBit(c+366,"top ysyx_22040931_ID need_ex1", false,-1);
        tracep->declBit(c+367,"top ysyx_22040931_ID need_ex2", false,-1);
        tracep->declBit(c+368,"top ysyx_22040931_ID need_mem1", false,-1);
        tracep->declBit(c+369,"top ysyx_22040931_ID need_mem2", false,-1);
        tracep->declBus(c+1343,"top ysyx_22040931_ID branch_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID branch_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_ID branch_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1143,"top ysyx_22040931_ID branch_mux out", false,-1, 63,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID branch_mux key", false,-1, 2,0);
        tracep->declQuad(c+1345,"top ysyx_22040931_ID branch_mux default_out", false,-1, 63,0);
        tracep->declArray(c+1153,"top ysyx_22040931_ID branch_mux lut", false,-1, 200,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID branch_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID branch_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_ID branch_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID branch_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1143,"top ysyx_22040931_ID branch_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID branch_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1345,"top ysyx_22040931_ID branch_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+1153,"top ysyx_22040931_ID branch_mux i1 lut", false,-1, 200,0);
        tracep->declBus(c+1348,"top ysyx_22040931_ID branch_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1160+i*3,"top ysyx_22040931_ID branch_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1169+i*1,"top ysyx_22040931_ID branch_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1172+i*2,"top ysyx_22040931_ID branch_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1178,"top ysyx_22040931_ID branch_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+1180,"top ysyx_22040931_ID branch_mux i1 hit", false,-1);
        tracep->declBus(c+1349,"top ysyx_22040931_ID branch_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+251,"top ysyx_22040931_ID ysyx_22040931_Decoder instr", false,-1, 31,0);
        tracep->declQuad(c+1148,"top ysyx_22040931_ID ysyx_22040931_Decoder r_data1", false,-1, 63,0);
        tracep->declQuad(c+1150,"top ysyx_22040931_ID ysyx_22040931_Decoder r_data2", false,-1, 63,0);
        tracep->declBit(c+253,"top ysyx_22040931_ID ysyx_22040931_Decoder w_ena", false,-1);
        tracep->declBus(c+254,"top ysyx_22040931_ID ysyx_22040931_Decoder w_addr", false,-1, 4,0);
        tracep->declBit(c+360,"top ysyx_22040931_ID ysyx_22040931_Decoder r_ena1", false,-1);
        tracep->declBus(c+361,"top ysyx_22040931_ID ysyx_22040931_Decoder r_addr1", false,-1, 4,0);
        tracep->declBit(c+362,"top ysyx_22040931_ID ysyx_22040931_Decoder r_ena2", false,-1);
        tracep->declBus(c+363,"top ysyx_22040931_ID ysyx_22040931_Decoder r_addr2", false,-1, 4,0);
        tracep->declBit(c+255,"top ysyx_22040931_ID ysyx_22040931_Decoder mem_ena", false,-1);
        tracep->declBit(c+256,"top ysyx_22040931_ID ysyx_22040931_Decoder mem_wr", false,-1);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_Decoder ztype", false,-1, 2,0);
        tracep->declBus(c+259,"top ysyx_22040931_ID ysyx_22040931_Decoder exop", false,-1, 2,0);
        tracep->declBus(c+260,"top ysyx_22040931_ID ysyx_22040931_Decoder aluop", false,-1, 4,0);
        tracep->declBus(c+261,"top ysyx_22040931_ID ysyx_22040931_Decoder memwop", false,-1, 2,0);
        tracep->declBus(c+262,"top ysyx_22040931_ID ysyx_22040931_Decoder memrop", false,-1, 2,0);
        tracep->declBit(c+1142,"top ysyx_22040931_ID ysyx_22040931_Decoder jump", false,-1);
        tracep->declBit(c+370,"top ysyx_22040931_ID ysyx_22040931_Decoder itype", false,-1);
        tracep->declBit(c+371,"top ysyx_22040931_ID ysyx_22040931_Decoder stype", false,-1);
        tracep->declBit(c+372,"top ysyx_22040931_ID ysyx_22040931_Decoder utype", false,-1);
        tracep->declBit(c+373,"top ysyx_22040931_ID ysyx_22040931_Decoder rtype", false,-1);
        tracep->declBit(c+374,"top ysyx_22040931_ID ysyx_22040931_Decoder jtype", false,-1);
        tracep->declBit(c+375,"top ysyx_22040931_ID ysyx_22040931_Decoder btype", false,-1);
        tracep->declBus(c+376,"top ysyx_22040931_ID ysyx_22040931_Decoder r_exop", false,-1, 2,0);
        tracep->declBus(c+377,"top ysyx_22040931_ID ysyx_22040931_Decoder i_exop", false,-1, 2,0);
        tracep->declBus(c+378,"top ysyx_22040931_ID ysyx_22040931_Decoder s_exop", false,-1, 2,0);
        tracep->declBus(c+379,"top ysyx_22040931_ID ysyx_22040931_Decoder u_exop", false,-1, 2,0);
        tracep->declBus(c+380,"top ysyx_22040931_ID ysyx_22040931_Decoder j_exop", false,-1, 2,0);
        tracep->declBus(c+381,"top ysyx_22040931_ID ysyx_22040931_Decoder b_exop", false,-1, 2,0);
        tracep->declBus(c+382,"top ysyx_22040931_ID ysyx_22040931_Decoder r_aluop", false,-1, 4,0);
        tracep->declBus(c+383,"top ysyx_22040931_ID ysyx_22040931_Decoder i_aluop", false,-1, 4,0);
        tracep->declBus(c+384,"top ysyx_22040931_ID ysyx_22040931_Decoder s_aluop", false,-1, 4,0);
        tracep->declBus(c+385,"top ysyx_22040931_ID ysyx_22040931_Decoder u_aluop", false,-1, 4,0);
        tracep->declBus(c+386,"top ysyx_22040931_ID ysyx_22040931_Decoder j_aluop", false,-1, 4,0);
        tracep->declBus(c+387,"top ysyx_22040931_ID ysyx_22040931_Decoder b_aluop", false,-1, 4,0);
        tracep->declBit(c+388,"top ysyx_22040931_ID ysyx_22040931_Decoder ijump", false,-1);
        tracep->declBit(c+1181,"top ysyx_22040931_ID ysyx_22040931_Decoder bjump", false,-1);
        tracep->declBit(c+389,"top ysyx_22040931_ID ysyx_22040931_Decoder jjump", false,-1);
        tracep->declBus(c+1350,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1351,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux out", false,-1, 10,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux key", false,-1, 2,0);
        tracep->declBus(c+1352,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux default_out", false,-1, 10,0);
        tracep->declArray(c+391,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux lut", false,-1, 83,0);
        tracep->declBus(c+1350,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1351,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+390,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 out", false,-1, 10,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+1352,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 default_out", false,-1, 10,0);
        tracep->declArray(c+391,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 lut", false,-1, 83,0);
        tracep->declBus(c+1353,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+394+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 pair_list", true,(i+0), 13,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+400+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+406+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 data_list", true,(i+0), 10,0);}}
        tracep->declBus(c+412,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 lut_out", false,-1, 10,0);
        tracep->declBit(c+413,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 hit", false,-1);
        tracep->declBus(c+1354,"top ysyx_22040931_ID ysyx_22040931_Decoder opt_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux out", false,-1, 0,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux key", false,-1, 2,0);
        tracep->declBus(c+1355,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux default_out", false,-1, 0,0);
        tracep->declBus(c+1182,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux lut", false,-1, 11,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1142,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 out", false,-1, 0,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+1355,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 default_out", false,-1, 0,0);
        tracep->declBus(c+1182,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 lut", false,-1, 11,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1183+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1186+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1189+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+1192,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 lut_out", false,-1, 0,0);
        tracep->declBit(c+1193,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 hit", false,-1);
        tracep->declBus(c+1349,"top ysyx_22040931_ID ysyx_22040931_Decoder jump_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode", false,-1, 6,0);
        tracep->declBus(c+415,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode_3", false,-1, 2,0);
        tracep->declBus(c+416,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype opcode_7", false,-1, 6,0);
        tracep->declBus(c+382,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype aluop", false,-1, 4,0);
        tracep->declBus(c+376,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype exop", false,-1, 2,0);
        tracep->declBit(c+373,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype rtype", false,-1);
        tracep->declBus(c+417,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype out", false,-1, 8,0);
        tracep->declBus(c+418,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype chose", false,-1, 16,0);
        tracep->declBus(c+1357,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1358,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1359,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+417,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype out", false,-1, 8,0);
        tracep->declBus(c+418,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype key", false,-1, 16,0);
        tracep->declBus(c+1360,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype default_out", false,-1, 8,0);
        tracep->declArray(c+1361,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype lut", false,-1, 727,0);
        tracep->declBus(c+1357,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1358,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1359,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+417,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 out", false,-1, 8,0);
        tracep->declBus(c+418,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 key", false,-1, 16,0);
        tracep->declBus(c+1360,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 default_out", false,-1, 8,0);
        tracep->declArray(c+1361,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 lut", false,-1, 727,0);
        tracep->declBus(c+1384,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+1+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 pair_list", true,(i+0), 25,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+29+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+57+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+419,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+420,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 hit", false,-1);
        tracep->declBus(c+1385,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Rtype Rtype i1 i", false,-1, 31,0);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode", false,-1, 6,0);
        tracep->declBus(c+415,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_3", false,-1, 2,0);
        tracep->declBit(c+421,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_1", false,-1);
        tracep->declBus(c+416,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype opcode_7", false,-1, 6,0);
        tracep->declBit(c+388,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype jump", false,-1);
        tracep->declBus(c+262,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype memrop", false,-1, 2,0);
        tracep->declBus(c+383,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype aluop", false,-1, 4,0);
        tracep->declBus(c+377,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype exop", false,-1, 2,0);
        tracep->declBit(c+370,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype itype", false,-1);
        tracep->declBus(c+422,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out", false,-1, 12,0);
        tracep->declBus(c+423,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out1", false,-1, 12,0);
        tracep->declBus(c+424,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out2", false,-1, 11,0);
        tracep->declBus(c+425,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out3", false,-1, 11,0);
        tracep->declBus(c+426,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype out4", false,-1, 11,0);
        tracep->declBus(c+427,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose1", false,-1, 9,0);
        tracep->declBus(c+428,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose2", false,-1, 15,0);
        tracep->declBus(c+429,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose3", false,-1, 16,0);
        tracep->declBus(c+430,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype chose4", false,-1, 17,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+422,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype out", false,-1, 12,0);
        tracep->declBus(c+431,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype key", false,-1, 3,0);
        tracep->declBus(c+1387,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype default_out", false,-1, 12,0);
        tracep->declArray(c+432,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype lut", false,-1, 67,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+422,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 out", false,-1, 12,0);
        tracep->declBus(c+431,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 key", false,-1, 3,0);
        tracep->declBus(c+1387,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 default_out", false,-1, 12,0);
        tracep->declArray(c+432,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 lut", false,-1, 67,0);
        tracep->declBus(c+1358,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+435+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+439+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+443+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 data_list", true,(i+0), 12,0);}}
        tracep->declBus(c+447,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 lut_out", false,-1, 12,0);
        tracep->declBit(c+448,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 hit", false,-1);
        tracep->declBus(c+1388,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype i1 i", false,-1, 31,0);
        tracep->declBus(c+1386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+423,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 out", false,-1, 12,0);
        tracep->declBus(c+427,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 key", false,-1, 9,0);
        tracep->declBus(c+1387,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 default_out", false,-1, 12,0);
        tracep->declArray(c+1390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 lut", false,-1, 298,0);
        tracep->declBus(c+1386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+423,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 out", false,-1, 12,0);
        tracep->declBus(c+427,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 key", false,-1, 9,0);
        tracep->declBus(c+1387,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 default_out", false,-1, 12,0);
        tracep->declArray(c+1390,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 lut", false,-1, 298,0);
        tracep->declBus(c+1400,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+85+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 pair_list", true,(i+0), 22,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+98+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+111+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 data_list", true,(i+0), 12,0);}}
        tracep->declBus(c+449,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 lut_out", false,-1, 12,0);
        tracep->declBit(c+450,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 hit", false,-1);
        tracep->declBus(c+1401,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype1 i1 i", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1402,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+424,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 out", false,-1, 11,0);
        tracep->declBus(c+428,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 key", false,-1, 15,0);
        tracep->declBus(c+1404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 default_out", false,-1, 11,0);
        tracep->declArray(c+1405,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 lut", false,-1, 83,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1402,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+424,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 out", false,-1, 11,0);
        tracep->declBus(c+428,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 key", false,-1, 15,0);
        tracep->declBus(c+1404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1405,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 lut", false,-1, 83,0);
        tracep->declBus(c+1357,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+124+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+127+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 key_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+130+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+451,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+452,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 hit", false,-1);
        tracep->declBus(c+1349,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype2 i1 i", false,-1, 31,0);
        tracep->declBus(c+1408,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1358,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+425,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 out", false,-1, 11,0);
        tracep->declBus(c+429,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 key", false,-1, 16,0);
        tracep->declBus(c+1404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 default_out", false,-1, 11,0);
        tracep->declArray(c+1409,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 lut", false,-1, 144,0);
        tracep->declBus(c+1408,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1358,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+425,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 out", false,-1, 11,0);
        tracep->declBus(c+429,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 key", false,-1, 16,0);
        tracep->declBus(c+1404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1409,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 lut", false,-1, 144,0);
        tracep->declBus(c+1414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+133+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 pair_list", true,(i+0), 28,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+138+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+143+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+453,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+454,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 hit", false,-1);
        tracep->declBus(c+1415,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype3 i1 i", false,-1, 31,0);
        tracep->declBus(c+1416,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1417,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+426,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 out", false,-1, 11,0);
        tracep->declBus(c+430,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 key", false,-1, 17,0);
        tracep->declBus(c+1404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 default_out", false,-1, 11,0);
        tracep->declQuad(c+1418,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 lut", false,-1, 59,0);
        tracep->declBus(c+1416,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1417,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+426,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 out", false,-1, 11,0);
        tracep->declBus(c+430,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 key", false,-1, 17,0);
        tracep->declBus(c+1404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 default_out", false,-1, 11,0);
        tracep->declQuad(c+1418,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 lut", false,-1, 59,0);
        tracep->declBus(c+1420,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+148+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 pair_list", true,(i+0), 29,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+150+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 key_list", true,(i+0), 17,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+152+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+455,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+456,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 hit", false,-1);
        tracep->declBus(c+1421,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Itype Itype4 i1 i", false,-1, 31,0);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype opcode", false,-1, 6,0);
        tracep->declBus(c+415,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype opcode_3", false,-1, 2,0);
        tracep->declBus(c+261,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype memwop", false,-1, 2,0);
        tracep->declBus(c+384,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype aluop", false,-1, 4,0);
        tracep->declBus(c+378,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype exop", false,-1, 2,0);
        tracep->declBit(c+371,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype stype", false,-1);
        tracep->declBus(c+457,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype out", false,-1, 11,0);
        tracep->declBus(c+427,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype chose", false,-1, 9,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+457,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype out", false,-1, 11,0);
        tracep->declBus(c+427,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype key", false,-1, 9,0);
        tracep->declBus(c+1404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype default_out", false,-1, 11,0);
        tracep->declArray(c+1422,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype lut", false,-1, 87,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1403,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+457,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 out", false,-1, 11,0);
        tracep->declBus(c+427,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 key", false,-1, 9,0);
        tracep->declBus(c+1404,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 default_out", false,-1, 11,0);
        tracep->declArray(c+1422,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 lut", false,-1, 87,0);
        tracep->declBus(c+1425,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+154+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 pair_list", true,(i+0), 21,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+158+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+162+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 data_list", true,(i+0), 11,0);}}
        tracep->declBus(c+458,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 lut_out", false,-1, 11,0);
        tracep->declBit(c+459,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 hit", false,-1);
        tracep->declBus(c+1388,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Stype Stype i1 i", false,-1, 31,0);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype opcode", false,-1, 6,0);
        tracep->declBus(c+415,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype opcode_3", false,-1, 2,0);
        tracep->declQuad(c+1148,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype r_data1", false,-1, 63,0);
        tracep->declQuad(c+1150,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype r_data2", false,-1, 63,0);
        tracep->declBit(c+1181,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype jump", false,-1);
        tracep->declBus(c+387,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype aluop", false,-1, 4,0);
        tracep->declBus(c+381,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype exop", false,-1, 2,0);
        tracep->declBit(c+375,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype btype", false,-1);
        tracep->declBus(c+460,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype chose", false,-1, 9,0);
        tracep->declBus(c+461,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype out", false,-1, 8,0);
        tracep->declBus(c+1194,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype jumpb", false,-1, 2,0);
        tracep->declBus(c+1350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1181,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b out", false,-1, 0,0);
        tracep->declBus(c+460,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b key", false,-1, 9,0);
        tracep->declBus(c+1355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b default_out", false,-1, 0,0);
        tracep->declArray(c+1195,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b lut", false,-1, 65,0);
        tracep->declBus(c+1350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1181,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 out", false,-1, 0,0);
        tracep->declBus(c+460,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 key", false,-1, 9,0);
        tracep->declBus(c+1355,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 default_out", false,-1, 0,0);
        tracep->declArray(c+1195,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 lut", false,-1, 65,0);
        tracep->declBus(c+1351,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1198+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1204+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1210+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+1216,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 lut_out", false,-1, 0,0);
        tracep->declBit(c+1217,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 hit", false,-1);
        tracep->declBus(c+1354,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Jump_b i1 i", false,-1, 31,0);
        tracep->declBus(c+1350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1359,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+461,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype out", false,-1, 8,0);
        tracep->declBus(c+460,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype key", false,-1, 9,0);
        tracep->declBus(c+1360,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype default_out", false,-1, 8,0);
        tracep->declArray(c+1426,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype lut", false,-1, 113,0);
        tracep->declBus(c+1350,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1359,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+461,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 out", false,-1, 8,0);
        tracep->declBus(c+460,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 key", false,-1, 9,0);
        tracep->declBus(c+1360,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 default_out", false,-1, 8,0);
        tracep->declArray(c+1426,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 lut", false,-1, 113,0);
        tracep->declBus(c+1430,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+166+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 pair_list", true,(i+0), 18,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+172+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+178+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+462,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+463,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 hit", false,-1);
        tracep->declBus(c+1354,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Btype Btype i1 i", false,-1, 31,0);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype opcode", false,-1, 6,0);
        tracep->declBit(c+389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype jump", false,-1);
        tracep->declBus(c+386,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype aluop", false,-1, 4,0);
        tracep->declBus(c+380,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype exop", false,-1, 2,0);
        tracep->declBit(c+374,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype jtype", false,-1);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype chose", false,-1, 6,0);
        tracep->declBus(c+464,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype out", false,-1, 9,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1431,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+464,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype out", false,-1, 9,0);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype key", false,-1, 6,0);
        tracep->declBus(c+1432,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype default_out", false,-1, 9,0);
        tracep->declBus(c+1433,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype lut", false,-1, 16,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1431,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1389,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+464,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 out", false,-1, 9,0);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 key", false,-1, 6,0);
        tracep->declBus(c+1432,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 default_out", false,-1, 9,0);
        tracep->declBus(c+1433,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 lut", false,-1, 16,0);
        tracep->declBus(c+1358,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+184+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+185+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+186+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 data_list", true,(i+0), 9,0);}}
        tracep->declBus(c+465,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 lut_out", false,-1, 9,0);
        tracep->declBit(c+466,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 hit", false,-1);
        tracep->declBus(c+1434,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Jtype Jtype i1 i", false,-1, 31,0);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype opcode", false,-1, 6,0);
        tracep->declBus(c+385,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype aluop", false,-1, 4,0);
        tracep->declBus(c+379,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype exop", false,-1, 2,0);
        tracep->declBit(c+372,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype utype", false,-1);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype chose", false,-1, 6,0);
        tracep->declBus(c+467,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype out", false,-1, 8,0);
        tracep->declBus(c+1416,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1431,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1359,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+467,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype out", false,-1, 8,0);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype key", false,-1, 6,0);
        tracep->declBus(c+1360,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype default_out", false,-1, 8,0);
        tracep->declBus(c+1435,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype lut", false,-1, 31,0);
        tracep->declBus(c+1416,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1431,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1359,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+467,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 out", false,-1, 8,0);
        tracep->declBus(c+414,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 key", false,-1, 6,0);
        tracep->declBus(c+1360,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 default_out", false,-1, 8,0);
        tracep->declBus(c+1435,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 lut", false,-1, 31,0);
        tracep->declBus(c+1402,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+187+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 pair_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+189+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+191+i*1,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 data_list", true,(i+0), 8,0);}}
        tracep->declBus(c+468,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 lut_out", false,-1, 8,0);
        tracep->declBit(c+469,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 hit", false,-1);
        tracep->declBus(c+1421,"top ysyx_22040931_ID ysyx_22040931_Decoder ysyx_22040931_Utype Utype i1 i", false,-1, 31,0);
        tracep->declBus(c+470,"top ysyx_22040931_ID ysyx_22040931_IMM instr", false,-1, 24,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_IMM opt", false,-1, 2,0);
        tracep->declQuad(c+257,"top ysyx_22040931_ID ysyx_22040931_IMM imm", false,-1, 63,0);
        tracep->declBus(c+1408,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+257,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux out", false,-1, 63,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux key", false,-1, 2,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux default_out", false,-1, 63,0);
        tracep->declArray(c+471,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux lut", false,-1, 334,0);
        tracep->declBus(c+1408,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+257,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+359,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+471,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 lut", false,-1, 334,0);
        tracep->declBus(c+1348,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+482+i*3,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+497+i*1,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+502+i*2,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+512,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+514,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 hit", false,-1);
        tracep->declBus(c+1415,"top ysyx_22040931_ID ysyx_22040931_IMM imm_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+1306,"top ysyx_22040931_ID ysyx_22040931_Regfile reset", false,-1);
        tracep->declBit(c+1307,"top ysyx_22040931_ID ysyx_22040931_Regfile clock", false,-1);
        tracep->declBit(c+307,"top ysyx_22040931_ID ysyx_22040931_Regfile w_ena", false,-1);
        tracep->declBus(c+308,"top ysyx_22040931_ID ysyx_22040931_Regfile w_addr", false,-1, 4,0);
        tracep->declQuad(c+309,"top ysyx_22040931_ID ysyx_22040931_Regfile w_data", false,-1, 63,0);
        tracep->declBit(c+360,"top ysyx_22040931_ID ysyx_22040931_Regfile r_ena1", false,-1);
        tracep->declBus(c+361,"top ysyx_22040931_ID ysyx_22040931_Regfile r_addr1", false,-1, 4,0);
        tracep->declQuad(c+1332,"top ysyx_22040931_ID ysyx_22040931_Regfile r_data1", false,-1, 63,0);
        tracep->declBit(c+362,"top ysyx_22040931_ID ysyx_22040931_Regfile r_ena2", false,-1);
        tracep->declBus(c+363,"top ysyx_22040931_ID ysyx_22040931_Regfile r_addr2", false,-1, 4,0);
        tracep->declQuad(c+1334,"top ysyx_22040931_ID ysyx_22040931_Regfile r_data2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+515+i*2,"top ysyx_22040931_ID ysyx_22040931_Regfile regs", true,(i+0), 63,0);}}
        tracep->declBus(c+579,"top ysyx_22040931_ID ysyx_22040931_Regfile i", false,-1, 31,0);
        tracep->declBus(c+1408,"top ysyx_22040931_ID reg_data1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID reg_data1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_ID reg_data1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1148,"top ysyx_22040931_ID reg_data1 out", false,-1, 63,0);
        tracep->declBus(c+580,"top ysyx_22040931_ID reg_data1 key", false,-1, 3,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_ID reg_data1 default_out", false,-1, 63,0);
        tracep->declArray(c+1218,"top ysyx_22040931_ID reg_data1 lut", false,-1, 339,0);
        tracep->declBus(c+1408,"top ysyx_22040931_ID reg_data1 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID reg_data1 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_ID reg_data1 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID reg_data1 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1148,"top ysyx_22040931_ID reg_data1 i1 out", false,-1, 63,0);
        tracep->declBus(c+580,"top ysyx_22040931_ID reg_data1 i1 key", false,-1, 3,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_ID reg_data1 i1 default_out", false,-1, 63,0);
        tracep->declArray(c+1218,"top ysyx_22040931_ID reg_data1 i1 lut", false,-1, 339,0);
        tracep->declBus(c+1438,"top ysyx_22040931_ID reg_data1 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+1229+i*3,"top ysyx_22040931_ID reg_data1 i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1244+i*1,"top ysyx_22040931_ID reg_data1 i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+1249+i*2,"top ysyx_22040931_ID reg_data1 i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1259,"top ysyx_22040931_ID reg_data1 i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+1261,"top ysyx_22040931_ID reg_data1 i1 hit", false,-1);
        tracep->declBus(c+1415,"top ysyx_22040931_ID reg_data1 i1 i", false,-1, 31,0);
        tracep->declBus(c+1408,"top ysyx_22040931_ID reg_data2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID reg_data2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_ID reg_data2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1150,"top ysyx_22040931_ID reg_data2 out", false,-1, 63,0);
        tracep->declBus(c+581,"top ysyx_22040931_ID reg_data2 key", false,-1, 3,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_ID reg_data2 default_out", false,-1, 63,0);
        tracep->declArray(c+1262,"top ysyx_22040931_ID reg_data2 lut", false,-1, 339,0);
        tracep->declBus(c+1408,"top ysyx_22040931_ID reg_data2 i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1356,"top ysyx_22040931_ID reg_data2 i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_ID reg_data2 i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_ID reg_data2 i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1150,"top ysyx_22040931_ID reg_data2 i1 out", false,-1, 63,0);
        tracep->declBus(c+581,"top ysyx_22040931_ID reg_data2 i1 key", false,-1, 3,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_ID reg_data2 i1 default_out", false,-1, 63,0);
        tracep->declArray(c+1262,"top ysyx_22040931_ID reg_data2 i1 lut", false,-1, 339,0);
        tracep->declBus(c+1438,"top ysyx_22040931_ID reg_data2 i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+1273+i*3,"top ysyx_22040931_ID reg_data2 i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1288+i*1,"top ysyx_22040931_ID reg_data2 i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+1293+i*2,"top ysyx_22040931_ID reg_data2 i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1303,"top ysyx_22040931_ID reg_data2 i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+1305,"top ysyx_22040931_ID reg_data2 i1 hit", false,-1);
        tracep->declBus(c+1415,"top ysyx_22040931_ID reg_data2 i1 i", false,-1, 31,0);
        tracep->declBit(c+1306,"top id_ex reset", false,-1);
        tracep->declBit(c+1307,"top id_ex clock", false,-1);
        tracep->declBit(c+1439,"top id_ex flush", false,-1);
        tracep->declBit(c+1440,"top id_ex stall", false,-1);
        tracep->declBit(c+252,"top id_ex nop", false,-1);
        tracep->declBit(c+245,"top id_ex if_valid", false,-1);
        tracep->declBit(c+286,"top id_ex ex_ready", false,-1);
        tracep->declBit(c+263,"top id_ex id_ready", false,-1);
        tracep->declBit(c+264,"top id_ex id_valid", false,-1);
        tracep->declQuad(c+249,"top id_ex ID_pc", false,-1, 63,0);
        tracep->declBus(c+251,"top id_ex ID_instr", false,-1, 31,0);
        tracep->declBit(c+253,"top id_ex ID_w_ena", false,-1);
        tracep->declBus(c+254,"top id_ex ID_w_addr", false,-1, 4,0);
        tracep->declQuad(c+1148,"top id_ex ID_data1", false,-1, 63,0);
        tracep->declQuad(c+1150,"top id_ex ID_data2", false,-1, 63,0);
        tracep->declQuad(c+257,"top id_ex ID_imm", false,-1, 63,0);
        tracep->declBus(c+259,"top id_ex ID_exop", false,-1, 2,0);
        tracep->declBus(c+260,"top id_ex ID_aluop", false,-1, 4,0);
        tracep->declBus(c+261,"top id_ex ID_memwop", false,-1, 2,0);
        tracep->declBus(c+262,"top id_ex ID_memrop", false,-1, 2,0);
        tracep->declBit(c+255,"top id_ex ID_mem_ena", false,-1);
        tracep->declBit(c+256,"top id_ex ID_mem_wr", false,-1);
        tracep->declBit(c+265,"top id_ex EX_w_ena", false,-1);
        tracep->declBus(c+266,"top id_ex EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+267,"top id_ex EX_data1", false,-1, 63,0);
        tracep->declQuad(c+269,"top id_ex EX_data2", false,-1, 63,0);
        tracep->declQuad(c+271,"top id_ex EX_imm", false,-1, 63,0);
        tracep->declBus(c+273,"top id_ex EX_exop", false,-1, 2,0);
        tracep->declBus(c+274,"top id_ex EX_aluop", false,-1, 4,0);
        tracep->declBus(c+275,"top id_ex EX_memwop", false,-1, 2,0);
        tracep->declBus(c+276,"top id_ex EX_memrop", false,-1, 2,0);
        tracep->declBit(c+277,"top id_ex EX_mem_ena", false,-1);
        tracep->declBit(c+278,"top id_ex EX_mem_wr", false,-1);
        tracep->declBus(c+279,"top id_ex EX_instr", false,-1, 31,0);
        tracep->declQuad(c+280,"top id_ex EX_pc", false,-1, 63,0);
        tracep->declBit(c+1441,"top id_ex id_go", false,-1);
        tracep->declBit(c+264,"top id_ex id_now_valid", false,-1);
        tracep->declBit(c+1306,"top ysyx_22040931_EX reset", false,-1);
        tracep->declBit(c+1307,"top ysyx_22040931_EX clock", false,-1);
        tracep->declBit(c+265,"top ysyx_22040931_EX w_ena_i", false,-1);
        tracep->declBus(c+266,"top ysyx_22040931_EX w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+280,"top ysyx_22040931_EX pc_i", false,-1, 63,0);
        tracep->declBus(c+279,"top ysyx_22040931_EX instr", false,-1, 31,0);
        tracep->declQuad(c+267,"top ysyx_22040931_EX data1", false,-1, 63,0);
        tracep->declQuad(c+269,"top ysyx_22040931_EX data2", false,-1, 63,0);
        tracep->declQuad(c+271,"top ysyx_22040931_EX imm", false,-1, 63,0);
        tracep->declBus(c+273,"top ysyx_22040931_EX exop", false,-1, 2,0);
        tracep->declBus(c+274,"top ysyx_22040931_EX aluop", false,-1, 4,0);
        tracep->declBus(c+275,"top ysyx_22040931_EX memwop_i", false,-1, 2,0);
        tracep->declBus(c+276,"top ysyx_22040931_EX memrop_i", false,-1, 2,0);
        tracep->declBit(c+277,"top ysyx_22040931_EX mem_ena_i", false,-1);
        tracep->declBit(c+278,"top ysyx_22040931_EX mem_wr_i", false,-1);
        tracep->declBit(c+265,"top ysyx_22040931_EX w_ena", false,-1);
        tracep->declBus(c+266,"top ysyx_22040931_EX w_addr", false,-1, 4,0);
        tracep->declQuad(c+282,"top ysyx_22040931_EX w_data", false,-1, 63,0);
        tracep->declBus(c+275,"top ysyx_22040931_EX memwop", false,-1, 2,0);
        tracep->declBus(c+276,"top ysyx_22040931_EX memrop", false,-1, 2,0);
        tracep->declBit(c+277,"top ysyx_22040931_EX mem_ena", false,-1);
        tracep->declBit(c+278,"top ysyx_22040931_EX mem_wr", false,-1);
        tracep->declQuad(c+284,"top ysyx_22040931_EX mem_addr", false,-1, 63,0);
        tracep->declQuad(c+269,"top ysyx_22040931_EX mem_data", false,-1, 63,0);
        tracep->declBus(c+279,"top ysyx_22040931_EX instr_o", false,-1, 31,0);
        tracep->declQuad(c+280,"top ysyx_22040931_EX pc_o", false,-1, 63,0);
        tracep->declQuad(c+582,"top ysyx_22040931_EX result", false,-1, 63,0);
        tracep->declBit(c+1306,"top ysyx_22040931_EX ysyx_22040931_ALU reset", false,-1);
        tracep->declBit(c+1307,"top ysyx_22040931_EX ysyx_22040931_ALU clock", false,-1);
        tracep->declQuad(c+267,"top ysyx_22040931_EX ysyx_22040931_ALU num1", false,-1, 63,0);
        tracep->declQuad(c+269,"top ysyx_22040931_EX ysyx_22040931_ALU num2", false,-1, 63,0);
        tracep->declQuad(c+271,"top ysyx_22040931_EX ysyx_22040931_ALU imm", false,-1, 63,0);
        tracep->declQuad(c+280,"top ysyx_22040931_EX ysyx_22040931_ALU pc", false,-1, 63,0);
        tracep->declBus(c+274,"top ysyx_22040931_EX ysyx_22040931_ALU op", false,-1, 4,0);
        tracep->declBit(c+584,"top ysyx_22040931_EX ysyx_22040931_ALU alu_valid", false,-1);
        tracep->declQuad(c+582,"top ysyx_22040931_EX ysyx_22040931_ALU out", false,-1, 63,0);
        tracep->declQuad(c+267,"top ysyx_22040931_EX ysyx_22040931_ALU num1_s", false,-1, 63,0);
        tracep->declBus(c+585,"top ysyx_22040931_EX ysyx_22040931_ALU num1_sw", false,-1, 31,0);
        tracep->declQuad(c+269,"top ysyx_22040931_EX ysyx_22040931_ALU num2_s", false,-1, 63,0);
        tracep->declBus(c+586,"top ysyx_22040931_EX ysyx_22040931_ALU num2_sw", false,-1, 31,0);
        tracep->declBus(c+587,"top ysyx_22040931_EX ysyx_22040931_ALU d_m_ena", false,-1, 2,0);
        tracep->declQuad(c+588,"top ysyx_22040931_EX ysyx_22040931_ALU quotient", false,-1, 63,0);
        tracep->declQuad(c+590,"top ysyx_22040931_EX ysyx_22040931_ALU remainder", false,-1, 63,0);
        tracep->declBit(c+592,"top ysyx_22040931_EX ysyx_22040931_ALU div_complete", false,-1);
        tracep->declBus(c+1442,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1408,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+587,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA out", false,-1, 2,0);
        tracep->declBus(c+274,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA key", false,-1, 4,0);
        tracep->declBus(c+1443,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA default_out", false,-1, 2,0);
        tracep->declQuad(c+1444,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA lut", false,-1, 63,0);
        tracep->declBus(c+1442,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1408,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+587,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 out", false,-1, 2,0);
        tracep->declBus(c+274,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 key", false,-1, 4,0);
        tracep->declBus(c+1443,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 default_out", false,-1, 2,0);
        tracep->declQuad(c+1444,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 lut", false,-1, 63,0);
        tracep->declBus(c+1442,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+193+i*1,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+201+i*1,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+209+i*1,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+593,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 lut_out", false,-1, 2,0);
        tracep->declBit(c+594,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 hit", false,-1);
        tracep->declBus(c+1446,"top ysyx_22040931_EX ysyx_22040931_ALU D_M_ENA i1 i", false,-1, 31,0);
        tracep->declBit(c+1307,"top ysyx_22040931_EX ysyx_22040931_ALU divider clock", false,-1);
        tracep->declBit(c+1306,"top ysyx_22040931_EX ysyx_22040931_ALU divider reset", false,-1);
        tracep->declBit(c+595,"top ysyx_22040931_EX ysyx_22040931_ALU divider w", false,-1);
        tracep->declBit(c+596,"top ysyx_22040931_EX ysyx_22040931_ALU divider div", false,-1);
        tracep->declBit(c+597,"top ysyx_22040931_EX ysyx_22040931_ALU divider div_signed", false,-1);
        tracep->declQuad(c+267,"top ysyx_22040931_EX ysyx_22040931_ALU divider dividend", false,-1, 63,0);
        tracep->declQuad(c+269,"top ysyx_22040931_EX ysyx_22040931_ALU divider divisor", false,-1, 63,0);
        tracep->declQuad(c+588,"top ysyx_22040931_EX ysyx_22040931_ALU divider quotient", false,-1, 63,0);
        tracep->declQuad(c+590,"top ysyx_22040931_EX ysyx_22040931_ALU divider remainder", false,-1, 63,0);
        tracep->declBit(c+592,"top ysyx_22040931_EX ysyx_22040931_ALU divider complete", false,-1);
        tracep->declArray(c+598,"top ysyx_22040931_EX ysyx_22040931_ALU divider dividend_reg", false,-1, 127,0);
        tracep->declQuad(c+602,"top ysyx_22040931_EX ysyx_22040931_ALU divider quotient_reg", false,-1, 63,0);
        tracep->declArray(c+604,"top ysyx_22040931_EX ysyx_22040931_ALU divider remainder_reg", false,-1, 64,0);
        tracep->declBus(c+607,"top ysyx_22040931_EX ysyx_22040931_ALU divider count", false,-1, 6,0);
        tracep->declQuad(c+608,"top ysyx_22040931_EX ysyx_22040931_ALU divider abs_dividend", false,-1, 63,0);
        tracep->declQuad(c+610,"top ysyx_22040931_EX ysyx_22040931_ALU divider abs_divisor", false,-1, 63,0);
        tracep->declBit(c+612,"top ysyx_22040931_EX ysyx_22040931_ALU divider quotient_signed", false,-1);
        tracep->declBit(c+613,"top ysyx_22040931_EX ysyx_22040931_ALU divider remainder_signed", false,-1);
        tracep->declArray(c+614,"top ysyx_22040931_EX ysyx_22040931_ALU divider sub_64", false,-1, 64,0);
        tracep->declQuad(c+617,"top ysyx_22040931_EX ysyx_22040931_ALU divider sub_32", false,-1, 32,0);
        tracep->declQuad(c+619,"top ysyx_22040931_EX ysyx_22040931_ALU divider quotient_64", false,-1, 63,0);
        tracep->declQuad(c+621,"top ysyx_22040931_EX ysyx_22040931_ALU divider last_remainder_64", false,-1, 63,0);
        tracep->declQuad(c+623,"top ysyx_22040931_EX ysyx_22040931_ALU divider remainder_64", false,-1, 63,0);
        tracep->declBus(c+625,"top ysyx_22040931_EX ysyx_22040931_ALU divider last_remainder_32", false,-1, 31,0);
        tracep->declBus(c+626,"top ysyx_22040931_EX ysyx_22040931_ALU divider remainder_32", false,-1, 31,0);
        tracep->declBus(c+1357,"top ysyx_22040931_EX ysyx_22040931_ALU ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1408,"top ysyx_22040931_EX ysyx_22040931_ALU ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_EX ysyx_22040931_ALU ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+582,"top ysyx_22040931_EX ysyx_22040931_ALU ALU out", false,-1, 63,0);
        tracep->declBus(c+274,"top ysyx_22040931_EX ysyx_22040931_ALU ALU key", false,-1, 4,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_EX ysyx_22040931_ALU ALU default_out", false,-1, 63,0);
        tracep->declArray(c+627,"top ysyx_22040931_EX ysyx_22040931_ALU ALU lut", false,-1, 1931,0);
        tracep->declBus(c+1357,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1408,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+582,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 out", false,-1, 63,0);
        tracep->declBus(c+274,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 key", false,-1, 4,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 default_out", false,-1, 63,0);
        tracep->declArray(c+627,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 lut", false,-1, 1931,0);
        tracep->declBus(c+1447,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declArray(c+688+i*3,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+772+i*1,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declQuad(c+800+i*2,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+856,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+858,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 hit", false,-1);
        tracep->declBus(c+1385,"top ysyx_22040931_EX ysyx_22040931_ALU ALU i1 i", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_EX w_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_EX w_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_EX w_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+282,"top ysyx_22040931_EX w_data_mux out", false,-1, 63,0);
        tracep->declBus(c+273,"top ysyx_22040931_EX w_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_EX w_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+859,"top ysyx_22040931_EX w_data_mux lut", false,-1, 200,0);
        tracep->declBus(c+1343,"top ysyx_22040931_EX w_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_EX w_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_EX w_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_EX w_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+282,"top ysyx_22040931_EX w_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+273,"top ysyx_22040931_EX w_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_EX w_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+859,"top ysyx_22040931_EX w_data_mux i1 lut", false,-1, 200,0);
        tracep->declBus(c+1348,"top ysyx_22040931_EX w_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+866+i*3,"top ysyx_22040931_EX w_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+875+i*1,"top ysyx_22040931_EX w_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+878+i*2,"top ysyx_22040931_EX w_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+884,"top ysyx_22040931_EX w_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+886,"top ysyx_22040931_EX w_data_mux i1 hit", false,-1);
        tracep->declBus(c+1349,"top ysyx_22040931_EX w_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1416,"top ysyx_22040931_EX mem_addr_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_EX mem_addr_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_EX mem_addr_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+284,"top ysyx_22040931_EX mem_addr_mux out", false,-1, 63,0);
        tracep->declBus(c+273,"top ysyx_22040931_EX mem_addr_mux key", false,-1, 2,0);
        tracep->declQuad(c+1345,"top ysyx_22040931_EX mem_addr_mux default_out", false,-1, 63,0);
        tracep->declArray(c+887,"top ysyx_22040931_EX mem_addr_mux lut", false,-1, 133,0);
        tracep->declBus(c+1416,"top ysyx_22040931_EX mem_addr_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_EX mem_addr_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_EX mem_addr_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_EX mem_addr_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+284,"top ysyx_22040931_EX mem_addr_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+273,"top ysyx_22040931_EX mem_addr_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1345,"top ysyx_22040931_EX mem_addr_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+887,"top ysyx_22040931_EX mem_addr_mux i1 lut", false,-1, 133,0);
        tracep->declBus(c+1348,"top ysyx_22040931_EX mem_addr_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+892+i*3,"top ysyx_22040931_EX mem_addr_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+898+i*1,"top ysyx_22040931_EX mem_addr_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+900+i*2,"top ysyx_22040931_EX mem_addr_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+904,"top ysyx_22040931_EX mem_addr_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+906,"top ysyx_22040931_EX mem_addr_mux i1 hit", false,-1);
        tracep->declBus(c+1421,"top ysyx_22040931_EX mem_addr_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+1306,"top ex_mem reset", false,-1);
        tracep->declBit(c+1307,"top ex_mem clock", false,-1);
        tracep->declBit(c+1448,"top ex_mem flush", false,-1);
        tracep->declBit(c+1449,"top ex_mem stall", false,-1);
        tracep->declBit(c+264,"top ex_mem id_valid", false,-1);
        tracep->declBit(c+305,"top ex_mem mem_ready", false,-1);
        tracep->declBit(c+286,"top ex_mem ex_ready", false,-1);
        tracep->declBit(c+287,"top ex_mem ex_valid", false,-1);
        tracep->declQuad(c+280,"top ex_mem EX_pc", false,-1, 63,0);
        tracep->declBus(c+279,"top ex_mem EX_instr", false,-1, 31,0);
        tracep->declBit(c+265,"top ex_mem EX_w_ena", false,-1);
        tracep->declBus(c+266,"top ex_mem EX_w_addr", false,-1, 4,0);
        tracep->declQuad(c+282,"top ex_mem EX_w_data", false,-1, 63,0);
        tracep->declBus(c+275,"top ex_mem EX_memwop", false,-1, 2,0);
        tracep->declBus(c+276,"top ex_mem EX_memrop", false,-1, 2,0);
        tracep->declBit(c+277,"top ex_mem EX_mem_ena", false,-1);
        tracep->declBit(c+278,"top ex_mem EX_mem_wr", false,-1);
        tracep->declQuad(c+284,"top ex_mem EX_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+269,"top ex_mem EX_mem_data", false,-1, 63,0);
        tracep->declBit(c+288,"top ex_mem MEM_w_ena", false,-1);
        tracep->declBus(c+289,"top ex_mem MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+290,"top ex_mem MEM_w_data", false,-1, 63,0);
        tracep->declBus(c+292,"top ex_mem MEM_memwop", false,-1, 2,0);
        tracep->declBus(c+293,"top ex_mem MEM_memrop", false,-1, 2,0);
        tracep->declBit(c+294,"top ex_mem MEM_mem_ena", false,-1);
        tracep->declBit(c+295,"top ex_mem MEM_mem_wr", false,-1);
        tracep->declQuad(c+296,"top ex_mem MEM_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+298,"top ex_mem MEM_mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+300,"top ex_mem MEM_instr", false,-1, 31,0);
        tracep->declQuad(c+301,"top ex_mem MEM_pc", false,-1, 63,0);
        tracep->declBit(c+287,"top ex_mem ex_now_valid", false,-1);
        tracep->declBit(c+1450,"top ex_mem ex_go", false,-1);
        tracep->declBit(c+288,"top ysyx_22040931_MEM w_ena_i", false,-1);
        tracep->declBus(c+289,"top ysyx_22040931_MEM w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+290,"top ysyx_22040931_MEM w_data_i", false,-1, 63,0);
        tracep->declBus(c+292,"top ysyx_22040931_MEM memwop", false,-1, 2,0);
        tracep->declBus(c+293,"top ysyx_22040931_MEM memrop", false,-1, 2,0);
        tracep->declBit(c+294,"top ysyx_22040931_MEM mem_ena_i", false,-1);
        tracep->declBit(c+295,"top ysyx_22040931_MEM mem_wr_i", false,-1);
        tracep->declQuad(c+296,"top ysyx_22040931_MEM mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+298,"top ysyx_22040931_MEM mem_stor_data_i", false,-1, 63,0);
        tracep->declQuad(c+238,"top ysyx_22040931_MEM mem_data", false,-1, 63,0);
        tracep->declQuad(c+301,"top ysyx_22040931_MEM pc_i", false,-1, 63,0);
        tracep->declBus(c+300,"top ysyx_22040931_MEM instr", false,-1, 31,0);
        tracep->declBit(c+288,"top ysyx_22040931_MEM w_ena", false,-1);
        tracep->declBus(c+289,"top ysyx_22040931_MEM w_addr", false,-1, 4,0);
        tracep->declQuad(c+303,"top ysyx_22040931_MEM w_data", false,-1, 63,0);
        tracep->declBus(c+1314,"top ysyx_22040931_MEM memop", false,-1, 1,0);
        tracep->declBit(c+1315,"top ysyx_22040931_MEM mem_ena", false,-1);
        tracep->declBit(c+1316,"top ysyx_22040931_MEM mem_wr", false,-1);
        tracep->declQuad(c+1317,"top ysyx_22040931_MEM mem_addr", false,-1, 63,0);
        tracep->declQuad(c+1319,"top ysyx_22040931_MEM mem_stor_data", false,-1, 63,0);
        tracep->declBus(c+300,"top ysyx_22040931_MEM instr_o", false,-1, 31,0);
        tracep->declQuad(c+301,"top ysyx_22040931_MEM pc_o", false,-1, 63,0);
        tracep->declQuad(c+907,"top ysyx_22040931_MEM mem_r_data", false,-1, 63,0);
        tracep->declBus(c+909,"top ysyx_22040931_MEM memwrop", false,-1, 2,0);
        tracep->declQuad(c+910,"top ysyx_22040931_MEM stor_data_one", false,-1, 63,0);
        tracep->declQuad(c+912,"top ysyx_22040931_MEM stor_data_two", false,-1, 63,0);
        tracep->declQuad(c+914,"top ysyx_22040931_MEM stor_data_for", false,-1, 63,0);
        tracep->declBus(c+1431,"top ysyx_22040931_MEM memop_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_MEM memop_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1416,"top ysyx_22040931_MEM memop_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1314,"top ysyx_22040931_MEM memop_mux out", false,-1, 1,0);
        tracep->declBus(c+909,"top ysyx_22040931_MEM memop_mux key", false,-1, 2,0);
        tracep->declBus(c+1451,"top ysyx_22040931_MEM memop_mux default_out", false,-1, 1,0);
        tracep->declQuad(c+1452,"top ysyx_22040931_MEM memop_mux lut", false,-1, 34,0);
        tracep->declBus(c+1431,"top ysyx_22040931_MEM memop_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_MEM memop_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1416,"top ysyx_22040931_MEM memop_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_MEM memop_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1314,"top ysyx_22040931_MEM memop_mux i1 out", false,-1, 1,0);
        tracep->declBus(c+909,"top ysyx_22040931_MEM memop_mux i1 key", false,-1, 2,0);
        tracep->declBus(c+1451,"top ysyx_22040931_MEM memop_mux i1 default_out", false,-1, 1,0);
        tracep->declQuad(c+1452,"top ysyx_22040931_MEM memop_mux i1 lut", false,-1, 34,0);
        tracep->declBus(c+1408,"top ysyx_22040931_MEM memop_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+217+i*1,"top ysyx_22040931_MEM memop_mux i1 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+224+i*1,"top ysyx_22040931_MEM memop_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+231+i*1,"top ysyx_22040931_MEM memop_mux i1 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+916,"top ysyx_22040931_MEM memop_mux i1 lut_out", false,-1, 1,0);
        tracep->declBit(c+917,"top ysyx_22040931_MEM memop_mux i1 hit", false,-1);
        tracep->declBus(c+1454,"top ysyx_22040931_MEM memop_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1431,"top ysyx_22040931_MEM mem_r_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_MEM mem_r_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_MEM mem_r_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+907,"top ysyx_22040931_MEM mem_r_data_mux out", false,-1, 63,0);
        tracep->declBus(c+293,"top ysyx_22040931_MEM mem_r_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_MEM mem_r_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+918,"top ysyx_22040931_MEM mem_r_data_mux lut", false,-1, 468,0);
        tracep->declBus(c+1431,"top ysyx_22040931_MEM mem_r_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_MEM mem_r_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_MEM mem_r_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_MEM mem_r_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+907,"top ysyx_22040931_MEM mem_r_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+293,"top ysyx_22040931_MEM mem_r_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_MEM mem_r_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+918,"top ysyx_22040931_MEM mem_r_data_mux i1 lut", false,-1, 468,0);
        tracep->declBus(c+1348,"top ysyx_22040931_MEM mem_r_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+933+i*3,"top ysyx_22040931_MEM mem_r_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+954+i*1,"top ysyx_22040931_MEM mem_r_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+961+i*2,"top ysyx_22040931_MEM mem_r_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+975,"top ysyx_22040931_MEM mem_r_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+977,"top ysyx_22040931_MEM mem_r_data_mux i1 hit", false,-1);
        tracep->declBus(c+1454,"top ysyx_22040931_MEM mem_r_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1356,"top ysyx_22040931_MEM mem_stor_data_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_MEM mem_stor_data_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_MEM mem_stor_data_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1319,"top ysyx_22040931_MEM mem_stor_data_mux out", false,-1, 63,0);
        tracep->declBus(c+292,"top ysyx_22040931_MEM mem_stor_data_mux key", false,-1, 2,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_MEM mem_stor_data_mux default_out", false,-1, 63,0);
        tracep->declArray(c+978,"top ysyx_22040931_MEM mem_stor_data_mux lut", false,-1, 267,0);
        tracep->declBus(c+1356,"top ysyx_22040931_MEM mem_stor_data_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1343,"top ysyx_22040931_MEM mem_stor_data_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_MEM mem_stor_data_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_MEM mem_stor_data_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1319,"top ysyx_22040931_MEM mem_stor_data_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+292,"top ysyx_22040931_MEM mem_stor_data_mux i1 key", false,-1, 2,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_MEM mem_stor_data_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+978,"top ysyx_22040931_MEM mem_stor_data_mux i1 lut", false,-1, 267,0);
        tracep->declBus(c+1348,"top ysyx_22040931_MEM mem_stor_data_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+987+i*3,"top ysyx_22040931_MEM mem_stor_data_mux i1 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+999+i*1,"top ysyx_22040931_MEM mem_stor_data_mux i1 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1003+i*2,"top ysyx_22040931_MEM mem_stor_data_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1011,"top ysyx_22040931_MEM mem_stor_data_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+1013,"top ysyx_22040931_MEM mem_stor_data_mux i1 hit", false,-1);
        tracep->declBus(c+1388,"top ysyx_22040931_MEM mem_stor_data_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1442,"top ysyx_22040931_MEM mem_stor_data1_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1350,"top ysyx_22040931_MEM mem_stor_data1_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_MEM mem_stor_data1_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+910,"top ysyx_22040931_MEM mem_stor_data1_mux out", false,-1, 63,0);
        tracep->declBus(c+1014,"top ysyx_22040931_MEM mem_stor_data1_mux key", false,-1, 5,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_MEM mem_stor_data1_mux default_out", false,-1, 63,0);
        tracep->declArray(c+1015,"top ysyx_22040931_MEM mem_stor_data1_mux lut", false,-1, 559,0);
        tracep->declBus(c+1442,"top ysyx_22040931_MEM mem_stor_data1_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1350,"top ysyx_22040931_MEM mem_stor_data1_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_MEM mem_stor_data1_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_MEM mem_stor_data1_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+910,"top ysyx_22040931_MEM mem_stor_data1_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+1014,"top ysyx_22040931_MEM mem_stor_data1_mux i1 key", false,-1, 5,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_MEM mem_stor_data1_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+1015,"top ysyx_22040931_MEM mem_stor_data1_mux i1 lut", false,-1, 559,0);
        tracep->declBus(c+1455,"top ysyx_22040931_MEM mem_stor_data1_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+1033+i*3,"top ysyx_22040931_MEM mem_stor_data1_mux i1 pair_list", true,(i+0), 69,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1057+i*1,"top ysyx_22040931_MEM mem_stor_data1_mux i1 key_list", true,(i+0), 5,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+1065+i*2,"top ysyx_22040931_MEM mem_stor_data1_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1081,"top ysyx_22040931_MEM mem_stor_data1_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+1083,"top ysyx_22040931_MEM mem_stor_data1_mux i1 hit", false,-1);
        tracep->declBus(c+1446,"top ysyx_22040931_MEM mem_stor_data1_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1356,"top ysyx_22040931_MEM mem_stor_data2_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1408,"top ysyx_22040931_MEM mem_stor_data2_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_MEM mem_stor_data2_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+912,"top ysyx_22040931_MEM mem_stor_data2_mux out", false,-1, 63,0);
        tracep->declBus(c+1084,"top ysyx_22040931_MEM mem_stor_data2_mux key", false,-1, 4,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_MEM mem_stor_data2_mux default_out", false,-1, 63,0);
        tracep->declArray(c+1085,"top ysyx_22040931_MEM mem_stor_data2_mux lut", false,-1, 275,0);
        tracep->declBus(c+1356,"top ysyx_22040931_MEM mem_stor_data2_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1408,"top ysyx_22040931_MEM mem_stor_data2_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_MEM mem_stor_data2_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_MEM mem_stor_data2_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+912,"top ysyx_22040931_MEM mem_stor_data2_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+1084,"top ysyx_22040931_MEM mem_stor_data2_mux i1 key", false,-1, 4,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_MEM mem_stor_data2_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+1085,"top ysyx_22040931_MEM mem_stor_data2_mux i1 lut", false,-1, 275,0);
        tracep->declBus(c+1447,"top ysyx_22040931_MEM mem_stor_data2_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1094+i*3,"top ysyx_22040931_MEM mem_stor_data2_mux i1 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1106+i*1,"top ysyx_22040931_MEM mem_stor_data2_mux i1 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1110+i*2,"top ysyx_22040931_MEM mem_stor_data2_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1118,"top ysyx_22040931_MEM mem_stor_data2_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+1120,"top ysyx_22040931_MEM mem_stor_data2_mux i1 hit", false,-1);
        tracep->declBus(c+1388,"top ysyx_22040931_MEM mem_stor_data2_mux i1 i", false,-1, 31,0);
        tracep->declBus(c+1416,"top ysyx_22040931_MEM mem_stor_data3_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1356,"top ysyx_22040931_MEM mem_stor_data3_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_MEM mem_stor_data3_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+914,"top ysyx_22040931_MEM mem_stor_data3_mux out", false,-1, 63,0);
        tracep->declBus(c+1121,"top ysyx_22040931_MEM mem_stor_data3_mux key", false,-1, 3,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_MEM mem_stor_data3_mux default_out", false,-1, 63,0);
        tracep->declArray(c+1122,"top ysyx_22040931_MEM mem_stor_data3_mux lut", false,-1, 135,0);
        tracep->declBus(c+1416,"top ysyx_22040931_MEM mem_stor_data3_mux i1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1356,"top ysyx_22040931_MEM mem_stor_data3_mux i1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1344,"top ysyx_22040931_MEM mem_stor_data3_mux i1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1347,"top ysyx_22040931_MEM mem_stor_data3_mux i1 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+914,"top ysyx_22040931_MEM mem_stor_data3_mux i1 out", false,-1, 63,0);
        tracep->declBus(c+1121,"top ysyx_22040931_MEM mem_stor_data3_mux i1 key", false,-1, 3,0);
        tracep->declQuad(c+1436,"top ysyx_22040931_MEM mem_stor_data3_mux i1 default_out", false,-1, 63,0);
        tracep->declArray(c+1122,"top ysyx_22040931_MEM mem_stor_data3_mux i1 lut", false,-1, 135,0);
        tracep->declBus(c+1438,"top ysyx_22040931_MEM mem_stor_data3_mux i1 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+1127+i*3,"top ysyx_22040931_MEM mem_stor_data3_mux i1 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1133+i*1,"top ysyx_22040931_MEM mem_stor_data3_mux i1 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+1135+i*2,"top ysyx_22040931_MEM mem_stor_data3_mux i1 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1139,"top ysyx_22040931_MEM mem_stor_data3_mux i1 lut_out", false,-1, 63,0);
        tracep->declBit(c+1141,"top ysyx_22040931_MEM mem_stor_data3_mux i1 hit", false,-1);
        tracep->declBus(c+1421,"top ysyx_22040931_MEM mem_stor_data3_mux i1 i", false,-1, 31,0);
        tracep->declBit(c+1306,"top mem_wb reset", false,-1);
        tracep->declBit(c+1307,"top mem_wb clock", false,-1);
        tracep->declBit(c+1456,"top mem_wb flush", false,-1);
        tracep->declBit(c+1457,"top mem_wb stall", false,-1);
        tracep->declBit(c+287,"top mem_wb ex_valid", false,-1);
        tracep->declBit(c+305,"top mem_wb mem_ready", false,-1);
        tracep->declBit(c+306,"top mem_wb mem_valid", false,-1);
        tracep->declQuad(c+301,"top mem_wb MEM_pc", false,-1, 63,0);
        tracep->declBus(c+300,"top mem_wb MEM_instr", false,-1, 31,0);
        tracep->declBit(c+288,"top mem_wb MEM_w_ena", false,-1);
        tracep->declBus(c+289,"top mem_wb MEM_w_addr", false,-1, 4,0);
        tracep->declQuad(c+303,"top mem_wb MEM_w_data", false,-1, 63,0);
        tracep->declBit(c+307,"top mem_wb WB_w_ena", false,-1);
        tracep->declBus(c+308,"top mem_wb WB_w_addr", false,-1, 4,0);
        tracep->declQuad(c+309,"top mem_wb WB_w_data", false,-1, 63,0);
        tracep->declBus(c+313,"top mem_wb WB_instr", false,-1, 31,0);
        tracep->declQuad(c+311,"top mem_wb WB_pc", false,-1, 63,0);
        tracep->declBit(c+306,"top mem_wb mem_now_valid", false,-1);
        tracep->declBit(c+1458,"top mem_wb mem_go", false,-1);
        tracep->declBit(c+307,"top ysyx_22040931_WB w_ena_i", false,-1);
        tracep->declBus(c+308,"top ysyx_22040931_WB w_addr_i", false,-1, 4,0);
        tracep->declQuad(c+309,"top ysyx_22040931_WB w_data_i", false,-1, 63,0);
        tracep->declQuad(c+311,"top ysyx_22040931_WB pc_i", false,-1, 63,0);
        tracep->declBit(c+307,"top ysyx_22040931_WB w_ena", false,-1);
        tracep->declBus(c+308,"top ysyx_22040931_WB w_addr", false,-1, 4,0);
        tracep->declQuad(c+309,"top ysyx_22040931_WB w_data", false,-1, 63,0);
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

extern const VlWide<23>/*735:0*/ Vtop__ConstPool__CONST_a2114e47_0;
extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_f35eebe5_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp1948;
    VlWide<5>/*159:0*/ __Vtemp1949;
    VlWide<3>/*95:0*/ __Vtemp1950;
    VlWide<4>/*127:0*/ __Vtemp1951;
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
        tracep->fullCData(oldp+193,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+194,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[1]),8);
        tracep->fullCData(oldp+195,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[2]),8);
        tracep->fullCData(oldp+196,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[3]),8);
        tracep->fullCData(oldp+197,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[4]),8);
        tracep->fullCData(oldp+198,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[5]),8);
        tracep->fullCData(oldp+199,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[6]),8);
        tracep->fullCData(oldp+200,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[7]),8);
        tracep->fullCData(oldp+201,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[0]),5);
        tracep->fullCData(oldp+202,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[1]),5);
        tracep->fullCData(oldp+203,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[2]),5);
        tracep->fullCData(oldp+204,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[3]),5);
        tracep->fullCData(oldp+205,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[4]),5);
        tracep->fullCData(oldp+206,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[5]),5);
        tracep->fullCData(oldp+207,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[6]),5);
        tracep->fullCData(oldp+208,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[7]),5);
        tracep->fullCData(oldp+209,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[0]),3);
        tracep->fullCData(oldp+210,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[1]),3);
        tracep->fullCData(oldp+211,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[2]),3);
        tracep->fullCData(oldp+212,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[3]),3);
        tracep->fullCData(oldp+213,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[4]),3);
        tracep->fullCData(oldp+214,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[5]),3);
        tracep->fullCData(oldp+215,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[6]),3);
        tracep->fullCData(oldp+216,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[7]),3);
        tracep->fullCData(oldp+217,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+218,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+219,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+220,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+221,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+222,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[5]),5);
        tracep->fullCData(oldp+223,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[6]),5);
        tracep->fullCData(oldp+224,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+225,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+226,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+227,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+228,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullCData(oldp+229,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[5]),3);
        tracep->fullCData(oldp+230,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[6]),3);
        tracep->fullCData(oldp+231,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[0]),2);
        tracep->fullCData(oldp+232,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[1]),2);
        tracep->fullCData(oldp+233,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[2]),2);
        tracep->fullCData(oldp+234,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[3]),2);
        tracep->fullCData(oldp+235,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[4]),2);
        tracep->fullCData(oldp+236,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[5]),2);
        tracep->fullCData(oldp+237,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[6]),2);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__pre_branch),64);
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__pc_ready));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__pc_valid));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__if_ready));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__if_id__DOT__if_now_valid));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__ID_pre_jump));
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__ID_pre_branch),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__ID_pc),64);
        tracep->fullIData(oldp+251,(vlSelf->top__DOT__ID_instr),32);
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__load_stall));
        tracep->fullBit(oldp+253,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 0xaU))));
        tracep->fullCData(oldp+254,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 7U))),5);
        tracep->fullBit(oldp+255,((IData)(((0U != (0xeU 
                                                   & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))) 
                                           | (0U != 
                                              (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))))));
        tracep->fullBit(oldp+256,((0U != (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))));
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__id_imm),64);
        tracep->fullCData(oldp+259,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+260,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))),5);
        tracep->fullCData(oldp+261,((7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))),3);
        tracep->fullCData(oldp+262,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                           >> 1U))),3);
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__id_ready));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__id_ex__DOT__id_now_valid));
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__EX_w_ena));
        tracep->fullCData(oldp+266,(vlSelf->top__DOT__EX_w_addr),5);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__EX_data1),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__EX_data2),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__EX_imm),64);
        tracep->fullCData(oldp+273,(vlSelf->top__DOT__EX_exop),3);
        tracep->fullCData(oldp+274,(vlSelf->top__DOT__EX_aluop),5);
        tracep->fullCData(oldp+275,(vlSelf->top__DOT__EX_memwop),3);
        tracep->fullCData(oldp+276,(vlSelf->top__DOT__EX_memrop),3);
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__EX_mem_ena));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__EX_mem_wr));
        tracep->fullIData(oldp+279,(vlSelf->top__DOT__EX_instr),32);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__EX_pc),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__ex_w_data),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__ex_mem_addr),64);
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__ex_ready));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__MEM_w_ena));
        tracep->fullCData(oldp+289,(vlSelf->top__DOT__MEM_w_addr),5);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__MEM_w_data),64);
        tracep->fullCData(oldp+292,(vlSelf->top__DOT__MEM_memwop),3);
        tracep->fullCData(oldp+293,(vlSelf->top__DOT__MEM_memrop),3);
        tracep->fullBit(oldp+294,(vlSelf->top__DOT__MEM_mem_ena));
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__MEM_mem_wr));
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__MEM_mem_addr),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__MEM_mem_stor_data),64);
        tracep->fullIData(oldp+300,(vlSelf->top__DOT__MEM_instr),32);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__MEM_pc),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__mem_w_data),64);
        tracep->fullBit(oldp+305,(vlSelf->top__DOT__mem_ready));
        tracep->fullBit(oldp+306,(vlSelf->top__DOT__mem_wb__DOT__mem_now_valid));
        tracep->fullBit(oldp+307,(vlSelf->top__DOT__WB_w_ena));
        tracep->fullCData(oldp+308,(vlSelf->top__DOT__WB_w_addr),5);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__WB_w_data),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__WB_pc),64);
        tracep->fullIData(oldp+313,(vlSelf->top__DOT__WB_instr),32);
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid));
        tracep->fullCData(oldp+315,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_hash),8);
        tracep->fullCData(oldp+316,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index),8);
        tracep->fullIData(oldp+317,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i),32);
        tracep->fullIData(oldp+318,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j),32);
        tracep->fullCData(oldp+319,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__ID_pc 
                                                      >> 2U)))),8);
        tracep->fullCData(oldp+320,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__jumptype),2);
        tracep->fullIData(oldp+321,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__i),32);
        tracep->fullIData(oldp+322,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__j),32);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[1]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[2]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[3]),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[4]),64);
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[5]),64);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[6]),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[7]),64);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[8]),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[9]),64);
        tracep->fullQData(oldp+343,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[10]),64);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[11]),64);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[12]),64);
        tracep->fullQData(oldp+349,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[13]),64);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[14]),64);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[15]),64);
        tracep->fullCData(oldp+355,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index),4);
        tracep->fullBit(oldp+356,((1U & (~ (IData)(vlSelf->top__DOT__load_stall)))));
        tracep->fullIData(oldp+357,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__r_count),32);
        tracep->fullIData(oldp+358,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__count),32);
        tracep->fullCData(oldp+359,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype),3);
        tracep->fullBit(oldp+360,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 9U))));
        tracep->fullCData(oldp+361,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 0xfU))),5);
        tracep->fullBit(oldp+362,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                         >> 8U))));
        tracep->fullCData(oldp+363,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                              >> 0x14U))),5);
        tracep->fullQData(oldp+364,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch),64);
        tracep->fullBit(oldp+366,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__EX_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 9U))))));
        tracep->fullBit(oldp+367,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__EX_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 8U))))));
        tracep->fullBit(oldp+368,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 9U))))));
        tracep->fullBit(oldp+369,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 8U))))));
        tracep->fullBit(oldp+370,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+371,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+372,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                         >> 8U))));
        tracep->fullBit(oldp+373,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                         >> 8U))));
        tracep->fullBit(oldp+374,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                         >> 9U))));
        tracep->fullBit(oldp+375,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                         >> 8U))));
        tracep->fullCData(oldp+376,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+377,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                           >> 9U))),3);
        tracep->fullCData(oldp+378,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                           >> 8U))),3);
        tracep->fullCData(oldp+379,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+380,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                           >> 6U))),3);
        tracep->fullCData(oldp+381,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                           >> 5U))),3);
        tracep->fullCData(oldp+382,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out))),5);
        tracep->fullCData(oldp+383,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                              >> 4U))),5);
        tracep->fullCData(oldp+384,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                              >> 3U))),5);
        tracep->fullCData(oldp+385,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out))),5);
        tracep->fullCData(oldp+386,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                              >> 1U))),5);
        tracep->fullCData(oldp+387,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out))),5);
        tracep->fullBit(oldp+388,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))));
        tracep->fullBit(oldp+389,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out))));
        tracep->fullSData(oldp+390,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1),11);
        tracep->fullWData(oldp+391,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4),84);
        tracep->fullSData(oldp+394,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[0]),14);
        tracep->fullSData(oldp+395,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[1]),14);
        tracep->fullSData(oldp+396,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[2]),14);
        tracep->fullSData(oldp+397,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[3]),14);
        tracep->fullSData(oldp+398,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[4]),14);
        tracep->fullSData(oldp+399,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[5]),14);
        tracep->fullCData(oldp+400,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+401,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+402,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+403,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+404,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullCData(oldp+405,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[5]),3);
        tracep->fullSData(oldp+406,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[0]),11);
        tracep->fullSData(oldp+407,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[1]),11);
        tracep->fullSData(oldp+408,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[2]),11);
        tracep->fullSData(oldp+409,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[3]),11);
        tracep->fullSData(oldp+410,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[4]),11);
        tracep->fullSData(oldp+411,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[5]),11);
        tracep->fullSData(oldp+412,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out),11);
        tracep->fullBit(oldp+413,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+414,((0x7fU & vlSelf->top__DOT__ID_instr)),7);
        tracep->fullCData(oldp+415,((7U & (vlSelf->top__DOT__ID_instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+416,((vlSelf->top__DOT__ID_instr 
                                     >> 0x19U)),7);
        tracep->fullSData(oldp+417,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out),9);
        tracep->fullIData(oldp+418,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose),17);
        tracep->fullSData(oldp+419,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+420,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+421,((1U & (vlSelf->top__DOT__ID_instr 
                                         >> 0x14U))));
        tracep->fullSData(oldp+422,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out),13);
        tracep->fullSData(oldp+423,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1),13);
        tracep->fullSData(oldp+424,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2),12);
        tracep->fullSData(oldp+425,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3),12);
        tracep->fullSData(oldp+426,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4),12);
        tracep->fullSData(oldp+427,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1),10);
        tracep->fullSData(oldp+428,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2),16);
        tracep->fullIData(oldp+429,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3),17);
        tracep->fullIData(oldp+430,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4),18);
        tracep->fullCData(oldp+431,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2),4);
        tracep->fullWData(oldp+432,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4),68);
        tracep->fullIData(oldp+435,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[0]),17);
        tracep->fullIData(oldp+436,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[1]),17);
        tracep->fullIData(oldp+437,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[2]),17);
        tracep->fullIData(oldp+438,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[3]),17);
        tracep->fullCData(oldp+439,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+440,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+441,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+442,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[3]),4);
        tracep->fullSData(oldp+443,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[0]),13);
        tracep->fullSData(oldp+444,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[1]),13);
        tracep->fullSData(oldp+445,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[2]),13);
        tracep->fullSData(oldp+446,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[3]),13);
        tracep->fullSData(oldp+447,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out),13);
        tracep->fullBit(oldp+448,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+449,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out),13);
        tracep->fullBit(oldp+450,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+451,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+452,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+453,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+454,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+455,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+456,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+457,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out),12);
        tracep->fullSData(oldp+458,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out),12);
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+460,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose),10);
        tracep->fullSData(oldp+461,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out),9);
        tracep->fullSData(oldp+462,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+463,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+464,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out),10);
        tracep->fullSData(oldp+465,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__lut_out),10);
        tracep->fullBit(oldp+466,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__hit));
        tracep->fullSData(oldp+467,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out),9);
        tracep->fullSData(oldp+468,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out),9);
        tracep->fullBit(oldp+469,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit));
        tracep->fullIData(oldp+470,((vlSelf->top__DOT__ID_instr 
                                     >> 7U)),25);
        tracep->fullWData(oldp+471,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4),335);
        tracep->fullWData(oldp+482,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+485,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+488,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+491,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+494,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+497,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+498,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+499,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+500,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+501,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+506,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+514,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit));
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+523,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+525,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+535,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+539,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+541,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+543,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+545,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+547,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+549,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+551,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+553,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+555,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+557,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+559,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+561,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+563,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+565,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+567,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+569,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+571,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+573,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+575,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+577,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[31]),64);
        tracep->fullIData(oldp+579,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__i),32);
        tracep->fullCData(oldp+580,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2),4);
        tracep->fullCData(oldp+581,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2),4);
        tracep->fullQData(oldp+582,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result),64);
        tracep->fullBit(oldp+584,((1U & ((~ ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena) 
                                             >> 1U)) 
                                         | (0x41U == (IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__count))))));
        tracep->fullIData(oldp+585,((IData)(vlSelf->top__DOT__EX_data1)),32);
        tracep->fullIData(oldp+586,((IData)(vlSelf->top__DOT__EX_data2)),32);
        tracep->fullCData(oldp+587,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena),3);
        tracep->fullQData(oldp+588,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__quotient),64);
        tracep->fullQData(oldp+590,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__remainder),64);
        tracep->fullBit(oldp+592,((0x41U == (IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__count))));
        tracep->fullCData(oldp+593,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__lut_out),3);
        tracep->fullBit(oldp+594,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+595,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena) 
                                         >> 2U))));
        tracep->fullBit(oldp+596,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena) 
                                         >> 1U))));
        tracep->fullBit(oldp+597,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena))));
        tracep->fullWData(oldp+598,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__dividend_reg),128);
        tracep->fullQData(oldp+602,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__quotient_reg),64);
        tracep->fullWData(oldp+604,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__remainder_reg),65);
        tracep->fullCData(oldp+607,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__count),7);
        tracep->fullQData(oldp+608,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__abs_dividend),64);
        tracep->fullQData(oldp+610,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__abs_divisor),64);
        tracep->fullBit(oldp+612,((1U & ((IData)((vlSelf->top__DOT__EX_data2 
                                                  >> 0x3fU)) 
                                         ^ (IData)(
                                                   (vlSelf->top__DOT__EX_data1 
                                                    >> 0x3fU))))));
        tracep->fullBit(oldp+613,((1U & (IData)((vlSelf->top__DOT__EX_data1 
                                                 >> 0x3fU)))));
        tracep->fullWData(oldp+614,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__sub_64),65);
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__sub_32),33);
        tracep->fullQData(oldp+619,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__quotient_64),64);
        tracep->fullQData(oldp+621,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_64),64);
        tracep->fullQData(oldp+623,(((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__EX_data1 
                                                        >> 0x3fU)))
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_64))
                                          : vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_64)
                                      : vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_64)),64);
        tracep->fullIData(oldp+625,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_32),32);
        tracep->fullIData(oldp+626,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__remainder_32),32);
        tracep->fullWData(oldp+627,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT____Vcellinp__ALU____pinNumber4),1932);
        tracep->fullWData(oldp+688,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+691,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+694,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+697,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+700,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+703,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+706,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+709,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+712,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+715,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+718,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+721,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+724,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+727,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+730,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+733,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+736,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+739,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+742,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[18]),69);
        tracep->fullWData(oldp+745,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[19]),69);
        tracep->fullWData(oldp+748,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[20]),69);
        tracep->fullWData(oldp+751,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[21]),69);
        tracep->fullWData(oldp+754,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[22]),69);
        tracep->fullWData(oldp+757,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[23]),69);
        tracep->fullWData(oldp+760,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[24]),69);
        tracep->fullWData(oldp+763,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[25]),69);
        tracep->fullWData(oldp+766,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[26]),69);
        tracep->fullWData(oldp+769,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[27]),69);
        tracep->fullCData(oldp+772,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[0]),5);
        tracep->fullCData(oldp+773,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[1]),5);
        tracep->fullCData(oldp+774,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[2]),5);
        tracep->fullCData(oldp+775,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[3]),5);
        tracep->fullCData(oldp+776,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[4]),5);
        tracep->fullCData(oldp+777,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[5]),5);
        tracep->fullCData(oldp+778,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[6]),5);
        tracep->fullCData(oldp+779,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[7]),5);
        tracep->fullCData(oldp+780,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[8]),5);
        tracep->fullCData(oldp+781,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[9]),5);
        tracep->fullCData(oldp+782,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[10]),5);
        tracep->fullCData(oldp+783,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[11]),5);
        tracep->fullCData(oldp+784,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[12]),5);
        tracep->fullCData(oldp+785,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[13]),5);
        tracep->fullCData(oldp+786,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[14]),5);
        tracep->fullCData(oldp+787,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[15]),5);
        tracep->fullCData(oldp+788,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[16]),5);
        tracep->fullCData(oldp+789,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[17]),5);
        tracep->fullCData(oldp+790,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[18]),5);
        tracep->fullCData(oldp+791,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[19]),5);
        tracep->fullCData(oldp+792,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[20]),5);
        tracep->fullCData(oldp+793,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[21]),5);
        tracep->fullCData(oldp+794,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[22]),5);
        tracep->fullCData(oldp+795,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[23]),5);
        tracep->fullCData(oldp+796,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[24]),5);
        tracep->fullCData(oldp+797,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[25]),5);
        tracep->fullCData(oldp+798,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[26]),5);
        tracep->fullCData(oldp+799,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[27]),5);
        tracep->fullQData(oldp+800,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+802,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+804,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+806,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+808,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+810,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[5]),64);
        tracep->fullQData(oldp+812,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[6]),64);
        tracep->fullQData(oldp+814,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[7]),64);
        tracep->fullQData(oldp+816,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[8]),64);
        tracep->fullQData(oldp+818,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[9]),64);
        tracep->fullQData(oldp+820,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[10]),64);
        tracep->fullQData(oldp+822,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[11]),64);
        tracep->fullQData(oldp+824,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[12]),64);
        tracep->fullQData(oldp+826,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[13]),64);
        tracep->fullQData(oldp+828,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[14]),64);
        tracep->fullQData(oldp+830,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[15]),64);
        tracep->fullQData(oldp+832,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[16]),64);
        tracep->fullQData(oldp+834,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[17]),64);
        tracep->fullQData(oldp+836,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[18]),64);
        tracep->fullQData(oldp+838,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[19]),64);
        tracep->fullQData(oldp+840,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[20]),64);
        tracep->fullQData(oldp+842,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[21]),64);
        tracep->fullQData(oldp+844,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[22]),64);
        tracep->fullQData(oldp+846,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[23]),64);
        tracep->fullQData(oldp+848,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[24]),64);
        tracep->fullQData(oldp+850,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[25]),64);
        tracep->fullQData(oldp+852,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[26]),64);
        tracep->fullQData(oldp+854,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[27]),64);
        tracep->fullQData(oldp+856,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+858,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+859,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4),201);
        tracep->fullWData(oldp+866,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+869,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+872,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+875,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+876,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+877,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullQData(oldp+878,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+880,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+882,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+884,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+886,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+887,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4),134);
        tracep->fullWData(oldp+892,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+895,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullCData(oldp+898,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+899,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullQData(oldp+900,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+902,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+904,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+906,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit));
        tracep->fullQData(oldp+907,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data),64);
        tracep->fullCData(oldp+909,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop),3);
        tracep->fullQData(oldp+910,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one),64);
        tracep->fullQData(oldp+912,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two),64);
        tracep->fullQData(oldp+914,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for),64);
        tracep->fullCData(oldp+916,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out),2);
        tracep->fullBit(oldp+917,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+918,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4),469);
        tracep->fullWData(oldp+933,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+936,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+939,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+942,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+945,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+948,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+951,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[6]),67);
        tracep->fullCData(oldp+954,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+955,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+956,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+957,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullCData(oldp+958,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[4]),3);
        tracep->fullCData(oldp+959,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[5]),3);
        tracep->fullCData(oldp+960,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[6]),3);
        tracep->fullQData(oldp+961,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+963,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+965,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+967,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+969,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+971,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[5]),64);
        tracep->fullQData(oldp+973,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[6]),64);
        tracep->fullQData(oldp+975,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+977,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+978,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4),268);
        tracep->fullWData(oldp+987,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+990,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+993,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+996,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[3]),67);
        tracep->fullCData(oldp+999,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1000,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1001,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1002,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[3]),3);
        tracep->fullQData(oldp+1003,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1005,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1007,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1009,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1011,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+1013,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+1014,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2),6);
        tracep->fullWData(oldp+1015,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4),560);
        tracep->fullWData(oldp+1033,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[0]),70);
        tracep->fullWData(oldp+1036,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[1]),70);
        tracep->fullWData(oldp+1039,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[2]),70);
        tracep->fullWData(oldp+1042,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[3]),70);
        tracep->fullWData(oldp+1045,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[4]),70);
        tracep->fullWData(oldp+1048,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[5]),70);
        tracep->fullWData(oldp+1051,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[6]),70);
        tracep->fullWData(oldp+1054,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[7]),70);
        tracep->fullCData(oldp+1057,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[0]),6);
        tracep->fullCData(oldp+1058,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[1]),6);
        tracep->fullCData(oldp+1059,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[2]),6);
        tracep->fullCData(oldp+1060,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[3]),6);
        tracep->fullCData(oldp+1061,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[4]),6);
        tracep->fullCData(oldp+1062,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[5]),6);
        tracep->fullCData(oldp+1063,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[6]),6);
        tracep->fullCData(oldp+1064,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[7]),6);
        tracep->fullQData(oldp+1065,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1067,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1069,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1071,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1073,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1075,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1077,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1079,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1081,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+1083,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+1084,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2),5);
        tracep->fullWData(oldp+1085,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4),276);
        tracep->fullWData(oldp+1094,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+1097,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+1100,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+1103,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[3]),69);
        tracep->fullCData(oldp+1106,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[0]),5);
        tracep->fullCData(oldp+1107,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[1]),5);
        tracep->fullCData(oldp+1108,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[2]),5);
        tracep->fullCData(oldp+1109,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[3]),5);
        tracep->fullQData(oldp+1110,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1112,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1114,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1116,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1118,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+1120,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+1121,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2),4);
        tracep->fullWData(oldp+1122,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4),136);
        tracep->fullWData(oldp+1127,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+1130,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+1133,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1134,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[1]),4);
        tracep->fullQData(oldp+1135,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1137,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1139,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+1141,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+1142,(vlSelf->top__DOT__mux_pc));
        tracep->fullQData(oldp+1143,(vlSelf->top__DOT__branch),64);
        tracep->fullBit(oldp+1145,(vlSelf->top__DOT__pre_jump));
        tracep->fullCData(oldp+1146,(vlSelf->top__DOT__jumptype),2);
        tracep->fullBit(oldp+1147,(vlSelf->top__DOT__error_pre));
        tracep->fullQData(oldp+1148,(vlSelf->top__DOT__id_data1),64);
        tracep->fullQData(oldp+1150,(vlSelf->top__DOT__id_data2),64);
        tracep->fullBit(oldp+1152,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre));
        tracep->fullWData(oldp+1153,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4),201);
        tracep->fullWData(oldp+1160,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1163,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1166,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+1169,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1170,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1171,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullQData(oldp+1172,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1174,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1176,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1178,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+1180,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+1181,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__bjump));
        tracep->fullSData(oldp+1182,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4),12);
        tracep->fullCData(oldp+1183,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+1184,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+1185,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+1186,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1187,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1188,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[2]),3);
        tracep->fullBit(oldp+1189,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[0]));
        tracep->fullBit(oldp+1190,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[1]));
        tracep->fullBit(oldp+1191,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[2]));
        tracep->fullBit(oldp+1192,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out));
        tracep->fullBit(oldp+1193,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit));
        tracep->fullCData(oldp+1194,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb),3);
        tracep->fullWData(oldp+1195,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4),66);
        tracep->fullSData(oldp+1198,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+1199,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+1200,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+1201,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+1202,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+1203,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+1204,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[0]),10);
        tracep->fullSData(oldp+1205,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[1]),10);
        tracep->fullSData(oldp+1206,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[2]),10);
        tracep->fullSData(oldp+1207,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[3]),10);
        tracep->fullSData(oldp+1208,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[4]),10);
        tracep->fullSData(oldp+1209,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[5]),10);
        tracep->fullBit(oldp+1210,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[0]));
        tracep->fullBit(oldp+1211,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[1]));
        tracep->fullBit(oldp+1212,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[2]));
        tracep->fullBit(oldp+1213,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[3]));
        tracep->fullBit(oldp+1214,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[4]));
        tracep->fullBit(oldp+1215,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[5]));
        tracep->fullBit(oldp+1216,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out));
        tracep->fullBit(oldp+1217,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+1218,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4),340);
        tracep->fullWData(oldp+1229,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+1232,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+1235,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+1238,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+1241,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[4]),68);
        tracep->fullCData(oldp+1244,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1245,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1246,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+1247,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[3]),4);
        tracep->fullCData(oldp+1248,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[4]),4);
        tracep->fullQData(oldp+1249,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1251,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1253,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1255,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1257,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1259,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+1261,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit));
        tracep->fullWData(oldp+1262,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4),340);
        tracep->fullWData(oldp+1273,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+1276,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+1279,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+1282,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+1285,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[4]),68);
        tracep->fullCData(oldp+1288,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1289,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[1]),4);
        tracep->fullCData(oldp+1290,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[2]),4);
        tracep->fullCData(oldp+1291,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[3]),4);
        tracep->fullCData(oldp+1292,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[4]),4);
        tracep->fullQData(oldp+1293,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1295,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1297,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1299,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1301,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1303,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out),64);
        tracep->fullBit(oldp+1305,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit));
        tracep->fullBit(oldp+1306,(vlSelf->reset));
        tracep->fullBit(oldp+1307,(vlSelf->clock));
        tracep->fullIData(oldp+1308,(vlSelf->instr),32);
        tracep->fullQData(oldp+1309,(vlSelf->momory_data),64);
        tracep->fullBit(oldp+1311,(vlSelf->fetch_enb));
        tracep->fullQData(oldp+1312,(vlSelf->pc),64);
        tracep->fullCData(oldp+1314,(vlSelf->memop),2);
        tracep->fullBit(oldp+1315,(vlSelf->mem_ena));
        tracep->fullBit(oldp+1316,(vlSelf->mem_wr));
        tracep->fullQData(oldp+1317,(vlSelf->mem_addr),64);
        tracep->fullQData(oldp+1319,(vlSelf->mem_stor_data),64);
        tracep->fullIData(oldp+1321,(vlSelf->difftest_instr),32);
        tracep->fullQData(oldp+1322,(vlSelf->difftest_pc),64);
        tracep->fullCData(oldp+1324,(((3U == (IData)(vlSelf->memop))
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
        tracep->fullQData(oldp+1325,(((IData)(vlSelf->top__DOT__error_pre)
                                       ? ((IData)(vlSelf->top__DOT__mux_pc)
                                           ? vlSelf->top__DOT__branch
                                           : (4ULL 
                                              + vlSelf->top__DOT__ID_pc))
                                       : ((IData)(vlSelf->top__DOT__pre_jump)
                                           ? vlSelf->top__DOT__pre_branch
                                           : (4ULL 
                                              + vlSelf->pc)))),64);
        tracep->fullBit(oldp+1327,(((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre) 
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
        tracep->fullBit(oldp+1328,((((vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
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
        tracep->fullCData(oldp+1329,((0xffU & ((((IData)(
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
        tracep->fullCData(oldp+1330,((0xffU & ((IData)(
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
        tracep->fullCData(oldp+1331,((0xffU & (IData)(
                                                      (vlSelf->pc 
                                                       >> 2U)))),8);
        tracep->fullQData(oldp+1332,(((IData)(vlSelf->reset)
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
        tracep->fullQData(oldp+1334,(((IData)(vlSelf->reset)
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
        tracep->fullQData(oldp+1336,((vlSelf->top__DOT__id_data1 
                                      + vlSelf->top__DOT__id_imm)),64);
        tracep->fullBit(oldp+1338,(vlSelf->top__DOT__nop));
        tracep->fullBit(oldp+1339,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__flush));
        tracep->fullBit(oldp+1340,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall));
        tracep->fullBit(oldp+1341,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall)))));
        tracep->fullBit(oldp+1342,(vlSelf->top__DOT__if_id__DOT__flush));
        tracep->fullIData(oldp+1343,(3U),32);
        tracep->fullIData(oldp+1344,(0x40U),32);
        tracep->fullQData(oldp+1345,(0x80000000ULL),64);
        tracep->fullIData(oldp+1347,(1U),32);
        tracep->fullIData(oldp+1348,(0x43U),32);
        tracep->fullIData(oldp+1349,(3U),32);
        tracep->fullIData(oldp+1350,(6U),32);
        tracep->fullIData(oldp+1351,(0xbU),32);
        tracep->fullSData(oldp+1352,(0U),11);
        tracep->fullIData(oldp+1353,(0xeU),32);
        tracep->fullIData(oldp+1354,(6U),32);
        tracep->fullBit(oldp+1355,(0U));
        tracep->fullIData(oldp+1356,(4U),32);
        tracep->fullIData(oldp+1357,(0x1cU),32);
        tracep->fullIData(oldp+1358,(0x11U),32);
        tracep->fullIData(oldp+1359,(9U),32);
        tracep->fullSData(oldp+1360,(0U),9);
        tracep->fullWData(oldp+1361,(Vtop__ConstPool__CONST_a2114e47_0),728);
        tracep->fullIData(oldp+1384,(0x1aU),32);
        tracep->fullIData(oldp+1385,(0x1cU),32);
        tracep->fullIData(oldp+1386,(0xdU),32);
        tracep->fullSData(oldp+1387,(0U),13);
        tracep->fullIData(oldp+1388,(4U),32);
        tracep->fullIData(oldp+1389,(0xaU),32);
        tracep->fullWData(oldp+1390,(Vtop__ConstPool__CONST_f35eebe5_0),299);
        tracep->fullIData(oldp+1400,(0x17U),32);
        tracep->fullIData(oldp+1401,(0xdU),32);
        tracep->fullIData(oldp+1402,(0x10U),32);
        tracep->fullIData(oldp+1403,(0xcU),32);
        tracep->fullSData(oldp+1404,(0U),12);
        __Vtemp1948[0U] = 0x293f48U;
        __Vtemp1948[1U] = 0x404293f5U;
        __Vtemp1948[2U] = 0x93fU;
        tracep->fullWData(oldp+1405,(__Vtemp1948),84);
        tracep->fullIData(oldp+1408,(5U),32);
        __Vtemp1949[0U] = 0x29bf68U;
        __Vtemp1949[1U] = 0xe10537ecU;
        __Vtemp1949[2U] = 0x980064fcU;
        __Vtemp1949[3U] = 0xe580089fU;
        __Vtemp1949[4U] = 0x9bU;
        tracep->fullWData(oldp+1409,(__Vtemp1949),145);
        tracep->fullIData(oldp+1414,(0x1dU),32);
        tracep->fullIData(oldp+1415,(5U),32);
        tracep->fullIData(oldp+1416,(2U),32);
        tracep->fullIData(oldp+1417,(0x12U),32);
        tracep->fullQData(oldp+1418,(0x1cec000473b00ULL),60);
        tracep->fullIData(oldp+1420,(0x1eU),32);
        tracep->fullIData(oldp+1421,(2U),32);
        __Vtemp1950[0U] = 0x5ec23d79U;
        __Vtemp1950[1U] = 0x23d7d28fU;
        __Vtemp1950[2U] = 0x68f5fdU;
        tracep->fullWData(oldp+1422,(__Vtemp1950),88);
        tracep->fullIData(oldp+1425,(0x16U),32);
        __Vtemp1951[0U] = 0x3801c700U;
        __Vtemp1951[1U] = 0x131c036U;
        __Vtemp1951[2U] = 0x5c700f8eU;
        __Vtemp1951[3U] = 0x6380U;
        tracep->fullWData(oldp+1426,(__Vtemp1951),114);
        tracep->fullIData(oldp+1430,(0x13U),32);
        tracep->fullIData(oldp+1431,(7U),32);
        tracep->fullSData(oldp+1432,(0U),10);
        tracep->fullIData(oldp+1433,(0x1bfe1U),17);
        tracep->fullIData(oldp+1434,(1U),32);
        tracep->fullIData(oldp+1435,(0x2fee6f40U),32);
        tracep->fullQData(oldp+1436,(0ULL),64);
        tracep->fullIData(oldp+1438,(0x44U),32);
        tracep->fullBit(oldp+1439,(vlSelf->top__DOT__id_ex__DOT__flush));
        tracep->fullBit(oldp+1440,(vlSelf->top__DOT__id_ex__DOT__stall));
        tracep->fullBit(oldp+1441,((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))));
        tracep->fullIData(oldp+1442,(8U),32);
        tracep->fullCData(oldp+1443,(0U),3);
        tracep->fullQData(oldp+1444,(0x8f969aa3cbd2dee7ULL),64);
        tracep->fullIData(oldp+1446,(8U),32);
        tracep->fullIData(oldp+1447,(0x45U),32);
        tracep->fullBit(oldp+1448,(vlSelf->top__DOT__ex_mem__DOT__flush));
        tracep->fullBit(oldp+1449,(vlSelf->top__DOT__ex_mem__DOT__stall));
        tracep->fullBit(oldp+1450,((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))));
        tracep->fullCData(oldp+1451,(0U),2);
        tracep->fullQData(oldp+1452,(0x110d8db5fULL),35);
        tracep->fullIData(oldp+1454,(7U),32);
        tracep->fullIData(oldp+1455,(0x46U),32);
        tracep->fullBit(oldp+1456,(vlSelf->top__DOT__mem_wb__DOT__flush));
        tracep->fullBit(oldp+1457,(vlSelf->top__DOT__mem_wb__DOT__stall));
        tracep->fullBit(oldp+1458,((1U & (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__stall)))));
    }
}
