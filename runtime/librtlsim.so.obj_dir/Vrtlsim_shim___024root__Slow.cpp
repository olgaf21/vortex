// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim___024root___ctor_var_reset(Vrtlsim_shim___024root* vlSelf);

Vrtlsim_shim___024root::Vrtlsim_shim___024root(Vrtlsim_shim__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vrtlsim_shim___024root___ctor_var_reset(this);
}

void Vrtlsim_shim___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrtlsim_shim___024root::~Vrtlsim_shim___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
