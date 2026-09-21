// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

VL_ATTR_COLD void Vvortex_afu_shim_VX_mem_bus_if__D4_T3___eval_initial__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_icache_bus_if__BRA__0__KET__(Vvortex_afu_shim_VX_mem_bus_if__D4_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_mem_bus_if__D4_T3___eval_initial__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_icache_bus_if__BRA__0__KET__\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_data[0U] = (0x000003c0U | (7U & vlSelfRef.req_data[0U]));
    vlSelfRef.req_data[1U] = (0xfffffc00U & vlSelfRef.req_data[1U]);
    vlSelfRef.req_data[2U] = (0x000000ffU & vlSelfRef.req_data[2U]);
}

VL_ATTR_COLD void Vvortex_afu_shim_VX_mem_bus_if__D4_T3___ctor_var_reset(Vvortex_afu_shim_VX_mem_bus_if__D4_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_mem_bus_if__D4_T3___ctor_var_reset\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12465084953323796564ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->req_data, __VscopeHash, 4429487659075431607ull);
    vlSelf->rsp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11749926944769377044ull);
}
