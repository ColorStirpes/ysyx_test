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
            tracep->chgCData(oldp+192,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[0]),8);
            tracep->chgCData(oldp+193,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[1]),8);
            tracep->chgCData(oldp+194,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[2]),8);
            tracep->chgCData(oldp+195,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[3]),8);
            tracep->chgCData(oldp+196,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[4]),8);
            tracep->chgCData(oldp+197,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[5]),8);
            tracep->chgCData(oldp+198,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[6]),8);
            tracep->chgCData(oldp+199,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list[7]),8);
            tracep->chgCData(oldp+200,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[0]),5);
            tracep->chgCData(oldp+201,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[1]),5);
            tracep->chgCData(oldp+202,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[2]),5);
            tracep->chgCData(oldp+203,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[3]),5);
            tracep->chgCData(oldp+204,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[4]),5);
            tracep->chgCData(oldp+205,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[5]),5);
            tracep->chgCData(oldp+206,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[6]),5);
            tracep->chgCData(oldp+207,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list[7]),5);
            tracep->chgCData(oldp+208,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[0]),3);
            tracep->chgCData(oldp+209,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[1]),3);
            tracep->chgCData(oldp+210,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[2]),3);
            tracep->chgCData(oldp+211,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[3]),3);
            tracep->chgCData(oldp+212,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[4]),3);
            tracep->chgCData(oldp+213,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[5]),3);
            tracep->chgCData(oldp+214,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[6]),3);
            tracep->chgCData(oldp+215,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list[7]),3);
            tracep->chgCData(oldp+216,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+217,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[1]),5);
            tracep->chgCData(oldp+218,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[2]),5);
            tracep->chgCData(oldp+219,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[3]),5);
            tracep->chgCData(oldp+220,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[4]),5);
            tracep->chgCData(oldp+221,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[5]),5);
            tracep->chgCData(oldp+222,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list[6]),5);
            tracep->chgCData(oldp+223,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+224,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+225,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgCData(oldp+226,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[3]),3);
            tracep->chgCData(oldp+227,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[4]),3);
            tracep->chgCData(oldp+228,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[5]),3);
            tracep->chgCData(oldp+229,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list[6]),3);
            tracep->chgCData(oldp+230,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[0]),2);
            tracep->chgCData(oldp+231,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[1]),2);
            tracep->chgCData(oldp+232,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[2]),2);
            tracep->chgCData(oldp+233,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[3]),2);
            tracep->chgCData(oldp+234,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[4]),2);
            tracep->chgCData(oldp+235,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[5]),2);
            tracep->chgCData(oldp+236,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list[6]),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__rdata),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__pre_branch),64);
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__pc_ready));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__pc_valid));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__if_ready));
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__if_id__DOT__if_now_valid));
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__ID_pre_jump));
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__ID_pre_branch),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__ID_pc),64);
            tracep->chgIData(oldp+250,(vlSelf->top__DOT__ID_instr),32);
            tracep->chgBit(oldp+251,(vlSelf->top__DOT__load_stall));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 0xaU))));
            tracep->chgCData(oldp+253,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+254,((IData)(((0U != 
                                               (0xeU 
                                                & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))) 
                                              | (0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))))));
            tracep->chgBit(oldp+255,((0U != (7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out)))));
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__id_imm),64);
            tracep->chgCData(oldp+258,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+259,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1))),5);
            tracep->chgCData(oldp+260,((7U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out))),3);
            tracep->chgCData(oldp+261,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                              >> 1U))),3);
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__id_ready));
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__id_ex__DOT__id_now_valid));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__EX_w_ena));
            tracep->chgCData(oldp+265,(vlSelf->top__DOT__EX_w_addr),5);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__EX_data1),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__EX_data2),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__EX_imm),64);
            tracep->chgCData(oldp+272,(vlSelf->top__DOT__EX_exop),3);
            tracep->chgCData(oldp+273,(vlSelf->top__DOT__EX_aluop),5);
            tracep->chgCData(oldp+274,(vlSelf->top__DOT__EX_memwop),3);
            tracep->chgCData(oldp+275,(vlSelf->top__DOT__EX_memrop),3);
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__EX_mem_ena));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__EX_mem_wr));
            tracep->chgIData(oldp+278,(vlSelf->top__DOT__EX_instr),32);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__EX_pc),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__ex_w_data),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__ex_mem_addr),64);
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__ex_ready));
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__ex_mem__DOT__ex_now_valid));
            tracep->chgBit(oldp+287,(vlSelf->top__DOT__MEM_w_ena));
            tracep->chgCData(oldp+288,(vlSelf->top__DOT__MEM_w_addr),5);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__MEM_w_data),64);
            tracep->chgCData(oldp+291,(vlSelf->top__DOT__MEM_memwop),3);
            tracep->chgCData(oldp+292,(vlSelf->top__DOT__MEM_memrop),3);
            tracep->chgBit(oldp+293,(vlSelf->top__DOT__MEM_mem_ena));
            tracep->chgBit(oldp+294,(vlSelf->top__DOT__MEM_mem_wr));
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__MEM_mem_addr),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__MEM_mem_stor_data),64);
            tracep->chgIData(oldp+299,(vlSelf->top__DOT__MEM_instr),32);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__MEM_pc),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__mem_w_data),64);
            tracep->chgBit(oldp+304,(vlSelf->top__DOT__mem_ready));
            tracep->chgBit(oldp+305,(vlSelf->top__DOT__mem_wb__DOT__mem_now_valid));
            tracep->chgBit(oldp+306,(vlSelf->top__DOT__WB_w_ena));
            tracep->chgCData(oldp+307,(vlSelf->top__DOT__WB_w_addr),5);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__WB_w_data),64);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__WB_pc),64);
            tracep->chgIData(oldp+312,(vlSelf->top__DOT__WB_instr),32);
            tracep->chgBit(oldp+313,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__pc_now_valid));
            tracep->chgCData(oldp+314,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_hash),8);
            tracep->chgCData(oldp+315,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index),8);
            tracep->chgIData(oldp+316,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i),32);
            tracep->chgIData(oldp+317,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j),32);
            tracep->chgCData(oldp+318,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__ID_pc 
                                                         >> 2U)))),8);
            tracep->chgCData(oldp+319,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__jumptype),2);
            tracep->chgIData(oldp+320,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__i),32);
            tracep->chgIData(oldp+321,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__j),32);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[0]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[1]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[2]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[3]),64);
            tracep->chgQData(oldp+330,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[4]),64);
            tracep->chgQData(oldp+332,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[5]),64);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[6]),64);
            tracep->chgQData(oldp+336,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[7]),64);
            tracep->chgQData(oldp+338,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[8]),64);
            tracep->chgQData(oldp+340,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[9]),64);
            tracep->chgQData(oldp+342,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[10]),64);
            tracep->chgQData(oldp+344,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[11]),64);
            tracep->chgQData(oldp+346,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[12]),64);
            tracep->chgQData(oldp+348,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[13]),64);
            tracep->chgQData(oldp+350,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[14]),64);
            tracep->chgQData(oldp+352,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS[15]),64);
            tracep->chgCData(oldp+354,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index),4);
            tracep->chgBit(oldp+355,((1U & (~ (IData)(vlSelf->top__DOT__load_stall)))));
            tracep->chgIData(oldp+356,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__r_count),32);
            tracep->chgIData(oldp+357,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__count),32);
            tracep->chgCData(oldp+358,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ztype),3);
            tracep->chgBit(oldp+359,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 9U))));
            tracep->chgCData(oldp+360,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0xfU))),5);
            tracep->chgBit(oldp+361,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                            >> 8U))));
            tracep->chgCData(oldp+362,((0x1fU & (vlSelf->top__DOT__ID_instr 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+363,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__bbranch),64);
            tracep->chgBit(oldp+365,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__ID_instr 
                                            >> 0xfU))) 
                                      & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                         & ((IData)(vlSelf->top__DOT__EX_w_ena) 
                                            & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                               >> 9U))))));
            tracep->chgBit(oldp+366,((((IData)(vlSelf->top__DOT__EX_w_addr) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__ID_instr 
                                            >> 0x14U))) 
                                      & ((0U != (IData)(vlSelf->top__DOT__EX_w_addr)) 
                                         & ((IData)(vlSelf->top__DOT__EX_w_ena) 
                                            & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                               >> 8U))))));
            tracep->chgBit(oldp+367,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__ID_instr 
                                            >> 0xfU))) 
                                      & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                         & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                            & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                               >> 9U))))));
            tracep->chgBit(oldp+368,((((IData)(vlSelf->top__DOT__MEM_w_addr) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__ID_instr 
                                            >> 0x14U))) 
                                      & ((0U != (IData)(vlSelf->top__DOT__MEM_w_addr)) 
                                         & ((IData)(vlSelf->top__DOT__MEM_w_ena) 
                                            & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1) 
                                               >> 8U))))));
            tracep->chgBit(oldp+369,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+370,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+371,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                            >> 8U))));
            tracep->chgBit(oldp+372,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                            >> 8U))));
            tracep->chgBit(oldp+373,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                            >> 9U))));
            tracep->chgBit(oldp+374,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                            >> 8U))));
            tracep->chgCData(oldp+375,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+376,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                              >> 9U))),3);
            tracep->chgCData(oldp+377,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                              >> 8U))),3);
            tracep->chgCData(oldp+378,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+379,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                              >> 6U))),3);
            tracep->chgCData(oldp+380,((7U & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out) 
                                              >> 5U))),3);
            tracep->chgCData(oldp+381,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out))),5);
            tracep->chgCData(oldp+382,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out) 
                                                 >> 4U))),5);
            tracep->chgCData(oldp+383,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out) 
                                                 >> 3U))),5);
            tracep->chgCData(oldp+384,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out))),5);
            tracep->chgCData(oldp+385,((0x1fU & ((IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out) 
                                                 >> 1U))),5);
            tracep->chgCData(oldp+386,((0x1fU & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out))),5);
            tracep->chgBit(oldp+387,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out))));
            tracep->chgBit(oldp+388,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out))));
            tracep->chgSData(oldp+389,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1),11);
            tracep->chgWData(oldp+390,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4),84);
            tracep->chgSData(oldp+393,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[0]),14);
            tracep->chgSData(oldp+394,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[1]),14);
            tracep->chgSData(oldp+395,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[2]),14);
            tracep->chgSData(oldp+396,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[3]),14);
            tracep->chgSData(oldp+397,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[4]),14);
            tracep->chgSData(oldp+398,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list[5]),14);
            tracep->chgCData(oldp+399,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+400,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+401,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgCData(oldp+402,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[3]),3);
            tracep->chgCData(oldp+403,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[4]),3);
            tracep->chgCData(oldp+404,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list[5]),3);
            tracep->chgSData(oldp+405,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[0]),11);
            tracep->chgSData(oldp+406,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[1]),11);
            tracep->chgSData(oldp+407,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[2]),11);
            tracep->chgSData(oldp+408,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[3]),11);
            tracep->chgSData(oldp+409,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[4]),11);
            tracep->chgSData(oldp+410,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list[5]),11);
            tracep->chgSData(oldp+411,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out),11);
            tracep->chgBit(oldp+412,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit));
            tracep->chgCData(oldp+413,((0x7fU & vlSelf->top__DOT__ID_instr)),7);
            tracep->chgCData(oldp+414,((7U & (vlSelf->top__DOT__ID_instr 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+415,((vlSelf->top__DOT__ID_instr 
                                        >> 0x19U)),7);
            tracep->chgSData(oldp+416,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out),9);
            tracep->chgIData(oldp+417,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose),17);
            tracep->chgSData(oldp+418,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out),9);
            tracep->chgBit(oldp+419,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit));
            tracep->chgBit(oldp+420,((1U & (vlSelf->top__DOT__ID_instr 
                                            >> 0x14U))));
            tracep->chgSData(oldp+421,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out),13);
            tracep->chgSData(oldp+422,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1),13);
            tracep->chgSData(oldp+423,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2),12);
            tracep->chgSData(oldp+424,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3),12);
            tracep->chgSData(oldp+425,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4),12);
            tracep->chgSData(oldp+426,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1),10);
            tracep->chgSData(oldp+427,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2),16);
            tracep->chgIData(oldp+428,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3),17);
            tracep->chgIData(oldp+429,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4),18);
            tracep->chgCData(oldp+430,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2),4);
            tracep->chgWData(oldp+431,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4),68);
            tracep->chgIData(oldp+434,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[0]),17);
            tracep->chgIData(oldp+435,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[1]),17);
            tracep->chgIData(oldp+436,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[2]),17);
            tracep->chgIData(oldp+437,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list[3]),17);
            tracep->chgCData(oldp+438,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[0]),4);
            tracep->chgCData(oldp+439,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[1]),4);
            tracep->chgCData(oldp+440,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[2]),4);
            tracep->chgCData(oldp+441,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list[3]),4);
            tracep->chgSData(oldp+442,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[0]),13);
            tracep->chgSData(oldp+443,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[1]),13);
            tracep->chgSData(oldp+444,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[2]),13);
            tracep->chgSData(oldp+445,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list[3]),13);
            tracep->chgSData(oldp+446,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out),13);
            tracep->chgBit(oldp+447,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+448,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out),13);
            tracep->chgBit(oldp+449,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+450,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out),12);
            tracep->chgBit(oldp+451,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+452,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out),12);
            tracep->chgBit(oldp+453,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+454,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out),12);
            tracep->chgBit(oldp+455,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+456,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out),12);
            tracep->chgSData(oldp+457,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out),12);
            tracep->chgBit(oldp+458,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+459,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose),10);
            tracep->chgSData(oldp+460,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out),9);
            tracep->chgSData(oldp+461,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out),9);
            tracep->chgBit(oldp+462,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+463,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out),10);
            tracep->chgSData(oldp+464,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__lut_out),10);
            tracep->chgBit(oldp+465,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__hit));
            tracep->chgSData(oldp+466,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out),9);
            tracep->chgSData(oldp+467,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out),9);
            tracep->chgBit(oldp+468,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit));
            tracep->chgIData(oldp+469,((vlSelf->top__DOT__ID_instr 
                                        >> 7U)),25);
            tracep->chgWData(oldp+470,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4),335);
            tracep->chgWData(oldp+481,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+484,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+487,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+490,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+493,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+496,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+497,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+498,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgCData(oldp+499,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[3]),3);
            tracep->chgCData(oldp+500,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list[4]),3);
            tracep->chgQData(oldp+501,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+503,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+505,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+507,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+509,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+511,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+513,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit));
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+520,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+524,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+526,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+528,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+534,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+536,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+538,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+540,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+546,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+548,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+550,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+554,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+556,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+558,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+560,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+562,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+564,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+566,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+568,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+570,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+572,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+574,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+576,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs[31]),64);
            tracep->chgIData(oldp+578,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__i),32);
            tracep->chgCData(oldp+579,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2),4);
            tracep->chgCData(oldp+580,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2),4);
            tracep->chgQData(oldp+581,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__result),64);
            tracep->chgBit(oldp+583,((1U & ((~ ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena) 
                                                >> 1U)) 
                                            | (0x41U 
                                               == (IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__count))))));
            tracep->chgIData(oldp+584,((IData)(vlSelf->top__DOT__EX_data1)),32);
            tracep->chgIData(oldp+585,((IData)(vlSelf->top__DOT__EX_data2)),32);
            tracep->chgCData(oldp+586,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena),3);
            tracep->chgQData(oldp+587,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__quotient),64);
            tracep->chgQData(oldp+589,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__remainder),64);
            tracep->chgBit(oldp+591,((0x41U == (IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__count))));
            tracep->chgCData(oldp+592,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__lut_out),3);
            tracep->chgBit(oldp+593,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__hit));
            tracep->chgBit(oldp+594,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena) 
                                            >> 2U))));
            tracep->chgBit(oldp+595,((1U & ((IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena) 
                                            >> 1U))));
            tracep->chgBit(oldp+596,((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena))));
            tracep->chgWData(oldp+597,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__dividend_reg),128);
            tracep->chgQData(oldp+601,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__quotient_reg),64);
            tracep->chgWData(oldp+603,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__remainder_reg),65);
            tracep->chgCData(oldp+606,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__count),7);
            tracep->chgQData(oldp+607,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__abs_dividend),64);
            tracep->chgQData(oldp+609,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__abs_divisor),64);
            tracep->chgBit(oldp+611,((1U & ((IData)(
                                                    (vlSelf->top__DOT__EX_data2 
                                                     >> 0x3fU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__EX_data1 
                                                       >> 0x3fU))))));
            tracep->chgBit(oldp+612,((1U & (IData)(
                                                   (vlSelf->top__DOT__EX_data1 
                                                    >> 0x3fU)))));
            tracep->chgWData(oldp+613,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__sub_64),65);
            tracep->chgQData(oldp+616,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__sub_32),33);
            tracep->chgQData(oldp+618,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__quotient_64),64);
            tracep->chgQData(oldp+620,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_64),64);
            tracep->chgQData(oldp+622,(((1U & (IData)(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__EX_data1 
                                                           >> 0x3fU)))
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_64))
                                             : vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_64)
                                         : vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_64)),64);
            tracep->chgIData(oldp+624,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_32),32);
            tracep->chgIData(oldp+625,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__remainder_32),32);
            tracep->chgWData(oldp+626,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT____Vcellinp__ALU____pinNumber4),1932);
            tracep->chgWData(oldp+687,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+690,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+693,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+696,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+699,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+702,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+705,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+708,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+711,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+714,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+717,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+720,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+723,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+726,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+729,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+732,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+735,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+738,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+741,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+744,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+747,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[20]),69);
            tracep->chgWData(oldp+750,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[21]),69);
            tracep->chgWData(oldp+753,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[22]),69);
            tracep->chgWData(oldp+756,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[23]),69);
            tracep->chgWData(oldp+759,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[24]),69);
            tracep->chgWData(oldp+762,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[25]),69);
            tracep->chgWData(oldp+765,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[26]),69);
            tracep->chgWData(oldp+768,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list[27]),69);
            tracep->chgCData(oldp+771,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[0]),5);
            tracep->chgCData(oldp+772,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[1]),5);
            tracep->chgCData(oldp+773,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[2]),5);
            tracep->chgCData(oldp+774,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[3]),5);
            tracep->chgCData(oldp+775,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[4]),5);
            tracep->chgCData(oldp+776,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[5]),5);
            tracep->chgCData(oldp+777,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[6]),5);
            tracep->chgCData(oldp+778,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[7]),5);
            tracep->chgCData(oldp+779,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[8]),5);
            tracep->chgCData(oldp+780,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[9]),5);
            tracep->chgCData(oldp+781,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[10]),5);
            tracep->chgCData(oldp+782,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[11]),5);
            tracep->chgCData(oldp+783,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[12]),5);
            tracep->chgCData(oldp+784,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[13]),5);
            tracep->chgCData(oldp+785,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[14]),5);
            tracep->chgCData(oldp+786,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[15]),5);
            tracep->chgCData(oldp+787,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[16]),5);
            tracep->chgCData(oldp+788,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[17]),5);
            tracep->chgCData(oldp+789,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[18]),5);
            tracep->chgCData(oldp+790,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[19]),5);
            tracep->chgCData(oldp+791,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[20]),5);
            tracep->chgCData(oldp+792,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[21]),5);
            tracep->chgCData(oldp+793,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[22]),5);
            tracep->chgCData(oldp+794,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[23]),5);
            tracep->chgCData(oldp+795,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[24]),5);
            tracep->chgCData(oldp+796,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[25]),5);
            tracep->chgCData(oldp+797,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[26]),5);
            tracep->chgCData(oldp+798,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list[27]),5);
            tracep->chgQData(oldp+799,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+801,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+803,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+805,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+807,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+809,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[5]),64);
            tracep->chgQData(oldp+811,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[6]),64);
            tracep->chgQData(oldp+813,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[7]),64);
            tracep->chgQData(oldp+815,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[8]),64);
            tracep->chgQData(oldp+817,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[9]),64);
            tracep->chgQData(oldp+819,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[10]),64);
            tracep->chgQData(oldp+821,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[11]),64);
            tracep->chgQData(oldp+823,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[12]),64);
            tracep->chgQData(oldp+825,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[13]),64);
            tracep->chgQData(oldp+827,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[14]),64);
            tracep->chgQData(oldp+829,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[15]),64);
            tracep->chgQData(oldp+831,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[16]),64);
            tracep->chgQData(oldp+833,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[17]),64);
            tracep->chgQData(oldp+835,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[18]),64);
            tracep->chgQData(oldp+837,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[19]),64);
            tracep->chgQData(oldp+839,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[20]),64);
            tracep->chgQData(oldp+841,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[21]),64);
            tracep->chgQData(oldp+843,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[22]),64);
            tracep->chgQData(oldp+845,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[23]),64);
            tracep->chgQData(oldp+847,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[24]),64);
            tracep->chgQData(oldp+849,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[25]),64);
            tracep->chgQData(oldp+851,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[26]),64);
            tracep->chgQData(oldp+853,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list[27]),64);
            tracep->chgQData(oldp+855,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+857,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+858,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4),201);
            tracep->chgWData(oldp+865,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+868,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+871,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+874,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+875,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+876,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgQData(oldp+877,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+879,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+881,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+883,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+885,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+886,(vlSelf->top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4),134);
            tracep->chgWData(oldp+891,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+894,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgCData(oldp+897,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+898,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgQData(oldp+899,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+901,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+903,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+905,(vlSelf->top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit));
            tracep->chgQData(oldp+906,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data),64);
            tracep->chgCData(oldp+908,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memwrop),3);
            tracep->chgQData(oldp+909,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_one),64);
            tracep->chgQData(oldp+911,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_two),64);
            tracep->chgQData(oldp+913,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__stor_data_for),64);
            tracep->chgCData(oldp+915,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out),2);
            tracep->chgBit(oldp+916,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+917,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4),469);
            tracep->chgWData(oldp+932,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+935,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+938,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+941,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+944,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+947,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[5]),67);
            tracep->chgWData(oldp+950,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list[6]),67);
            tracep->chgCData(oldp+953,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+954,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+955,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgCData(oldp+956,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[3]),3);
            tracep->chgCData(oldp+957,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[4]),3);
            tracep->chgCData(oldp+958,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[5]),3);
            tracep->chgCData(oldp+959,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list[6]),3);
            tracep->chgQData(oldp+960,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+962,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+964,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+966,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+968,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+970,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[5]),64);
            tracep->chgQData(oldp+972,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list[6]),64);
            tracep->chgQData(oldp+974,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+976,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+977,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4),268);
            tracep->chgWData(oldp+986,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+989,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+992,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+995,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list[3]),67);
            tracep->chgCData(oldp+998,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+999,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+1000,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgCData(oldp+1001,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list[3]),3);
            tracep->chgQData(oldp+1002,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1004,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1006,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1008,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1010,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+1012,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit));
            tracep->chgCData(oldp+1013,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2),6);
            tracep->chgWData(oldp+1014,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4),560);
            tracep->chgWData(oldp+1032,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[0]),70);
            tracep->chgWData(oldp+1035,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[1]),70);
            tracep->chgWData(oldp+1038,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[2]),70);
            tracep->chgWData(oldp+1041,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[3]),70);
            tracep->chgWData(oldp+1044,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[4]),70);
            tracep->chgWData(oldp+1047,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[5]),70);
            tracep->chgWData(oldp+1050,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[6]),70);
            tracep->chgWData(oldp+1053,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list[7]),70);
            tracep->chgCData(oldp+1056,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[0]),6);
            tracep->chgCData(oldp+1057,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[1]),6);
            tracep->chgCData(oldp+1058,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[2]),6);
            tracep->chgCData(oldp+1059,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[3]),6);
            tracep->chgCData(oldp+1060,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[4]),6);
            tracep->chgCData(oldp+1061,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[5]),6);
            tracep->chgCData(oldp+1062,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[6]),6);
            tracep->chgCData(oldp+1063,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list[7]),6);
            tracep->chgQData(oldp+1064,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1066,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1068,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1070,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1072,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1074,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1076,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[6]),64);
            tracep->chgQData(oldp+1078,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list[7]),64);
            tracep->chgQData(oldp+1080,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+1082,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit));
            tracep->chgCData(oldp+1083,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2),5);
            tracep->chgWData(oldp+1084,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4),276);
            tracep->chgWData(oldp+1093,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+1096,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+1099,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+1102,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list[3]),69);
            tracep->chgCData(oldp+1105,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[0]),5);
            tracep->chgCData(oldp+1106,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[1]),5);
            tracep->chgCData(oldp+1107,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[2]),5);
            tracep->chgCData(oldp+1108,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list[3]),5);
            tracep->chgQData(oldp+1109,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1111,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1113,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1115,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1117,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+1119,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit));
            tracep->chgCData(oldp+1120,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2),4);
            tracep->chgWData(oldp+1121,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4),136);
            tracep->chgWData(oldp+1126,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+1129,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+1132,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1133,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list[1]),4);
            tracep->chgQData(oldp+1134,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1136,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1138,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+1140,(vlSelf->top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+1141,(vlSelf->top__DOT__mux_pc));
            tracep->chgQData(oldp+1142,(vlSelf->top__DOT__branch),64);
            tracep->chgBit(oldp+1144,(vlSelf->top__DOT__pre_jump));
            tracep->chgCData(oldp+1145,(vlSelf->top__DOT__jumptype),2);
            tracep->chgBit(oldp+1146,(vlSelf->top__DOT__error_pre));
            tracep->chgQData(oldp+1147,(vlSelf->top__DOT__id_data1),64);
            tracep->chgQData(oldp+1149,(vlSelf->top__DOT__id_data2),64);
            tracep->chgBit(oldp+1151,(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre));
            tracep->chgWData(oldp+1152,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4),201);
            tracep->chgWData(oldp+1159,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+1162,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+1165,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+1168,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+1169,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+1170,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgQData(oldp+1171,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1173,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1175,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1177,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+1179,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit));
            tracep->chgBit(oldp+1180,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__bjump));
            tracep->chgSData(oldp+1181,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4),12);
            tracep->chgCData(oldp+1182,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+1183,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+1184,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+1185,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[0]),3);
            tracep->chgCData(oldp+1186,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[1]),3);
            tracep->chgCData(oldp+1187,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list[2]),3);
            tracep->chgBit(oldp+1188,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[0]));
            tracep->chgBit(oldp+1189,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[1]));
            tracep->chgBit(oldp+1190,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list[2]));
            tracep->chgBit(oldp+1191,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out));
            tracep->chgBit(oldp+1192,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit));
            tracep->chgCData(oldp+1193,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb),3);
            tracep->chgWData(oldp+1194,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4),66);
            tracep->chgSData(oldp+1197,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[0]),11);
            tracep->chgSData(oldp+1198,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[1]),11);
            tracep->chgSData(oldp+1199,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[2]),11);
            tracep->chgSData(oldp+1200,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[3]),11);
            tracep->chgSData(oldp+1201,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[4]),11);
            tracep->chgSData(oldp+1202,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list[5]),11);
            tracep->chgSData(oldp+1203,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[0]),10);
            tracep->chgSData(oldp+1204,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[1]),10);
            tracep->chgSData(oldp+1205,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[2]),10);
            tracep->chgSData(oldp+1206,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[3]),10);
            tracep->chgSData(oldp+1207,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[4]),10);
            tracep->chgSData(oldp+1208,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list[5]),10);
            tracep->chgBit(oldp+1209,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[0]));
            tracep->chgBit(oldp+1210,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[1]));
            tracep->chgBit(oldp+1211,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[2]));
            tracep->chgBit(oldp+1212,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[3]));
            tracep->chgBit(oldp+1213,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[4]));
            tracep->chgBit(oldp+1214,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list[5]));
            tracep->chgBit(oldp+1215,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out));
            tracep->chgBit(oldp+1216,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+1217,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4),340);
            tracep->chgWData(oldp+1228,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+1231,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+1234,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+1237,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+1240,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list[4]),68);
            tracep->chgCData(oldp+1243,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1244,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1245,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[2]),4);
            tracep->chgCData(oldp+1246,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[3]),4);
            tracep->chgCData(oldp+1247,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list[4]),4);
            tracep->chgQData(oldp+1248,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1250,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1252,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1254,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1256,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1258,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+1260,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit));
            tracep->chgWData(oldp+1261,(vlSelf->top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4),340);
            tracep->chgWData(oldp+1272,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+1275,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+1278,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+1281,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+1284,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list[4]),68);
            tracep->chgCData(oldp+1287,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1288,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[1]),4);
            tracep->chgCData(oldp+1289,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[2]),4);
            tracep->chgCData(oldp+1290,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[3]),4);
            tracep->chgCData(oldp+1291,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list[4]),4);
            tracep->chgQData(oldp+1292,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1294,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1296,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1298,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1300,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1302,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out),64);
            tracep->chgBit(oldp+1304,(vlSelf->top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit));
        }
        tracep->chgBit(oldp+1305,(vlSelf->reset));
        tracep->chgBit(oldp+1306,(vlSelf->clock));
        tracep->chgIData(oldp+1307,(vlSelf->instr),32);
        tracep->chgQData(oldp+1308,(vlSelf->momory_data),64);
        tracep->chgBit(oldp+1310,(vlSelf->fetch_enb));
        tracep->chgQData(oldp+1311,(vlSelf->pc),64);
        tracep->chgCData(oldp+1313,(vlSelf->memop),2);
        tracep->chgBit(oldp+1314,(vlSelf->mem_ena));
        tracep->chgBit(oldp+1315,(vlSelf->mem_wr));
        tracep->chgQData(oldp+1316,(vlSelf->mem_addr),64);
        tracep->chgQData(oldp+1318,(vlSelf->mem_stor_data),64);
        tracep->chgIData(oldp+1320,(vlSelf->difftest_instr),32);
        tracep->chgQData(oldp+1321,(vlSelf->difftest_pc),64);
        tracep->chgCData(oldp+1323,(((3U == (IData)(vlSelf->memop))
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
        tracep->chgQData(oldp+1324,(((IData)(vlSelf->top__DOT__error_pre)
                                      ? ((IData)(vlSelf->top__DOT__mux_pc)
                                          ? vlSelf->top__DOT__branch
                                          : (4ULL + vlSelf->top__DOT__ID_pc))
                                      : ((IData)(vlSelf->top__DOT__pre_jump)
                                          ? vlSelf->top__DOT__pre_branch
                                          : (4ULL + vlSelf->pc)))),64);
        tracep->chgBit(oldp+1326,(((IData)(vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre) 
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
        tracep->chgBit(oldp+1327,((((vlSelf->top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1
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
        tracep->chgCData(oldp+1328,((0xffU & ((((IData)(
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
        tracep->chgCData(oldp+1329,((0xffU & ((IData)(
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
        tracep->chgCData(oldp+1330,((0xffU & (IData)(
                                                     (vlSelf->pc 
                                                      >> 2U)))),8);
        tracep->chgQData(oldp+1331,(((IData)(vlSelf->reset)
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
        tracep->chgQData(oldp+1333,(((IData)(vlSelf->reset)
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
        tracep->chgQData(oldp+1335,((vlSelf->top__DOT__id_data1 
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
