// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvortex_afu_shim.h for the primary calling header

#ifndef VERILATED_VVORTEX_AFU_SHIM___024UNIT_H_
#define VERILATED_VVORTEX_AFU_SHIM___024UNIT_H_  // guard

#include "verilated.h"


class Vvortex_afu_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvortex_afu_shim___024unit final {
  public:

    // INTERNAL VARIABLES
    Vvortex_afu_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvortex_afu_shim___024unit();
    ~Vvortex_afu_shim___024unit();
    void ctor(Vvortex_afu_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvortex_afu_shim___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
