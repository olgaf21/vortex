// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_MEM_BUS_IF__D40_T5_H_
#define VERILATED_VRTLSIM_SHIM_VX_MEM_BUS_IF__D40_T5_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_mem_bus_if__D40_T5 final {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<39>/*1223:0*/ __VdfgRegularize_h6e95ff9d_0_50;
    VlWide<20>/*610:0*/ req_data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_mem_bus_if__D40_T5();
    ~Vrtlsim_shim_VX_mem_bus_if__D40_T5();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_mem_bus_if__D40_T5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_mem_bus_if__D40_T5* obj);

#endif  // guard
