// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvortex_afu_shim.h for the primary calling header

#ifndef VERILATED_VVORTEX_AFU_SHIM_VX_IBUFFER_IF_H_
#define VERILATED_VVORTEX_AFU_SHIM_VX_IBUFFER_IF_H_  // guard

#include "verilated.h"


class Vvortex_afu_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvortex_afu_shim_VX_ibuffer_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ready;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_25;

    // INTERNAL VARIABLES
    Vvortex_afu_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvortex_afu_shim_VX_ibuffer_if();
    ~Vvortex_afu_shim_VX_ibuffer_if();
    void ctor(Vvortex_afu_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvortex_afu_shim_VX_ibuffer_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_ibuffer_if* obj);

#endif  // guard
