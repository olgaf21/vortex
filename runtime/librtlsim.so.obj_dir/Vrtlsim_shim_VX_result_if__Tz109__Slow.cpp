// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_result_if__Tz109___ctor_var_reset(Vrtlsim_shim_VX_result_if__Tz109* vlSelf);

Vrtlsim_shim_VX_result_if__Tz109::Vrtlsim_shim_VX_result_if__Tz109() = default;
Vrtlsim_shim_VX_result_if__Tz109::~Vrtlsim_shim_VX_result_if__Tz109() = default;

void Vrtlsim_shim_VX_result_if__Tz109::ctor(Vrtlsim_shim__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vrtlsim_shim_VX_result_if__Tz109___ctor_var_reset(this);
}

void Vrtlsim_shim_VX_result_if__Tz109::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vrtlsim_shim_VX_result_if__Tz109::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
