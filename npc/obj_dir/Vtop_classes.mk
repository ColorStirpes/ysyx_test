# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root \
	Vtop___024root__1 \
	Vtop___024root__2 \
	Vtop_booth_p \
	Vtop_booth_p__1 \
	Vtop_booth_p__2 \
	Vtop_booth_p__3 \
	Vtop_booth_p__4 \
	Vtop_booth_p__5 \
	Vtop_booth_p__6 \
	Vtop_booth_p__7 \
	Vtop_booth_p__8 \
	Vtop_booth_p__9 \
	Vtop_booth_p__10 \
	Vtop_csa \
	Vtop___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__ConstPool_0 \
	Vtop___024root__Slow \
	Vtop_booth_p__Slow \
	Vtop_csa__Slow \
	Vtop___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Dpi \
	Vtop__Trace \
	Vtop__Trace__1 \
	Vtop__Trace__2 \
	Vtop__Trace__3 \
	Vtop__Trace__4 \
	Vtop__Trace__5 \
	Vtop__Trace__6 \
	Vtop__Trace__7 \
	Vtop__Trace__8 \
	Vtop__Trace__9 \
	Vtop__Trace__10 \
	Vtop__Trace__11 \
	Vtop__Trace__12 \
	Vtop__Trace__13 \
	Vtop__Trace__14 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__Slow \
	Vtop__Trace__1__Slow \
	Vtop__Trace__2__Slow \
	Vtop__Trace__3__Slow \
	Vtop__Trace__4__Slow \
	Vtop__Trace__5__Slow \
	Vtop__Trace__6__Slow \
	Vtop__Trace__7__Slow \
	Vtop__Trace__8__Slow \
	Vtop__Trace__9__Slow \
	Vtop__Trace__10__Slow \
	Vtop__Trace__11__Slow \
	Vtop__Trace__12__Slow \
	Vtop__Trace__13__Slow \
	Vtop__Trace__14__Slow \
	Vtop__Trace__15__Slow \
	Vtop__Trace__16__Slow \
	Vtop__Trace__17__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
