// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

VL_ATTR_COLD void Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___ctor_var_reset(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3___ctor_var_reset\n"); );
    Vrtlsim_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_Q(48, __VscopeHash, 3515101862192997490ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->valid_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16540271516330450727ull);
    VL_SCOPED_RAND_RESET_W(384, vlSelf->data_in, __VscopeHash, 10574596302020702150ull);
    vlSelf->ready_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5285755476734430966ull);
    vlSelf->valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8744939437868816662ull);
    vlSelf->data_out = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11675680895196038875ull);
    vlSelf->ready_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7479542285155168376ull);
    vlSelf->sel_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 268528596994675831ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17960310100026289998ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3133995668772680871ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2153030542570486589ull);
    vlSelf->__Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in = 0;
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 16541150674699337468ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 18252210876855955335ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6413402699767385710ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12099503185252223021ull);
    vlSelf->__PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12029410376629952449ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_129 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_130 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_131 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_132 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_133 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_134 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_203 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_204 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_205 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_206 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_207 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_208 = 0;
}
