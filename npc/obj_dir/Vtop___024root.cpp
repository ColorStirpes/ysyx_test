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
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32;
    VlWide<7>/*223:0*/ __Vtemp555;
    VlWide<8>/*255:0*/ __Vtemp562;
    VlWide<9>/*287:0*/ __Vtemp563;
    VlWide<12>/*383:0*/ __Vtemp565;
    VlWide<14>/*447:0*/ __Vtemp567;
    VlWide<16>/*511:0*/ __Vtemp569;
    VlWide<3>/*95:0*/ __Vtemp676;
    VlWide<3>/*95:0*/ __Vtemp677;
    VlWide<3>/*95:0*/ __Vtemp678;
    VlWide<5>/*159:0*/ __Vtemp755;
    VlWide<3>/*95:0*/ __Vtemp756;
    VlWide<7>/*223:0*/ __Vtemp757;
    VlWide<3>/*95:0*/ __Vtemp758;
    VlWide<9>/*287:0*/ __Vtemp759;
    VlWide<3>/*95:0*/ __Vtemp896;
    VlWide<3>/*95:0*/ __Vtemp903;
    VlWide<3>/*95:0*/ __Vtemp904;
    QData/*63:0*/ __Vdlyvval__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32;
    // Body
    __Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs__v32 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__i = 0x20U;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__Inst_TOP(vlSelf->instr);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid = 0U;
    } else if (vlSelf->top__DOT__pc_ready) {
        vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid = 1U;
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
        vlSelf->top__DOT__EX_exop = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_exop = (7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                           >> 5U));
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
        vlSelf->top__DOT__EX_data1 = vlSelf->top__DOT__id_data1;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_data1 = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_mem_stor_data = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_mem_stor_data = vlSelf->top__DOT__EX_data2;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_mem_stor_data = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_aluop = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_aluop = (0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_aluop = 0U;
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
        vlSelf->top__DOT__MEM_memwop = 0U;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_memwop = vlSelf->top__DOT__EX_memwop;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_memwop = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_imm = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_imm = vlSelf->top__DOT__id_imm;
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
    vlSelf->mem_addr = vlSelf->top__DOT__MEM_mem_addr;
    vlSelf->difftest_pc = vlSelf->top__DOT__WB_pc;
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_pc = 0x80000000ULL;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_pc = vlSelf->top__DOT__EX_pc;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_pc = 0x80000000ULL;
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
    __Vtemp555[4U] = (0x3400U | ((0x1fU & ((IData)(
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
    __Vtemp555[5U] = ((0x1fU & ((IData)((QData)((IData)(
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
    __Vtemp555[6U] = (0x60000U | ((0x1fU & ((IData)(
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
        = __Vtemp555[4U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[7U] 
        = __Vtemp555[5U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4[8U] 
        = __Vtemp555[6U];
    __Vtemp562[5U] = (0x900000U | ((0x3fffU & ((IData)(
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
    __Vtemp562[6U] = ((0x3fffU & ((IData)((QData)((IData)(
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
    __Vtemp562[7U] = (0x20000000U | ((0x3fffU & ((IData)(
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
    __Vtemp563[3U] = ((((IData)(((QData)((IData)((0xffU 
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
    __Vtemp563[4U] = (0xa000U | (((0x3ffc0000U & ((IData)(
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
    __Vtemp565[3U] = ((0x30U & ((IData)((0xb0000000000ULL 
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
    __Vtemp565[4U] = ((((IData)((0xb0000000000ULL | (QData)((IData)(
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
    __Vtemp565[5U] = ((((0xfU & ((IData)(((QData)((IData)(
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
                                   >> 0xeU))) | (__Vtemp563[3U] 
                                                 << 6U));
    __Vtemp565[8U] = (((0xfU & ((IData)((((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                          << 8U) >> 0x20U)) 
                                >> 8U)) | (0x30U & 
                                           (__Vtemp562[5U] 
                                            << 4U))) 
                      | (0xffffffc0U & (__Vtemp562[5U] 
                                        << 4U)));
    __Vtemp567[4U] = (0xc000U | ((0x3fU & ((IData)(
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
    __Vtemp567[9U] = ((0x3fU & (__Vtemp563[4U] >> 0x14U)) 
                      | ((0xfc0U & (__Vtemp563[4U] 
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
    __Vtemp567[0xaU] = ((0x3fU & ((IData)((((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                                            << 8U) 
                                           >> 0x20U)) 
                                  >> 2U)) | (__Vtemp565[8U] 
                                             << 6U));
    __Vtemp569[4U] = (0xd000U | ((0x3fU & ((IData)(
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
    __Vtemp569[5U] = ((0x3fU & ((IData)(((QData)((IData)(
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
    __Vtemp569[0xeU] = ((0x3fU & (__Vtemp562[6U] >> 0x10U)) 
                        | ((0xfc0U & (__Vtemp562[6U] 
                                      >> 0x10U)) | 
                           (((0xf000U & (__Vtemp562[6U] 
                                         >> 0x10U)) 
                             | (0x30000U & (__Vtemp562[7U] 
                                            << 0x10U))) 
                            | (0xfffc0000U & (__Vtemp562[7U] 
                                              << 0x10U)))));
    __Vtemp569[0xfU] = ((0x3fU & (__Vtemp562[7U] >> 0x10U)) 
                        | ((0xfc0U & (__Vtemp562[7U] 
                                      >> 0x10U)) | 
                           (0xf000U & (__Vtemp562[7U] 
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
        = __Vtemp569[4U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[7U] 
        = __Vtemp569[5U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[8U] 
        = ((0x3fU & ((IData)((((QData)((IData)((0xffU 
                                                & (IData)(vlSelf->top__DOT__MEM_mem_stor_data)))) 
                               << 0x20U) >> 0x20U)) 
                     >> 0xeU)) | (__Vtemp567[4U] << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[9U] 
        = ((__Vtemp567[4U] >> 0x1aU) | (__Vtemp565[3U] 
                                        << 0xcU));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xaU] 
        = ((0x3fU & (__Vtemp565[3U] >> 0x14U)) | ((0xfc0U 
                                                   & (__Vtemp565[3U] 
                                                      >> 0x14U)) 
                                                  | (__Vtemp565[4U] 
                                                     << 0xcU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xbU] 
        = ((0x3fU & (__Vtemp565[4U] >> 0x14U)) | ((0xfc0U 
                                                   & (__Vtemp565[4U] 
                                                      >> 0x14U)) 
                                                  | (__Vtemp565[5U] 
                                                     << 0xcU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xcU] 
        = ((0x3fU & (__Vtemp565[5U] >> 0x14U)) | ((0xfc0U 
                                                   & (__Vtemp565[5U] 
                                                      >> 0x14U)) 
                                                  | ((0x3f000U 
                                                      & (__Vtemp563[3U] 
                                                         >> 0xeU)) 
                                                     | (__Vtemp563[4U] 
                                                        << 0x12U))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xdU] 
        = ((0x3fU & (__Vtemp563[4U] >> 0xeU)) | (__Vtemp567[9U] 
                                                 << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xeU] 
        = ((__Vtemp567[9U] >> 0x1aU) | (__Vtemp567[0xaU] 
                                        << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0xfU] 
        = ((__Vtemp567[0xaU] >> 0x1aU) | ((0xfc0U & 
                                           (__Vtemp565[8U] 
                                            >> 0x14U)) 
                                          | (((0xf000U 
                                               & (__Vtemp562[5U] 
                                                  >> 0x10U)) 
                                              | (0x30000U 
                                                 & (__Vtemp562[6U] 
                                                    << 0x10U))) 
                                             | (0xfffc0000U 
                                                & (__Vtemp562[6U] 
                                                   << 0x10U)))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0x10U] 
        = __Vtemp569[0xeU];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4[0x11U] 
        = __Vtemp569[0xfU];
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_data2 = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_data2 = vlSelf->top__DOT__id_data2;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_data2 = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_mem_wr = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_mem_wr = (0U != (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_mem_wr = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_memrop = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_memrop = (7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                             >> 1U));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_memrop = 0U;
    }
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop 
        = ((IData)(vlSelf->top__DOT__MEM_mem_wr) ? (IData)(vlSelf->top__DOT__MEM_memwop)
            : (IData)(vlSelf->top__DOT__MEM_memrop));
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_memwop = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_memwop = (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_memwop = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_mem_ena = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_mem_ena = (IData)(((0U 
                                                 != 
                                                 (0xeU 
                                                  & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))) 
                                                | (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_mem_ena = 0U;
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
        vlSelf->top__DOT__WB_w_ena = 0U;
    } else if (((IData)(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid) 
                & (IData)(vlSelf->top__DOT__mem_ready))) {
        vlSelf->top__DOT__WB_w_ena = ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                      & (IData)(vlSelf->top__DOT__mem_wb__DOT__mem_now_valid));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__stall)))) {
        vlSelf->top__DOT__WB_w_ena = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WB_w_data = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid) 
                & (IData)(vlSelf->top__DOT__mem_ready))) {
        vlSelf->top__DOT__WB_w_data = (((IData)(vlSelf->mem_ena) 
                                        & (~ (IData)(vlSelf->mem_wr)))
                                        ? vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data
                                        : vlSelf->top__DOT__MEM_w_data);
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__WB_w_addr = 0U;
    } else if (((IData)(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid) 
                & (IData)(vlSelf->top__DOT__mem_ready))) {
        vlSelf->top__DOT__WB_w_addr = vlSelf->top__DOT__MEM_w_addr;
    }
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
    vlSelf->mem_ena = vlSelf->top__DOT__MEM_mem_ena;
    vlSelf->mem_wr = vlSelf->top__DOT__MEM_mem_wr;
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_pc = 0x80000000ULL;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_pc = vlSelf->top__DOT__ID_pc;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_pc = 0x80000000ULL;
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
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_instr = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_instr = vlSelf->top__DOT__ID_instr;
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
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
             & (IData)(vlSelf->top__DOT__ex_ready))) {
            vlSelf->top__DOT__MEM_w_data = vlSelf->top__DOT__ex_w_data;
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
            vlSelf->top__DOT__MEM_w_data = 0ULL;
        }
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__MEM_w_addr = 0U;
    } else if (((IData)(vlSelf->top__DOT__id_ex__DOT__id_now_valid) 
                & (IData)(vlSelf->top__DOT__ex_ready))) {
        vlSelf->top__DOT__MEM_w_addr = vlSelf->top__DOT__EX_w_addr;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))) {
        vlSelf->top__DOT__MEM_w_addr = 0U;
    }
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
        vlSelf->top__DOT__ID_pc = ((IData)(vlSelf->top__DOT__nop)
                                    ? 0x80000000ULL
                                    : vlSelf->pc);
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__if_id__DOT__stall)))) {
        vlSelf->top__DOT__ID_pc = 0x80000000ULL;
    }
    VL_EXTEND_WQ(65,64, __Vtemp676, vlSelf->top__DOT__EX_data1);
    VL_EXTEND_WQ(65,64, __Vtemp677, vlSelf->top__DOT__EX_data2);
    VL_SUB_W(3, __Vtemp678, __Vtemp676, __Vtemp677);
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
                                               __Vtemp678[2U])))
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
        vlSelf->top__DOT__EX_w_ena = (1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 0xaU));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_w_ena = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__EX_w_addr = 0U;
    } else if (((IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid) 
                & (IData)(vlSelf->top__DOT__id_ready))) {
        vlSelf->top__DOT__EX_w_addr = (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                >> 7U));
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))) {
        vlSelf->top__DOT__EX_w_addr = 0U;
    }
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
        vlSelf->top__DOT__ID_instr = ((IData)(vlSelf->top__DOT__nop)
                                       ? 0U : vlSelf->instr);
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__if_id__DOT__stall)))) {
        vlSelf->top__DOT__ID_instr = 0U;
    }
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
    __Vtemp755[4U] = (0x1c0U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                     (vlSelf->top__DOT__ID_instr 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->top__DOT__ID_instr 
                                                                    >> 0x14U)))) 
                                                >> 0x20U)) 
                                       >> 0x1aU)) | 
                                (0x38U & ((IData)((
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->top__DOT__ID_instr 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->top__DOT__ID_instr 
                                                                       >> 0x14U)))) 
                                                   >> 0x20U)) 
                                          >> 0x1aU))));
    __Vtemp756[1U] = (((IData)((((- (QData)((IData)(
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
    __Vtemp757[2U] = (0x28U | (((IData)((((- (QData)((IData)(
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
                                << 6U) | ((IData)((
                                                   (((- (QData)((IData)(
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
    __Vtemp757[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (vlSelf->top__DOT__ID_instr 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  ((0xfe0U 
                                                                    & (vlSelf->top__DOT__ID_instr 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->top__DOT__ID_instr 
                                                                         >> 7U))))))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
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
    __Vtemp757[4U] = (0x180U | ((7U & ((IData)(((((- (QData)((IData)(
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
                                       >> 0x1aU)) | 
                                (((IData)((((- (QData)((IData)(
                                                               (vlSelf->top__DOT__ID_instr 
                                                                >> 0x1fU)))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             (vlSelf->top__DOT__ID_instr 
                                                              >> 0x14U))))) 
                                  << 9U) | (0x38U & 
                                            ((IData)(
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
    __Vtemp757[5U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (vlSelf->top__DOT__ID_instr 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->top__DOT__ID_instr 
                                                                   >> 0x14U))))) 
                             >> 0x17U)) | ((0x38U & 
                                            ((IData)(
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
    __Vtemp757[6U] = ((7U & ((IData)(((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__ID_instr 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->top__DOT__ID_instr 
                                                                    >> 0x14U)))) 
                                      >> 0x20U)) >> 0x17U)) 
                      | (__Vtemp755[4U] << 3U));
    __Vtemp758[1U] = (((IData)((((- (QData)((IData)(
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
    __Vtemp759[2U] = (0x20U | (((IData)((((- (QData)((IData)(
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
                                << 6U) | ((IData)((
                                                   (((- (QData)((IData)(
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
        = __Vtemp758[1U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[4U] 
        = __Vtemp759[2U];
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
                  >> 0x1aU)) | (__Vtemp756[1U] << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[6U] 
        = ((__Vtemp756[1U] >> 0x1dU) | (__Vtemp757[2U] 
                                        << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[7U] 
        = ((__Vtemp757[2U] >> 0x1dU) | (__Vtemp757[3U] 
                                        << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[8U] 
        = ((__Vtemp757[3U] >> 0x1dU) | (__Vtemp757[4U] 
                                        << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[9U] 
        = ((__Vtemp757[4U] >> 0x1dU) | (__Vtemp757[5U] 
                                        << 3U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4[0xaU] 
        = ((__Vtemp757[5U] >> 0x1dU) | (__Vtemp757[6U] 
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
    vlSelf->top__DOT__pc_valid = (((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid) 
                                   & (~ (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__flush))) 
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
    vlSelf->top__DOT__if_ready = (1U & ((~ (IData)(vlSelf->top__DOT__if_id__DOT__if_now_valid)) 
                                        | ((~ (IData)(vlSelf->top__DOT__if_id__DOT__stall)) 
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
    __Vtemp896[1U] = (((IData)(((((QData)((IData)((0x100004U 
                                                   | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1) 
                                                      << 4U)))) 
                                  << 0x22U) | ((QData)((IData)(
                                                               (2U 
                                                                | ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2) 
                                                                   << 5U)))) 
                                               << 0x11U)) 
                                | (QData)((IData)((1U 
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
        = __Vtemp896[1U];
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
    vlSelf->top__DOT__pc_ready = (1U & ((~ ((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid) 
                                            & (~ (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__flush)))) 
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
    __Vtemp903[0U] = (0x2003U | (((IData)(((((QData)((IData)(
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
    __Vtemp903[1U] = (((IData)(((((QData)((IData)((0x2e01f006U 
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
                                | (QData)((IData)((0x1804U 
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
    __Vtemp904[2U] = ((__Vtemp903[1U] >> 0x15U) | (0x1fff800U 
                                                   & ((IData)(
                                                              (((((QData)((IData)(
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
        = (0x600U | ((__Vtemp903[0U] << 0xbU) | (0xffU 
                                                 & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out))));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[1U] 
        = ((__Vtemp903[0U] >> 0x15U) | (__Vtemp903[1U] 
                                        << 0xbU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4[2U] 
        = __Vtemp904[2U];
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
                             | (((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                   == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                >> 0x14U))) 
                                  & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                     & (IData)(vlSelf->top__DOT__EX_w_ena))) 
                                 << 1U) | (((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__ID_instr 
                                                   >> 0x14U))) 
                                           & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                              & (IData)(vlSelf->top__DOT__MEM_w_ena))))));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2 
        = ((8U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                  >> 6U)) | ((4U & ((~ ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                        >> 9U)) << 2U)) 
                             | (((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                   == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                >> 0xfU))) 
                                  & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                     & (IData)(vlSelf->top__DOT__EX_w_ena))) 
                                 << 1U) | (((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__ID_instr 
                                                   >> 0xfU))) 
                                           & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                              & (IData)(vlSelf->top__DOT__MEM_w_ena))))));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__3\n"); );
    // Variables
    VlWide<9>/*287:0*/ __Vtemp930;
    VlWide<15>/*479:0*/ __Vtemp935;
    VlWide<9>/*287:0*/ __Vtemp941;
    VlWide<9>/*287:0*/ __Vtemp948;
    VlWide<3>/*95:0*/ __Vtemp1055;
    VlWide<3>/*95:0*/ __Vtemp1056;
    VlWide<3>/*95:0*/ __Vtemp1057;
    // Body
    __Vtemp930[6U] = (0x400U | ((0x3fU & ((IData)(((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->momory_data)))) 
                                                   >> 0x20U)) 
                                          >> 0x17U)) 
                                | (((IData)((((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->momory_data 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->momory_data)))))) 
                                    << 0xcU) | (0x1c0U 
                                                & ((IData)(
                                                           ((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->momory_data)))) 
                                                            >> 0x20U)) 
                                                   >> 0x17U)))));
    __Vtemp930[7U] = ((0x3fU & ((IData)((((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->momory_data 
                                                                         >> 7U)))))) 
                                          << 8U) | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->momory_data)))))) 
                                >> 0x14U)) | ((0xfc0U 
                                               & ((IData)(
                                                          (((- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->momory_data 
                                                                                >> 7U)))))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->momory_data)))))) 
                                                  >> 0x14U)) 
                                              | ((IData)(
                                                         ((((- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->momory_data 
                                                                                >> 7U)))))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->momory_data))))) 
                                                          >> 0x20U)) 
                                                 << 0xcU)));
    __Vtemp930[8U] = (0x1000U | ((0x3fU & ((IData)(
                                                   ((((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->momory_data 
                                                                                >> 7U)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->momory_data))))) 
                                                    >> 0x20U)) 
                                           >> 0x14U)) 
                                 | (0xfc0U & ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->momory_data 
                                                                                >> 7U)))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->momory_data))))) 
                                                       >> 0x20U)) 
                                              >> 0x14U))));
    __Vtemp935[8U] = (0x800U | ((0x3fU & ((IData)(((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->momory_data)))) 
                                                   >> 0x20U)) 
                                          >> 0x17U)) 
                                | (((IData)((((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->momory_data 
                                                                             >> 0xfU)))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->momory_data)))))) 
                                    << 0xcU) | (0x1c0U 
                                                & ((IData)(
                                                           ((QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(vlSelf->momory_data)))) 
                                                            >> 0x20U)) 
                                                   >> 0x17U)))));
    __Vtemp935[9U] = ((0x3fU & ((IData)((((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->momory_data 
                                                                         >> 0xfU)))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->momory_data)))))) 
                                >> 0x14U)) | ((0xfc0U 
                                               & ((IData)(
                                                          (((- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->momory_data 
                                                                                >> 0xfU)))))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->momory_data)))))) 
                                                  >> 0x14U)) 
                                              | ((IData)(
                                                         ((((- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->momory_data 
                                                                                >> 0xfU)))))) 
                                                            << 0x10U) 
                                                           | (QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->momory_data))))) 
                                                          >> 0x20U)) 
                                                 << 0xcU)));
    __Vtemp935[0xaU] = (0x3000U | ((0x3fU & ((IData)(
                                                     ((((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->momory_data 
                                                                                >> 0xfU)))))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->momory_data))))) 
                                                      >> 0x20U)) 
                                             >> 0x14U)) 
                                   | (((IData)((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->momory_data))))) 
                                       << 0xfU) | (0xfc0U 
                                                   & ((IData)(
                                                              ((((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->momory_data 
                                                                                >> 0xfU)))))) 
                                                                 << 0x10U) 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->momory_data))))) 
                                                               >> 0x20U)) 
                                                      >> 0x14U)))));
    __Vtemp935[0xbU] = ((0x3fU & ((IData)((QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->momory_data))))) 
                                  >> 0x11U)) | ((0xfc0U 
                                                 & ((IData)((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->momory_data))))) 
                                                    >> 0x11U)) 
                                                | ((0x7000U 
                                                    & ((IData)((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->momory_data))))) 
                                                       >> 0x11U)) 
                                                   | ((IData)(
                                                              ((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->momory_data)))) 
                                                               >> 0x20U)) 
                                                      << 0xfU))));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0U] 
        = (IData)(vlSelf->momory_data);
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[1U] 
        = (IData)((vlSelf->momory_data >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[2U] 
        = (7U | ((IData)((QData)((IData)(vlSelf->momory_data))) 
                 << 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[3U] 
        = (((IData)((QData)((IData)(vlSelf->momory_data))) 
            >> 0x1dU) | ((IData)(((QData)((IData)(vlSelf->momory_data)) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[4U] 
        = (0x30U | (((IData)((((QData)((IData)((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->momory_data 
                                                                      >> 0x1fU))))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->momory_data)))) 
                     << 6U) | ((IData)(((QData)((IData)(vlSelf->momory_data)) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[5U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->momory_data 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->momory_data)))) 
            >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->momory_data 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->momory_data))) 
                                  >> 0x20U)) << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[6U] 
        = (0x140U | (((IData)((QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->momory_data))))) 
                      << 9U) | ((IData)(((((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->momory_data 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->momory_data))) 
                                         >> 0x20U)) 
                                >> 0x1aU)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[7U] 
        = ((0x3fU & ((IData)((QData)((IData)((0xffffU 
                                              & (IData)(vlSelf->momory_data))))) 
                     >> 0x17U)) | ((0x1c0U & ((IData)((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->momory_data))))) 
                                              >> 0x17U)) 
                                   | ((IData)(((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->momory_data)))) 
                                               >> 0x20U)) 
                                      << 9U)));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[8U] 
        = __Vtemp935[8U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[9U] 
        = __Vtemp935[9U];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xaU] 
        = __Vtemp935[0xaU];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xbU] 
        = __Vtemp935[0xbU];
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xcU] 
        = ((0x3fU & ((IData)(((QData)((IData)((0xffU 
                                               & (IData)(vlSelf->momory_data)))) 
                              >> 0x20U)) >> 0x11U)) 
           | (__Vtemp930[6U] << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xdU] 
        = ((__Vtemp930[6U] >> 0x1aU) | (__Vtemp930[7U] 
                                        << 6U));
    vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4[0xeU] 
        = ((__Vtemp930[7U] >> 0x1aU) | (__Vtemp930[8U] 
                                        << 6U));
    if ((0x100073U == vlSelf->difftest_instr)) {
        Vtop___024root____Vdpiimwrap_top__DOT__Inst_TOP(vlSelf->instr);
        Vtop___024root____Vdpiimwrap_top__DOT__E_TOP(1U);
    } else {
        Vtop___024root____Vdpiimwrap_top__DOT__E_TOP(0U);
    }
    __Vtemp941[7U] = (((IData)(((IData)(vlSelf->reset)
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
                       >> 0x14U) | ((IData)((((IData)(vlSelf->reset)
                                               ? 0ULL
                                               : ((0x100U 
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
                                    << 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__MEM_w_data);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__MEM_w_data >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[2U] 
        = (9U | ((IData)(vlSelf->top__DOT__ex_w_data) 
                 << 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[3U] 
        = (((IData)(vlSelf->top__DOT__ex_w_data) >> 0x1cU) 
           | ((IData)((vlSelf->top__DOT__ex_w_data 
                       >> 0x20U)) << 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[4U] 
        = (0xa0U | (((IData)(vlSelf->top__DOT__id_imm) 
                     << 8U) | ((IData)((vlSelf->top__DOT__ex_w_data 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[5U] 
        = (((IData)(vlSelf->top__DOT__id_imm) >> 0x18U) 
           | ((IData)((vlSelf->top__DOT__id_imm >> 0x20U)) 
              << 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[6U] 
        = (0x400U | (((IData)(((IData)(vlSelf->reset)
                                ? 0ULL : ((0x100U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
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
                      << 0xcU) | ((IData)((vlSelf->top__DOT__id_imm 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[7U] 
        = __Vtemp941[7U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4[8U] 
        = (0x8000U | ((IData)((((IData)(vlSelf->reset)
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
                                            : 0ULL)) 
                               >> 0x20U)) >> 0x14U));
    __Vtemp948[7U] = (((IData)(((IData)(vlSelf->reset)
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
                       >> 0x14U) | ((IData)((((IData)(vlSelf->reset)
                                               ? 0ULL
                                               : ((0x200U 
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
                                    << 0xcU));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__MEM_w_data);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__MEM_w_data >> 0x20U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[2U] 
        = (9U | ((IData)(vlSelf->top__DOT__ex_w_data) 
                 << 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[3U] 
        = (((IData)(vlSelf->top__DOT__ex_w_data) >> 0x1cU) 
           | ((IData)((vlSelf->top__DOT__ex_w_data 
                       >> 0x20U)) << 4U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[4U] 
        = (0xa0U | (((IData)(vlSelf->top__DOT__id_imm) 
                     << 8U) | ((IData)((vlSelf->top__DOT__ex_w_data 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[5U] 
        = (((IData)(vlSelf->top__DOT__id_imm) >> 0x18U) 
           | ((IData)((vlSelf->top__DOT__id_imm >> 0x20U)) 
              << 8U));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[6U] 
        = (0x400U | (((IData)(((IData)(vlSelf->reset)
                                ? 0ULL : ((0x200U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
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
                      << 0xcU) | ((IData)((vlSelf->top__DOT__id_imm 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[7U] 
        = __Vtemp948[7U];
    vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4[8U] 
        = (0x8000U | ((IData)((((IData)(vlSelf->reset)
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
                                            : 0ULL)) 
                               >> 0x20U)) >> 0x14U));
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
    VL_EXTEND_WQ(65,64, __Vtemp1055, vlSelf->top__DOT__id_data1);
    VL_EXTEND_WQ(65,64, __Vtemp1056, vlSelf->top__DOT__id_data2);
    VL_SUB_W(3, __Vtemp1057, __Vtemp1055, __Vtemp1056);
    vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb 
        = ((4U & ((IData)(((vlSelf->top__DOT__id_data1 
                            - vlSelf->top__DOT__id_data2) 
                           >> 0x3fU)) << 2U)) | ((2U 
                                                  & (__Vtemp1057[2U] 
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
    vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_i = 
        ((IData)(vlSelf->top__DOT__mux_pc) ? vlSelf->top__DOT__branch
          : (4ULL + vlSelf->pc));
    vlSelf->top__DOT__nop = ((((IData)(vlSelf->top__DOT__EX_w_addr) 
                               == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                            >> 0xfU)))
                               ? ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                  & (((IData)(vlSelf->top__DOT__EX_w_ena) 
                                      & (IData)(vlSelf->top__DOT__EX_mem_ena)) 
                                     & (IData)(vlSelf->top__DOT__EX_mem_ena)))
                               : (((IData)(vlSelf->top__DOT__EX_w_addr) 
                                   == (0x1fU & (vlSelf->top__DOT__ID_instr 
                                                >> 0x14U))) 
                                  & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                     & (((IData)(vlSelf->top__DOT__EX_w_ena) 
                                         & (IData)(vlSelf->top__DOT__EX_mem_ena)) 
                                        & (IData)(vlSelf->top__DOT__EX_mem_ena))))) 
                             | (IData)(vlSelf->top__DOT__mux_pc));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
}
#endif  // VL_DEBUG
