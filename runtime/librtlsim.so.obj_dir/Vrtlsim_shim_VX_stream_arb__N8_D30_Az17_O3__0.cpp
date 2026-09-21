// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[0].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

extern const VlUnpacked<CData/*2:0*/, 512> Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0;
extern const VlUnpacked<CData/*7:0*/, 512> Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0;

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.data_in[0U] = (IData)((((QData)((IData)(
                                                      ((0x00000200U 
                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                           << 2U)) 
                                                       | (0x000001ffU 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                             >> 0x0000000cU))))) 
                                      << 0x00000026U) 
                                     | ((0x0000003ffffffffcULL 
                                         & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                             << 0x0000001dU) 
                                            | (0x1ffffffffffffffcULL 
                                               & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                  >> 3U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))));
    vlSelfRef.data_in[1U] = ((0xffff0000U & vlSelfRef.data_in[1U]) 
                             | (IData)(((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                        >> 0x00000020U)));
    vlSelfRef.data_in[1U] = ((0x0000ffffU & vlSelfRef.data_in[1U]) 
                             | ((IData)((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                                << 0x00000010U));
    vlSelfRef.data_in[2U] = (((IData)((((QData)((IData)(
                                                        ((0x00000200U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                             << 2U)) 
                                                         | (0x000001ffU 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                               >> 0x0000000cU))))) 
                                        << 0x00000026U) 
                                       | ((0x0000003ffffffffcULL 
                                           & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                               << 0x0000001dU) 
                                              | (0x1ffffffffffffffcULL 
                                                 & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            (3U 
                                                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                              >> 0x00000010U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((0x00000200U 
                                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                                << 2U)) 
                                                                             | (0x000001ffU 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000cU))))) 
                                                            << 0x00000026U) 
                                                           | ((0x0000003ffffffffcULL 
                                                               & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                   << 0x0000001dU) 
                                                                  | (0x1ffffffffffffffcULL 
                                                                     & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                        >> 3U)))) 
                                                              | (QData)((IData)(
                                                                                (3U 
                                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000010U));
    vlSelfRef.data_in[3U] = (IData)((((QData)((IData)(
                                                      ((0x00000200U 
                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                           << 2U)) 
                                                       | (0x000001ffU 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                             >> 0x0000000cU))))) 
                                      << 0x00000026U) 
                                     | ((0x0000003ffffffffcULL 
                                         & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                             << 0x0000001dU) 
                                            | (0x1ffffffffffffffcULL 
                                               & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                  >> 3U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))));
    vlSelfRef.data_in[4U] = ((0xffff0000U & vlSelfRef.data_in[4U]) 
                             | (IData)(((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                        >> 0x00000020U)));
    vlSelfRef.data_in[4U] = ((0x0000ffffU & vlSelfRef.data_in[4U]) 
                             | ((IData)((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                                << 0x00000010U));
    vlSelfRef.data_in[5U] = (((IData)((((QData)((IData)(
                                                        ((0x00000200U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                             << 2U)) 
                                                         | (0x000001ffU 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                               >> 0x0000000cU))))) 
                                        << 0x00000026U) 
                                       | ((0x0000003ffffffffcULL 
                                           & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                               << 0x0000001dU) 
                                              | (0x1ffffffffffffffcULL 
                                                 & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            (3U 
                                                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                              >> 0x00000010U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((0x00000200U 
                                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                                << 2U)) 
                                                                             | (0x000001ffU 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000cU))))) 
                                                            << 0x00000026U) 
                                                           | ((0x0000003ffffffffcULL 
                                                               & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                   << 0x0000001dU) 
                                                                  | (0x1ffffffffffffffcULL 
                                                                     & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                        >> 3U)))) 
                                                              | (QData)((IData)(
                                                                                (3U 
                                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000010U));
    vlSelfRef.data_in[6U] = (IData)((((QData)((IData)(
                                                      ((0x00000200U 
                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                           << 2U)) 
                                                       | (0x000001ffU 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                             >> 0x0000000cU))))) 
                                      << 0x00000026U) 
                                     | ((0x0000003ffffffffcULL 
                                         & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                             << 0x0000001dU) 
                                            | (0x1ffffffffffffffcULL 
                                               & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                  >> 3U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))));
    vlSelfRef.data_in[7U] = ((0xffff0000U & vlSelfRef.data_in[7U]) 
                             | (IData)(((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                        >> 0x00000020U)));
    vlSelfRef.data_in[7U] = ((0x0000ffffU & vlSelfRef.data_in[7U]) 
                             | ((IData)((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                                << 0x00000010U));
    vlSelfRef.data_in[8U] = (((IData)((((QData)((IData)(
                                                        ((0x00000200U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                             << 2U)) 
                                                         | (0x000001ffU 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                               >> 0x0000000cU))))) 
                                        << 0x00000026U) 
                                       | ((0x0000003ffffffffcULL 
                                           & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                               << 0x0000001dU) 
                                              | (0x1ffffffffffffffcULL 
                                                 & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            (3U 
                                                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                              >> 0x00000010U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((0x00000200U 
                                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                                << 2U)) 
                                                                             | (0x000001ffU 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000cU))))) 
                                                            << 0x00000026U) 
                                                           | ((0x0000003ffffffffcULL 
                                                               & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                   << 0x0000001dU) 
                                                                  | (0x1ffffffffffffffcULL 
                                                                     & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                        >> 3U)))) 
                                                              | (QData)((IData)(
                                                                                (3U 
                                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000010U));
    vlSelfRef.data_in[9U] = (IData)((((QData)((IData)(
                                                      ((0x00000200U 
                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                           << 2U)) 
                                                       | (0x000001ffU 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                             >> 0x0000000cU))))) 
                                      << 0x00000026U) 
                                     | ((0x0000003ffffffffcULL 
                                         & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                             << 0x0000001dU) 
                                            | (0x1ffffffffffffffcULL 
                                               & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                  >> 3U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))));
    vlSelfRef.data_in[10U] = ((0xffff0000U & vlSelfRef.data_in[10U]) 
                              | (IData)(((((QData)((IData)(
                                                           ((0x00000200U 
                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                << 2U)) 
                                                            | (0x000001ffU 
                                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                  >> 0x0000000cU))))) 
                                           << 0x00000026U) 
                                          | ((0x0000003ffffffffcULL 
                                              & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                  << 0x0000001dU) 
                                                 | (0x1ffffffffffffffcULL 
                                                    & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                       >> 3U)))) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                         >> 0x00000020U)));
    vlSelfRef.data_in[10U] = ((0x0000ffffU & vlSelfRef.data_in[10U]) 
                              | ((IData)((((QData)((IData)(
                                                           ((0x00000200U 
                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                << 2U)) 
                                                            | (0x000001ffU 
                                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                  >> 0x0000000cU))))) 
                                           << 0x00000026U) 
                                          | ((0x0000003ffffffffcULL 
                                              & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                  << 0x0000001dU) 
                                                 | (0x1ffffffffffffffcULL 
                                                    & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                       >> 3U)))) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                                 << 0x00000010U));
    vlSelfRef.data_in[11U] = (((IData)((((QData)((IData)(
                                                         ((0x00000200U 
                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                              << 2U)) 
                                                          | (0x000001ffU 
                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                >> 0x0000000cU))))) 
                                         << 0x00000026U) 
                                        | ((0x0000003ffffffffcULL 
                                            & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                << 0x0000001dU) 
                                               | (0x1ffffffffffffffcULL 
                                                  & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                     >> 3U)))) 
                                           | (QData)((IData)(
                                                             (3U 
                                                              & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                               >> 0x00000010U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((0x00000200U 
                                                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                                << 2U)) 
                                                                              | (0x000001ffU 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000cU))))) 
                                                             << 0x00000026U) 
                                                            | ((0x0000003ffffffffcULL 
                                                                & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                    << 0x0000001dU) 
                                                                   | (0x1ffffffffffffffcULL 
                                                                      & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                         >> 3U)))) 
                                                               | (QData)((IData)(
                                                                                (3U 
                                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000010U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    << 1U)) | (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        << 2U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_121))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                    | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                       | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                          | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)));
    __Vtableidx1 = (((IData)(vlSelfRef.valid_in) << 1U) 
                    | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx1];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSelfRef.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSelfRef.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSelfRef.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out)) 
                         << 1U)) | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_121), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx2 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                     << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx2];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[1].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*8:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 1U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 1U));
    vlSelfRef.valid_in = (((((2U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out)) 
                             | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                      >> 1U))) << 6U) 
                           | (((2U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out)) 
                               | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                        >> 1U))) << 4U)) 
                          | ((8U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                    << 2U)) | ((4U 
                                                & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_128))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 1U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 1U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 1U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 1U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 1U)));
    __Vtableidx3 = (((IData)(vlSelfRef.valid_in) << 1U) 
                    | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx3];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 1U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 1U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 1U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_128), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx4 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                     << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx4];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[2].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*8:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 2U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 2U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 1U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 2U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 1U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 2U))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     << 1U)) 
                                                 | ((4U 
                                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_127))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 2U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 2U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 2U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 2U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 2U)));
    __Vtableidx5 = (((IData)(vlSelfRef.valid_in) << 1U) 
                    | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx5];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 2U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 2U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 2U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0x7ffffffeU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                   >> 1U)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_127), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                     << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx6];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[3].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*8:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 3U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 3U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 2U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 3U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 2U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 3U))) 
                                      << 4U)) | ((8U 
                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        >> 1U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_126))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 3U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 3U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 3U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 3U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 3U)));
    __Vtableidx7 = (((IData)(vlSelfRef.valid_in) << 1U) 
                    | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx7];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 3U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 3U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 3U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0x3ffffffeU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                   >> 2U)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_126), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx8 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                     << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx8];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[4].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    SData/*8:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 4U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 4U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 3U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 4U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 3U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 4U))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     >> 1U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        >> 2U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_125))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 4U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 4U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 4U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 4U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 4U)));
    __Vtableidx9 = (((IData)(vlSelfRef.valid_in) << 1U) 
                    | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx9];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 4U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 4U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 4U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0x1ffffffeU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                   >> 3U)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_125), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx10 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx10];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[5].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    SData/*8:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 5U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 5U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 4U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 5U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 4U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 5U))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     >> 2U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        >> 3U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_124))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 5U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 5U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 5U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 5U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 5U)));
    __Vtableidx11 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx11];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 5U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 5U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 5U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0x0ffffffeU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                   >> 4U)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_124), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx12 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx12];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[6].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    SData/*8:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 6U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 6U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 5U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 6U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 5U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 6U))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     >> 3U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        >> 4U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_123))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 6U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 6U)));
    __Vtableidx13 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx13];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 6U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 6U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 6U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0x07fffffeU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                   >> 5U)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_123), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx14 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx14];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[7].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    SData/*8:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 7U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 7U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 6U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 7U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 6U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 7U))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     >> 4U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        >> 5U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_122))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (IData)(((((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out)) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out)) 
                     | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out)) 
                    >> 7U) | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
           | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
              >> 7U));
    __Vtableidx15 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx15];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
           | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
              >> 7U));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
           | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
              >> 7U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
           | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
              >> 7U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                    | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                       >> 7U)) << 3U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                                         << 2U)) | 
                 (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                   << 1U) | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2))) 
                << 4U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                           << 3U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                      << 2U) | (3U 
                                                & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_122), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx16 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx16];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_129 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 6U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 7U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 6U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 7U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 6U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 7U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_130 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 5U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 6U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 6U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 6U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 6U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_131 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 5U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 5U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 5U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 4U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 5U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_132 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 3U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 4U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 3U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 4U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 3U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 4U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 3U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 4U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_133 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 3U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 3U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 3U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 2U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 3U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_134 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 2U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 2U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 2U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 2U)))));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[0].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    SData/*8:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelfRef.data_in[0U] = (IData)((((QData)((IData)(
                                                      ((0x00000200U 
                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                           << 2U)) 
                                                       | (0x000001ffU 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                             >> 0x0000000cU))))) 
                                      << 0x00000026U) 
                                     | ((0x0000003ffffffffcULL 
                                         & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                             << 0x0000001dU) 
                                            | (0x1ffffffffffffffcULL 
                                               & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                  >> 3U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))));
    vlSelfRef.data_in[1U] = ((0xffff0000U & vlSelfRef.data_in[1U]) 
                             | (IData)(((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                        >> 0x00000020U)));
    vlSelfRef.data_in[1U] = ((0x0000ffffU & vlSelfRef.data_in[1U]) 
                             | ((IData)((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                                << 0x00000010U));
    vlSelfRef.data_in[2U] = (((IData)((((QData)((IData)(
                                                        ((0x00000200U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                             << 2U)) 
                                                         | (0x000001ffU 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                               >> 0x0000000cU))))) 
                                        << 0x00000026U) 
                                       | ((0x0000003ffffffffcULL 
                                           & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                               << 0x0000001dU) 
                                              | (0x1ffffffffffffffcULL 
                                                 & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            (3U 
                                                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                              >> 0x00000010U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((0x00000200U 
                                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                                << 2U)) 
                                                                             | (0x000001ffU 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000cU))))) 
                                                            << 0x00000026U) 
                                                           | ((0x0000003ffffffffcULL 
                                                               & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                   << 0x0000001dU) 
                                                                  | (0x1ffffffffffffffcULL 
                                                                     & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                        >> 3U)))) 
                                                              | (QData)((IData)(
                                                                                (3U 
                                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000010U));
    vlSelfRef.data_in[3U] = (IData)((((QData)((IData)(
                                                      ((0x00000200U 
                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                           << 2U)) 
                                                       | (0x000001ffU 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                             >> 0x0000000cU))))) 
                                      << 0x00000026U) 
                                     | ((0x0000003ffffffffcULL 
                                         & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                             << 0x0000001dU) 
                                            | (0x1ffffffffffffffcULL 
                                               & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                  >> 3U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))));
    vlSelfRef.data_in[4U] = ((0xffff0000U & vlSelfRef.data_in[4U]) 
                             | (IData)(((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                        >> 0x00000020U)));
    vlSelfRef.data_in[4U] = ((0x0000ffffU & vlSelfRef.data_in[4U]) 
                             | ((IData)((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                                << 0x00000010U));
    vlSelfRef.data_in[5U] = (((IData)((((QData)((IData)(
                                                        ((0x00000200U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                             << 2U)) 
                                                         | (0x000001ffU 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                               >> 0x0000000cU))))) 
                                        << 0x00000026U) 
                                       | ((0x0000003ffffffffcULL 
                                           & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                               << 0x0000001dU) 
                                              | (0x1ffffffffffffffcULL 
                                                 & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            (3U 
                                                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                              >> 0x00000010U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((0x00000200U 
                                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                                << 2U)) 
                                                                             | (0x000001ffU 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000cU))))) 
                                                            << 0x00000026U) 
                                                           | ((0x0000003ffffffffcULL 
                                                               & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                   << 0x0000001dU) 
                                                                  | (0x1ffffffffffffffcULL 
                                                                     & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                        >> 3U)))) 
                                                              | (QData)((IData)(
                                                                                (3U 
                                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000010U));
    vlSelfRef.data_in[6U] = (IData)((((QData)((IData)(
                                                      ((0x00000200U 
                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                           << 2U)) 
                                                       | (0x000001ffU 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                             >> 0x0000000cU))))) 
                                      << 0x00000026U) 
                                     | ((0x0000003ffffffffcULL 
                                         & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                             << 0x0000001dU) 
                                            | (0x1ffffffffffffffcULL 
                                               & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                  >> 3U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))));
    vlSelfRef.data_in[7U] = ((0xffff0000U & vlSelfRef.data_in[7U]) 
                             | (IData)(((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                        >> 0x00000020U)));
    vlSelfRef.data_in[7U] = ((0x0000ffffU & vlSelfRef.data_in[7U]) 
                             | ((IData)((((QData)((IData)(
                                                          ((0x00000200U 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                               << 2U)) 
                                                           | (0x000001ffU 
                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                 >> 0x0000000cU))))) 
                                          << 0x00000026U) 
                                         | ((0x0000003ffffffffcULL 
                                             & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                 << 0x0000001dU) 
                                                | (0x1ffffffffffffffcULL 
                                                   & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                      >> 3U)))) 
                                            | (QData)((IData)(
                                                              (3U 
                                                               & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                                << 0x00000010U));
    vlSelfRef.data_in[8U] = (((IData)((((QData)((IData)(
                                                        ((0x00000200U 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                             << 2U)) 
                                                         | (0x000001ffU 
                                                            & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                               >> 0x0000000cU))))) 
                                        << 0x00000026U) 
                                       | ((0x0000003ffffffffcULL 
                                           & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                               << 0x0000001dU) 
                                              | (0x1ffffffffffffffcULL 
                                                 & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            (3U 
                                                             & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                              >> 0x00000010U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((0x00000200U 
                                                                              & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                                << 2U)) 
                                                                             | (0x000001ffU 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000cU))))) 
                                                            << 0x00000026U) 
                                                           | ((0x0000003ffffffffcULL 
                                                               & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                   << 0x0000001dU) 
                                                                  | (0x1ffffffffffffffcULL 
                                                                     & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                        >> 3U)))) 
                                                              | (QData)((IData)(
                                                                                (3U 
                                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                                          >> 0x00000020U)) 
                                                 << 0x00000010U));
    vlSelfRef.data_in[9U] = (IData)((((QData)((IData)(
                                                      ((0x00000200U 
                                                        & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                           << 2U)) 
                                                       | (0x000001ffU 
                                                          & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                             >> 0x0000000cU))))) 
                                      << 0x00000026U) 
                                     | ((0x0000003ffffffffcULL 
                                         & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                             << 0x0000001dU) 
                                            | (0x1ffffffffffffffcULL 
                                               & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                  >> 3U)))) 
                                        | (QData)((IData)(
                                                          (3U 
                                                           & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))));
    vlSelfRef.data_in[10U] = ((0xffff0000U & vlSelfRef.data_in[10U]) 
                              | (IData)(((((QData)((IData)(
                                                           ((0x00000200U 
                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                << 2U)) 
                                                            | (0x000001ffU 
                                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                  >> 0x0000000cU))))) 
                                           << 0x00000026U) 
                                          | ((0x0000003ffffffffcULL 
                                              & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                  << 0x0000001dU) 
                                                 | (0x1ffffffffffffffcULL 
                                                    & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                       >> 3U)))) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                         >> 0x00000020U)));
    vlSelfRef.data_in[10U] = ((0x0000ffffU & vlSelfRef.data_in[10U]) 
                              | ((IData)((((QData)((IData)(
                                                           ((0x00000200U 
                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                << 2U)) 
                                                            | (0x000001ffU 
                                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                  >> 0x0000000cU))))) 
                                           << 0x00000026U) 
                                          | ((0x0000003ffffffffcULL 
                                              & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                  << 0x0000001dU) 
                                                 | (0x1ffffffffffffffcULL 
                                                    & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                       >> 3U)))) 
                                             | (QData)((IData)(
                                                               (3U 
                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                                 << 0x00000010U));
    vlSelfRef.data_in[11U] = (((IData)((((QData)((IData)(
                                                         ((0x00000200U 
                                                           & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                              << 2U)) 
                                                          | (0x000001ffU 
                                                             & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                >> 0x0000000cU))))) 
                                         << 0x00000026U) 
                                        | ((0x0000003ffffffffcULL 
                                            & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                << 0x0000001dU) 
                                               | (0x1ffffffffffffffcULL 
                                                  & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                     >> 3U)))) 
                                           | (QData)((IData)(
                                                             (3U 
                                                              & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])))))) 
                               >> 0x00000010U) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((0x00000200U 
                                                                               & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[2U] 
                                                                                << 2U)) 
                                                                              | (0x000001ffU 
                                                                                & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U] 
                                                                                >> 0x0000000cU))))) 
                                                             << 0x00000026U) 
                                                            | ((0x0000003ffffffffcULL 
                                                                & (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[1U])) 
                                                                    << 0x0000001dU) 
                                                                   | (0x1ffffffffffffffcULL 
                                                                      & ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U])) 
                                                                         >> 3U)))) 
                                                               | (QData)((IData)(
                                                                                (3U 
                                                                                & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapter.__PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[0U]))))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000010U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    << 1U)) | (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        << 2U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_195))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                    | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                       | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                          | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)));
    __Vtableidx17 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx17];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSelfRef.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSelfRef.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSelfRef.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out)) 
                         << 1U)) | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_195), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx18 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx18];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[1].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    SData/*8:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 1U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 1U));
    vlSelfRef.valid_in = (((((2U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out)) 
                             | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                      >> 1U))) << 6U) 
                           | (((2U & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out)) 
                               | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                        >> 1U))) << 4U)) 
                          | ((8U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                    << 2U)) | ((4U 
                                                & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_202))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 1U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 1U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 1U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 1U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 1U)));
    __Vtableidx19 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx19];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 1U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 1U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 1U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_202), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx20 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx20];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[2].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    SData/*8:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 2U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 2U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 1U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 2U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 1U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 2U))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     << 1U)) 
                                                 | ((4U 
                                                     & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_201))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 2U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 2U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 2U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 2U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 2U)));
    __Vtableidx21 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx21];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 2U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 2U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 2U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0x7ffffffeU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                   >> 1U)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_201), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx22 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx22];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[3].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    SData/*8:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 3U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 3U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 2U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 3U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 2U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 3U))) 
                                      << 4U)) | ((8U 
                                                  & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        >> 1U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_200))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 3U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 3U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 3U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 3U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 3U)));
    __Vtableidx23 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx23];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 3U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 3U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 3U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0x3ffffffeU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                   >> 2U)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_200), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx24 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx24];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[4].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    SData/*8:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 4U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 4U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 3U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 4U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 3U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 4U))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     >> 1U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        >> 2U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_199))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 4U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 4U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 4U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 4U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 4U)));
    __Vtableidx25 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx25];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 4U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 4U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 4U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0x1ffffffeU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                   >> 3U)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_199), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx26 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx26];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[5].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    SData/*8:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 5U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 5U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 4U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 5U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 4U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 5U))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     >> 2U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        >> 3U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_198))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 5U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 5U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 5U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 5U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 5U)));
    __Vtableidx27 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx27];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 5U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 5U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 5U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0x0ffffffeU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                   >> 4U)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_198), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx28 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx28];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[6].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    SData/*8:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 6U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 6U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 5U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 6U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 5U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 6U))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     >> 3U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        >> 4U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_197))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                  >> 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                             >> 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                        >> 6U) | (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                   >> 6U) 
                                                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0))))));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                    >> 6U)));
    __Vtableidx29 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx29];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                    >> 6U)));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                    >> 6U)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = (1U & ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                 | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                    >> 6U)));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((2U & (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                          << 1U) | (0x07fffffeU & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                   >> 5U)))) 
                  | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4)) 
                 << 6U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                            << 5U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
                                      << 4U))) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                                                   << 3U) 
                                                  | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                                      << 2U) 
                                                     | (3U 
                                                        & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_197), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx30 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx30];
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb__ready_out)));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__0(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (0U 
                                                  != (IData)(vlSelfRef.valid_in)))) 
                                       | (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid) 
                                           & ((IData)(vlSelfRef.valid_in) 
                                              >> (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))) 
                                          & ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.mem_unit.local_mem.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[7].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if (vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r 
            = ((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r)
                ? vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in
                : vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r);
    }
    if (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r) 
         & (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid))) {
        vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r 
            = vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    }
    if (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r) {
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
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__1(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 = 0;
    CData/*0:0*/ g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 = 0;
    SData/*8:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    SData/*8:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                        | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
                 >> 7U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0 
        = (1U & (((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                  | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                 >> 7U));
    vlSelfRef.valid_in = (((((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                                    >> 6U)) | (1U & 
                                               ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                                                >> 7U))) 
                            << 6U) | (((2U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
                                              >> 6U)) 
                                       | (1U & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
                                                >> 7U))) 
                                      << 4U)) | ((8U 
                                                  & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
                                                     >> 4U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                        >> 5U)) 
                                                    | (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_196))));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid 
        = (IData)(((((((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__7__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out)) 
                      | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out)) 
                     | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out)) 
                    >> 7U) | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1 
        = ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
           | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
              >> 7U));
    __Vtableidx31 = (((IData)(vlSelfRef.valid_in) << 1U) 
                     | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index 
        = Vrtlsim_shim__ConstPool__TABLE_ha36d1f52_0
        [__Vtableidx31];
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2 
        = ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
           | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__3__KET____DOT__sel_in_demux__data_out) 
              >> 7U));
    vlSelfRef.__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in 
        = (((QData)((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
            << 0x00000030U) | (0x0000ffffffffffffULL 
                               & ((0x017fU >= (0x000001ffU 
                                               & ((IData)(0x00000030U) 
                                                  * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                   ? (((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                       [
                                                       (((IData)(0x0000002fU) 
                                                         + 
                                                         (0x000001ffU 
                                                          & ((IData)(0x00000030U) 
                                                             * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x0000001fU 
                                                   & ((IData)(0x00000030U) 
                                                      * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                            ? 0x00000020U
                                            : ((IData)(0x00000040U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                      | (((0U == (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))
                                           ? 0ULL : 
                                          ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                           [
                                                           (((IData)(0x0000001fU) 
                                                             + 
                                                             (0x000001ffU 
                                                              & ((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & ((IData)(0x00000030U) 
                                                     * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)))))) 
                                         | ((QData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.data_in
                                                            [
                                                            (0x0000000fU 
                                                             & (((IData)(0x00000030U) 
                                                                 * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index)) 
                                                                >> 5U))])) 
                                            >> (0x0000001fU 
                                                & ((IData)(0x00000030U) 
                                                   * (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index))))))
                                   : vlSelfRef.__Vxrand___0)));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3 
        = ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2) 
           | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__4__KET____DOT__sel_in_demux__data_out) 
              >> 7U));
    g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4 
        = ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
           | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__5__KET____DOT__sel_in_demux__data_out) 
              >> 7U));
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ (((((((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                    | ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__6__KET____DOT__sel_in_demux__data_out) 
                       >> 7U)) << 3U) | ((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4) 
                                         << 2U)) | 
                 (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3) 
                   << 1U) | (IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2))) 
                << 4U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1) 
                           << 3U) | (((IData)(g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0) 
                                      << 2U) | (3U 
                                                & VL_SHIFTL_III(2,2,32, (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_196), 1U)))))) 
           & (IData)(vlSelfRef.valid_in));
    __Vtableidx32 = (((IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                      << 1U) | (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r));
    vlSelfRef.ready_in = Vrtlsim_shim__ConstPool__TABLE_he50f83ef_0
        [__Vtableidx32];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_203 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 6U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 7U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 6U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 7U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 6U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 7U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_204 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 5U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 6U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 6U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 5U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 6U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 6U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_205 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 4U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 5U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 5U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 4U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 5U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 4U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 5U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_206 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 3U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 4U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 3U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 4U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 3U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 4U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 3U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 4U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_207 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 3U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 3U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 2U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 3U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 2U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 3U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_208 = ((
                                                   (((2U 
                                                      & ((IData)(vlSelfRef.ready_in) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__6__KET____DOT__xbar_arb.ready_in) 
                                                           >> 2U))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__5__KET____DOT__xbar_arb.ready_in) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__4__KET____DOT__xbar_arb.ready_in) 
                                                             >> 2U))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb.ready_in) 
                                                           >> 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb.ready_in) 
                                                             >> 2U))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb.ready_in) 
                                                            >> 1U)) 
                                                        | (1U 
                                                           & ((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb.ready_in) 
                                                              >> 2U)))));
}

void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__2(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r)) 
                 | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT____Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__7__KET____DOT__xbar_arb__ready_out)));
}
