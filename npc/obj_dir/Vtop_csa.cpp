// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_csa.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_csa___settle__TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa0__1(Vtop_csa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_csa___settle__TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa0__1\n"); );
    // Body
    vlSelf->__Vcellinp__csa_132__in = ((4U & (vlSelf->in
                                              [2U][4U] 
                                              >> 1U)) 
                                       | ((2U & (vlSelf->in
                                                 [1U][4U] 
                                                 >> 2U)) 
                                          | (1U & (
                                                   vlSelf->in
                                                   [0U][4U] 
                                                   >> 3U))));
    vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] << 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & vlSelf->in
                                                   [0U][0U])));
    vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] << 1U)) | ((2U 
                                                 & vlSelf->in
                                                 [1U][0U]) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 1U))));
    vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in 
        = ((4U & vlSelf->in[2U][0U]) | ((2U & (vlSelf->in
                                               [1U][0U] 
                                               >> 1U)) 
                                        | (1U & (vlSelf->in
                                                 [0U][0U] 
                                                 >> 2U))));
    vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 1U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 3U))));
    vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 4U))));
    vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 3U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 5U))));
    vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 4U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 5U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 6U))));
    vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 5U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 6U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 7U))));
    vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 6U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 7U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 8U))));
    vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 7U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 8U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 9U))));
    vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 8U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 0xaU))));
    vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 9U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 0xaU)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 0xbU))));
    vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xaU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0xcU))));
    vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xbU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0xcU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0xdU))));
    vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xcU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0xdU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0xeU))));
    vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xdU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0xeU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0xfU))));
    vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xeU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0xfU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0x10U))));
    vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xfU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0x11U))));
    vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x10U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x12U))));
    vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x11U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x13U))));
    vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x12U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x14U))));
    vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x13U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x14U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x15U))));
    vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x15U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x16U))));
    vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x15U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x17U))));
    vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x16U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x17U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x18U))));
    vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x17U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x19U))));
    vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x18U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x19U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x1aU))));
    vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x19U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x1bU))));
    vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x1aU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x1cU))));
    vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x1bU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x1dU))));
    vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x1cU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x1eU))));
    vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x1dU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->in
                                                      [0U][0U] 
                                                      >> 0x1fU)));
    vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] << 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & vlSelf->in
                                                   [0U][1U])));
    vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] << 1U)) | ((2U 
                                                 & vlSelf->in
                                                 [1U][1U]) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 1U))));
    vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in 
        = ((4U & vlSelf->in[2U][1U]) | ((2U & (vlSelf->in
                                               [1U][1U] 
                                               >> 1U)) 
                                        | (1U & (vlSelf->in
                                                 [0U][1U] 
                                                 >> 2U))));
    vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 1U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 3U))));
    vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 4U))));
    vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 3U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 5U))));
    vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 4U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 5U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 6U))));
    vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 5U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 6U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 7U))));
    vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 6U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 7U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 8U))));
    vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 7U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 8U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 9U))));
    vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 8U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 0xaU))));
    vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 9U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 0xaU)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 0xbU))));
    vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xaU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0xcU))));
    vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xbU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0xcU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0xdU))));
    vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xcU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0xdU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0xeU))));
    vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xdU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0xeU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0xfU))));
    vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xeU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0xfU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0x10U))));
    vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xfU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0x11U))));
    vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x10U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x12U))));
    vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x11U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x13U))));
    vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x12U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x14U))));
    vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x13U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x14U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x15U))));
    vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x15U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x16U))));
    vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x15U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x17U))));
    vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x16U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x17U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x18U))));
    vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x17U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x19U))));
    vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x18U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x19U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x1aU))));
    vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x19U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x1bU))));
    vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x1aU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x1cU))));
    vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x1bU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x1dU))));
    vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x1cU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x1eU))));
    vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x1dU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->in
                                                      [0U][1U] 
                                                      >> 0x1fU)));
    vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] << 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & vlSelf->in
                                                   [0U][2U])));
    vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] << 1U)) | ((2U 
                                                 & vlSelf->in
                                                 [1U][2U]) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 1U))));
    vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in 
        = ((4U & vlSelf->in[2U][2U]) | ((2U & (vlSelf->in
                                               [1U][2U] 
                                               >> 1U)) 
                                        | (1U & (vlSelf->in
                                                 [0U][2U] 
                                                 >> 2U))));
    vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 1U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 3U))));
    vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 4U))));
    vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 3U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 5U))));
    vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 4U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 5U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 6U))));
    vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 5U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 6U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 7U))));
    vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 6U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 7U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 8U))));
    vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 7U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 8U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 9U))));
    vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 8U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 0xaU))));
    vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 9U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 0xaU)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 0xbU))));
    vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xaU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0xcU))));
    vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xbU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0xcU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0xdU))));
    vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xcU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0xdU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0xeU))));
    vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xdU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0xeU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0xfU))));
    vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xeU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0xfU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0x10U))));
    vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xfU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0x11U))));
    vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x10U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x12U))));
    vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x11U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x13U))));
    vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x12U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x14U))));
    vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x13U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x14U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x15U))));
    vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x15U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x16U))));
    vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x15U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x17U))));
    vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x16U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x17U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x18U))));
    vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x17U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x19U))));
    vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x18U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x19U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x1aU))));
    vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x19U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x1bU))));
    vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x1aU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x1cU))));
    vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x1bU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x1dU))));
    vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x1cU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x1eU))));
    vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x1dU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->in
                                                      [0U][2U] 
                                                      >> 0x1fU)));
    vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] << 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & vlSelf->in
                                                   [0U][3U])));
    vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] << 1U)) | ((2U 
                                                 & vlSelf->in
                                                 [1U][3U]) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 1U))));
    vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in 
        = ((4U & vlSelf->in[2U][3U]) | ((2U & (vlSelf->in
                                               [1U][3U] 
                                               >> 1U)) 
                                        | (1U & (vlSelf->in
                                                 [0U][3U] 
                                                 >> 2U))));
    vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 1U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 3U))));
    vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 4U))));
    vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 3U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 5U))));
    vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 4U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 5U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 6U))));
    vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 5U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 6U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 7U))));
    vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 6U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 7U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 8U))));
    vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 7U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 8U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 9U))));
    vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 8U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 0xaU))));
    vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 9U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 0xaU)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 0xbU))));
    vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xaU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0xcU))));
    vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xbU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0xcU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0xdU))));
    vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xcU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0xdU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0xeU))));
    vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xdU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0xeU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0xfU))));
    vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xeU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0xfU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0x10U))));
    vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xfU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0x11U))));
    vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x10U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x12U))));
    vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x11U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x13U))));
    vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x12U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x14U))));
    vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x13U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x14U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x15U))));
    vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x15U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x16U))));
    vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x15U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x17U))));
    vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x16U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x17U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x18U))));
    vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x17U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x19U))));
    vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x18U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x19U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x1aU))));
    vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x19U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x1bU))));
    vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x1aU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x1cU))));
    vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x1bU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x1dU))));
    vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x1cU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x1eU))));
    vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x1dU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->in
                                                      [0U][3U] 
                                                      >> 0x1fU)));
    vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][4U] << 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][4U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & vlSelf->in
                                                   [0U][4U])));
    vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][4U] << 1U)) | ((2U 
                                                 & vlSelf->in
                                                 [1U][4U]) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][4U] 
                                                      >> 1U))));
    vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in 
        = ((4U & vlSelf->in[2U][4U]) | ((2U & (vlSelf->in
                                               [1U][4U] 
                                               >> 1U)) 
                                        | (1U & (vlSelf->in
                                                 [0U][4U] 
                                                 >> 2U))));
    vlSelf->s[4U] = ((7U & vlSelf->s[4U]) | (8U & (
                                                   VL_REDXOR_32(
                                                                (7U 
                                                                 & (IData)(vlSelf->__Vcellinp__csa_132__in))) 
                                                   << 3U)));
    vlSelf->cout[0U] = ((0xfffffffdU & vlSelf->cout[0U]) 
                        | (2U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in))) 
                                   << 1U) | (0xfffffffeU 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in) 
                                                   << 1U)))) 
                                 | (0x7ffffffeU & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in) 
                                                      << 1U))))));
    vlSelf->s[0U] = ((0xfffffffeU & vlSelf->s[0U]) 
                     | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in)))));
    vlSelf->cout[0U] = ((0xfffffffbU & vlSelf->cout[0U]) 
                        | (4U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in))) 
                                   << 2U) | (0xfffffffcU 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in) 
                                                   << 2U)))) 
                                 | (0xfffffffcU & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in) 
                                                      << 2U))))));
    vlSelf->s[0U] = ((0xfffffffdU & vlSelf->s[0U]) 
                     | (2U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in))) 
                              << 1U)));
    vlSelf->cout[0U] = ((0xfffffff7U & vlSelf->cout[0U]) 
                        | (8U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in))) 
                                   << 3U) | (0xfffffff8U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in) 
                                                 << 2U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in) 
                                                   << 3U)))) 
                                 | (0xfffffff8U & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in) 
                                                      << 3U))))));
    vlSelf->s[0U] = ((0xfffffffbU & vlSelf->s[0U]) 
                     | (4U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in))) 
                              << 2U)));
    vlSelf->cout[0U] = ((0xffffffefU & vlSelf->cout[0U]) 
                        | (0x10U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in))) 
                                      << 4U) | (0xfffffff0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in) 
                                                      << 4U)))) 
                                    | (0xfffffff0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in) 
                                           << 2U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in) 
                                           << 4U))))));
    vlSelf->s[0U] = ((0xfffffff7U & vlSelf->s[0U]) 
                     | (8U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in))) 
                              << 3U)));
    vlSelf->cout[0U] = ((0xffffffdfU & vlSelf->cout[0U]) 
                        | (0x20U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in))) 
                                      << 5U) | (0xffffffe0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in) 
                                                    << 4U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in) 
                                                      << 5U)))) 
                                    | (0xffffffe0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in) 
                                           << 3U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in) 
                                           << 5U))))));
    vlSelf->s[0U] = ((0xffffffefU & vlSelf->s[0U]) 
                     | (0x10U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in))) 
                                 << 4U)));
    vlSelf->cout[0U] = ((0xffffffbfU & vlSelf->cout[0U]) 
                        | (0x40U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in))) 
                                      << 6U) | (0xffffffc0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in) 
                                                      << 6U)))) 
                                    | (0xffffffc0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in) 
                                           << 4U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in) 
                                           << 6U))))));
    vlSelf->s[0U] = ((0xffffffdfU & vlSelf->s[0U]) 
                     | (0x20U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in))) 
                                 << 5U)));
    vlSelf->cout[0U] = ((0xffffff7fU & vlSelf->cout[0U]) 
                        | (0x80U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in))) 
                                      << 7U) | (0xffffff80U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in) 
                                                      << 7U)))) 
                                    | (0xffffff80U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in) 
                                           << 5U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in) 
                                           << 7U))))));
    vlSelf->s[0U] = ((0xffffffbfU & vlSelf->s[0U]) 
                     | (0x40U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in))) 
                                 << 6U)));
    vlSelf->cout[0U] = ((0xfffffeffU & vlSelf->cout[0U]) 
                        | (0x100U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in))) 
                                       << 8U) | (0xffffff00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in) 
                                                       << 8U)))) 
                                     | (0xffffff00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in) 
                                            << 6U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in) 
                                              << 8U))))));
    vlSelf->s[0U] = ((0xffffff7fU & vlSelf->s[0U]) 
                     | (0x80U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in))) 
                                 << 7U)));
    vlSelf->cout[0U] = ((0xfffffdffU & vlSelf->cout[0U]) 
                        | (0x200U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in))) 
                                       << 9U) | (0xfffffe00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in) 
                                                     << 8U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in) 
                                                       << 9U)))) 
                                     | (0xfffffe00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in) 
                                            << 7U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in) 
                                              << 9U))))));
    vlSelf->s[0U] = ((0xfffffeffU & vlSelf->s[0U]) 
                     | (0x100U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in))) 
                                  << 8U)));
    vlSelf->cout[0U] = ((0xfffffbffU & vlSelf->cout[0U]) 
                        | (0x400U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in))) 
                                       << 0xaU) | (0xfffffc00U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in) 
                                                       << 9U) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in) 
                                                         << 0xaU)))) 
                                     | (0xfffffc00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in) 
                                            << 8U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in) 
                                              << 0xaU))))));
    vlSelf->s[0U] = ((0xfffffdffU & vlSelf->s[0U]) 
                     | (0x200U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in))) 
                                  << 9U)));
    vlSelf->cout[0U] = ((0xfffff7ffU & vlSelf->cout[0U]) 
                        | (0x800U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in))) 
                                       << 0xbU) | (0xfffff800U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in) 
                                                         << 0xbU)))) 
                                     | (0xfffff800U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in) 
                                            << 9U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in) 
                                              << 0xbU))))));
    vlSelf->s[0U] = ((0xfffffbffU & vlSelf->s[0U]) 
                     | (0x400U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in))) 
                                  << 0xaU)));
    vlSelf->cout[0U] = ((0xffffefffU & vlSelf->cout[0U]) 
                        | (0x1000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in))) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in) 
                                            << 0xbU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in) 
                                              << 0xcU)))) 
                                      | (0xfffff000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in) 
                                             << 0xaU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in) 
                                               << 0xcU))))));
    vlSelf->s[0U] = ((0xfffff7ffU & vlSelf->s[0U]) 
                     | (0x800U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in))) 
                                  << 0xbU)));
    vlSelf->cout[0U] = ((0xffffdfffU & vlSelf->cout[0U]) 
                        | (0x2000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in))) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in) 
                                            << 0xcU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in) 
                                              << 0xdU)))) 
                                      | (0xffffe000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in) 
                                             << 0xbU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in) 
                                               << 0xdU))))));
    vlSelf->s[0U] = ((0xffffefffU & vlSelf->s[0U]) 
                     | (0x1000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in))) 
                                   << 0xcU)));
    vlSelf->cout[0U] = ((0xffffbfffU & vlSelf->cout[0U]) 
                        | (0x4000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in))) 
                                        << 0xeU) | 
                                       (0xffffc000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in) 
                                            << 0xdU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in) 
                                              << 0xeU)))) 
                                      | (0xffffc000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in) 
                                             << 0xcU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in) 
                                               << 0xeU))))));
    vlSelf->s[0U] = ((0xffffdfffU & vlSelf->s[0U]) 
                     | (0x2000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in))) 
                                   << 0xdU)));
    vlSelf->cout[0U] = ((0xffff7fffU & vlSelf->cout[0U]) 
                        | (0x8000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in))) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in) 
                                            << 0xeU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in) 
                                              << 0xfU)))) 
                                      | (0xffff8000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in) 
                                             << 0xdU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in) 
                                               << 0xfU))))));
    vlSelf->s[0U] = ((0xffffbfffU & vlSelf->s[0U]) 
                     | (0x4000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in))) 
                                   << 0xeU)));
    vlSelf->cout[0U] = ((0xfffeffffU & vlSelf->cout[0U]) 
                        | (0x10000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in))) 
                                         << 0x10U) 
                                        | (0xffff0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in) 
                                               << 0xfU) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in) 
                                                 << 0x10U)))) 
                                       | (0xffff0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in) 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in) 
                                                << 0x10U))))));
    vlSelf->s[0U] = ((0xffff7fffU & vlSelf->s[0U]) 
                     | (0x8000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in))) 
                                   << 0xfU)));
    vlSelf->cout[0U] = ((0xfffdffffU & vlSelf->cout[0U]) 
                        | (0x20000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in))) 
                                         << 0x11U) 
                                        | (0xfffe0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in) 
                                               << 0x10U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in) 
                                                 << 0x11U)))) 
                                       | (0xfffe0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in) 
                                              << 0xfU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in) 
                                                << 0x11U))))));
    vlSelf->s[0U] = ((0xfffeffffU & vlSelf->s[0U]) 
                     | (0x10000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in))) 
                                    << 0x10U)));
    vlSelf->cout[0U] = ((0xfffbffffU & vlSelf->cout[0U]) 
                        | (0x40000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in))) 
                                         << 0x12U) 
                                        | (0xfffc0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in) 
                                               << 0x11U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in) 
                                                 << 0x12U)))) 
                                       | (0xfffc0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in) 
                                                << 0x12U))))));
    vlSelf->s[0U] = ((0xfffdffffU & vlSelf->s[0U]) 
                     | (0x20000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in))) 
                                    << 0x11U)));
    vlSelf->cout[0U] = ((0xfff7ffffU & vlSelf->cout[0U]) 
                        | (0x80000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in))) 
                                         << 0x13U) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in) 
                                                 << 0x13U)))) 
                                       | (0xfff80000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in) 
                                              << 0x11U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in) 
                                                << 0x13U))))));
    vlSelf->s[0U] = ((0xfffbffffU & vlSelf->s[0U]) 
                     | (0x40000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in))) 
                                    << 0x12U)));
    vlSelf->cout[0U] = ((0xffefffffU & vlSelf->cout[0U]) 
                        | (0x100000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in))) 
                                          << 0x14U) 
                                         | (0xfff00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in) 
                                                << 0x13U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in) 
                                                  << 0x14U)))) 
                                        | (0xfff00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in) 
                                                 << 0x14U))))));
    vlSelf->s[0U] = ((0xfff7ffffU & vlSelf->s[0U]) 
                     | (0x80000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in))) 
                                    << 0x13U)));
    vlSelf->cout[0U] = ((0xffdfffffU & vlSelf->cout[0U]) 
                        | (0x200000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in))) 
                                          << 0x15U) 
                                         | (0xffe00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in) 
                                                << 0x14U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in) 
                                                  << 0x15U)))) 
                                        | (0xffe00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in) 
                                               << 0x13U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in) 
                                                 << 0x15U))))));
    vlSelf->s[0U] = ((0xffefffffU & vlSelf->s[0U]) 
                     | (0x100000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in))) 
                                     << 0x14U)));
    vlSelf->cout[0U] = ((0xffbfffffU & vlSelf->cout[0U]) 
                        | (0x400000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in))) 
                                          << 0x16U) 
                                         | (0xffc00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in) 
                                                << 0x15U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in) 
                                                  << 0x16U)))) 
                                        | (0xffc00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in) 
                                               << 0x14U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in) 
                                                 << 0x16U))))));
    vlSelf->s[0U] = ((0xffdfffffU & vlSelf->s[0U]) 
                     | (0x200000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in))) 
                                     << 0x15U)));
    vlSelf->cout[0U] = ((0xff7fffffU & vlSelf->cout[0U]) 
                        | (0x800000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in))) 
                                          << 0x17U) 
                                         | (0xff800000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in) 
                                                  << 0x17U)))) 
                                        | (0xff800000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in) 
                                               << 0x15U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in) 
                                                 << 0x17U))))));
    vlSelf->s[0U] = ((0xffbfffffU & vlSelf->s[0U]) 
                     | (0x400000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in))) 
                                     << 0x16U)));
    vlSelf->cout[0U] = ((0xfeffffffU & vlSelf->cout[0U]) 
                        | (0x1000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in))) 
                                           << 0x18U) 
                                          | (0xff000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in) 
                                                 << 0x17U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in) 
                                                   << 0x18U)))) 
                                         | (0xff000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in) 
                                                  << 0x18U))))));
    vlSelf->s[0U] = ((0xff7fffffU & vlSelf->s[0U]) 
                     | (0x800000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in))) 
                                     << 0x17U)));
    vlSelf->cout[0U] = ((0xfdffffffU & vlSelf->cout[0U]) 
                        | (0x2000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in))) 
                                           << 0x19U) 
                                          | (0xfe000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in) 
                                                 << 0x18U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in) 
                                                   << 0x19U)))) 
                                         | (0xfe000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in) 
                                                << 0x17U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in) 
                                                  << 0x19U))))));
    vlSelf->s[0U] = ((0xfeffffffU & vlSelf->s[0U]) 
                     | (0x1000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in))) 
                                      << 0x18U)));
    vlSelf->cout[0U] = ((0xfbffffffU & vlSelf->cout[0U]) 
                        | (0x4000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in))) 
                                           << 0x1aU) 
                                          | (0xfc000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in) 
                                                   << 0x1aU)))) 
                                         | (0xfc000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in) 
                                                << 0x18U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in) 
                                                  << 0x1aU))))));
    vlSelf->s[0U] = ((0xfdffffffU & vlSelf->s[0U]) 
                     | (0x2000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in))) 
                                      << 0x19U)));
    vlSelf->cout[0U] = ((0xf7ffffffU & vlSelf->cout[0U]) 
                        | (0x8000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in))) 
                                           << 0x1bU) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in) 
                                                   << 0x1bU)))) 
                                         | (0xf8000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in) 
                                                << 0x19U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in) 
                                                  << 0x1bU))))));
    vlSelf->s[0U] = ((0xfbffffffU & vlSelf->s[0U]) 
                     | (0x4000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in))) 
                                      << 0x1aU)));
    vlSelf->cout[0U] = ((0xefffffffU & vlSelf->cout[0U]) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in) 
                                                   << 0x1cU))))));
    vlSelf->s[0U] = ((0xf7ffffffU & vlSelf->s[0U]) 
                     | (0x8000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in))) 
                                      << 0x1bU)));
    vlSelf->cout[0U] = ((0xdfffffffU & vlSelf->cout[0U]) 
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in) 
                                                   << 0x1dU))))));
    vlSelf->s[0U] = ((0xefffffffU & vlSelf->s[0U]) 
                     | (0x10000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in))) 
                                       << 0x1cU)));
    vlSelf->cout[0U] = ((0xbfffffffU & vlSelf->cout[0U]) 
                        | (0x40000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in))) 
                                            << 0x1eU) 
                                           | (0xc0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in) 
                                                  << 0x1dU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in) 
                                                    << 0x1eU)))) 
                                          | (0xc0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in) 
                                                 << 0x1cU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in) 
                                                   << 0x1eU))))));
    vlSelf->s[0U] = ((0xdfffffffU & vlSelf->s[0U]) 
                     | (0x20000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in))) 
                                       << 0x1dU)));
    vlSelf->cout[0U] = ((0x7fffffffU & vlSelf->cout[0U]) 
                        | (0x80000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in))) 
                                            << 0x1fU) 
                                           | (0x80000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in) 
                                                  << 0x1eU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in) 
                                                    << 0x1fU)))) 
                                          | (0x80000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in) 
                                                 << 0x1dU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in) 
                                                   << 0x1fU))))));
    vlSelf->s[0U] = ((0xbfffffffU & vlSelf->s[0U]) 
                     | (0x40000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in))) 
                                       << 0x1eU)));
    vlSelf->cout[1U] = ((0xfffffffeU & vlSelf->cout[1U]) 
                        | (1U & (((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in))) 
                                  | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in) 
                                      >> 1U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in))) 
                                 | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in) 
                                     >> 2U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in)))));
    vlSelf->s[0U] = ((0x7fffffffU & vlSelf->s[0U]) 
                     | (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in))) 
                        << 0x1fU));
    vlSelf->cout[1U] = ((0xfffffffdU & vlSelf->cout[1U]) 
                        | (2U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in))) 
                                   << 1U) | (0xfffffffeU 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in) 
                                                   << 1U)))) 
                                 | (0x7ffffffeU & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in) 
                                                      << 1U))))));
    vlSelf->s[1U] = ((0xfffffffeU & vlSelf->s[1U]) 
                     | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in)))));
    vlSelf->cout[1U] = ((0xfffffffbU & vlSelf->cout[1U]) 
                        | (4U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in))) 
                                   << 2U) | (0xfffffffcU 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in) 
                                                   << 2U)))) 
                                 | (0xfffffffcU & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in) 
                                                      << 2U))))));
    vlSelf->s[1U] = ((0xfffffffdU & vlSelf->s[1U]) 
                     | (2U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in))) 
                              << 1U)));
    vlSelf->cout[1U] = ((0xfffffff7U & vlSelf->cout[1U]) 
                        | (8U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in))) 
                                   << 3U) | (0xfffffff8U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in) 
                                                 << 2U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in) 
                                                   << 3U)))) 
                                 | (0xfffffff8U & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in) 
                                                      << 3U))))));
    vlSelf->s[1U] = ((0xfffffffbU & vlSelf->s[1U]) 
                     | (4U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in))) 
                              << 2U)));
    vlSelf->cout[1U] = ((0xffffffefU & vlSelf->cout[1U]) 
                        | (0x10U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in))) 
                                      << 4U) | (0xfffffff0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in) 
                                                      << 4U)))) 
                                    | (0xfffffff0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in) 
                                           << 2U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in) 
                                           << 4U))))));
    vlSelf->s[1U] = ((0xfffffff7U & vlSelf->s[1U]) 
                     | (8U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in))) 
                              << 3U)));
    vlSelf->cout[1U] = ((0xffffffdfU & vlSelf->cout[1U]) 
                        | (0x20U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in))) 
                                      << 5U) | (0xffffffe0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in) 
                                                    << 4U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in) 
                                                      << 5U)))) 
                                    | (0xffffffe0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in) 
                                           << 3U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in) 
                                           << 5U))))));
    vlSelf->s[1U] = ((0xffffffefU & vlSelf->s[1U]) 
                     | (0x10U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in))) 
                                 << 4U)));
    vlSelf->cout[1U] = ((0xffffffbfU & vlSelf->cout[1U]) 
                        | (0x40U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in))) 
                                      << 6U) | (0xffffffc0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in) 
                                                      << 6U)))) 
                                    | (0xffffffc0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in) 
                                           << 4U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in) 
                                           << 6U))))));
    vlSelf->s[1U] = ((0xffffffdfU & vlSelf->s[1U]) 
                     | (0x20U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in))) 
                                 << 5U)));
    vlSelf->cout[1U] = ((0xffffff7fU & vlSelf->cout[1U]) 
                        | (0x80U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in))) 
                                      << 7U) | (0xffffff80U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in) 
                                                      << 7U)))) 
                                    | (0xffffff80U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in) 
                                           << 5U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in) 
                                           << 7U))))));
    vlSelf->s[1U] = ((0xffffffbfU & vlSelf->s[1U]) 
                     | (0x40U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in))) 
                                 << 6U)));
    vlSelf->cout[1U] = ((0xfffffeffU & vlSelf->cout[1U]) 
                        | (0x100U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in))) 
                                       << 8U) | (0xffffff00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in) 
                                                       << 8U)))) 
                                     | (0xffffff00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in) 
                                            << 6U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in) 
                                              << 8U))))));
    vlSelf->s[1U] = ((0xffffff7fU & vlSelf->s[1U]) 
                     | (0x80U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in))) 
                                 << 7U)));
    vlSelf->cout[1U] = ((0xfffffdffU & vlSelf->cout[1U]) 
                        | (0x200U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in))) 
                                       << 9U) | (0xfffffe00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in) 
                                                     << 8U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in) 
                                                       << 9U)))) 
                                     | (0xfffffe00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in) 
                                            << 7U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in) 
                                              << 9U))))));
    vlSelf->s[1U] = ((0xfffffeffU & vlSelf->s[1U]) 
                     | (0x100U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in))) 
                                  << 8U)));
    vlSelf->cout[1U] = ((0xfffffbffU & vlSelf->cout[1U]) 
                        | (0x400U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in))) 
                                       << 0xaU) | (0xfffffc00U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in) 
                                                       << 9U) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in) 
                                                         << 0xaU)))) 
                                     | (0xfffffc00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in) 
                                            << 8U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in) 
                                              << 0xaU))))));
    vlSelf->s[1U] = ((0xfffffdffU & vlSelf->s[1U]) 
                     | (0x200U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in))) 
                                  << 9U)));
    vlSelf->cout[1U] = ((0xfffff7ffU & vlSelf->cout[1U]) 
                        | (0x800U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in))) 
                                       << 0xbU) | (0xfffff800U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in) 
                                                         << 0xbU)))) 
                                     | (0xfffff800U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in) 
                                            << 9U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in) 
                                              << 0xbU))))));
    vlSelf->s[1U] = ((0xfffffbffU & vlSelf->s[1U]) 
                     | (0x400U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in))) 
                                  << 0xaU)));
    vlSelf->cout[1U] = ((0xffffefffU & vlSelf->cout[1U]) 
                        | (0x1000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in))) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in) 
                                            << 0xbU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in) 
                                              << 0xcU)))) 
                                      | (0xfffff000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in) 
                                             << 0xaU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in) 
                                               << 0xcU))))));
    vlSelf->s[1U] = ((0xfffff7ffU & vlSelf->s[1U]) 
                     | (0x800U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in))) 
                                  << 0xbU)));
    vlSelf->cout[1U] = ((0xffffdfffU & vlSelf->cout[1U]) 
                        | (0x2000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in))) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in) 
                                            << 0xcU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in) 
                                              << 0xdU)))) 
                                      | (0xffffe000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in) 
                                             << 0xbU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in) 
                                               << 0xdU))))));
    vlSelf->s[1U] = ((0xffffefffU & vlSelf->s[1U]) 
                     | (0x1000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in))) 
                                   << 0xcU)));
    vlSelf->cout[1U] = ((0xffffbfffU & vlSelf->cout[1U]) 
                        | (0x4000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in))) 
                                        << 0xeU) | 
                                       (0xffffc000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in) 
                                            << 0xdU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in) 
                                              << 0xeU)))) 
                                      | (0xffffc000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in) 
                                             << 0xcU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in) 
                                               << 0xeU))))));
    vlSelf->s[1U] = ((0xffffdfffU & vlSelf->s[1U]) 
                     | (0x2000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in))) 
                                   << 0xdU)));
    vlSelf->cout[1U] = ((0xffff7fffU & vlSelf->cout[1U]) 
                        | (0x8000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in))) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in) 
                                            << 0xeU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in) 
                                              << 0xfU)))) 
                                      | (0xffff8000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in) 
                                             << 0xdU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in) 
                                               << 0xfU))))));
    vlSelf->s[1U] = ((0xffffbfffU & vlSelf->s[1U]) 
                     | (0x4000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in))) 
                                   << 0xeU)));
    vlSelf->cout[1U] = ((0xfffeffffU & vlSelf->cout[1U]) 
                        | (0x10000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in))) 
                                         << 0x10U) 
                                        | (0xffff0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in) 
                                               << 0xfU) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in) 
                                                 << 0x10U)))) 
                                       | (0xffff0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in) 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in) 
                                                << 0x10U))))));
    vlSelf->s[1U] = ((0xffff7fffU & vlSelf->s[1U]) 
                     | (0x8000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in))) 
                                   << 0xfU)));
    vlSelf->cout[1U] = ((0xfffdffffU & vlSelf->cout[1U]) 
                        | (0x20000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in))) 
                                         << 0x11U) 
                                        | (0xfffe0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in) 
                                               << 0x10U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in) 
                                                 << 0x11U)))) 
                                       | (0xfffe0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in) 
                                              << 0xfU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in) 
                                                << 0x11U))))));
    vlSelf->s[1U] = ((0xfffeffffU & vlSelf->s[1U]) 
                     | (0x10000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in))) 
                                    << 0x10U)));
    vlSelf->cout[1U] = ((0xfffbffffU & vlSelf->cout[1U]) 
                        | (0x40000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in))) 
                                         << 0x12U) 
                                        | (0xfffc0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in) 
                                               << 0x11U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in) 
                                                 << 0x12U)))) 
                                       | (0xfffc0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in) 
                                                << 0x12U))))));
    vlSelf->s[1U] = ((0xfffdffffU & vlSelf->s[1U]) 
                     | (0x20000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in))) 
                                    << 0x11U)));
    vlSelf->cout[1U] = ((0xfff7ffffU & vlSelf->cout[1U]) 
                        | (0x80000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in))) 
                                         << 0x13U) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in) 
                                                 << 0x13U)))) 
                                       | (0xfff80000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in) 
                                              << 0x11U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in) 
                                                << 0x13U))))));
    vlSelf->s[1U] = ((0xfffbffffU & vlSelf->s[1U]) 
                     | (0x40000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in))) 
                                    << 0x12U)));
    vlSelf->cout[1U] = ((0xffefffffU & vlSelf->cout[1U]) 
                        | (0x100000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in))) 
                                          << 0x14U) 
                                         | (0xfff00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in) 
                                                << 0x13U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in) 
                                                  << 0x14U)))) 
                                        | (0xfff00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in) 
                                                 << 0x14U))))));
    vlSelf->s[1U] = ((0xfff7ffffU & vlSelf->s[1U]) 
                     | (0x80000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in))) 
                                    << 0x13U)));
    vlSelf->cout[1U] = ((0xffdfffffU & vlSelf->cout[1U]) 
                        | (0x200000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in))) 
                                          << 0x15U) 
                                         | (0xffe00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in) 
                                                << 0x14U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in) 
                                                  << 0x15U)))) 
                                        | (0xffe00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in) 
                                               << 0x13U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in) 
                                                 << 0x15U))))));
    vlSelf->s[1U] = ((0xffefffffU & vlSelf->s[1U]) 
                     | (0x100000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in))) 
                                     << 0x14U)));
    vlSelf->cout[1U] = ((0xffbfffffU & vlSelf->cout[1U]) 
                        | (0x400000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in))) 
                                          << 0x16U) 
                                         | (0xffc00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in) 
                                                << 0x15U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in) 
                                                  << 0x16U)))) 
                                        | (0xffc00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in) 
                                               << 0x14U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in) 
                                                 << 0x16U))))));
    vlSelf->s[1U] = ((0xffdfffffU & vlSelf->s[1U]) 
                     | (0x200000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in))) 
                                     << 0x15U)));
    vlSelf->cout[1U] = ((0xff7fffffU & vlSelf->cout[1U]) 
                        | (0x800000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in))) 
                                          << 0x17U) 
                                         | (0xff800000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in) 
                                                  << 0x17U)))) 
                                        | (0xff800000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in) 
                                               << 0x15U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in) 
                                                 << 0x17U))))));
    vlSelf->s[1U] = ((0xffbfffffU & vlSelf->s[1U]) 
                     | (0x400000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in))) 
                                     << 0x16U)));
    vlSelf->cout[1U] = ((0xfeffffffU & vlSelf->cout[1U]) 
                        | (0x1000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in))) 
                                           << 0x18U) 
                                          | (0xff000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in) 
                                                 << 0x17U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in) 
                                                   << 0x18U)))) 
                                         | (0xff000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in) 
                                                  << 0x18U))))));
    vlSelf->s[1U] = ((0xff7fffffU & vlSelf->s[1U]) 
                     | (0x800000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in))) 
                                     << 0x17U)));
    vlSelf->cout[1U] = ((0xfdffffffU & vlSelf->cout[1U]) 
                        | (0x2000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in))) 
                                           << 0x19U) 
                                          | (0xfe000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in) 
                                                 << 0x18U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in) 
                                                   << 0x19U)))) 
                                         | (0xfe000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in) 
                                                << 0x17U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in) 
                                                  << 0x19U))))));
    vlSelf->s[1U] = ((0xfeffffffU & vlSelf->s[1U]) 
                     | (0x1000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in))) 
                                      << 0x18U)));
    vlSelf->cout[1U] = ((0xfbffffffU & vlSelf->cout[1U]) 
                        | (0x4000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in))) 
                                           << 0x1aU) 
                                          | (0xfc000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in) 
                                                   << 0x1aU)))) 
                                         | (0xfc000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in) 
                                                << 0x18U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in) 
                                                  << 0x1aU))))));
    vlSelf->s[1U] = ((0xfdffffffU & vlSelf->s[1U]) 
                     | (0x2000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in))) 
                                      << 0x19U)));
    vlSelf->cout[1U] = ((0xf7ffffffU & vlSelf->cout[1U]) 
                        | (0x8000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in))) 
                                           << 0x1bU) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in) 
                                                   << 0x1bU)))) 
                                         | (0xf8000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in) 
                                                << 0x19U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in) 
                                                  << 0x1bU))))));
    vlSelf->s[1U] = ((0xfbffffffU & vlSelf->s[1U]) 
                     | (0x4000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in))) 
                                      << 0x1aU)));
    vlSelf->cout[1U] = ((0xefffffffU & vlSelf->cout[1U]) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in) 
                                                   << 0x1cU))))));
    vlSelf->s[1U] = ((0xf7ffffffU & vlSelf->s[1U]) 
                     | (0x8000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in))) 
                                      << 0x1bU)));
    vlSelf->cout[1U] = ((0xdfffffffU & vlSelf->cout[1U]) 
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in) 
                                                   << 0x1dU))))));
    vlSelf->s[1U] = ((0xefffffffU & vlSelf->s[1U]) 
                     | (0x10000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in))) 
                                       << 0x1cU)));
    vlSelf->cout[1U] = ((0xbfffffffU & vlSelf->cout[1U]) 
                        | (0x40000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in))) 
                                            << 0x1eU) 
                                           | (0xc0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in) 
                                                  << 0x1dU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in) 
                                                    << 0x1eU)))) 
                                          | (0xc0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in) 
                                                 << 0x1cU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in) 
                                                   << 0x1eU))))));
    vlSelf->s[1U] = ((0xdfffffffU & vlSelf->s[1U]) 
                     | (0x20000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in))) 
                                       << 0x1dU)));
    vlSelf->cout[1U] = ((0x7fffffffU & vlSelf->cout[1U]) 
                        | (0x80000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in))) 
                                            << 0x1fU) 
                                           | (0x80000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in) 
                                                  << 0x1eU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in) 
                                                    << 0x1fU)))) 
                                          | (0x80000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in) 
                                                 << 0x1dU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in) 
                                                   << 0x1fU))))));
    vlSelf->s[1U] = ((0xbfffffffU & vlSelf->s[1U]) 
                     | (0x40000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in))) 
                                       << 0x1eU)));
    vlSelf->cout[2U] = ((0xfffffffeU & vlSelf->cout[2U]) 
                        | (1U & (((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in))) 
                                  | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in) 
                                      >> 1U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in))) 
                                 | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in) 
                                     >> 2U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in)))));
    vlSelf->s[1U] = ((0x7fffffffU & vlSelf->s[1U]) 
                     | (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in))) 
                        << 0x1fU));
    vlSelf->cout[2U] = ((0xfffffffdU & vlSelf->cout[2U]) 
                        | (2U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in))) 
                                   << 1U) | (0xfffffffeU 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in) 
                                                   << 1U)))) 
                                 | (0x7ffffffeU & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in) 
                                                      << 1U))))));
    vlSelf->s[2U] = ((0xfffffffeU & vlSelf->s[2U]) 
                     | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in)))));
    vlSelf->cout[2U] = ((0xfffffffbU & vlSelf->cout[2U]) 
                        | (4U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in))) 
                                   << 2U) | (0xfffffffcU 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in) 
                                                   << 2U)))) 
                                 | (0xfffffffcU & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in) 
                                                      << 2U))))));
    vlSelf->s[2U] = ((0xfffffffdU & vlSelf->s[2U]) 
                     | (2U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in))) 
                              << 1U)));
    vlSelf->cout[2U] = ((0xfffffff7U & vlSelf->cout[2U]) 
                        | (8U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in))) 
                                   << 3U) | (0xfffffff8U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in) 
                                                 << 2U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in) 
                                                   << 3U)))) 
                                 | (0xfffffff8U & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in) 
                                                      << 3U))))));
    vlSelf->s[2U] = ((0xfffffffbU & vlSelf->s[2U]) 
                     | (4U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in))) 
                              << 2U)));
    vlSelf->cout[2U] = ((0xffffffefU & vlSelf->cout[2U]) 
                        | (0x10U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in))) 
                                      << 4U) | (0xfffffff0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in) 
                                                      << 4U)))) 
                                    | (0xfffffff0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in) 
                                           << 2U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in) 
                                           << 4U))))));
    vlSelf->s[2U] = ((0xfffffff7U & vlSelf->s[2U]) 
                     | (8U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in))) 
                              << 3U)));
    vlSelf->cout[2U] = ((0xffffffdfU & vlSelf->cout[2U]) 
                        | (0x20U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in))) 
                                      << 5U) | (0xffffffe0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in) 
                                                    << 4U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in) 
                                                      << 5U)))) 
                                    | (0xffffffe0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in) 
                                           << 3U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in) 
                                           << 5U))))));
    vlSelf->s[2U] = ((0xffffffefU & vlSelf->s[2U]) 
                     | (0x10U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in))) 
                                 << 4U)));
    vlSelf->cout[2U] = ((0xffffffbfU & vlSelf->cout[2U]) 
                        | (0x40U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in))) 
                                      << 6U) | (0xffffffc0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in) 
                                                      << 6U)))) 
                                    | (0xffffffc0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in) 
                                           << 4U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in) 
                                           << 6U))))));
    vlSelf->s[2U] = ((0xffffffdfU & vlSelf->s[2U]) 
                     | (0x20U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in))) 
                                 << 5U)));
    vlSelf->cout[2U] = ((0xffffff7fU & vlSelf->cout[2U]) 
                        | (0x80U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in))) 
                                      << 7U) | (0xffffff80U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in) 
                                                      << 7U)))) 
                                    | (0xffffff80U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in) 
                                           << 5U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in) 
                                           << 7U))))));
    vlSelf->s[2U] = ((0xffffffbfU & vlSelf->s[2U]) 
                     | (0x40U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in))) 
                                 << 6U)));
    vlSelf->cout[2U] = ((0xfffffeffU & vlSelf->cout[2U]) 
                        | (0x100U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in))) 
                                       << 8U) | (0xffffff00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in) 
                                                       << 8U)))) 
                                     | (0xffffff00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in) 
                                            << 6U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in) 
                                              << 8U))))));
    vlSelf->s[2U] = ((0xffffff7fU & vlSelf->s[2U]) 
                     | (0x80U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in))) 
                                 << 7U)));
    vlSelf->cout[2U] = ((0xfffffdffU & vlSelf->cout[2U]) 
                        | (0x200U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in))) 
                                       << 9U) | (0xfffffe00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in) 
                                                     << 8U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in) 
                                                       << 9U)))) 
                                     | (0xfffffe00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in) 
                                            << 7U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in) 
                                              << 9U))))));
    vlSelf->s[2U] = ((0xfffffeffU & vlSelf->s[2U]) 
                     | (0x100U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in))) 
                                  << 8U)));
    vlSelf->cout[2U] = ((0xfffffbffU & vlSelf->cout[2U]) 
                        | (0x400U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in))) 
                                       << 0xaU) | (0xfffffc00U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in) 
                                                       << 9U) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in) 
                                                         << 0xaU)))) 
                                     | (0xfffffc00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in) 
                                            << 8U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in) 
                                              << 0xaU))))));
    vlSelf->s[2U] = ((0xfffffdffU & vlSelf->s[2U]) 
                     | (0x200U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in))) 
                                  << 9U)));
    vlSelf->cout[2U] = ((0xfffff7ffU & vlSelf->cout[2U]) 
                        | (0x800U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in))) 
                                       << 0xbU) | (0xfffff800U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in) 
                                                         << 0xbU)))) 
                                     | (0xfffff800U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in) 
                                            << 9U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in) 
                                              << 0xbU))))));
    vlSelf->s[2U] = ((0xfffffbffU & vlSelf->s[2U]) 
                     | (0x400U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in))) 
                                  << 0xaU)));
    vlSelf->cout[2U] = ((0xffffefffU & vlSelf->cout[2U]) 
                        | (0x1000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in))) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in) 
                                            << 0xbU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in) 
                                              << 0xcU)))) 
                                      | (0xfffff000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in) 
                                             << 0xaU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in) 
                                               << 0xcU))))));
    vlSelf->s[2U] = ((0xfffff7ffU & vlSelf->s[2U]) 
                     | (0x800U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in))) 
                                  << 0xbU)));
    vlSelf->cout[2U] = ((0xffffdfffU & vlSelf->cout[2U]) 
                        | (0x2000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in))) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in) 
                                            << 0xcU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in) 
                                              << 0xdU)))) 
                                      | (0xffffe000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in) 
                                             << 0xbU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in) 
                                               << 0xdU))))));
    vlSelf->s[2U] = ((0xffffefffU & vlSelf->s[2U]) 
                     | (0x1000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in))) 
                                   << 0xcU)));
    vlSelf->cout[2U] = ((0xffffbfffU & vlSelf->cout[2U]) 
                        | (0x4000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in))) 
                                        << 0xeU) | 
                                       (0xffffc000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in) 
                                            << 0xdU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in) 
                                              << 0xeU)))) 
                                      | (0xffffc000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in) 
                                             << 0xcU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in) 
                                               << 0xeU))))));
    vlSelf->s[2U] = ((0xffffdfffU & vlSelf->s[2U]) 
                     | (0x2000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in))) 
                                   << 0xdU)));
    vlSelf->cout[2U] = ((0xffff7fffU & vlSelf->cout[2U]) 
                        | (0x8000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in))) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in) 
                                            << 0xeU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in) 
                                              << 0xfU)))) 
                                      | (0xffff8000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in) 
                                             << 0xdU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in) 
                                               << 0xfU))))));
    vlSelf->s[2U] = ((0xffffbfffU & vlSelf->s[2U]) 
                     | (0x4000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in))) 
                                   << 0xeU)));
    vlSelf->cout[2U] = ((0xfffeffffU & vlSelf->cout[2U]) 
                        | (0x10000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in))) 
                                         << 0x10U) 
                                        | (0xffff0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in) 
                                               << 0xfU) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in) 
                                                 << 0x10U)))) 
                                       | (0xffff0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in) 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in) 
                                                << 0x10U))))));
    vlSelf->s[2U] = ((0xffff7fffU & vlSelf->s[2U]) 
                     | (0x8000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in))) 
                                   << 0xfU)));
    vlSelf->cout[2U] = ((0xfffdffffU & vlSelf->cout[2U]) 
                        | (0x20000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in))) 
                                         << 0x11U) 
                                        | (0xfffe0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in) 
                                               << 0x10U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in) 
                                                 << 0x11U)))) 
                                       | (0xfffe0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in) 
                                              << 0xfU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in) 
                                                << 0x11U))))));
    vlSelf->s[2U] = ((0xfffeffffU & vlSelf->s[2U]) 
                     | (0x10000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in))) 
                                    << 0x10U)));
    vlSelf->cout[2U] = ((0xfffbffffU & vlSelf->cout[2U]) 
                        | (0x40000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in))) 
                                         << 0x12U) 
                                        | (0xfffc0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in) 
                                               << 0x11U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in) 
                                                 << 0x12U)))) 
                                       | (0xfffc0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in) 
                                                << 0x12U))))));
    vlSelf->s[2U] = ((0xfffdffffU & vlSelf->s[2U]) 
                     | (0x20000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in))) 
                                    << 0x11U)));
    vlSelf->cout[2U] = ((0xfff7ffffU & vlSelf->cout[2U]) 
                        | (0x80000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in))) 
                                         << 0x13U) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in) 
                                                 << 0x13U)))) 
                                       | (0xfff80000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in) 
                                              << 0x11U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in) 
                                                << 0x13U))))));
    vlSelf->s[2U] = ((0xfffbffffU & vlSelf->s[2U]) 
                     | (0x40000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in))) 
                                    << 0x12U)));
    vlSelf->cout[2U] = ((0xffefffffU & vlSelf->cout[2U]) 
                        | (0x100000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in))) 
                                          << 0x14U) 
                                         | (0xfff00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in) 
                                                << 0x13U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in) 
                                                  << 0x14U)))) 
                                        | (0xfff00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in) 
                                                 << 0x14U))))));
    vlSelf->s[2U] = ((0xfff7ffffU & vlSelf->s[2U]) 
                     | (0x80000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in))) 
                                    << 0x13U)));
    vlSelf->cout[2U] = ((0xffdfffffU & vlSelf->cout[2U]) 
                        | (0x200000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in))) 
                                          << 0x15U) 
                                         | (0xffe00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in) 
                                                << 0x14U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in) 
                                                  << 0x15U)))) 
                                        | (0xffe00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in) 
                                               << 0x13U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in) 
                                                 << 0x15U))))));
    vlSelf->s[2U] = ((0xffefffffU & vlSelf->s[2U]) 
                     | (0x100000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in))) 
                                     << 0x14U)));
    vlSelf->cout[2U] = ((0xffbfffffU & vlSelf->cout[2U]) 
                        | (0x400000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in))) 
                                          << 0x16U) 
                                         | (0xffc00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in) 
                                                << 0x15U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in) 
                                                  << 0x16U)))) 
                                        | (0xffc00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in) 
                                               << 0x14U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in) 
                                                 << 0x16U))))));
    vlSelf->s[2U] = ((0xffdfffffU & vlSelf->s[2U]) 
                     | (0x200000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in))) 
                                     << 0x15U)));
    vlSelf->cout[2U] = ((0xff7fffffU & vlSelf->cout[2U]) 
                        | (0x800000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in))) 
                                          << 0x17U) 
                                         | (0xff800000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in) 
                                                  << 0x17U)))) 
                                        | (0xff800000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in) 
                                               << 0x15U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in) 
                                                 << 0x17U))))));
    vlSelf->s[2U] = ((0xffbfffffU & vlSelf->s[2U]) 
                     | (0x400000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in))) 
                                     << 0x16U)));
    vlSelf->cout[2U] = ((0xfeffffffU & vlSelf->cout[2U]) 
                        | (0x1000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in))) 
                                           << 0x18U) 
                                          | (0xff000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in) 
                                                 << 0x17U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in) 
                                                   << 0x18U)))) 
                                         | (0xff000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in) 
                                                  << 0x18U))))));
    vlSelf->s[2U] = ((0xff7fffffU & vlSelf->s[2U]) 
                     | (0x800000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in))) 
                                     << 0x17U)));
    vlSelf->cout[2U] = ((0xfdffffffU & vlSelf->cout[2U]) 
                        | (0x2000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in))) 
                                           << 0x19U) 
                                          | (0xfe000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in) 
                                                 << 0x18U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in) 
                                                   << 0x19U)))) 
                                         | (0xfe000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in) 
                                                << 0x17U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in) 
                                                  << 0x19U))))));
    vlSelf->s[2U] = ((0xfeffffffU & vlSelf->s[2U]) 
                     | (0x1000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in))) 
                                      << 0x18U)));
    vlSelf->cout[2U] = ((0xfbffffffU & vlSelf->cout[2U]) 
                        | (0x4000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in))) 
                                           << 0x1aU) 
                                          | (0xfc000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in) 
                                                   << 0x1aU)))) 
                                         | (0xfc000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in) 
                                                << 0x18U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in) 
                                                  << 0x1aU))))));
    vlSelf->s[2U] = ((0xfdffffffU & vlSelf->s[2U]) 
                     | (0x2000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in))) 
                                      << 0x19U)));
    vlSelf->cout[2U] = ((0xf7ffffffU & vlSelf->cout[2U]) 
                        | (0x8000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in))) 
                                           << 0x1bU) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in) 
                                                   << 0x1bU)))) 
                                         | (0xf8000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in) 
                                                << 0x19U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in) 
                                                  << 0x1bU))))));
    vlSelf->s[2U] = ((0xfbffffffU & vlSelf->s[2U]) 
                     | (0x4000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in))) 
                                      << 0x1aU)));
    vlSelf->cout[2U] = ((0xefffffffU & vlSelf->cout[2U]) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in) 
                                                   << 0x1cU))))));
    vlSelf->s[2U] = ((0xf7ffffffU & vlSelf->s[2U]) 
                     | (0x8000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in))) 
                                      << 0x1bU)));
    vlSelf->cout[2U] = ((0xdfffffffU & vlSelf->cout[2U]) 
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in) 
                                                   << 0x1dU))))));
    vlSelf->s[2U] = ((0xefffffffU & vlSelf->s[2U]) 
                     | (0x10000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in))) 
                                       << 0x1cU)));
    vlSelf->cout[2U] = ((0xbfffffffU & vlSelf->cout[2U]) 
                        | (0x40000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in))) 
                                            << 0x1eU) 
                                           | (0xc0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in) 
                                                  << 0x1dU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in) 
                                                    << 0x1eU)))) 
                                          | (0xc0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in) 
                                                 << 0x1cU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in) 
                                                   << 0x1eU))))));
    vlSelf->s[2U] = ((0xdfffffffU & vlSelf->s[2U]) 
                     | (0x20000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in))) 
                                       << 0x1dU)));
    vlSelf->cout[2U] = ((0x7fffffffU & vlSelf->cout[2U]) 
                        | (0x80000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in))) 
                                            << 0x1fU) 
                                           | (0x80000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in) 
                                                  << 0x1eU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in) 
                                                    << 0x1fU)))) 
                                          | (0x80000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in) 
                                                 << 0x1dU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in) 
                                                   << 0x1fU))))));
    vlSelf->s[2U] = ((0xbfffffffU & vlSelf->s[2U]) 
                     | (0x40000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in))) 
                                       << 0x1eU)));
    vlSelf->cout[3U] = ((0xfffffffeU & vlSelf->cout[3U]) 
                        | (1U & (((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in))) 
                                  | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in) 
                                      >> 1U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in))) 
                                 | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in) 
                                     >> 2U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in)))));
    vlSelf->s[2U] = ((0x7fffffffU & vlSelf->s[2U]) 
                     | (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in))) 
                        << 0x1fU));
    vlSelf->cout[3U] = ((0xfffffffdU & vlSelf->cout[3U]) 
                        | (2U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in))) 
                                   << 1U) | (0xfffffffeU 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in) 
                                                   << 1U)))) 
                                 | (0x7ffffffeU & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in) 
                                                      << 1U))))));
    vlSelf->s[3U] = ((0xfffffffeU & vlSelf->s[3U]) 
                     | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in)))));
    vlSelf->cout[3U] = ((0xfffffffbU & vlSelf->cout[3U]) 
                        | (4U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in))) 
                                   << 2U) | (0xfffffffcU 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in) 
                                                   << 2U)))) 
                                 | (0xfffffffcU & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in) 
                                                      << 2U))))));
    vlSelf->s[3U] = ((0xfffffffdU & vlSelf->s[3U]) 
                     | (2U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in))) 
                              << 1U)));
    vlSelf->cout[3U] = ((0xfffffff7U & vlSelf->cout[3U]) 
                        | (8U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in))) 
                                   << 3U) | (0xfffffff8U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in) 
                                                 << 2U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in) 
                                                   << 3U)))) 
                                 | (0xfffffff8U & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in) 
                                                      << 3U))))));
    vlSelf->s[3U] = ((0xfffffffbU & vlSelf->s[3U]) 
                     | (4U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in))) 
                              << 2U)));
    vlSelf->cout[3U] = ((0xffffffefU & vlSelf->cout[3U]) 
                        | (0x10U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in))) 
                                      << 4U) | (0xfffffff0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in) 
                                                      << 4U)))) 
                                    | (0xfffffff0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in) 
                                           << 2U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in) 
                                           << 4U))))));
    vlSelf->s[3U] = ((0xfffffff7U & vlSelf->s[3U]) 
                     | (8U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in))) 
                              << 3U)));
    vlSelf->cout[3U] = ((0xffffffdfU & vlSelf->cout[3U]) 
                        | (0x20U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in))) 
                                      << 5U) | (0xffffffe0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in) 
                                                    << 4U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in) 
                                                      << 5U)))) 
                                    | (0xffffffe0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in) 
                                           << 3U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in) 
                                           << 5U))))));
    vlSelf->s[3U] = ((0xffffffefU & vlSelf->s[3U]) 
                     | (0x10U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in))) 
                                 << 4U)));
    vlSelf->cout[3U] = ((0xffffffbfU & vlSelf->cout[3U]) 
                        | (0x40U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in))) 
                                      << 6U) | (0xffffffc0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in) 
                                                      << 6U)))) 
                                    | (0xffffffc0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in) 
                                           << 4U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in) 
                                           << 6U))))));
    vlSelf->s[3U] = ((0xffffffdfU & vlSelf->s[3U]) 
                     | (0x20U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in))) 
                                 << 5U)));
    vlSelf->cout[3U] = ((0xffffff7fU & vlSelf->cout[3U]) 
                        | (0x80U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in))) 
                                      << 7U) | (0xffffff80U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in) 
                                                      << 7U)))) 
                                    | (0xffffff80U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in) 
                                           << 5U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in) 
                                           << 7U))))));
    vlSelf->s[3U] = ((0xffffffbfU & vlSelf->s[3U]) 
                     | (0x40U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in))) 
                                 << 6U)));
    vlSelf->cout[3U] = ((0xfffffeffU & vlSelf->cout[3U]) 
                        | (0x100U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in))) 
                                       << 8U) | (0xffffff00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in) 
                                                       << 8U)))) 
                                     | (0xffffff00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in) 
                                            << 6U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in) 
                                              << 8U))))));
    vlSelf->s[3U] = ((0xffffff7fU & vlSelf->s[3U]) 
                     | (0x80U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in))) 
                                 << 7U)));
    vlSelf->cout[3U] = ((0xfffffdffU & vlSelf->cout[3U]) 
                        | (0x200U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in))) 
                                       << 9U) | (0xfffffe00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in) 
                                                     << 8U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in) 
                                                       << 9U)))) 
                                     | (0xfffffe00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in) 
                                            << 7U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in) 
                                              << 9U))))));
    vlSelf->s[3U] = ((0xfffffeffU & vlSelf->s[3U]) 
                     | (0x100U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in))) 
                                  << 8U)));
    vlSelf->cout[3U] = ((0xfffffbffU & vlSelf->cout[3U]) 
                        | (0x400U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in))) 
                                       << 0xaU) | (0xfffffc00U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in) 
                                                       << 9U) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in) 
                                                         << 0xaU)))) 
                                     | (0xfffffc00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in) 
                                            << 8U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in) 
                                              << 0xaU))))));
    vlSelf->s[3U] = ((0xfffffdffU & vlSelf->s[3U]) 
                     | (0x200U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in))) 
                                  << 9U)));
    vlSelf->cout[3U] = ((0xfffff7ffU & vlSelf->cout[3U]) 
                        | (0x800U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in))) 
                                       << 0xbU) | (0xfffff800U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in) 
                                                         << 0xbU)))) 
                                     | (0xfffff800U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in) 
                                            << 9U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in) 
                                              << 0xbU))))));
    vlSelf->s[3U] = ((0xfffffbffU & vlSelf->s[3U]) 
                     | (0x400U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in))) 
                                  << 0xaU)));
    vlSelf->cout[3U] = ((0xffffefffU & vlSelf->cout[3U]) 
                        | (0x1000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in))) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in) 
                                            << 0xbU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in) 
                                              << 0xcU)))) 
                                      | (0xfffff000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in) 
                                             << 0xaU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in) 
                                               << 0xcU))))));
    vlSelf->s[3U] = ((0xfffff7ffU & vlSelf->s[3U]) 
                     | (0x800U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in))) 
                                  << 0xbU)));
    vlSelf->cout[3U] = ((0xffffdfffU & vlSelf->cout[3U]) 
                        | (0x2000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in))) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in) 
                                            << 0xcU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in) 
                                              << 0xdU)))) 
                                      | (0xffffe000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in) 
                                             << 0xbU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in) 
                                               << 0xdU))))));
    vlSelf->s[3U] = ((0xffffefffU & vlSelf->s[3U]) 
                     | (0x1000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in))) 
                                   << 0xcU)));
    vlSelf->cout[3U] = ((0xffffbfffU & vlSelf->cout[3U]) 
                        | (0x4000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in))) 
                                        << 0xeU) | 
                                       (0xffffc000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in) 
                                            << 0xdU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in) 
                                              << 0xeU)))) 
                                      | (0xffffc000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in) 
                                             << 0xcU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in) 
                                               << 0xeU))))));
    vlSelf->s[3U] = ((0xffffdfffU & vlSelf->s[3U]) 
                     | (0x2000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in))) 
                                   << 0xdU)));
    vlSelf->cout[3U] = ((0xffff7fffU & vlSelf->cout[3U]) 
                        | (0x8000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in))) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in) 
                                            << 0xeU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in) 
                                              << 0xfU)))) 
                                      | (0xffff8000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in) 
                                             << 0xdU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in) 
                                               << 0xfU))))));
    vlSelf->s[3U] = ((0xffffbfffU & vlSelf->s[3U]) 
                     | (0x4000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in))) 
                                   << 0xeU)));
    vlSelf->cout[3U] = ((0xfffeffffU & vlSelf->cout[3U]) 
                        | (0x10000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in))) 
                                         << 0x10U) 
                                        | (0xffff0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in) 
                                               << 0xfU) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in) 
                                                 << 0x10U)))) 
                                       | (0xffff0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in) 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in) 
                                                << 0x10U))))));
    vlSelf->s[3U] = ((0xffff7fffU & vlSelf->s[3U]) 
                     | (0x8000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in))) 
                                   << 0xfU)));
    vlSelf->cout[3U] = ((0xfffdffffU & vlSelf->cout[3U]) 
                        | (0x20000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in))) 
                                         << 0x11U) 
                                        | (0xfffe0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in) 
                                               << 0x10U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in) 
                                                 << 0x11U)))) 
                                       | (0xfffe0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in) 
                                              << 0xfU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in) 
                                                << 0x11U))))));
    vlSelf->s[3U] = ((0xfffeffffU & vlSelf->s[3U]) 
                     | (0x10000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in))) 
                                    << 0x10U)));
    vlSelf->cout[3U] = ((0xfffbffffU & vlSelf->cout[3U]) 
                        | (0x40000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in))) 
                                         << 0x12U) 
                                        | (0xfffc0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in) 
                                               << 0x11U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in) 
                                                 << 0x12U)))) 
                                       | (0xfffc0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in) 
                                                << 0x12U))))));
    vlSelf->s[3U] = ((0xfffdffffU & vlSelf->s[3U]) 
                     | (0x20000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in))) 
                                    << 0x11U)));
    vlSelf->cout[3U] = ((0xfff7ffffU & vlSelf->cout[3U]) 
                        | (0x80000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in))) 
                                         << 0x13U) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in) 
                                                 << 0x13U)))) 
                                       | (0xfff80000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in) 
                                              << 0x11U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in) 
                                                << 0x13U))))));
    vlSelf->s[3U] = ((0xfffbffffU & vlSelf->s[3U]) 
                     | (0x40000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in))) 
                                    << 0x12U)));
    vlSelf->cout[3U] = ((0xffefffffU & vlSelf->cout[3U]) 
                        | (0x100000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in))) 
                                          << 0x14U) 
                                         | (0xfff00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in) 
                                                << 0x13U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in) 
                                                  << 0x14U)))) 
                                        | (0xfff00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in) 
                                                 << 0x14U))))));
    vlSelf->s[3U] = ((0xfff7ffffU & vlSelf->s[3U]) 
                     | (0x80000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in))) 
                                    << 0x13U)));
    vlSelf->cout[3U] = ((0xffdfffffU & vlSelf->cout[3U]) 
                        | (0x200000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in))) 
                                          << 0x15U) 
                                         | (0xffe00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in) 
                                                << 0x14U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in) 
                                                  << 0x15U)))) 
                                        | (0xffe00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in) 
                                               << 0x13U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in) 
                                                 << 0x15U))))));
    vlSelf->s[3U] = ((0xffefffffU & vlSelf->s[3U]) 
                     | (0x100000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in))) 
                                     << 0x14U)));
    vlSelf->cout[3U] = ((0xffbfffffU & vlSelf->cout[3U]) 
                        | (0x400000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in))) 
                                          << 0x16U) 
                                         | (0xffc00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in) 
                                                << 0x15U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in) 
                                                  << 0x16U)))) 
                                        | (0xffc00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in) 
                                               << 0x14U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in) 
                                                 << 0x16U))))));
    vlSelf->s[3U] = ((0xffdfffffU & vlSelf->s[3U]) 
                     | (0x200000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in))) 
                                     << 0x15U)));
    vlSelf->cout[3U] = ((0xff7fffffU & vlSelf->cout[3U]) 
                        | (0x800000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in))) 
                                          << 0x17U) 
                                         | (0xff800000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in) 
                                                  << 0x17U)))) 
                                        | (0xff800000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in) 
                                               << 0x15U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in) 
                                                 << 0x17U))))));
    vlSelf->s[3U] = ((0xffbfffffU & vlSelf->s[3U]) 
                     | (0x400000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in))) 
                                     << 0x16U)));
    vlSelf->cout[3U] = ((0xfeffffffU & vlSelf->cout[3U]) 
                        | (0x1000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in))) 
                                           << 0x18U) 
                                          | (0xff000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in) 
                                                 << 0x17U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in) 
                                                   << 0x18U)))) 
                                         | (0xff000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in) 
                                                  << 0x18U))))));
    vlSelf->s[3U] = ((0xff7fffffU & vlSelf->s[3U]) 
                     | (0x800000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in))) 
                                     << 0x17U)));
    vlSelf->cout[3U] = ((0xfdffffffU & vlSelf->cout[3U]) 
                        | (0x2000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in))) 
                                           << 0x19U) 
                                          | (0xfe000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in) 
                                                 << 0x18U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in) 
                                                   << 0x19U)))) 
                                         | (0xfe000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in) 
                                                << 0x17U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in) 
                                                  << 0x19U))))));
    vlSelf->s[3U] = ((0xfeffffffU & vlSelf->s[3U]) 
                     | (0x1000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in))) 
                                      << 0x18U)));
    vlSelf->cout[3U] = ((0xfbffffffU & vlSelf->cout[3U]) 
                        | (0x4000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in))) 
                                           << 0x1aU) 
                                          | (0xfc000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in) 
                                                   << 0x1aU)))) 
                                         | (0xfc000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in) 
                                                << 0x18U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in) 
                                                  << 0x1aU))))));
    vlSelf->s[3U] = ((0xfdffffffU & vlSelf->s[3U]) 
                     | (0x2000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in))) 
                                      << 0x19U)));
    vlSelf->cout[3U] = ((0xf7ffffffU & vlSelf->cout[3U]) 
                        | (0x8000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in))) 
                                           << 0x1bU) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in) 
                                                   << 0x1bU)))) 
                                         | (0xf8000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in) 
                                                << 0x19U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in) 
                                                  << 0x1bU))))));
    vlSelf->s[3U] = ((0xfbffffffU & vlSelf->s[3U]) 
                     | (0x4000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in))) 
                                      << 0x1aU)));
    vlSelf->cout[3U] = ((0xefffffffU & vlSelf->cout[3U]) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in) 
                                                   << 0x1cU))))));
    vlSelf->s[3U] = ((0xf7ffffffU & vlSelf->s[3U]) 
                     | (0x8000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in))) 
                                      << 0x1bU)));
    vlSelf->cout[3U] = ((0xdfffffffU & vlSelf->cout[3U]) 
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in) 
                                                   << 0x1dU))))));
    vlSelf->s[3U] = ((0xefffffffU & vlSelf->s[3U]) 
                     | (0x10000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in))) 
                                       << 0x1cU)));
    vlSelf->cout[3U] = ((0xbfffffffU & vlSelf->cout[3U]) 
                        | (0x40000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in))) 
                                            << 0x1eU) 
                                           | (0xc0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in) 
                                                  << 0x1dU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in) 
                                                    << 0x1eU)))) 
                                          | (0xc0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in) 
                                                 << 0x1cU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in) 
                                                   << 0x1eU))))));
    vlSelf->s[3U] = ((0xdfffffffU & vlSelf->s[3U]) 
                     | (0x20000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in))) 
                                       << 0x1dU)));
    vlSelf->cout[3U] = ((0x7fffffffU & vlSelf->cout[3U]) 
                        | (0x80000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in))) 
                                            << 0x1fU) 
                                           | (0x80000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in) 
                                                  << 0x1eU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in) 
                                                    << 0x1fU)))) 
                                          | (0x80000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in) 
                                                 << 0x1dU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in) 
                                                   << 0x1fU))))));
    vlSelf->s[3U] = ((0xbfffffffU & vlSelf->s[3U]) 
                     | (0x40000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in))) 
                                       << 0x1eU)));
    vlSelf->cout[4U] = ((0xeU & vlSelf->cout[4U]) | 
                        (1U & (((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in))) 
                                | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in) 
                                    >> 1U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in))) 
                               | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in) 
                                   >> 2U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in)))));
    vlSelf->s[3U] = ((0x7fffffffU & vlSelf->s[3U]) 
                     | (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in))) 
                        << 0x1fU));
    vlSelf->cout[4U] = ((0xdU & vlSelf->cout[4U]) | 
                        (2U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in))) 
                                 << 1U) | (0xfffffffeU 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in) 
                                                 << 1U)))) 
                               | (0x7ffffffeU & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in) 
                                                    << 1U))))));
    vlSelf->s[4U] = ((0xeU & vlSelf->s[4U]) | (1U & 
                                               VL_REDXOR_32(
                                                            (7U 
                                                             & (IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in)))));
    vlSelf->cout[4U] = ((0xbU & vlSelf->cout[4U]) | 
                        (4U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in))) 
                                 << 2U) | (0xfffffffcU 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in) 
                                               << 1U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in) 
                                                 << 2U)))) 
                               | (0xfffffffcU & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in) 
                                                    << 2U))))));
    vlSelf->s[4U] = ((0xdU & vlSelf->s[4U]) | (2U & 
                                               (VL_REDXOR_32(
                                                             (7U 
                                                              & (IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in))) 
                                                << 1U)));
    vlSelf->cout[4U] = ((7U & vlSelf->cout[4U]) | (8U 
                                                   & ((((6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in))) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in) 
                                                              << 2U) 
                                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in) 
                                                                << 3U)))) 
                                                      | (0xfffffff8U 
                                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in) 
                                                             << 1U) 
                                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in) 
                                                               << 3U))))));
    vlSelf->s[4U] = ((0xbU & vlSelf->s[4U]) | (4U & 
                                               (VL_REDXOR_32(
                                                             (7U 
                                                              & (IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in))) 
                                                << 2U)));
}

VL_INLINE_OPT void Vtop_csa___settle__TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa11__12(Vtop_csa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_csa___settle__TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa11__12\n"); );
    // Body
    vlSelf->__Vcellinp__csa_132__in = ((4U & (vlSelf->in
                                              [2U][4U] 
                                              >> 1U)) 
                                       | ((2U & (vlSelf->in
                                                 [1U][4U] 
                                                 >> 2U)) 
                                          | (1U & (
                                                   vlSelf->in
                                                   [0U][4U] 
                                                   >> 3U))));
    vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] << 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & vlSelf->in
                                                   [0U][0U])));
    vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] << 1U)) | ((2U 
                                                 & vlSelf->in
                                                 [1U][0U]) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 1U))));
    vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in 
        = ((4U & vlSelf->in[2U][0U]) | ((2U & (vlSelf->in
                                               [1U][0U] 
                                               >> 1U)) 
                                        | (1U & (vlSelf->in
                                                 [0U][0U] 
                                                 >> 2U))));
    vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 1U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 3U))));
    vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 4U))));
    vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 3U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 5U))));
    vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 4U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 5U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 6U))));
    vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 5U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 6U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 7U))));
    vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 6U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 7U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 8U))));
    vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 7U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 8U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 9U))));
    vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 8U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 0xaU))));
    vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 9U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][0U] 
                                                    >> 0xaU)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][0U] 
                                                      >> 0xbU))));
    vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xaU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0xcU))));
    vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xbU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0xcU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0xdU))));
    vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xcU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0xdU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0xeU))));
    vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xdU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0xeU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0xfU))));
    vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xeU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0xfU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0x10U))));
    vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0xfU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][0U] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][0U] 
                                                        >> 0x11U))));
    vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x10U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x12U))));
    vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x11U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x13U))));
    vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x12U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x14U))));
    vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x13U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x14U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x15U))));
    vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x15U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x16U))));
    vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x15U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x17U))));
    vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x16U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x17U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x18U))));
    vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x17U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x19U))));
    vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x18U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x19U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x1aU))));
    vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x19U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x1bU))));
    vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x1aU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x1cU))));
    vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x1bU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x1dU))));
    vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x1cU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][0U] 
                                                         >> 0x1eU))));
    vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][0U] >> 0x1dU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][0U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->in
                                                      [0U][0U] 
                                                      >> 0x1fU)));
    vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] << 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & vlSelf->in
                                                   [0U][1U])));
    vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] << 1U)) | ((2U 
                                                 & vlSelf->in
                                                 [1U][1U]) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 1U))));
    vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in 
        = ((4U & vlSelf->in[2U][1U]) | ((2U & (vlSelf->in
                                               [1U][1U] 
                                               >> 1U)) 
                                        | (1U & (vlSelf->in
                                                 [0U][1U] 
                                                 >> 2U))));
    vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 1U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 3U))));
    vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 4U))));
    vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 3U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 5U))));
    vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 4U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 5U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 6U))));
    vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 5U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 6U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 7U))));
    vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 6U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 7U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 8U))));
    vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 7U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 8U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 9U))));
    vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 8U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 0xaU))));
    vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 9U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][1U] 
                                                    >> 0xaU)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][1U] 
                                                      >> 0xbU))));
    vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xaU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0xcU))));
    vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xbU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0xcU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0xdU))));
    vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xcU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0xdU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0xeU))));
    vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xdU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0xeU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0xfU))));
    vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xeU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0xfU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0x10U))));
    vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0xfU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][1U] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][1U] 
                                                        >> 0x11U))));
    vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x10U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x12U))));
    vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x11U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x13U))));
    vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x12U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x14U))));
    vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x13U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x14U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x15U))));
    vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x15U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x16U))));
    vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x15U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x17U))));
    vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x16U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x17U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x18U))));
    vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x17U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x19U))));
    vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x18U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x19U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x1aU))));
    vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x19U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x1bU))));
    vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x1aU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x1cU))));
    vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x1bU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x1dU))));
    vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x1cU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][1U] 
                                                         >> 0x1eU))));
    vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][1U] >> 0x1dU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][1U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->in
                                                      [0U][1U] 
                                                      >> 0x1fU)));
    vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] << 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & vlSelf->in
                                                   [0U][2U])));
    vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] << 1U)) | ((2U 
                                                 & vlSelf->in
                                                 [1U][2U]) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 1U))));
    vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in 
        = ((4U & vlSelf->in[2U][2U]) | ((2U & (vlSelf->in
                                               [1U][2U] 
                                               >> 1U)) 
                                        | (1U & (vlSelf->in
                                                 [0U][2U] 
                                                 >> 2U))));
    vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 1U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 3U))));
    vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 4U))));
    vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 3U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 5U))));
    vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 4U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 5U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 6U))));
    vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 5U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 6U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 7U))));
    vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 6U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 7U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 8U))));
    vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 7U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 8U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 9U))));
    vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 8U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 0xaU))));
    vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 9U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][2U] 
                                                    >> 0xaU)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][2U] 
                                                      >> 0xbU))));
    vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xaU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0xcU))));
    vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xbU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0xcU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0xdU))));
    vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xcU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0xdU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0xeU))));
    vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xdU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0xeU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0xfU))));
    vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xeU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0xfU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0x10U))));
    vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0xfU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][2U] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][2U] 
                                                        >> 0x11U))));
    vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x10U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x12U))));
    vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x11U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x13U))));
    vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x12U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x14U))));
    vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x13U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x14U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x15U))));
    vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x15U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x16U))));
    vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x15U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x17U))));
    vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x16U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x17U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x18U))));
    vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x17U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x19U))));
    vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x18U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x19U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x1aU))));
    vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x19U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x1bU))));
    vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x1aU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x1cU))));
    vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x1bU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x1dU))));
    vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x1cU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][2U] 
                                                         >> 0x1eU))));
    vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][2U] >> 0x1dU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][2U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->in
                                                      [0U][2U] 
                                                      >> 0x1fU)));
    vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] << 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & vlSelf->in
                                                   [0U][3U])));
    vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] << 1U)) | ((2U 
                                                 & vlSelf->in
                                                 [1U][3U]) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 1U))));
    vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in 
        = ((4U & vlSelf->in[2U][3U]) | ((2U & (vlSelf->in
                                               [1U][3U] 
                                               >> 1U)) 
                                        | (1U & (vlSelf->in
                                                 [0U][3U] 
                                                 >> 2U))));
    vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 1U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 3U))));
    vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 4U))));
    vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 3U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 4U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 5U))));
    vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 4U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 5U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 6U))));
    vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 5U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 6U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 7U))));
    vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 6U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 7U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 8U))));
    vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 7U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 8U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 9U))));
    vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 8U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 9U)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 0xaU))));
    vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 9U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][3U] 
                                                    >> 0xaU)) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][3U] 
                                                      >> 0xbU))));
    vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xaU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0xcU))));
    vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xbU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0xcU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0xdU))));
    vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xcU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0xdU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0xeU))));
    vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xdU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0xeU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0xfU))));
    vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xeU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0xfU)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0x10U))));
    vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0xfU)) | ((2U 
                                                   & (vlSelf->in
                                                      [1U][3U] 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (vlSelf->in
                                                        [0U][3U] 
                                                        >> 0x11U))));
    vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x10U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x12U))));
    vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x11U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x12U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x13U))));
    vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x12U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x13U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x14U))));
    vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x13U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x14U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x15U))));
    vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x15U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x16U))));
    vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x15U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x16U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x17U))));
    vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x16U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x17U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x18U))));
    vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x17U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x18U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x19U))));
    vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x18U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x19U)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x1aU))));
    vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x19U)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x1aU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x1bU))));
    vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x1aU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x1cU))));
    vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x1bU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x1cU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x1dU))));
    vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x1cU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x1dU)) 
                                                   | (1U 
                                                      & (vlSelf->in
                                                         [0U][3U] 
                                                         >> 0x1eU))));
    vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][3U] >> 0x1dU)) | (
                                                   (2U 
                                                    & (vlSelf->in
                                                       [1U][3U] 
                                                       >> 0x1eU)) 
                                                   | (vlSelf->in
                                                      [0U][3U] 
                                                      >> 0x1fU)));
    vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][4U] << 2U)) | ((2U 
                                                 & (vlSelf->in
                                                    [1U][4U] 
                                                    << 1U)) 
                                                | (1U 
                                                   & vlSelf->in
                                                   [0U][4U])));
    vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in 
        = ((4U & (vlSelf->in[2U][4U] << 1U)) | ((2U 
                                                 & vlSelf->in
                                                 [1U][4U]) 
                                                | (1U 
                                                   & (vlSelf->in
                                                      [0U][4U] 
                                                      >> 1U))));
    vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in 
        = ((4U & vlSelf->in[2U][4U]) | ((2U & (vlSelf->in
                                               [1U][4U] 
                                               >> 1U)) 
                                        | (1U & (vlSelf->in
                                                 [0U][4U] 
                                                 >> 2U))));
    vlSelf->s[4U] = ((7U & vlSelf->s[4U]) | (8U & (
                                                   VL_REDXOR_32(
                                                                (7U 
                                                                 & (IData)(vlSelf->__Vcellinp__csa_132__in))) 
                                                   << 3U)));
    vlSelf->s[0U] = ((0xfffffffeU & vlSelf->s[0U]) 
                     | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in)))));
    vlSelf->cout[0U] = ((0xfffffffdU & vlSelf->cout[0U]) 
                        | (2U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in))) 
                                   << 1U) | (0xfffffffeU 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in) 
                                                   << 1U)))) 
                                 | (0x7ffffffeU & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__0__KET____DOT__csa_1__in) 
                                                      << 1U))))));
    vlSelf->s[0U] = ((0xfffffffdU & vlSelf->s[0U]) 
                     | (2U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in))) 
                              << 1U)));
    vlSelf->cout[0U] = ((0xfffffffbU & vlSelf->cout[0U]) 
                        | (4U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in))) 
                                   << 2U) | (0xfffffffcU 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in) 
                                                   << 2U)))) 
                                 | (0xfffffffcU & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__1__KET____DOT__csa_1__in) 
                                                      << 2U))))));
    vlSelf->s[0U] = ((0xfffffffbU & vlSelf->s[0U]) 
                     | (4U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in))) 
                              << 2U)));
    vlSelf->cout[0U] = ((0xfffffff7U & vlSelf->cout[0U]) 
                        | (8U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in))) 
                                   << 3U) | (0xfffffff8U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in) 
                                                 << 2U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in) 
                                                   << 3U)))) 
                                 | (0xfffffff8U & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__2__KET____DOT__csa_1__in) 
                                                      << 3U))))));
    vlSelf->s[0U] = ((0xfffffff7U & vlSelf->s[0U]) 
                     | (8U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in))) 
                              << 3U)));
    vlSelf->cout[0U] = ((0xffffffefU & vlSelf->cout[0U]) 
                        | (0x10U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in))) 
                                      << 4U) | (0xfffffff0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in) 
                                                      << 4U)))) 
                                    | (0xfffffff0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in) 
                                           << 2U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__3__KET____DOT__csa_1__in) 
                                           << 4U))))));
    vlSelf->s[0U] = ((0xffffffefU & vlSelf->s[0U]) 
                     | (0x10U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in))) 
                                 << 4U)));
    vlSelf->cout[0U] = ((0xffffffdfU & vlSelf->cout[0U]) 
                        | (0x20U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in))) 
                                      << 5U) | (0xffffffe0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in) 
                                                    << 4U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in) 
                                                      << 5U)))) 
                                    | (0xffffffe0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in) 
                                           << 3U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__4__KET____DOT__csa_1__in) 
                                           << 5U))))));
    vlSelf->s[0U] = ((0xffffffdfU & vlSelf->s[0U]) 
                     | (0x20U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in))) 
                                 << 5U)));
    vlSelf->cout[0U] = ((0xffffffbfU & vlSelf->cout[0U]) 
                        | (0x40U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in))) 
                                      << 6U) | (0xffffffc0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in) 
                                                      << 6U)))) 
                                    | (0xffffffc0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in) 
                                           << 4U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__5__KET____DOT__csa_1__in) 
                                           << 6U))))));
    vlSelf->s[0U] = ((0xffffffbfU & vlSelf->s[0U]) 
                     | (0x40U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in))) 
                                 << 6U)));
    vlSelf->cout[0U] = ((0xffffff7fU & vlSelf->cout[0U]) 
                        | (0x80U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in))) 
                                      << 7U) | (0xffffff80U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in) 
                                                      << 7U)))) 
                                    | (0xffffff80U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in) 
                                           << 5U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__6__KET____DOT__csa_1__in) 
                                           << 7U))))));
    vlSelf->s[0U] = ((0xffffff7fU & vlSelf->s[0U]) 
                     | (0x80U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in))) 
                                 << 7U)));
    vlSelf->cout[0U] = ((0xfffffeffU & vlSelf->cout[0U]) 
                        | (0x100U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in))) 
                                       << 8U) | (0xffffff00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in) 
                                                       << 8U)))) 
                                     | (0xffffff00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in) 
                                            << 6U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__7__KET____DOT__csa_1__in) 
                                              << 8U))))));
    vlSelf->s[0U] = ((0xfffffeffU & vlSelf->s[0U]) 
                     | (0x100U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in))) 
                                  << 8U)));
    vlSelf->cout[0U] = ((0xfffffdffU & vlSelf->cout[0U]) 
                        | (0x200U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in))) 
                                       << 9U) | (0xfffffe00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in) 
                                                     << 8U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in) 
                                                       << 9U)))) 
                                     | (0xfffffe00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in) 
                                            << 7U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__8__KET____DOT__csa_1__in) 
                                              << 9U))))));
    vlSelf->s[0U] = ((0xfffffdffU & vlSelf->s[0U]) 
                     | (0x200U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in))) 
                                  << 9U)));
    vlSelf->cout[0U] = ((0xfffffbffU & vlSelf->cout[0U]) 
                        | (0x400U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in))) 
                                       << 0xaU) | (0xfffffc00U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in) 
                                                       << 9U) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in) 
                                                         << 0xaU)))) 
                                     | (0xfffffc00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in) 
                                            << 8U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__9__KET____DOT__csa_1__in) 
                                              << 0xaU))))));
    vlSelf->s[0U] = ((0xfffffbffU & vlSelf->s[0U]) 
                     | (0x400U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in))) 
                                  << 0xaU)));
    vlSelf->cout[0U] = ((0xfffff7ffU & vlSelf->cout[0U]) 
                        | (0x800U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in))) 
                                       << 0xbU) | (0xfffff800U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in) 
                                                         << 0xbU)))) 
                                     | (0xfffff800U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in) 
                                            << 9U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__10__KET____DOT__csa_1__in) 
                                              << 0xbU))))));
    vlSelf->s[0U] = ((0xfffff7ffU & vlSelf->s[0U]) 
                     | (0x800U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in))) 
                                  << 0xbU)));
    vlSelf->cout[0U] = ((0xffffefffU & vlSelf->cout[0U]) 
                        | (0x1000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in))) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in) 
                                            << 0xbU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in) 
                                              << 0xcU)))) 
                                      | (0xfffff000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in) 
                                             << 0xaU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__11__KET____DOT__csa_1__in) 
                                               << 0xcU))))));
    vlSelf->s[0U] = ((0xffffefffU & vlSelf->s[0U]) 
                     | (0x1000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in))) 
                                   << 0xcU)));
    vlSelf->cout[0U] = ((0xffffdfffU & vlSelf->cout[0U]) 
                        | (0x2000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in))) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in) 
                                            << 0xcU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in) 
                                              << 0xdU)))) 
                                      | (0xffffe000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in) 
                                             << 0xbU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__12__KET____DOT__csa_1__in) 
                                               << 0xdU))))));
    vlSelf->s[0U] = ((0xffffdfffU & vlSelf->s[0U]) 
                     | (0x2000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in))) 
                                   << 0xdU)));
    vlSelf->cout[0U] = ((0xffffbfffU & vlSelf->cout[0U]) 
                        | (0x4000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in))) 
                                        << 0xeU) | 
                                       (0xffffc000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in) 
                                            << 0xdU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in) 
                                              << 0xeU)))) 
                                      | (0xffffc000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in) 
                                             << 0xcU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__13__KET____DOT__csa_1__in) 
                                               << 0xeU))))));
    vlSelf->s[0U] = ((0xffffbfffU & vlSelf->s[0U]) 
                     | (0x4000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in))) 
                                   << 0xeU)));
    vlSelf->cout[0U] = ((0xffff7fffU & vlSelf->cout[0U]) 
                        | (0x8000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in))) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in) 
                                            << 0xeU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in) 
                                              << 0xfU)))) 
                                      | (0xffff8000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in) 
                                             << 0xdU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__14__KET____DOT__csa_1__in) 
                                               << 0xfU))))));
    vlSelf->s[0U] = ((0xffff7fffU & vlSelf->s[0U]) 
                     | (0x8000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in))) 
                                   << 0xfU)));
    vlSelf->cout[0U] = ((0xfffeffffU & vlSelf->cout[0U]) 
                        | (0x10000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in))) 
                                         << 0x10U) 
                                        | (0xffff0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in) 
                                               << 0xfU) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in) 
                                                 << 0x10U)))) 
                                       | (0xffff0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in) 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__15__KET____DOT__csa_1__in) 
                                                << 0x10U))))));
    vlSelf->s[0U] = ((0xfffeffffU & vlSelf->s[0U]) 
                     | (0x10000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in))) 
                                    << 0x10U)));
    vlSelf->cout[0U] = ((0xfffdffffU & vlSelf->cout[0U]) 
                        | (0x20000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in))) 
                                         << 0x11U) 
                                        | (0xfffe0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in) 
                                               << 0x10U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in) 
                                                 << 0x11U)))) 
                                       | (0xfffe0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in) 
                                              << 0xfU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__16__KET____DOT__csa_1__in) 
                                                << 0x11U))))));
    vlSelf->s[0U] = ((0xfffdffffU & vlSelf->s[0U]) 
                     | (0x20000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in))) 
                                    << 0x11U)));
    vlSelf->cout[0U] = ((0xfffbffffU & vlSelf->cout[0U]) 
                        | (0x40000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in))) 
                                         << 0x12U) 
                                        | (0xfffc0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in) 
                                               << 0x11U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in) 
                                                 << 0x12U)))) 
                                       | (0xfffc0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__17__KET____DOT__csa_1__in) 
                                                << 0x12U))))));
    vlSelf->s[0U] = ((0xfffbffffU & vlSelf->s[0U]) 
                     | (0x40000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in))) 
                                    << 0x12U)));
    vlSelf->cout[0U] = ((0xfff7ffffU & vlSelf->cout[0U]) 
                        | (0x80000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in))) 
                                         << 0x13U) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in) 
                                                 << 0x13U)))) 
                                       | (0xfff80000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in) 
                                              << 0x11U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__18__KET____DOT__csa_1__in) 
                                                << 0x13U))))));
    vlSelf->s[0U] = ((0xfff7ffffU & vlSelf->s[0U]) 
                     | (0x80000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in))) 
                                    << 0x13U)));
    vlSelf->cout[0U] = ((0xffefffffU & vlSelf->cout[0U]) 
                        | (0x100000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in))) 
                                          << 0x14U) 
                                         | (0xfff00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in) 
                                                << 0x13U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in) 
                                                  << 0x14U)))) 
                                        | (0xfff00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__19__KET____DOT__csa_1__in) 
                                                 << 0x14U))))));
    vlSelf->s[0U] = ((0xffefffffU & vlSelf->s[0U]) 
                     | (0x100000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in))) 
                                     << 0x14U)));
    vlSelf->cout[0U] = ((0xffdfffffU & vlSelf->cout[0U]) 
                        | (0x200000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in))) 
                                          << 0x15U) 
                                         | (0xffe00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in) 
                                                << 0x14U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in) 
                                                  << 0x15U)))) 
                                        | (0xffe00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in) 
                                               << 0x13U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__20__KET____DOT__csa_1__in) 
                                                 << 0x15U))))));
    vlSelf->s[0U] = ((0xffdfffffU & vlSelf->s[0U]) 
                     | (0x200000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in))) 
                                     << 0x15U)));
    vlSelf->cout[0U] = ((0xffbfffffU & vlSelf->cout[0U]) 
                        | (0x400000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in))) 
                                          << 0x16U) 
                                         | (0xffc00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in) 
                                                << 0x15U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in) 
                                                  << 0x16U)))) 
                                        | (0xffc00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in) 
                                               << 0x14U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__21__KET____DOT__csa_1__in) 
                                                 << 0x16U))))));
    vlSelf->s[0U] = ((0xffbfffffU & vlSelf->s[0U]) 
                     | (0x400000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in))) 
                                     << 0x16U)));
    vlSelf->cout[0U] = ((0xff7fffffU & vlSelf->cout[0U]) 
                        | (0x800000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in))) 
                                          << 0x17U) 
                                         | (0xff800000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in) 
                                                  << 0x17U)))) 
                                        | (0xff800000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in) 
                                               << 0x15U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__22__KET____DOT__csa_1__in) 
                                                 << 0x17U))))));
    vlSelf->s[0U] = ((0xff7fffffU & vlSelf->s[0U]) 
                     | (0x800000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in))) 
                                     << 0x17U)));
    vlSelf->cout[0U] = ((0xfeffffffU & vlSelf->cout[0U]) 
                        | (0x1000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in))) 
                                           << 0x18U) 
                                          | (0xff000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in) 
                                                 << 0x17U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in) 
                                                   << 0x18U)))) 
                                         | (0xff000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__23__KET____DOT__csa_1__in) 
                                                  << 0x18U))))));
    vlSelf->s[0U] = ((0xfeffffffU & vlSelf->s[0U]) 
                     | (0x1000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in))) 
                                      << 0x18U)));
    vlSelf->cout[0U] = ((0xfdffffffU & vlSelf->cout[0U]) 
                        | (0x2000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in))) 
                                           << 0x19U) 
                                          | (0xfe000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in) 
                                                 << 0x18U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in) 
                                                   << 0x19U)))) 
                                         | (0xfe000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in) 
                                                << 0x17U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__24__KET____DOT__csa_1__in) 
                                                  << 0x19U))))));
    vlSelf->s[0U] = ((0xfdffffffU & vlSelf->s[0U]) 
                     | (0x2000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in))) 
                                      << 0x19U)));
    vlSelf->cout[0U] = ((0xfbffffffU & vlSelf->cout[0U]) 
                        | (0x4000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in))) 
                                           << 0x1aU) 
                                          | (0xfc000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in) 
                                                   << 0x1aU)))) 
                                         | (0xfc000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in) 
                                                << 0x18U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__25__KET____DOT__csa_1__in) 
                                                  << 0x1aU))))));
    vlSelf->s[0U] = ((0xfbffffffU & vlSelf->s[0U]) 
                     | (0x4000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in))) 
                                      << 0x1aU)));
    vlSelf->cout[0U] = ((0xf7ffffffU & vlSelf->cout[0U]) 
                        | (0x8000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in))) 
                                           << 0x1bU) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in) 
                                                   << 0x1bU)))) 
                                         | (0xf8000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in) 
                                                << 0x19U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__26__KET____DOT__csa_1__in) 
                                                  << 0x1bU))))));
    vlSelf->s[0U] = ((0xf7ffffffU & vlSelf->s[0U]) 
                     | (0x8000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in))) 
                                      << 0x1bU)));
    vlSelf->cout[0U] = ((0xefffffffU & vlSelf->cout[0U]) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__27__KET____DOT__csa_1__in) 
                                                   << 0x1cU))))));
    vlSelf->s[0U] = ((0xefffffffU & vlSelf->s[0U]) 
                     | (0x10000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in))) 
                                       << 0x1cU)));
    vlSelf->cout[0U] = ((0xdfffffffU & vlSelf->cout[0U]) 
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__28__KET____DOT__csa_1__in) 
                                                   << 0x1dU))))));
    vlSelf->s[0U] = ((0xdfffffffU & vlSelf->s[0U]) 
                     | (0x20000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in))) 
                                       << 0x1dU)));
    vlSelf->cout[0U] = ((0xbfffffffU & vlSelf->cout[0U]) 
                        | (0x40000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in))) 
                                            << 0x1eU) 
                                           | (0xc0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in) 
                                                  << 0x1dU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in) 
                                                    << 0x1eU)))) 
                                          | (0xc0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in) 
                                                 << 0x1cU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__29__KET____DOT__csa_1__in) 
                                                   << 0x1eU))))));
    vlSelf->s[0U] = ((0xbfffffffU & vlSelf->s[0U]) 
                     | (0x40000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in))) 
                                       << 0x1eU)));
    vlSelf->cout[0U] = ((0x7fffffffU & vlSelf->cout[0U]) 
                        | (0x80000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in))) 
                                            << 0x1fU) 
                                           | (0x80000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in) 
                                                  << 0x1eU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in) 
                                                    << 0x1fU)))) 
                                          | (0x80000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in) 
                                                 << 0x1dU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__30__KET____DOT__csa_1__in) 
                                                   << 0x1fU))))));
    vlSelf->s[0U] = ((0x7fffffffU & vlSelf->s[0U]) 
                     | (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in))) 
                        << 0x1fU));
    vlSelf->cout[1U] = ((0xfffffffeU & vlSelf->cout[1U]) 
                        | (1U & (((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in))) 
                                  | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in) 
                                      >> 1U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in))) 
                                 | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in) 
                                     >> 2U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__31__KET____DOT__csa_1__in)))));
    vlSelf->s[1U] = ((0xfffffffeU & vlSelf->s[1U]) 
                     | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in)))));
    vlSelf->cout[1U] = ((0xfffffffdU & vlSelf->cout[1U]) 
                        | (2U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in))) 
                                   << 1U) | (0xfffffffeU 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in) 
                                                   << 1U)))) 
                                 | (0x7ffffffeU & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__32__KET____DOT__csa_1__in) 
                                                      << 1U))))));
    vlSelf->s[1U] = ((0xfffffffdU & vlSelf->s[1U]) 
                     | (2U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in))) 
                              << 1U)));
    vlSelf->cout[1U] = ((0xfffffffbU & vlSelf->cout[1U]) 
                        | (4U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in))) 
                                   << 2U) | (0xfffffffcU 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in) 
                                                   << 2U)))) 
                                 | (0xfffffffcU & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__33__KET____DOT__csa_1__in) 
                                                      << 2U))))));
    vlSelf->s[1U] = ((0xfffffffbU & vlSelf->s[1U]) 
                     | (4U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in))) 
                              << 2U)));
    vlSelf->cout[1U] = ((0xfffffff7U & vlSelf->cout[1U]) 
                        | (8U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in))) 
                                   << 3U) | (0xfffffff8U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in) 
                                                 << 2U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in) 
                                                   << 3U)))) 
                                 | (0xfffffff8U & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__34__KET____DOT__csa_1__in) 
                                                      << 3U))))));
    vlSelf->s[1U] = ((0xfffffff7U & vlSelf->s[1U]) 
                     | (8U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in))) 
                              << 3U)));
    vlSelf->cout[1U] = ((0xffffffefU & vlSelf->cout[1U]) 
                        | (0x10U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in))) 
                                      << 4U) | (0xfffffff0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in) 
                                                      << 4U)))) 
                                    | (0xfffffff0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in) 
                                           << 2U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__35__KET____DOT__csa_1__in) 
                                           << 4U))))));
    vlSelf->s[1U] = ((0xffffffefU & vlSelf->s[1U]) 
                     | (0x10U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in))) 
                                 << 4U)));
    vlSelf->cout[1U] = ((0xffffffdfU & vlSelf->cout[1U]) 
                        | (0x20U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in))) 
                                      << 5U) | (0xffffffe0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in) 
                                                    << 4U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in) 
                                                      << 5U)))) 
                                    | (0xffffffe0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in) 
                                           << 3U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__36__KET____DOT__csa_1__in) 
                                           << 5U))))));
    vlSelf->s[1U] = ((0xffffffdfU & vlSelf->s[1U]) 
                     | (0x20U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in))) 
                                 << 5U)));
    vlSelf->cout[1U] = ((0xffffffbfU & vlSelf->cout[1U]) 
                        | (0x40U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in))) 
                                      << 6U) | (0xffffffc0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in) 
                                                      << 6U)))) 
                                    | (0xffffffc0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in) 
                                           << 4U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__37__KET____DOT__csa_1__in) 
                                           << 6U))))));
    vlSelf->s[1U] = ((0xffffffbfU & vlSelf->s[1U]) 
                     | (0x40U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in))) 
                                 << 6U)));
    vlSelf->cout[1U] = ((0xffffff7fU & vlSelf->cout[1U]) 
                        | (0x80U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in))) 
                                      << 7U) | (0xffffff80U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in) 
                                                      << 7U)))) 
                                    | (0xffffff80U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in) 
                                           << 5U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__38__KET____DOT__csa_1__in) 
                                           << 7U))))));
    vlSelf->s[1U] = ((0xffffff7fU & vlSelf->s[1U]) 
                     | (0x80U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in))) 
                                 << 7U)));
    vlSelf->cout[1U] = ((0xfffffeffU & vlSelf->cout[1U]) 
                        | (0x100U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in))) 
                                       << 8U) | (0xffffff00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in) 
                                                       << 8U)))) 
                                     | (0xffffff00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in) 
                                            << 6U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__39__KET____DOT__csa_1__in) 
                                              << 8U))))));
    vlSelf->s[1U] = ((0xfffffeffU & vlSelf->s[1U]) 
                     | (0x100U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in))) 
                                  << 8U)));
    vlSelf->cout[1U] = ((0xfffffdffU & vlSelf->cout[1U]) 
                        | (0x200U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in))) 
                                       << 9U) | (0xfffffe00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in) 
                                                     << 8U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in) 
                                                       << 9U)))) 
                                     | (0xfffffe00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in) 
                                            << 7U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__40__KET____DOT__csa_1__in) 
                                              << 9U))))));
    vlSelf->s[1U] = ((0xfffffdffU & vlSelf->s[1U]) 
                     | (0x200U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in))) 
                                  << 9U)));
    vlSelf->cout[1U] = ((0xfffffbffU & vlSelf->cout[1U]) 
                        | (0x400U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in))) 
                                       << 0xaU) | (0xfffffc00U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in) 
                                                       << 9U) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in) 
                                                         << 0xaU)))) 
                                     | (0xfffffc00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in) 
                                            << 8U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__41__KET____DOT__csa_1__in) 
                                              << 0xaU))))));
    vlSelf->s[1U] = ((0xfffffbffU & vlSelf->s[1U]) 
                     | (0x400U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in))) 
                                  << 0xaU)));
    vlSelf->cout[1U] = ((0xfffff7ffU & vlSelf->cout[1U]) 
                        | (0x800U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in))) 
                                       << 0xbU) | (0xfffff800U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in) 
                                                         << 0xbU)))) 
                                     | (0xfffff800U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in) 
                                            << 9U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__42__KET____DOT__csa_1__in) 
                                              << 0xbU))))));
    vlSelf->s[1U] = ((0xfffff7ffU & vlSelf->s[1U]) 
                     | (0x800U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in))) 
                                  << 0xbU)));
    vlSelf->cout[1U] = ((0xffffefffU & vlSelf->cout[1U]) 
                        | (0x1000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in))) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in) 
                                            << 0xbU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in) 
                                              << 0xcU)))) 
                                      | (0xfffff000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in) 
                                             << 0xaU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__43__KET____DOT__csa_1__in) 
                                               << 0xcU))))));
    vlSelf->s[1U] = ((0xffffefffU & vlSelf->s[1U]) 
                     | (0x1000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in))) 
                                   << 0xcU)));
    vlSelf->cout[1U] = ((0xffffdfffU & vlSelf->cout[1U]) 
                        | (0x2000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in))) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in) 
                                            << 0xcU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in) 
                                              << 0xdU)))) 
                                      | (0xffffe000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in) 
                                             << 0xbU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__44__KET____DOT__csa_1__in) 
                                               << 0xdU))))));
    vlSelf->s[1U] = ((0xffffdfffU & vlSelf->s[1U]) 
                     | (0x2000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in))) 
                                   << 0xdU)));
    vlSelf->cout[1U] = ((0xffffbfffU & vlSelf->cout[1U]) 
                        | (0x4000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in))) 
                                        << 0xeU) | 
                                       (0xffffc000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in) 
                                            << 0xdU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in) 
                                              << 0xeU)))) 
                                      | (0xffffc000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in) 
                                             << 0xcU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__45__KET____DOT__csa_1__in) 
                                               << 0xeU))))));
    vlSelf->s[1U] = ((0xffffbfffU & vlSelf->s[1U]) 
                     | (0x4000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in))) 
                                   << 0xeU)));
    vlSelf->cout[1U] = ((0xffff7fffU & vlSelf->cout[1U]) 
                        | (0x8000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in))) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in) 
                                            << 0xeU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in) 
                                              << 0xfU)))) 
                                      | (0xffff8000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in) 
                                             << 0xdU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__46__KET____DOT__csa_1__in) 
                                               << 0xfU))))));
    vlSelf->s[1U] = ((0xffff7fffU & vlSelf->s[1U]) 
                     | (0x8000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in))) 
                                   << 0xfU)));
    vlSelf->cout[1U] = ((0xfffeffffU & vlSelf->cout[1U]) 
                        | (0x10000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in))) 
                                         << 0x10U) 
                                        | (0xffff0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in) 
                                               << 0xfU) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in) 
                                                 << 0x10U)))) 
                                       | (0xffff0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in) 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__47__KET____DOT__csa_1__in) 
                                                << 0x10U))))));
    vlSelf->s[1U] = ((0xfffeffffU & vlSelf->s[1U]) 
                     | (0x10000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in))) 
                                    << 0x10U)));
    vlSelf->cout[1U] = ((0xfffdffffU & vlSelf->cout[1U]) 
                        | (0x20000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in))) 
                                         << 0x11U) 
                                        | (0xfffe0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in) 
                                               << 0x10U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in) 
                                                 << 0x11U)))) 
                                       | (0xfffe0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in) 
                                              << 0xfU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__48__KET____DOT__csa_1__in) 
                                                << 0x11U))))));
    vlSelf->s[1U] = ((0xfffdffffU & vlSelf->s[1U]) 
                     | (0x20000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in))) 
                                    << 0x11U)));
    vlSelf->cout[1U] = ((0xfffbffffU & vlSelf->cout[1U]) 
                        | (0x40000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in))) 
                                         << 0x12U) 
                                        | (0xfffc0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in) 
                                               << 0x11U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in) 
                                                 << 0x12U)))) 
                                       | (0xfffc0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__49__KET____DOT__csa_1__in) 
                                                << 0x12U))))));
    vlSelf->s[1U] = ((0xfffbffffU & vlSelf->s[1U]) 
                     | (0x40000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in))) 
                                    << 0x12U)));
    vlSelf->cout[1U] = ((0xfff7ffffU & vlSelf->cout[1U]) 
                        | (0x80000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in))) 
                                         << 0x13U) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in) 
                                                 << 0x13U)))) 
                                       | (0xfff80000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in) 
                                              << 0x11U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__50__KET____DOT__csa_1__in) 
                                                << 0x13U))))));
    vlSelf->s[1U] = ((0xfff7ffffU & vlSelf->s[1U]) 
                     | (0x80000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in))) 
                                    << 0x13U)));
    vlSelf->cout[1U] = ((0xffefffffU & vlSelf->cout[1U]) 
                        | (0x100000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in))) 
                                          << 0x14U) 
                                         | (0xfff00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in) 
                                                << 0x13U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in) 
                                                  << 0x14U)))) 
                                        | (0xfff00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__51__KET____DOT__csa_1__in) 
                                                 << 0x14U))))));
    vlSelf->s[1U] = ((0xffefffffU & vlSelf->s[1U]) 
                     | (0x100000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in))) 
                                     << 0x14U)));
    vlSelf->cout[1U] = ((0xffdfffffU & vlSelf->cout[1U]) 
                        | (0x200000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in))) 
                                          << 0x15U) 
                                         | (0xffe00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in) 
                                                << 0x14U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in) 
                                                  << 0x15U)))) 
                                        | (0xffe00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in) 
                                               << 0x13U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__52__KET____DOT__csa_1__in) 
                                                 << 0x15U))))));
    vlSelf->s[1U] = ((0xffdfffffU & vlSelf->s[1U]) 
                     | (0x200000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in))) 
                                     << 0x15U)));
    vlSelf->cout[1U] = ((0xffbfffffU & vlSelf->cout[1U]) 
                        | (0x400000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in))) 
                                          << 0x16U) 
                                         | (0xffc00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in) 
                                                << 0x15U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in) 
                                                  << 0x16U)))) 
                                        | (0xffc00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in) 
                                               << 0x14U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__53__KET____DOT__csa_1__in) 
                                                 << 0x16U))))));
    vlSelf->s[1U] = ((0xffbfffffU & vlSelf->s[1U]) 
                     | (0x400000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in))) 
                                     << 0x16U)));
    vlSelf->cout[1U] = ((0xff7fffffU & vlSelf->cout[1U]) 
                        | (0x800000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in))) 
                                          << 0x17U) 
                                         | (0xff800000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in) 
                                                  << 0x17U)))) 
                                        | (0xff800000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in) 
                                               << 0x15U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__54__KET____DOT__csa_1__in) 
                                                 << 0x17U))))));
    vlSelf->s[1U] = ((0xff7fffffU & vlSelf->s[1U]) 
                     | (0x800000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in))) 
                                     << 0x17U)));
    vlSelf->cout[1U] = ((0xfeffffffU & vlSelf->cout[1U]) 
                        | (0x1000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in))) 
                                           << 0x18U) 
                                          | (0xff000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in) 
                                                 << 0x17U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in) 
                                                   << 0x18U)))) 
                                         | (0xff000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__55__KET____DOT__csa_1__in) 
                                                  << 0x18U))))));
    vlSelf->s[1U] = ((0xfeffffffU & vlSelf->s[1U]) 
                     | (0x1000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in))) 
                                      << 0x18U)));
    vlSelf->cout[1U] = ((0xfdffffffU & vlSelf->cout[1U]) 
                        | (0x2000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in))) 
                                           << 0x19U) 
                                          | (0xfe000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in) 
                                                 << 0x18U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in) 
                                                   << 0x19U)))) 
                                         | (0xfe000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in) 
                                                << 0x17U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__56__KET____DOT__csa_1__in) 
                                                  << 0x19U))))));
    vlSelf->s[1U] = ((0xfdffffffU & vlSelf->s[1U]) 
                     | (0x2000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in))) 
                                      << 0x19U)));
    vlSelf->cout[1U] = ((0xfbffffffU & vlSelf->cout[1U]) 
                        | (0x4000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in))) 
                                           << 0x1aU) 
                                          | (0xfc000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in) 
                                                   << 0x1aU)))) 
                                         | (0xfc000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in) 
                                                << 0x18U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__57__KET____DOT__csa_1__in) 
                                                  << 0x1aU))))));
    vlSelf->s[1U] = ((0xfbffffffU & vlSelf->s[1U]) 
                     | (0x4000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in))) 
                                      << 0x1aU)));
    vlSelf->cout[1U] = ((0xf7ffffffU & vlSelf->cout[1U]) 
                        | (0x8000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in))) 
                                           << 0x1bU) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in) 
                                                   << 0x1bU)))) 
                                         | (0xf8000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in) 
                                                << 0x19U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__58__KET____DOT__csa_1__in) 
                                                  << 0x1bU))))));
    vlSelf->s[1U] = ((0xf7ffffffU & vlSelf->s[1U]) 
                     | (0x8000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in))) 
                                      << 0x1bU)));
    vlSelf->cout[1U] = ((0xefffffffU & vlSelf->cout[1U]) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__59__KET____DOT__csa_1__in) 
                                                   << 0x1cU))))));
    vlSelf->s[1U] = ((0xefffffffU & vlSelf->s[1U]) 
                     | (0x10000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in))) 
                                       << 0x1cU)));
    vlSelf->cout[1U] = ((0xdfffffffU & vlSelf->cout[1U]) 
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__60__KET____DOT__csa_1__in) 
                                                   << 0x1dU))))));
    vlSelf->s[1U] = ((0xdfffffffU & vlSelf->s[1U]) 
                     | (0x20000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in))) 
                                       << 0x1dU)));
    vlSelf->cout[1U] = ((0xbfffffffU & vlSelf->cout[1U]) 
                        | (0x40000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in))) 
                                            << 0x1eU) 
                                           | (0xc0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in) 
                                                  << 0x1dU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in) 
                                                    << 0x1eU)))) 
                                          | (0xc0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in) 
                                                 << 0x1cU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__61__KET____DOT__csa_1__in) 
                                                   << 0x1eU))))));
    vlSelf->s[1U] = ((0xbfffffffU & vlSelf->s[1U]) 
                     | (0x40000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in))) 
                                       << 0x1eU)));
    vlSelf->cout[1U] = ((0x7fffffffU & vlSelf->cout[1U]) 
                        | (0x80000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in))) 
                                            << 0x1fU) 
                                           | (0x80000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in) 
                                                  << 0x1eU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in) 
                                                    << 0x1fU)))) 
                                          | (0x80000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in) 
                                                 << 0x1dU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__62__KET____DOT__csa_1__in) 
                                                   << 0x1fU))))));
    vlSelf->s[1U] = ((0x7fffffffU & vlSelf->s[1U]) 
                     | (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in))) 
                        << 0x1fU));
    vlSelf->cout[2U] = ((0xfffffffeU & vlSelf->cout[2U]) 
                        | (1U & (((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in))) 
                                  | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in) 
                                      >> 1U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in))) 
                                 | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in) 
                                     >> 2U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__63__KET____DOT__csa_1__in)))));
    vlSelf->s[2U] = ((0xfffffffeU & vlSelf->s[2U]) 
                     | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in)))));
    vlSelf->cout[2U] = ((0xfffffffdU & vlSelf->cout[2U]) 
                        | (2U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in))) 
                                   << 1U) | (0xfffffffeU 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in) 
                                                   << 1U)))) 
                                 | (0x7ffffffeU & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__64__KET____DOT__csa_1__in) 
                                                      << 1U))))));
    vlSelf->s[2U] = ((0xfffffffdU & vlSelf->s[2U]) 
                     | (2U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in))) 
                              << 1U)));
    vlSelf->cout[2U] = ((0xfffffffbU & vlSelf->cout[2U]) 
                        | (4U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in))) 
                                   << 2U) | (0xfffffffcU 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in) 
                                                   << 2U)))) 
                                 | (0xfffffffcU & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__65__KET____DOT__csa_1__in) 
                                                      << 2U))))));
    vlSelf->s[2U] = ((0xfffffffbU & vlSelf->s[2U]) 
                     | (4U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in))) 
                              << 2U)));
    vlSelf->cout[2U] = ((0xfffffff7U & vlSelf->cout[2U]) 
                        | (8U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in))) 
                                   << 3U) | (0xfffffff8U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in) 
                                                 << 2U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in) 
                                                   << 3U)))) 
                                 | (0xfffffff8U & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__66__KET____DOT__csa_1__in) 
                                                      << 3U))))));
    vlSelf->s[2U] = ((0xfffffff7U & vlSelf->s[2U]) 
                     | (8U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in))) 
                              << 3U)));
    vlSelf->cout[2U] = ((0xffffffefU & vlSelf->cout[2U]) 
                        | (0x10U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in))) 
                                      << 4U) | (0xfffffff0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in) 
                                                      << 4U)))) 
                                    | (0xfffffff0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in) 
                                           << 2U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__67__KET____DOT__csa_1__in) 
                                           << 4U))))));
    vlSelf->s[2U] = ((0xffffffefU & vlSelf->s[2U]) 
                     | (0x10U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in))) 
                                 << 4U)));
    vlSelf->cout[2U] = ((0xffffffdfU & vlSelf->cout[2U]) 
                        | (0x20U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in))) 
                                      << 5U) | (0xffffffe0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in) 
                                                    << 4U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in) 
                                                      << 5U)))) 
                                    | (0xffffffe0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in) 
                                           << 3U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__68__KET____DOT__csa_1__in) 
                                           << 5U))))));
    vlSelf->s[2U] = ((0xffffffdfU & vlSelf->s[2U]) 
                     | (0x20U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in))) 
                                 << 5U)));
    vlSelf->cout[2U] = ((0xffffffbfU & vlSelf->cout[2U]) 
                        | (0x40U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in))) 
                                      << 6U) | (0xffffffc0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in) 
                                                      << 6U)))) 
                                    | (0xffffffc0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in) 
                                           << 4U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__69__KET____DOT__csa_1__in) 
                                           << 6U))))));
    vlSelf->s[2U] = ((0xffffffbfU & vlSelf->s[2U]) 
                     | (0x40U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in))) 
                                 << 6U)));
    vlSelf->cout[2U] = ((0xffffff7fU & vlSelf->cout[2U]) 
                        | (0x80U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in))) 
                                      << 7U) | (0xffffff80U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in) 
                                                      << 7U)))) 
                                    | (0xffffff80U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in) 
                                           << 5U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__70__KET____DOT__csa_1__in) 
                                           << 7U))))));
    vlSelf->s[2U] = ((0xffffff7fU & vlSelf->s[2U]) 
                     | (0x80U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in))) 
                                 << 7U)));
    vlSelf->cout[2U] = ((0xfffffeffU & vlSelf->cout[2U]) 
                        | (0x100U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in))) 
                                       << 8U) | (0xffffff00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in) 
                                                       << 8U)))) 
                                     | (0xffffff00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in) 
                                            << 6U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__71__KET____DOT__csa_1__in) 
                                              << 8U))))));
    vlSelf->s[2U] = ((0xfffffeffU & vlSelf->s[2U]) 
                     | (0x100U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in))) 
                                  << 8U)));
    vlSelf->cout[2U] = ((0xfffffdffU & vlSelf->cout[2U]) 
                        | (0x200U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in))) 
                                       << 9U) | (0xfffffe00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in) 
                                                     << 8U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in) 
                                                       << 9U)))) 
                                     | (0xfffffe00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in) 
                                            << 7U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__72__KET____DOT__csa_1__in) 
                                              << 9U))))));
    vlSelf->s[2U] = ((0xfffffdffU & vlSelf->s[2U]) 
                     | (0x200U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in))) 
                                  << 9U)));
    vlSelf->cout[2U] = ((0xfffffbffU & vlSelf->cout[2U]) 
                        | (0x400U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in))) 
                                       << 0xaU) | (0xfffffc00U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in) 
                                                       << 9U) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in) 
                                                         << 0xaU)))) 
                                     | (0xfffffc00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in) 
                                            << 8U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__73__KET____DOT__csa_1__in) 
                                              << 0xaU))))));
    vlSelf->s[2U] = ((0xfffffbffU & vlSelf->s[2U]) 
                     | (0x400U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in))) 
                                  << 0xaU)));
    vlSelf->cout[2U] = ((0xfffff7ffU & vlSelf->cout[2U]) 
                        | (0x800U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in))) 
                                       << 0xbU) | (0xfffff800U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in) 
                                                         << 0xbU)))) 
                                     | (0xfffff800U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in) 
                                            << 9U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__74__KET____DOT__csa_1__in) 
                                              << 0xbU))))));
    vlSelf->s[2U] = ((0xfffff7ffU & vlSelf->s[2U]) 
                     | (0x800U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in))) 
                                  << 0xbU)));
    vlSelf->cout[2U] = ((0xffffefffU & vlSelf->cout[2U]) 
                        | (0x1000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in))) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in) 
                                            << 0xbU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in) 
                                              << 0xcU)))) 
                                      | (0xfffff000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in) 
                                             << 0xaU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__75__KET____DOT__csa_1__in) 
                                               << 0xcU))))));
    vlSelf->s[2U] = ((0xffffefffU & vlSelf->s[2U]) 
                     | (0x1000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in))) 
                                   << 0xcU)));
    vlSelf->cout[2U] = ((0xffffdfffU & vlSelf->cout[2U]) 
                        | (0x2000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in))) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in) 
                                            << 0xcU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in) 
                                              << 0xdU)))) 
                                      | (0xffffe000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in) 
                                             << 0xbU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__76__KET____DOT__csa_1__in) 
                                               << 0xdU))))));
    vlSelf->s[2U] = ((0xffffdfffU & vlSelf->s[2U]) 
                     | (0x2000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in))) 
                                   << 0xdU)));
    vlSelf->cout[2U] = ((0xffffbfffU & vlSelf->cout[2U]) 
                        | (0x4000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in))) 
                                        << 0xeU) | 
                                       (0xffffc000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in) 
                                            << 0xdU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in) 
                                              << 0xeU)))) 
                                      | (0xffffc000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in) 
                                             << 0xcU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__77__KET____DOT__csa_1__in) 
                                               << 0xeU))))));
    vlSelf->s[2U] = ((0xffffbfffU & vlSelf->s[2U]) 
                     | (0x4000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in))) 
                                   << 0xeU)));
    vlSelf->cout[2U] = ((0xffff7fffU & vlSelf->cout[2U]) 
                        | (0x8000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in))) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in) 
                                            << 0xeU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in) 
                                              << 0xfU)))) 
                                      | (0xffff8000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in) 
                                             << 0xdU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__78__KET____DOT__csa_1__in) 
                                               << 0xfU))))));
    vlSelf->s[2U] = ((0xffff7fffU & vlSelf->s[2U]) 
                     | (0x8000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in))) 
                                   << 0xfU)));
    vlSelf->cout[2U] = ((0xfffeffffU & vlSelf->cout[2U]) 
                        | (0x10000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in))) 
                                         << 0x10U) 
                                        | (0xffff0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in) 
                                               << 0xfU) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in) 
                                                 << 0x10U)))) 
                                       | (0xffff0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in) 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__79__KET____DOT__csa_1__in) 
                                                << 0x10U))))));
    vlSelf->s[2U] = ((0xfffeffffU & vlSelf->s[2U]) 
                     | (0x10000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in))) 
                                    << 0x10U)));
    vlSelf->cout[2U] = ((0xfffdffffU & vlSelf->cout[2U]) 
                        | (0x20000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in))) 
                                         << 0x11U) 
                                        | (0xfffe0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in) 
                                               << 0x10U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in) 
                                                 << 0x11U)))) 
                                       | (0xfffe0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in) 
                                              << 0xfU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__80__KET____DOT__csa_1__in) 
                                                << 0x11U))))));
    vlSelf->s[2U] = ((0xfffdffffU & vlSelf->s[2U]) 
                     | (0x20000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in))) 
                                    << 0x11U)));
    vlSelf->cout[2U] = ((0xfffbffffU & vlSelf->cout[2U]) 
                        | (0x40000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in))) 
                                         << 0x12U) 
                                        | (0xfffc0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in) 
                                               << 0x11U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in) 
                                                 << 0x12U)))) 
                                       | (0xfffc0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__81__KET____DOT__csa_1__in) 
                                                << 0x12U))))));
    vlSelf->s[2U] = ((0xfffbffffU & vlSelf->s[2U]) 
                     | (0x40000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in))) 
                                    << 0x12U)));
    vlSelf->cout[2U] = ((0xfff7ffffU & vlSelf->cout[2U]) 
                        | (0x80000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in))) 
                                         << 0x13U) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in) 
                                                 << 0x13U)))) 
                                       | (0xfff80000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in) 
                                              << 0x11U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__82__KET____DOT__csa_1__in) 
                                                << 0x13U))))));
    vlSelf->s[2U] = ((0xfff7ffffU & vlSelf->s[2U]) 
                     | (0x80000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in))) 
                                    << 0x13U)));
    vlSelf->cout[2U] = ((0xffefffffU & vlSelf->cout[2U]) 
                        | (0x100000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in))) 
                                          << 0x14U) 
                                         | (0xfff00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in) 
                                                << 0x13U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in) 
                                                  << 0x14U)))) 
                                        | (0xfff00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__83__KET____DOT__csa_1__in) 
                                                 << 0x14U))))));
    vlSelf->s[2U] = ((0xffefffffU & vlSelf->s[2U]) 
                     | (0x100000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in))) 
                                     << 0x14U)));
    vlSelf->cout[2U] = ((0xffdfffffU & vlSelf->cout[2U]) 
                        | (0x200000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in))) 
                                          << 0x15U) 
                                         | (0xffe00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in) 
                                                << 0x14U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in) 
                                                  << 0x15U)))) 
                                        | (0xffe00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in) 
                                               << 0x13U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__84__KET____DOT__csa_1__in) 
                                                 << 0x15U))))));
    vlSelf->s[2U] = ((0xffdfffffU & vlSelf->s[2U]) 
                     | (0x200000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in))) 
                                     << 0x15U)));
    vlSelf->cout[2U] = ((0xffbfffffU & vlSelf->cout[2U]) 
                        | (0x400000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in))) 
                                          << 0x16U) 
                                         | (0xffc00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in) 
                                                << 0x15U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in) 
                                                  << 0x16U)))) 
                                        | (0xffc00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in) 
                                               << 0x14U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__85__KET____DOT__csa_1__in) 
                                                 << 0x16U))))));
    vlSelf->s[2U] = ((0xffbfffffU & vlSelf->s[2U]) 
                     | (0x400000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in))) 
                                     << 0x16U)));
    vlSelf->cout[2U] = ((0xff7fffffU & vlSelf->cout[2U]) 
                        | (0x800000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in))) 
                                          << 0x17U) 
                                         | (0xff800000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in) 
                                                  << 0x17U)))) 
                                        | (0xff800000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in) 
                                               << 0x15U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__86__KET____DOT__csa_1__in) 
                                                 << 0x17U))))));
    vlSelf->s[2U] = ((0xff7fffffU & vlSelf->s[2U]) 
                     | (0x800000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in))) 
                                     << 0x17U)));
    vlSelf->cout[2U] = ((0xfeffffffU & vlSelf->cout[2U]) 
                        | (0x1000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in))) 
                                           << 0x18U) 
                                          | (0xff000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in) 
                                                 << 0x17U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in) 
                                                   << 0x18U)))) 
                                         | (0xff000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__87__KET____DOT__csa_1__in) 
                                                  << 0x18U))))));
    vlSelf->s[2U] = ((0xfeffffffU & vlSelf->s[2U]) 
                     | (0x1000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in))) 
                                      << 0x18U)));
    vlSelf->cout[2U] = ((0xfdffffffU & vlSelf->cout[2U]) 
                        | (0x2000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in))) 
                                           << 0x19U) 
                                          | (0xfe000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in) 
                                                 << 0x18U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in) 
                                                   << 0x19U)))) 
                                         | (0xfe000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in) 
                                                << 0x17U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__88__KET____DOT__csa_1__in) 
                                                  << 0x19U))))));
    vlSelf->s[2U] = ((0xfdffffffU & vlSelf->s[2U]) 
                     | (0x2000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in))) 
                                      << 0x19U)));
    vlSelf->cout[2U] = ((0xfbffffffU & vlSelf->cout[2U]) 
                        | (0x4000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in))) 
                                           << 0x1aU) 
                                          | (0xfc000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in) 
                                                   << 0x1aU)))) 
                                         | (0xfc000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in) 
                                                << 0x18U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__89__KET____DOT__csa_1__in) 
                                                  << 0x1aU))))));
    vlSelf->s[2U] = ((0xfbffffffU & vlSelf->s[2U]) 
                     | (0x4000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in))) 
                                      << 0x1aU)));
    vlSelf->cout[2U] = ((0xf7ffffffU & vlSelf->cout[2U]) 
                        | (0x8000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in))) 
                                           << 0x1bU) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in) 
                                                   << 0x1bU)))) 
                                         | (0xf8000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in) 
                                                << 0x19U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__90__KET____DOT__csa_1__in) 
                                                  << 0x1bU))))));
    vlSelf->s[2U] = ((0xf7ffffffU & vlSelf->s[2U]) 
                     | (0x8000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in))) 
                                      << 0x1bU)));
    vlSelf->cout[2U] = ((0xefffffffU & vlSelf->cout[2U]) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__91__KET____DOT__csa_1__in) 
                                                   << 0x1cU))))));
    vlSelf->s[2U] = ((0xefffffffU & vlSelf->s[2U]) 
                     | (0x10000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in))) 
                                       << 0x1cU)));
    vlSelf->cout[2U] = ((0xdfffffffU & vlSelf->cout[2U]) 
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__92__KET____DOT__csa_1__in) 
                                                   << 0x1dU))))));
    vlSelf->s[2U] = ((0xdfffffffU & vlSelf->s[2U]) 
                     | (0x20000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in))) 
                                       << 0x1dU)));
    vlSelf->cout[2U] = ((0xbfffffffU & vlSelf->cout[2U]) 
                        | (0x40000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in))) 
                                            << 0x1eU) 
                                           | (0xc0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in) 
                                                  << 0x1dU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in) 
                                                    << 0x1eU)))) 
                                          | (0xc0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in) 
                                                 << 0x1cU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__93__KET____DOT__csa_1__in) 
                                                   << 0x1eU))))));
    vlSelf->s[2U] = ((0xbfffffffU & vlSelf->s[2U]) 
                     | (0x40000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in))) 
                                       << 0x1eU)));
    vlSelf->cout[2U] = ((0x7fffffffU & vlSelf->cout[2U]) 
                        | (0x80000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in))) 
                                            << 0x1fU) 
                                           | (0x80000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in) 
                                                  << 0x1eU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in) 
                                                    << 0x1fU)))) 
                                          | (0x80000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in) 
                                                 << 0x1dU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__94__KET____DOT__csa_1__in) 
                                                   << 0x1fU))))));
    vlSelf->s[2U] = ((0x7fffffffU & vlSelf->s[2U]) 
                     | (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in))) 
                        << 0x1fU));
    vlSelf->cout[3U] = ((0xfffffffeU & vlSelf->cout[3U]) 
                        | (1U & (((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in))) 
                                  | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in) 
                                      >> 1U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in))) 
                                 | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in) 
                                     >> 2U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__95__KET____DOT__csa_1__in)))));
    vlSelf->s[3U] = ((0xfffffffeU & vlSelf->s[3U]) 
                     | (1U & VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in)))));
    vlSelf->cout[3U] = ((0xfffffffdU & vlSelf->cout[3U]) 
                        | (2U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in))) 
                                   << 1U) | (0xfffffffeU 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in) 
                                                   << 1U)))) 
                                 | (0x7ffffffeU & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__96__KET____DOT__csa_1__in) 
                                                      << 1U))))));
    vlSelf->s[3U] = ((0xfffffffdU & vlSelf->s[3U]) 
                     | (2U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in))) 
                              << 1U)));
    vlSelf->cout[3U] = ((0xfffffffbU & vlSelf->cout[3U]) 
                        | (4U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in))) 
                                   << 2U) | (0xfffffffcU 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in) 
                                                 << 1U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in) 
                                                   << 2U)))) 
                                 | (0xfffffffcU & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__97__KET____DOT__csa_1__in) 
                                                      << 2U))))));
    vlSelf->s[3U] = ((0xfffffffbU & vlSelf->s[3U]) 
                     | (4U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in))) 
                              << 2U)));
    vlSelf->cout[3U] = ((0xfffffff7U & vlSelf->cout[3U]) 
                        | (8U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in))) 
                                   << 3U) | (0xfffffff8U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in) 
                                                 << 2U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in) 
                                                   << 3U)))) 
                                 | (0xfffffff8U & (
                                                   ((IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in) 
                                                    << 1U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__98__KET____DOT__csa_1__in) 
                                                      << 3U))))));
    vlSelf->s[3U] = ((0xfffffff7U & vlSelf->s[3U]) 
                     | (8U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in))) 
                              << 3U)));
    vlSelf->cout[3U] = ((0xffffffefU & vlSelf->cout[3U]) 
                        | (0x10U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in))) 
                                      << 4U) | (0xfffffff0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in) 
                                                    << 3U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in) 
                                                      << 4U)))) 
                                    | (0xfffffff0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in) 
                                           << 2U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__99__KET____DOT__csa_1__in) 
                                           << 4U))))));
    vlSelf->s[3U] = ((0xffffffefU & vlSelf->s[3U]) 
                     | (0x10U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in))) 
                                 << 4U)));
    vlSelf->cout[3U] = ((0xffffffdfU & vlSelf->cout[3U]) 
                        | (0x20U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in))) 
                                      << 5U) | (0xffffffe0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in) 
                                                    << 4U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in) 
                                                      << 5U)))) 
                                    | (0xffffffe0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in) 
                                           << 3U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__100__KET____DOT__csa_1__in) 
                                           << 5U))))));
    vlSelf->s[3U] = ((0xffffffdfU & vlSelf->s[3U]) 
                     | (0x20U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in))) 
                                 << 5U)));
    vlSelf->cout[3U] = ((0xffffffbfU & vlSelf->cout[3U]) 
                        | (0x40U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in))) 
                                      << 6U) | (0xffffffc0U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in) 
                                                    << 5U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in) 
                                                      << 6U)))) 
                                    | (0xffffffc0U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in) 
                                           << 4U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__101__KET____DOT__csa_1__in) 
                                           << 6U))))));
    vlSelf->s[3U] = ((0xffffffbfU & vlSelf->s[3U]) 
                     | (0x40U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in))) 
                                 << 6U)));
    vlSelf->cout[3U] = ((0xffffff7fU & vlSelf->cout[3U]) 
                        | (0x80U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in))) 
                                      << 7U) | (0xffffff80U 
                                                & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in) 
                                                    << 6U) 
                                                   & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in) 
                                                      << 7U)))) 
                                    | (0xffffff80U 
                                       & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in) 
                                           << 5U) & 
                                          ((IData)(vlSelf->__Vcellinp__CAR132__BRA__102__KET____DOT__csa_1__in) 
                                           << 7U))))));
    vlSelf->s[3U] = ((0xffffff7fU & vlSelf->s[3U]) 
                     | (0x80U & (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in))) 
                                 << 7U)));
    vlSelf->cout[3U] = ((0xfffffeffU & vlSelf->cout[3U]) 
                        | (0x100U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in))) 
                                       << 8U) | (0xffffff00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in) 
                                                       << 8U)))) 
                                     | (0xffffff00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in) 
                                            << 6U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__103__KET____DOT__csa_1__in) 
                                              << 8U))))));
    vlSelf->s[3U] = ((0xfffffeffU & vlSelf->s[3U]) 
                     | (0x100U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in))) 
                                  << 8U)));
    vlSelf->cout[3U] = ((0xfffffdffU & vlSelf->cout[3U]) 
                        | (0x200U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in))) 
                                       << 9U) | (0xfffffe00U 
                                                 & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in) 
                                                     << 8U) 
                                                    & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in) 
                                                       << 9U)))) 
                                     | (0xfffffe00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in) 
                                            << 7U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__104__KET____DOT__csa_1__in) 
                                              << 9U))))));
    vlSelf->s[3U] = ((0xfffffdffU & vlSelf->s[3U]) 
                     | (0x200U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in))) 
                                  << 9U)));
    vlSelf->cout[3U] = ((0xfffffbffU & vlSelf->cout[3U]) 
                        | (0x400U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in))) 
                                       << 0xaU) | (0xfffffc00U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in) 
                                                       << 9U) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in) 
                                                         << 0xaU)))) 
                                     | (0xfffffc00U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in) 
                                            << 8U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__105__KET____DOT__csa_1__in) 
                                              << 0xaU))))));
    vlSelf->s[3U] = ((0xfffffbffU & vlSelf->s[3U]) 
                     | (0x400U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in))) 
                                  << 0xaU)));
    vlSelf->cout[3U] = ((0xfffff7ffU & vlSelf->cout[3U]) 
                        | (0x800U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in))) 
                                       << 0xbU) | (0xfffff800U 
                                                   & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in) 
                                                       << 0xaU) 
                                                      & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in) 
                                                         << 0xbU)))) 
                                     | (0xfffff800U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in) 
                                            << 9U) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__106__KET____DOT__csa_1__in) 
                                              << 0xbU))))));
    vlSelf->s[3U] = ((0xfffff7ffU & vlSelf->s[3U]) 
                     | (0x800U & (VL_REDXOR_32((7U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in))) 
                                  << 0xbU)));
    vlSelf->cout[3U] = ((0xffffefffU & vlSelf->cout[3U]) 
                        | (0x1000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in))) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in) 
                                            << 0xbU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in) 
                                              << 0xcU)))) 
                                      | (0xfffff000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in) 
                                             << 0xaU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__107__KET____DOT__csa_1__in) 
                                               << 0xcU))))));
    vlSelf->s[3U] = ((0xffffefffU & vlSelf->s[3U]) 
                     | (0x1000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in))) 
                                   << 0xcU)));
    vlSelf->cout[3U] = ((0xffffdfffU & vlSelf->cout[3U]) 
                        | (0x2000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in))) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in) 
                                            << 0xcU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in) 
                                              << 0xdU)))) 
                                      | (0xffffe000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in) 
                                             << 0xbU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__108__KET____DOT__csa_1__in) 
                                               << 0xdU))))));
    vlSelf->s[3U] = ((0xffffdfffU & vlSelf->s[3U]) 
                     | (0x2000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in))) 
                                   << 0xdU)));
    vlSelf->cout[3U] = ((0xffffbfffU & vlSelf->cout[3U]) 
                        | (0x4000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in))) 
                                        << 0xeU) | 
                                       (0xffffc000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in) 
                                            << 0xdU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in) 
                                              << 0xeU)))) 
                                      | (0xffffc000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in) 
                                             << 0xcU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__109__KET____DOT__csa_1__in) 
                                               << 0xeU))))));
    vlSelf->s[3U] = ((0xffffbfffU & vlSelf->s[3U]) 
                     | (0x4000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in))) 
                                   << 0xeU)));
    vlSelf->cout[3U] = ((0xffff7fffU & vlSelf->cout[3U]) 
                        | (0x8000U & ((((6U == (6U 
                                                & (IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in))) 
                                        << 0xfU) | 
                                       (0xffff8000U 
                                        & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in) 
                                            << 0xeU) 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in) 
                                              << 0xfU)))) 
                                      | (0xffff8000U 
                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in) 
                                             << 0xdU) 
                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__110__KET____DOT__csa_1__in) 
                                               << 0xfU))))));
    vlSelf->s[3U] = ((0xffff7fffU & vlSelf->s[3U]) 
                     | (0x8000U & (VL_REDXOR_32((7U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in))) 
                                   << 0xfU)));
    vlSelf->cout[3U] = ((0xfffeffffU & vlSelf->cout[3U]) 
                        | (0x10000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in))) 
                                         << 0x10U) 
                                        | (0xffff0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in) 
                                               << 0xfU) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in) 
                                                 << 0x10U)))) 
                                       | (0xffff0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in) 
                                              << 0xeU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__111__KET____DOT__csa_1__in) 
                                                << 0x10U))))));
    vlSelf->s[3U] = ((0xfffeffffU & vlSelf->s[3U]) 
                     | (0x10000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in))) 
                                    << 0x10U)));
    vlSelf->cout[3U] = ((0xfffdffffU & vlSelf->cout[3U]) 
                        | (0x20000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in))) 
                                         << 0x11U) 
                                        | (0xfffe0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in) 
                                               << 0x10U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in) 
                                                 << 0x11U)))) 
                                       | (0xfffe0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in) 
                                              << 0xfU) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__112__KET____DOT__csa_1__in) 
                                                << 0x11U))))));
    vlSelf->s[3U] = ((0xfffdffffU & vlSelf->s[3U]) 
                     | (0x20000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in))) 
                                    << 0x11U)));
    vlSelf->cout[3U] = ((0xfffbffffU & vlSelf->cout[3U]) 
                        | (0x40000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in))) 
                                         << 0x12U) 
                                        | (0xfffc0000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in) 
                                               << 0x11U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in) 
                                                 << 0x12U)))) 
                                       | (0xfffc0000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__113__KET____DOT__csa_1__in) 
                                                << 0x12U))))));
    vlSelf->s[3U] = ((0xfffbffffU & vlSelf->s[3U]) 
                     | (0x40000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in))) 
                                    << 0x12U)));
    vlSelf->cout[3U] = ((0xfff7ffffU & vlSelf->cout[3U]) 
                        | (0x80000U & ((((6U == (6U 
                                                 & (IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in))) 
                                         << 0x13U) 
                                        | (0xfff80000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in) 
                                                 << 0x13U)))) 
                                       | (0xfff80000U 
                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in) 
                                              << 0x11U) 
                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__114__KET____DOT__csa_1__in) 
                                                << 0x13U))))));
    vlSelf->s[3U] = ((0xfff7ffffU & vlSelf->s[3U]) 
                     | (0x80000U & (VL_REDXOR_32((7U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in))) 
                                    << 0x13U)));
    vlSelf->cout[3U] = ((0xffefffffU & vlSelf->cout[3U]) 
                        | (0x100000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in))) 
                                          << 0x14U) 
                                         | (0xfff00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in) 
                                                << 0x13U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in) 
                                                  << 0x14U)))) 
                                        | (0xfff00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in) 
                                               << 0x12U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__115__KET____DOT__csa_1__in) 
                                                 << 0x14U))))));
    vlSelf->s[3U] = ((0xffefffffU & vlSelf->s[3U]) 
                     | (0x100000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in))) 
                                     << 0x14U)));
    vlSelf->cout[3U] = ((0xffdfffffU & vlSelf->cout[3U]) 
                        | (0x200000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in))) 
                                          << 0x15U) 
                                         | (0xffe00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in) 
                                                << 0x14U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in) 
                                                  << 0x15U)))) 
                                        | (0xffe00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in) 
                                               << 0x13U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__116__KET____DOT__csa_1__in) 
                                                 << 0x15U))))));
    vlSelf->s[3U] = ((0xffdfffffU & vlSelf->s[3U]) 
                     | (0x200000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in))) 
                                     << 0x15U)));
    vlSelf->cout[3U] = ((0xffbfffffU & vlSelf->cout[3U]) 
                        | (0x400000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in))) 
                                          << 0x16U) 
                                         | (0xffc00000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in) 
                                                << 0x15U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in) 
                                                  << 0x16U)))) 
                                        | (0xffc00000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in) 
                                               << 0x14U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__117__KET____DOT__csa_1__in) 
                                                 << 0x16U))))));
    vlSelf->s[3U] = ((0xffbfffffU & vlSelf->s[3U]) 
                     | (0x400000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in))) 
                                     << 0x16U)));
    vlSelf->cout[3U] = ((0xff7fffffU & vlSelf->cout[3U]) 
                        | (0x800000U & ((((6U == (6U 
                                                  & (IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in))) 
                                          << 0x17U) 
                                         | (0xff800000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in) 
                                                  << 0x17U)))) 
                                        | (0xff800000U 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in) 
                                               << 0x15U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__118__KET____DOT__csa_1__in) 
                                                 << 0x17U))))));
    vlSelf->s[3U] = ((0xff7fffffU & vlSelf->s[3U]) 
                     | (0x800000U & (VL_REDXOR_32((7U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in))) 
                                     << 0x17U)));
    vlSelf->cout[3U] = ((0xfeffffffU & vlSelf->cout[3U]) 
                        | (0x1000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in))) 
                                           << 0x18U) 
                                          | (0xff000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in) 
                                                 << 0x17U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in) 
                                                   << 0x18U)))) 
                                         | (0xff000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in) 
                                                << 0x16U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__119__KET____DOT__csa_1__in) 
                                                  << 0x18U))))));
    vlSelf->s[3U] = ((0xfeffffffU & vlSelf->s[3U]) 
                     | (0x1000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in))) 
                                      << 0x18U)));
    vlSelf->cout[3U] = ((0xfdffffffU & vlSelf->cout[3U]) 
                        | (0x2000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in))) 
                                           << 0x19U) 
                                          | (0xfe000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in) 
                                                 << 0x18U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in) 
                                                   << 0x19U)))) 
                                         | (0xfe000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in) 
                                                << 0x17U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__120__KET____DOT__csa_1__in) 
                                                  << 0x19U))))));
    vlSelf->s[3U] = ((0xfdffffffU & vlSelf->s[3U]) 
                     | (0x2000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in))) 
                                      << 0x19U)));
    vlSelf->cout[3U] = ((0xfbffffffU & vlSelf->cout[3U]) 
                        | (0x4000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in))) 
                                           << 0x1aU) 
                                          | (0xfc000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in) 
                                                 << 0x19U) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in) 
                                                   << 0x1aU)))) 
                                         | (0xfc000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in) 
                                                << 0x18U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__121__KET____DOT__csa_1__in) 
                                                  << 0x1aU))))));
    vlSelf->s[3U] = ((0xfbffffffU & vlSelf->s[3U]) 
                     | (0x4000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in))) 
                                      << 0x1aU)));
    vlSelf->cout[3U] = ((0xf7ffffffU & vlSelf->cout[3U]) 
                        | (0x8000000U & ((((6U == (6U 
                                                   & (IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in))) 
                                           << 0x1bU) 
                                          | (0xf8000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in) 
                                                   << 0x1bU)))) 
                                         | (0xf8000000U 
                                            & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in) 
                                                << 0x19U) 
                                               & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__122__KET____DOT__csa_1__in) 
                                                  << 0x1bU))))));
    vlSelf->s[3U] = ((0xf7ffffffU & vlSelf->s[3U]) 
                     | (0x8000000U & (VL_REDXOR_32(
                                                   (7U 
                                                    & (IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in))) 
                                      << 0x1bU)));
    vlSelf->cout[3U] = ((0xefffffffU & vlSelf->cout[3U]) 
                        | (0x10000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in))) 
                                            << 0x1cU) 
                                           | (0xf0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in) 
                                                    << 0x1cU)))) 
                                          | (0xf0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in) 
                                                 << 0x1aU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__123__KET____DOT__csa_1__in) 
                                                   << 0x1cU))))));
    vlSelf->s[3U] = ((0xefffffffU & vlSelf->s[3U]) 
                     | (0x10000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in))) 
                                       << 0x1cU)));
    vlSelf->cout[3U] = ((0xdfffffffU & vlSelf->cout[3U]) 
                        | (0x20000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in))) 
                                            << 0x1dU) 
                                           | (0xe0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in) 
                                                  << 0x1cU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in) 
                                                    << 0x1dU)))) 
                                          | (0xe0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in) 
                                                 << 0x1bU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__124__KET____DOT__csa_1__in) 
                                                   << 0x1dU))))));
    vlSelf->s[3U] = ((0xdfffffffU & vlSelf->s[3U]) 
                     | (0x20000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in))) 
                                       << 0x1dU)));
    vlSelf->cout[3U] = ((0xbfffffffU & vlSelf->cout[3U]) 
                        | (0x40000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in))) 
                                            << 0x1eU) 
                                           | (0xc0000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in) 
                                                  << 0x1dU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in) 
                                                    << 0x1eU)))) 
                                          | (0xc0000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in) 
                                                 << 0x1cU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__125__KET____DOT__csa_1__in) 
                                                   << 0x1eU))))));
    vlSelf->s[3U] = ((0xbfffffffU & vlSelf->s[3U]) 
                     | (0x40000000U & (VL_REDXOR_32(
                                                    (7U 
                                                     & (IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in))) 
                                       << 0x1eU)));
    vlSelf->cout[3U] = ((0x7fffffffU & vlSelf->cout[3U]) 
                        | (0x80000000U & ((((6U == 
                                             (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in))) 
                                            << 0x1fU) 
                                           | (0x80000000U 
                                              & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in) 
                                                  << 0x1eU) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in) 
                                                    << 0x1fU)))) 
                                          | (0x80000000U 
                                             & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in) 
                                                 << 0x1dU) 
                                                & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__126__KET____DOT__csa_1__in) 
                                                   << 0x1fU))))));
    vlSelf->s[3U] = ((0x7fffffffU & vlSelf->s[3U]) 
                     | (VL_REDXOR_32((7U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in))) 
                        << 0x1fU));
    vlSelf->cout[4U] = ((0xeU & vlSelf->cout[4U]) | 
                        (1U & (((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in))) 
                                | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in) 
                                    >> 1U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in))) 
                               | (((IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in) 
                                   >> 2U) & (IData)(vlSelf->__Vcellinp__CAR132__BRA__127__KET____DOT__csa_1__in)))));
    vlSelf->s[4U] = ((0xeU & vlSelf->s[4U]) | (1U & 
                                               VL_REDXOR_32(
                                                            (7U 
                                                             & (IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in)))));
    vlSelf->cout[4U] = ((0xdU & vlSelf->cout[4U]) | 
                        (2U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in))) 
                                 << 1U) | (0xfffffffeU 
                                           & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in) 
                                                 << 1U)))) 
                               | (0x7ffffffeU & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__128__KET____DOT__csa_1__in) 
                                                    << 1U))))));
    vlSelf->s[4U] = ((0xdU & vlSelf->s[4U]) | (2U & 
                                               (VL_REDXOR_32(
                                                             (7U 
                                                              & (IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in))) 
                                                << 1U)));
    vlSelf->cout[4U] = ((0xbU & vlSelf->cout[4U]) | 
                        (4U & ((((6U == (6U & (IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in))) 
                                 << 2U) | (0xfffffffcU 
                                           & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in) 
                                               << 1U) 
                                              & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in) 
                                                 << 2U)))) 
                               | (0xfffffffcU & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in) 
                                                 & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__129__KET____DOT__csa_1__in) 
                                                    << 2U))))));
    vlSelf->s[4U] = ((0xbU & vlSelf->s[4U]) | (4U & 
                                               (VL_REDXOR_32(
                                                             (7U 
                                                              & (IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in))) 
                                                << 2U)));
    vlSelf->cout[4U] = ((7U & vlSelf->cout[4U]) | (8U 
                                                   & ((((6U 
                                                         == 
                                                         (6U 
                                                          & (IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in))) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in) 
                                                              << 2U) 
                                                             & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in) 
                                                                << 3U)))) 
                                                      | (0xfffffff8U 
                                                         & (((IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in) 
                                                             << 1U) 
                                                            & ((IData)(vlSelf->__Vcellinp__CAR132__BRA__130__KET____DOT__csa_1__in) 
                                                               << 3U))))));
}
