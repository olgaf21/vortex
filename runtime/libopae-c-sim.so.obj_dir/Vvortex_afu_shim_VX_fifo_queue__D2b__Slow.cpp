// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

void Vvortex_afu_shim_VX_fifo_queue__D2b___ctor_var_reset(Vvortex_afu_shim_VX_fifo_queue__D2b* vlSelf);

Vvortex_afu_shim_VX_fifo_queue__D2b::Vvortex_afu_shim_VX_fifo_queue__D2b() = default;
Vvortex_afu_shim_VX_fifo_queue__D2b::~Vvortex_afu_shim_VX_fifo_queue__D2b() = default;

void Vvortex_afu_shim_VX_fifo_queue__D2b::ctor(Vvortex_afu_shim__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vvortex_afu_shim_VX_fifo_queue__D2b___ctor_var_reset(this);
}

void Vvortex_afu_shim_VX_fifo_queue__D2b::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vvortex_afu_shim_VX_fifo_queue__D2b::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
