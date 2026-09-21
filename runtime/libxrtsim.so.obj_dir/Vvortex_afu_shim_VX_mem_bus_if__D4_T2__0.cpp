// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET____0(Vvortex_afu_shim_VX_mem_bus_if__D4_T2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = (1U & (((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.__VdfgRegularize_h6e95ff9d_0_53) 
                                  | ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.__VdfgRegularize_h6e95ff9d_0_52) 
                                     | ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.__VdfgRegularize_h6e95ff9d_0_51) 
                                        | (IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.__VdfgRegularize_h6e95ff9d_0_50)))) 
                                 >> 1U));
}

void Vvortex_afu_shim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET____0(Vvortex_afu_shim_VX_mem_bus_if__D4_T2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_mem_bus_if__D4_T2___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.req_ready = (1U & ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.__VdfgRegularize_h6e95ff9d_0_53) 
                                 | ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.__VdfgRegularize_h6e95ff9d_0_52) 
                                    | ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.__VdfgRegularize_h6e95ff9d_0_51) 
                                       | (IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.__VdfgRegularize_h6e95ff9d_0_50)))));
}

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_mem_bus_if__D4_T2* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_mem_bus_if__D4_T2::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
