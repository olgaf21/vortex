// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_LSU_ADAPTER__PI18_H_
#define VERILATED_VRTLSIM_SHIM_VX_LSU_ADAPTER__PI18_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_lsu_adapter__pi18 final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ clk;
        CData/*0:0*/ reset;
        CData/*0:0*/ __Vcellout__stream_unpack__ready_in;
        CData/*7:0*/ __PVT__rsp_valid_out;
        CData/*1:0*/ __Vcellout__stream_pack__tag_out;
        CData/*7:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_r;
        CData/*7:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__rem_mask_n;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__valid_in;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_out_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__valid_in_r;
        CData/*0:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__flow_out;
        CData/*2:0*/ __PVT__stream_pack__DOT__g_pack__DOT__grant_index;
        CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h32a5ebdd_0_0;
        CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h32a5ebdd_0_1;
        CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h32a5ebdd_0_2;
        CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h32a5ebdd_0_3;
        CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h32a5ebdd_0_4;
        CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h32a5ebdd_0_5;
        CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h32a5ebdd_0_6;
        CData/*0:0*/ stream_pack__DOT____VdfgRegularize_h32a5ebdd_0_7;
        CData/*0:0*/ __PVT__stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_valid_w;
        CData/*0:0*/ stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_0;
        CData/*0:0*/ stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_1;
        CData/*0:0*/ stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_2;
        CData/*0:0*/ stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_3;
        CData/*0:0*/ stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT____VdfgRegularize_hdb96e394_0_4;
        CData/*0:0*/ stream_pack__DOT__g_pack__DOT__arbiter__DOT__g_priority__DOT__priority_arbiter__DOT__g_encoder__DOT__grant_sel__DOT__g_lsb__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT____VdfgRegularize_h28e931c1_0_0;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ stream_unpack__DOT____Vcellinp__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__data_in;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
    };
    struct {
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__0__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__1__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__2__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__3__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__4__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__5__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__6__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__data_out_r;
        VlWide<3>/*71:0*/ __PVT__stream_unpack__DOT__g_unpack__DOT__g_outbuf__BRA__7__KET____DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_buffer__DOT__buffer_r;
    };

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_lsu_adapter__pi18();
    ~Vrtlsim_shim_VX_lsu_adapter__pi18();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_lsu_adapter__pi18);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
