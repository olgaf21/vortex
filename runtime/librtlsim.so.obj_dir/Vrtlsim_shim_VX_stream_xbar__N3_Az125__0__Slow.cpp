// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_Az125___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out 
        = (1U & ((~ (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__pipe_reg1__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                     >> 0x0000001fU)) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__pipe_ready_st1)));
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

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_Az125___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out 
        = (1U & ((~ (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__pipe_reg1__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                     >> 0x0000001fU)) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__pipe_ready_st1)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_Az125___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__req_xbar__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out 
        = (1U & ((~ (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__pipe_reg1__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                     >> 0x0000001fU)) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__pipe_ready_st1)));
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

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_Az125___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__0(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___stl_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__req_xbar__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out 
        = (1U & ((~ (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__pipe_reg1__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe[3U] 
                     >> 0x0000001fU)) | (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__pipe_ready_st1)));
}

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_xbar__N3_Az125___ctor_var_reset(Vrtlsim_shim_VX_stream_xbar__N3_Az125* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_stream_xbar__N3_Az125___ctor_var_reset\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16540271516330450727ull);
    vlSelf->data_in = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10574596302020702150ull);
    vlSelf->sel_in = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10622722232168454220ull);
    vlSelf->ready_in = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5285755476734430966ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8744939437868816662ull);
    vlSelf->data_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11675680895196038875ull);
    vlSelf->sel_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 268528596994675831ull);
    vlSelf->ready_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7479542285155168376ull);
    vlSelf->__PVT__collisions = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8160123778382492128ull);
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out = 0;
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out = 0;
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out = 0;
    vlSelf->__Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out = 0;
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out = 0;
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_out = 0;
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out = 0;
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_out = 0;
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out = 0;
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_out = 0;
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out = 0;
    vlSelf->__Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_out = 0;
    vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(4, __VscopeHash, 12672171629904526856ull);
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7325710385269373851ull);
    vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(1, __VscopeHash, 13214124716496687770ull);
    vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(4, __VscopeHash, 14170805304752697849ull);
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17834942345711634328ull);
    vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(1, __VscopeHash, 12169461530427642097ull);
    vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(4, __VscopeHash, 2395110430089523094ull);
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15420739508516969021ull);
    vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(1, __VscopeHash, 11507506537225888911ull);
    vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(4, __VscopeHash, 14791253143623327674ull);
    vlSelf->__PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8483904121051591796ull);
    vlSelf->g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(1, __VscopeHash, 17535103765720443606ull);
    vlSelf->__VdfgRegularize_h9aa91d48_1_14 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_85 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_86 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_87 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_90 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_96 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_97 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_98 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_99 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_100 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_159 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_160 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_161 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_164 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_170 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_171 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_172 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_173 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_174 = 0;
}
