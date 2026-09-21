// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)))))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       << 2U)) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.operands.g_collectors[0].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[0].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 1U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       << 1U)) 
                                                   | ((2U 
                                                       & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 1U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.operands.g_collectors[0].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[1].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 2U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 2U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.operands.g_collectors[0].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[2].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 3U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       >> 1U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                          >> 2U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 3U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.operands.g_collectors[0].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[3].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out 
        = (1U & ((~ (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__pipe_reg1__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                     >> 0x0000001fU)) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__pipe_ready_st1)));
}

void Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__1(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_in = ((0x00000f00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                         << 6U)) | 
                         ((0x000000f0U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                          >> 4U)) | 
                          (0x0000000fU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                          >> 0x0000000eU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_85 = ((3U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                     >> 0x0000000cU)) 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                     >> 6U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_86 = ((3U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                     >> 0x0000000cU)) 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87 = ((3U 
                                                  & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                     >> 6U)) 
                                                 == 
                                                 (3U 
                                                  & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U]));
}

void Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__2(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid_in = ((- (IData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_scoreboard_if.valid))) 
                          & (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_106) 
                              << 2U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_107) 
                                         << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_108))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & ((IData)(vlSelfRef.valid_in) 
                                            >> 2U)))) 
                          & ((IData)(1U) << (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U]))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & (IData)(vlSelfRef.valid_in)))) 
                          & ((IData)(1U) << (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                   >> 0x0000000cU)))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & ((IData)(vlSelfRef.valid_in) 
                                            >> 1U)))) 
                          & ((IData)(1U) << (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                   >> 6U)))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_out 
        = (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                    | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out 
        = ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 1U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out 
        = ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 2U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out 
        = ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 3U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out 
        = ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      << 1U)) | (2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
           & ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     << 1U)) | ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                                | (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                         >> 1U)))));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                      | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))) 
               | (2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                        >> 1U)))) & ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                     | ((2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                 >> 2U)))));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      >> 1U)) | (2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                       >> 2U)))) & 
           ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                   >> 1U)) | ((2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                     >> 2U)) | (1U 
                                                & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                   >> 3U)))));
    vlSelfRef.__VdfgRegularize_h9aa91d48_1_14 = ((2U 
                                                  & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      << 2U)) | (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14), 1U)))) 
           & ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     << 2U)) | (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_90 = ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                 & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    | ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       | ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          | (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99 = (((
                                                   (0x7ffffffeU 
                                                    & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                        << 1U) 
                                                       & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 1U))) 
                                                   | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                      & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 2U))) 
                                                  << 2U) 
                                                 | ((0x7ffffffeU 
                                                     & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                         << 1U) 
                                                        & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                    | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                       & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_100 = ((
                                                   ((0xfffffffeU 
                                                     & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                         << 1U) 
                                                        & (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                                    | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                       & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 1U))) 
                                                   << 2U) 
                                                  | ((0xfffffffeU 
                                                      & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                          << 1U) 
                                                         & (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                        & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))));
}

void Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)))))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       << 2U)) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.operands.g_collectors[1].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[0].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 1U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       << 1U)) 
                                                   | ((2U 
                                                       & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 1U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.operands.g_collectors[1].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[1].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 2U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 2U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.operands.g_collectors[1].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[2].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 3U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       >> 1U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                          >> 2U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 3U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[0].core.issue.g_slices[0].issue_slice.operands.g_collectors[1].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[3].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out 
        = (1U & ((~ (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__pipe_reg1__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                     >> 0x0000001fU)) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__pipe_ready_st1)));
}

void Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__1(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid_in = ((- (IData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_scoreboard_if.valid))) 
                          & (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_103) 
                              << 2U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_104) 
                                         << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_105))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & ((IData)(vlSelfRef.valid_in) 
                                            >> 2U)))) 
                          & ((IData)(1U) << (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U]))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & (IData)(vlSelfRef.valid_in)))) 
                          & ((IData)(1U) << (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                   >> 0x0000000cU)))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & ((IData)(vlSelfRef.valid_in) 
                                            >> 1U)))) 
                          & ((IData)(1U) << (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                   >> 6U)))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_out 
        = (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                    | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out 
        = ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 1U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out 
        = ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 2U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out 
        = ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 3U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out 
        = ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      << 1U)) | (2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
           & ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     << 1U)) | ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                                | (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                         >> 1U)))));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                      | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))) 
               | (2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                        >> 1U)))) & ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                     | ((2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                 >> 2U)))));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      >> 1U)) | (2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                       >> 2U)))) & 
           ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                   >> 1U)) | ((2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                     >> 2U)) | (1U 
                                                & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                   >> 3U)))));
    vlSelfRef.__VdfgRegularize_h9aa91d48_1_14 = ((2U 
                                                  & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      << 2U)) | (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14), 1U)))) 
           & ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     << 2U)) | (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_96 = ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                 & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                    | ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                       | ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          | (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97 = (((
                                                   (0x7ffffffeU 
                                                    & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                        << 1U) 
                                                       & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 1U))) 
                                                   | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                      & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 2U))) 
                                                  << 2U) 
                                                 | ((0x7ffffffeU 
                                                     & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                         << 1U) 
                                                        & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                    | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                       & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_98 = (((
                                                   (0xfffffffeU 
                                                    & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                        << 1U) 
                                                       & (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                                   | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                      & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                         >> 1U))) 
                                                  << 2U) 
                                                 | ((0xfffffffeU 
                                                     & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                         << 1U) 
                                                        & (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                                    | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                       & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 1U))));
}

void Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)))))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       << 2U)) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.operands.g_collectors[0].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[0].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 1U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       << 1U)) 
                                                   | ((2U 
                                                       & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 1U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.operands.g_collectors[0].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[1].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 2U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 2U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.operands.g_collectors[0].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[2].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 3U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       >> 1U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                          >> 2U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 3U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.operands.g_collectors[0].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[3].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out 
        = (1U & ((~ (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__pipe_reg1__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                     >> 0x0000001fU)) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__pipe_ready_st1)));
}

void Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__1(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_in = ((0x00000f00U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                         << 6U)) | 
                         ((0x000000f0U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                          >> 4U)) | 
                          (0x0000000fU & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                          >> 0x0000000eU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159 = ((3U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                      >> 0x0000000cU)) 
                                                  == 
                                                  (3U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                      >> 6U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = ((3U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                      >> 0x0000000cU)) 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161 = ((3U 
                                                   & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                      >> 6U)) 
                                                  == 
                                                  (3U 
                                                   & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U]));
}

void Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__2(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__2\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid_in = ((- (IData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_scoreboard_if.valid))) 
                          & (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_180) 
                              << 2U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_181) 
                                         << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_182))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & ((IData)(vlSelfRef.valid_in) 
                                            >> 2U)))) 
                          & ((IData)(1U) << (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U]))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & (IData)(vlSelfRef.valid_in)))) 
                          & ((IData)(1U) << (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                   >> 0x0000000cU)))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & ((IData)(vlSelfRef.valid_in) 
                                            >> 1U)))) 
                          & ((IData)(1U) << (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                   >> 6U)))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_out 
        = (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                    | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out 
        = ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 1U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out 
        = ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 2U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out 
        = ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 3U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out 
        = ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      << 1U)) | (2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
           & ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     << 1U)) | ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                                | (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                         >> 1U)))));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                      | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))) 
               | (2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                        >> 1U)))) & ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                     | ((2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                 >> 2U)))));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      >> 1U)) | (2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                       >> 2U)))) & 
           ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                   >> 1U)) | ((2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                     >> 2U)) | (1U 
                                                & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                   >> 3U)))));
    vlSelfRef.__VdfgRegularize_h9aa91d48_1_14 = ((2U 
                                                  & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      << 2U)) | (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14), 1U)))) 
           & ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     << 2U)) | (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164 = ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                  & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                     | ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                        | ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           | (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_173 = ((
                                                   ((0x7ffffffeU 
                                                     & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                         << 1U) 
                                                        & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                    | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                       & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 2U))) 
                                                   << 2U) 
                                                  | ((0x7ffffffeU 
                                                      & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                          << 1U) 
                                                         & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                            >> 1U))) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                        & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_174 = ((
                                                   ((0xfffffffeU 
                                                     & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                         << 1U) 
                                                        & (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                                    | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                       & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 1U))) 
                                                   << 2U) 
                                                  | ((0xfffffffeU 
                                                      & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                          << 1U) 
                                                         & (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                        & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))));
}

void Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)))))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       << 2U)) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.operands.g_collectors[1].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[0].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 1U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       << 1U)) 
                                                   | ((2U 
                                                       & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 1U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.operands.g_collectors[1].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[1].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 2U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 2U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.operands.g_collectors[1].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[2].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT_____05Fcore_reset__DOT__g_relay__DOT__reset_r)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((1U != (~ (1U 
                                                  & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                      | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                         | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                                                     >> 3U)))) 
                                       | (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_out) 
                                           & ((2U >= (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))
                                               ? ((
                                                   (4U 
                                                    & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                                                       >> 1U)) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                          >> 2U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                            >> 3U)))) 
                                                  >> (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))
                                               : (IData)(vlSelfRef.g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0))) 
                                          & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    << (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out))))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: VX_generic_arbiter.sv:99: Assertion failed in %Nrtlsim_shim.vortex.g_clusters[0].cluster.g_sockets[0].socket.g_cores[1].core.issue.g_slices[0].issue_slice.operands.g_collectors[1].opc_unit.req_xbar.g_multi_inputs.g_multiple_outputs.g_xbar_arbs[3].xbar_arb.g_input_select.g_arbiter.arbiter: %t: invalid arbiter grant!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),64,
                             VL_TIME_UNITED_Q(1),-12);
                VL_STOP_MT("/vortex/hw/rtl/libs/VX_generic_arbiter.sv", 99, "");
            }
        }
    }
    vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out 
        = (1U & ((~ (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__pipe_reg1__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                     >> 0x0000001fU)) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__pipe_ready_st1)));
}

void Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__1(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__1\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid_in = ((- (IData)((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_scoreboard_if.valid))) 
                          & (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_177) 
                              << 2U) | (((IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_178) 
                                         << 1U) | (IData)(vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.__VdfgRegularize_h6e95ff9d_0_179))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & ((IData)(vlSelfRef.valid_in) 
                                            >> 2U)))) 
                          & ((IData)(1U) << (3U & vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U]))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & (IData)(vlSelfRef.valid_in)))) 
                          & ((IData)(1U) << (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                   >> 0x0000000cU)))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out 
        = (0x0000000fU & ((- (IData)((1U & ((IData)(vlSelfRef.valid_in) 
                                            >> 1U)))) 
                          & ((IData)(1U) << (3U & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[0U] 
                                                   >> 6U)))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_out 
        = (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                 | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                    | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out 
        = ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((1U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 1U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out 
        = ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 2U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out 
        = ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_out 
        = (1U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                  | ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                     | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))) 
                 >> 3U));
    vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out 
        = ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out))
            ? 0U : ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))
                     ? 1U : ((8U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out))
                              ? 2U : 0U)));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      << 1U)) | (2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)))) 
           & ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     << 1U)) | ((2U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                                | (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                         >> 1U)))));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                      | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out))) 
               | (2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                        >> 1U)))) & ((4U & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out)) 
                                     | ((2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                               >> 1U)) 
                                        | (1U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                 >> 2U)))));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      >> 1U)) | (2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                       >> 2U)))) & 
           ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                   >> 1U)) | ((2U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                     >> 2U)) | (1U 
                                                & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                                                   >> 3U)))));
    vlSelfRef.__VdfgRegularize_h9aa91d48_1_14 = ((2U 
                                                  & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out)));
    vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot 
        = ((~ ((4U & (((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out) 
                       | (IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out)) 
                      << 2U)) | (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14), 1U)))) 
           & ((4U & ((IData)(vlSelfRef.__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out) 
                     << 2U)) | (IData)(vlSelfRef.__VdfgRegularize_h9aa91d48_1_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170 = ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                  & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                     | ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                        | ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           | (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171 = ((
                                                   ((0x7ffffffeU 
                                                     & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                         << 1U) 
                                                        & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                    | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                       & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 2U))) 
                                                   << 2U) 
                                                  | ((0x7ffffffeU 
                                                      & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                          << 1U) 
                                                         & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                            >> 1U))) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                        & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_172 = ((
                                                   ((0xfffffffeU 
                                                     & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                         << 1U) 
                                                        & (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                                    | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                       & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                          >> 1U))) 
                                                   << 2U) 
                                                  | ((0xfffffffeU 
                                                      & (((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                          << 1U) 
                                                         & (IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot))) 
                                                     | ((IData)(vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out) 
                                                        & ((IData)(vlSelfRef.__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot) 
                                                           >> 1U))));
}
