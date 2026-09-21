// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvortex_afu_shim.h for the primary calling header

#ifndef VERILATED_VVORTEX_AFU_SHIM_VX_MEM_BUS_IF__D40_A1A_T2A_H_
#define VERILATED_VVORTEX_AFU_SHIM_VX_MEM_BUS_IF__D40_A1A_T2A_H_  // guard

#include "verilated.h"


class Vvortex_afu_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ req_ready;

    // INTERNAL VARIABLES
    Vvortex_afu_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a();
    ~Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a();
    void ctor(Vvortex_afu_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a* obj);

#endif  // guard
