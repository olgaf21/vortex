// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

extern const VlUnpacked<CData/*1:0*/, 16> Vrtlsim_shim__ConstPool__TABLE_ha0452f14_0;

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.data_in[0U] = (IData)((((QData)((IData)(
                                                      ((0x00000400U 
                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                           << 3U)) 
                                                       | (0x000003ffU 
                                                          & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                             >> 0x0000000bU))))) 
                                      << 0x00000026U) 
                                     | ((0x0000003ffffffffcULL 
                                         & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                             << 0x0000001dU) 
                                            | (0x1ffffffffffffffcULL 
                                               & ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                  >> 3U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))));
    vlSelfRef.data_in[1U] = ((0xfffe0000U & vlSelfRef.data_in[1U]) 
                             | (IData)(((((QData)((IData)(
                                                          ((0x00000400U 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 3U)) 
                                                           | (0x000003ffU 
                                                              & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000bU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                        >> 0x00000020U)));
    vlSelfRef.data_in[1U] = ((0x0001ffffU & vlSelfRef.data_in[1U]) 
                             | ((IData)((((QData)((IData)(
                                                          (0x000003ffU 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                              >> 0x0000000bU)))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                                << 0x00000011U));
    vlSelfRef.data_in[2U] = (((IData)((((QData)((IData)(
                                                        (0x000003ffU 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                            >> 0x0000000bU)))) 
                                        << 0x00000026U) 
                                       | ((0x0000003ffffffffcULL 
                                           & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                               << 0x0000001dU) 
                                              | (0x1ffffffffffffffcULL 
                                                 & ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            (3U 
                                                             & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                              >> 0x0000000fU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (0x000003ffU 
                                                                             & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000bU)))) 
                                                            << 0x00000026U) 
                                                           | ((0x0000003ffffffffcULL 
                                                               & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                   << 0x0000001dU) 
                                                                  | (0x1ffffffffffffffcULL 
                                                                     & ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                        >> 3U)))) 
                                                              | (QData)((IData)(
                                                                                (3U 
                                                                                & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000011U));
    vlSelfRef.data_in[3U] = ((0xfffffffeU & vlSelfRef.data_in[3U]) 
                             | ((IData)(((((QData)((IData)(
                                                           (0x000003ffU 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                               >> 0x0000000bU)))) 
                                           << 0x00000026U) 
                                          | ((0x0000003ffffffffcULL 
                                              & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                  << 0x0000001dU) 
                                                 | (0x1ffffffffffffffcULL 
                                                    & ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                       >> 3U)))) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                & vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                         >> 0x00000020U)) 
                                >> 0x0000000fU));
    vlSelfRef.data_in[3U] = ((1U & vlSelfRef.data_in[3U]) 
                             | ((IData)(((0x0000007ffffffff8ULL 
                                          & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                              << 0x0000001eU) 
                                             | (0x3ffffffffffffff8ULL 
                                                & ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                   >> 2U)))) 
                                         | (QData)((IData)(
                                                           ((6U 
                                                             & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                  >> 7U))))))) 
                                << 1U));
    vlSelfRef.data_in[4U] = ((0xffffff00U & vlSelfRef.data_in[4U]) 
                             | (((IData)(((0x0000007ffffffff8ULL 
                                           & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                               << 0x0000001eU) 
                                              | (0x3ffffffffffffff8ULL 
                                                 & ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                    >> 2U)))) 
                                          | (QData)((IData)(
                                                            ((6U 
                                                              & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                   >> 7U))))))) 
                                 >> 0x0000001fU) | 
                                ((IData)((((0x0000007ffffffff8ULL 
                                            & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                << 0x0000001eU) 
                                               | (0x3ffffffffffffff8ULL 
                                                  & ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                     >> 2U)))) 
                                           | (QData)((IData)(
                                                             ((6U 
                                                               & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                    >> 7U)))))) 
                                          >> 0x00000020U)) 
                                 << 1U)));
    vlSelfRef.data_in[4U] = ((0xffe000ffU & vlSelfRef.data_in[4U]) 
                             | (((0x00001800U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                 << 0x0000000bU)) 
                                 | ((0x00000400U & 
                                     (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 3U)) | (0x000003ffU 
                                                 & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                    >> 0x0000000bU)))) 
                                << 8U));
    vlSelfRef.data_in[4U] = ((0x001fffffU & vlSelfRef.data_in[4U]) 
                             | ((IData)((((QData)((IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                              >> 7U)))) 
                                          << 0x0000002eU) 
                                         | (((QData)((IData)(
                                                             (0x000003ffU 
                                                              & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000bU)))) 
                                             << 0x00000024U) 
                                            | (0x0000000fffffffffULL 
                                               & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                   << 0x0000001bU) 
                                                  | ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                     >> 5U)))))) 
                                << 0x00000015U));
    vlSelfRef.data_in[5U] = (((IData)((((QData)((IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                            >> 7U)))) 
                                        << 0x0000002eU) 
                                       | (((QData)((IData)(
                                                           (0x000003ffU 
                                                            & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                               >> 0x0000000bU)))) 
                                           << 0x00000024U) 
                                          | (0x0000000fffffffffULL 
                                             & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001bU) 
                                                | ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                   >> 5U)))))) 
                              >> 0x0000000bU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                                >> 7U)))) 
                                                            << 0x0000002eU) 
                                                           | (((QData)((IData)(
                                                                               (0x000003ffU 
                                                                                & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000bU)))) 
                                                               << 0x00000024U) 
                                                              | (0x0000000fffffffffULL 
                                                                 & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                     << 0x0000001bU) 
                                                                    | ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                       >> 5U))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000015U));
    vlSelfRef.data_in[6U] = (0x0000000fU & ((IData)(
                                                    ((((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                           >> 7U)))) 
                                                       << 0x0000002eU) 
                                                      | (((QData)((IData)(
                                                                          (0x000003ffU 
                                                                           & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                              >> 0x0000000bU)))) 
                                                          << 0x00000024U) 
                                                         | (0x0000000fffffffffULL 
                                                            & (((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                << 0x0000001bU) 
                                                               | ((QData)((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                  >> 5U))))) 
                                                     >> 0x00000020U)) 
                                            >> 0x0000000bU));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.valid_in = ((8U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                 << 3U)) | ((4U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                   << 2U)) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_53)));
    __Vtableidx1 = vlSelfRef.valid_in;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha0452f14_0
        [__Vtableidx1];
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((8U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                      << 3U)) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                                  << 2U) | (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_53), 1U))))) 
           & (IData)(vlSelfRef.valid_in));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000031U) | (0x0001ffffffffffffULL 
                               & ((0xc3U >= (0x000000ffU 
                                             & ((IData)(0x00000031U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSelfRef.data_in
                                                       [
                                                       (((IData)(0x00000030U) 
                                                         + 
                                                         (0x000000ffU 
                                                          & ((IData)(0x00000031U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000031U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSelfRef.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000000ffU 
                                                              & ((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSelfRef.data_in
                                                            [
                                                            (7U 
                                                             & (((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000031U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                    & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 1U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 1U));
    vlSelfRef.valid_in = ((8U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                 << 2U)) | ((4U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                   << 1U)) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_56)));
    __Vtableidx2 = vlSelfRef.valid_in;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha0452f14_0
        [__Vtableidx2];
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((8U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                       << 3U) | (0xfffffff8U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                << 2U)))) 
               | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                   << 2U) | (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_56), 1U))))) 
           & (IData)(vlSelfRef.valid_in));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000031U) | (0x0001ffffffffffffULL 
                               & ((0xc3U >= (0x000000ffU 
                                             & ((IData)(0x00000031U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x00000030U) 
                                                         + 
                                                         (0x000000ffU 
                                                          & ((IData)(0x00000031U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000031U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000000ffU 
                                                              & ((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (7U 
                                                             & (((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000031U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                    & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 2U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 2U));
    vlSelfRef.valid_in = ((8U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                 << 1U)) | ((4U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_55)));
    __Vtableidx3 = vlSelfRef.valid_in;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha0452f14_0
        [__Vtableidx3];
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((8U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                       << 3U) | (0xfffffff8U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                << 1U)))) 
               | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                   << 2U) | (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_55), 1U))))) 
           & (IData)(vlSelfRef.valid_in));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000031U) | (0x0001ffffffffffffULL 
                               & ((0xc3U >= (0x000000ffU 
                                             & ((IData)(0x00000031U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x00000030U) 
                                                         + 
                                                         (0x000000ffU 
                                                          & ((IData)(0x00000031U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000031U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000000ffU 
                                                              & ((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (7U 
                                                             & (((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000031U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                    & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 3U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 3U));
    vlSelfRef.valid_in = ((8U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out)) 
                          | ((4U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                    >> 1U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_54)));
    __Vtableidx4 = vlSelfRef.valid_in;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha0452f14_0
        [__Vtableidx4];
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 3U)) << 3U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                                       << 2U) | (3U 
                                                 & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_54), 1U))))) 
           & (IData)(vlSelfRef.valid_in));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000031U) | (0x0001ffffffffffffULL 
                               & ((0xc3U >= (0x000000ffU 
                                             & ((IData)(0x00000031U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x00000030U) 
                                                         + 
                                                         (0x000000ffU 
                                                          & ((IData)(0x00000031U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000031U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000000ffU 
                                                              & ((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000031U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (7U 
                                                             & (((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000031U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57 = (((
                                                   (0x3ffffffeU 
                                                    & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                        << 1U) 
                                                       & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 2U))) 
                                                   | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 3U))) 
                                                  << 2U) 
                                                 | ((0x3ffffffeU 
                                                     & (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                         << 1U) 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 2U))) 
                                                    | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                       & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 3U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58 = (((
                                                   (0x7ffffffeU 
                                                    & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                        << 1U) 
                                                       & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 1U))) 
                                                   | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 2U))) 
                                                  << 2U) 
                                                 | ((0x7ffffffeU 
                                                     & (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                         << 1U) 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                    | ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                       & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                    & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3___ctor_var_reset(Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N4_D31_Az17_O3___ctor_var_reset\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_Q(49, __VscopeHash, 3515101862192997490ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16540271516330450727ull);
    VL_SCOPED_RAND_RESET_W(196, vlSelf->data_in, __VscopeHash, 10574596302020702150ull);
    vlSelf->ready_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5285755476734430966ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->data_out = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11675680895196038875ull);
    vlSelf->ready_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7479542285155168376ull);
    vlSelf->sel_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 268528596994675831ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17960310100026289998ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3133995668772680871ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2153030542570486589ull);
    vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in = 0;
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 16541150674699337468ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 18252210876855955335ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6413402699767385710ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12099503185252223021ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12029410376629952449ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_49 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_50 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_51 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_52 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_57 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_58 = 0;
}
