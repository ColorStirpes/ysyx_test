// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void Inst(int instruct);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__Inst_TOP(IData/*31:0*/ instruct) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__Inst_TOP\n"); );
    // Body
    int instruct__Vcvt;
    for (size_t instruct__Vidx = 0; instruct__Vidx < 1; ++instruct__Vidx) instruct__Vcvt = instruct;
    Inst(instruct__Vcvt);
}

extern "C" void E(int a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__E_TOP(IData/*31:0*/ a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__E_TOP\n"); );
    // Body
    int a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    E(a__Vcvt);
}

extern "C" void mem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__mem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__mem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    mem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void mem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__mem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__mem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    mem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT__v0;
    CData/*1:0*/ __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v0;
    CData/*3:0*/ __Vdly__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v1;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v16;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32;
    VlWide<4>/*97:0*/ __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256;
    IData/*31:0*/ __Vdly__top__DOT__ysyx_22040931_ID__DOT__count;
    IData/*31:0*/ __Vdly__top__DOT__ysyx_22040931_ID__DOT__r_count;
    VlWide<7>/*223:0*/ __Vtemp837;
    VlWide<8>/*255:0*/ __Vtemp844;
    VlWide<9>/*287:0*/ __Vtemp845;
    VlWide<12>/*383:0*/ __Vtemp847;
    VlWide<14>/*447:0*/ __Vtemp849;
    VlWide<16>/*511:0*/ __Vtemp851;
    VlWide<3>/*95:0*/ __Vtemp958;
    VlWide<3>/*95:0*/ __Vtemp959;
    VlWide<3>/*95:0*/ __Vtemp960;
    VlWide<5>/*159:0*/ __Vtemp1040;
    VlWide<3>/*95:0*/ __Vtemp1041;
    VlWide<7>/*223:0*/ __Vtemp1042;
    VlWide<3>/*95:0*/ __Vtemp1043;
    VlWide<9>/*287:0*/ __Vtemp1044;
    VlWide<9>/*287:0*/ __Vtemp1178;
    VlWide<15>/*479:0*/ __Vtemp1183;
    VlWide<3>/*95:0*/ __Vtemp1194;
    VlWide<3>/*95:0*/ __Vtemp1248;
    VlWide<3>/*95:0*/ __Vtemp1249;
    QData/*63:0*/ __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v16;
    QData/*63:0*/ __Vdlyvval__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32;
    // Body
    __Vdly__top__DOT__ysyx_22040931_ID__DOT__count 
        = vlSelf->top__DOT__ysyx_22040931_ID__DOT__count;
    __Vdly__top__DOT__ysyx_22040931_ID__DOT__r_count 
        = vlSelf->top__DOT__ysyx_22040931_ID__DOT__r_count;
    __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT__v0 = 0U;
    __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT__v0 = 0U;
    __Vdly__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index 
        = vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index;
    __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v0 = 0U;
    __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v1 = 0U;
    __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v16 = 0U;
    __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v0 = 0U;
    __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256 = 0U;
    __Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__i = 0x100U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__j = 0x10U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__i = 0x20U;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__Inst_TOP(vlSelf->instr);
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__ysyx_22040931_ID__DOT__count = 0U;
    } else if ((0U != (IData)(vlSelf->top__DOT__jumptype))) {
        __Vdly__top__DOT__ysyx_22040931_ID__DOT__count 
            = ((IData)(1U) + vlSelf->top__DOT__ysyx_22040931_ID__DOT__count);
    }
    if (vlSelf->reset) {
        __Vdly__top__DOT__ysyx_22040931_ID__DOT__r_count = 0U;
    } else if (((~ (IData)(vlSelf->top__DOT__error_pre)) 
                & (0U != (IData)(vlSelf->top__DOT__jumptype)))) {
        __Vdly__top__DOT__ysyx_22040931_ID__DOT__r_count 
            = ((IData)(1U) + vlSelf->top__DOT__ysyx_22040931_ID__DOT__r_count);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid = 0U;
    } else if (vlSelf->top__DOT__pc_ready) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x100U, vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i)) {
            vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT[(0xffU 
                                                                                & vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i)] = 0U;
            vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i);
        }
    } else if ((0U != (IData)(vlSelf->top__DOT__jumptype))) {
        __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT__v0 
            = ((IData)(vlSelf->top__DOT__mux_pc) ? 
               ((2U & vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT
                 [vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index])
                 ? 2U : ((1U & vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT
                          [vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index])
                          ? 3U : 1U)) : ((2U & vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT
                                          [vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index])
                                          ? ((1U & 
                                              vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT
                                              [vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index])
                                              ? 1U : 3U)
                                          : 0U));
        __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT__v0 = 1U;
        __Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT__v0 
            = vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j = 0U;
        while (VL_GTS_III(1,32,32, 0x100U, vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j)) {
            vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT[(0xffU 
                                                                                & vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j)] = 0U;
            vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j 
                = ((IData)(1U) + vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j);
        }
    } else if ((0U != (IData)(vlSelf->top__DOT__jumptype))) {
        __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT__v0 
            = ((0xfeU & vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT
                [vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_hash]) 
               | (IData)(vlSelf->top__DOT__mux_pc));
        __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT__v0 = 1U;
        __Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT__v0 
            = vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_hash;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__ID_pre_branch = 0x80000000ULL;
    } else if (((IData)(vlSelf->top__DOT__pc_valid) 
                & (IData)(vlSelf->top__DOT__if_ready))) {
        vlSelf->top__DOT__ID_pre_branch = ((IData)(vlSelf->top__DOT__error_pre)
                                            ? 0x80000000ULL
                                            : vlSelf->top__DOT__pre_branch);
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__load_stall)))) {
        vlSelf->top__DOT__ID_pre_branch = 0x80000000ULL;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__ID_pre_jump = 0U;
    } else if (((IData)(vlSelf->top__DOT__pc_valid) 
                & (IData)(vlSelf->top__DOT__if_ready))) {
        vlSelf->top__DOT__ID_pre_jump = ((~ (IData)(vlSelf->top__DOT__error_pre)) 
                                         & (IData)(vlSelf->top__DOT__pre_jump));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__load_stall)))) {
        vlSelf->top__DOT__ID_pre_jump = 0U;
    }
    if (vlSelf->reset) {
        __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v0 = 1U;
        __Vdly__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index = 0U;
        __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v1 = 1U;
    } else if (vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre) {
        if ((3U == (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__jumptype))) {
            __Vdly__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index 
                = (0xfU & ((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index) 
                           - (IData)(1U)));
        } else if ((2U == (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__jumptype))) {
            __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v16 
                = (4ULL + vlSelf->pc);
            __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v16 = 1U;
            __Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v16 
                = vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index;
            __Vdly__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index)));
        }
    }
    if (vlSelf->reset) {
        __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v0 = 1U;
    } else if ((0U != (IData)(vlSelf->top__DOT__jumptype))) {
        __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256[0U] 
            = (((IData)(vlSelf->top__DOT__branch) << 2U) 
               | (IData)(vlSelf->top__DOT__jumptype));
        __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256[1U] 
            = (((IData)(vlSelf->top__DOT__branch) >> 0x1eU) 
               | ((IData)((vlSelf->top__DOT__branch 
                           >> 0x20U)) << 2U));
        __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256[2U] 
            = (((IData)((vlSelf->top__DOT__branch >> 0x20U)) 
                >> 0x1eU) | ((IData)(vlSelf->top__DOT__ID_pc) 
                             << 2U));
        __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256[3U] 
            = ((IData)(vlSelf->top__DOT__ID_pc) >> 0x1eU);
        __Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256 = 1U;
        __Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256 
            = (0xffU & (IData)((vlSelf->top__DOT__ID_pc 
                                >> 2U)));
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
             & (IData)(vlSelf->top__DOT__ex_ready))) {
            vlSelf->top__DOT__MEM_w_data = vlSelf->top__DOT__ex_w_data;
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
            vlSelf->top__DOT__MEM_w_data = 0ULL;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_exop = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_exop = ((IData)(vlSelf->top__DOT__load_stall)
                                      ? 0U : (7U & 
                                              ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                               >> 5U)));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_exop = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WB_pc = 0x80000000ULL;
    } else if (((IData)(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid) 
                & (IData)(vlSelf->top__DOT__mem_ready))) {
        vlSelf->top__DOT__WB_pc = vlSelf->top__DOT__MEM_pc;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__stall)))) {
        vlSelf->top__DOT__WB_pc = 0x80000000ULL;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_data1 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_data1 = ((IData)(vlSelf->top__DOT__load_stall)
                                       ? 0ULL : vlSelf->top__DOT__id_data1);
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_data1 = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_aluop = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_aluop = ((IData)(vlSelf->top__DOT__load_stall)
                                       ? 0U : (0x1fU 
                                               & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1)));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_aluop = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_imm = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_imm = ((IData)(vlSelf->top__DOT__load_stall)
                                     ? 0ULL : vlSelf->top__DOT__id_imm);
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_imm = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_mem_ena = 0U;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_mem_ena = vlSelf->top__DOT__EX_mem_ena;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_mem_ena = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_mem_wr = 0U;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_mem_wr = vlSelf->top__DOT__EX_mem_wr;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_mem_wr = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_memrop = 0U;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_memrop = vlSelf->top__DOT__EX_memrop;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_memrop = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WB_instr = 0U;
    } else if (((IData)(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid) 
                & (IData)(vlSelf->top__DOT__mem_ready))) {
        vlSelf->top__DOT__WB_instr = vlSelf->top__DOT__MEM_instr;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__stall)))) {
        vlSelf->top__DOT__WB_instr = 0U;
    }
    if (vlSelf->reset) {
        __Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v0 = 1U;
    } else if (((IData)(vlSelf->top__DOT__WB_w_ena) 
                & (0U != (IData)(vlSelf->top__DOT__WB_w_addr)))) {
        __Vdlyvval__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32 
            = vlSelf->top__DOT__WB_w_data;
        __Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32 = 1U;
        __Vdlyvdim0__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32 
            = vlSelf->top__DOT__WB_w_addr;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_memwop = 0U;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_memwop = vlSelf->top__DOT__EX_memwop;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_memwop = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_mem_addr = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_mem_addr = vlSelf->top__DOT__ex_mem_addr;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_mem_addr = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_mem_stor_data = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_mem_stor_data = vlSelf->top__DOT__EX_data2;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_mem_stor_data = 0ULL;
    }
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__count 
        = __Vdly__top__DOT__ysyx_22040931_ID__DOT__count;
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__r_count 
        = __Vdly__top__DOT__ysyx_22040931_ID__DOT__r_count;
    if (__Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT__v0) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT[__Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT__v0] 
            = __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT__v0;
    }
    if (__Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT__v0) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT[__Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT__v0] 
            = __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT__v0;
    }
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index 
        = __Vdly__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index;
    if (__Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v0) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0U] = 0x80000000ULL;
    }
    if (__Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v1) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[1U] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[2U] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[3U] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[4U] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[5U] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[6U] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[7U] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[8U] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[9U] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0xaU] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0xbU] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0xcU] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0xdU] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0xeU] = 0x80000000ULL;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0xfU] = 0x80000000ULL;
    }
    if (__Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v16) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[__Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v16] 
            = __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS__v16;
    }
    if (__Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v0) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[1U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[1U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[1U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[1U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[2U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[2U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[2U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[2U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[3U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[3U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[3U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[3U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[4U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[4U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[4U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[4U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[5U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[5U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[5U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[5U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[6U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[6U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[6U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[6U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[7U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[7U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[7U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[7U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[8U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[8U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[8U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[8U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[9U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[9U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[9U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[9U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x10U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x10U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x10U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x10U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x11U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x11U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x11U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x11U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x12U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x12U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x12U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x12U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x13U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x13U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x13U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x13U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x14U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x14U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x14U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x14U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x15U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x15U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x15U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x15U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x16U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x16U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x16U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x16U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x17U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x17U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x17U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x17U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x18U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x18U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x18U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x18U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x19U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x19U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x19U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x19U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1aU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1aU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1aU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1aU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1bU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1bU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1bU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1bU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1cU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1cU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1cU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1cU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1dU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1dU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1dU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1dU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1eU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1eU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1eU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1eU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1fU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1fU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1fU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x1fU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x20U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x20U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x20U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x20U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x21U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x21U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x21U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x21U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x22U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x22U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x22U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x22U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x23U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x23U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x23U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x23U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x24U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x24U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x24U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x24U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x25U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x25U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x25U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x25U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x26U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x26U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x26U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x26U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x27U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x27U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x27U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x27U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x28U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x28U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x28U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x28U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x29U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x29U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x29U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x29U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2aU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2aU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2aU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2aU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2bU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2bU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2bU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2bU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2cU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2cU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2cU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2cU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2dU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2dU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2dU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2dU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2eU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2eU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2eU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2eU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2fU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2fU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2fU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x2fU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x30U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x30U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x30U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x30U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x31U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x31U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x31U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x31U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x32U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x32U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x32U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x32U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x33U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x33U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x33U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x33U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x34U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x34U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x34U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x34U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x35U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x35U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x35U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x35U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x36U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x36U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x36U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x36U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x37U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x37U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x37U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x37U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x38U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x38U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x38U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x38U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x39U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x39U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x39U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x39U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3aU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3aU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3aU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3aU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3bU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3bU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3bU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3bU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3cU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3cU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3cU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3cU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3dU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3dU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3dU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3dU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3eU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3eU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3eU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3eU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3fU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3fU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3fU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x3fU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x40U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x40U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x40U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x40U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x41U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x41U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x41U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x41U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x42U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x42U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x42U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x42U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x43U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x43U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x43U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x43U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x44U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x44U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x44U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x44U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x45U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x45U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x45U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x45U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x46U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x46U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x46U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x46U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x47U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x47U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x47U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x47U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x48U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x48U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x48U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x48U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x49U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x49U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x49U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x49U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4aU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4aU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4aU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4aU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4bU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4bU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4bU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4bU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4cU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4cU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4cU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4cU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4dU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4dU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4dU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4dU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4eU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4eU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4eU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4eU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4fU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4fU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4fU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x4fU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x50U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x50U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x50U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x50U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x51U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x51U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x51U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x51U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x52U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x52U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x52U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x52U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x53U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x53U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x53U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x53U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x54U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x54U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x54U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x54U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x55U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x55U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x55U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x55U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x56U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x56U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x56U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x56U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x57U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x57U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x57U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x57U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x58U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x58U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x58U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x58U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x59U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x59U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x59U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x59U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5aU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5aU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5aU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5aU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5bU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5bU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5bU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5bU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5cU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5cU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5cU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5cU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5dU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5dU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5dU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5dU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5eU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5eU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5eU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5eU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5fU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5fU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5fU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x5fU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x60U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x60U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x60U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x60U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x61U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x61U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x61U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x61U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x62U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x62U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x62U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x62U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x63U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x63U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x63U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x63U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x64U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x64U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x64U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x64U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x65U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x65U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x65U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x65U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x66U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x66U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x66U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x66U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x67U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x67U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x67U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x67U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x68U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x68U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x68U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x68U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x69U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x69U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x69U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x69U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6aU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6aU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6aU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6aU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6bU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6bU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6bU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6bU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6cU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6cU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6cU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6cU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6dU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6dU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6dU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6dU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6eU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6eU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6eU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6eU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6fU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6fU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6fU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x6fU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x70U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x70U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x70U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x70U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x71U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x71U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x71U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x71U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x72U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x72U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x72U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x72U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x73U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x73U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x73U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x73U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x74U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x74U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x74U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x74U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x75U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x75U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x75U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x75U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x76U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x76U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x76U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x76U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x77U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x77U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x77U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x77U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x78U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x78U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x78U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x78U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x79U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x79U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x79U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x79U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7aU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7aU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7aU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7aU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7bU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7bU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7bU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7bU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7cU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7cU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7cU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7cU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7dU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7dU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7dU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7dU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7eU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7eU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7eU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7eU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7fU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7fU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7fU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x7fU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x80U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x80U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x80U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x80U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x81U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x81U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x81U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x81U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x82U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x82U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x82U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x82U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x83U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x83U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x83U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x83U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x84U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x84U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x84U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x84U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x85U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x85U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x85U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x85U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x86U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x86U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x86U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x86U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x87U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x87U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x87U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x87U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x88U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x88U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x88U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x88U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x89U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x89U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x89U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x89U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8aU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8aU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8aU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8aU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8bU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8bU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8bU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8bU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8cU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8cU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8cU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8cU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8dU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8dU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8dU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8dU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8eU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8eU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8eU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8eU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8fU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8fU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8fU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x8fU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x90U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x90U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x90U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x90U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x91U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x91U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x91U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x91U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x92U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x92U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x92U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x92U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x93U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x93U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x93U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x93U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x94U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x94U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x94U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x94U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x95U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x95U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x95U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x95U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x96U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x96U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x96U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x96U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x97U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x97U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x97U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x97U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x98U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x98U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x98U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x98U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x99U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x99U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x99U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x99U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9aU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9aU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9aU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9aU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9bU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9bU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9bU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9bU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9cU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9cU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9cU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9cU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9dU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9dU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9dU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9dU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9eU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9eU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9eU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9eU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9fU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9fU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9fU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0x9fU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa0U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa0U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa0U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa0U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa1U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa1U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa1U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa1U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa2U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa2U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa2U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa2U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa3U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa3U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa3U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa3U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa4U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa4U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa4U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa4U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa5U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa5U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa5U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa5U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa6U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa6U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa6U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa6U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa7U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa7U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa7U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa7U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa8U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa8U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa8U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa8U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa9U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa9U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa9U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xa9U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaaU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaaU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaaU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaaU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xabU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xabU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xabU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xabU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xacU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xacU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xacU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xacU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xadU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xadU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xadU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xadU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaeU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaeU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaeU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xaeU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xafU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xafU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xafU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xafU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb0U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb0U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb0U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb0U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb1U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb1U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb1U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb1U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb2U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb2U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb2U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb2U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb3U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb3U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb3U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb3U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb4U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb4U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb4U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb4U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb5U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb5U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb5U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb5U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb6U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb6U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb6U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb6U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb7U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb7U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb7U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb7U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb8U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb8U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb8U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb8U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb9U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb9U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb9U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xb9U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbaU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbaU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbaU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbaU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbbU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbbU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbbU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbbU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbcU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbcU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbcU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbcU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbdU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbdU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbdU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbdU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbeU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbeU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbeU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbeU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbfU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbfU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbfU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xbfU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc0U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc0U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc0U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc0U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc1U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc1U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc1U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc1U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc2U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc2U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc2U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc2U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc3U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc3U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc3U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc3U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc4U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc4U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc4U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc4U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc5U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc5U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc5U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc5U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc6U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc6U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc6U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc6U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc7U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc7U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc7U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc7U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc8U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc8U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc8U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc8U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc9U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc9U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc9U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xc9U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcaU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcaU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcaU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcaU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcbU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcbU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcbU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcbU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xccU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xccU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xccU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xccU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcdU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcdU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcdU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcdU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xceU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xceU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xceU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xceU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcfU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcfU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcfU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xcfU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd0U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd0U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd0U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd0U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd1U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd1U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd1U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd1U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd2U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd2U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd2U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd2U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd3U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd3U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd3U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd3U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd4U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd4U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd4U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd4U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd5U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd5U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd5U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd5U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd6U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd6U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd6U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd6U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd7U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd7U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd7U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd7U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd8U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd8U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd8U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd8U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd9U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd9U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd9U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xd9U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdaU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdaU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdaU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdaU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdbU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdbU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdbU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdbU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdcU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdcU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdcU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdcU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xddU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xddU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xddU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xddU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdeU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdeU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdeU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdeU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdfU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdfU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdfU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xdfU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe0U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe0U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe0U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe0U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe1U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe1U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe1U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe1U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe2U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe2U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe2U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe2U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe3U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe3U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe3U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe3U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe4U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe4U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe4U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe4U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe5U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe5U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe5U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe5U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe6U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe6U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe6U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe6U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe7U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe7U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe7U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe7U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe8U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe8U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe8U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe8U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe9U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe9U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe9U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xe9U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeaU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeaU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeaU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeaU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xebU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xebU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xebU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xebU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xecU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xecU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xecU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xecU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xedU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xedU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xedU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xedU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeeU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeeU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeeU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xeeU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xefU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xefU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xefU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xefU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf0U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf0U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf0U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf0U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf1U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf1U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf1U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf1U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf2U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf2U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf2U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf2U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf3U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf3U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf3U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf3U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf4U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf4U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf4U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf4U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf5U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf5U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf5U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf5U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf6U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf6U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf6U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf6U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf7U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf7U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf7U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf7U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf8U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf8U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf8U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf8U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf9U][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf9U][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf9U][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xf9U][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfaU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfaU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfaU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfaU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfbU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfbU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfbU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfbU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfcU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfcU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfcU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfcU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfdU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfdU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfdU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfdU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfeU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfeU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfeU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xfeU][3U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xffU][0U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xffU][1U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xffU][2U] = 0U;
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[0xffU][3U] = 0U;
    }
    if (__Vdlyvset__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[__Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256][0U] 
            = __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256[0U];
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[__Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256][1U] 
            = __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256[1U];
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[__Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256][2U] 
            = __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256[2U];
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1[__Vdlyvdim0__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256][3U] 
            = __Vdlyvval__top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1__v256[3U];
    }
    if (__Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v0) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[1U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[2U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[3U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[4U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[5U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[6U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[7U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[8U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[9U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0xaU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0xbU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0xcU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0xdU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0xeU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0xfU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x10U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x11U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x12U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x13U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x14U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x15U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x16U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x17U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x18U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x19U] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x1aU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x1bU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x1cU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x1dU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x1eU] = 0ULL;
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[__Vdlyvdim0__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32] 
            = __Vdlyvval__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("%10#/%10# \346\255\243\347\241\256\347\216\207:%10#  \n\n",
                  32,vlSelf->top__DOT__ysyx_22040931_ID__DOT__r_count,
                  32,vlSelf->top__DOT__ysyx_22040931_ID__DOT__count,
                  32,VL_DIV_III(32, ((IData)(0x64U) 
                                     * vlSelf->top__DOT__ysyx_22040931_ID__DOT__r_count), vlSelf->top__DOT__ysyx_22040931_ID__DOT__count));
    }
    vlSelf->difftest_pc = vlSelf->top__DOT__WB_pc;
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_pc = 0x80000000ULL;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_pc = vlSelf->top__DOT__EX_pc;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_pc = 0x80000000ULL;
    }
    vlSelf->mem_ena = vlSelf->top__DOT__MEM_mem_ena;
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_mem_ena = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_mem_ena = ((~ (IData)(vlSelf->top__DOT__load_stall)) 
                                        & (IData)((
                                                   (0U 
                                                    != 
                                                    (0xeU 
                                                     & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))) 
                                                   | (0U 
                                                      != 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))))));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_mem_ena = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_mem_wr = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_mem_wr = ((~ (IData)(vlSelf->top__DOT__load_stall)) 
                                       & (0U != (7U 
                                                 & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_mem_wr = 0U;
    }
    vlSelf->mem_wr = vlSelf->top__DOT__MEM_mem_wr;
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_memrop = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_memrop = ((IData)(vlSelf->top__DOT__load_stall)
                                        ? 0U : (7U 
                                                & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                   >> 1U)));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_memrop = 0U;
    }
    vlSelf->difftest_instr = vlSelf->top__DOT__WB_instr;
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_instr = 0U;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_instr = vlSelf->top__DOT__EX_instr;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_instr = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WB_w_data = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid) 
                & (IData)(vlSelf->top__DOT__mem_ready))) {
        vlSelf->top__DOT__WB_w_data = vlSelf->top__DOT__mem_w_data;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WB_w_ena = 0U;
    } else if (((IData)(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid) 
                & (IData)(vlSelf->top__DOT__mem_ready))) {
        vlSelf->top__DOT__WB_w_ena = ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                      & (IData)(vlSelf->top__DOT__mem_wb__DOT__mem_now_valid));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__stall)))) {
        vlSelf->top__DOT__WB_w_ena = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WB_w_addr = 0U;
    } else if (((IData)(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid) 
                & (IData)(vlSelf->top__DOT__mem_ready))) {
        vlSelf->top__DOT__WB_w_addr = vlSelf->top__DOT__MEM_w_addr;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_memwop = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_memwop = ((IData)(vlSelf->top__DOT__load_stall)
                                        ? 0U : (7U 
                                                & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_memwop = 0U;
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop 
        = ((IData)(vlSelf->top__DOT__MEM_mem_wr) ? (IData)(vlSelf->top__DOT__MEM_memwop)
            : (IData)(vlSelf->top__DOT__MEM_memrop));
    vlSelf->mem_addr = vlSelf->top__DOT__MEM_mem_addr;
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_data2 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_data2 = ((IData)(vlSelf->top__DOT__load_stall)
                                       ? 0ULL : vlSelf->top__DOT__id_data2);
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_data2 = 0ULL;
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[0U] 
        = (IData)(((QData)((IData)(vlSelf->top__DOT__MEM_mem_stor_data)) 
                   << 0x20U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[1U] 
        = (IData)((((QData)((IData)(vlSelf->top__DOT__MEM_mem_stor_data)) 
                    << 0x20U) >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[2U] 
        = (0xbU | ((IData)((QData)((IData)(vlSelf->top__DOT__MEM_mem_stor_data))) 
                   << 4U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[3U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__MEM_mem_stor_data))) 
            >> 0x1cU) | ((IData)(((QData)((IData)(vlSelf->top__DOT__MEM_mem_stor_data)) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[4U] 
        = (0xa0U | ((IData)(((QData)((IData)(vlSelf->top__DOT__MEM_mem_stor_data)) 
                             >> 0x20U)) >> 0x1cU));
    __Vtemp837[4U] = (0x3400U | ((0x1fU & ((IData)(
                                                   (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                     << 0x10U) 
                                                    >> 0x20U)) 
                                           >> 0x16U)) 
                                 | (((IData)((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                     << 0xfU) | (0x3e0U 
                                                 & ((IData)(
                                                            (((QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                              << 0x10U) 
                                                             >> 0x20U)) 
                                                    >> 0x16U)))));
    __Vtemp837[5U] = ((0x1fU & ((IData)((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                >> 0x11U)) | ((0x3e0U 
                                               & ((IData)((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                                  >> 0x11U)) 
                                              | ((0x7c00U 
                                                  & ((IData)((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                                     >> 0x11U)) 
                                                 | ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                             >> 0x20U)) 
                                                    << 0xfU))));
    __Vtemp837[6U] = (0x60000U | ((0x1fU & ((IData)(
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                     >> 0x20U)) 
                                            >> 0x11U)) 
                                  | ((0x3e0U & ((IData)(
                                                        ((QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                         >> 0x20U)) 
                                                >> 0x11U)) 
                                     | (0x7c00U & ((IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                            >> 0x20U)) 
                                                   >> 0x11U)))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[0U] 
        = (IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                   << 0x30U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[1U] 
        = (IData)((((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                    << 0x30U) >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[2U] 
        = (0xfU | ((IData)(((QData)((IData)((0xffffU 
                                             & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                            << 0x20U)) << 5U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[3U] 
        = (((IData)(((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                     << 0x20U)) >> 0x1bU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                       << 0x20U) 
                                                      >> 0x20U)) 
                                             << 5U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[4U] 
        = (0x1c0U | (((IData)(((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                               << 0x10U)) << 0xaU) 
                     | ((IData)((((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                  << 0x20U) >> 0x20U)) 
                        >> 0x1bU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[5U] 
        = ((0x1fU & ((IData)(((QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                              << 0x10U)) >> 0x16U)) 
           | ((0x3e0U & ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                  << 0x10U)) >> 0x16U)) 
              | ((IData)((((QData)((IData)((0xffffU 
                                            & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                           << 0x10U) >> 0x20U)) << 0xaU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[6U] 
        = __Vtemp837[4U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[7U] 
        = __Vtemp837[5U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[8U] 
        = __Vtemp837[6U];
    __Vtemp844[5U] = (0x900000U | ((0x3fffU & ((IData)(
                                                       (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                         << 8U) 
                                                        >> 0x20U)) 
                                               >> 0xcU)) 
                                   | (((IData)((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                       << 0x1aU) | 
                                      (0xfc000U & ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                             << 8U) 
                                                            >> 0x20U)) 
                                                   >> 0xcU)))));
    __Vtemp844[6U] = ((0x3fffU & ((IData)((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                  >> 6U)) | ((0xfc000U 
                                              & ((IData)((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                                 >> 6U)) 
                                             | ((0x3f00000U 
                                                 & ((IData)((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                                    >> 6U)) 
                                                | ((IData)(
                                                           ((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                            >> 0x20U)) 
                                                   << 0x1aU))));
    __Vtemp844[7U] = (0x20000000U | ((0x3fffU & ((IData)(
                                                         ((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                          >> 0x20U)) 
                                                 >> 6U)) 
                                     | ((0xfc000U & 
                                         ((IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                   >> 0x20U)) 
                                          >> 6U)) | 
                                        (0x3f00000U 
                                         & ((IData)(
                                                    ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                     >> 0x20U)) 
                                            >> 6U)))));
    __Vtemp845[3U] = ((((IData)(((QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                 << 0x10U)) >> 0x14U) 
                       | (0x3ffff000U & ((IData)((((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                   << 0x10U) 
                                                  >> 0x20U)) 
                                         << 0xcU))) 
                      | (0xc0000000U & ((IData)((((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                  << 0x10U) 
                                                 >> 0x20U)) 
                                        << 0xcU)));
    __Vtemp845[4U] = (0xa000U | (((0x3ffc0000U & ((IData)(
                                                          ((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                           << 8U)) 
                                                  << 0x12U)) 
                                  | ((IData)((((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                               << 0x10U) 
                                              >> 0x20U)) 
                                     >> 0x14U)) | (0xc0000000U 
                                                   & ((IData)(
                                                              ((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                               << 8U)) 
                                                      << 0x12U))));
    __Vtemp847[3U] = ((0x30U & ((IData)((0xb0000000000ULL 
                                         | (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))))) 
                                << 4U)) | (0xffffffc0U 
                                           & ((IData)(
                                                      (0xb0000000000ULL 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))))) 
                                              << 4U)));
    __Vtemp847[4U] = ((((IData)((0xb0000000000ULL | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))))) 
                        >> 0x1cU) | (0x30U & ((IData)(
                                                      ((0xb0000000000ULL 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                                       >> 0x20U)) 
                                              << 4U))) 
                      | (((IData)(((QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                   << 0x10U)) << 0x12U) 
                         | (0xffffffc0U & ((IData)(
                                                   ((0xb0000000000ULL 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                                    >> 0x20U)) 
                                           << 4U))));
    __Vtemp847[5U] = ((((0xfU & ((IData)(((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                          << 0x10U)) 
                                 >> 0xeU)) | ((IData)(
                                                      ((0xb0000000000ULL 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->top__DOT__MEM_mem_stor_data))))) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)) 
                       | (0x30U & ((IData)(((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                            << 0x10U)) 
                                   >> 0xeU))) | (__Vtemp845[3U] 
                                                 << 6U));
    __Vtemp847[8U] = (((0xfU & ((IData)((((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                          << 8U) >> 0x20U)) 
                                >> 8U)) | (0x30U & 
                                           (__Vtemp844[5U] 
                                            << 4U))) 
                      | (0xffffffc0U & (__Vtemp844[5U] 
                                        << 4U)));
    __Vtemp849[4U] = (0xc000U | ((0x3fU & ((IData)(
                                                   (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                     << 0x20U) 
                                                    >> 0x20U)) 
                                           >> 0x14U)) 
                                 | (0xfc0U & ((IData)(
                                                      (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                        << 0x20U) 
                                                       >> 0x20U)) 
                                              >> 0x14U))));
    __Vtemp849[9U] = ((0x3fU & (__Vtemp845[4U] >> 0x14U)) 
                      | ((0xfc0U & (__Vtemp845[4U] 
                                    >> 0x14U)) | ((0xfff000U 
                                                   & ((IData)(
                                                              ((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                               << 8U)) 
                                                      >> 2U)) 
                                                  | ((0x3f000000U 
                                                      & ((IData)(
                                                                 ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                                  << 8U)) 
                                                         >> 2U)) 
                                                     | ((IData)(
                                                                (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                                  << 8U) 
                                                                 >> 0x20U)) 
                                                        << 0x1eU)))));
    __Vtemp849[0xaU] = ((0x3fU & ((IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                            << 8U) 
                                           >> 0x20U)) 
                                  >> 2U)) | (__Vtemp847[8U] 
                                             << 6U));
    __Vtemp851[4U] = (0xd000U | ((0x3fU & ((IData)(
                                                   (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                     << 0x28U) 
                                                    >> 0x20U)) 
                                           >> 0x14U)) 
                                 | (((IData)(((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                              << 0x20U)) 
                                     << 0x12U) | (0xfc0U 
                                                  & ((IData)(
                                                             (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                               << 0x28U) 
                                                              >> 0x20U)) 
                                                     >> 0x14U)))));
    __Vtemp851[5U] = ((0x3fU & ((IData)(((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                         << 0x20U)) 
                                >> 0xeU)) | ((0xfc0U 
                                              & ((IData)(
                                                         ((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                          << 0x20U)) 
                                                 >> 0xeU)) 
                                             | ((0x3f000U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                             << 0x20U)) 
                                                    >> 0xeU)) 
                                                | ((IData)(
                                                           (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                             << 0x20U) 
                                                            >> 0x20U)) 
                                                   << 0x12U))));
    __Vtemp851[0xeU] = ((0x3fU & (__Vtemp844[6U] >> 0x10U)) 
                        | ((0xfc0U & (__Vtemp844[6U] 
                                      >> 0x10U)) | 
                           (((0xf000U & (__Vtemp844[6U] 
                                         >> 0x10U)) 
                             | (0x30000U & (__Vtemp844[7U] 
                                            << 0x10U))) 
                            | (0xfffc0000U & (__Vtemp844[7U] 
                                              << 0x10U)))));
    __Vtemp851[0xfU] = ((0x3fU & (__Vtemp844[7U] >> 0x10U)) 
                        | ((0xfc0U & (__Vtemp844[7U] 
                                      >> 0x10U)) | 
                           (0xf000U & (__Vtemp844[7U] 
                                       >> 0x10U))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0U] 
        = (IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                   << 0x38U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[1U] 
        = (IData)((((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                    << 0x38U) >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[2U] 
        = (0xfU | ((IData)(((QData)((IData)((0xffU 
                                             & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                            << 0x30U)) << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[3U] 
        = (((IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                     << 0x30U)) >> 0x1aU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                                       << 0x30U) 
                                                      >> 0x20U)) 
                                             << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[4U] 
        = (0x380U | (((IData)(((QData)((IData)((0xffU 
                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                               << 0x28U)) << 0xcU) 
                     | ((IData)((((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                  << 0x30U) >> 0x20U)) 
                        >> 0x1aU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[5U] 
        = ((0x3fU & ((IData)(((QData)((IData)((0xffU 
                                               & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                              << 0x28U)) >> 0x14U)) 
           | ((0xfc0U & ((IData)(((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                  << 0x28U)) >> 0x14U)) 
              | ((IData)((((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                           << 0x28U) >> 0x20U)) << 0xcU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[6U] 
        = __Vtemp851[4U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[7U] 
        = __Vtemp851[5U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[8U] 
        = ((0x3fU & ((IData)((((QData)((IData)((0xffU 
                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                               << 0x20U) >> 0x20U)) 
                     >> 0xeU)) | (__Vtemp849[4U] << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[9U] 
        = ((__Vtemp849[4U] >> 0x1aU) | (__Vtemp847[3U] 
                                        << 0xcU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xaU] 
        = ((0x3fU & (__Vtemp847[3U] >> 0x14U)) | ((0xfc0U 
                                                   & (__Vtemp847[3U] 
                                                      >> 0x14U)) 
                                                  | (__Vtemp847[4U] 
                                                     << 0xcU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xbU] 
        = ((0x3fU & (__Vtemp847[4U] >> 0x14U)) | ((0xfc0U 
                                                   & (__Vtemp847[4U] 
                                                      >> 0x14U)) 
                                                  | (__Vtemp847[5U] 
                                                     << 0xcU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xcU] 
        = ((0x3fU & (__Vtemp847[5U] >> 0x14U)) | ((0xfc0U 
                                                   & (__Vtemp847[5U] 
                                                      >> 0x14U)) 
                                                  | ((0x3f000U 
                                                      & (__Vtemp845[3U] 
                                                         >> 0xeU)) 
                                                     | (__Vtemp845[4U] 
                                                        << 0x12U))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xdU] 
        = ((0x3fU & (__Vtemp845[4U] >> 0xeU)) | (__Vtemp849[9U] 
                                                 << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xeU] 
        = ((__Vtemp849[9U] >> 0x1aU) | (__Vtemp849[0xaU] 
                                        << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xfU] 
        = ((__Vtemp849[0xaU] >> 0x1aU) | ((0xfc0U & 
                                           (__Vtemp847[8U] 
                                            >> 0x14U)) 
                                          | (((0xf000U 
                                               & (__Vtemp844[5U] 
                                                  >> 0x10U)) 
                                              | (0x30000U 
                                                 & (__Vtemp844[6U] 
                                                    << 0x10U))) 
                                             | (0xfffc0000U 
                                                & (__Vtemp844[6U] 
                                                   << 0x10U)))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0x10U] 
        = __Vtemp851[0xeU];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0x11U] 
        = __Vtemp851[0xfU];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
                       == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
           == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
                          == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
                          == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
                          == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
                          == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
                          == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
                          == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->memop = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit)
                      ? (IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out)
                      : 0U);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2 
        = (((IData)(vlSelf->top__DOT__MEM_memwop) << 3U) 
           | (7U & (IData)(vlSelf->mem_addr)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2 
        = (((IData)(vlSelf->top__DOT__MEM_memwop) << 2U) 
           | (3U & (IData)((vlSelf->mem_addr >> 1U))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2 
        = (((IData)(vlSelf->top__DOT__MEM_memwop) << 1U) 
           | (1U & (IData)((vlSelf->mem_addr >> 2U))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[2U] 
                         >> 4U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[3U] 
                         >> 4U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4[4U] 
                   >> 4U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[0U][2U] 
        = (0x1fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[3U] 
            << 0x1bU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[2U] 
                         >> 5U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[4U] 
            << 0x1bU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[3U] 
                         >> 5U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[1U][2U] 
        = (0x1fU & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[4U] 
                    >> 5U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[5U] 
            << 0x16U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[4U] 
                         >> 0xaU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[6U] 
            << 0x16U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[5U] 
                         >> 0xaU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[2U][2U] 
        = (0x1fU & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[6U] 
                    >> 0xaU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[7U] 
            << 0x11U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[6U] 
                         >> 0xfU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[8U] 
            << 0x11U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[7U] 
                         >> 0xfU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[3U][2U] 
        = (0x1fU & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[8U] 
                    >> 0xfU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[0U][2U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[3U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[2U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[4U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[3U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[1U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[4U] 
                    >> 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[5U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[4U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[6U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[5U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[2U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[6U] 
                    >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[7U] 
            << 0xeU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[6U] 
                        >> 0x12U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[8U] 
            << 0xeU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[7U] 
                        >> 0x12U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[3U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[8U] 
                    >> 0x12U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[9U] 
            << 8U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[8U] 
                      >> 0x18U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xaU] 
            << 8U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[9U] 
                      >> 0x18U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[4U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xaU] 
                    >> 0x18U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xbU] 
            << 2U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xaU] 
                      >> 0x1eU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xcU] 
            << 2U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xbU] 
                      >> 0x1eU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[5U][2U] 
        = (0x3fU & ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xdU] 
                     << 2U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xcU] 
                               >> 0x1eU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xeU] 
            << 0x1cU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xdU] 
                         >> 4U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xfU] 
            << 0x1cU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xeU] 
                         >> 4U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[6U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xfU] 
                    >> 4U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0x10U] 
            << 0x16U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xfU] 
                         >> 0xaU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0x11U] 
            << 0x16U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0x10U] 
                         >> 0xaU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[7U][2U] 
        = (0x3fU & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0x11U] 
                    >> 0xaU));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_pc = 0x80000000ULL;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_pc = ((IData)(vlSelf->top__DOT__load_stall)
                                    ? 0x80000000ULL
                                    : vlSelf->top__DOT__ID_pc);
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_pc = 0x80000000ULL;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_instr = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_instr = ((IData)(vlSelf->top__DOT__load_stall)
                                       ? 0U : vlSelf->top__DOT__ID_instr);
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_instr = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__mem_wb__DOT__mem_now_valid = 0U;
    } else if (vlSelf->top__DOT__mem_ready) {
        vlSelf->top__DOT__mem_wb__DOT__mem_now_valid 
            = vlSelf->top__DOT__ex_mem__DOT__ex_now_valid;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_w_ena = 0U;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_w_ena = vlSelf->top__DOT__EX_w_ena;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_w_ena = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_w_addr = 0U;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_w_addr = vlSelf->top__DOT__EX_w_addr;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_w_addr = 0U;
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[0U] 
        = (0x1fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[1U] 
        = (0x1fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[2U] 
        = (0x1fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[3U] 
        = (0x1fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[0U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[1U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[2U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[3U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[4U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[5U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[6U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[7U] 
        = (0x3fU & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2) 
                               == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2) 
           == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit)
            ? vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out
            : 0ULL);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2) 
                               == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2) 
           == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit)
            ? vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out
            : 0ULL);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
                               == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
           == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit)
            ? vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out
            : 0ULL);
    if (vlSelf->reset) {
        vlSelf->top__DOT__ID_pc = 0x80000000ULL;
    } else if (((IData)(vlSelf->top__DOT__pc_valid) 
                & (IData)(vlSelf->top__DOT__if_ready))) {
        vlSelf->top__DOT__ID_pc = ((IData)(vlSelf->top__DOT__error_pre)
                                    ? 0x80000000ULL
                                    : vlSelf->pc);
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__load_stall)))) {
        vlSelf->top__DOT__ID_pc = 0x80000000ULL;
    }
    VL_EXTEND_WQ(65,64, __Vtemp958, vlSelf->top__DOT__EX_data1);
    VL_EXTEND_WQ(65,64, __Vtemp959, vlSelf->top__DOT__EX_data2);
    VL_SUB_W(3, __Vtemp960, __Vtemp958, __Vtemp959);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
        = ((0x10U & (IData)(vlSelf->top__DOT__EX_aluop))
            ? ((8U & (IData)(vlSelf->top__DOT__EX_aluop))
                ? ((4U & (IData)(vlSelf->top__DOT__EX_aluop))
                    ? 0ULL : ((2U & (IData)(vlSelf->top__DOT__EX_aluop))
                               ? ((1U & (IData)(vlSelf->top__DOT__EX_aluop))
                                   ? (QData)((IData)(
                                                     VL_DIVS_III(32, (IData)(vlSelf->top__DOT__EX_data1), (IData)(vlSelf->top__DOT__EX_data2))))
                                   : VL_DIV_QQQ(64, vlSelf->top__DOT__EX_data1, vlSelf->top__DOT__EX_data2))
                               : ((1U & (IData)(vlSelf->top__DOT__EX_aluop))
                                   ? VL_DIVS_QQQ(64, vlSelf->top__DOT__EX_data1, vlSelf->top__DOT__EX_data2)
                                   : 0ULL))) : ((4U 
                                                 & (IData)(vlSelf->top__DOT__EX_aluop))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__EX_aluop))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EX_aluop))
                                                   ? 0ULL
                                                   : 0ULL)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EX_aluop))
                                                   ? 
                                                  (vlSelf->top__DOT__EX_data1 
                                                   * vlSelf->top__DOT__EX_data2)
                                                   : 
                                                  VL_MODDIVS_QQQ(64, vlSelf->top__DOT__EX_data1, vlSelf->top__DOT__EX_data2)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__EX_aluop))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EX_aluop))
                                                   ? 
                                                  VL_MODDIV_QQQ(64, vlSelf->top__DOT__EX_data1, vlSelf->top__DOT__EX_data2)
                                                   : (QData)((IData)(
                                                                     VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__EX_data1), (IData)(vlSelf->top__DOT__EX_data2)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__EX_aluop))
                                                   ? (QData)((IData)(
                                                                     VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__EX_data1), (IData)(vlSelf->top__DOT__EX_data2))))
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__EX_pc)))))
            : ((8U & (IData)(vlSelf->top__DOT__EX_aluop))
                ? ((4U & (IData)(vlSelf->top__DOT__EX_aluop))
                    ? ((2U & (IData)(vlSelf->top__DOT__EX_aluop))
                        ? ((1U & (IData)(vlSelf->top__DOT__EX_aluop))
                            ? (vlSelf->top__DOT__EX_data1 
                               + vlSelf->top__DOT__EX_imm)
                            : (vlSelf->top__DOT__EX_data2 
                               + vlSelf->top__DOT__EX_pc))
                        : ((1U & (IData)(vlSelf->top__DOT__EX_aluop))
                            ? (QData)((IData)(((IData)(vlSelf->top__DOT__EX_data1) 
                                               >> (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__EX_data2)))))
                            : (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__EX_data1 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__EX_data1), 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->top__DOT__EX_data2))))))))
                    : ((2U & (IData)(vlSelf->top__DOT__EX_aluop))
                        ? ((1U & (IData)(vlSelf->top__DOT__EX_aluop))
                            ? (vlSelf->top__DOT__EX_data1 
                               << (0x1fU & (IData)(vlSelf->top__DOT__EX_data2)))
                            : VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__EX_data1, 
                                             (0x3fU 
                                              & (IData)(vlSelf->top__DOT__EX_data2))))
                        : ((1U & (IData)(vlSelf->top__DOT__EX_aluop))
                            ? (vlSelf->top__DOT__EX_data1 
                               >> (0x3fU & (IData)(vlSelf->top__DOT__EX_data2)))
                            : (vlSelf->top__DOT__EX_data1 
                               << (0x3fU & (IData)(vlSelf->top__DOT__EX_data2))))))
                : ((4U & (IData)(vlSelf->top__DOT__EX_aluop))
                    ? ((2U & (IData)(vlSelf->top__DOT__EX_aluop))
                        ? ((1U & (IData)(vlSelf->top__DOT__EX_aluop))
                            ? (QData)((IData)((1U & 
                                               __Vtemp960[2U])))
                            : (QData)((IData)((1U & (IData)(
                                                            ((vlSelf->top__DOT__EX_data1 
                                                              - vlSelf->top__DOT__EX_data2) 
                                                             >> 0x3fU))))))
                        : ((1U & (IData)(vlSelf->top__DOT__EX_aluop))
                            ? (vlSelf->top__DOT__EX_data1 
                               | vlSelf->top__DOT__EX_data2)
                            : (vlSelf->top__DOT__EX_data1 
                               ^ vlSelf->top__DOT__EX_data2)))
                    : ((2U & (IData)(vlSelf->top__DOT__EX_aluop))
                        ? ((1U & (IData)(vlSelf->top__DOT__EX_aluop))
                            ? (vlSelf->top__DOT__EX_data1 
                               & vlSelf->top__DOT__EX_data2)
                            : (vlSelf->top__DOT__EX_data1 
                               - vlSelf->top__DOT__EX_data2))
                        : ((1U & (IData)(vlSelf->top__DOT__EX_aluop))
                            ? (vlSelf->top__DOT__EX_data1 
                               + vlSelf->top__DOT__EX_data2)
                            : 0ULL)))));
    vlSelf->top__DOT__mem_ready = (1U & ((~ ((IData)(vlSelf->top__DOT__mem_wb__DOT__mem_now_valid) 
                                             & (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__flush)))) 
                                         | (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__stall))));
    if (vlSelf->reset) {
        vlSelf->top__DOT__ex_mem__DOT__ex_now_valid = 0U;
    } else if (vlSelf->top__DOT__ex_ready) {
        vlSelf->top__DOT__ex_mem__DOT__ex_now_valid 
            = vlSelf->top__DOT__id_ex__DOT__id_now_valid;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_w_ena = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_w_ena = (1U & ((~ (IData)(vlSelf->top__DOT__load_stall)) 
                                            & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                               >> 0xaU)));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_w_ena = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_w_addr = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_w_addr = ((IData)(vlSelf->top__DOT__load_stall)
                                        ? 0U : (0x1fU 
                                                & (vlSelf->top__DOT__ID_instr 
                                                   >> 7U)));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_w_addr = 0U;
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__MEM_mem_stor_data);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__MEM_mem_stor_data 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[2U] 
        = (7U | ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for) 
                 << 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for) 
            >> 0x1dU) | ((IData)((vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[4U] 
        = (0x28U | (((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two) 
                     << 6U) | ((IData)((vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[5U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two) 
            >> 0x1aU) | ((IData)((vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[6U] 
        = (0xc0U | (((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one) 
                     << 9U) | ((IData)((vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two 
                                        >> 0x20U)) 
                               >> 0x1aU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[7U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one) 
            >> 0x17U) | ((IData)((vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one 
                                  >> 0x20U)) << 9U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[8U] 
        = (0x200U | ((IData)((vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one 
                              >> 0x20U)) >> 0x17U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[2U] 
        = (4U | ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result) 
                 << 3U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result) 
            >> 0x1dU) | ((IData)((vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[4U] 
        = (0x28U | ((IData)((vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
                             >> 0x20U)) >> 0x1dU));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__EX_imm);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__EX_imm >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[2U] 
        = (2U | ((IData)((((QData)((IData)((- (IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
                                                                  >> 0x1fU))))))) 
                           << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result)))) 
                 << 3U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[3U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result)))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[4U] 
        = (0x30U | (((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result) 
                     << 6U) | ((IData)(((((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[5U] 
        = ((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result) 
                  >> 0x1aU)) | ((0x38U & ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result) 
                                          >> 0x1aU)) 
                                | ((IData)((vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
                                            >> 0x20U)) 
                                   << 6U)));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[6U] 
        = (0x1c0U | ((7U & ((IData)((vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
                                     >> 0x20U)) >> 0x1aU)) 
                     | (0x38U & ((IData)((vlSelf->top__DOT__ysyx_22040931_EX__DOT__result 
                                          >> 0x20U)) 
                                 >> 0x1aU))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[7U] 
            << 0x17U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[6U] 
                         >> 9U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[8U] 
            << 0x17U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[7U] 
                         >> 9U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4[8U] 
                 >> 9U));
    if (vlSelf->fetch_enb) {
        if (vlSelf->top__DOT__pc_ready) {
            vlSelf->pc = vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_i;
        }
    } else {
        vlSelf->pc = 0x80000000ULL;
    }
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_hash 
        = (0xffU & ((((IData)((vlSelf->top__DOT__ID_pc 
                               >> 0x1aU)) + (IData)(
                                                    (vlSelf->top__DOT__ID_pc 
                                                     >> 0x12U))) 
                     + (IData)((vlSelf->top__DOT__ID_pc 
                                >> 0xaU))) + (IData)(
                                                     (vlSelf->top__DOT__ID_pc 
                                                      >> 2U))));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__ex_ready = (1U & ((~ ((IData)(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid) 
                                            & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__flush)))) 
                                        | ((~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)) 
                                           & (IData)(vlSelf->top__DOT__mem_ready))));
    if (vlSelf->reset) {
        vlSelf->top__DOT__id_ex__DOT__id_now_valid = 0U;
    } else if (vlSelf->top__DOT__id_ready) {
        vlSelf->top__DOT__id_ex__DOT__id_now_valid 
            = vlSelf->top__DOT__if_id__DOT__if_now_valid;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__ID_instr = 0U;
    } else if (((IData)(vlSelf->top__DOT__pc_valid) 
                & (IData)(vlSelf->top__DOT__if_ready))) {
        vlSelf->top__DOT__ID_instr = ((IData)(vlSelf->top__DOT__error_pre)
                                       ? 0U : vlSelf->instr);
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__load_stall)))) {
        vlSelf->top__DOT__ID_instr = 0U;
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index 
        = (0xffU & ((IData)((vlSelf->top__DOT__ID_pc 
                             >> 3U)) ^ vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT
                    [vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_hash]));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memwop) 
                               == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__MEM_memwop) == 
           vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memwop) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__MEM_memwop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memwop) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__MEM_memwop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memwop) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__MEM_memwop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->mem_stor_data = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit)
                              ? vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out
                              : 0ULL);
    vlSelf->fetch_enb = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__jumptype 
        = (3U & vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
           [(0xffU & (IData)((vlSelf->pc >> 2U)))][0U]);
    vlSelf->top__DOT__pre_branch = ((3U == (3U & vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                            [(0xffU 
                                              & (IData)(
                                                        (vlSelf->pc 
                                                         >> 2U)))][0U]))
                                     ? vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS
                                    [(0xfU & ((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index) 
                                              - (IData)(1U)))]
                                     : (((QData)((IData)(
                                                         vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                                         [
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->pc 
                                                                     >> 2U)))][2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                                            [
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelf->pc 
                                                                        >> 2U)))][1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                                              [
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->pc 
                                                                          >> 2U)))][0U])) 
                                              >> 2U))));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__EX_exop) 
                               == vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__EX_exop) == vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__EX_exop) 
                                  == vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__EX_exop) == 
              vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ex_mem_addr = ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit)
                                      ? vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out
                                      : 0x80000000ULL);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__EX_exop) 
                               == vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__EX_exop) == vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__EX_exop) 
                                  == vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__EX_exop) == 
              vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__EX_exop) 
                                  == vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__EX_exop) == 
              vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ex_w_data = ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit)
                                    ? vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out
                                    : 0ULL);
    vlSelf->top__DOT__id_ready = (1U & ((~ ((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                                            & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__flush)))) 
                                        | ((~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)) 
                                           & (IData)(vlSelf->top__DOT__ex_ready))));
    if (vlSelf->reset) {
        vlSelf->top__DOT__if_id__DOT__if_now_valid = 0U;
    } else if (vlSelf->top__DOT__if_ready) {
        vlSelf->top__DOT__if_id__DOT__if_now_valid 
            = vlSelf->top__DOT__pc_valid;
    }
    vlSelf->top__DOT__load_stall = (((IData)(vlSelf->top__DOT__EX_w_addr) 
                                     == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                  >> 0xfU)))
                                     ? ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                        & (((IData)(vlSelf->top__DOT__EX_w_ena) 
                                            & (IData)(vlSelf->top__DOT__EX_mem_ena)) 
                                           & (IData)(vlSelf->top__DOT__EX_mem_ena)))
                                     : (((IData)(vlSelf->top__DOT__EX_w_addr) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__ID_instr 
                                                >> 0x14U))) 
                                        & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                           & (((IData)(vlSelf->top__DOT__EX_w_ena) 
                                               & (IData)(vlSelf->top__DOT__EX_mem_ena)) 
                                              & (IData)(vlSelf->top__DOT__EX_mem_ena)))));
    __Vtemp1040[4U] = (0x1c0U | ((7U & ((IData)((((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->top__DOT__ID_instr 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->top__DOT__ID_instr 
                                                                     >> 0x14U)))) 
                                                 >> 0x20U)) 
                                        >> 0x1aU)) 
                                 | (0x38U & ((IData)(
                                                     ((((- (QData)((IData)(
                                                                           (vlSelf->top__DOT__ID_instr 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (vlSelf->top__DOT__ID_instr 
                                                                          >> 0x14U)))) 
                                                      >> 0x20U)) 
                                             >> 0x1aU))));
    __Vtemp1041[1U] = (((IData)((((- (QData)((IData)(
                                                     (vlSelf->top__DOT__ID_instr 
                                                      >> 0x1fU)))) 
                                  << 0xdU) | (QData)((IData)(
                                                             ((0x1000U 
                                                               & (vlSelf->top__DOT__ID_instr 
                                                                  >> 0x13U)) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top__DOT__ID_instr 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->top__DOT__ID_instr 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->top__DOT__ID_instr 
                                                                          >> 7U))))))))) 
                        >> 0x1dU) | ((IData)(((((- (QData)((IData)(
                                                                   (vlSelf->top__DOT__ID_instr 
                                                                    >> 0x1fU)))) 
                                                << 0xdU) 
                                               | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & (vlSelf->top__DOT__ID_instr 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->top__DOT__ID_instr 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top__DOT__ID_instr 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top__DOT__ID_instr 
                                                                              >> 7U)))))))) 
                                              >> 0x20U)) 
                                     << 3U));
    __Vtemp1042[2U] = (0x28U | (((IData)((((- (QData)((IData)(
                                                              (vlSelf->top__DOT__ID_instr 
                                                               >> 0x1fU)))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            ((0xfe0U 
                                                              & (vlSelf->top__DOT__ID_instr 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (vlSelf->top__DOT__ID_instr 
                                                                   >> 7U))))))) 
                                 << 6U) | ((IData)(
                                                   ((((- (QData)((IData)(
                                                                         (vlSelf->top__DOT__ID_instr 
                                                                          >> 0x1fU)))) 
                                                      << 0xdU) 
                                                     | (QData)((IData)(
                                                                       ((0x1000U 
                                                                         & (vlSelf->top__DOT__ID_instr 
                                                                            >> 0x13U)) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->top__DOT__ID_instr 
                                                                               << 4U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->top__DOT__ID_instr 
                                                                                >> 0x14U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->top__DOT__ID_instr 
                                                                                >> 7U)))))))) 
                                                    >> 0x20U)) 
                                           >> 0x1dU)));
    __Vtemp1042[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__ID_instr 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->top__DOT__ID_instr 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->top__DOT__ID_instr 
                                                                          >> 7U))))))) 
                              >> 0x1aU)) | ((0x38U 
                                             & ((IData)(
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->top__DOT__ID_instr 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0xfe0U 
                                                                             & (vlSelf->top__DOT__ID_instr 
                                                                                >> 0x14U)) 
                                                                            | (0x1fU 
                                                                               & (vlSelf->top__DOT__ID_instr 
                                                                                >> 7U))))))) 
                                                >> 0x1aU)) 
                                            | ((IData)(
                                                       ((((- (QData)((IData)(
                                                                             (vlSelf->top__DOT__ID_instr 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0xfe0U 
                                                                             & (vlSelf->top__DOT__ID_instr 
                                                                                >> 0x14U)) 
                                                                            | (0x1fU 
                                                                               & (vlSelf->top__DOT__ID_instr 
                                                                                >> 7U)))))) 
                                                        >> 0x20U)) 
                                               << 6U)));
    __Vtemp1042[4U] = (0x180U | ((7U & ((IData)((((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->top__DOT__ID_instr 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top__DOT__ID_instr 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top__DOT__ID_instr 
                                                                           >> 7U)))))) 
                                                 >> 0x20U)) 
                                        >> 0x1aU)) 
                                 | (((IData)((((- (QData)((IData)(
                                                                  (vlSelf->top__DOT__ID_instr 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (vlSelf->top__DOT__ID_instr 
                                                                 >> 0x14U))))) 
                                     << 9U) | (0x38U 
                                               & ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSelf->top__DOT__ID_instr 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              ((0xfe0U 
                                                                                & (vlSelf->top__DOT__ID_instr 
                                                                                >> 0x14U)) 
                                                                               | (0x1fU 
                                                                                & (vlSelf->top__DOT__ID_instr 
                                                                                >> 7U)))))) 
                                                           >> 0x20U)) 
                                                  >> 0x1aU)))));
    __Vtemp1042[5U] = ((7U & ((IData)((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__ID_instr 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->top__DOT__ID_instr 
                                                                    >> 0x14U))))) 
                              >> 0x17U)) | ((0x38U 
                                             & ((IData)(
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->top__DOT__ID_instr 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           (vlSelf->top__DOT__ID_instr 
                                                                            >> 0x14U))))) 
                                                >> 0x17U)) 
                                            | ((0x1c0U 
                                                & ((IData)(
                                                           (((- (QData)((IData)(
                                                                                (vlSelf->top__DOT__ID_instr 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->top__DOT__ID_instr 
                                                                               >> 0x14U))))) 
                                                   >> 0x17U)) 
                                               | ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSelf->top__DOT__ID_instr 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->top__DOT__ID_instr 
                                                                               >> 0x14U)))) 
                                                           >> 0x20U)) 
                                                  << 9U))));
    __Vtemp1042[6U] = ((7U & ((IData)(((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__ID_instr 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top__DOT__ID_instr 
                                                                     >> 0x14U)))) 
                                       >> 0x20U)) >> 0x17U)) 
                       | (__Vtemp1040[4U] << 3U));
    __Vtemp1043[1U] = (((IData)((((- (QData)((IData)(
                                                     (vlSelf->top__DOT__ID_instr 
                                                      >> 0x1fU)))) 
                                  << 0x15U) | (QData)((IData)(
                                                              ((0x100000U 
                                                                & (vlSelf->top__DOT__ID_instr 
                                                                   >> 0xbU)) 
                                                               | ((0xff000U 
                                                                   & vlSelf->top__DOT__ID_instr) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->top__DOT__ID_instr 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->top__DOT__ID_instr 
                                                                           >> 0x14U))))))))) 
                        >> 0x1dU) | ((IData)(((((- (QData)((IData)(
                                                                   (vlSelf->top__DOT__ID_instr 
                                                                    >> 0x1fU)))) 
                                                << 0x15U) 
                                               | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & (vlSelf->top__DOT__ID_instr 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & vlSelf->top__DOT__ID_instr) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->top__DOT__ID_instr 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->top__DOT__ID_instr 
                                                                              >> 0x14U)))))))) 
                                              >> 0x20U)) 
                                     << 3U));
    __Vtemp1044[2U] = (0x20U | (((IData)((((- (QData)((IData)(
                                                              (vlSelf->top__DOT__ID_instr 
                                                               >> 0x1fU)))) 
                                           << 0xdU) 
                                          | (QData)((IData)(
                                                            ((0x1000U 
                                                              & (vlSelf->top__DOT__ID_instr 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (vlSelf->top__DOT__ID_instr 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->top__DOT__ID_instr 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->top__DOT__ID_instr 
                                                                         >> 7U))))))))) 
                                 << 6U) | ((IData)(
                                                   ((((- (QData)((IData)(
                                                                         (vlSelf->top__DOT__ID_instr 
                                                                          >> 0x1fU)))) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(
                                                                       ((0x100000U 
                                                                         & (vlSelf->top__DOT__ID_instr 
                                                                            >> 0xbU)) 
                                                                        | ((0xff000U 
                                                                            & vlSelf->top__DOT__ID_instr) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->top__DOT__ID_instr 
                                                                                >> 9U)) 
                                                                              | (0x7feU 
                                                                                & (vlSelf->top__DOT__ID_instr 
                                                                                >> 0x14U)))))))) 
                                                    >> 0x20U)) 
                                           >> 0x1dU)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[0U] 
        = (IData)((((QData)((IData)((- (IData)((vlSelf->top__DOT__ID_instr 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->top__DOT__ID_instr)))));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[1U] 
        = (IData)(((((QData)((IData)((- (IData)((vlSelf->top__DOT__ID_instr 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)((0xfffff000U 
                                                  & vlSelf->top__DOT__ID_instr)))) 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[2U] 
        = (3U | ((IData)((((- (QData)((IData)((vlSelf->top__DOT__ID_instr 
                                               >> 0x1fU)))) 
                           << 0x15U) | (QData)((IData)(
                                                       ((0x100000U 
                                                         & (vlSelf->top__DOT__ID_instr 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSelf->top__DOT__ID_instr) 
                                                           | ((0x800U 
                                                               & (vlSelf->top__DOT__ID_instr 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->top__DOT__ID_instr 
                                                                    >> 0x14U))))))))) 
                 << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[3U] 
        = __Vtemp1043[1U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[4U] 
        = __Vtemp1044[2U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[5U] 
        = ((7U & ((IData)((((- (QData)((IData)((vlSelf->top__DOT__ID_instr 
                                                >> 0x1fU)))) 
                            << 0xdU) | (QData)((IData)(
                                                       ((0x1000U 
                                                         & (vlSelf->top__DOT__ID_instr 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->top__DOT__ID_instr 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->top__DOT__ID_instr 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->top__DOT__ID_instr 
                                                                    >> 7U))))))))) 
                  >> 0x1aU)) | (__Vtemp1041[1U] << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[6U] 
        = ((__Vtemp1041[1U] >> 0x1dU) | (__Vtemp1042[2U] 
                                         << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[7U] 
        = ((__Vtemp1042[2U] >> 0x1dU) | (__Vtemp1042[3U] 
                                         << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[8U] 
        = ((__Vtemp1042[3U] >> 0x1dU) | (__Vtemp1042[4U] 
                                         << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[9U] 
        = ((__Vtemp1042[4U] >> 0x1dU) | (__Vtemp1042[5U] 
                                         << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[0xaU] 
        = ((__Vtemp1042[5U] >> 0x1dU) | (__Vtemp1042[6U] 
                                         << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__ID_instr) 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__ID_instr) == 
           vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__ID_instr) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__ID_instr) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__ID_instr) 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__ID_instr) == 
           vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
        = ((0x1fc00U & (vlSelf->top__DOT__ID_instr 
                        >> 0xfU)) | ((0x380U & (vlSelf->top__DOT__ID_instr 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->top__DOT__ID_instr)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose 
        = ((0x380U & (vlSelf->top__DOT__ID_instr >> 5U)) 
           | (0x7fU & vlSelf->top__DOT__ID_instr));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2 
        = ((0xfc00U & (vlSelf->top__DOT__ID_instr >> 0x10U)) 
           | ((0x380U & (vlSelf->top__DOT__ID_instr 
                         >> 5U)) | (0x7fU & vlSelf->top__DOT__ID_instr)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
        = ((0x1fc00U & (vlSelf->top__DOT__ID_instr 
                        >> 0xfU)) | ((0x380U & (vlSelf->top__DOT__ID_instr 
                                                >> 5U)) 
                                     | (0x7fU & vlSelf->top__DOT__ID_instr)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4 
        = ((0x3f800U & (vlSelf->top__DOT__ID_instr 
                        >> 0xeU)) | ((0x400U & (vlSelf->top__DOT__ID_instr 
                                                >> 0xaU)) 
                                     | ((0x380U & (vlSelf->top__DOT__ID_instr 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->top__DOT__ID_instr))));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1 
        = ((0x380U & (vlSelf->top__DOT__ID_instr >> 5U)) 
           | (0x7fU & vlSelf->top__DOT__ID_instr));
    Vtop___024root____Vdpiimwrap_top__DOT__mem_read_TOP(vlSelf->mem_addr, vlSelf->__Vtask_top__DOT__mem_read__4__rdata);
    vlSelf->top__DOT__rdata = vlSelf->__Vtask_top__DOT__mem_read__4__rdata;
    Vtop___024root____Vdpiimwrap_top__DOT__mem_write_TOP(vlSelf->mem_addr, vlSelf->mem_stor_data, 
                                                         ((3U 
                                                           == (IData)(vlSelf->memop))
                                                           ? 0xffU
                                                           : 
                                                          (0xffU 
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
                                                                 : 0U))))));
    vlSelf->top__DOT__pc_valid = ((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid) 
                                  & (~ (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[7U] 
            << 0x17U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[6U] 
                         >> 9U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[8U] 
            << 0x17U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[7U] 
                         >> 9U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[8U] 
                 >> 9U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[9U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[0xaU] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x10U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x11U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x12U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x13U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x14U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x15U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x16U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x17U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x17U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x17U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x18U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x18U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x18U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x19U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x19U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x19U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x1aU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x1aU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x1aU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
                          [0x1bU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list
              [0x1bU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list
              [0x1bU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2) 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out 
        = ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out 
        = ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out) 
           | ((- (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit) 
           | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [7U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [7U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [8U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [8U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [9U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [9U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out)
            : 0U);
    __Vtemp1178[6U] = (0x400U | ((0x3fU & ((IData)(
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__rdata)))) 
                                                    >> 0x20U)) 
                                           >> 0x17U)) 
                                 | (((IData)((((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__rdata 
                                                                              >> 7U)))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->top__DOT__rdata)))))) 
                                     << 0xcU) | (0x1c0U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->top__DOT__rdata)))) 
                                                             >> 0x20U)) 
                                                    >> 0x17U)))));
    __Vtemp1178[7U] = ((0x3fU & ((IData)((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__rdata 
                                                                          >> 7U)))))) 
                                           << 8U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__rdata)))))) 
                                 >> 0x14U)) | ((0xfc0U 
                                                & ((IData)(
                                                           (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 7U)))))) 
                                                             << 8U) 
                                                            | (QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->top__DOT__rdata)))))) 
                                                   >> 0x14U)) 
                                               | ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 7U)))))) 
                                                             << 8U) 
                                                            | (QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->top__DOT__rdata))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU)));
    __Vtemp1178[8U] = (0x1000U | ((0x3fU & ((IData)(
                                                    ((((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 7U)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top__DOT__rdata))))) 
                                                     >> 0x20U)) 
                                            >> 0x14U)) 
                                  | (0xfc0U & ((IData)(
                                                       ((((- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 7U)))))) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->top__DOT__rdata))))) 
                                                        >> 0x20U)) 
                                               >> 0x14U))));
    __Vtemp1183[8U] = (0x800U | ((0x3fU & ((IData)(
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__rdata)))) 
                                                    >> 0x20U)) 
                                           >> 0x17U)) 
                                 | (((IData)((((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__rdata 
                                                                              >> 0xfU)))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__rdata)))))) 
                                     << 0xcU) | (0x1c0U 
                                                 & ((IData)(
                                                            ((QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->top__DOT__rdata)))) 
                                                             >> 0x20U)) 
                                                    >> 0x17U)))));
    __Vtemp1183[9U] = ((0x3fU & ((IData)((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__rdata 
                                                                          >> 0xfU)))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->top__DOT__rdata)))))) 
                                 >> 0x14U)) | ((0xfc0U 
                                                & ((IData)(
                                                           (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->top__DOT__rdata)))))) 
                                                   >> 0x14U)) 
                                               | ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->top__DOT__rdata))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU)));
    __Vtemp1183[0xaU] = (0x3000U | ((0x3fU & ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->top__DOT__rdata))))) 
                                                       >> 0x20U)) 
                                              >> 0x14U)) 
                                    | (((IData)((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->top__DOT__rdata))))) 
                                        << 0xfU) | 
                                       (0xfc0U & ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & (IData)(vlSelf->top__DOT__rdata))))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U)))));
    __Vtemp1183[0xbU] = ((0x3fU & ((IData)((QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->top__DOT__rdata))))) 
                                   >> 0x11U)) | ((0xfc0U 
                                                  & ((IData)((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->top__DOT__rdata))))) 
                                                     >> 0x11U)) 
                                                 | ((0x7000U 
                                                     & ((IData)((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__rdata))))) 
                                                        >> 0x11U)) 
                                                    | ((IData)(
                                                               ((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__rdata)))) 
                                                                >> 0x20U)) 
                                                       << 0xfU))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__rdata);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__rdata >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[2U] 
        = (7U | ((IData)((QData)((IData)(vlSelf->top__DOT__rdata))) 
                 << 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[3U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__rdata))) 
            >> 0x1dU) | ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[4U] 
        = (0x30U | (((IData)((((QData)((IData)((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__rdata 
                                                                      >> 0x1fU))))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rdata)))) 
                     << 6U) | ((IData)(((QData)((IData)(vlSelf->top__DOT__rdata)) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[5U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__rdata 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rdata)))) 
            >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__rdata 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rdata))) 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[6U] 
        = (0x140U | (((IData)((QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->top__DOT__rdata))))) 
                      << 9U) | ((IData)(((((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__rdata))) 
                                         >> 0x20U)) 
                                >> 0x1aU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[7U] 
        = ((0x3fU & ((IData)((QData)((IData)((0xffffU 
                                              & (IData)(vlSelf->top__DOT__rdata))))) 
                     >> 0x17U)) | ((0x1c0U & ((IData)((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__rdata))))) 
                                              >> 0x17U)) 
                                   | ((IData)(((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__rdata)))) 
                                               >> 0x20U)) 
                                      << 9U)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[8U] 
        = __Vtemp1183[8U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[9U] 
        = __Vtemp1183[9U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xaU] 
        = __Vtemp1183[0xaU];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xbU] 
        = __Vtemp1183[0xbU];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xcU] 
        = ((0x3fU & ((IData)(((QData)((IData)((0xffU 
                                               & (IData)(vlSelf->top__DOT__rdata)))) 
                              >> 0x20U)) >> 0x11U)) 
           | (__Vtemp1178[6U] << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xdU] 
        = ((__Vtemp1178[6U] >> 0x1aU) | (__Vtemp1178[7U] 
                                         << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xeU] 
        = ((__Vtemp1178[7U] >> 0x1aU) | (__Vtemp1178[8U] 
                                         << 6U));
    vlSelf->top__DOT__if_ready = (1U & ((~ (IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid)) 
                                        | ((~ (IData)(vlSelf->top__DOT__load_stall)) 
                                           & (IData)(vlSelf->top__DOT__id_ready))));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[4U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2 
        = ((8U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1) 
                  >> 8U)) | ((4U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2) 
                                    >> 9U)) | ((2U 
                                                & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3) 
                                                   >> 0xaU)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4) 
                                                     >> 0xbU)))));
    __Vtemp1194[1U] = (((IData)(((((QData)((IData)(
                                                   (0x100004U 
                                                    | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1) 
                                                       << 4U)))) 
                                   << 0x22U) | ((QData)((IData)(
                                                                (2U 
                                                                 | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2) 
                                                                    << 5U)))) 
                                                << 0x11U)) 
                                 | (QData)((IData)(
                                                   (1U 
                                                    | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3) 
                                                       << 5U)))))) 
                        >> 0x13U) | ((IData)((((((QData)((IData)(
                                                                 (0x100004U 
                                                                  | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1) 
                                                                     << 4U)))) 
                                                 << 0x22U) 
                                                | ((QData)((IData)(
                                                                   (2U 
                                                                    | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2) 
                                                                       << 5U)))) 
                                                   << 0x11U)) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3) 
                                                                     << 5U))))) 
                                              >> 0x20U)) 
                                     << 0xdU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4[0U] 
        = (((IData)(((((QData)((IData)((0x100004U | 
                                        ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1) 
                                         << 4U)))) 
                       << 0x22U) | ((QData)((IData)(
                                                    (2U 
                                                     | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2) 
                                                        << 5U)))) 
                                    << 0x11U)) | (QData)((IData)(
                                                                 (1U 
                                                                  | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3) 
                                                                     << 5U)))))) 
            << 0xdU) | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4) 
                        << 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4[1U] 
        = __Vtemp1194[1U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4[2U] 
        = ((IData)((((((QData)((IData)((0x100004U | 
                                        ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1) 
                                         << 4U)))) 
                       << 0x22U) | ((QData)((IData)(
                                                    (2U 
                                                     | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2) 
                                                        << 5U)))) 
                                    << 0x11U)) | (QData)((IData)(
                                                                 (1U 
                                                                  | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3) 
                                                                     << 5U))))) 
                    >> 0x20U)) >> 0x13U);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[7U] 
            << 0x17U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[6U] 
                         >> 9U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[8U] 
            << 0x17U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[7U] 
                         >> 9U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[8U] 
                 >> 9U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[9U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xaU] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xbU] 
            << 0x11U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xaU] 
                         >> 0xfU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xcU] 
            << 0x11U) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xbU] 
                         >> 0xfU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[5U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xcU] 
                 >> 0xfU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xdU] 
            << 0xeU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xcU] 
                        >> 0x12U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xeU] 
            << 0xeU) | (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xdU] 
                        >> 0x12U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[6U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xeU] 
                 >> 0x12U));
    vlSelf->top__DOT__pc_ready = (1U & ((~ (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid)) 
                                        | ((~ (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall)) 
                                           & (IData)(vlSelf->top__DOT__if_ready))));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[0U] 
        = (0x1ffffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4[0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[1U] 
        = (0x1ffffU & ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4[1U] 
                        << 0xfU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4[0U] 
                                    >> 0x11U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[2U] 
        = (0x1ffffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4[1U] 
                       >> 2U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[3U] 
        = (0x1ffffU & ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4[2U] 
                        << 0xdU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4[1U] 
                                    >> 0x13U)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[3U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[4U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[5U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[6U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[0U] 
        = (0x1fffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[0U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list
                   [0U] >> 0xdU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[1U] 
        = (0x1fffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[1U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list
                   [1U] >> 0xdU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[2U] 
        = (0x1fffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[2U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list
                   [2U] >> 0xdU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[3U] 
        = (0x1fffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[3U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list
                   [3U] >> 0xdU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memrop) 
                               == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__MEM_memrop) == 
           vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memrop) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__MEM_memrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memrop) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__MEM_memrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memrop) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__MEM_memrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memrop) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__MEM_memrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memrop) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__MEM_memrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__MEM_memrop) 
                                  == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__MEM_memrop) 
              == vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit)
            ? vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out
            : 0ULL);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2) 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__mem_w_data = (((IData)(vlSelf->mem_ena) 
                                     & (~ (IData)(vlSelf->mem_wr)))
                                     ? vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data
                                     : vlSelf->top__DOT__MEM_w_data);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype 
        = ((4U & ((((0x3ffffcU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                  >> 0xaU)) | (0x7ffffcU 
                                               & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                                  >> 9U))) 
                   | (0x3fffffcU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                    >> 6U))) | (0x1fffffcU 
                                                & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                                   >> 7U)))) 
           | ((2U & ((((0x1ffffeU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                     >> 0xbU)) | (0x3ffffeU 
                                                  & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                                     >> 0xaU))) 
                      | (0x1fffffeU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                       >> 7U))) | (0x1fffffeU 
                                                   & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                                      >> 7U)))) 
              | (1U & ((((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                         >> 0xcU) | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                     >> 8U)) | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                                >> 8U)))));
    __Vtemp1248[0U] = (0x2003U | (((IData)(((((QData)((IData)(
                                                              (0x2e01f006U 
                                                               | (((0x1c00000U 
                                                                    & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                                                       << 0x11U)) 
                                                                   | (0x3e0000U 
                                                                      & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                                                         << 0x11U))) 
                                                                  | ((0x700U 
                                                                      & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                                         >> 1U)) 
                                                                     | (0xf8U 
                                                                        & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                                           >> 1U))))))) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                (0x1805U 
                                                                 | (0x7f8U 
                                                                    & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))))) 
                                                << 0xeU)) 
                                            | (QData)((IData)(
                                                              (0x1804U 
                                                               | ((0x700U 
                                                                   & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                                                      << 3U)) 
                                                                  | (0xf8U 
                                                                     & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                                                        << 3U)))))))) 
                                   << 0xeU) | ((0x700U 
                                                & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                                   << 2U)) 
                                               | (0xf8U 
                                                  & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                                     << 2U)))));
    __Vtemp1248[1U] = (((IData)(((((QData)((IData)(
                                                   (0x2e01f006U 
                                                    | (((0x1c00000U 
                                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                                            << 0x11U)) 
                                                        | (0x3e0000U 
                                                           & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                                              << 0x11U))) 
                                                       | ((0x700U 
                                                           & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                              >> 1U)) 
                                                          | (0xf8U 
                                                             & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                                >> 1U))))))) 
                                   << 0x1cU) | ((QData)((IData)(
                                                                (0x1805U 
                                                                 | (0x7f8U 
                                                                    & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))))) 
                                                << 0xeU)) 
                                 | (QData)((IData)(
                                                   (0x1804U 
                                                    | ((0x700U 
                                                        & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                                           << 3U)) 
                                                       | (0xf8U 
                                                          & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                                             << 3U)))))))) 
                        >> 0x12U) | ((IData)((((((QData)((IData)(
                                                                 (0x2e01f006U 
                                                                  | (((0x1c00000U 
                                                                       & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                                                          << 0x11U)) 
                                                                      | (0x3e0000U 
                                                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                                                            << 0x11U))) 
                                                                     | ((0x700U 
                                                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                                            >> 1U)) 
                                                                        | (0xf8U 
                                                                           & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                                              >> 1U))))))) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   (0x1805U 
                                                                    | (0x7f8U 
                                                                       & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))))) 
                                                   << 0xeU)) 
                                               | (QData)((IData)(
                                                                 (0x1804U 
                                                                  | ((0x700U 
                                                                      & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                                                         << 3U)) 
                                                                     | (0xf8U 
                                                                        & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                                                           << 3U))))))) 
                                              >> 0x20U)) 
                                     << 0xeU));
    __Vtemp1249[2U] = ((__Vtemp1248[1U] >> 0x15U) | 
                       (0x1fff800U & ((IData)((((((QData)((IData)(
                                                                  (0x2e01f006U 
                                                                   | (((0x1c00000U 
                                                                        & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                                                           << 0x11U)) 
                                                                       | (0x3e0000U 
                                                                          & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                                                             << 0x11U))) 
                                                                      | ((0x700U 
                                                                          & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                                             >> 1U)) 
                                                                         | (0xf8U 
                                                                            & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                                               >> 1U))))))) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    (0x1805U 
                                                                     | (0x7f8U 
                                                                        & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))))) 
                                                    << 0xeU)) 
                                                | (QData)((IData)(
                                                                  (0x1804U 
                                                                   | ((0x700U 
                                                                       & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                                                          << 3U)) 
                                                                      | (0xf8U 
                                                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                                                            << 3U))))))) 
                                               >> 0x20U)) 
                                      >> 7U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[0U] 
        = (0x600U | ((__Vtemp1248[0U] << 0xbU) | (0xffU 
                                                  & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out))));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[1U] 
        = ((__Vtemp1248[0U] >> 0x15U) | (__Vtemp1248[1U] 
                                         << 0xbU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[2U] 
        = __Vtemp1249[2U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__id_imm = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit)
                                 ? vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out
                                 : 0ULL);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[0U] 
        = (0x3fffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[1U] 
        = (0x3fffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[0U] 
                      >> 0xeU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[2U] 
        = (0x3fffU & ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[1U] 
                       << 4U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[0U] 
                                 >> 0x1cU)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[3U] 
        = (0x3fffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[1U] 
                      >> 0xaU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[4U] 
        = (0x3fffU & ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[2U] 
                       << 8U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[1U] 
                                 >> 0x18U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[5U] 
        = (0x3fffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[2U] 
                      >> 6U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch 
        = (vlSelf->top__DOT__ID_pc + vlSelf->top__DOT__id_imm);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
                 [0U] >> 0xbU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[1U] 
        = (0x7ffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
                 [1U] >> 0xbU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[2U] 
        = (0x7ffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
                 [2U] >> 0xbU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[3U] 
        = (0x7ffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[3U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
                 [3U] >> 0xbU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[4U] 
        = (0x7ffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[4U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
                 [4U] >> 0xbU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[5U] 
        = (0x7ffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[5U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list
                 [5U] >> 0xbU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                       == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                          == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit)
            ? (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out)
            : 0U);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2 
        = ((8U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                  >> 5U)) | ((4U & ((~ ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                        >> 8U)) << 2U)) 
                             | ((0x1fffffeU & ((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__ID_instr 
                                                     >> 0x14U))) 
                                                << 1U) 
                                               & (((0U 
                                                    != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                                   << 1U) 
                                                  & (((IData)(vlSelf->top__DOT__EX_w_ena) 
                                                      << 1U) 
                                                     & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                                        >> 7U))))) 
                                | (((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 8U)))))));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2 
        = ((8U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                  >> 6U)) | ((4U & ((~ ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                        >> 9U)) << 2U)) 
                             | ((0xfffffeU & ((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__ID_instr 
                                                    >> 0xfU))) 
                                               << 1U) 
                                              & (((0U 
                                                   != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                                  << 1U) 
                                                 & (((IData)(vlSelf->top__DOT__EX_w_ena) 
                                                     << 1U) 
                                                    & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                                       >> 8U))))) 
                                | (((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                    == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))) 
                                   & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                      & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 9U)))))));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Variables
    VlWide<11>/*351:0*/ __Vtemp1275;
    VlWide<11>/*351:0*/ __Vtemp1284;
    VlWide<3>/*95:0*/ __Vtemp1358;
    VlWide<3>/*95:0*/ __Vtemp1359;
    VlWide<3>/*95:0*/ __Vtemp1360;
    // Body
    if ((0x100073U == vlSelf->difftest_instr)) {
        Vtop___024root____Vdpiimwrap_top__DOT__Inst_TOP(vlSelf->instr);
        Vtop___024root____Vdpiimwrap_top__DOT__E_TOP(1U);
    } else {
        Vtop___024root____Vdpiimwrap_top__DOT__E_TOP(0U);
    }
    __Vtemp1275[9U] = (((IData)(((IData)(vlSelf->reset)
                                  ? 0ULL : ((0x100U 
                                             & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
                                             ? ((((
                                                   (0x1fU 
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
                                             : 0ULL))) 
                        >> 0x10U) | ((IData)((((IData)(vlSelf->reset)
                                                ? 0ULL
                                                : (
                                                   (0x100U 
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
                                                    : 0ULL)) 
                                              >> 0x20U)) 
                                     << 0x10U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__mem_w_data);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__mem_w_data >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[2U] 
        = (9U | ((IData)(vlSelf->top__DOT__ex_w_data) 
                 << 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[3U] 
        = (((IData)(vlSelf->top__DOT__ex_w_data) >> 0x1cU) 
           | ((IData)((vlSelf->top__DOT__ex_w_data 
                       >> 0x20U)) << 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[4U] 
        = (0xb0U | (((IData)(vlSelf->top__DOT__ex_w_data) 
                     << 8U) | ((IData)((vlSelf->top__DOT__ex_w_data 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[5U] 
        = (((IData)(vlSelf->top__DOT__ex_w_data) >> 0x18U) 
           | ((IData)((vlSelf->top__DOT__ex_w_data 
                       >> 0x20U)) << 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[6U] 
        = (0xa00U | (((IData)(vlSelf->top__DOT__id_imm) 
                      << 0xcU) | ((IData)((vlSelf->top__DOT__ex_w_data 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[7U] 
        = (((IData)(vlSelf->top__DOT__id_imm) >> 0x14U) 
           | ((IData)((vlSelf->top__DOT__id_imm >> 0x20U)) 
              << 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[8U] 
        = (0x4000U | (((IData)(((IData)(vlSelf->reset)
                                 ? 0ULL : ((0x100U 
                                            & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
                                            ? (((((0x1fU 
                                                   & (vlSelf->top__DOT__ID_instr 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__WB_w_addr)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->top__DOT__WB_w_addr))) 
                                                & (IData)(vlSelf->top__DOT__WB_w_ena))
                                                ? vlSelf->top__DOT__WB_w_data
                                                : vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs
                                               [(0x1fU 
                                                 & (vlSelf->top__DOT__ID_instr 
                                                    >> 0x14U))])
                                            : 0ULL))) 
                       << 0x10U) | ((IData)((vlSelf->top__DOT__id_imm 
                                             >> 0x20U)) 
                                    >> 0x14U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[9U] 
        = __Vtemp1275[9U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[0xaU] 
        = (0x80000U | ((IData)((((IData)(vlSelf->reset)
                                  ? 0ULL : ((0x100U 
                                             & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
                                             ? ((((
                                                   (0x1fU 
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
                                             : 0ULL)) 
                                >> 0x20U)) >> 0x10U));
    __Vtemp1284[9U] = (((IData)(((IData)(vlSelf->reset)
                                  ? 0ULL : ((0x200U 
                                             & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
                                             ? ((((
                                                   (0x1fU 
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
                                             : 0ULL))) 
                        >> 0x10U) | ((IData)((((IData)(vlSelf->reset)
                                                ? 0ULL
                                                : (
                                                   (0x200U 
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
                                                    : 0ULL)) 
                                              >> 0x20U)) 
                                     << 0x10U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__mem_w_data);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__mem_w_data >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[2U] 
        = (9U | ((IData)(vlSelf->top__DOT__ex_w_data) 
                 << 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[3U] 
        = (((IData)(vlSelf->top__DOT__ex_w_data) >> 0x1cU) 
           | ((IData)((vlSelf->top__DOT__ex_w_data 
                       >> 0x20U)) << 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[4U] 
        = (0xb0U | (((IData)(vlSelf->top__DOT__ex_w_data) 
                     << 8U) | ((IData)((vlSelf->top__DOT__ex_w_data 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[5U] 
        = (((IData)(vlSelf->top__DOT__ex_w_data) >> 0x18U) 
           | ((IData)((vlSelf->top__DOT__ex_w_data 
                       >> 0x20U)) << 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[6U] 
        = (0xa00U | (((IData)(vlSelf->top__DOT__id_imm) 
                      << 0xcU) | ((IData)((vlSelf->top__DOT__ex_w_data 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[7U] 
        = (((IData)(vlSelf->top__DOT__id_imm) >> 0x14U) 
           | ((IData)((vlSelf->top__DOT__id_imm >> 0x20U)) 
              << 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[8U] 
        = (0x4000U | (((IData)(((IData)(vlSelf->reset)
                                 ? 0ULL : ((0x200U 
                                            & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
                                            ? (((((0x1fU 
                                                   & (vlSelf->top__DOT__ID_instr 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->top__DOT__WB_w_addr)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->top__DOT__WB_w_addr))) 
                                                & (IData)(vlSelf->top__DOT__WB_w_ena))
                                                ? vlSelf->top__DOT__WB_w_data
                                                : vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs
                                               [(0x1fU 
                                                 & (vlSelf->top__DOT__ID_instr 
                                                    >> 0xfU))])
                                            : 0ULL))) 
                       << 0x10U) | ((IData)((vlSelf->top__DOT__id_imm 
                                             >> 0x20U)) 
                                    >> 0x14U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[9U] 
        = __Vtemp1284[9U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[0xaU] 
        = (0x80000U | ((IData)((((IData)(vlSelf->reset)
                                  ? 0ULL : ((0x200U 
                                             & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
                                             ? ((((
                                                   (0x1fU 
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
                                             : 0ULL)) 
                                >> 0x20U)) >> 0x10U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[2U] 
                         >> 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[3U] 
                         >> 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[4U] 
                   >> 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[5U] 
            << 0x18U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[4U] 
                         >> 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[6U] 
            << 0x18U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[5U] 
                         >> 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[6U] 
                   >> 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[7U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[6U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[8U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[7U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[8U] 
                   >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[9U] 
            << 0x10U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[8U] 
                         >> 0x10U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[0xaU] 
            << 0x10U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[9U] 
                         >> 0x10U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[4U][2U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[0xaU] 
                   >> 0x10U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[2U] 
                         >> 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[3U] 
                         >> 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[4U] 
                   >> 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[5U] 
            << 0x18U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[4U] 
                         >> 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[6U] 
            << 0x18U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[5U] 
                         >> 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[6U] 
                   >> 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[7U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[6U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[8U] 
            << 0x14U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[7U] 
                         >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[8U] 
                   >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[9U] 
            << 0x10U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[8U] 
                         >> 0x10U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[0xaU] 
            << 0x10U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[9U] 
                         >> 0x10U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[4U][2U] 
        = (0xfU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[0xaU] 
                   >> 0x10U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[3U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[4U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[3U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[4U] 
        = (0xfU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2) 
                               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__id_data2 = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit)
                                   ? vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out
                                   : 0ULL);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2) 
                               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__id_data1 = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit)
                                   ? vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out
                                   : 0ULL);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[2U] 
        = (4U | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch) 
                 << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch) 
            >> 0x1dU) | ((IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[4U] 
        = (0x28U | (((IData)((vlSelf->top__DOT__id_data1 
                              + vlSelf->top__DOT__id_imm)) 
                     << 6U) | ((IData)((vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[5U] 
        = (((IData)((vlSelf->top__DOT__id_data1 + vlSelf->top__DOT__id_imm)) 
            >> 0x1aU) | ((IData)(((vlSelf->top__DOT__id_data1 
                                   + vlSelf->top__DOT__id_imm) 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[6U] 
        = (0x1c0U | ((IData)(((vlSelf->top__DOT__id_data1 
                               + vlSelf->top__DOT__id_imm) 
                              >> 0x20U)) >> 0x1aU));
    VL_EXTEND_WQ(65,64, __Vtemp1358, vlSelf->top__DOT__id_data1);
    VL_EXTEND_WQ(65,64, __Vtemp1359, vlSelf->top__DOT__id_data2);
    VL_SUB_W(3, __Vtemp1360, __Vtemp1358, __Vtemp1359);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb 
        = ((4U & ((IData)(((vlSelf->top__DOT__id_data1 
                            - vlSelf->top__DOT__id_data2) 
                           >> 0x3fU)) << 2U)) | ((2U 
                                                  & (__Vtemp1360[2U] 
                                                     << 1U)) 
                                                 | (vlSelf->top__DOT__id_data1 
                                                    != vlSelf->top__DOT__id_data2)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[0U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[1U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[2U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[3U] 
                         >> 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[4U] 
                 >> 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[4U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[5U] 
                         >> 6U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4[6U] 
                 >> 6U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[0U] 
        = (IData)((((QData)((IData)((1U & (~ ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb) 
                                              >> 1U))))) 
                    << 0x21U) | (((QData)((IData)((0x98db18e3U 
                                                   | ((0x200000U 
                                                       & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb) 
                                                          << 0x13U)) 
                                                      | (0x400U 
                                                         & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb) 
                                                            << 9U)))))) 
                                  << 1U) | (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb)))))));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[1U] 
        = ((0xfffffffcU & (0x635c6f8cU | ((0x800000U 
                                           & ((~ (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb)) 
                                              << 0x17U)) 
                                          | (0x1000U 
                                             & ((~ 
                                                 ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb) 
                                                  >> 2U)) 
                                                << 0xcU))))) 
           | (IData)(((((QData)((IData)((1U & (~ ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb) 
                                                  >> 1U))))) 
                        << 0x21U) | (((QData)((IData)(
                                                      (0x98db18e3U 
                                                       | ((0x200000U 
                                                           & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb) 
                                                              << 0x13U)) 
                                                          | (0x400U 
                                                             & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb) 
                                                                << 9U)))))) 
                                      << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb)))))) 
                      >> 0x20U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[2U] = 0U;
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[0U] 
        = (0x7ffU & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[1U] 
        = (0x7ffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[0U] 
                     >> 0xbU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[2U] 
        = (0x7ffU & ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[1U] 
                      << 0xaU) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[0U] 
                                  >> 0x16U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[3U] 
        = (0x7ffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[1U] 
                     >> 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[4U] 
        = (0x7ffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[1U] 
                     >> 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[5U] 
        = (0x7ffU & ((vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[2U] 
                      << 9U) | (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4[1U] 
                                >> 0x17U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
                                  == vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__branch = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit)
                                 ? vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out
                                 : 0x80000000ULL);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[0U] 
        = (0x3ffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
                     [0U] >> 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[1U] 
        = (0x3ffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
                     [1U] >> 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[2U] 
        = (0x3ffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
                     [2U] >> 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[3U] 
        = (1U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
           [3U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[3U] 
        = (0x3ffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
                     [3U] >> 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[4U] 
        = (1U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
           [4U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[4U] 
        = (0x3ffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
                     [4U] >> 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[5U] 
        = (1U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
           [5U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[5U] 
        = (0x3ffU & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list
                     [5U] >> 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
            == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
            [0U]) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
               [1U]) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
               [2U]) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
               [3U]) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
               [4U]) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
               [5U]) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__bjump 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit) 
           & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4 
        = (0xea8U | ((0x100U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                << 8U)) | (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__bjump) 
                                            << 4U) 
                                           | (1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out)))));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[0U] 
        = (0xfU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[1U] 
        = (0xfU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4) 
                   >> 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[2U] 
        = (0xfU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4) 
                   >> 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[0U] 
        = (1U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[0U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[1U] 
        = (1U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list
           [1U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[1U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[2U] 
        = (1U & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list
           [2U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[2U] 
        = (7U & (vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out 
        = (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
            == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list
            [0U]) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
           == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list
               [1U]) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out) 
           | (((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
               == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list
               [2U]) & vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype) 
              == vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list
              [2U]));
    vlSelf->top__DOT__mux_pc = ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit) 
                                & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out));
    vlSelf->top__DOT__jumptype = ((5U == (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype))
                                   ? 1U : ((4U == (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype))
                                            ? 2U : 
                                           (((7U == (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype)) 
                                             & (IData)(vlSelf->top__DOT__mux_pc))
                                             ? 3U : 0U)));
    vlSelf->top__DOT__error_pre = (((IData)(vlSelf->top__DOT__ID_pre_jump) 
                                    != (IData)(vlSelf->top__DOT__mux_pc)) 
                                   | ((vlSelf->top__DOT__ID_pre_branch 
                                       != vlSelf->top__DOT__branch) 
                                      & (IData)(vlSelf->top__DOT__mux_pc)));
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre 
        = ((IData)(vlSelf->top__DOT__pc_ready) & (~ (IData)(vlSelf->top__DOT__error_pre)));
    vlSelf->top__DOT__pre_jump = (((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre) 
                                   & (vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT
                                      [(0xffU & ((IData)(
                                                         (vlSelf->pc 
                                                          >> 3U)) 
                                                 ^ 
                                                 vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT
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
                                                                 >> 2U))))]))] 
                                      >> 1U)) & (((
                                                   vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                                   [
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->pc 
                                                               >> 2U)))][3U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                                     [
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->pc 
                                                                 >> 2U)))][2U] 
                                                     >> 2U)) 
                                                 == (IData)(vlSelf->pc)));
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_i = 
        ((IData)(vlSelf->top__DOT__error_pre) ? ((IData)(vlSelf->top__DOT__mux_pc)
                                                  ? vlSelf->top__DOT__branch
                                                  : 
                                                 (4ULL 
                                                  + vlSelf->top__DOT__ID_pc))
          : ((IData)(vlSelf->top__DOT__pre_jump) ? vlSelf->top__DOT__pre_branch
              : (4ULL + vlSelf->pc)));
}
