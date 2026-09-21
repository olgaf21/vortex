// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_FPU_DPI__T4_O1_H_
#define VERILATED_VRTLSIM_SHIM_VX_FPU_DPI__T4_O1_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_fpu_dpi__T4_O1 final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ __Vlvbound_h35829769__4;
        CData/*4:0*/ __Vlvbound_h35829769__3;
        CData/*4:0*/ __Vlvbound_h35829769__2;
        CData/*4:0*/ __Vlvbound_h35829769__1;
        CData/*4:0*/ __Vlvbound_h35829769__0;
        CData/*4:0*/ __Vxrand___16;
        CData/*4:0*/ __Vlvbound_h737feed2__0;
        CData/*4:0*/ __Vlvbound_h13e3f7aa__0;
        CData/*4:0*/ __Vlvbound_ha102928c__0;
        CData/*4:0*/ __Vlvbound_h7cf11dd0__0;
        CData/*4:0*/ __Vlvbound_h5f0bd12a__0;
        CData/*4:0*/ __Vlvbound_h3074277e__0;
        CData/*4:0*/ __Vxrand___13;
        CData/*4:0*/ __Vxrand___12;
        CData/*4:0*/ __Vxrand___11;
        CData/*4:0*/ __Vxrand___10;
        CData/*4:0*/ __Vlvbound_h9bdde3e9__0;
        CData/*4:0*/ __Vlvbound_h63d542ff__0;
        CData/*4:0*/ __Vlvbound_h9828442b__0;
        CData/*4:0*/ __Vlvbound_hb217f850__0;
        CData/*4:0*/ __Vlvbound_hd895d442__0;
        CData/*4:0*/ __Vlvbound_h41f4d2d4__0;
        CData/*4:0*/ __Vlvbound_h0796f6f3__0;
        CData/*4:0*/ __Vxrand___6;
        CData/*4:0*/ __Vxrand___5;
        CData/*4:0*/ __Vxrand___4;
        CData/*4:0*/ __Vxrand___3;
        CData/*4:0*/ __Vxrand___2;
        CData/*4:0*/ __Vxrand___1;
        CData/*4:0*/ __Vxrand___0;
        CData/*4:0*/ __Vlvbound_h93b343aa__0;
        CData/*4:0*/ __Vlvbound_h9741f525__0;
        CData/*4:0*/ __Vlvbound_h852d17be__0;
        CData/*4:0*/ __Vlvbound_hcb6255cd__0;
        CData/*4:0*/ __Vlvbound_hd8767c5b__0;
        CData/*4:0*/ __Vlvbound_h971e81e5__0;
        CData/*4:0*/ __Vlvbound_h775decd6__0;
        CData/*0:0*/ clk;
        CData/*0:0*/ reset;
        CData/*0:0*/ valid_in;
        CData/*0:0*/ ready_in;
        CData/*0:0*/ mask_in;
        CData/*3:0*/ tag_in;
        CData/*3:0*/ op_type;
        CData/*1:0*/ fmt;
        CData/*2:0*/ frm;
        CData/*0:0*/ has_fflags;
        CData/*4:0*/ fflags;
        CData/*3:0*/ tag_out;
        CData/*0:0*/ ready_out;
        CData/*0:0*/ valid_out;
        CData/*3:0*/ __PVT__per_core_valid_out;
        CData/*1:0*/ __PVT__core_select;
        CData/*0:0*/ __PVT__is_fadd;
        CData/*0:0*/ __PVT__is_fsub;
        CData/*0:0*/ __PVT__is_fmul;
        CData/*0:0*/ __PVT__is_fmadd;
        CData/*0:0*/ __PVT__is_fmsub;
        CData/*0:0*/ __PVT__is_fnmadd;
        CData/*0:0*/ __PVT__is_fnmsub;
        CData/*0:0*/ __PVT__is_div;
        CData/*0:0*/ __PVT__is_fcmp;
        CData/*0:0*/ __PVT__is_itof;
        CData/*0:0*/ __PVT__is_utof;
    };
    struct {
        CData/*0:0*/ __PVT__is_ftoi;
        CData/*0:0*/ __PVT__is_ftou;
        CData/*0:0*/ __PVT__is_f2f;
        CData/*0:0*/ __Vcellinp__div_sqrt_arb__ready_out;
        CData/*1:0*/ __Vcellinp__div_sqrt_arb__valid_in;
        CData/*4:0*/ __PVT__g_fma__DOT__fflags_fma;
        CData/*4:0*/ __PVT__g_fma__DOT__fflags_fadd;
        CData/*4:0*/ __PVT__g_fma__DOT__fflags_fsub;
        CData/*4:0*/ __PVT__g_fma__DOT__fflags_fmul;
        CData/*4:0*/ __PVT__g_fma__DOT__fflags_fmadd;
        CData/*4:0*/ __PVT__g_fma__DOT__fflags_fmsub;
        CData/*4:0*/ __PVT__g_fma__DOT__fflags_fnmadd;
        CData/*4:0*/ __PVT__g_fma__DOT__fflags_fnmsub;
        CData/*0:0*/ __PVT__g_fma__DOT__fma_valid;
        CData/*0:0*/ __PVT__g_fma__DOT__fma_ready;
        CData/*0:0*/ __PVT__g_fma__DOT__fma_fire;
        CData/*4:0*/ __PVT__g_fdiv__DOT__fflags_fdiv;
        CData/*0:0*/ __PVT__g_fdiv__DOT__fdiv_valid;
        CData/*0:0*/ __PVT__g_fdiv__DOT__fdiv_ready;
        CData/*4:0*/ __PVT__g_fsqrt__DOT__fflags_fsqrt;
        CData/*0:0*/ __PVT__g_fsqrt__DOT__fsqrt_valid;
        CData/*0:0*/ __PVT__g_fsqrt__DOT__fsqrt_ready;
        CData/*4:0*/ __PVT__g_fcvt__DOT__fflags_fcvt;
        CData/*4:0*/ __PVT__g_fcvt__DOT__fflags_itof;
        CData/*4:0*/ __PVT__g_fcvt__DOT__fflags_utof;
        CData/*4:0*/ __PVT__g_fcvt__DOT__fflags_ftoi;
        CData/*4:0*/ __PVT__g_fcvt__DOT__fflags_ftou;
        CData/*0:0*/ __PVT__g_fcvt__DOT__fcvt_valid;
        CData/*0:0*/ __PVT__g_fcvt__DOT__fcvt_ready;
        CData/*0:0*/ __PVT__g_fcvt__DOT__fcvt_fire;
        CData/*4:0*/ __PVT__g_fncp__DOT__fflags_fncp;
        CData/*4:0*/ __PVT__g_fncp__DOT__fflags_flt;
        CData/*4:0*/ __PVT__g_fncp__DOT__fflags_fle;
        CData/*4:0*/ __PVT__g_fncp__DOT__fflags_feq;
        CData/*4:0*/ __PVT__g_fncp__DOT__fflags_fmin;
        CData/*4:0*/ __PVT__g_fncp__DOT__fflags_fmax;
        CData/*0:0*/ __PVT__g_fncp__DOT__fncp_valid;
        CData/*0:0*/ __PVT__g_fncp__DOT__fncp_ready;
        CData/*0:0*/ __PVT__g_fncp__DOT__fncp_fire;
        CData/*0:0*/ __VdfgRegularize_hbdc8d00e_0_0;
        CData/*3:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arb_onehot;
        CData/*0:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__ready_out_w;
        CData/*3:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs;
        CData/*3:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs;
        CData/*3:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__reqs_mask;
        CData/*3:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs;
        CData/*0:0*/ rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT____VdfgRegularize_h17a63ac3_0_0;
        CData/*0:0*/ rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT____VdfgRegularize_h17a63ac3_0_1;
        CData/*0:0*/ __VdfgRegularize_hbdc8d00e_1_2;
        CData/*1:0*/ __VdfgRegularize_hbdc8d00e_1_6;
        CData/*4:0*/ __Vtask_dpi_fadd__0__fflags;
        CData/*4:0*/ __Vtask_dpi_fsub__1__fflags;
        CData/*4:0*/ __Vtask_dpi_fmul__2__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__3__fflags;
        CData/*4:0*/ __Vtask_dpi_fmsub__4__fflags;
        CData/*4:0*/ __Vtask_dpi_fnmadd__5__fflags;
        CData/*4:0*/ __Vtask_dpi_fnmsub__6__fflags;
        CData/*4:0*/ __Vtask_dpi_fdiv__7__fflags;
        CData/*4:0*/ __Vtask_dpi_fsqrt__8__fflags;
        CData/*4:0*/ __Vtask_dpi_itof__9__fflags;
        CData/*4:0*/ __Vtask_dpi_utof__10__fflags;
        CData/*4:0*/ __Vtask_dpi_ftoi__11__fflags;
        CData/*4:0*/ __Vtask_dpi_ftou__12__fflags;
        CData/*4:0*/ __Vtask_dpi_fle__15__fflags;
    };
    struct {
        CData/*4:0*/ __Vtask_dpi_flt__16__fflags;
        CData/*4:0*/ __Vtask_dpi_feq__17__fflags;
        CData/*4:0*/ __Vtask_dpi_fmin__18__fflags;
        CData/*4:0*/ __Vtask_dpi_fmax__19__fflags;
        CData/*4:0*/ __Vtask_dpi_fadd__23__fflags;
        CData/*4:0*/ __Vtask_dpi_fsub__24__fflags;
        CData/*4:0*/ __Vtask_dpi_fmul__25__fflags;
        CData/*4:0*/ __Vtask_dpi_fmadd__26__fflags;
        CData/*4:0*/ __Vtask_dpi_fmsub__27__fflags;
        CData/*4:0*/ __Vtask_dpi_fnmadd__28__fflags;
        CData/*4:0*/ __Vtask_dpi_fnmsub__29__fflags;
        CData/*4:0*/ __Vtask_dpi_fdiv__30__fflags;
        CData/*4:0*/ __Vtask_dpi_fsqrt__31__fflags;
        CData/*4:0*/ __Vtask_dpi_itof__32__fflags;
        CData/*4:0*/ __Vtask_dpi_utof__33__fflags;
        CData/*4:0*/ __Vtask_dpi_ftoi__34__fflags;
        CData/*4:0*/ __Vtask_dpi_ftou__35__fflags;
        CData/*4:0*/ __Vtask_dpi_fle__38__fflags;
        CData/*4:0*/ __Vtask_dpi_flt__39__fflags;
        CData/*4:0*/ __Vtask_dpi_feq__40__fflags;
        CData/*4:0*/ __Vtask_dpi_fmin__41__fflags;
        CData/*4:0*/ __Vtask_dpi_fmax__42__fflags;
        CData/*5:0*/ __Vtableidx1;
        CData/*5:0*/ __Vtableidx2;
        IData/*31:0*/ __Vxrand___15;
        IData/*31:0*/ dataa;
        IData/*31:0*/ datab;
        IData/*31:0*/ datac;
        IData/*31:0*/ result;
        IData/*31:0*/ __PVT__g_fma__DOT__result_fma;
        IData/*31:0*/ __PVT__g_fma__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ __PVT__g_fdiv__DOT__result_fdiv_r;
        IData/*31:0*/ __PVT__g_fdiv__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ __PVT__g_fsqrt__DOT__result_fsqrt_r;
        IData/*31:0*/ __PVT__g_fsqrt__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ __PVT__g_fcvt__DOT__result_fcvt;
        IData/*31:0*/ __PVT__g_fcvt__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ __PVT__g_fncp__DOT__result_fncp;
        IData/*31:0*/ __PVT__g_fncp__DOT__unnamedblk10__DOT__i;
        QData/*63:0*/ __PVT__g_fma__DOT__result_fadd;
        QData/*63:0*/ __PVT__g_fma__DOT__result_fsub;
        QData/*63:0*/ __PVT__g_fma__DOT__result_fmul;
        QData/*63:0*/ __PVT__g_fma__DOT__result_fmadd;
        QData/*63:0*/ __PVT__g_fma__DOT__result_fmsub;
        QData/*63:0*/ __PVT__g_fma__DOT__result_fnmadd;
        QData/*63:0*/ __PVT__g_fma__DOT__result_fnmsub;
        QData/*41:0*/ __Vcellinp__g_fma__DOT__shift_reg__data_in;
        QData/*63:0*/ __PVT__g_fdiv__DOT__result_fdiv;
        QData/*41:0*/ __Vcellinp__g_fdiv__DOT__shift_reg__data_in;
        QData/*63:0*/ __PVT__g_fsqrt__DOT__result_fsqrt;
        QData/*41:0*/ __Vcellinp__g_fsqrt__DOT__shift_reg__data_in;
        QData/*63:0*/ __PVT__g_fcvt__DOT__result_itof;
        QData/*63:0*/ __PVT__g_fcvt__DOT__result_utof;
        QData/*63:0*/ __PVT__g_fcvt__DOT__result_ftoi;
        QData/*63:0*/ __PVT__g_fcvt__DOT__result_ftou;
        QData/*63:0*/ __PVT__g_fcvt__DOT__result_f2f;
        QData/*41:0*/ __Vcellinp__g_fcvt__DOT__shift_reg__data_in;
        QData/*63:0*/ __PVT__g_fncp__DOT__result_fclss;
        QData/*63:0*/ __PVT__g_fncp__DOT__result_flt;
        QData/*63:0*/ __PVT__g_fncp__DOT__result_fle;
        QData/*63:0*/ __PVT__g_fncp__DOT__result_feq;
        QData/*63:0*/ __PVT__g_fncp__DOT__result_fmin;
        QData/*63:0*/ __PVT__g_fncp__DOT__result_fmax;
        QData/*63:0*/ __PVT__g_fncp__DOT__result_fsgnj;
    };
    struct {
        QData/*63:0*/ __PVT__g_fncp__DOT__result_fsgnjn;
        QData/*63:0*/ __PVT__g_fncp__DOT__result_fsgnjx;
        QData/*63:0*/ __PVT__g_fncp__DOT__result_fmvx;
        QData/*63:0*/ __PVT__g_fncp__DOT__result_fmvf;
        QData/*42:0*/ __Vcellinp__g_fncp__DOT__shift_reg__data_in;
        QData/*41:0*/ div_sqrt_arb__DOT____Vxrand___0;
        QData/*41:0*/ rsp_arb__DOT____Vxrand___0;
        QData/*44:0*/ rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT____Vcellinp__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__data_in;
        QData/*44:0*/ __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__g_out_buf__BRA__0__KET____DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_shift_register__DOT__g_shift__DOT__pipe;
        VlWide<6>/*167:0*/ __PVT__g_fma__DOT__shift_reg__DOT__g_shift__DOT__pipe;
        VlWide<20>/*629:0*/ __PVT__g_fdiv__DOT__shift_reg__DOT__g_shift__DOT__pipe;
        VlWide<14>/*419:0*/ __PVT__g_fsqrt__DOT__shift_reg__DOT__g_shift__DOT__pipe;
        VlWide<7>/*209:0*/ __PVT__g_fcvt__DOT__shift_reg__DOT__g_shift__DOT__pipe;
        VlWide<3>/*85:0*/ __PVT__g_fncp__DOT__shift_reg__DOT__g_shift__DOT__pipe;
        QData/*63:0*/ __Vtask_dpi_fadd__0__result;
        QData/*63:0*/ __Vtask_dpi_fsub__1__result;
        QData/*63:0*/ __Vtask_dpi_fmul__2__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__3__result;
        QData/*63:0*/ __Vtask_dpi_fmsub__4__result;
        QData/*63:0*/ __Vtask_dpi_fnmadd__5__result;
        QData/*63:0*/ __Vtask_dpi_fnmsub__6__result;
        QData/*63:0*/ __Vtask_dpi_fdiv__7__result;
        QData/*63:0*/ __Vtask_dpi_fsqrt__8__result;
        QData/*63:0*/ __Vtask_dpi_itof__9__result;
        QData/*63:0*/ __Vtask_dpi_utof__10__result;
        QData/*63:0*/ __Vtask_dpi_ftoi__11__result;
        QData/*63:0*/ __Vtask_dpi_ftou__12__result;
        QData/*63:0*/ __Vtask_dpi_f2f__13__result;
        QData/*63:0*/ __Vtask_dpi_fclss__14__result;
        QData/*63:0*/ __Vtask_dpi_fle__15__result;
        QData/*63:0*/ __Vtask_dpi_flt__16__result;
        QData/*63:0*/ __Vtask_dpi_feq__17__result;
        QData/*63:0*/ __Vtask_dpi_fmin__18__result;
        QData/*63:0*/ __Vtask_dpi_fmax__19__result;
        QData/*63:0*/ __Vtask_dpi_fsgnj__20__result;
        QData/*63:0*/ __Vtask_dpi_fsgnjn__21__result;
        QData/*63:0*/ __Vtask_dpi_fsgnjx__22__result;
        QData/*63:0*/ __Vtask_dpi_fadd__23__result;
        QData/*63:0*/ __Vtask_dpi_fsub__24__result;
        QData/*63:0*/ __Vtask_dpi_fmul__25__result;
        QData/*63:0*/ __Vtask_dpi_fmadd__26__result;
        QData/*63:0*/ __Vtask_dpi_fmsub__27__result;
        QData/*63:0*/ __Vtask_dpi_fnmadd__28__result;
        QData/*63:0*/ __Vtask_dpi_fnmsub__29__result;
        QData/*63:0*/ __Vtask_dpi_fdiv__30__result;
        QData/*63:0*/ __Vtask_dpi_fsqrt__31__result;
        QData/*63:0*/ __Vtask_dpi_itof__32__result;
        QData/*63:0*/ __Vtask_dpi_utof__33__result;
        QData/*63:0*/ __Vtask_dpi_ftoi__34__result;
        QData/*63:0*/ __Vtask_dpi_ftou__35__result;
        QData/*63:0*/ __Vtask_dpi_f2f__36__result;
        QData/*63:0*/ __Vtask_dpi_fclss__37__result;
        QData/*63:0*/ __Vtask_dpi_fle__38__result;
        QData/*63:0*/ __Vtask_dpi_flt__39__result;
        QData/*63:0*/ __Vtask_dpi_feq__40__result;
        QData/*63:0*/ __Vtask_dpi_fmin__41__result;
        QData/*63:0*/ __Vtask_dpi_fmax__42__result;
        QData/*63:0*/ __Vtask_dpi_fsgnj__43__result;
        QData/*63:0*/ __Vtask_dpi_fsgnjn__44__result;
        QData/*63:0*/ __Vtask_dpi_fsgnjx__45__result;
        VlUnpacked<QData/*63:0*/, 3> __PVT__operands;
        VlUnpacked<CData/*3:0*/, 2> __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__addr;
        VlUnpacked<CData/*3:0*/, 3> __PVT__rsp_arb__DOT__g_input_select__DOT__g_arbiter__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__onehot_encoder__DOT__g_model1__DOT__v;
    };

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_fpu_dpi__T4_O1();
    ~Vrtlsim_shim_VX_fpu_dpi__T4_O1();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_fpu_dpi__T4_O1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
