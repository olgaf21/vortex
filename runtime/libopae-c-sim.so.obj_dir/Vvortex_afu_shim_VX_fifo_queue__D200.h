// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvortex_afu_shim.h for the primary calling header

#ifndef VERILATED_VVORTEX_AFU_SHIM_VX_FIFO_QUEUE__D200_H_
#define VERILATED_VVORTEX_AFU_SHIM_VX_FIFO_QUEUE__D200_H_  // guard

#include "verilated.h"


class Vvortex_afu_shim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvortex_afu_shim_VX_fifo_queue__D200 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ reset;
    CData/*0:0*/ push;
    CData/*0:0*/ pop;
    CData/*0:0*/ empty;
    CData/*0:0*/ __PVT__alm_empty;
    CData/*0:0*/ __PVT__full;
    CData/*0:0*/ __PVT__alm_full;
    CData/*5:0*/ __PVT__size;
    CData/*4:0*/ __PVT__g_depth_n__DOT__rd_ptr_r;
    CData/*4:0*/ __PVT__g_depth_n__DOT__wr_ptr_r;
    CData/*0:0*/ __PVT__pending_size__DOT__g_size_gt1__DOT__empty_r;
    CData/*0:0*/ __PVT__pending_size__DOT__g_size_gt1__DOT__full_r;
    CData/*4:0*/ __PVT__pending_size__DOT__g_size_gt1__DOT__g_single_step__DOT__used_r;
    VlWide<16>/*511:0*/ data_in;
    VlWide<16>/*511:0*/ data_out;
    VlUnpacked<VlWide<16>/*511:0*/, 32> __PVT__g_depth_n__DOT__dp_ram__DOT__ram;

    // INTERNAL VARIABLES
    Vvortex_afu_shim__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvortex_afu_shim_VX_fifo_queue__D200();
    ~Vvortex_afu_shim_VX_fifo_queue__D200();
    void ctor(Vvortex_afu_shim__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvortex_afu_shim_VX_fifo_queue__D200);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
