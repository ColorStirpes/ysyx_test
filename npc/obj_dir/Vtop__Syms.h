// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_booth_p.h"
#include "Vtop_csa.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__0__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__10__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__12__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__14__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__16__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__18__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__20__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__22__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__24__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__26__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__28__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__2__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__30__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__32__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__34__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__36__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__38__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__40__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__42__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__44__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__46__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__48__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__4__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__50__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__52__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__54__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__56__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__58__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__60__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__62__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__64__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__6__KET____DOT__booth_p;
    Vtop_booth_p                   TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__booth__DOT__genblk1__BRA__8__KET____DOT__booth_p;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa0;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa1;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa10;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa11;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa12;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa13;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa14;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa15;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa16;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa17;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa18;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa19;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa2;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa20;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa21;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa22;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa23;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa24;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa25;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa26;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa27;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa28;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa29;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa3;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa30;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa4;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa5;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa6;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa7;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa8;
    Vtop_csa                       TOP__top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__multiplier__DOT__walloc_33in__DOT__csa9;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
