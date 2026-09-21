// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_EXECUTE_IF__TZ83_H_
#define VERILATED_VRTLSIM_SHIM_VX_EXECUTE_IF__TZ83_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_execute_if__Tz83 final {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<15>/*472:0*/ data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_execute_if__Tz83();
    ~Vrtlsim_shim_VX_execute_if__Tz83();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_execute_if__Tz83);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_execute_if__Tz83* obj);

#endif  // guard
