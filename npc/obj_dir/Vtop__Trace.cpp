// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[0]),26);
            tracep->chgIData(oldp+1,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[1]),26);
            tracep->chgIData(oldp+2,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[2]),26);
            tracep->chgIData(oldp+3,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[3]),26);
            tracep->chgIData(oldp+4,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[4]),26);
            tracep->chgIData(oldp+5,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[5]),26);
            tracep->chgIData(oldp+6,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[6]),26);
            tracep->chgIData(oldp+7,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[7]),26);
            tracep->chgIData(oldp+8,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[8]),26);
            tracep->chgIData(oldp+9,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[9]),26);
            tracep->chgIData(oldp+10,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[10]),26);
            tracep->chgIData(oldp+11,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[11]),26);
            tracep->chgIData(oldp+12,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[12]),26);
            tracep->chgIData(oldp+13,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[13]),26);
            tracep->chgIData(oldp+14,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[14]),26);
            tracep->chgIData(oldp+15,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[15]),26);
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[16]),26);
            tracep->chgIData(oldp+17,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[17]),26);
            tracep->chgIData(oldp+18,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[18]),26);
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[19]),26);
            tracep->chgIData(oldp+20,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[20]),26);
            tracep->chgIData(oldp+21,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[21]),26);
            tracep->chgIData(oldp+22,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[22]),26);
            tracep->chgIData(oldp+23,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[23]),26);
            tracep->chgIData(oldp+24,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[24]),26);
            tracep->chgIData(oldp+25,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[25]),26);
            tracep->chgIData(oldp+26,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[26]),26);
            tracep->chgIData(oldp+27,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list[27]),26);
            tracep->chgIData(oldp+28,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[0]),17);
            tracep->chgIData(oldp+29,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[1]),17);
            tracep->chgIData(oldp+30,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[2]),17);
            tracep->chgIData(oldp+31,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[3]),17);
            tracep->chgIData(oldp+32,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[4]),17);
            tracep->chgIData(oldp+33,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[5]),17);
            tracep->chgIData(oldp+34,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[6]),17);
            tracep->chgIData(oldp+35,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[7]),17);
            tracep->chgIData(oldp+36,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[8]),17);
            tracep->chgIData(oldp+37,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[9]),17);
            tracep->chgIData(oldp+38,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[10]),17);
            tracep->chgIData(oldp+39,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[11]),17);
            tracep->chgIData(oldp+40,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[12]),17);
            tracep->chgIData(oldp+41,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[13]),17);
            tracep->chgIData(oldp+42,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[14]),17);
            tracep->chgIData(oldp+43,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[15]),17);
            tracep->chgIData(oldp+44,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[16]),17);
            tracep->chgIData(oldp+45,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[17]),17);
            tracep->chgIData(oldp+46,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[18]),17);
            tracep->chgIData(oldp+47,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[19]),17);
            tracep->chgIData(oldp+48,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[20]),17);
            tracep->chgIData(oldp+49,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[21]),17);
            tracep->chgIData(oldp+50,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[22]),17);
            tracep->chgIData(oldp+51,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[23]),17);
            tracep->chgIData(oldp+52,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[24]),17);
            tracep->chgIData(oldp+53,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[25]),17);
            tracep->chgIData(oldp+54,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[26]),17);
            tracep->chgIData(oldp+55,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list[27]),17);
            tracep->chgSData(oldp+56,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[0]),9);
            tracep->chgSData(oldp+57,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[1]),9);
            tracep->chgSData(oldp+58,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[2]),9);
            tracep->chgSData(oldp+59,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[3]),9);
            tracep->chgSData(oldp+60,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[4]),9);
            tracep->chgSData(oldp+61,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[5]),9);
            tracep->chgSData(oldp+62,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[6]),9);
            tracep->chgSData(oldp+63,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[7]),9);
            tracep->chgSData(oldp+64,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[8]),9);
            tracep->chgSData(oldp+65,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[9]),9);
            tracep->chgSData(oldp+66,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[10]),9);
            tracep->chgSData(oldp+67,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[11]),9);
            tracep->chgSData(oldp+68,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[12]),9);
            tracep->chgSData(oldp+69,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[13]),9);
            tracep->chgSData(oldp+70,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[14]),9);
            tracep->chgSData(oldp+71,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[15]),9);
            tracep->chgSData(oldp+72,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[16]),9);
            tracep->chgSData(oldp+73,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[17]),9);
            tracep->chgSData(oldp+74,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[18]),9);
            tracep->chgSData(oldp+75,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[19]),9);
            tracep->chgSData(oldp+76,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[20]),9);
            tracep->chgSData(oldp+77,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[21]),9);
            tracep->chgSData(oldp+78,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[22]),9);
            tracep->chgSData(oldp+79,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[23]),9);
            tracep->chgSData(oldp+80,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[24]),9);
            tracep->chgSData(oldp+81,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[25]),9);
            tracep->chgSData(oldp+82,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[26]),9);
            tracep->chgSData(oldp+83,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list[27]),9);
            tracep->chgIData(oldp+84,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[0]),23);
            tracep->chgIData(oldp+85,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[1]),23);
            tracep->chgIData(oldp+86,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[2]),23);
            tracep->chgIData(oldp+87,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[3]),23);
            tracep->chgIData(oldp+88,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[4]),23);
            tracep->chgIData(oldp+89,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[5]),23);
            tracep->chgIData(oldp+90,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[6]),23);
            tracep->chgIData(oldp+91,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[7]),23);
            tracep->chgIData(oldp+92,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[8]),23);
            tracep->chgIData(oldp+93,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[9]),23);
            tracep->chgIData(oldp+94,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[10]),23);
            tracep->chgIData(oldp+95,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[11]),23);
            tracep->chgIData(oldp+96,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list[12]),23);
            tracep->chgSData(oldp+97,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[0]),10);
            tracep->chgSData(oldp+98,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[1]),10);
            tracep->chgSData(oldp+99,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[2]),10);
            tracep->chgSData(oldp+100,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[3]),10);
            tracep->chgSData(oldp+101,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[4]),10);
            tracep->chgSData(oldp+102,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[5]),10);
            tracep->chgSData(oldp+103,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[6]),10);
            tracep->chgSData(oldp+104,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[7]),10);
            tracep->chgSData(oldp+105,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[8]),10);
            tracep->chgSData(oldp+106,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[9]),10);
            tracep->chgSData(oldp+107,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[10]),10);
            tracep->chgSData(oldp+108,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[11]),10);
            tracep->chgSData(oldp+109,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list[12]),10);
            tracep->chgSData(oldp+110,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[0]),13);
            tracep->chgSData(oldp+111,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[1]),13);
            tracep->chgSData(oldp+112,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[2]),13);
            tracep->chgSData(oldp+113,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[3]),13);
            tracep->chgSData(oldp+114,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[4]),13);
            tracep->chgSData(oldp+115,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[5]),13);
            tracep->chgSData(oldp+116,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[6]),13);
            tracep->chgSData(oldp+117,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[7]),13);
            tracep->chgSData(oldp+118,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[8]),13);
            tracep->chgSData(oldp+119,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[9]),13);
            tracep->chgSData(oldp+120,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[10]),13);
            tracep->chgSData(oldp+121,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[11]),13);
            tracep->chgSData(oldp+122,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list[12]),13);
            tracep->chgIData(oldp+123,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__pair_list[0]),28);
            tracep->chgIData(oldp+124,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__pair_list[1]),28);
            tracep->chgIData(oldp+125,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__pair_list[2]),28);
            tracep->chgSData(oldp+126,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list[0]),16);
            tracep->chgSData(oldp+127,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list[1]),16);
            tracep->chgSData(oldp+128,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list[2]),16);
            tracep->chgSData(oldp+129,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list[0]),12);
            tracep->chgSData(oldp+130,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list[1]),12);
            tracep->chgSData(oldp+131,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list[2]),12);
            tracep->chgIData(oldp+132,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[0]),29);
            tracep->chgIData(oldp+133,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[1]),29);
            tracep->chgIData(oldp+134,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[2]),29);
            tracep->chgIData(oldp+135,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[3]),29);
            tracep->chgIData(oldp+136,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list[4]),29);
            tracep->chgIData(oldp+137,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[0]),17);
            tracep->chgIData(oldp+138,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[1]),17);
            tracep->chgIData(oldp+139,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[2]),17);
            tracep->chgIData(oldp+140,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[3]),17);
            tracep->chgIData(oldp+141,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list[4]),17);
            tracep->chgSData(oldp+142,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[0]),12);
            tracep->chgSData(oldp+143,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[1]),12);
            tracep->chgSData(oldp+144,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[2]),12);
            tracep->chgSData(oldp+145,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[3]),12);
            tracep->chgSData(oldp+146,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list[4]),12);
            tracep->chgIData(oldp+147,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__pair_list[0]),30);
            tracep->chgIData(oldp+148,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__pair_list[1]),30);
            tracep->chgIData(oldp+149,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__key_list[0]),18);
            tracep->chgIData(oldp+150,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__key_list[1]),18);
            tracep->chgSData(oldp+151,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__data_list[0]),12);
            tracep->chgSData(oldp+152,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__data_list[1]),12);
            tracep->chgIData(oldp+153,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__pair_list[0]),22);
            tracep->chgIData(oldp+154,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__pair_list[1]),22);
            tracep->chgIData(oldp+155,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__pair_list[2]),22);
            tracep->chgIData(oldp+156,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__pair_list[3]),22);
            tracep->chgSData(oldp+157,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list[0]),10);
            tracep->chgSData(oldp+158,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list[1]),10);
            tracep->chgSData(oldp+159,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list[2]),10);
            tracep->chgSData(oldp+160,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list[3]),10);
            tracep->chgSData(oldp+161,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list[0]),12);
            tracep->chgSData(oldp+162,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list[1]),12);
            tracep->chgSData(oldp+163,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list[2]),12);
            tracep->chgSData(oldp+164,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list[3]),12);
            tracep->chgIData(oldp+165,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[0]),19);
            tracep->chgIData(oldp+166,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[1]),19);
            tracep->chgIData(oldp+167,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[2]),19);
            tracep->chgIData(oldp+168,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[3]),19);
            tracep->chgIData(oldp+169,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[4]),19);
            tracep->chgIData(oldp+170,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list[5]),19);
            tracep->chgSData(oldp+171,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[0]),10);
            tracep->chgSData(oldp+172,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[1]),10);
            tracep->chgSData(oldp+173,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[2]),10);
            tracep->chgSData(oldp+174,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[3]),10);
            tracep->chgSData(oldp+175,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[4]),10);
            tracep->chgSData(oldp+176,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list[5]),10);
            tracep->chgSData(oldp+177,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[0]),9);
            tracep->chgSData(oldp+178,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[1]),9);
            tracep->chgSData(oldp+179,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[2]),9);
            tracep->chgSData(oldp+180,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[3]),9);
            tracep->chgSData(oldp+181,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[4]),9);
            tracep->chgSData(oldp+182,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list[5]),9);
            tracep->chgIData(oldp+183,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__pair_list[0]),17);
            tracep->chgCData(oldp+184,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__key_list[0]),7);
            tracep->chgSData(oldp+185,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__data_list[0]),10);
            tracep->chgSData(oldp+186,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__pair_list[0]),16);
            tracep->chgSData(oldp+187,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__pair_list[1]),16);
            tracep->chgCData(oldp+188,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__key_list[0]),7);
            tracep->chgCData(oldp+189,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__key_list[1]),7);
            tracep->chgSData(oldp+190,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__data_list[0]),9);
            tracep->chgSData(oldp+191,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__data_list[1]),9);
            tracep->chgCData(oldp+192,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+193,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[1]),5);
            tracep->chgCData(oldp+194,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[2]),5);
            tracep->chgCData(oldp+195,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[3]),5);
            tracep->chgCData(oldp+196,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[4]),5);
            tracep->chgCData(oldp+197,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[5]),5);
            tracep->chgCData(oldp+198,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[6]),5);
            tracep->chgCData(oldp+199,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+200,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+201,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgCData(oldp+202,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[3]),3);
            tracep->chgCData(oldp+203,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[4]),3);
            tracep->chgCData(oldp+204,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[5]),3);
            tracep->chgCData(oldp+205,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[6]),3);
            tracep->chgCData(oldp+206,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[0]),2);
            tracep->chgCData(oldp+207,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[1]),2);
            tracep->chgCData(oldp+208,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[2]),2);
            tracep->chgCData(oldp+209,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[3]),2);
            tracep->chgCData(oldp+210,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[4]),2);
            tracep->chgCData(oldp+211,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[5]),2);
            tracep->chgCData(oldp+212,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[6]),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__rdata),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__pre_branch),64);
            tracep->chgBit(oldp+217,(vlSelf->top__DOT__pc_ready));
            tracep->chgBit(oldp+218,(vlSelf->top__DOT__pc_valid));
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__if_ready));
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__if_id__DOT__if_now_valid));
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__ID_pre_jump));
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__ID_pre_branch),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__ID_pc),64);
            tracep->chgIData(oldp+226,(vlSelf->top__DOT__ID_instr),32);
            tracep->chgBit(oldp+227,(vlSelf->top__DOT__load_stall));
            tracep->chgBit(oldp+228,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 0xaU))));
            tracep->chgCData(oldp+229,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+230,((IData)(((0U != 
                                               (0xeU 
                                                & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))) 
                                              | (0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))))));
            tracep->chgBit(oldp+231,((0U != (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))));
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__id_imm),64);
            tracep->chgCData(oldp+234,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+235,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))),5);
            tracep->chgCData(oldp+236,((7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))),3);
            tracep->chgCData(oldp+237,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__id_ready));
            tracep->chgBit(oldp+239,(vlSelf->top__DOT__id_ex__DOT__id_now_valid));
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__EX_w_ena));
            tracep->chgCData(oldp+241,(vlSelf->top__DOT__EX_w_addr),5);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__EX_data1),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__EX_data2),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__EX_imm),64);
            tracep->chgCData(oldp+248,(vlSelf->top__DOT__EX_exop),3);
            tracep->chgCData(oldp+249,(vlSelf->top__DOT__EX_aluop),5);
            tracep->chgCData(oldp+250,(vlSelf->top__DOT__EX_memwop),3);
            tracep->chgCData(oldp+251,(vlSelf->top__DOT__EX_memrop),3);
            tracep->chgBit(oldp+252,(vlSelf->top__DOT__EX_mem_ena));
            tracep->chgBit(oldp+253,(vlSelf->top__DOT__EX_mem_wr));
            tracep->chgIData(oldp+254,(vlSelf->top__DOT__EX_instr),32);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__EX_pc),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__ex_w_data),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__ex_mem_addr),64);
            tracep->chgBit(oldp+261,(vlSelf->top__DOT__ex_ready));
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid));
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__MEM_w_ena));
            tracep->chgCData(oldp+264,(vlSelf->top__DOT__MEM_w_addr),5);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__MEM_w_data),64);
            tracep->chgCData(oldp+267,(vlSelf->top__DOT__MEM_memwop),3);
            tracep->chgCData(oldp+268,(vlSelf->top__DOT__MEM_memrop),3);
            tracep->chgBit(oldp+269,(vlSelf->top__DOT__MEM_mem_ena));
            tracep->chgBit(oldp+270,(vlSelf->top__DOT__MEM_mem_wr));
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__MEM_mem_addr),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__MEM_mem_stor_data),64);
            tracep->chgIData(oldp+275,(vlSelf->top__DOT__MEM_instr),32);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__MEM_pc),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__mem_w_data),64);
            tracep->chgBit(oldp+280,(vlSelf->top__DOT__mem_ready));
            tracep->chgBit(oldp+281,(vlSelf->top__DOT__mem_wb__DOT__mem_now_valid));
            tracep->chgBit(oldp+282,(vlSelf->top__DOT__WB_w_ena));
            tracep->chgCData(oldp+283,(vlSelf->top__DOT__WB_w_addr),5);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__WB_w_data),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__WB_pc),64);
            tracep->chgIData(oldp+288,(vlSelf->top__DOT__WB_instr),32);
            tracep->chgBit(oldp+289,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid));
            tracep->chgCData(oldp+290,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_hash),8);
            tracep->chgCData(oldp+291,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index),8);
            tracep->chgIData(oldp+292,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i),32);
            tracep->chgIData(oldp+293,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j),32);
            tracep->chgCData(oldp+294,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__ID_pc 
                                                         >> 2U)))),8);
            tracep->chgCData(oldp+295,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__jumptype),2);
            tracep->chgIData(oldp+296,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__i),32);
            tracep->chgIData(oldp+297,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__j),32);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0]),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[1]),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[2]),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[3]),64);
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[4]),64);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[5]),64);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[6]),64);
            tracep->chgQData(oldp+312,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[7]),64);
            tracep->chgQData(oldp+314,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[8]),64);
            tracep->chgQData(oldp+316,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[9]),64);
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[10]),64);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[11]),64);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[12]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[13]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[14]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[15]),64);
            tracep->chgCData(oldp+330,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index),4);
            tracep->chgBit(oldp+331,((1U & (~ (IData)(vlSelf->top__DOT__load_stall)))));
            tracep->chgIData(oldp+332,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__r_count),32);
            tracep->chgIData(oldp+333,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__count),32);
            tracep->chgCData(oldp+334,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype),3);
            tracep->chgBit(oldp+335,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 9U))));
            tracep->chgCData(oldp+336,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))),5);
            tracep->chgBit(oldp+337,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 8U))));
            tracep->chgCData(oldp+338,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+339,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch),64);
            tracep->chgBit(oldp+341,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__ID_instr 
                                            >> 0xfU))) 
                                      & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                         & ((IData)(vlSelf->top__DOT__EX_w_ena) 
                                            & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                               >> 9U))))));
            tracep->chgBit(oldp+342,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__ID_instr 
                                            >> 0x14U))) 
                                      & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                         & ((IData)(vlSelf->top__DOT__EX_w_ena) 
                                            & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                               >> 8U))))));
            tracep->chgBit(oldp+343,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__ID_instr 
                                            >> 0xfU))) 
                                      & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                         & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                            & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                               >> 9U))))));
            tracep->chgBit(oldp+344,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__ID_instr 
                                            >> 0x14U))) 
                                      & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                         & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                            & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                               >> 8U))))));
            tracep->chgBit(oldp+345,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+346,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+347,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                            >> 8U))));
            tracep->chgBit(oldp+348,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                            >> 8U))));
            tracep->chgBit(oldp+349,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                            >> 9U))));
            tracep->chgBit(oldp+350,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                            >> 8U))));
            tracep->chgCData(oldp+351,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+352,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                              >> 9U))),3);
            tracep->chgCData(oldp+353,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                              >> 8U))),3);
            tracep->chgCData(oldp+354,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+355,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+356,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+357,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out))),5);
            tracep->chgCData(oldp+358,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                 >> 4U))),5);
            tracep->chgCData(oldp+359,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                                 >> 3U))),5);
            tracep->chgCData(oldp+360,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out))),5);
            tracep->chgCData(oldp+361,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                                 >> 1U))),5);
            tracep->chgCData(oldp+362,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out))),5);
            tracep->chgBit(oldp+363,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))));
            tracep->chgBit(oldp+364,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out))));
            tracep->chgSData(oldp+365,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1),11);
            tracep->chgWData(oldp+366,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4),84);
            tracep->chgSData(oldp+369,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[0]),14);
            tracep->chgSData(oldp+370,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[1]),14);
            tracep->chgSData(oldp+371,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[2]),14);
            tracep->chgSData(oldp+372,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[3]),14);
            tracep->chgSData(oldp+373,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[4]),14);
            tracep->chgSData(oldp+374,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[5]),14);
            tracep->chgCData(oldp+375,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+376,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+377,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgCData(oldp+378,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[3]),3);
            tracep->chgCData(oldp+379,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[4]),3);
            tracep->chgCData(oldp+380,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[5]),3);
            tracep->chgSData(oldp+381,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[0]),11);
            tracep->chgSData(oldp+382,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[1]),11);
            tracep->chgSData(oldp+383,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[2]),11);
            tracep->chgSData(oldp+384,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[3]),11);
            tracep->chgSData(oldp+385,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[4]),11);
            tracep->chgSData(oldp+386,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[5]),11);
            tracep->chgSData(oldp+387,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out),11);
            tracep->chgBit(oldp+388,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit));
            tracep->chgCData(oldp+389,((0x7fU & vlSelf->top__DOT__ID_instr)),7);
            tracep->chgCData(oldp+390,((7U & (vlSelf->top__DOT__ID_instr 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+391,((vlSelf->top__DOT__ID_instr 
                                        >> 0x19U)),7);
            tracep->chgSData(oldp+392,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out),9);
            tracep->chgIData(oldp+393,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose),17);
            tracep->chgSData(oldp+394,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out),9);
            tracep->chgBit(oldp+395,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit));
            tracep->chgBit(oldp+396,((1U & (vlSelf->top__DOT__ID_instr 
                                            >> 0x14U))));
            tracep->chgSData(oldp+397,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out),13);
            tracep->chgSData(oldp+398,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1),13);
            tracep->chgSData(oldp+399,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2),12);
            tracep->chgSData(oldp+400,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3),12);
            tracep->chgSData(oldp+401,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4),12);
            tracep->chgSData(oldp+402,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1),10);
            tracep->chgSData(oldp+403,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2),16);
            tracep->chgIData(oldp+404,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3),17);
            tracep->chgIData(oldp+405,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4),18);
            tracep->chgCData(oldp+406,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2),4);
            tracep->chgWData(oldp+407,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4),68);
            tracep->chgIData(oldp+410,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[0]),17);
            tracep->chgIData(oldp+411,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[1]),17);
            tracep->chgIData(oldp+412,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[2]),17);
            tracep->chgIData(oldp+413,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[3]),17);
            tracep->chgCData(oldp+414,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[0]),4);
            tracep->chgCData(oldp+415,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[1]),4);
            tracep->chgCData(oldp+416,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[2]),4);
            tracep->chgCData(oldp+417,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[3]),4);
            tracep->chgSData(oldp+418,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[0]),13);
            tracep->chgSData(oldp+419,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[1]),13);
            tracep->chgSData(oldp+420,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[2]),13);
            tracep->chgSData(oldp+421,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[3]),13);
            tracep->chgSData(oldp+422,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out),13);
            tracep->chgBit(oldp+423,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+424,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out),13);
            tracep->chgBit(oldp+425,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+426,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out),12);
            tracep->chgBit(oldp+427,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+428,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out),12);
            tracep->chgBit(oldp+429,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+430,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out),12);
            tracep->chgBit(oldp+431,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+432,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out),12);
            tracep->chgSData(oldp+433,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out),12);
            tracep->chgBit(oldp+434,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+435,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose),10);
            tracep->chgSData(oldp+436,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out),9);
            tracep->chgSData(oldp+437,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out),9);
            tracep->chgBit(oldp+438,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+439,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out),10);
            tracep->chgSData(oldp+440,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__lut_out),10);
            tracep->chgBit(oldp+441,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+442,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out),9);
            tracep->chgSData(oldp+443,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out),9);
            tracep->chgBit(oldp+444,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit));
            tracep->chgIData(oldp+445,((vlSelf->top__DOT__ID_instr 
                                        >> 7U)),25);
            tracep->chgWData(oldp+446,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4),335);
            tracep->chgWData(oldp+457,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+460,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+463,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+466,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+469,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+472,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+473,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+474,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgCData(oldp+475,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[3]),3);
            tracep->chgCData(oldp+476,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[4]),3);
            tracep->chgQData(oldp+477,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+479,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+481,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+483,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+485,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+487,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+489,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit));
            tracep->chgQData(oldp+490,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+492,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+494,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+496,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+498,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+500,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+502,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+504,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+506,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+510,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+512,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+520,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+524,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+526,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+528,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+534,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+536,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+538,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+540,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+546,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+548,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+550,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[31]),64);
            tracep->chgIData(oldp+554,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__i),32);
            tracep->chgCData(oldp+555,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2),4);
            tracep->chgCData(oldp+556,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2),4);
            tracep->chgQData(oldp+557,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result),64);
            tracep->chgIData(oldp+559,((IData)(vlSelf->top__DOT__EX_data1)),32);
            tracep->chgIData(oldp+560,((IData)(vlSelf->top__DOT__EX_data2)),32);
            tracep->chgWData(oldp+561,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4),201);
            tracep->chgWData(oldp+568,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+571,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+574,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+577,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+578,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+579,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgQData(oldp+580,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+582,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+584,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+586,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+588,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+589,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4),134);
            tracep->chgWData(oldp+594,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+597,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgCData(oldp+600,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+601,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgQData(oldp+602,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+604,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+606,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+608,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit));
            tracep->chgQData(oldp+609,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data),64);
            tracep->chgCData(oldp+611,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop),3);
            tracep->chgQData(oldp+612,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one),64);
            tracep->chgQData(oldp+614,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two),64);
            tracep->chgQData(oldp+616,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for),64);
            tracep->chgCData(oldp+618,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out),2);
            tracep->chgBit(oldp+619,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+620,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4),469);
            tracep->chgWData(oldp+635,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+638,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+641,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+644,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+647,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+650,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[5]),67);
            tracep->chgWData(oldp+653,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[6]),67);
            tracep->chgCData(oldp+656,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+657,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+658,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgCData(oldp+659,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[3]),3);
            tracep->chgCData(oldp+660,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[4]),3);
            tracep->chgCData(oldp+661,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[5]),3);
            tracep->chgCData(oldp+662,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[6]),3);
            tracep->chgQData(oldp+663,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+665,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+667,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+669,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+671,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+673,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[5]),64);
            tracep->chgQData(oldp+675,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[6]),64);
            tracep->chgQData(oldp+677,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+679,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+680,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4),268);
            tracep->chgWData(oldp+689,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+692,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+695,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+698,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[3]),67);
            tracep->chgCData(oldp+701,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+702,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+703,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgCData(oldp+704,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[3]),3);
            tracep->chgQData(oldp+705,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+707,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+709,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+711,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+713,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+715,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit));
            tracep->chgCData(oldp+716,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2),6);
            tracep->chgWData(oldp+717,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4),560);
            tracep->chgWData(oldp+735,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[0]),70);
            tracep->chgWData(oldp+738,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[1]),70);
            tracep->chgWData(oldp+741,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[2]),70);
            tracep->chgWData(oldp+744,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[3]),70);
            tracep->chgWData(oldp+747,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[4]),70);
            tracep->chgWData(oldp+750,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[5]),70);
            tracep->chgWData(oldp+753,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[6]),70);
            tracep->chgWData(oldp+756,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[7]),70);
            tracep->chgCData(oldp+759,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[0]),6);
            tracep->chgCData(oldp+760,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[1]),6);
            tracep->chgCData(oldp+761,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[2]),6);
            tracep->chgCData(oldp+762,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[3]),6);
            tracep->chgCData(oldp+763,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[4]),6);
            tracep->chgCData(oldp+764,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[5]),6);
            tracep->chgCData(oldp+765,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[6]),6);
            tracep->chgCData(oldp+766,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[7]),6);
            tracep->chgQData(oldp+767,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+769,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+771,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+773,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+775,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+777,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[5]),64);
            tracep->chgQData(oldp+779,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[6]),64);
            tracep->chgQData(oldp+781,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[7]),64);
            tracep->chgQData(oldp+783,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+785,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit));
            tracep->chgCData(oldp+786,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2),5);
            tracep->chgWData(oldp+787,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4),276);
            tracep->chgWData(oldp+796,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+799,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+802,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+805,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[3]),69);
            tracep->chgCData(oldp+808,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[0]),5);
            tracep->chgCData(oldp+809,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[1]),5);
            tracep->chgCData(oldp+810,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[2]),5);
            tracep->chgCData(oldp+811,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[3]),5);
            tracep->chgQData(oldp+812,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+814,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+816,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+818,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+820,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+822,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit));
            tracep->chgCData(oldp+823,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2),4);
            tracep->chgWData(oldp+824,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4),136);
            tracep->chgWData(oldp+829,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+832,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+835,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[0]),4);
            tracep->chgCData(oldp+836,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[1]),4);
            tracep->chgQData(oldp+837,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+839,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+841,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+843,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+844,(vlSelf->top__DOT__mux_pc));
            tracep->chgQData(oldp+845,(vlSelf->top__DOT__branch),64);
            tracep->chgBit(oldp+847,(vlSelf->top__DOT__pre_jump));
            tracep->chgCData(oldp+848,(vlSelf->top__DOT__jumptype),2);
            tracep->chgBit(oldp+849,(vlSelf->top__DOT__error_pre));
            tracep->chgQData(oldp+850,(vlSelf->top__DOT__id_data1),64);
            tracep->chgQData(oldp+852,(vlSelf->top__DOT__id_data2),64);
            tracep->chgBit(oldp+854,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre));
            tracep->chgWData(oldp+855,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4),201);
            tracep->chgWData(oldp+862,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+865,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+868,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+871,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+872,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+873,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgQData(oldp+874,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+876,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+878,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+880,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+882,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit));
            tracep->chgBit(oldp+883,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__bjump));
            tracep->chgSData(oldp+884,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4),12);
            tracep->chgCData(oldp+885,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+886,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+887,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+888,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+889,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+890,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgBit(oldp+891,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[0]));
            tracep->chgBit(oldp+892,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[1]));
            tracep->chgBit(oldp+893,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[2]));
            tracep->chgBit(oldp+894,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out));
            tracep->chgBit(oldp+895,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit));
            tracep->chgCData(oldp+896,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb),3);
            tracep->chgWData(oldp+897,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4),66);
            tracep->chgSData(oldp+900,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+901,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+902,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+903,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[3]),11);
            tracep->chgSData(oldp+904,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[4]),11);
            tracep->chgSData(oldp+905,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[5]),11);
            tracep->chgSData(oldp+906,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[0]),10);
            tracep->chgSData(oldp+907,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[1]),10);
            tracep->chgSData(oldp+908,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[2]),10);
            tracep->chgSData(oldp+909,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[3]),10);
            tracep->chgSData(oldp+910,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[4]),10);
            tracep->chgSData(oldp+911,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[5]),10);
            tracep->chgBit(oldp+912,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[0]));
            tracep->chgBit(oldp+913,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[1]));
            tracep->chgBit(oldp+914,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[2]));
            tracep->chgBit(oldp+915,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[3]));
            tracep->chgBit(oldp+916,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[4]));
            tracep->chgBit(oldp+917,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[5]));
            tracep->chgBit(oldp+918,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out));
            tracep->chgBit(oldp+919,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+920,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4),340);
            tracep->chgWData(oldp+931,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+934,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+937,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+940,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+943,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[4]),68);
            tracep->chgCData(oldp+946,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[0]),4);
            tracep->chgCData(oldp+947,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[1]),4);
            tracep->chgCData(oldp+948,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[2]),4);
            tracep->chgCData(oldp+949,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[3]),4);
            tracep->chgCData(oldp+950,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[4]),4);
            tracep->chgQData(oldp+951,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+953,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+955,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+957,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+959,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+961,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+963,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+964,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4),340);
            tracep->chgWData(oldp+975,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+978,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+981,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+984,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+987,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[4]),68);
            tracep->chgCData(oldp+990,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[0]),4);
            tracep->chgCData(oldp+991,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[1]),4);
            tracep->chgCData(oldp+992,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[2]),4);
            tracep->chgCData(oldp+993,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[3]),4);
            tracep->chgCData(oldp+994,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[4]),4);
            tracep->chgQData(oldp+995,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+997,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+999,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1001,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1003,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1005,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+1007,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit));
        }
        tracep->chgBit(oldp+1008,(vlSelf->reset));
        tracep->chgBit(oldp+1009,(vlSelf->clock));
        tracep->chgIData(oldp+1010,(vlSelf->instr),32);
        tracep->chgQData(oldp+1011,(vlSelf->momory_data),64);
        tracep->chgBit(oldp+1013,(vlSelf->fetch_enb));
        tracep->chgQData(oldp+1014,(vlSelf->pc),64);
        tracep->chgCData(oldp+1016,(vlSelf->memop),2);
        tracep->chgBit(oldp+1017,(vlSelf->mem_ena));
        tracep->chgBit(oldp+1018,(vlSelf->mem_wr));
        tracep->chgQData(oldp+1019,(vlSelf->mem_addr),64);
        tracep->chgQData(oldp+1021,(vlSelf->mem_stor_data),64);
        tracep->chgIData(oldp+1023,(vlSelf->difftest_instr),32);
        tracep->chgQData(oldp+1024,(vlSelf->difftest_pc),64);
        tracep->chgCData(oldp+1026,(((3U == (IData)(vlSelf->memop))
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
        tracep->chgQData(oldp+1027,(((IData)(vlSelf->top__DOT__error_pre)
                                      ? ((IData)(vlSelf->top__DOT__mux_pc)
                                          ? vlSelf->top__DOT__branch
                                          : (4ULL + vlSelf->top__DOT__ID_pc))
                                      : ((IData)(vlSelf->top__DOT__pre_jump)
                                          ? vlSelf->top__DOT__pre_branch
                                          : (4ULL + vlSelf->pc)))),64);
        tracep->chgBit(oldp+1029,(((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre) 
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
                                      >> 1U))));
        tracep->chgBit(oldp+1030,((((vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                     [(0xffU & (IData)(
                                                       (vlSelf->pc 
                                                        >> 2U)))][3U] 
                                     << 0x1eU) | (vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
                                                  [
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelf->pc 
                                                              >> 2U)))][2U] 
                                                  >> 2U)) 
                                   == (IData)(vlSelf->pc))));
        tracep->chgCData(oldp+1031,((0xffU & ((((IData)(
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
        tracep->chgCData(oldp+1032,((0xffU & ((IData)(
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
        tracep->chgCData(oldp+1033,((0xffU & (IData)(
                                                     (vlSelf->pc 
                                                      >> 2U)))),8);
        tracep->chgQData(oldp+1034,(((IData)(vlSelf->reset)
                                      ? 0ULL : ((0x200U 
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
                                                 [(0x1fU 
                                                   & (vlSelf->top__DOT__ID_instr 
                                                      >> 0xfU))])
                                                 : 0ULL))),64);
        tracep->chgQData(oldp+1036,(((IData)(vlSelf->reset)
                                      ? 0ULL : ((0x100U 
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
                                                 [(0x1fU 
                                                   & (vlSelf->top__DOT__ID_instr 
                                                      >> 0x14U))])
                                                 : 0ULL))),64);
        tracep->chgQData(oldp+1038,((vlSelf->top__DOT__id_data1 
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
