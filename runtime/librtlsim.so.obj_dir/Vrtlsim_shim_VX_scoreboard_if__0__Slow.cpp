// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_scoreboard_if___ctor_var_reset(Vrtlsim_shim_VX_scoreboard_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_scoreboard_if___ctor_var_reset\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    VL_SCOPED_RAND_RESET_W(113, vlSelf->data, __VscopeHash, 10363016170300574568ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_103 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_104 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_105 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_106 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_107 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_108 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_177 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_178 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_179 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_180 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_181 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_182 = 0;
}
