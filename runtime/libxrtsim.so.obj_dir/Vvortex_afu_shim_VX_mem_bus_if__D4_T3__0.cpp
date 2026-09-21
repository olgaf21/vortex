// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__arb_core_bus_if__BRA__0__KET____0(Vvortex_afu_shim_VX_mem_bus_if__D4_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__arb_core_bus_if__BRA__0__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rsp_ready = (1U & (((((2U & ((~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                           << 1U)) 
                                    | (1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)))) 
                                   << 2U) | ((2U & 
                                              ((~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__DOT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r))))) 
                                 >> (3U & (IData)((vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__core_rsp_queue__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                   >> 0x00000021U)))));
}

void Vvortex_afu_shim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0(Vvortex_afu_shim_VX_mem_bus_if__D4_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_mem_bus_if__D4_T3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_valid = ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT__req_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                           & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__g_core_bus_out_req__BRA__0__KET____DOT__input_enable));
}

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_mem_bus_if__D4_T3* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_mem_bus_if__D4_T3::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
