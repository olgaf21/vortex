// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__3__KET____0(Vvortex_afu_shim_VX_ibuffer_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__3__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = ((vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__3__KET____DOT__stanging_buf__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  >> 0x0000000aU) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__3__KET____DOT__operands_ready_r));
}

void Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__3__KET____1(Vvortex_afu_shim_VX_ibuffer_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__3__KET____1\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = (((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                        & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 3U)) & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__3__KET____DOT__operands_ready_r));
}

void Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__2__KET____0(Vvortex_afu_shim_VX_ibuffer_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__2__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 = ((vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__2__KET____DOT__stanging_buf__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  >> 0x0000000aU) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__2__KET____DOT__operands_ready_r));
}

void Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__2__KET____1(Vvortex_afu_shim_VX_ibuffer_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__2__KET____1\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = (((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                        & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                           >> 2U)) & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__2__KET____DOT__operands_ready_r));
}

void Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET____0(Vvortex_afu_shim_VX_ibuffer_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = ((vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__1__KET____DOT__stanging_buf__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  >> 0x0000000aU) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__operands_ready_r));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET__.__VdfgRegularize_h6e95ff9d_0_20));
}

void Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET____1(Vvortex_afu_shim_VX_ibuffer_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET____1\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24) 
                        >> 1U) & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__1__KET____DOT__operands_ready_r));
}

void Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET____0(Vvortex_afu_shim_VX_ibuffer_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET____0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = ((vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_stanging_bufs__BRA__0__KET____DOT__stanging_buf__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                                                  >> 0x0000000aU) 
                                                 & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__operands_ready_r));
}

void Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET____1(Vvortex_afu_shim_VX_ibuffer_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_ibuffer_if___nba_sequent__TOP__vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET____1\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24) 
                       & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__g_scoreboard__BRA__0__KET____DOT__operands_ready_r));
}

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_ibuffer_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vvortex_afu_shim_VX_ibuffer_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
