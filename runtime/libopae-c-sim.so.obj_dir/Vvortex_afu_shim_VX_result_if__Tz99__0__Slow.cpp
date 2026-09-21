// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

VL_ATTR_COLD void Vvortex_afu_shim_VX_result_if__Tz99___eval_initial__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_result_if__BRA__0__KET__(Vvortex_afu_shim_VX_result_if__Tz99* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_result_if__Tz99___eval_initial__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_result_if__BRA__0__KET__\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data[4U] = (0x00000400U | vlSelfRef.data[4U]);
}

VL_ATTR_COLD void Vvortex_afu_shim_VX_result_if__Tz99___ctor_var_reset(Vvortex_afu_shim_VX_result_if__Tz99* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_result_if__Tz99___ctor_var_reset\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(176, vlSelf->data, __VscopeHash, 10363016170300574568ull);
}
