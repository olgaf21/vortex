// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_decode_sched_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode_sched_if__0(Vvortex_afu_shim_VX_decode_sched_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vvortex_afu_shim_VX_decode_sched_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode_sched_if__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid = ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__core_rsp_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                       & (IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__arb_core_bus_if__BRA__0__KET__.rsp_ready));
}

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_decode_sched_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vvortex_afu_shim_VX_decode_sched_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
