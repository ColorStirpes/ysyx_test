// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__3\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    Vtop___024root___initial__TOP__3(vlSelf);
}

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) VL_ATTR_COLD;

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->momory_data = VL_RAND_RESET_Q(64);
    vlSelf->fetch_enb = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->memop = VL_RAND_RESET_I(2);
    vlSelf->mem_ena = VL_RAND_RESET_I(1);
    vlSelf->mem_wr = VL_RAND_RESET_I(1);
    vlSelf->mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->mem_stor_data = VL_RAND_RESET_Q(64);
    vlSelf->difftest_instr = VL_RAND_RESET_I(32);
    vlSelf->difftest_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mux_pc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pre_jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pre_branch = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pc_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__if_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID_pre_jump = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID_pre_branch = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ID_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ID_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__nop = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__load_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jumptype = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__error_pre = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_data1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_data2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_w_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_w_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EX_data1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_data2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_exop = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EX_aluop = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EX_memwop = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EX_memrop = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EX_mem_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_mem_wr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EX_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ex_w_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ex_mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM_w_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM_w_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__MEM_w_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MEM_memwop = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__MEM_memrop = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__MEM_mem_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM_mem_wr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM_mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MEM_mem_stor_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__MEM_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__MEM_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_w_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WB_w_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WB_w_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__WB_w_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WB_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WB_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_i = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_hash = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        VL_RAND_RESET_W(98, vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[__Vi0]);
    }
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__jumptype = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__if_id__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__if_id__DOT__if_now_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__r_count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(201, vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4);
    VL_RAND_RESET_W(340, vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(340, vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__bjump = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(84, vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1 = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4 = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(14);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose = VL_RAND_RESET_I(17);
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(26);
    }
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1 = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2 = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3 = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4 = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1 = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 = VL_RAND_RESET_I(17);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4 = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(68, vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(23);
    }
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(28);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(66, vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out = VL_RAND_RESET_I(9);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(335, vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_ex__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_ex__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_ex__DOT__id_now_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__result = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(201, vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4);
    VL_RAND_RESET_W(134, vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__remainder = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1932, vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT____Vcellinp__ALU____pinNumber4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__dividend_reg);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__quotient_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__remainder_reg);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__abs_dividend = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__abs_divisor = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__sub_64);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__sub_32 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__quotient_64 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_64 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_32 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__remainder_32 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        VL_RAND_RESET_W(69, vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_mem__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_mem__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_mem__DOT__ex_now_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(469, vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(268, vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4);
    VL_RAND_RESET_W(560, vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2 = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(276, vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2 = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(136, vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(70, vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(69, vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_wb__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_wb__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_wb__DOT__mem_now_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__mem_read__4__rdata = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
