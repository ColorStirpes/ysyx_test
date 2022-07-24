// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub20(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp2723;
    VlWide<5>/*159:0*/ __Vtemp2724;
    VlWide<5>/*159:0*/ __Vtemp2727;
    VlWide<5>/*159:0*/ __Vtemp2729;
    VlWide<5>/*159:0*/ __Vtemp2730;
    VlWide<5>/*159:0*/ __Vtemp2733;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 31784);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+0,((1U & (~ ((((~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1cU))))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                     >> 0x1dU)))) 
                                             & (~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+1,((1U & (~ ((((~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1dU))))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                     >> 0x1eU)))) 
                                             & (~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+2,((1U & (~ ((((~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1eU))))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                     >> 0x1fU)))) 
                                             & (~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+3,((1U & (~ ((((~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1fU))))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_positive) 
                                                  & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                             & (~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+4,((1U & (~ ((((~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                   & (~ 
                                                      vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U])))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                     >> 1U)))) 
                                             & (~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U])))))));
            tracep->chgBit(oldp+5,((1U & (~ ((((~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 1U))))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                     >> 2U)))) 
                                             & (~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+6,((1U & (~ ((((~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U))))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                     >> 3U)))) 
                                             & (~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+7,((1U & (~ ((((~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U))))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                     >> 4U)))) 
                                             & (~ ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 3U))))))));
            tracep->chgCData(oldp+8,((7U & ((vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[2U] 
                                             << 2U) 
                                            | (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[1U] 
                                               >> 0x1eU)))),3);
            __Vtemp2723[0U] = 1U;
            __Vtemp2723[1U] = 0U;
            __Vtemp2723[2U] = 0U;
            __Vtemp2723[3U] = 0U;
            __Vtemp2723[4U] = 0U;
            VL_ADD_W(5, __Vtemp2724, __Vtemp2723, vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product);
            if (((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                 | (IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative))) {
                __Vtemp2727[0U] = __Vtemp2724[0U];
                __Vtemp2727[1U] = __Vtemp2724[1U];
                __Vtemp2727[2U] = __Vtemp2724[2U];
                __Vtemp2727[3U] = __Vtemp2724[3U];
                __Vtemp2727[4U] = (0xfU & __Vtemp2724[4U]);
            } else {
                __Vtemp2727[0U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product[0U];
                __Vtemp2727[1U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product[1U];
                __Vtemp2727[2U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product[2U];
                __Vtemp2727[3U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product[3U];
                __Vtemp2727[4U] = (0xfU & vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product[4U]);
            }
            tracep->chgWData(oldp+9,(__Vtemp2727),132);
            tracep->chgBit(oldp+14,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative));
            tracep->chgBit(oldp+15,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative));
            tracep->chgBit(oldp+16,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive));
            tracep->chgWData(oldp+18,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product),132);
            tracep->chgBit(oldp+23,((1U & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[2U])));
            tracep->chgBit(oldp+24,((vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[1U] 
                                     >> 0x1fU)));
            tracep->chgBit(oldp+25,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U])))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U])))))));
            tracep->chgBit(oldp+26,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 2U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 1U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 2U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 1U))))))));
            tracep->chgBit(oldp+27,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 3U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 2U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 3U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 2U))))))));
            tracep->chgBit(oldp+28,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 4U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 3U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 4U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 3U))))))));
            tracep->chgBit(oldp+29,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 5U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 4U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 5U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 4U))))))));
            tracep->chgBit(oldp+30,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 6U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 5U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 6U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 5U))))))));
            tracep->chgBit(oldp+31,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 7U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 6U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 7U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 6U))))))));
            tracep->chgBit(oldp+32,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 8U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 7U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 8U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 7U))))))));
            tracep->chgBit(oldp+33,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 9U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 8U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 9U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 8U))))))));
            tracep->chgBit(oldp+34,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xaU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 9U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xaU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 9U))))))));
            tracep->chgBit(oldp+35,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xbU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0xaU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xbU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0xaU))))))));
            tracep->chgBit(oldp+36,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xcU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0xbU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xcU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0xbU))))))));
            tracep->chgBit(oldp+37,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xdU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0xcU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xdU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0xcU))))))));
            tracep->chgBit(oldp+38,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xeU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0xdU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xeU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0xdU))))))));
            tracep->chgBit(oldp+39,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xfU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0xeU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xfU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0xeU))))))));
            tracep->chgBit(oldp+40,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x10U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0xfU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x10U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0xfU))))))));
            tracep->chgBit(oldp+41,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x11U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x10U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x11U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x10U))))))));
            tracep->chgBit(oldp+42,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x12U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x11U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x12U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x11U))))))));
            tracep->chgBit(oldp+43,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x13U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x12U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x13U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x12U))))))));
            tracep->chgBit(oldp+44,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x14U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x13U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x14U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x13U))))))));
            tracep->chgBit(oldp+45,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x15U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x14U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x15U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x14U))))))));
            tracep->chgBit(oldp+46,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x16U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x15U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x16U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x15U))))))));
            tracep->chgBit(oldp+47,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x17U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x16U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x17U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x16U))))))));
            tracep->chgBit(oldp+48,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x18U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x17U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x18U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x17U))))))));
            tracep->chgBit(oldp+49,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x19U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x18U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x19U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x18U))))))));
            tracep->chgBit(oldp+50,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1aU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x19U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1aU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x19U))))))));
            tracep->chgBit(oldp+51,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1bU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x1aU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1bU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x1aU))))))));
            tracep->chgBit(oldp+52,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1cU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x1bU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1cU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x1bU))))))));
            tracep->chgBit(oldp+53,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1dU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x1cU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1dU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x1cU))))))));
            tracep->chgBit(oldp+54,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1eU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x1dU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1eU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x1dU))))))));
            tracep->chgBit(oldp+55,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1fU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x1eU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1fU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x1eU))))))));
            tracep->chgBit(oldp+56,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                        >> 0x1fU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x1fU))))))));
            tracep->chgBit(oldp+57,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U])))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U])))))));
            tracep->chgBit(oldp+58,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 2U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 1U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 2U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 1U))))))));
            tracep->chgBit(oldp+59,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 3U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 2U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 3U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 2U))))))));
            tracep->chgBit(oldp+60,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 4U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 3U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 4U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 3U))))))));
            tracep->chgBit(oldp+61,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 5U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 4U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 5U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 4U))))))));
            tracep->chgBit(oldp+62,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 6U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 5U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 6U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 5U))))))));
            tracep->chgBit(oldp+63,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 7U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 6U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 7U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 6U))))))));
            tracep->chgBit(oldp+64,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 8U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 7U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 8U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 7U))))))));
            tracep->chgBit(oldp+65,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 9U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 8U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 9U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 8U))))))));
            tracep->chgBit(oldp+66,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xaU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 9U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xaU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 9U))))))));
            tracep->chgBit(oldp+67,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xbU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0xaU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xbU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0xaU))))))));
            tracep->chgBit(oldp+68,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xcU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0xbU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xcU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0xbU))))))));
            tracep->chgBit(oldp+69,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xdU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0xcU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xdU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0xcU))))))));
            tracep->chgBit(oldp+70,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xeU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0xdU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xeU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0xdU))))))));
            tracep->chgBit(oldp+71,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xfU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0xeU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xfU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0xeU))))))));
            tracep->chgBit(oldp+72,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x10U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0xfU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x10U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0xfU))))))));
            tracep->chgBit(oldp+73,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x11U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x10U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x11U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x10U))))))));
            tracep->chgBit(oldp+74,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x12U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x11U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x12U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x11U))))))));
            tracep->chgBit(oldp+75,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x13U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x12U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x13U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x12U))))))));
            tracep->chgBit(oldp+76,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x14U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x13U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x14U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x13U))))))));
            tracep->chgBit(oldp+77,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x15U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x14U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x15U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x14U))))))));
            tracep->chgBit(oldp+78,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x16U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x15U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x16U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x15U))))))));
            tracep->chgBit(oldp+79,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x17U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x16U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x17U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x16U))))))));
            tracep->chgBit(oldp+80,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x18U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x17U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x18U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x17U))))))));
            tracep->chgBit(oldp+81,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x19U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x18U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x19U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x18U))))))));
            tracep->chgBit(oldp+82,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1aU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x19U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1aU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x19U))))))));
            tracep->chgBit(oldp+83,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1bU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x1aU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1bU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x1aU))))))));
            tracep->chgBit(oldp+84,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1cU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x1bU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1cU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x1bU))))))));
            tracep->chgBit(oldp+85,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1dU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x1cU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1dU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x1cU))))))));
            tracep->chgBit(oldp+86,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1eU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x1dU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1eU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x1dU))))))));
            tracep->chgBit(oldp+87,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1fU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x1eU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1fU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x1eU))))))));
            tracep->chgBit(oldp+88,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                        >> 0x1fU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x1fU))))))));
            tracep->chgBit(oldp+89,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U])))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U])))))));
            tracep->chgBit(oldp+90,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 2U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                        >> 1U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 2U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 1U))))))));
            tracep->chgBit(oldp+91,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 3U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                        >> 2U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 3U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 2U))))))));
            tracep->chgBit(oldp+92,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 4U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                        >> 3U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 4U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 3U))))))));
            tracep->chgBit(oldp+93,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 5U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                        >> 4U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 5U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 4U))))))));
            tracep->chgBit(oldp+94,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 6U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                        >> 5U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 6U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 5U))))))));
            tracep->chgBit(oldp+95,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 7U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                        >> 6U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 7U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 6U))))))));
            tracep->chgBit(oldp+96,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 8U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                        >> 7U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 8U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 7U))))))));
            tracep->chgBit(oldp+97,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 9U)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                        >> 8U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 9U)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 8U))))))));
            tracep->chgBit(oldp+98,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xaU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                        >> 9U))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xaU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 9U))))))));
            tracep->chgBit(oldp+99,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xbU)))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                        >> 0xaU))))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xbU)))) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 0xaU))))))));
            tracep->chgBit(oldp+100,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+101,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+102,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+103,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+104,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+105,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+106,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+107,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+108,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+109,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+110,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+111,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+112,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+113,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+114,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+115,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+116,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+117,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+118,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+119,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+120,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+121,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U])))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U])))))));
            tracep->chgBit(oldp+122,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+123,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+124,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+125,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+126,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+127,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+128,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+129,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+130,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+131,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+132,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+133,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+134,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+135,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+136,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+137,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+138,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+139,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+140,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+141,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+142,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+143,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+144,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+145,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+146,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+147,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+148,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+149,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+150,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+151,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+152,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+153,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U])))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U])))))));
            tracep->chgBit(oldp+154,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+155,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+156,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 3U))))))));
            tracep->chgCData(oldp+157,((7U & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[2U])),3);
            __Vtemp2729[0U] = 1U;
            __Vtemp2729[1U] = 0U;
            __Vtemp2729[2U] = 0U;
            __Vtemp2729[3U] = 0U;
            __Vtemp2729[4U] = 0U;
            VL_ADD_W(5, __Vtemp2730, __Vtemp2729, vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product);
            if (((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                 | (IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative))) {
                __Vtemp2733[0U] = __Vtemp2730[0U];
                __Vtemp2733[1U] = __Vtemp2730[1U];
                __Vtemp2733[2U] = __Vtemp2730[2U];
                __Vtemp2733[3U] = __Vtemp2730[3U];
                __Vtemp2733[4U] = (0xfU & __Vtemp2730[4U]);
            } else {
                __Vtemp2733[0U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product[0U];
                __Vtemp2733[1U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product[1U];
                __Vtemp2733[2U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product[2U];
                __Vtemp2733[3U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product[3U];
                __Vtemp2733[4U] = (0xfU & vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product[4U]);
            }
            tracep->chgWData(oldp+158,(__Vtemp2733),132);
            tracep->chgBit(oldp+163,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative));
            tracep->chgBit(oldp+164,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative));
            tracep->chgBit(oldp+165,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive));
            tracep->chgBit(oldp+166,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive));
            tracep->chgWData(oldp+167,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product),132);
            tracep->chgBit(oldp+172,((1U & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[2U] 
                                            >> 2U))));
            tracep->chgBit(oldp+173,((1U & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+174,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U])))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U])))))));
            tracep->chgBit(oldp+175,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+176,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+177,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+178,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+179,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+180,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+181,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+182,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+183,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+184,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+185,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+186,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+187,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+188,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+189,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+190,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+191,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+192,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+193,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+194,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+195,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+196,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+197,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+198,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+199,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+200,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+201,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+202,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+203,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+204,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+205,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+206,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U])))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U])))))));
            tracep->chgBit(oldp+207,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+208,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+209,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+210,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+211,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+212,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+213,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+214,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+215,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+216,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+217,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+218,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+219,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+220,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+221,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+222,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+223,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+224,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+225,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+226,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+227,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+228,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+229,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+230,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+231,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+232,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+233,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+234,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+235,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+236,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+237,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+238,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U])))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U])))))));
            tracep->chgBit(oldp+239,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+240,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+241,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+242,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+243,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+244,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+245,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+246,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+247,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+248,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+249,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+250,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+251,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+252,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+253,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+254,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+255,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+256,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+257,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+258,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+259,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+260,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+261,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+262,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+263,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+264,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+265,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+266,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+267,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+268,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+269,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+270,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U])))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U])))))));
            tracep->chgBit(oldp+271,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+272,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+273,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+274,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+275,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+276,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+277,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+278,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+279,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+280,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+281,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+282,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+283,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+284,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+285,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+286,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+287,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+288,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+289,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+290,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+291,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+292,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+293,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+294,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+295,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+296,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+297,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+298,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+299,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+300,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+301,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+302,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U])))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U])))))));
            tracep->chgBit(oldp+303,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+304,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+305,((1U & (~ ((((~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive) 
                                                    & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                   & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 3U))))))));
            tracep->chgWData(oldp+306,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa0.in[0]),132);
            tracep->chgWData(oldp+311,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa0.in[1]),132);
            tracep->chgWData(oldp+316,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa0.in[2]),132);
            tracep->chgWData(oldp+321,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa1.in[0]),132);
            tracep->chgWData(oldp+326,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa1.in[1]),132);
            tracep->chgWData(oldp+331,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa1.in[2]),132);
            tracep->chgWData(oldp+336,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa2.in[0]),132);
            tracep->chgWData(oldp+341,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa2.in[1]),132);
            tracep->chgWData(oldp+346,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa2.in[2]),132);
            tracep->chgWData(oldp+351,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa3.in[0]),132);
            tracep->chgWData(oldp+356,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa3.in[1]),132);
            tracep->chgWData(oldp+361,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa3.in[2]),132);
            tracep->chgWData(oldp+366,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa4.in[0]),132);
            tracep->chgWData(oldp+371,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa4.in[1]),132);
            tracep->chgWData(oldp+376,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa4.in[2]),132);
            tracep->chgWData(oldp+381,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa5.in[0]),132);
            tracep->chgWData(oldp+386,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa5.in[1]),132);
            tracep->chgWData(oldp+391,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa5.in[2]),132);
            tracep->chgWData(oldp+396,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa6.in[0]),132);
            tracep->chgWData(oldp+401,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa6.in[1]),132);
            tracep->chgWData(oldp+406,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa6.in[2]),132);
            tracep->chgWData(oldp+411,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa7.in[0]),132);
            tracep->chgWData(oldp+416,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa7.in[1]),132);
            tracep->chgWData(oldp+421,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa7.in[2]),132);
            tracep->chgWData(oldp+426,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa8.in[0]),132);
            tracep->chgWData(oldp+431,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa8.in[1]),132);
            tracep->chgWData(oldp+436,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa8.in[2]),132);
            tracep->chgWData(oldp+441,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa9.in[0]),132);
            tracep->chgWData(oldp+446,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa9.in[1]),132);
            tracep->chgWData(oldp+451,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa9.in[2]),132);
            tracep->chgWData(oldp+456,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa10.in[0]),132);
            tracep->chgWData(oldp+461,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa10.in[1]),132);
            tracep->chgWData(oldp+466,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa10.in[2]),132);
        }
        tracep->chgBit(oldp+471,(vlSelf->reset));
        tracep->chgBit(oldp+472,(vlSelf->clock));
        tracep->chgIData(oldp+473,(vlSelf->instr),32);
        tracep->chgQData(oldp+474,(vlSelf->momory_data),64);
        tracep->chgBit(oldp+476,(vlSelf->fetch_enb));
        tracep->chgQData(oldp+477,(vlSelf->pc),64);
        tracep->chgCData(oldp+479,(vlSelf->memop),2);
        tracep->chgBit(oldp+480,(vlSelf->mem_ena));
        tracep->chgBit(oldp+481,(vlSelf->mem_wr));
        tracep->chgQData(oldp+482,(vlSelf->mem_addr),64);
        tracep->chgQData(oldp+484,(vlSelf->mem_stor_data),64);
        tracep->chgIData(oldp+486,(vlSelf->difftest_instr),32);
        tracep->chgQData(oldp+487,(vlSelf->difftest_pc),64);
        tracep->chgCData(oldp+489,(((3U == (IData)(vlSelf->memop))
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
        tracep->chgQData(oldp+490,(((IData)(vlSelf->top__DOT__error_pre)
                                     ? ((IData)(vlSelf->top__DOT__mux_pc)
                                         ? vlSelf->top__DOT__branch
                                         : (4ULL + vlSelf->top__DOT__ID_pc))
                                     : ((IData)(vlSelf->top__DOT__pre_jump)
                                         ? vlSelf->top__DOT__pre_branch
                                         : (4ULL + vlSelf->pc)))),64);
        tracep->chgBit(oldp+492,(((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre) 
                                  & (vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT
                                     [(0xffU & ((IData)(
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
                                                                >> 2U))))]))] 
                                     >> 1U))));
        tracep->chgBit(oldp+493,((((vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                    [(0xffU & (IData)(
                                                      (vlSelf->pc 
                                                       >> 2U)))][3U] 
                                    << 0x1eU) | (vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelf->pc 
                                                              >> 2U)))][2U] 
                                                 >> 2U)) 
                                  == (IData)(vlSelf->pc))));
        tracep->chgCData(oldp+494,((0xffU & ((((IData)(
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
        tracep->chgCData(oldp+495,((0xffU & ((IData)(
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
        tracep->chgCData(oldp+496,((0xffU & (IData)(
                                                    (vlSelf->pc 
                                                     >> 2U)))),8);
        tracep->chgQData(oldp+497,(((IData)(vlSelf->reset)
                                     ? 0ULL : ((0x400U 
                                                & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
                                                ? (
                                                   ((((0x1fU 
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
        tracep->chgQData(oldp+499,(((IData)(vlSelf->reset)
                                     ? 0ULL : ((0x200U 
                                                & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))
                                                ? (
                                                   ((((0x1fU 
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
        tracep->chgQData(oldp+501,((vlSelf->top__DOT__id_data1 
                                    + vlSelf->top__DOT__id_imm)),64);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
