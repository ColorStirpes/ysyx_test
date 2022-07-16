// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/top.v:32:30
    extern void E(int a);
    // DPI import at vsrc/top.v:25:30
    extern void Inst(int instruct);
    // DPI import at vsrc/top.v:44:30
    extern void mem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/top.v:45:30
    extern void mem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc/ysyx_22040931_Regfile.v:88:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
