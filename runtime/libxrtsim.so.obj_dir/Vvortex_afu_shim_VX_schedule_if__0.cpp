// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_schedule_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if__0(Vvortex_afu_shim_VX_schedule_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vvortex_afu_shim_VX_schedule_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data = (((QData)((IData)((1U & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))) 
                       << 0x00000024U) | (((QData)((IData)(
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                                       >> 1U))))) 
                                           << 0x00000022U) 
                                          | (0x00000003ffffffffULL 
                                             & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                >> 3U))));
}

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_schedule_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vvortex_afu_shim_VX_schedule_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
