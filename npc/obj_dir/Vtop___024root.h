// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop___024unit;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(fetch_enb,0,0);
    VL_OUT8(memop,1,0);
    VL_OUT8(mem_ena,0,0);
    VL_OUT8(mem_wr,0,0);
    VL_IN(instr,31,0);
    VL_OUT(difftest_instr,31,0);
    VL_IN64(momory_data,63,0);
    VL_OUT64(pc,63,0);
    VL_OUT64(mem_addr,63,0);
    VL_OUT64(mem_stor_data,63,0);
    VL_OUT64(difftest_pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__mux_pc;
        CData/*0:0*/ top__DOT__pre_jump;
        CData/*0:0*/ top__DOT__pc_ready;
        CData/*0:0*/ top__DOT__pc_valid;
        CData/*0:0*/ top__DOT__if_ready;
        CData/*0:0*/ top__DOT__ID_pre_jump;
        CData/*0:0*/ top__DOT__nop;
        CData/*0:0*/ top__DOT__load_stall;
        CData/*1:0*/ top__DOT__jumptype;
        CData/*0:0*/ top__DOT__error_pre;
        CData/*0:0*/ top__DOT__id_ready;
        CData/*0:0*/ top__DOT__EX_w_ena;
        CData/*4:0*/ top__DOT__EX_w_addr;
        CData/*2:0*/ top__DOT__EX_exop;
        CData/*5:0*/ top__DOT__EX_aluop;
        CData/*2:0*/ top__DOT__EX_memwop;
        CData/*2:0*/ top__DOT__EX_memrop;
        CData/*0:0*/ top__DOT__EX_mem_ena;
        CData/*0:0*/ top__DOT__EX_mem_wr;
        CData/*0:0*/ top__DOT__to_ex_valid;
        CData/*0:0*/ top__DOT__ex_ready;
        CData/*0:0*/ top__DOT__MEM_w_ena;
        CData/*4:0*/ top__DOT__MEM_w_addr;
        CData/*2:0*/ top__DOT__MEM_memwop;
        CData/*2:0*/ top__DOT__MEM_memrop;
        CData/*0:0*/ top__DOT__MEM_mem_ena;
        CData/*0:0*/ top__DOT__MEM_mem_wr;
        CData/*0:0*/ top__DOT__WB_w_ena;
        CData/*4:0*/ top__DOT__WB_w_addr;
        CData/*0:0*/ top__DOT__ysyx_22040931_IF__DOT__flush;
        CData/*0:0*/ top__DOT__ysyx_22040931_IF__DOT__stall;
        CData/*0:0*/ top__DOT__ysyx_22040931_IF__DOT__pc_now_valid;
        CData/*0:0*/ top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__valid_pre;
        CData/*7:0*/ top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_hash;
        CData/*7:0*/ top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__id_pht_index;
        CData/*1:0*/ top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__jumptype;
        CData/*3:0*/ top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__ras_index;
        CData/*0:0*/ top__DOT__if_id__DOT__flush;
        CData/*0:0*/ top__DOT__if_id__DOT__if_now_valid;
        CData/*2:0*/ top__DOT__ysyx_22040931_ID__DOT__ztype;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__bjump;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__lut_out;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__hit;
        CData/*2:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__jumpb;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__lut_out;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__id_ex__DOT__flush;
        CData/*0:0*/ top__DOT__id_ex__DOT__stall;
        CData/*0:0*/ top__DOT__id_ex__DOT__id_now_valid;
    };
    struct {
        CData/*2:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__d_m_ena;
        CData/*0:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__div_valid;
        CData/*0:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__div_ready;
        CData/*2:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__lut_out;
        CData/*0:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__hit;
        CData/*6:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__count;
        CData/*0:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__div;
        CData/*0:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ex_mem__DOT__flush;
        CData/*0:0*/ top__DOT__ex_mem__DOT__stall;
        CData/*0:0*/ top__DOT__ex_mem__DOT__ex_now_valid;
        CData/*2:0*/ top__DOT__ysyx_22040931_MEM__DOT__memwrop;
        CData/*1:0*/ top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__lut_out;
        CData/*0:0*/ top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__hit;
        CData/*0:0*/ top__DOT__mem_wb__DOT__flush;
        CData/*0:0*/ top__DOT__mem_wb__DOT__stall;
        CData/*0:0*/ top__DOT__mem_wb__DOT__mem_now_valid;
        SData/*11:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__lut_out;
        SData/*9:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__out;
        SData/*9:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__lut_out;
        SData/*13:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out;
        SData/*13:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out1;
        SData/*12:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out2;
        SData/*12:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out3;
        SData/*12:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__out4;
        SData/*9:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose1;
        SData/*15:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose2;
        SData/*13:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__lut_out;
        SData/*13:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__lut_out;
        SData/*12:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__lut_out;
        SData/*12:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__lut_out;
        SData/*12:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__lut_out;
        SData/*12:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__out;
        SData/*12:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__lut_out;
        SData/*9:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__chose;
        SData/*9:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__out;
        SData/*9:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__lut_out;
        SData/*10:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__out;
        SData/*10:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__lut_out;
        SData/*9:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__out;
        SData/*9:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__lut_out;
        IData/*31:0*/ top__DOT__ID_instr;
        IData/*31:0*/ top__DOT__EX_instr;
        IData/*31:0*/ top__DOT__MEM_instr;
        IData/*31:0*/ top__DOT__WB_instr;
        IData/*31:0*/ top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__i;
        IData/*31:0*/ top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__j;
        IData/*31:0*/ top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__i;
        IData/*31:0*/ top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__j;
        IData/*31:0*/ top__DOT__ysyx_22040931_ID__DOT__r_count;
        IData/*31:0*/ top__DOT__ysyx_22040931_ID__DOT__count;
        IData/*16:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__chose;
        IData/*16:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose3;
        IData/*17:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__chose4;
        IData/*31:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__i;
        VlWide<4>/*127:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__dividend_reg;
        VlWide<3>/*64:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__remainder_reg;
    };
    struct {
        VlWide<3>/*64:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__sub_64;
        IData/*31:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_32;
        IData/*31:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__remainder_32;
        QData/*63:0*/ top__DOT__rdata;
        QData/*63:0*/ top__DOT__branch;
        QData/*63:0*/ top__DOT__pre_branch;
        QData/*63:0*/ top__DOT__ID_pre_branch;
        QData/*63:0*/ top__DOT__ID_pc;
        QData/*63:0*/ top__DOT__id_data1;
        QData/*63:0*/ top__DOT__id_data2;
        QData/*63:0*/ top__DOT__id_imm;
        QData/*63:0*/ top__DOT__EX_data1;
        QData/*63:0*/ top__DOT__EX_data2;
        QData/*63:0*/ top__DOT__EX_imm;
        QData/*63:0*/ top__DOT__EX_pc;
        QData/*63:0*/ top__DOT__ex_w_data;
        QData/*63:0*/ top__DOT__ex_mem_addr;
        QData/*63:0*/ top__DOT__MEM_w_data;
        QData/*63:0*/ top__DOT__MEM_mem_addr;
        QData/*63:0*/ top__DOT__MEM_mem_stor_data;
        QData/*63:0*/ top__DOT__MEM_pc;
        QData/*63:0*/ top__DOT__mem_w_data;
        QData/*63:0*/ top__DOT__WB_w_data;
        QData/*63:0*/ top__DOT__WB_pc;
        QData/*63:0*/ top__DOT__ysyx_22040931_IF__DOT__pc_i;
        QData/*63:0*/ top__DOT__ysyx_22040931_ID__DOT__bbranch;
        QData/*63:0*/ top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__result;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__quotient;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__remainder;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__quotient_reg;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__abs_dividend;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__abs_divisor;
        QData/*32:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__sub_32;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__quotient_64;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__divider__DOT__last_remainder_64;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_r_data;
        QData/*63:0*/ top__DOT__ysyx_22040931_MEM__DOT__stor_data_one;
        QData/*63:0*/ top__DOT__ysyx_22040931_MEM__DOT__stor_data_two;
        QData/*63:0*/ top__DOT__ysyx_22040931_MEM__DOT__stor_data_for;
        QData/*63:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__lut_out;
        QData/*63:0*/ top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__lut_out;
        VlUnpacked<CData/*1:0*/, 256> top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__PHT;
        VlUnpacked<CData/*7:0*/, 256> top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__direction_predictor__DOT__BHT;
        VlUnpacked<VlWide<4>/*97:0*/, 256> top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__BTB1;
        VlUnpacked<QData/*63:0*/, 16> top__DOT__ysyx_22040931_IF__DOT__predictor__DOT__target_predictor__DOT__RAS;
        VlUnpacked<VlWide<3>/*66:0*/, 3> top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__ysyx_22040931_ID__DOT__branch_mux__DOT__i1__DOT__data_list;
        VlUnpacked<SData/*14:0*/, 6> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*11:0*/, 6> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__opt_mux__DOT__i1__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 3> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__jump_mux__DOT__i1__DOT__data_list;
    };
    struct {
        VlUnpacked<IData/*26:0*/, 28> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__pair_list;
        VlUnpacked<IData/*16:0*/, 28> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*9:0*/, 28> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Rtype__DOT__Rtype__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*17:0*/, 4> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 4> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*13:0*/, 4> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*23:0*/, 13> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__pair_list;
        VlUnpacked<SData/*9:0*/, 13> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*13:0*/, 13> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype1__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*28:0*/, 3> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__pair_list;
        VlUnpacked<SData/*15:0*/, 3> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*12:0*/, 3> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype2__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*29:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__pair_list;
        VlUnpacked<IData/*16:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*12:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype3__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*30:0*/, 2> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__pair_list;
        VlUnpacked<IData/*17:0*/, 2> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*12:0*/, 2> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT__Itype4__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*22:0*/, 4> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__pair_list;
        VlUnpacked<SData/*9:0*/, 4> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*12:0*/, 4> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Stype__DOT__Stype__DOT__i1__DOT__data_list;
        VlUnpacked<SData/*10:0*/, 6> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__pair_list;
        VlUnpacked<SData/*9:0*/, 6> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 6> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Jump_b__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*19:0*/, 6> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__pair_list;
        VlUnpacked<SData/*9:0*/, 6> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*9:0*/, 6> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT__Btype__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*17:0*/, 1> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 1> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*10:0*/, 1> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Jtype__DOT__Jtype__DOT__i1__DOT__data_list;
        VlUnpacked<IData/*16:0*/, 2> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__key_list;
        VlUnpacked<SData/*9:0*/, 2> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Utype__DOT__Utype__DOT__i1__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT__imm_mux__DOT__i1__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Regfile__DOT__regs;
        VlUnpacked<VlWide<3>/*67:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__reg_data1__DOT__i1__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> top__DOT__ysyx_22040931_ID__DOT__reg_data2__DOT__i1__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 8> top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*5:0*/, 8> top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 8> top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__D_M_ENA__DOT__i1__DOT__data_list;
        VlUnpacked<VlWide<3>/*69:0*/, 29> top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*5:0*/, 29> top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 29> top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT__ALU__DOT__i1__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 3> top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__ysyx_22040931_EX__DOT__w_data_mux__DOT__i1__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 2> top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 2> top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__ysyx_22040931_EX__DOT__mem_addr_mux__DOT__i1__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 7> top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 7> top__DOT__ysyx_22040931_MEM__DOT__memop_mux__DOT__i1__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 7> top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 7> top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 7> top__DOT__ysyx_22040931_MEM__DOT__mem_r_data_mux__DOT__i1__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 4> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 4> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data_mux__DOT__i1__DOT__data_list;
    };
    struct {
        VlUnpacked<VlWide<3>/*69:0*/, 8> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*5:0*/, 8> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 8> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data1_mux__DOT__i1__DOT__data_list;
        VlUnpacked<VlWide<3>/*68:0*/, 4> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 4> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data2_mux__DOT__i1__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 2> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__ysyx_22040931_MEM__DOT__mem_stor_data3_mux__DOT__i1__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*3:0*/ top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber2;
    CData/*3:0*/ top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber2;
    CData/*3:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber2;
    CData/*5:0*/ top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber2;
    CData/*4:0*/ top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber2;
    CData/*3:0*/ top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber2;
    CData/*0:0*/ __Vclklast__TOP__clock;
    SData/*11:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellout__opt_mux____pinNumber1;
    SData/*11:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__jump_mux____pinNumber4;
    VlWide<7>/*200:0*/ top__DOT__ysyx_22040931_ID__DOT____Vcellinp__branch_mux____pinNumber4;
    VlWide<11>/*339:0*/ top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data1____pinNumber4;
    VlWide<11>/*339:0*/ top__DOT__ysyx_22040931_ID__DOT____Vcellinp__reg_data2____pinNumber4;
    VlWide<3>/*89:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT____Vcellinp__opt_mux____pinNumber4;
    VlWide<3>/*71:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Itype__DOT____Vcellinp__Itype____pinNumber4;
    VlWide<3>/*65:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_Decoder__DOT__ysyx_22040931_Btype__DOT____Vcellinp__Jump_b____pinNumber4;
    VlWide<11>/*334:0*/ top__DOT__ysyx_22040931_ID__DOT__ysyx_22040931_IMM__DOT____Vcellinp__imm_mux____pinNumber4;
    VlWide<7>/*200:0*/ top__DOT__ysyx_22040931_EX__DOT____Vcellinp__w_data_mux____pinNumber4;
    VlWide<5>/*133:0*/ top__DOT__ysyx_22040931_EX__DOT____Vcellinp__mem_addr_mux____pinNumber4;
    VlWide<64>/*2029:0*/ top__DOT__ysyx_22040931_EX__DOT__ysyx_22040931_ALU__DOT____Vcellinp__ALU____pinNumber4;
    VlWide<15>/*468:0*/ top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_r_data_mux____pinNumber4;
    VlWide<9>/*267:0*/ top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data_mux____pinNumber4;
    VlWide<18>/*559:0*/ top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data1_mux____pinNumber4;
    VlWide<9>/*275:0*/ top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data2_mux____pinNumber4;
    VlWide<5>/*135:0*/ top__DOT__ysyx_22040931_MEM__DOT____Vcellinp__mem_stor_data3_mux____pinNumber4;
    QData/*63:0*/ __Vtask_top__DOT__mem_read__4__rdata;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
