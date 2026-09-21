// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_MEM_BUS_IF__D40_T7_H_
#define VERILATED_VRTLSIM_SHIM_VX_MEM_BUS_IF__D40_T7_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_mem_bus_if__D40_T7 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ req_ready;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_mem_bus_if__D40_T7();
    ~Vrtlsim_shim_VX_mem_bus_if__D40_T7();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_mem_bus_if__D40_T7);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_mem_bus_if__D40_T7* obj);

#endif  // guard
