// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_mem_bus_if__D40_T7___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__l1_mem_bus_if__BRA__0__KET____0(Vrtlsim_shim_VX_mem_bus_if__D40_T7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_mem_bus_if__D40_T7___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__l1_mem_bus_if__BRA__0__KET____0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__mem_req_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r)) 
                           & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_mem_bus_if__BRA__0__KET____DOT__g_i0__DOT__mem_arb__DOT__req_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
}

std::string VL_TO_STRING(const Vrtlsim_shim_VX_mem_bus_if__D40_T7* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_mem_bus_if__D40_T7::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
