// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_mem_bus_if__D40_T5___ctor_var_reset(Vrtlsim_shim_VX_mem_bus_if__D40_T5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_mem_bus_if__D40_T5___ctor_var_reset\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(611, vlSelf->req_data, __VscopeHash, 4429487659075431607ull);
    VL_ZERO_RESET_W(1224, vlSelf->__VdfgRegularize_h6e95ff9d_0_50);
}
