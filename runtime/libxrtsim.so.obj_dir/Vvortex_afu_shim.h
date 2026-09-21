// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VVORTEX_AFU_SHIM_H_
#define VERILATED_VVORTEX_AFU_SHIM_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vvortex_afu_shim__Syms;
class Vvortex_afu_shim___024root;
class Vvortex_afu_shim_VX_decode_sched_if;
class Vvortex_afu_shim_VX_execute_if__Tz83;
class Vvortex_afu_shim_VX_ibuffer_if;
class Vvortex_afu_shim_VX_issue_sched_if;
class Vvortex_afu_shim_VX_mem_bus_if__D10_T3;
class Vvortex_afu_shim_VX_mem_bus_if__D40_T5;
class Vvortex_afu_shim_VX_mem_bus_if__D4_T2;
class Vvortex_afu_shim_VX_mem_bus_if__D4_T3;
class Vvortex_afu_shim_VX_operands_if;
class Vvortex_afu_shim_VX_result_if__Tz101;
class Vvortex_afu_shim_VX_result_if__Tz84;
class Vvortex_afu_shim_VX_result_if__Tz92;
class Vvortex_afu_shim_VX_result_if__Tz97;
class Vvortex_afu_shim_VX_schedule_if;
class Vvortex_afu_shim_VX_scoreboard_if;
class Vvortex_afu_shim_VX_stream_arb__N4_D22_Az17_O3;
class Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3;
class Vvortex_afu_shim_VX_writeback_if;
class Vvortex_afu_shim___024unit;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vvortex_afu_shim VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vvortex_afu_shim__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&ap_clk,0,0);
    VL_IN8(&ap_rst_n,0,0);
    VL_OUT8(&m_axi_mem_7_awvalid,0,0);
    VL_IN8(&m_axi_mem_7_awready,0,0);
    VL_OUT8(&m_axi_mem_7_awlen,7,0);
    VL_OUT8(&m_axi_mem_7_wvalid,0,0);
    VL_IN8(&m_axi_mem_7_wready,0,0);
    VL_OUT8(&m_axi_mem_7_wlast,0,0);
    VL_OUT8(&m_axi_mem_7_arvalid,0,0);
    VL_IN8(&m_axi_mem_7_arready,0,0);
    VL_OUT8(&m_axi_mem_7_arlen,7,0);
    VL_IN8(&m_axi_mem_7_rvalid,0,0);
    VL_OUT8(&m_axi_mem_7_rready,0,0);
    VL_IN8(&m_axi_mem_7_rlast,0,0);
    VL_IN8(&m_axi_mem_7_rresp,1,0);
    VL_IN8(&m_axi_mem_7_bvalid,0,0);
    VL_OUT8(&m_axi_mem_7_bready,0,0);
    VL_IN8(&m_axi_mem_7_bresp,1,0);
    VL_OUT8(&m_axi_mem_6_awvalid,0,0);
    VL_IN8(&m_axi_mem_6_awready,0,0);
    VL_OUT8(&m_axi_mem_6_awlen,7,0);
    VL_OUT8(&m_axi_mem_6_wvalid,0,0);
    VL_IN8(&m_axi_mem_6_wready,0,0);
    VL_OUT8(&m_axi_mem_6_wlast,0,0);
    VL_OUT8(&m_axi_mem_6_arvalid,0,0);
    VL_IN8(&m_axi_mem_6_arready,0,0);
    VL_OUT8(&m_axi_mem_6_arlen,7,0);
    VL_IN8(&m_axi_mem_6_rvalid,0,0);
    VL_OUT8(&m_axi_mem_6_rready,0,0);
    VL_IN8(&m_axi_mem_6_rlast,0,0);
    VL_IN8(&m_axi_mem_6_rresp,1,0);
    VL_IN8(&m_axi_mem_6_bvalid,0,0);
    VL_OUT8(&m_axi_mem_6_bready,0,0);
    VL_IN8(&m_axi_mem_6_bresp,1,0);
    VL_OUT8(&m_axi_mem_5_awvalid,0,0);
    VL_IN8(&m_axi_mem_5_awready,0,0);
    VL_OUT8(&m_axi_mem_5_awlen,7,0);
    VL_OUT8(&m_axi_mem_5_wvalid,0,0);
    VL_IN8(&m_axi_mem_5_wready,0,0);
    VL_OUT8(&m_axi_mem_5_wlast,0,0);
    VL_OUT8(&m_axi_mem_5_arvalid,0,0);
    VL_IN8(&m_axi_mem_5_arready,0,0);
    VL_OUT8(&m_axi_mem_5_arlen,7,0);
    VL_IN8(&m_axi_mem_5_rvalid,0,0);
    VL_OUT8(&m_axi_mem_5_rready,0,0);
    VL_IN8(&m_axi_mem_5_rlast,0,0);
    VL_IN8(&m_axi_mem_5_rresp,1,0);
    VL_IN8(&m_axi_mem_5_bvalid,0,0);
    VL_OUT8(&m_axi_mem_5_bready,0,0);
    VL_IN8(&m_axi_mem_5_bresp,1,0);
    VL_OUT8(&m_axi_mem_4_awvalid,0,0);
    VL_IN8(&m_axi_mem_4_awready,0,0);
    VL_OUT8(&m_axi_mem_4_awlen,7,0);
    VL_OUT8(&m_axi_mem_4_wvalid,0,0);
    VL_IN8(&m_axi_mem_4_wready,0,0);
    VL_OUT8(&m_axi_mem_4_wlast,0,0);
    VL_OUT8(&m_axi_mem_4_arvalid,0,0);
    VL_IN8(&m_axi_mem_4_arready,0,0);
    VL_OUT8(&m_axi_mem_4_arlen,7,0);
    VL_IN8(&m_axi_mem_4_rvalid,0,0);
    VL_OUT8(&m_axi_mem_4_rready,0,0);
    VL_IN8(&m_axi_mem_4_rlast,0,0);
    VL_IN8(&m_axi_mem_4_rresp,1,0);
    VL_IN8(&m_axi_mem_4_bvalid,0,0);
    VL_OUT8(&m_axi_mem_4_bready,0,0);
    VL_IN8(&m_axi_mem_4_bresp,1,0);
    VL_OUT8(&m_axi_mem_3_awvalid,0,0);
    VL_IN8(&m_axi_mem_3_awready,0,0);
    VL_OUT8(&m_axi_mem_3_awlen,7,0);
    VL_OUT8(&m_axi_mem_3_wvalid,0,0);
    VL_IN8(&m_axi_mem_3_wready,0,0);
    VL_OUT8(&m_axi_mem_3_wlast,0,0);
    VL_OUT8(&m_axi_mem_3_arvalid,0,0);
    VL_IN8(&m_axi_mem_3_arready,0,0);
    VL_OUT8(&m_axi_mem_3_arlen,7,0);
    VL_IN8(&m_axi_mem_3_rvalid,0,0);
    VL_OUT8(&m_axi_mem_3_rready,0,0);
    VL_IN8(&m_axi_mem_3_rlast,0,0);
    VL_IN8(&m_axi_mem_3_rresp,1,0);
    VL_IN8(&m_axi_mem_3_bvalid,0,0);
    VL_OUT8(&m_axi_mem_3_bready,0,0);
    VL_IN8(&m_axi_mem_3_bresp,1,0);
    VL_OUT8(&m_axi_mem_2_awvalid,0,0);
    VL_IN8(&m_axi_mem_2_awready,0,0);
    VL_OUT8(&m_axi_mem_2_awlen,7,0);
    VL_OUT8(&m_axi_mem_2_wvalid,0,0);
    VL_IN8(&m_axi_mem_2_wready,0,0);
    VL_OUT8(&m_axi_mem_2_wlast,0,0);
    VL_OUT8(&m_axi_mem_2_arvalid,0,0);
    VL_IN8(&m_axi_mem_2_arready,0,0);
    VL_OUT8(&m_axi_mem_2_arlen,7,0);
    VL_IN8(&m_axi_mem_2_rvalid,0,0);
    VL_OUT8(&m_axi_mem_2_rready,0,0);
    VL_IN8(&m_axi_mem_2_rlast,0,0);
    VL_IN8(&m_axi_mem_2_rresp,1,0);
    VL_IN8(&m_axi_mem_2_bvalid,0,0);
    VL_OUT8(&m_axi_mem_2_bready,0,0);
    VL_IN8(&m_axi_mem_2_bresp,1,0);
    VL_OUT8(&m_axi_mem_1_awvalid,0,0);
    VL_IN8(&m_axi_mem_1_awready,0,0);
    VL_OUT8(&m_axi_mem_1_awlen,7,0);
    VL_OUT8(&m_axi_mem_1_wvalid,0,0);
    VL_IN8(&m_axi_mem_1_wready,0,0);
    VL_OUT8(&m_axi_mem_1_wlast,0,0);
    VL_OUT8(&m_axi_mem_1_arvalid,0,0);
    VL_IN8(&m_axi_mem_1_arready,0,0);
    VL_OUT8(&m_axi_mem_1_arlen,7,0);
    VL_IN8(&m_axi_mem_1_rvalid,0,0);
    VL_OUT8(&m_axi_mem_1_rready,0,0);
    VL_IN8(&m_axi_mem_1_rlast,0,0);
    VL_IN8(&m_axi_mem_1_rresp,1,0);
    VL_IN8(&m_axi_mem_1_bvalid,0,0);
    VL_OUT8(&m_axi_mem_1_bready,0,0);
    VL_IN8(&m_axi_mem_1_bresp,1,0);
    VL_OUT8(&m_axi_mem_0_awvalid,0,0);
    VL_IN8(&m_axi_mem_0_awready,0,0);
    VL_OUT8(&m_axi_mem_0_awlen,7,0);
    VL_OUT8(&m_axi_mem_0_wvalid,0,0);
    VL_IN8(&m_axi_mem_0_wready,0,0);
    VL_OUT8(&m_axi_mem_0_wlast,0,0);
    VL_OUT8(&m_axi_mem_0_arvalid,0,0);
    VL_IN8(&m_axi_mem_0_arready,0,0);
    VL_OUT8(&m_axi_mem_0_arlen,7,0);
    VL_IN8(&m_axi_mem_0_rvalid,0,0);
    VL_OUT8(&m_axi_mem_0_rready,0,0);
    VL_IN8(&m_axi_mem_0_rlast,0,0);
    VL_IN8(&m_axi_mem_0_rresp,1,0);
    VL_IN8(&m_axi_mem_0_bvalid,0,0);
    VL_OUT8(&m_axi_mem_0_bready,0,0);
    VL_IN8(&m_axi_mem_0_bresp,1,0);
    VL_IN8(&s_axi_ctrl_awvalid,0,0);
    VL_OUT8(&s_axi_ctrl_awready,0,0);
    VL_IN8(&s_axi_ctrl_awaddr,7,0);
    VL_IN8(&s_axi_ctrl_wvalid,0,0);
    VL_OUT8(&s_axi_ctrl_wready,0,0);
    VL_IN8(&s_axi_ctrl_wstrb,3,0);
    VL_IN8(&s_axi_ctrl_arvalid,0,0);
    VL_OUT8(&s_axi_ctrl_arready,0,0);
    VL_IN8(&s_axi_ctrl_araddr,7,0);
    VL_OUT8(&s_axi_ctrl_rvalid,0,0);
    VL_IN8(&s_axi_ctrl_rready,0,0);
    VL_OUT8(&s_axi_ctrl_rresp,1,0);
    VL_OUT8(&s_axi_ctrl_bvalid,0,0);
    VL_IN8(&s_axi_ctrl_bready,0,0);
    VL_OUT8(&s_axi_ctrl_bresp,1,0);
    VL_OUT8(&__SYM__interrupt,0,0);
    VL_OUT(&m_axi_mem_7_awid,31,0);
    VL_OUTW(&m_axi_mem_7_wdata,511,0,16);
    VL_OUT(&m_axi_mem_7_arid,31,0);
    VL_INW(&m_axi_mem_7_rdata,511,0,16);
    VL_IN(&m_axi_mem_7_rid,31,0);
    VL_IN(&m_axi_mem_7_bid,31,0);
    VL_OUT(&m_axi_mem_6_awid,31,0);
    VL_OUTW(&m_axi_mem_6_wdata,511,0,16);
    VL_OUT(&m_axi_mem_6_arid,31,0);
    VL_INW(&m_axi_mem_6_rdata,511,0,16);
    VL_IN(&m_axi_mem_6_rid,31,0);
    VL_IN(&m_axi_mem_6_bid,31,0);
    VL_OUT(&m_axi_mem_5_awid,31,0);
    VL_OUTW(&m_axi_mem_5_wdata,511,0,16);
    VL_OUT(&m_axi_mem_5_arid,31,0);
    VL_INW(&m_axi_mem_5_rdata,511,0,16);
    VL_IN(&m_axi_mem_5_rid,31,0);
    VL_IN(&m_axi_mem_5_bid,31,0);
    VL_OUT(&m_axi_mem_4_awid,31,0);
    VL_OUTW(&m_axi_mem_4_wdata,511,0,16);
    VL_OUT(&m_axi_mem_4_arid,31,0);
    VL_INW(&m_axi_mem_4_rdata,511,0,16);
    VL_IN(&m_axi_mem_4_rid,31,0);
    VL_IN(&m_axi_mem_4_bid,31,0);
    VL_OUT(&m_axi_mem_3_awid,31,0);
    VL_OUTW(&m_axi_mem_3_wdata,511,0,16);
    VL_OUT(&m_axi_mem_3_arid,31,0);
    VL_INW(&m_axi_mem_3_rdata,511,0,16);
    VL_IN(&m_axi_mem_3_rid,31,0);
    VL_IN(&m_axi_mem_3_bid,31,0);
    VL_OUT(&m_axi_mem_2_awid,31,0);
    VL_OUTW(&m_axi_mem_2_wdata,511,0,16);
    VL_OUT(&m_axi_mem_2_arid,31,0);
    VL_INW(&m_axi_mem_2_rdata,511,0,16);
    VL_IN(&m_axi_mem_2_rid,31,0);
    VL_IN(&m_axi_mem_2_bid,31,0);
    VL_OUT(&m_axi_mem_1_awid,31,0);
    VL_OUTW(&m_axi_mem_1_wdata,511,0,16);
    VL_OUT(&m_axi_mem_1_arid,31,0);
    VL_INW(&m_axi_mem_1_rdata,511,0,16);
    VL_IN(&m_axi_mem_1_rid,31,0);
    VL_IN(&m_axi_mem_1_bid,31,0);
    VL_OUT(&m_axi_mem_0_awid,31,0);
    VL_OUTW(&m_axi_mem_0_wdata,511,0,16);
    VL_OUT(&m_axi_mem_0_arid,31,0);
    VL_INW(&m_axi_mem_0_rdata,511,0,16);
    VL_IN(&m_axi_mem_0_rid,31,0);
    VL_IN(&m_axi_mem_0_bid,31,0);
    VL_IN(&s_axi_ctrl_wdata,31,0);
    VL_OUT(&s_axi_ctrl_rdata,31,0);
    VL_OUT64(&m_axi_mem_7_awaddr,63,0);
    VL_OUT64(&m_axi_mem_7_wstrb,63,0);
    VL_OUT64(&m_axi_mem_7_araddr,63,0);
    VL_OUT64(&m_axi_mem_6_awaddr,63,0);
    VL_OUT64(&m_axi_mem_6_wstrb,63,0);
    VL_OUT64(&m_axi_mem_6_araddr,63,0);
    VL_OUT64(&m_axi_mem_5_awaddr,63,0);
    VL_OUT64(&m_axi_mem_5_wstrb,63,0);
    VL_OUT64(&m_axi_mem_5_araddr,63,0);
    VL_OUT64(&m_axi_mem_4_awaddr,63,0);
    VL_OUT64(&m_axi_mem_4_wstrb,63,0);
    VL_OUT64(&m_axi_mem_4_araddr,63,0);
    VL_OUT64(&m_axi_mem_3_awaddr,63,0);
    VL_OUT64(&m_axi_mem_3_wstrb,63,0);
    VL_OUT64(&m_axi_mem_3_araddr,63,0);
    VL_OUT64(&m_axi_mem_2_awaddr,63,0);
    VL_OUT64(&m_axi_mem_2_wstrb,63,0);
    VL_OUT64(&m_axi_mem_2_araddr,63,0);
    VL_OUT64(&m_axi_mem_1_awaddr,63,0);
    VL_OUT64(&m_axi_mem_1_wstrb,63,0);
    VL_OUT64(&m_axi_mem_1_araddr,63,0);
    VL_OUT64(&m_axi_mem_0_awaddr,63,0);
    VL_OUT64(&m_axi_mem_0_wstrb,63,0);
    VL_OUT64(&m_axi_mem_0_araddr,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vvortex_afu_shim___024unit* const __PVT____024unit;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__l3cache__DOT__mem_bus_cache_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__l2cache__DOT__mem_bus_cache_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D4_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_icache_bus_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache_mem_bus_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__per_core_dcache_bus_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__cache_mem_bus_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D4_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__arb_core_bus_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D4_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__core_bus_tmp_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D4_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_mem_bus_if__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_mem_bus_if__BRA__0__KET____DOT__mem_bus_tmp_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D4_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__mem_bus_cache_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__mem_bus_tmp_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D4_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__icache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__arb_core_bus_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_bus_tmp_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__core_bus_cache_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__mem_bus_cache_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch_if__BRA__1__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_switch_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_in_nc_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_bus_nc_arb_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_nc_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_src_if__BRA__1__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_bus_out_src_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_bus2_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_T5* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_bus_tmp_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_schedule_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule_if;
    Vvortex_afu_shim_VX_decode_sched_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode_sched_if;
    Vvortex_afu_shim_VX_issue_sched_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue_sched_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_writeback_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__writeback_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__3__KET__;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__2__KET__;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__1__KET__;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_scoreboard_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard_if;
    Vvortex_afu_shim_VX_operands_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__0__KET____DOT__uop_sequencer_if;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__1__KET____DOT__uop_sequencer_if;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__2__KET____DOT__uop_sequencer_if;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__ibuffer__DOT__g_instr_bufs__BRA__3__KET____DOT__uop_sequencer_if;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__3__KET__;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__2__KET__;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__1__KET__;
    Vvortex_afu_shim_VX_ibuffer_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__scoreboard__DOT__staging_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_operands_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__per_opc_operands_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_scoreboard_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_scoreboard_if;
    Vvortex_afu_shim_VX_writeback_if* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_slices__BRA__0__KET____DOT__issue_slice__DOT__operands__DOT__g_collectors__BRA__0__KET____DOT__opc_writeback_if;
    Vvortex_afu_shim_VX_execute_if__Tz83* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__per_block_execute_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_result_if__Tz84* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__per_block_result_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_execute_if__Tz83* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_execute_if__BRA__1__KET__;
    Vvortex_afu_shim_VX_execute_if__Tz83* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_execute_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_result_if__Tz84* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__1__KET__;
    Vvortex_afu_shim_VX_result_if__Tz84* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_blocks__BRA__0__KET____DOT__pe_result_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_result_if__Tz92* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__per_block_result_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_result_if__Tz92* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__result_rsp_if;
    Vvortex_afu_shim_VX_result_if__Tz92* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__g_blocks__BRA__0__KET____DOT__lsu_slice__DOT__result_no_rsp_if;
    Vvortex_afu_shim_VX_result_if__Tz97* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__per_block_result_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_result_if__Tz101* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__per_block_result_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_result_if__Tz101* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_result_if__BRA__1__KET__;
    Vvortex_afu_shim_VX_result_if__Tz101* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_result_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D4_T2* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__3__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D4_T2* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__2__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D4_T2* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__1__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D4_T2* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lmem_adapt_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D10_T3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_dcache_adapters__BRA__0__KET____DOT__dcache_bus_tmp_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb;
    Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb;
    Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb;
    Vvortex_afu_shim_VX_stream_arb__N4_D31_Az17_O3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__req_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb;
    Vvortex_afu_shim_VX_stream_arb__N4_D22_Az17_O3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb;
    Vvortex_afu_shim_VX_stream_arb__N4_D22_Az17_O3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb;
    Vvortex_afu_shim_VX_stream_arb__N4_D22_Az17_O3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb;
    Vvortex_afu_shim_VX_stream_arb__N4_D22_Az17_O3* const __PVT__vortex_afu_shim__DOT__afu_wrap__DOT__vortex_axi__DOT__vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multi_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vvortex_afu_shim___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vvortex_afu_shim(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vvortex_afu_shim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vvortex_afu_shim();
  private:
    VL_UNCOPYABLE(Vvortex_afu_shim);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
