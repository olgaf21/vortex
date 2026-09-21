// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvortex_afu_shim.h for the primary calling header

#ifndef VERILATED_VVORTEX_AFU_SHIM_VX_EXECUTE_IF__TZ85_H_
#define VERILATED_VVORTEX_AFU_SHIM_VX_EXECUTE_IF__TZ85_H_  // guard

#include "verilated.h"


class Vvortex_afu_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvortex_afu_shim_VX_execute_if__Tz85 final {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<15>/*472:0*/ data;

    // INTERNAL VARIABLES
    Vvortex_afu_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvortex_afu_shim_VX_execute_if__Tz85();
    ~Vvortex_afu_shim_VX_execute_if__Tz85();
    void ctor(Vvortex_afu_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvortex_afu_shim_VX_execute_if__Tz85);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_execute_if__Tz85* obj);

#endif  // guard
