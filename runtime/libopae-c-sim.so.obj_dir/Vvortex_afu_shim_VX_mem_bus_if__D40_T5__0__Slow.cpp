// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

VL_ATTR_COLD void Vvortex_afu_shim_VX_mem_bus_if__D40_T5___ctor_var_reset(Vvortex_afu_shim_VX_mem_bus_if__D40_T5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_mem_bus_if__D40_T5___ctor_var_reset\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(611, vlSelf->req_data, __VscopeHash, 4429487659075431607ull);
}
