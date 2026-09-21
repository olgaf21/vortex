// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrtlsim_shim.h for the primary calling header

#include "Vrtlsim_shim__pch.h"

void Vrtlsim_shim_VX_mem_bus_if__D40_T5___ctor_var_reset(Vrtlsim_shim_VX_mem_bus_if__D40_T5* vlSelf);

Vrtlsim_shim_VX_mem_bus_if__D40_T5::Vrtlsim_shim_VX_mem_bus_if__D40_T5() = default;
Vrtlsim_shim_VX_mem_bus_if__D40_T5::~Vrtlsim_shim_VX_mem_bus_if__D40_T5() = default;

void Vrtlsim_shim_VX_mem_bus_if__D40_T5::ctor(Vrtlsim_shim__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vrtlsim_shim_VX_mem_bus_if__D40_T5___ctor_var_reset(this);
}

void Vrtlsim_shim_VX_mem_bus_if__D40_T5::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vrtlsim_shim_VX_mem_bus_if__D40_T5::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
