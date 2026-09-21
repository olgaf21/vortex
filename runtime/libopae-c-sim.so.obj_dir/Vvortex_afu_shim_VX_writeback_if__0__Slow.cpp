// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

VL_ATTR_COLD void Vvortex_afu_shim_VX_writeback_if___ctor_var_reset(Vvortex_afu_shim_VX_writeback_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_writeback_if___ctor_var_reset\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    VL_SCOPED_RAND_RESET_W(176, vlSelf->data, __VscopeHash, 10363016170300574568ull);
}
