// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_BOOTH_P_H_
#define VERILATED_VTOP_BOOTH_P_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop_booth_p) {
  public:

    // PORTS
    VL_IN8(y_3,2,0);
    VL_INW(x_src,133,0,5);
    VL_OUTW(p,131,0,5);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__sel_negative;
    CData/*0:0*/ __PVT__sel_double_negative;
    CData/*0:0*/ __PVT__sel_positive;
    CData/*0:0*/ __PVT__sel_double_positive;
    VlWide<5>/*131:0*/ __PVT__product;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_booth_p);  ///< Copying not allowed
  public:
    Vtop_booth_p(const char* name);
    ~Vtop_booth_p();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
