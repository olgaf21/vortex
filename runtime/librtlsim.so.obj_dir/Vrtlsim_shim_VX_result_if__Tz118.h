// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_RESULT_IF__TZ118_H_
#define VERILATED_VRTLSIM_SHIM_VX_RESULT_IF__TZ118_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_result_if__Tz118 final {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<10>/*308:0*/ data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_result_if__Tz118();
    ~Vrtlsim_shim_VX_result_if__Tz118();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_result_if__Tz118);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_result_if__Tz118* obj);

#endif  // guard
