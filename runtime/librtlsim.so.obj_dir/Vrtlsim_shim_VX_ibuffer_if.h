// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_IBUFFER_IF_H_
#define VERILATED_VRTLSIM_SHIM_VX_IBUFFER_IF_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_ibuffer_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ready;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_24;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_25;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_ibuffer_if();
    ~Vrtlsim_shim_VX_ibuffer_if();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_ibuffer_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_ibuffer_if* obj);

#endif  // guard
