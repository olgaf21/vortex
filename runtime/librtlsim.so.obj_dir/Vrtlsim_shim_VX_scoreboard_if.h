// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_SCOREBOARD_IF_H_
#define VERILATED_VRTLSIM_SHIM_VX_SCOREBOARD_IF_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_scoreboard_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ valid;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_103;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_104;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_105;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_106;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_107;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_108;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_177;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_178;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_179;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_180;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_181;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_182;
    VlWide<4>/*112:0*/ data;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_scoreboard_if();
    ~Vrtlsim_shim_VX_scoreboard_if();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_scoreboard_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vrtlsim_shim_VX_scoreboard_if* obj);

#endif  // guard
