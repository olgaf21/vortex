// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_scoreboard_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if__0(Vvortex_afu_shim_VX_scoreboard_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_scoreboard_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data[3U] = ((0x000009ffU & vlSelfRef.data[3U]) 
                          | (0x00000600U & (vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                            >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47 = ((vlSelfRef.data[0U] 
                                                  >> 0x0000001aU) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__opd_fetched_st1) 
                                                      >> 2U)) 
                                                    & (0U 
                                                       != 
                                                       (0x0000003fU 
                                                        & vlSelfRef.data[0U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = ((vlSelfRef.data[0U] 
                                                  >> 0x00000019U) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__opd_fetched_st1) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       != 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.data[0U] 
                                                           >> 6U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49 = ((vlSelfRef.data[0U] 
                                                  >> 0x00000018U) 
                                                 & ((~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__opd_fetched_st1)) 
                                                    & (0U 
                                                       != 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.data[0U] 
                                                           >> 0x0000000cU)))));
}

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_scoreboard_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_scoreboard_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
