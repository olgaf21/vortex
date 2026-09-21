// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim___024unit___ctor_var_reset(Vrtlsim_shim___024unit* vlSelf);

Vrtlsim_shim___024unit::Vrtlsim_shim___024unit() = default;
Vrtlsim_shim___024unit::~Vrtlsim_shim___024unit() = default;

void Vrtlsim_shim___024unit::ctor(Vrtlsim_shim__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vrtlsim_shim___024unit___ctor_var_reset(this);
}

void Vrtlsim_shim___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vrtlsim_shim___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
