// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_LSU_MEM_IF__N8_D4_T2_H_
#define VERILATED_VRTLSIM_SHIM_VX_LSU_MEM_IF__N8_D4_T2_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_lsu_mem_if__N8_D4_T2 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ req_ready;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_34;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_35;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_38;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_39;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_46;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_47;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_49;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_lsu_mem_if__N8_D4_T2();
    ~Vrtlsim_shim_VX_lsu_mem_if__N8_D4_T2();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_lsu_mem_if__N8_D4_T2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_lsu_mem_if__N8_D4_T2* obj);

#endif  // guard
