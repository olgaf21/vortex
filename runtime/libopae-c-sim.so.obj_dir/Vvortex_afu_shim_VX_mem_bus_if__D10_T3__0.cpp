// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__arb_core_bus_if__BRA__0__KET____0(Vvortex_afu_shim_VX_mem_bus_if__D10_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__arb_core_bus_if__BRA__0__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rsp_ready = ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__ready_out_w) 
                           & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch__DOT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r));
}

void Vvortex_afu_shim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET____0(Vvortex_afu_shim_VX_mem_bus_if__D10_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_valid = (1U & ((~ (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[4U] 
                                     >> 0x00000014U)) 
                                 & (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_shift_register__DOT__g_shift__DOT__pipe[6U] 
                                    >> 0x00000018U)));
}

void Vvortex_afu_shim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0(Vvortex_afu_shim_VX_mem_bus_if__D10_T3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_mem_bus_if__D10_T3___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_valid = ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET__.req_valid) 
                           & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__cache_init__DOT__g_core_bus_out_req__BRA__0__KET____DOT__input_enable));
}

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_mem_bus_if__D10_T3* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvortex_afu_shim_VX_mem_bus_if__D10_T3::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
