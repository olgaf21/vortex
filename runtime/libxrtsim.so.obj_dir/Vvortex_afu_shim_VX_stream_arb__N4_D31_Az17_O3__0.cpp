// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

extern const VlUnpacked<CData/*1:0*/, 16> Vvortex_afu_shim__ConstPool__TABLE_ha0452f14_0;

void Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0(Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT_____05Fdcache_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x0000000fU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nvortex_afu_shim.afu_wrap.vortex_axi.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[0].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    vlSelfRef.data_in[0U] = (IData)((((QData)((IData)(
                                                      ((0x00000400U 
                                                        & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                           << 3U)) 
                                                       | (0x000003ffU 
                                                          & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                             >> 0x0000000bU))))) 
                                      << 0x00000026U) 
                                     | ((0x0000003ffffffffcULL 
                                         & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                             << 0x0000001dU) 
                                            | (0x1ffffffffffffffcULL 
                                               & ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                  >> 3U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))));
    vlSelfRef.data_in[1U] = ((0xfffe0000U & vlSelfRef.data_in[1U]) 
                             | (IData)(((((QData)((IData)(
                                                          ((0x00000400U 
                                                            & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 3U)) 
                                                           | (0x000003ffU 
                                                              & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000bU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                        >> 0x00000020U)));
    vlSelfRef.data_in[1U] = ((0x0001ffffU & vlSelfRef.data_in[1U]) 
                             | ((IData)((((QData)((IData)(
                                                          (0x000003ffU 
                                                           & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                              >> 0x0000000bU)))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                                << 0x00000011U));
    vlSelfRef.data_in[2U] = (((IData)((((QData)((IData)(
                                                        (0x000003ffU 
                                                         & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                            >> 0x0000000bU)))) 
                                        << 0x00000026U) 
                                       | ((0x0000003ffffffffcULL 
                                           & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                               << 0x0000001dU) 
                                              | (0x1ffffffffffffffcULL 
                                                 & ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            (3U 
                                                             & vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                              >> 0x0000000fU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (0x000003ffU 
                                                                             & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000bU)))) 
                                                            << 0x00000026U) 
                                                           | ((0x0000003ffffffffcULL 
                                                               & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                   << 0x0000001dU) 
                                                                  | (0x1ffffffffffffffcULL 
                                                                     & ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                        >> 3U)))) 
                                                              | (QData)((IData)(
                                                                                (3U 
                                                                                & vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000011U));
    vlSelfRef.data_in[3U] = ((0xfffffffeU & vlSelfRef.data_in[3U]) 
                             | ((IData)(((((QData)((IData)(
                                                           (0x000003ffU 
                                                            & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                               >> 0x0000000bU)))) 
                                           << 0x00000026U) 
                                          | ((0x0000003ffffffffcULL 
                                              & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                  << 0x0000001dU) 
                                                 | (0x1ffffffffffffffcULL 
                                                    & ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                       >> 3U)))) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                & vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                         >> 0x00000020U)) 
                                >> 0x0000000fU));
    vlSelfRef.data_in[3U] = ((1U & vlSelfRef.data_in[3U]) 
                             | ((IData)(((0x0000007ffffffff8ULL 
                                          & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                              << 0x0000001eU) 
                                             | (0x3ffffffffffffff8ULL 
                                                & ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                   >> 2U)))) 
                                         | (QData)((IData)(
                                                           ((6U 
                                                             & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                  >> 7U))))))) 
                                << 1U));
    vlSelfRef.data_in[4U] = ((0xffffff00U & vlSelfRef.data_in[4U]) 
                             | (((IData)(((0x0000007ffffffff8ULL 
                                           & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                               << 0x0000001eU) 
                                              | (0x3ffffffffffffff8ULL 
                                                 & ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                    >> 2U)))) 
                                          | (QData)((IData)(
                                                            ((6U 
                                                              & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                   >> 7U))))))) 
                                 >> 0x0000001fU) | 
                                ((IData)((((0x0000007ffffffff8ULL 
                                            & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                << 0x0000001eU) 
                                               | (0x3ffffffffffffff8ULL 
                                                  & ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                     >> 2U)))) 
                                           | (QData)((IData)(
                                                             ((6U 
                                                               & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                    >> 7U)))))) 
                                          >> 0x00000020U)) 
                                 << 1U)));
    vlSelfRef.data_in[4U] = ((0xffe000ffU & vlSelfRef.data_in[4U]) 
                             | (((0x00001800U & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U] 
                                                 << 0x0000000bU)) 
                                 | ((0x00000400U & 
                                     (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                      << 3U)) | (0x000003ffU 
                                                 & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                    >> 0x0000000bU)))) 
                                << 8U));
    vlSelfRef.data_in[4U] = ((0x001fffffU & vlSelfRef.data_in[4U]) 
                             | ((IData)((((QData)((IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                              >> 7U)))) 
                                          << 0x0000002eU) 
                                         | (((QData)((IData)(
                                                             (0x000003ffU 
                                                              & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000bU)))) 
                                             << 0x00000024U) 
                                            | (0x0000000fffffffffULL 
                                               & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                   << 0x0000001bU) 
                                                  | ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                     >> 5U)))))) 
                                << 0x00000015U));
    vlSelfRef.data_in[5U] = (((IData)((((QData)((IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                            >> 7U)))) 
                                        << 0x0000002eU) 
                                       | (((QData)((IData)(
                                                           (0x000003ffU 
                                                            & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                               >> 0x0000000bU)))) 
                                           << 0x00000024U) 
                                          | (0x0000000fffffffffULL 
                                             & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001bU) 
                                                | ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                   >> 5U)))))) 
                              >> 0x0000000bU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                                >> 7U)))) 
                                                            << 0x0000002eU) 
                                                           | (((QData)((IData)(
                                                                               (0x000003ffU 
                                                                                & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000bU)))) 
                                                               << 0x00000024U) 
                                                              | (0x0000000fffffffffULL 
                                                                 & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                     << 0x0000001bU) 
                                                                    | ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                       >> 5U))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000015U));
    vlSelfRef.data_in[6U] = (0x0000000fU & ((IData)(
                                                    ((((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                           >> 7U)))) 
                                                       << 0x0000002eU) 
                                                      | (((QData)((IData)(
                                                                          (0x000003ffU 
                                                                           & (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                              >> 0x0000000bU)))) 
                                                          << 0x00000024U) 
                                                         | (0x0000000fffffffffULL 
                                                            & (((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                << 0x0000001bU) 
                                                               | ((QData)((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter__DOT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                  >> 5U))))) 
                                                     >> 0x00000020U)) 
                                            >> 0x0000000bU));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 
        = (1U & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.valid_in = ((8U & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                 << 3U)) | ((4U & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                   << 2U)) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_54)));
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    __Vtableidx1 = vlSelfRef.valid_in;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vvortex_afu_shim__ConstPool__TABLE_ha0452f14_0
        [__Vtableidx1];
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((8U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                       | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                      << 3U)) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                                  << 2U) | (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_54), 1U))))) 
           & (IData)(vlSelfRef.valid_in));
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT_____05Fdcache_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                         | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
             | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
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
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                 | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                    & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)));
}

void Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__1(Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__1\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out)));
}

void Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__0(Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT_____05Fdcache_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x0000000fU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nvortex_afu_shim.afu_wrap.vortex_axi.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[1].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 
        = (1U & (((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 1U));
    vlSelfRef.valid_in = ((8U & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                 << 2U)) | ((4U & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                   << 1U)) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57)));
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    __Vtableidx2 = vlSelfRef.valid_in;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vvortex_afu_shim__ConstPool__TABLE_ha0452f14_0
        [__Vtableidx2];
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((8U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                       << 3U) | (0xfffffff8U & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                << 2U)))) 
               | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                   << 2U) | (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57), 1U))))) 
           & (IData)(vlSelfRef.valid_in));
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT_____05Fdcache_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                         | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
             | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000031U) | (0x0001ffffffffffffULL 
                               & ((0xc3U >= (0x000000ffU 
                                             & ((IData)(0x00000031U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
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
                                          ((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
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
                                         | ((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (7U 
                                                             & (((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000031U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                    & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)));
}

void Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__1(Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__1\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__ready_out)));
}

void Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__0(Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT_____05Fdcache_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x0000000fU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nvortex_afu_shim.afu_wrap.vortex_axi.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[2].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 
        = (1U & (((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 2U));
    vlSelfRef.valid_in = ((8U & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                 << 1U)) | ((4U & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                            | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_56)));
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    __Vtableidx3 = vlSelfRef.valid_in;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vvortex_afu_shim__ConstPool__TABLE_ha0452f14_0
        [__Vtableidx3];
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((8U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                       << 3U) | (0xfffffff8U & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                << 1U)))) 
               | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                   << 2U) | (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_56), 1U))))) 
           & (IData)(vlSelfRef.valid_in));
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT_____05Fdcache_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                         | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
             | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000031U) | (0x0001ffffffffffffULL 
                               & ((0xc3U >= (0x000000ffU 
                                             & ((IData)(0x00000031U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
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
                                          ((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
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
                                         | ((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (7U 
                                                             & (((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000031U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_52 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                    & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)));
}

void Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__1(Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__1\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__ready_out)));
}

void Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__0(Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__0\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT_____05Fdcache_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x0000000fU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nvortex_afu_shim.afu_wrap.vortex_axi.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[3].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0 
        = (1U & (((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 3U));
    vlSelfRef.valid_in = ((8U & (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out)) 
                          | ((4U & ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                    >> 1U)) | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_55)));
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    __Vtableidx4 = vlSelfRef.valid_in;
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vvortex_afu_shim__ConstPool__TABLE_ha0452f14_0
        [__Vtableidx4];
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                 | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 3U)) << 3U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hd958704a_0_0) 
                                       << 2U) | (3U 
                                                 & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_55), 1U))))) 
           & (IData)(vlSelfRef.valid_in));
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT_____05Fdcache_reset__DOT__g_relay__DOT__reset_r) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = 0U;
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = 1U;
    } else {
        if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r 
                = (1U & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                         | (~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))));
        }
        if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
             | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out))) {
            vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r 
                = vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        }
    }
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000031U) | (0x0001ffffffffffffULL 
                               & ((0xc3U >= (0x000000ffU 
                                             & ((IData)(0x00000031U) 
                                                * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
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
                                          ((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
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
                                         | ((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (7U 
                                                             & (((IData)(0x00000031U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000031U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58 = (((
                                                   (0x3ffffffeU 
                                                    & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                        << 1U) 
                                                       & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 2U))) 
                                                   | ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 3U))) 
                                                  << 2U) 
                                                 | ((0x3ffffffeU 
                                                     & (((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                         << 1U) 
                                                        & ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 2U))) 
                                                    | ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                       & ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 3U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59 = (((
                                                   (0x7ffffffeU 
                                                    & (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                        << 1U) 
                                                       & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 1U))) 
                                                   | ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                      & ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 2U))) 
                                                  << 2U) 
                                                 | ((0x7ffffffeU 
                                                     & (((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                         << 1U) 
                                                        & ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                    | ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
                                                       & ((IData)(vlSymsp->TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = (3U 
                                                 & ((- (IData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r))) 
                                                    & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)));
}

void Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__1(Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3___nba_sequent__TOP__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__1\n"); );
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__ready_out)));
}
