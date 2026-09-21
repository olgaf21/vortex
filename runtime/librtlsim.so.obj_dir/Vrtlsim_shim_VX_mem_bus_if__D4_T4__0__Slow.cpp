// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_mem_bus_if__D4_T4___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_icache_bus_if__BRA__1__KET__(Vrtlsim_shim_VX_mem_bus_if__D4_T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_mem_bus_if__D4_T4___eval_initial__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_icache_bus_if__BRA__1__KET__\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_data[0U] = (0x00000780U | (0x0000000fU 
                                             & vlSelfRef.req_data[0U]));
    vlSelfRef.req_data[1U] = (0xfffff800U & vlSelfRef.req_data[1U]);
    vlSelfRef.req_data[2U] = (0x000001ffU & vlSelfRef.req_data[2U]);
}

VL_ATTR_COLD void Vrtlsim_shim_VX_mem_bus_if__D4_T4___ctor_var_reset(Vrtlsim_shim_VX_mem_bus_if__D4_T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_mem_bus_if__D4_T4___ctor_var_reset\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(74, vlSelf->req_data, __VscopeHash, 4429487659075431607ull);
    vlSelf->req_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16539944981316001420ull);
}
