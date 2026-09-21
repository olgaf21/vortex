// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim___024root___ctor_var_reset(Vvortex_afu_shim___024root* vlSelf);

Vvortex_afu_shim___024root::Vvortex_afu_shim___024root(Vvortex_afu_shim__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vvortex_afu_shim___024root___ctor_var_reset(this);
}

void Vvortex_afu_shim___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vvortex_afu_shim___024root::~Vvortex_afu_shim___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
