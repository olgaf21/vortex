// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "Vvortex_afu_shim__pch.h"

extern "C" void dpi_imul(svLogic enable, svLogic is_signed_a, svLogic is_signed_b, int a, int b, int* resultl, int* resulth);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(CData/*0:0*/ enable, CData/*0:0*/ is_signed_a, CData/*0:0*/ is_signed_b, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &resultl, IData/*31:0*/ &resulth) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_imul_TOP____024unit\n"); );
    // Body
    resultl = 0U;
    resulth = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    svLogic is_signed_a__Vcvt;
    is_signed_a__Vcvt = is_signed_a;
    svLogic is_signed_b__Vcvt;
    is_signed_b__Vcvt = is_signed_b;
    int a__Vcvt;
    a__Vcvt = a;
    int b__Vcvt;
    b__Vcvt = b;
    int resultl__Vcvt;
    int resulth__Vcvt;
    dpi_imul(enable__Vcvt, is_signed_a__Vcvt, is_signed_b__Vcvt, a__Vcvt, b__Vcvt, &resultl__Vcvt, &resulth__Vcvt);
    resultl = (resultl__Vcvt);
    resulth = (resulth__Vcvt);
}

extern "C" void dpi_idiv(svLogic enable, svLogic is_signed, int a, int b, int* quotient, int* remainder);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(CData/*0:0*/ enable, CData/*0:0*/ is_signed, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &quotient, IData/*31:0*/ &remainder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit\n"); );
    // Body
    quotient = 0U;
    remainder = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    svLogic is_signed__Vcvt;
    is_signed__Vcvt = is_signed;
    int a__Vcvt;
    a__Vcvt = a;
    int b__Vcvt;
    b__Vcvt = b;
    int quotient__Vcvt;
    int remainder__Vcvt;
    dpi_idiv(enable__Vcvt, is_signed__Vcvt, a__Vcvt, b__Vcvt, &quotient__Vcvt, &remainder__Vcvt);
    quotient = (quotient__Vcvt);
    remainder = (remainder__Vcvt);
}

extern "C" int dpi_register();

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_register_TOP____024unit(IData/*31:0*/ &dpi_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_register_TOP____024unit\n"); );
    // Body
    int dpi_register__Vfuncrtn__Vcvt;
    dpi_register__Vfuncrtn__Vcvt = dpi_register();
    dpi_register__Vfuncrtn = (dpi_register__Vfuncrtn__Vcvt);
}

extern "C" void dpi_assert(int inst, svLogic cond, int delay);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_assert_TOP____024unit(IData/*31:0*/ inst, CData/*0:0*/ cond, IData/*31:0*/ delay) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_assert_TOP____024unit\n"); );
    // Body
    int inst__Vcvt;
    inst__Vcvt = inst;
    svLogic cond__Vcvt;
    cond__Vcvt = cond;
    int delay__Vcvt;
    delay__Vcvt = delay;
    dpi_assert(inst__Vcvt, cond__Vcvt, delay__Vcvt);
}

extern "C" void dpi_trace(int level, const char* format);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_trace_TOP____024unit(IData/*31:0*/ level, std::string format) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_trace_TOP____024unit\n"); );
    // Body
    int level__Vcvt;
    level__Vcvt = level;
    const char* format__Vcvt;
    format__Vcvt = format.c_str();
    dpi_trace(level__Vcvt, format__Vcvt);
}

extern "C" void dpi_trace_start();

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_trace_start_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_trace_start_TOP____024unit\n"); );
    // Body
    dpi_trace_start();
}

extern "C" void dpi_trace_stop();

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_trace_stop_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_trace_stop_TOP____024unit\n"); );
    // Body
    dpi_trace_stop();
}

extern "C" void dpi_fadd(svLogic enable, int dst_fmt, long long a, long long b, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fadd(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fsub(svLogic enable, int dst_fmt, long long a, long long b, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fsub(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fmul(svLogic enable, int dst_fmt, long long a, long long b, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fmul(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fmadd(svLogic enable, int dst_fmt, long long a, long long b, long long c, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long c__Vcvt;
    c__Vcvt = c;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fmadd(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, c__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fmsub(svLogic enable, int dst_fmt, long long a, long long b, long long c, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long c__Vcvt;
    c__Vcvt = c;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fmsub(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, c__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fnmadd(svLogic enable, int dst_fmt, long long a, long long b, long long c, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long c__Vcvt;
    c__Vcvt = c;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fnmadd(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, c__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fnmsub(svLogic enable, int dst_fmt, long long a, long long b, long long c, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long c__Vcvt;
    c__Vcvt = c;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fnmsub(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, c__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fdiv(svLogic enable, int dst_fmt, long long a, long long b, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fdiv(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fsqrt(svLogic enable, int dst_fmt, long long a, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fsqrt(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_ftoi(svLogic enable, int dst_fmt, int src_fmt, long long a, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    int src_fmt__Vcvt;
    src_fmt__Vcvt = src_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_ftoi(enable__Vcvt, dst_fmt__Vcvt, src_fmt__Vcvt, a__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_ftou(svLogic enable, int dst_fmt, int src_fmt, long long a, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    int src_fmt__Vcvt;
    src_fmt__Vcvt = src_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_ftou(enable__Vcvt, dst_fmt__Vcvt, src_fmt__Vcvt, a__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_itof(svLogic enable, int dst_fmt, int src_fmt, long long a, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_itof_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    int src_fmt__Vcvt;
    src_fmt__Vcvt = src_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_itof(enable__Vcvt, dst_fmt__Vcvt, src_fmt__Vcvt, a__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_utof(svLogic enable, int dst_fmt, int src_fmt, long long a, const svBitVecVal* frm, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_utof_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    int src_fmt__Vcvt;
    src_fmt__Vcvt = src_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    svBitVecVal frm__Vcvt[1];
    VL_SET_SVBV_I(3, frm__Vcvt, frm);
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_utof(enable__Vcvt, dst_fmt__Vcvt, src_fmt__Vcvt, a__Vcvt, frm__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_f2f(svLogic enable, int dst_fmt, int src_fmt, long long a, long long* result);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, QData/*63:0*/ &result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    int src_fmt__Vcvt;
    src_fmt__Vcvt = src_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long result__Vcvt;
    dpi_f2f(enable__Vcvt, dst_fmt__Vcvt, src_fmt__Vcvt, a__Vcvt, &result__Vcvt);
    result = (result__Vcvt);
}

extern "C" void dpi_fclss(svLogic enable, int dst_fmt, long long a, long long* result);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ &result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long result__Vcvt;
    dpi_fclss(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, &result__Vcvt);
    result = (result__Vcvt);
}

extern "C" void dpi_fsgnj(svLogic enable, int dst_fmt, long long a, long long b, long long* result);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long result__Vcvt;
    dpi_fsgnj(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, &result__Vcvt);
    result = (result__Vcvt);
}

extern "C" void dpi_fsgnjn(svLogic enable, int dst_fmt, long long a, long long b, long long* result);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long result__Vcvt;
    dpi_fsgnjn(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, &result__Vcvt);
    result = (result__Vcvt);
}

extern "C" void dpi_fsgnjx(svLogic enable, int dst_fmt, long long a, long long b, long long* result);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long result__Vcvt;
    dpi_fsgnjx(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, &result__Vcvt);
    result = (result__Vcvt);
}

extern "C" void dpi_flt(svLogic enable, int dst_fmt, long long a, long long b, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_flt_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_flt(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fle(svLogic enable, int dst_fmt, long long a, long long b, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fle_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fle(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_feq(svLogic enable, int dst_fmt, long long a, long long b, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_feq_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_feq(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fmin(svLogic enable, int dst_fmt, long long a, long long b, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fmin(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}

extern "C" void dpi_fmax(svLogic enable, int dst_fmt, long long a, long long b, long long* result, svBitVecVal* fflags);

void Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit\n"); );
    // Body
    result = 0ULL;
    fflags = 0U;
    svLogic enable__Vcvt;
    enable__Vcvt = enable;
    int dst_fmt__Vcvt;
    dst_fmt__Vcvt = dst_fmt;
    long long a__Vcvt;
    a__Vcvt = a;
    long long b__Vcvt;
    b__Vcvt = b;
    long long result__Vcvt;
    svBitVecVal fflags__Vcvt[1];
    dpi_fmax(enable__Vcvt, dst_fmt__Vcvt, a__Vcvt, b__Vcvt, &result__Vcvt, fflags__Vcvt);
    result = (result__Vcvt);
    VL_SET_C_SVBV(5, fflags, fflags__Vcvt + 0);
}
