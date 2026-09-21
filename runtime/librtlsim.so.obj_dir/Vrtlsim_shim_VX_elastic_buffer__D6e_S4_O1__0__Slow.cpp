// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
    vlSelfRef.data_in[0U] = ((0xf0000000U & vlSelfRef.data_in[0U]) 
                             | (((((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__use_rd) 
                                     & (0U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rd_v))) 
                                    << 9U) | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__use_rs3) 
                                              << 8U)) 
                                  | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__use_rs2) 
                                      << 7U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__use_rs1) 
                                                 << 6U) 
                                                | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rd_v)))) 
                                 << 0x00000012U) | 
                                (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rs1_v) 
                                  << 0x0000000cU) | 
                                 (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rs2_v) 
                                   << 6U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__rs3_v)))));
    vlSelfRef.data_in[0U] = ((0x0fffffffU & vlSelfRef.data_in[0U]) 
                             | ((IData)((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                          << 0x00000025U) 
                                         | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args)) 
                                << 0x0000001cU));
    vlSelfRef.data_in[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                        << 0x00000025U) 
                                       | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args)) 
                              >> 4U) | (((0xfffffe00U 
                                          & (((IData)(
                                                      (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                       >> 8U)) 
                                              << 0x0000000bU) 
                                             | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type) 
                                                << 9U))) 
                                         | (IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                                      << 0x00000025U) 
                                                     | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args) 
                                                    >> 0x00000020U))) 
                                        << 0x0000001cU));
    vlSelfRef.data_in[2U] = ((((0xfffffe00U & (((IData)(
                                                        (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                         >> 8U)) 
                                                << 0x0000000bU) 
                                               | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type) 
                                                  << 9U))) 
                               | (IData)(((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                            << 0x00000025U) 
                                           | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__op_args) 
                                          >> 0x00000020U))) 
                              >> 4U) | (((0x000001ffU 
                                          & ((IData)(
                                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                      >> 8U)) 
                                             >> 0x00000015U)) 
                                         | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type) 
                                            >> 0x00000017U)) 
                                        << 0x0000001cU));
    vlSelfRef.data_in[3U] = ((0x00003fe0U & vlSelfRef.data_in[3U]) 
                             | (0x0000001fU & (((0x000001ffU 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                             >> 8U)) 
                                                    >> 0x00000015U)) 
                                                | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__ex_type) 
                                                   >> 0x00000017U)) 
                                               >> 4U)));
    vlSelfRef.data_in[3U] = ((0x0000001fU & vlSelfRef.data_in[3U]) 
                             | (0x00003fffU & (((0x00000100U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                             >> 3U)) 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata))) 
                                               << 5U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (1U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (2U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (3U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__4__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__4__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (4U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__5__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__5__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (5U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__6__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__6__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (6U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__7__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__7__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (0U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
    vlSelfRef.data_in[0U] = ((0xf0000000U & vlSelfRef.data_in[0U]) 
                             | (((((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__use_rd) 
                                     & (0U != (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__rd_v))) 
                                    << 9U) | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__use_rs3) 
                                              << 8U)) 
                                  | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__use_rs2) 
                                      << 7U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__use_rs1) 
                                                 << 6U) 
                                                | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__rd_v)))) 
                                 << 0x00000012U) | 
                                (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__rs1_v) 
                                  << 0x0000000cU) | 
                                 (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__rs2_v) 
                                   << 6U) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__rs3_v)))));
    vlSelfRef.data_in[0U] = ((0x0fffffffU & vlSelfRef.data_in[0U]) 
                             | ((IData)((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                          << 0x00000025U) 
                                         | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__op_args)) 
                                << 0x0000001cU));
    vlSelfRef.data_in[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                        << 0x00000025U) 
                                       | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__op_args)) 
                              >> 4U) | (((0xfffffe00U 
                                          & (((IData)(
                                                      (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                       >> 8U)) 
                                              << 0x0000000bU) 
                                             | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__ex_type) 
                                                << 9U))) 
                                         | (IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                                      << 0x00000025U) 
                                                     | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__op_args) 
                                                    >> 0x00000020U))) 
                                        << 0x0000001cU));
    vlSelfRef.data_in[2U] = ((((0xfffffe00U & (((IData)(
                                                        (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                         >> 8U)) 
                                                << 0x0000000bU) 
                                               | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__ex_type) 
                                                  << 9U))) 
                               | (IData)(((((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__op_type)) 
                                            << 0x00000025U) 
                                           | vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__op_args) 
                                          >> 0x00000020U))) 
                              >> 4U) | (((0x000001ffU 
                                          & ((IData)(
                                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                      >> 8U)) 
                                             >> 0x00000015U)) 
                                         | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__ex_type) 
                                            >> 0x00000017U)) 
                                        << 0x0000001cU));
    vlSelfRef.data_in[3U] = ((0x00003fe0U & vlSelfRef.data_in[3U]) 
                             | (0x0000001fU & (((0x000001ffU 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata 
                                                             >> 8U)) 
                                                    >> 0x00000015U)) 
                                                | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__decode__DOT__ex_type) 
                                                   >> 0x00000017U)) 
                                               >> 4U)));
    vlSelfRef.data_in[3U] = ((0x0000001fU & vlSelfRef.data_in[3U]) 
                             | (0x00003fffU & (((0x00000100U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
                                                             >> 3U)) 
                                                    << 8U)) 
                                                | (0x000000ffU 
                                                   & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__fetch__DOT____Vcellout__tag_store__rdata))) 
                                               << 5U)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (1U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (2U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (3U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__4__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__4__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (4U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__5__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__5__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (5U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__6__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__6__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (6U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__7__KET____DOT__instr_buf__0(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__7__KET____DOT__instr_buf__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_ebN__DOT__push = ((~ (IData)(vlSelfRef.__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r)) 
                                         & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_arb__DOT__g_rsp_select__DOT__rsp_switch__DOT__g_out_buf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r)))));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___ctor_var_reset(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                                                                                                                                                                                                                                      Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1___ctor_var_reset\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540271516330450727ull);
    vlSelf->ready_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5285755476734430966ull);
    VL_SCOPED_RAND_RESET_W(110, vlSelf->data_in, __VscopeHash, 10574596302020702150ull);
    VL_SCOPED_RAND_RESET_W(110, vlSelf->data_out, __VscopeHash, 11675680895196038875ull);
    vlSelf->ready_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7479542285155168376ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->__PVT__g_ebN__DOT__push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1646468319344385045ull);
    vlSelf->__PVT__g_ebN__DOT__pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2325092368153778865ull);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15665897845562536034ull);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12123299402544295134ull);
    VL_SCOPED_RAND_RESET_W(110, vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r, __VscopeHash, 3280839751209928474ull);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5054066486171691416ull);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16991821419677733703ull);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17618839807989069882ull);
    vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17967267965082009042ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(110, vlSelf->__PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram[__Vi0], __VscopeHash, 2460043417135543219ull);
    }
}
