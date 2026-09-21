# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vvortex_afu_shim.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vvortex_afu_shim \
  Vvortex_afu_shim___024root__0 \
  Vvortex_afu_shim___024root__1 \
  Vvortex_afu_shim___024root__2 \
  Vvortex_afu_shim___024root__3 \
  Vvortex_afu_shim___024unit__0 \
  Vvortex_afu_shim_VX_schedule_if__0 \
  Vvortex_afu_shim_VX_decode_sched_if__0 \
  Vvortex_afu_shim_VX_issue_sched_if__0 \
  Vvortex_afu_shim_VX_mem_bus_if__D4_T3__0 \
  Vvortex_afu_shim_VX_mem_bus_if__D40_T5__0 \
  Vvortex_afu_shim_VX_mem_bus_if__D10_T3__0 \
  Vvortex_afu_shim_VX_mem_bus_if__D4_T2__0 \
  Vvortex_afu_shim_VX_execute_if__Tz83__0 \
  Vvortex_afu_shim_VX_result_if__Tz84__0 \
  Vvortex_afu_shim_VX_result_if__Tz92__0 \
  Vvortex_afu_shim_VX_result_if__Tz97__0 \
  Vvortex_afu_shim_VX_result_if__Tz101__0 \
  Vvortex_afu_shim_VX_writeback_if__0 \
  Vvortex_afu_shim_VX_ibuffer_if__0 \
  Vvortex_afu_shim_VX_scoreboard_if__0 \
  Vvortex_afu_shim_VX_operands_if__0 \
  Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3__0 \
  Vvortex_afu_shim_VX_stream_arb__N4_D22_Az17_O3__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vvortex_afu_shim__ConstPool__0__Slow \
  Vvortex_afu_shim___024root__Slow \
  Vvortex_afu_shim___024root__0__Slow \
  Vvortex_afu_shim___024root__1__Slow \
  Vvortex_afu_shim___024root__2__Slow \
  Vvortex_afu_shim___024unit__Slow \
  Vvortex_afu_shim___024unit__0__Slow \
  Vvortex_afu_shim_VX_schedule_if__Slow \
  Vvortex_afu_shim_VX_schedule_if__0__Slow \
  Vvortex_afu_shim_VX_decode_sched_if__Slow \
  Vvortex_afu_shim_VX_decode_sched_if__0__Slow \
  Vvortex_afu_shim_VX_issue_sched_if__Slow \
  Vvortex_afu_shim_VX_issue_sched_if__0__Slow \
  Vvortex_afu_shim_VX_mem_bus_if__D4_T3__Slow \
  Vvortex_afu_shim_VX_mem_bus_if__D4_T3__0__Slow \
  Vvortex_afu_shim_VX_mem_bus_if__D40_T5__Slow \
  Vvortex_afu_shim_VX_mem_bus_if__D40_T5__0__Slow \
  Vvortex_afu_shim_VX_mem_bus_if__D10_T3__Slow \
  Vvortex_afu_shim_VX_mem_bus_if__D10_T3__0__Slow \
  Vvortex_afu_shim_VX_mem_bus_if__D4_T2__Slow \
  Vvortex_afu_shim_VX_mem_bus_if__D4_T2__0__Slow \
  Vvortex_afu_shim_VX_execute_if__Tz83__Slow \
  Vvortex_afu_shim_VX_execute_if__Tz83__0__Slow \
  Vvortex_afu_shim_VX_result_if__Tz84__Slow \
  Vvortex_afu_shim_VX_result_if__Tz84__0__Slow \
  Vvortex_afu_shim_VX_result_if__Tz92__Slow \
  Vvortex_afu_shim_VX_result_if__Tz92__0__Slow \
  Vvortex_afu_shim_VX_result_if__Tz97__Slow \
  Vvortex_afu_shim_VX_result_if__Tz97__0__Slow \
  Vvortex_afu_shim_VX_result_if__Tz101__Slow \
  Vvortex_afu_shim_VX_result_if__Tz101__0__Slow \
  Vvortex_afu_shim_VX_writeback_if__Slow \
  Vvortex_afu_shim_VX_writeback_if__0__Slow \
  Vvortex_afu_shim_VX_ibuffer_if__Slow \
  Vvortex_afu_shim_VX_ibuffer_if__0__Slow \
  Vvortex_afu_shim_VX_scoreboard_if__Slow \
  Vvortex_afu_shim_VX_scoreboard_if__0__Slow \
  Vvortex_afu_shim_VX_operands_if__Slow \
  Vvortex_afu_shim_VX_operands_if__0__Slow \
  Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3__Slow \
  Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3__0__Slow \
  Vvortex_afu_shim_VX_stream_arb__N4_D22_Az17_O3__Slow \
  Vvortex_afu_shim_VX_stream_arb__N4_D22_Az17_O3__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vvortex_afu_shim__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vvortex_afu_shim__Syms__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
