// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_booth_p.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop_booth_p___settle__TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__24__KET____DOT__booth_p__13(Vtop_booth_p* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_booth_p___settle__TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__24__KET____DOT__booth_p__13\n"); );
    // Body
    vlSelf->__PVT__sel_positive = (1U & ((~ (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                             >> 0x1aU)) 
                                         & (((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                              >> 0x19U) 
                                             & (~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x18U))) 
                                            | ((~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x19U)) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                  >> 0x18U)))));
    vlSelf->__PVT__sel_double_positive = (1U & (((~ 
                                                  (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1aU)) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                    >> 0x19U)) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x18U)));
    vlSelf->__PVT__sel_negative = (1U & ((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                          >> 0x1aU) 
                                         & (((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                              >> 0x19U) 
                                             & (~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x18U))) 
                                            | ((~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x19U)) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                  >> 0x18U)))));
    vlSelf->__PVT__sel_double_negative = (1U & (((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                  >> 0x1aU) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                     >> 0x19U))) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                    >> 0x18U))));
    vlSelf->__PVT__product[0U] = ((0xfffffffeU & vlSelf->__PVT__product[0U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U]))))));
    vlSelf->__PVT__product[0U] = ((0xfffffffdU & vlSelf->__PVT__product[0U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[0U] = ((0xfffffffbU & vlSelf->__PVT__product[0U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[0U] = ((0xfffffff7U & vlSelf->__PVT__product[0U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[0U] = ((0xffffffefU & vlSelf->__PVT__product[0U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[0U] = ((0xffffffdfU & vlSelf->__PVT__product[0U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[0U] = ((0xffffffbfU & vlSelf->__PVT__product[0U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[0U] = ((0xffffff7fU & vlSelf->__PVT__product[0U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[0U] = ((0xfffffeffU & vlSelf->__PVT__product[0U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[0U] = ((0xfffffdffU & vlSelf->__PVT__product[0U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[0U] = ((0xfffffbffU & vlSelf->__PVT__product[0U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[0U] = ((0xfffff7ffU & vlSelf->__PVT__product[0U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[0U] = ((0xffffefffU & vlSelf->__PVT__product[0U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[0U] = ((0xffffdfffU & vlSelf->__PVT__product[0U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[0U] = ((0xffffbfffU & vlSelf->__PVT__product[0U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[0U] = ((0xffff7fffU & vlSelf->__PVT__product[0U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[0U] = ((0xfffeffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[0U] = ((0xfffdffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[0U] = ((0xfffbffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[0U] = ((0xfff7ffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[0U] = ((0xffefffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[0U] = ((0xffdfffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[0U] = ((0xffbfffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[0U] = ((0xff7fffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[0U] = ((0xfeffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[0U] = ((0xfdffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[0U] = ((0xfbffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[0U] = ((0xf7ffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[0U] = ((0xefffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[0U] = ((0xdfffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[0U] = ((0xbfffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[0U] = ((0x7fffffffU & vlSelf->__PVT__product[0U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[1U] = ((0xfffffffeU & vlSelf->__PVT__product[1U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))))));
    vlSelf->__PVT__product[1U] = ((0xfffffffdU & vlSelf->__PVT__product[1U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[1U] = ((0xfffffffbU & vlSelf->__PVT__product[1U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[1U] = ((0xfffffff7U & vlSelf->__PVT__product[1U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[1U] = ((0xffffffefU & vlSelf->__PVT__product[1U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[1U] = ((0xffffffdfU & vlSelf->__PVT__product[1U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[1U] = ((0xffffffbfU & vlSelf->__PVT__product[1U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[1U] = ((0xffffff7fU & vlSelf->__PVT__product[1U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[1U] = ((0xfffffeffU & vlSelf->__PVT__product[1U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[1U] = ((0xfffffdffU & vlSelf->__PVT__product[1U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[1U] = ((0xfffffbffU & vlSelf->__PVT__product[1U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[1U] = ((0xfffff7ffU & vlSelf->__PVT__product[1U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[1U] = ((0xffffefffU & vlSelf->__PVT__product[1U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[1U] = ((0xffffdfffU & vlSelf->__PVT__product[1U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[1U] = ((0xffffbfffU & vlSelf->__PVT__product[1U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[1U] = ((0xffff7fffU & vlSelf->__PVT__product[1U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[1U] = ((0xfffeffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[1U] = ((0xfffdffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[1U] = ((0xfffbffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[1U] = ((0xfff7ffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[1U] = ((0xffefffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[1U] = ((0xffdfffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[1U] = ((0xffbfffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[1U] = ((0xff7fffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[1U] = ((0xfeffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[1U] = ((0xfdffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[1U] = ((0xfbffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[1U] = ((0xf7ffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[1U] = ((0xefffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[1U] = ((0xdfffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[1U] = ((0xbfffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[1U] = ((0x7fffffffU & vlSelf->__PVT__product[1U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[2U] = ((0xfffffffeU & vlSelf->__PVT__product[2U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))))));
    vlSelf->__PVT__product[2U] = ((0xfffffffdU & vlSelf->__PVT__product[2U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[2U] = ((0xfffffffbU & vlSelf->__PVT__product[2U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[2U] = ((0xfffffff7U & vlSelf->__PVT__product[2U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[2U] = ((0xffffffefU & vlSelf->__PVT__product[2U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[2U] = ((0xffffffdfU & vlSelf->__PVT__product[2U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[2U] = ((0xffffffbfU & vlSelf->__PVT__product[2U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[2U] = ((0xffffff7fU & vlSelf->__PVT__product[2U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[2U] = ((0xfffffeffU & vlSelf->__PVT__product[2U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[2U] = ((0xfffffdffU & vlSelf->__PVT__product[2U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[2U] = ((0xfffffbffU & vlSelf->__PVT__product[2U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[2U] = ((0xfffff7ffU & vlSelf->__PVT__product[2U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[2U] = ((0xffffefffU & vlSelf->__PVT__product[2U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[2U] = ((0xffffdfffU & vlSelf->__PVT__product[2U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[2U] = ((0xffffbfffU & vlSelf->__PVT__product[2U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[2U] = ((0xffff7fffU & vlSelf->__PVT__product[2U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[2U] = ((0xfffeffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[2U] = ((0xfffdffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[2U] = ((0xfffbffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[2U] = ((0xfff7ffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[2U] = ((0xffefffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[2U] = ((0xffdfffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[2U] = ((0xffbfffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[2U] = ((0xff7fffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[2U] = ((0xfeffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[2U] = ((0xfdffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[2U] = ((0xfbffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[2U] = ((0xf7ffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[2U] = ((0xefffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[2U] = ((0xdfffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[2U] = ((0xbfffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[2U] = ((0x7fffffffU & vlSelf->__PVT__product[2U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[3U] = ((0xfffffffeU & vlSelf->__PVT__product[3U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))))));
    vlSelf->__PVT__product[3U] = ((0xfffffffdU & vlSelf->__PVT__product[3U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[3U] = ((0xfffffffbU & vlSelf->__PVT__product[3U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[3U] = ((0xfffffff7U & vlSelf->__PVT__product[3U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[3U] = ((0xffffffefU & vlSelf->__PVT__product[3U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[3U] = ((0xffffffdfU & vlSelf->__PVT__product[3U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[3U] = ((0xffffffbfU & vlSelf->__PVT__product[3U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[3U] = ((0xffffff7fU & vlSelf->__PVT__product[3U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[3U] = ((0xfffffeffU & vlSelf->__PVT__product[3U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[3U] = ((0xfffffdffU & vlSelf->__PVT__product[3U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[3U] = ((0xfffffbffU & vlSelf->__PVT__product[3U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[3U] = ((0xfffff7ffU & vlSelf->__PVT__product[3U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[3U] = ((0xffffefffU & vlSelf->__PVT__product[3U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[3U] = ((0xffffdfffU & vlSelf->__PVT__product[3U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[3U] = ((0xffffbfffU & vlSelf->__PVT__product[3U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[3U] = ((0xffff7fffU & vlSelf->__PVT__product[3U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[3U] = ((0xfffeffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[3U] = ((0xfffdffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[3U] = ((0xfffbffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[3U] = ((0xfff7ffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[3U] = ((0xffefffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[3U] = ((0xffdfffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[3U] = ((0xffbfffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[3U] = ((0xff7fffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[3U] = ((0xfeffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[3U] = ((0xfdffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[3U] = ((0xfbffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[3U] = ((0xf7ffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[3U] = ((0xefffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[3U] = ((0xdfffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[3U] = ((0xbfffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[3U] = ((0x7fffffffU & vlSelf->__PVT__product[3U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[4U] = ((0xeU & vlSelf->__PVT__product[4U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))))));
    vlSelf->__PVT__product[4U] = ((0xdU & vlSelf->__PVT__product[4U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[4U] = ((0xbU & vlSelf->__PVT__product[4U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[4U] = ((7U & vlSelf->__PVT__product[4U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 3U))))) 
                                           << 3U)));
}

VL_INLINE_OPT void Vtop_booth_p___settle__TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__26__KET____DOT__booth_p__14(Vtop_booth_p* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_booth_p___settle__TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__26__KET____DOT__booth_p__14\n"); );
    // Body
    vlSelf->__PVT__sel_positive = (1U & ((~ (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                             >> 0x1cU)) 
                                         & (((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                              >> 0x1bU) 
                                             & (~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1aU))) 
                                            | ((~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1bU)) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                  >> 0x1aU)))));
    vlSelf->__PVT__sel_double_positive = (1U & (((~ 
                                                  (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1cU)) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                    >> 0x1bU)) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1aU)));
    vlSelf->__PVT__sel_negative = (1U & ((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                          >> 0x1cU) 
                                         & (((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                              >> 0x1bU) 
                                             & (~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1aU))) 
                                            | ((~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1bU)) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                  >> 0x1aU)))));
    vlSelf->__PVT__sel_double_negative = (1U & (((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                  >> 0x1cU) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                     >> 0x1bU))) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                    >> 0x1aU))));
    vlSelf->__PVT__product[0U] = ((0xfffffffeU & vlSelf->__PVT__product[0U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U]))))));
    vlSelf->__PVT__product[0U] = ((0xfffffffdU & vlSelf->__PVT__product[0U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[0U] = ((0xfffffffbU & vlSelf->__PVT__product[0U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[0U] = ((0xfffffff7U & vlSelf->__PVT__product[0U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[0U] = ((0xffffffefU & vlSelf->__PVT__product[0U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[0U] = ((0xffffffdfU & vlSelf->__PVT__product[0U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[0U] = ((0xffffffbfU & vlSelf->__PVT__product[0U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[0U] = ((0xffffff7fU & vlSelf->__PVT__product[0U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[0U] = ((0xfffffeffU & vlSelf->__PVT__product[0U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[0U] = ((0xfffffdffU & vlSelf->__PVT__product[0U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[0U] = ((0xfffffbffU & vlSelf->__PVT__product[0U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[0U] = ((0xfffff7ffU & vlSelf->__PVT__product[0U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[0U] = ((0xffffefffU & vlSelf->__PVT__product[0U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[0U] = ((0xffffdfffU & vlSelf->__PVT__product[0U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[0U] = ((0xffffbfffU & vlSelf->__PVT__product[0U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[0U] = ((0xffff7fffU & vlSelf->__PVT__product[0U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[0U] = ((0xfffeffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[0U] = ((0xfffdffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[0U] = ((0xfffbffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[0U] = ((0xfff7ffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[0U] = ((0xffefffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[0U] = ((0xffdfffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[0U] = ((0xffbfffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[0U] = ((0xff7fffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[0U] = ((0xfeffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[0U] = ((0xfdffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[0U] = ((0xfbffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[0U] = ((0xf7ffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[0U] = ((0xefffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[0U] = ((0xdfffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[0U] = ((0xbfffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[0U] = ((0x7fffffffU & vlSelf->__PVT__product[0U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[1U] = ((0xfffffffeU & vlSelf->__PVT__product[1U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))))));
    vlSelf->__PVT__product[1U] = ((0xfffffffdU & vlSelf->__PVT__product[1U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[1U] = ((0xfffffffbU & vlSelf->__PVT__product[1U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[1U] = ((0xfffffff7U & vlSelf->__PVT__product[1U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[1U] = ((0xffffffefU & vlSelf->__PVT__product[1U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[1U] = ((0xffffffdfU & vlSelf->__PVT__product[1U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[1U] = ((0xffffffbfU & vlSelf->__PVT__product[1U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[1U] = ((0xffffff7fU & vlSelf->__PVT__product[1U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[1U] = ((0xfffffeffU & vlSelf->__PVT__product[1U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[1U] = ((0xfffffdffU & vlSelf->__PVT__product[1U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[1U] = ((0xfffffbffU & vlSelf->__PVT__product[1U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[1U] = ((0xfffff7ffU & vlSelf->__PVT__product[1U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[1U] = ((0xffffefffU & vlSelf->__PVT__product[1U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[1U] = ((0xffffdfffU & vlSelf->__PVT__product[1U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[1U] = ((0xffffbfffU & vlSelf->__PVT__product[1U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[1U] = ((0xffff7fffU & vlSelf->__PVT__product[1U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[1U] = ((0xfffeffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[1U] = ((0xfffdffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[1U] = ((0xfffbffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[1U] = ((0xfff7ffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[1U] = ((0xffefffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[1U] = ((0xffdfffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[1U] = ((0xffbfffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[1U] = ((0xff7fffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[1U] = ((0xfeffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[1U] = ((0xfdffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[1U] = ((0xfbffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[1U] = ((0xf7ffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[1U] = ((0xefffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[1U] = ((0xdfffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[1U] = ((0xbfffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[1U] = ((0x7fffffffU & vlSelf->__PVT__product[1U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[2U] = ((0xfffffffeU & vlSelf->__PVT__product[2U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))))));
    vlSelf->__PVT__product[2U] = ((0xfffffffdU & vlSelf->__PVT__product[2U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[2U] = ((0xfffffffbU & vlSelf->__PVT__product[2U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[2U] = ((0xfffffff7U & vlSelf->__PVT__product[2U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[2U] = ((0xffffffefU & vlSelf->__PVT__product[2U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[2U] = ((0xffffffdfU & vlSelf->__PVT__product[2U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[2U] = ((0xffffffbfU & vlSelf->__PVT__product[2U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[2U] = ((0xffffff7fU & vlSelf->__PVT__product[2U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[2U] = ((0xfffffeffU & vlSelf->__PVT__product[2U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[2U] = ((0xfffffdffU & vlSelf->__PVT__product[2U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[2U] = ((0xfffffbffU & vlSelf->__PVT__product[2U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[2U] = ((0xfffff7ffU & vlSelf->__PVT__product[2U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[2U] = ((0xffffefffU & vlSelf->__PVT__product[2U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[2U] = ((0xffffdfffU & vlSelf->__PVT__product[2U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[2U] = ((0xffffbfffU & vlSelf->__PVT__product[2U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[2U] = ((0xffff7fffU & vlSelf->__PVT__product[2U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[2U] = ((0xfffeffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[2U] = ((0xfffdffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[2U] = ((0xfffbffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[2U] = ((0xfff7ffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[2U] = ((0xffefffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[2U] = ((0xffdfffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[2U] = ((0xffbfffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[2U] = ((0xff7fffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[2U] = ((0xfeffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[2U] = ((0xfdffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[2U] = ((0xfbffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[2U] = ((0xf7ffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[2U] = ((0xefffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[2U] = ((0xdfffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[2U] = ((0xbfffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[2U] = ((0x7fffffffU & vlSelf->__PVT__product[2U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[3U] = ((0xfffffffeU & vlSelf->__PVT__product[3U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))))));
    vlSelf->__PVT__product[3U] = ((0xfffffffdU & vlSelf->__PVT__product[3U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[3U] = ((0xfffffffbU & vlSelf->__PVT__product[3U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[3U] = ((0xfffffff7U & vlSelf->__PVT__product[3U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[3U] = ((0xffffffefU & vlSelf->__PVT__product[3U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[3U] = ((0xffffffdfU & vlSelf->__PVT__product[3U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[3U] = ((0xffffffbfU & vlSelf->__PVT__product[3U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[3U] = ((0xffffff7fU & vlSelf->__PVT__product[3U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[3U] = ((0xfffffeffU & vlSelf->__PVT__product[3U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[3U] = ((0xfffffdffU & vlSelf->__PVT__product[3U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[3U] = ((0xfffffbffU & vlSelf->__PVT__product[3U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[3U] = ((0xfffff7ffU & vlSelf->__PVT__product[3U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[3U] = ((0xffffefffU & vlSelf->__PVT__product[3U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[3U] = ((0xffffdfffU & vlSelf->__PVT__product[3U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[3U] = ((0xffffbfffU & vlSelf->__PVT__product[3U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[3U] = ((0xffff7fffU & vlSelf->__PVT__product[3U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[3U] = ((0xfffeffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[3U] = ((0xfffdffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[3U] = ((0xfffbffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[3U] = ((0xfff7ffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[3U] = ((0xffefffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[3U] = ((0xffdfffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[3U] = ((0xffbfffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[3U] = ((0xff7fffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[3U] = ((0xfeffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[3U] = ((0xfdffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[3U] = ((0xfbffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[3U] = ((0xf7ffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[3U] = ((0xefffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[3U] = ((0xdfffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[3U] = ((0xbfffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[3U] = ((0x7fffffffU & vlSelf->__PVT__product[3U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[4U] = ((0xeU & vlSelf->__PVT__product[4U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))))));
    vlSelf->__PVT__product[4U] = ((0xdU & vlSelf->__PVT__product[4U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[4U] = ((0xbU & vlSelf->__PVT__product[4U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[4U] = ((7U & vlSelf->__PVT__product[4U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 3U))))) 
                                           << 3U)));
}

VL_INLINE_OPT void Vtop_booth_p___settle__TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__28__KET____DOT__booth_p__15(Vtop_booth_p* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_booth_p___settle__TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__28__KET____DOT__booth_p__15\n"); );
    // Body
    vlSelf->__PVT__sel_positive = (1U & ((~ (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                             >> 0x1eU)) 
                                         & (((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                              >> 0x1dU) 
                                             & (~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1cU))) 
                                            | ((~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1dU)) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                  >> 0x1cU)))));
    vlSelf->__PVT__sel_double_positive = (1U & (((~ 
                                                  (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1eU)) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                    >> 0x1dU)) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1cU)));
    vlSelf->__PVT__sel_negative = (1U & ((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                          >> 0x1eU) 
                                         & (((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                              >> 0x1dU) 
                                             & (~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1cU))) 
                                            | ((~ (
                                                   vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                   >> 0x1dU)) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                  >> 0x1cU)))));
    vlSelf->__PVT__sel_double_negative = (1U & (((vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                  >> 0x1eU) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                     >> 0x1dU))) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__y_src[0U] 
                                                    >> 0x1cU))));
    vlSelf->__PVT__product[0U] = ((0xfffffffeU & vlSelf->__PVT__product[0U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U]))))));
    vlSelf->__PVT__product[0U] = ((0xfffffffdU & vlSelf->__PVT__product[0U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[0U] = ((0xfffffffbU & vlSelf->__PVT__product[0U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[0U] = ((0xfffffff7U & vlSelf->__PVT__product[0U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[0U] = ((0xffffffefU & vlSelf->__PVT__product[0U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[0U] = ((0xffffffdfU & vlSelf->__PVT__product[0U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[0U] = ((0xffffffbfU & vlSelf->__PVT__product[0U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[0U] = ((0xffffff7fU & vlSelf->__PVT__product[0U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[0U] = ((0xfffffeffU & vlSelf->__PVT__product[0U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[0U] = ((0xfffffdffU & vlSelf->__PVT__product[0U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[0U] = ((0xfffffbffU & vlSelf->__PVT__product[0U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[0U] = ((0xfffff7ffU & vlSelf->__PVT__product[0U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[0U] = ((0xffffefffU & vlSelf->__PVT__product[0U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[0U] = ((0xffffdfffU & vlSelf->__PVT__product[0U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[0U] = ((0xffffbfffU & vlSelf->__PVT__product[0U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[0U] = ((0xffff7fffU & vlSelf->__PVT__product[0U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[0U] = ((0xfffeffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[0U] = ((0xfffdffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[0U] = ((0xfffbffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[0U] = ((0xfff7ffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[0U] = ((0xffefffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[0U] = ((0xffdfffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[0U] = ((0xffbfffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[0U] = ((0xff7fffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[0U] = ((0xfeffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[0U] = ((0xfdffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[0U] = ((0xfbffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[0U] = ((0xf7ffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[0U] = ((0xefffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[0U] = ((0xdfffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[0U] = ((0xbfffffffU & vlSelf->__PVT__product[0U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[0U] = ((0x7fffffffU & vlSelf->__PVT__product[0U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[0U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[1U] = ((0xfffffffeU & vlSelf->__PVT__product[1U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U]))))));
    vlSelf->__PVT__product[1U] = ((0xfffffffdU & vlSelf->__PVT__product[1U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[1U] = ((0xfffffffbU & vlSelf->__PVT__product[1U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[1U] = ((0xfffffff7U & vlSelf->__PVT__product[1U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[1U] = ((0xffffffefU & vlSelf->__PVT__product[1U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[1U] = ((0xffffffdfU & vlSelf->__PVT__product[1U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[1U] = ((0xffffffbfU & vlSelf->__PVT__product[1U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[1U] = ((0xffffff7fU & vlSelf->__PVT__product[1U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[1U] = ((0xfffffeffU & vlSelf->__PVT__product[1U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[1U] = ((0xfffffdffU & vlSelf->__PVT__product[1U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[1U] = ((0xfffffbffU & vlSelf->__PVT__product[1U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[1U] = ((0xfffff7ffU & vlSelf->__PVT__product[1U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[1U] = ((0xffffefffU & vlSelf->__PVT__product[1U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[1U] = ((0xffffdfffU & vlSelf->__PVT__product[1U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[1U] = ((0xffffbfffU & vlSelf->__PVT__product[1U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[1U] = ((0xffff7fffU & vlSelf->__PVT__product[1U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[1U] = ((0xfffeffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[1U] = ((0xfffdffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[1U] = ((0xfffbffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[1U] = ((0xfff7ffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[1U] = ((0xffefffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[1U] = ((0xffdfffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[1U] = ((0xffbfffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[1U] = ((0xff7fffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[1U] = ((0xfeffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[1U] = ((0xfdffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[1U] = ((0xfbffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[1U] = ((0xf7ffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[1U] = ((0xefffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[1U] = ((0xdfffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[1U] = ((0xbfffffffU & vlSelf->__PVT__product[1U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[1U] = ((0x7fffffffU & vlSelf->__PVT__product[1U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[1U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[2U] = ((0xfffffffeU & vlSelf->__PVT__product[2U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U]))))));
    vlSelf->__PVT__product[2U] = ((0xfffffffdU & vlSelf->__PVT__product[2U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[2U] = ((0xfffffffbU & vlSelf->__PVT__product[2U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[2U] = ((0xfffffff7U & vlSelf->__PVT__product[2U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[2U] = ((0xffffffefU & vlSelf->__PVT__product[2U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[2U] = ((0xffffffdfU & vlSelf->__PVT__product[2U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[2U] = ((0xffffffbfU & vlSelf->__PVT__product[2U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[2U] = ((0xffffff7fU & vlSelf->__PVT__product[2U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[2U] = ((0xfffffeffU & vlSelf->__PVT__product[2U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[2U] = ((0xfffffdffU & vlSelf->__PVT__product[2U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[2U] = ((0xfffffbffU & vlSelf->__PVT__product[2U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[2U] = ((0xfffff7ffU & vlSelf->__PVT__product[2U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[2U] = ((0xffffefffU & vlSelf->__PVT__product[2U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[2U] = ((0xffffdfffU & vlSelf->__PVT__product[2U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[2U] = ((0xffffbfffU & vlSelf->__PVT__product[2U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[2U] = ((0xffff7fffU & vlSelf->__PVT__product[2U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[2U] = ((0xfffeffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[2U] = ((0xfffdffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[2U] = ((0xfffbffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[2U] = ((0xfff7ffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[2U] = ((0xffefffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[2U] = ((0xffdfffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[2U] = ((0xffbfffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[2U] = ((0xff7fffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[2U] = ((0xfeffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[2U] = ((0xfdffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[2U] = ((0xfbffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[2U] = ((0xf7ffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[2U] = ((0xefffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[2U] = ((0xdfffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[2U] = ((0xbfffffffU & vlSelf->__PVT__product[2U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[2U] = ((0x7fffffffU & vlSelf->__PVT__product[2U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[2U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[3U] = ((0xfffffffeU & vlSelf->__PVT__product[3U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U]))))));
    vlSelf->__PVT__product[3U] = ((0xfffffffdU & vlSelf->__PVT__product[3U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[3U] = ((0xfffffffbU & vlSelf->__PVT__product[3U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[3U] = ((0xfffffff7U & vlSelf->__PVT__product[3U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 3U))))) 
                                           << 3U)));
    vlSelf->__PVT__product[3U] = ((0xffffffefU & vlSelf->__PVT__product[3U]) 
                                  | (0x10U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 5U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 4U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 5U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 4U))))) 
                                              << 4U)));
    vlSelf->__PVT__product[3U] = ((0xffffffdfU & vlSelf->__PVT__product[3U]) 
                                  | (0x20U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 6U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 5U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 6U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 5U))))) 
                                              << 5U)));
    vlSelf->__PVT__product[3U] = ((0xffffffbfU & vlSelf->__PVT__product[3U]) 
                                  | (0x40U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 7U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 6U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 7U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 6U))))) 
                                              << 6U)));
    vlSelf->__PVT__product[3U] = ((0xffffff7fU & vlSelf->__PVT__product[3U]) 
                                  | (0x80U & ((~ ((
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 8U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 7U))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 8U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 7U))))) 
                                              << 7U)));
    vlSelf->__PVT__product[3U] = ((0xfffffeffU & vlSelf->__PVT__product[3U]) 
                                  | (0x100U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 9U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 8U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 9U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 8U))))) 
                                               << 8U)));
    vlSelf->__PVT__product[3U] = ((0xfffffdffU & vlSelf->__PVT__product[3U]) 
                                  | (0x200U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xaU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 9U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xaU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 9U))))) 
                                               << 9U)));
    vlSelf->__PVT__product[3U] = ((0xfffffbffU & vlSelf->__PVT__product[3U]) 
                                  | (0x400U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xbU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0xaU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xbU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xaU))))) 
                                               << 0xaU)));
    vlSelf->__PVT__product[3U] = ((0xfffff7ffU & vlSelf->__PVT__product[3U]) 
                                  | (0x800U & ((~ (
                                                   (((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xcU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0xbU))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0xcU)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xbU))))) 
                                               << 0xbU)));
    vlSelf->__PVT__product[3U] = ((0xffffefffU & vlSelf->__PVT__product[3U]) 
                                  | (0x1000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xdU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xcU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xdU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xcU))))) 
                                                << 0xcU)));
    vlSelf->__PVT__product[3U] = ((0xffffdfffU & vlSelf->__PVT__product[3U]) 
                                  | (0x2000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xeU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xdU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xeU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xdU))))) 
                                                << 0xdU)));
    vlSelf->__PVT__product[3U] = ((0xffffbfffU & vlSelf->__PVT__product[3U]) 
                                  | (0x4000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xfU)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xeU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0xfU)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xeU))))) 
                                                << 0xeU)));
    vlSelf->__PVT__product[3U] = ((0xffff7fffU & vlSelf->__PVT__product[3U]) 
                                  | (0x8000U & ((~ 
                                                 ((((~ 
                                                     ((IData)(vlSelf->__PVT__sel_negative) 
                                                      & (~ 
                                                         (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x10U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0xfU))))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x10U)))) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                      & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                         >> 0xfU))))) 
                                                << 0xfU)));
    vlSelf->__PVT__product[3U] = ((0xfffeffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x10000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x11U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x10U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x11U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x10U))))) 
                                                 << 0x10U)));
    vlSelf->__PVT__product[3U] = ((0xfffdffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x20000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x12U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x11U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x11U))))) 
                                                 << 0x11U)));
    vlSelf->__PVT__product[3U] = ((0xfffbffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x40000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x13U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x12U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x13U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x12U))))) 
                                                 << 0x12U)));
    vlSelf->__PVT__product[3U] = ((0xfff7ffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x80000U & ((~ 
                                                  ((((~ 
                                                      ((IData)(vlSelf->__PVT__sel_negative) 
                                                       & (~ 
                                                          (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x14U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x13U))))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x14U)))) 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                       & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                          >> 0x13U))))) 
                                                 << 0x13U)));
    vlSelf->__PVT__product[3U] = ((0xffefffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x100000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x15U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x14U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x15U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x14U))))) 
                                                  << 0x14U)));
    vlSelf->__PVT__product[3U] = ((0xffdfffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x200000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x16U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x15U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x16U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x15U))))) 
                                                  << 0x15U)));
    vlSelf->__PVT__product[3U] = ((0xffbfffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x400000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x17U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x16U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x17U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x16U))))) 
                                                  << 0x16U)));
    vlSelf->__PVT__product[3U] = ((0xff7fffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x800000U & ((~ 
                                                   ((((~ 
                                                       ((IData)(vlSelf->__PVT__sel_negative) 
                                                        & (~ 
                                                           (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x18U)))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                          & (~ 
                                                             (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                              >> 0x17U))))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x18U)))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                        & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                           >> 0x17U))))) 
                                                  << 0x17U)));
    vlSelf->__PVT__product[3U] = ((0xfeffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x1000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x19U)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x18U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x19U)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x18U))))) 
                                                   << 0x18U)));
    vlSelf->__PVT__product[3U] = ((0xfdffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x2000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1aU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x19U))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1aU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x19U))))) 
                                                   << 0x19U)));
    vlSelf->__PVT__product[3U] = ((0xfbffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x4000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1bU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x1aU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1bU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x1aU))))) 
                                                   << 0x1aU)));
    vlSelf->__PVT__product[3U] = ((0xf7ffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x8000000U & (
                                                   (~ 
                                                    ((((~ 
                                                        ((IData)(vlSelf->__PVT__sel_negative) 
                                                         & (~ 
                                                            (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1cU)))) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                           & (~ 
                                                              (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                               >> 0x1bU))))) 
                                                      & (~ 
                                                         ((IData)(vlSelf->__PVT__sel_positive) 
                                                          & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                             >> 0x1cU)))) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                         & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                            >> 0x1bU))))) 
                                                   << 0x1bU)));
    vlSelf->__PVT__product[3U] = ((0xefffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x10000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1cU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1dU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                   >> 0x1cU))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__product[3U] = ((0xdfffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x20000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1dU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1eU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                   >> 0x1dU))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__product[3U] = ((0xbfffffffU & vlSelf->__PVT__product[3U]) 
                                  | (0x40000000U & 
                                     ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                                & (~ 
                                                   (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                      >> 0x1eU))))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                 & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                    >> 0x1fU)))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                   >> 0x1eU))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__product[3U] = ((0x7fffffffU & vlSelf->__PVT__product[3U]) 
                                  | ((~ ((((~ ((IData)(vlSelf->__PVT__sel_negative) 
                                               & (~ 
                                                  vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                           & (~ ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                 & (~ 
                                                    (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                     >> 0x1fU))))) 
                                          & (~ ((IData)(vlSelf->__PVT__sel_positive) 
                                                & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))) 
                                         & (~ ((IData)(vlSelf->__PVT__sel_double_positive) 
                                               & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[3U] 
                                                  >> 0x1fU))))) 
                                     << 0x1fU));
    vlSelf->__PVT__product[4U] = ((0xeU & vlSelf->__PVT__product[4U]) 
                                  | (1U & (~ ((((~ 
                                                 ((IData)(vlSelf->__PVT__sel_negative) 
                                                  & (~ 
                                                     (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                    & (~ 
                                                       vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U])))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                  & vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U]))))));
    vlSelf->__PVT__product[4U] = ((0xdU & vlSelf->__PVT__product[4U]) 
                                  | (2U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 2U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 1U))))) 
                                           << 1U)));
    vlSelf->__PVT__product[4U] = ((0xbU & vlSelf->__PVT__product[4U]) 
                                  | (4U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 2U))))) 
                                           << 2U)));
    vlSelf->__PVT__product[4U] = ((7U & vlSelf->__PVT__product[4U]) 
                                  | (8U & ((~ ((((~ 
                                                  ((IData)(vlSelf->__PVT__sel_negative) 
                                                   & (~ 
                                                      (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__sel_double_negative) 
                                                     & (~ 
                                                        (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__sel_positive) 
                                                    & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->__PVT__sel_double_positive) 
                                                   & (vlSymsp->TOP.top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__x_src[4U] 
                                                      >> 3U))))) 
                                           << 3U)));
}
