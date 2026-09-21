// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_decode_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__slice_decode_if__0(Vrtlsim_shim_VX_decode_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_decode_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__slice_decode_if__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = (1U & ((((((2U & ((~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__7__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__6__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)))) 
                                << 6U) | (((2U & ((~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__5__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__4__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)))) 
                                          << 4U)) | 
                              ((((2U & ((~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)))) 
                                << 2U) | ((2U & ((~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)))))) 
                             >> (7U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))));
}

void Vrtlsim_shim_VX_decode_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__slice_decode_if__0(Vrtlsim_shim_VX_decode_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_decode_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__slice_decode_if__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready = (1U & ((((((2U & ((~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__7__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__6__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)))) 
                                << 6U) | (((2U & ((~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__5__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__4__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)))) 
                                          << 4U)) | 
                              ((((2U & ((~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                        << 1U)) | (1U 
                                                   & (~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)))) 
                                << 2U) | ((2U & ((~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                                 << 1U)) 
                                          | (1U & (~ (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)))))) 
                             >> (7U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r))));
}

std::string VL_TO_STRING(const Vrtlsim_shim_VX_decode_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vrtlsim_shim_VX_decode_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
