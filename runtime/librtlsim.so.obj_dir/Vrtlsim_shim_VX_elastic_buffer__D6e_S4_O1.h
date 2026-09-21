// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrtlsim_shim.h for the primary calling header

#ifndef VERILATED_VRTLSIM_SHIM_VX_ELASTIC_BUFFER__D6E_S4_O1_H_
#define VERILATED_VRTLSIM_SHIM_VX_ELASTIC_BUFFER__D6E_S4_O1_H_  // guard

#include "verilated.h"


class Vrtlsim_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ reset;
    CData/*0:0*/ valid_in;
    CData/*0:0*/ ready_in;
    CData/*0:0*/ ready_out;
    CData/*0:0*/ valid_out;
    CData/*0:0*/ __PVT__g_ebN__DOT__push;
    CData/*0:0*/ __PVT__g_ebN__DOT__pop;
    CData/*1:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__rd_ptr_r;
    CData/*1:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__empty_r;
    CData/*0:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__alm_empty_r;
    CData/*0:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__full_r;
    CData/*1:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    VlWide<4>/*109:0*/ data_in;
    VlWide<4>/*109:0*/ data_out;
    VlWide<4>/*109:0*/ __PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__g_out_reg__DOT__data_out_r;
    VlUnpacked<VlWide<4>/*109:0*/, 4> __PVT__g_ebN__DOT__fifo_queue__DOT__g_depth_n__DOT__dp_ram__DOT__ram;

    // INTERNAL VARIABLES
    Vrtlsim_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1();
    ~Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1();
    void ctor(Vrtlsim_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrtlsim_shim_VX_elastic_buffer__D6e_S4_O1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
