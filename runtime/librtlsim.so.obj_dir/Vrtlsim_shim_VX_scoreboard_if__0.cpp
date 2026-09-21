// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if__0(Vrtlsim_shim_VX_scoreboard_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_82;
    __VdfgRegularize_h6e95ff9d_0_82 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_83;
    __VdfgRegularize_h6e95ff9d_0_83 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_84;
    __VdfgRegularize_h6e95ff9d_0_84 = 0;
    // Body
    vlSelfRef.data[3U] = ((0x00011fffU & vlSelfRef.data[3U]) 
                          | (0x0000e000U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                            >> 1U)));
    __VdfgRegularize_h6e95ff9d_0_82 = ((vlSelfRef.data[0U] 
                                        >> 0x00000018U) 
                                       & (0U != (0x0000003fU 
                                                 & (vlSelfRef.data[0U] 
                                                    >> 0x0000000cU))));
    __VdfgRegularize_h6e95ff9d_0_83 = ((vlSelfRef.data[0U] 
                                        >> 0x00000019U) 
                                       & (0U != (0x0000003fU 
                                                 & (vlSelfRef.data[0U] 
                                                    >> 6U))));
    __VdfgRegularize_h6e95ff9d_0_84 = ((vlSelfRef.data[0U] 
                                        >> 0x0000001aU) 
                                       & (0U != (0x0000003fU 
                                                 & vlSelfRef.data[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_105 = ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__opd_fetched_st1)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_82));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_108 = ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__opd_fetched_st1)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_82));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_104 = ((~ 
                                                   ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__opd_fetched_st1) 
                                                    >> 1U)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_83));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_107 = ((~ 
                                                   ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__opd_fetched_st1) 
                                                    >> 1U)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_83));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103 = ((~ 
                                                   ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__opd_fetched_st1) 
                                                    >> 2U)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_84));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_106 = ((~ 
                                                   ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__opd_fetched_st1) 
                                                    >> 2U)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_84));
}

void Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_scoreboard_if__0(Vrtlsim_shim_VX_scoreboard_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_scoreboard_if__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid = ((~ (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U] 
                           >> 0x0000000dU)) & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r));
}

void Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_scoreboard_if__0(Vrtlsim_shim_VX_scoreboard_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_scoreboard_if__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                       & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U] 
                          >> 0x0000000dU));
}

void Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if__0(Vrtlsim_shim_VX_scoreboard_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_156;
    __VdfgRegularize_h6e95ff9d_0_156 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_157;
    __VdfgRegularize_h6e95ff9d_0_157 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_158;
    __VdfgRegularize_h6e95ff9d_0_158 = 0;
    // Body
    vlSelfRef.data[3U] = ((0x00011fffU & vlSelfRef.data[3U]) 
                          | (0x0000e000U & (vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r[3U] 
                                            >> 1U)));
    __VdfgRegularize_h6e95ff9d_0_156 = ((vlSelfRef.data[0U] 
                                         >> 0x00000018U) 
                                        & (0U != (0x0000003fU 
                                                  & (vlSelfRef.data[0U] 
                                                     >> 0x0000000cU))));
    __VdfgRegularize_h6e95ff9d_0_157 = ((vlSelfRef.data[0U] 
                                         >> 0x00000019U) 
                                        & (0U != (0x0000003fU 
                                                  & (vlSelfRef.data[0U] 
                                                     >> 6U))));
    __VdfgRegularize_h6e95ff9d_0_158 = ((vlSelfRef.data[0U] 
                                         >> 0x0000001aU) 
                                        & (0U != (0x0000003fU 
                                                  & vlSelfRef.data[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_179 = ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__opd_fetched_st1)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_156));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_182 = ((~ (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__opd_fetched_st1)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_156));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_178 = ((~ 
                                                   ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__opd_fetched_st1) 
                                                    >> 1U)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_157));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_181 = ((~ 
                                                   ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__opd_fetched_st1) 
                                                    >> 1U)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_157));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_177 = ((~ 
                                                   ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_unit__DOT__opd_fetched_st1) 
                                                    >> 2U)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_158));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_180 = ((~ 
                                                   ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_unit__DOT__opd_fetched_st1) 
                                                    >> 2U)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_158));
}

void Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_scoreboard_if__0(Vrtlsim_shim_VX_scoreboard_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_scoreboard_if__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid = ((~ (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U] 
                           >> 0x0000000dU)) & (IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r));
}

void Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_scoreboard_if__0(Vrtlsim_shim_VX_scoreboard_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_scoreboard_if___nba_sequent__TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__1__KET____DOT__opc_scoreboard_if__0\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.valid = ((IData)(vlSymsp->TOP.rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__out_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r) 
                       & (vlSymsp->TOP__rtlsim_shim__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__1__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if.data[3U] 
                          >> 0x0000000dU));
}

std::string VL_TO_STRING(const Vrtlsim_shim_VX_scoreboard_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vrtlsim_shim_VX_scoreboard_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
