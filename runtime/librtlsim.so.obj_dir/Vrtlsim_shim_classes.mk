# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrtlsim_shim.mk for the caller.

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
  Vrtlsim_shim \
  Vrtlsim_shim___024root__0 \
  Vrtlsim_shim___024root__1 \
  Vrtlsim_shim___024root__2 \
  Vrtlsim_shim___024root__3 \
  Vrtlsim_shim___024root__4 \
  Vrtlsim_shim___024root__5 \
  Vrtlsim_shim___024root__6 \
  Vrtlsim_shim___024root__7 \
  Vrtlsim_shim___024unit__0 \
  Vrtlsim_shim_VX_schedule_if__0 \
  Vrtlsim_shim_VX_decode_sched_if__0 \
  Vrtlsim_shim_VX_lsu_adapter__pi18__0 \
  Vrtlsim_shim_VX_issue_sched_if__0 \
  Vrtlsim_shim_VX_fpu_dpi__T4_O1__0 \
  Vrtlsim_shim_VX_decode_if__0 \
  Vrtlsim_shim_VX_mem_bus_if__D4_T4__0 \
  Vrtlsim_shim_VX_mem_bus_if__D40_T5__0 \
  Vrtlsim_shim_VX_mem_bus_if__D20_T4__0 \
  Vrtlsim_shim_VX_mem_bus_if__D40_T7__0 \
  Vrtlsim_shim_VX_mem_bus_if__D4_T5__0 \
  Vrtlsim_shim_VX_mem_bus_if__D20_T5__0 \
  Vrtlsim_shim_VX_lsu_mem_if__N8_D4_T2__0 \
  Vrtlsim_shim_VX_mem_bus_if__D4_T2__0 \
  Vrtlsim_shim_VX_mem_bus_if__D40_T6__0 \
  Vrtlsim_shim_VX_result_if__Tz101__0 \
  Vrtlsim_shim_VX_result_if__Tz109__0 \
  Vrtlsim_shim_VX_result_if__Tz114__0 \
  Vrtlsim_shim_VX_result_if__Tz118__0 \
  Vrtlsim_shim_VX_writeback_if__0 \
  Vrtlsim_shim_VX_ibuffer_if__0 \
  Vrtlsim_shim_VX_scoreboard_if__0 \
  Vrtlsim_shim_VX_operands_if__0 \
  Vrtlsim_shim_VX_stream_xbar__N3_Az125__0 \
  Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3__0 \
  Vrtlsim_shim_VX_stream_arb__N8_D22_Az17_O3__0 \
  Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vrtlsim_shim_vm_classes_Slow_0 \
  Vrtlsim_shim___024root__0__Slow \
  Vrtlsim_shim___024root__1__Slow \
  Vrtlsim_shim___024root__2__Slow \
  Vrtlsim_shim___024root__3__Slow \
  Vrtlsim_shim___024root__4__Slow \
  Vrtlsim_shim___024root__5__Slow \
  Vrtlsim_shim_vm_classes_Slow_1 \
  Vrtlsim_shim_vm_classes_Slow_2 \
  Vrtlsim_shim_vm_classes_Slow_3 \
  Vrtlsim_shim_vm_classes_Slow_4 \
  Vrtlsim_shim_vm_classes_Slow_5 \
  Vrtlsim_shim_vm_classes_Slow_6 \
  Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vrtlsim_shim__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vrtlsim_shim__Syms__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
