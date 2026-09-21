// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim___024unit___ctor_var_reset(Vvortex_afu_shim___024unit* vlSelf);

Vvortex_afu_shim___024unit::Vvortex_afu_shim___024unit() = default;
Vvortex_afu_shim___024unit::~Vvortex_afu_shim___024unit() = default;

void Vvortex_afu_shim___024unit::ctor(Vvortex_afu_shim__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vvortex_afu_shim___024unit___ctor_var_reset(this);
}

void Vvortex_afu_shim___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vvortex_afu_shim___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
