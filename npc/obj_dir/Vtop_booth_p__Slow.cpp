// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_booth_p.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop_booth_p___ctor_var_reset(Vtop_booth_p* vlSelf);

Vtop_booth_p::Vtop_booth_p(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop_booth_p___ctor_var_reset(this);
}

void Vtop_booth_p::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop_booth_p::~Vtop_booth_p() {
}

void Vtop_booth_p___ctor_var_reset(Vtop_booth_p* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_booth_p___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(134, vlSelf->x_src);
    vlSelf->y_3 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(132, vlSelf->p);
    vlSelf->__PVT__sel_negative = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sel_double_negative = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sel_positive = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sel_double_positive = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->__PVT__product);
}
