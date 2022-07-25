// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


extern const VlWide<24>/*767:0*/ Vtop__ConstPool__CONST_4384a1ee_0;
extern const VlWide<10>/*319:0*/ Vtop__ConstPool__CONST_f34d275c_0;

void Vtop___024root__traceFullSub20(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<5>/*159:0*/ __Vtemp2519;
    VlWide<5>/*159:0*/ __Vtemp2520;
    VlWide<5>/*159:0*/ __Vtemp2523;
    VlWide<5>/*159:0*/ __Vtemp2525;
    VlWide<5>/*159:0*/ __Vtemp2526;
    VlWide<5>/*159:0*/ __Vtemp2529;
    VlWide<3>/*95:0*/ __Vtemp2531;
    VlWide<5>/*159:0*/ __Vtemp2532;
    VlWide<3>/*95:0*/ __Vtemp2533;
    VlWide<4>/*127:0*/ __Vtemp2534;
    VlWide<3>/*95:0*/ __Vtemp2535;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+31785,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
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
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                     >> 0x1dU))))))));
        tracep->fullBit(oldp+31786,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
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
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                     >> 0x1eU))))))));
        tracep->fullBit(oldp+31787,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
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
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                     >> 0x1fU))))))));
        tracep->fullBit(oldp+31788,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
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
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U])))))));
        tracep->fullBit(oldp+31789,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
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
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                     >> 1U))))))));
        tracep->fullBit(oldp+31790,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
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
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                     >> 2U))))))));
        tracep->fullBit(oldp+31791,((1U & (~ ((((~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_negative) 
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
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p.__PVT__sel_double_positive) 
                                                  & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                     >> 3U))))))));
        tracep->fullCData(oldp+31792,((7U & ((vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[2U] 
                                              << 2U) 
                                             | (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[1U] 
                                                >> 0x1eU)))),3);
        __Vtemp2519[0U] = 1U;
        __Vtemp2519[1U] = 0U;
        __Vtemp2519[2U] = 0U;
        __Vtemp2519[3U] = 0U;
        __Vtemp2519[4U] = 0U;
        VL_ADD_W(5, __Vtemp2520, __Vtemp2519, vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product);
        if (((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative) 
             | (IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative))) {
            __Vtemp2523[0U] = __Vtemp2520[0U];
            __Vtemp2523[1U] = __Vtemp2520[1U];
            __Vtemp2523[2U] = __Vtemp2520[2U];
            __Vtemp2523[3U] = __Vtemp2520[3U];
            __Vtemp2523[4U] = (0xfU & __Vtemp2520[4U]);
        } else {
            __Vtemp2523[0U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product[0U];
            __Vtemp2523[1U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product[1U];
            __Vtemp2523[2U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product[2U];
            __Vtemp2523[3U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product[3U];
            __Vtemp2523[4U] = (0xfU & vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product[4U]);
        }
        tracep->fullWData(oldp+31793,(__Vtemp2523),132);
        tracep->fullBit(oldp+31798,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_negative));
        tracep->fullBit(oldp+31799,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_negative));
        tracep->fullBit(oldp+31800,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_positive));
        tracep->fullBit(oldp+31801,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__sel_double_positive));
        tracep->fullWData(oldp+31802,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p.__PVT__product),132);
        tracep->fullBit(oldp+31807,((1U & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[2U])));
        tracep->fullBit(oldp+31808,((vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[1U] 
                                     >> 0x1fU)));
        tracep->fullBit(oldp+31809,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31810,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31811,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31812,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31813,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31814,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31815,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31816,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31817,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31818,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31819,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31820,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31821,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31822,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31823,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31824,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31825,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31826,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31827,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31828,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31829,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31830,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31831,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31832,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31833,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31834,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31835,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31836,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31837,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31838,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31839,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31840,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31841,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31842,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31843,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31844,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31845,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31846,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31847,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31848,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31849,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31850,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31851,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31852,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31853,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31854,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31855,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31856,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31857,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31858,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31859,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31860,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31861,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31862,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31863,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31864,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31865,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31866,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31867,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31868,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31869,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31870,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31871,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31872,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31873,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31874,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31875,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31876,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31877,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31878,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31879,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31880,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31881,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31882,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31883,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31884,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31885,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31886,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31887,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31888,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31889,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31890,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31891,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31892,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31893,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31894,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31895,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31896,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31897,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31898,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31899,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31900,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31901,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31902,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31903,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31904,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31905,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31906,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31907,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31908,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31909,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31910,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31911,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31912,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31913,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31914,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31915,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31916,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31917,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31918,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31919,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31920,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31921,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31922,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31923,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31924,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31925,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31926,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31927,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31928,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31929,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31930,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31931,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31932,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31933,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31934,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31935,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31936,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31937,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31938,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31939,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31940,((1U & (~ ((((~ 
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
        tracep->fullCData(oldp+31941,((7U & vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[2U])),3);
        __Vtemp2525[0U] = 1U;
        __Vtemp2525[1U] = 0U;
        __Vtemp2525[2U] = 0U;
        __Vtemp2525[3U] = 0U;
        __Vtemp2525[4U] = 0U;
        VL_ADD_W(5, __Vtemp2526, __Vtemp2525, vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product);
        if (((IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative) 
             | (IData)(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative))) {
            __Vtemp2529[0U] = __Vtemp2526[0U];
            __Vtemp2529[1U] = __Vtemp2526[1U];
            __Vtemp2529[2U] = __Vtemp2526[2U];
            __Vtemp2529[3U] = __Vtemp2526[3U];
            __Vtemp2529[4U] = (0xfU & __Vtemp2526[4U]);
        } else {
            __Vtemp2529[0U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product[0U];
            __Vtemp2529[1U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product[1U];
            __Vtemp2529[2U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product[2U];
            __Vtemp2529[3U] = vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product[3U];
            __Vtemp2529[4U] = (0xfU & vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product[4U]);
        }
        tracep->fullWData(oldp+31942,(__Vtemp2529),132);
        tracep->fullBit(oldp+31947,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_negative));
        tracep->fullBit(oldp+31948,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_negative));
        tracep->fullBit(oldp+31949,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_positive));
        tracep->fullBit(oldp+31950,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__sel_double_positive));
        tracep->fullWData(oldp+31951,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p.__PVT__product),132);
        tracep->fullBit(oldp+31956,((1U & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[2U] 
                                           >> 2U))));
        tracep->fullBit(oldp+31957,((1U & (vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[2U] 
                                           >> 1U))));
        tracep->fullBit(oldp+31958,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31959,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31960,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31961,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31962,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31963,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31964,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31965,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31966,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31967,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31968,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31969,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31970,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31971,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31972,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31973,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31974,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31975,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31976,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31977,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31978,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31979,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31980,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31981,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31982,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31983,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31984,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31985,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31986,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31987,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31988,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31989,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31990,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31991,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31992,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31993,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31994,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31995,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31996,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31997,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31998,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+31999,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32000,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32001,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32002,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32003,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32004,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32005,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32006,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32007,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32008,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32009,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32010,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32011,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32012,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32013,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32014,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32015,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32016,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32017,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32018,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32019,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32020,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32021,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32022,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32023,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32024,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32025,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32026,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32027,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32028,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32029,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32030,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32031,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32032,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32033,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32034,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32035,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32036,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32037,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32038,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32039,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32040,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32041,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32042,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32043,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32044,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32045,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32046,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32047,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32048,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32049,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32050,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32051,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32052,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32053,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32054,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32055,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32056,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32057,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32058,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32059,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32060,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32061,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32062,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32063,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32064,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32065,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32066,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32067,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32068,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32069,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32070,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32071,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32072,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32073,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32074,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32075,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32076,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32077,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32078,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32079,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32080,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32081,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32082,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32083,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32084,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32085,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32086,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32087,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32088,((1U & (~ ((((~ 
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
        tracep->fullBit(oldp+32089,((1U & (~ ((((~ 
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
        tracep->fullWData(oldp+32090,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa0.in[0]),132);
        tracep->fullWData(oldp+32095,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa0.in[1]),132);
        tracep->fullWData(oldp+32100,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa0.in[2]),132);
        tracep->fullWData(oldp+32105,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa1.in[0]),132);
        tracep->fullWData(oldp+32110,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa1.in[1]),132);
        tracep->fullWData(oldp+32115,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa1.in[2]),132);
        tracep->fullWData(oldp+32120,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa2.in[0]),132);
        tracep->fullWData(oldp+32125,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa2.in[1]),132);
        tracep->fullWData(oldp+32130,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa2.in[2]),132);
        tracep->fullWData(oldp+32135,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa3.in[0]),132);
        tracep->fullWData(oldp+32140,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa3.in[1]),132);
        tracep->fullWData(oldp+32145,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa3.in[2]),132);
        tracep->fullWData(oldp+32150,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa4.in[0]),132);
        tracep->fullWData(oldp+32155,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa4.in[1]),132);
        tracep->fullWData(oldp+32160,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa4.in[2]),132);
        tracep->fullWData(oldp+32165,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa5.in[0]),132);
        tracep->fullWData(oldp+32170,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa5.in[1]),132);
        tracep->fullWData(oldp+32175,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa5.in[2]),132);
        tracep->fullWData(oldp+32180,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa6.in[0]),132);
        tracep->fullWData(oldp+32185,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa6.in[1]),132);
        tracep->fullWData(oldp+32190,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa6.in[2]),132);
        tracep->fullWData(oldp+32195,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa7.in[0]),132);
        tracep->fullWData(oldp+32200,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa7.in[1]),132);
        tracep->fullWData(oldp+32205,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa7.in[2]),132);
        tracep->fullWData(oldp+32210,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa8.in[0]),132);
        tracep->fullWData(oldp+32215,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa8.in[1]),132);
        tracep->fullWData(oldp+32220,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa8.in[2]),132);
        tracep->fullWData(oldp+32225,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa9.in[0]),132);
        tracep->fullWData(oldp+32230,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa9.in[1]),132);
        tracep->fullWData(oldp+32235,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa9.in[2]),132);
        tracep->fullWData(oldp+32240,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa10.in[0]),132);
        tracep->fullWData(oldp+32245,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa10.in[1]),132);
        tracep->fullWData(oldp+32250,(vlSymsp->TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa10.in[2]),132);
        tracep->fullBit(oldp+32255,(vlSelf->reset));
        tracep->fullBit(oldp+32256,(vlSelf->clock));
        tracep->fullIData(oldp+32257,(vlSelf->instr),32);
        tracep->fullQData(oldp+32258,(vlSelf->momory_data),64);
        tracep->fullBit(oldp+32260,(vlSelf->fetch_enb));
        tracep->fullQData(oldp+32261,(vlSelf->pc),64);
        tracep->fullCData(oldp+32263,(vlSelf->memop),2);
        tracep->fullBit(oldp+32264,(vlSelf->mem_ena));
        tracep->fullBit(oldp+32265,(vlSelf->mem_wr));
        tracep->fullQData(oldp+32266,(vlSelf->mem_addr),64);
        tracep->fullQData(oldp+32268,(vlSelf->mem_stor_data),64);
        tracep->fullIData(oldp+32270,(vlSelf->difftest_instr),32);
        tracep->fullQData(oldp+32271,(vlSelf->difftest_pc),64);
        tracep->fullCData(oldp+32273,(((3U == (IData)(vlSelf->memop))
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
        tracep->fullQData(oldp+32274,(((IData)(vlSelf->top__DOT__error_pre)
                                        ? ((IData)(vlSelf->top__DOT__mux_pc)
                                            ? vlSelf->top__DOT__branch
                                            : (4ULL 
                                               + vlSelf->top__DOT__ID_pc))
                                        : ((IData)(vlSelf->top__DOT__pre_jump)
                                            ? vlSelf->top__DOT__pre_branch
                                            : (4ULL 
                                               + vlSelf->pc)))),64);
        tracep->fullBit(oldp+32276,(((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre) 
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
        tracep->fullBit(oldp+32277,((((vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                       [(0xffU & (IData)(
                                                         (vlSelf->pc 
                                                          >> 2U)))][3U] 
                                       << 0x1eU) | 
                                      (vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                       [(0xffU & (IData)(
                                                         (vlSelf->pc 
                                                          >> 2U)))][2U] 
                                       >> 2U)) == (IData)(vlSelf->pc))));
        tracep->fullCData(oldp+32278,((0xffU & ((((IData)(
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
        tracep->fullCData(oldp+32279,((0xffU & ((IData)(
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
        tracep->fullCData(oldp+32280,((0xffU & (IData)(
                                                       (vlSelf->pc 
                                                        >> 2U)))),8);
        tracep->fullQData(oldp+32281,(((IData)(vlSelf->reset)
                                        ? 0ULL : ((0x400U 
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
        tracep->fullQData(oldp+32283,(((IData)(vlSelf->reset)
                                        ? 0ULL : ((0x200U 
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
        tracep->fullQData(oldp+32285,((vlSelf->top__DOT__id_data1 
                                       + vlSelf->top__DOT__id_imm)),64);
        tracep->fullBit(oldp+32287,(vlSelf->top__DOT__nop));
        tracep->fullBit(oldp+32288,((1U & (~ (IData)(vlSelf->top__DOT__mem_wb__DOT__stall)))));
        tracep->fullBit(oldp+32289,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__flush));
        tracep->fullBit(oldp+32290,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall));
        tracep->fullBit(oldp+32291,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__stall)))));
        tracep->fullBit(oldp+32292,(vlSelf->top__DOT__if_id__DOT__flush));
        tracep->fullIData(oldp+32293,(3U),32);
        tracep->fullIData(oldp+32294,(0x40U),32);
        tracep->fullQData(oldp+32295,(0x80000000ULL),64);
        tracep->fullIData(oldp+32297,(1U),32);
        tracep->fullIData(oldp+32298,(0x43U),32);
        tracep->fullIData(oldp+32299,(3U),32);
        tracep->fullIData(oldp+32300,(6U),32);
        tracep->fullIData(oldp+32301,(0xcU),32);
        tracep->fullSData(oldp+32302,(0U),12);
        tracep->fullIData(oldp+32303,(0xfU),32);
        tracep->fullIData(oldp+32304,(6U),32);
        tracep->fullBit(oldp+32305,(0U));
        tracep->fullIData(oldp+32306,(4U),32);
        tracep->fullIData(oldp+32307,(0x1cU),32);
        tracep->fullIData(oldp+32308,(0x11U),32);
        tracep->fullIData(oldp+32309,(0xaU),32);
        tracep->fullSData(oldp+32310,(0U),10);
        tracep->fullWData(oldp+32311,(Vtop__ConstPool__CONST_4384a1ee_0),756);
        tracep->fullIData(oldp+32335,(0x1bU),32);
        tracep->fullIData(oldp+32336,(0x1cU),32);
        tracep->fullIData(oldp+32337,(0xeU),32);
        tracep->fullSData(oldp+32338,(0U),14);
        tracep->fullIData(oldp+32339,(0x12U),32);
        tracep->fullIData(oldp+32340,(4U),32);
        tracep->fullIData(oldp+32341,(0xdU),32);
        tracep->fullWData(oldp+32342,(Vtop__ConstPool__CONST_f34d275c_0),312);
        tracep->fullIData(oldp+32352,(0x18U),32);
        tracep->fullIData(oldp+32353,(0xdU),32);
        tracep->fullIData(oldp+32354,(0x10U),32);
        tracep->fullSData(oldp+32355,(0U),13);
        __Vtemp2531[0U] = 0x527e48U;
        __Vtemp2531[1U] = 0x10a4fcaU;
        __Vtemp2531[2U] = 0x49f9U;
        tracep->fullWData(oldp+32356,(__Vtemp2531),87);
        tracep->fullIData(oldp+32359,(0x1dU),32);
        tracep->fullIData(oldp+32360,(5U),32);
        __Vtemp2532[0U] = 0x537e68U;
        __Vtemp2532[1U] = 0x8414df98U;
        __Vtemp2532[2U] = 0xc00327e3U;
        __Vtemp2532[3U] = 0x580089f8U;
        __Vtemp2532[4U] = 0x137cU;
        tracep->fullWData(oldp+32361,(__Vtemp2532),150);
        tracep->fullIData(oldp+32366,(0x1eU),32);
        tracep->fullIData(oldp+32367,(5U),32);
        tracep->fullIData(oldp+32368,(2U),32);
        tracep->fullQData(oldp+32369,(0x73b00008e7600ULL),62);
        tracep->fullIData(oldp+32371,(0x1fU),32);
        tracep->fullIData(oldp+32372,(2U),32);
        __Vtemp2533[0U] = 0x3d847a79U;
        __Vtemp2533[1U] = 0x1e9f4a3dU;
        __Vtemp2533[2U] = 0x68f4fe9U;
        tracep->fullWData(oldp+32373,(__Vtemp2533),92);
        tracep->fullIData(oldp+32376,(0x17U),32);
        tracep->fullIData(oldp+32377,(0xbU),32);
        __Vtemp2534[0U] = 0xe0038e00U;
        __Vtemp2534[1U] = 0x98e00d8U;
        __Vtemp2534[2U] = 0x8e00f8e0U;
        __Vtemp2534[3U] = 0x18e00bU;
        tracep->fullWData(oldp+32378,(__Vtemp2534),120);
        tracep->fullIData(oldp+32382,(0x14U),32);
        tracep->fullIData(oldp+32383,(7U),32);
        tracep->fullSData(oldp+32384,(0U),11);
        tracep->fullIData(oldp+32385,(0x37fa1U),18);
        tracep->fullIData(oldp+32386,(1U),32);
        tracep->fullQData(oldp+32387,(0xbf9cde80ULL),34);
        tracep->fullQData(oldp+32389,(0ULL),64);
        tracep->fullIData(oldp+32391,(0x44U),32);
        tracep->fullBit(oldp+32392,(vlSelf->top__DOT__id_ex__DOT__flush));
        tracep->fullBit(oldp+32393,(vlSelf->top__DOT__id_ex__DOT__stall));
        tracep->fullBit(oldp+32394,((1U & (~ (IData)(vlSelf->top__DOT__id_ex__DOT__stall)))));
        tracep->fullIData(oldp+32395,(8U),32);
        tracep->fullCData(oldp+32396,(0U),3);
        __Vtemp2535[0U] = 0x9b69ccefU;
        __Vtemp2535[1U] = 0xa5934a36U;
        __Vtemp2535[2U] = 0x47U;
        tracep->fullWData(oldp+32397,(__Vtemp2535),72);
        tracep->fullIData(oldp+32400,(9U),32);
        tracep->fullIData(oldp+32401,(8U),32);
        tracep->fullCData(oldp+32402,(0U),4);
        tracep->fullQData(oldp+32403,(0x15759d766119fULL),50);
        tracep->fullIData(oldp+32405,(0x46U),32);
        tracep->fullIData(oldp+32406,(0x1dU),32);
        tracep->fullBit(oldp+32407,(vlSelf->top__DOT__ex_mem__DOT__flush));
        tracep->fullBit(oldp+32408,(vlSelf->top__DOT__ex_mem__DOT__stall));
        tracep->fullBit(oldp+32409,((1U & (~ (IData)(vlSelf->top__DOT__ex_mem__DOT__stall)))));
        tracep->fullCData(oldp+32410,(0U),2);
        tracep->fullQData(oldp+32411,(0x110d8db5fULL),35);
        tracep->fullIData(oldp+32413,(7U),32);
        tracep->fullIData(oldp+32414,(0x45U),32);
        tracep->fullBit(oldp+32415,(vlSelf->top__DOT__mem_wb__DOT__flush));
        tracep->fullBit(oldp+32416,(vlSelf->top__DOT__mem_wb__DOT__stall));
    }
}
