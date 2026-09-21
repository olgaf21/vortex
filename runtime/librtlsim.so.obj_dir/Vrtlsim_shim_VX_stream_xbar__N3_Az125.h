// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_STREAM_XBAR__N3_AZ125_H_
#define VERILATED_VRTLSIM_SHIM_VX_STREAM_XBAR__N3_AZ125_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_stream_xbar__N3_Az125 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ reset;
    CData/*2:0*/ valid_in;
    SData/*11:0*/ data_in;
    CData/*5:0*/ sel_in;
    CData/*2:0*/ ready_in;
    CData/*3:0*/ valid_out;
    SData/*15:0*/ data_out;
    CData/*7:0*/ sel_out;
    CData/*3:0*/ ready_out;
    CData/*1:0*/ __PVT__collisions;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__0__KET____DOT__sel_in_demux__data_out;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__1__KET____DOT__sel_in_demux__data_out;
    CData/*3:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_sel_in_demux__BRA__2__KET____DOT__sel_in_demux__data_out;
    CData/*0:0*/ __Vcellinp__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__ready_out;
    CData/*1:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__sel_out;
    CData/*0:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__valid_out;
    CData/*1:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__sel_out;
    CData/*0:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__valid_out;
    CData/*1:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__sel_out;
    CData/*0:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__valid_out;
    CData/*1:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__sel_out;
    CData/*0:0*/ __Vcellout__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__valid_out;
    CData/*3:0*/ g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT____Vxrand___0;
    CData/*2:0*/ __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    CData/*0:0*/ g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0;
    CData/*3:0*/ g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT____Vxrand___0;
    CData/*2:0*/ __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    CData/*0:0*/ g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0;
    CData/*3:0*/ g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT____Vxrand___0;
    CData/*2:0*/ __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    CData/*0:0*/ g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0;
    CData/*3:0*/ g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT____Vxrand___0;
    CData/*2:0*/ __PVT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
    CData/*0:0*/ g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT____Vxrand___0;
    CData/*1:0*/ __VdfgRegularize_h9aa91d48_1_14;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_85;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_86;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_87;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_90;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_96;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_97;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_98;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_99;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_100;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_159;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_160;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_161;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_164;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_170;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_171;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_172;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_173;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_174;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_stream_xbar__N3_Az125();
    ~Vrtlsim_shim_VX_stream_xbar__N3_Az125();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_stream_xbar__N3_Az125);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
