// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_STREAM_ARB__N8_D30_AZ17_O3_H_
#define VERILATED_VRTLSIM_SHIM_VX_STREAM_ARB__N8_D30_AZ17_O3_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ reset;
    CData/*7:0*/ valid_in;
    CData/*7:0*/ ready_in;
    CData/*0:0*/ valid_out;
    CData/*0:0*/ ready_out;
    CData/*2:0*/ sel_out;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arb_valid;
    CData/*2:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arb_index;
    CData/*7:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
    CData/*0:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_129;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_130;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_131;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_132;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_133;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_134;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_203;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_204;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_205;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_206;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_207;
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_208;
    QData/*47:0*/ __Vxrand___0;
    VlWide<12>/*383:0*/ data_in;
    QData/*47:0*/ data_out;
    QData/*50:0*/ __Vcellinp__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__data_in;
    QData/*50:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
    QData/*50:0*/ __PVT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3();
    ~Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_stream_arb__N8_D30_Az17_O3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
