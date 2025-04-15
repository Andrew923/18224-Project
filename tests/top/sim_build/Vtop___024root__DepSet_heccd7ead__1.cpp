// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*23:0*/ ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0;
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 = 0;
    IData/*23:0*/ ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0;
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 = 0;
    CData/*0:0*/ __Vdly__ChipInterface__DOT__toggle;
    __Vdly__ChipInterface__DOT__toggle = 0;
    CData/*0:0*/ __Vdly__ChipInterface__DOT__led_module__DOT__update;
    __Vdly__ChipInterface__DOT__led_module__DOT__update = 0;
    CData/*1:0*/ __Vdly__ChipInterface__DOT__led_module__DOT__frame_idx;
    __Vdly__ChipInterface__DOT__led_module__DOT__frame_idx = 0;
    SData/*8:0*/ __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__led_index;
    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__led_index = 0;
    CData/*5:0*/ __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index;
    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index = 0;
    CData/*6:0*/ __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index;
    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index = 0;
    IData/*17:0*/ __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr;
    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr = 0;
    CData/*0:0*/ __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__refresh;
    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__refresh = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px_old = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py_old = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vx;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vx = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vy;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vy = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ax;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ax = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ay;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ay = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d0;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d1;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d2;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px_old = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py_old = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px_old = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py_old = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px_old = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py_old = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy0 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy1 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx2 = 0;
    SData/*15:0*/ __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy2 = 0;
    // Body
    __Vdly__ChipInterface__DOT__toggle = vlSelf->ChipInterface__DOT__toggle;
    __Vdly__ChipInterface__DOT__led_module__DOT__frame_idx 
        = vlSelf->ChipInterface__DOT__led_module__DOT__frame_idx;
    __Vdly__ChipInterface__DOT__led_module__DOT__update 
        = vlSelf->ChipInterface__DOT__led_module__DOT__update;
    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr 
        = vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr;
    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index 
        = vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index;
    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index 
        = vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index;
    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__led_index 
        = vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index;
    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__refresh 
        = vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__refresh;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py_old 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px_old 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py_old 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px_old 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py_old 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px_old 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ay 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ay;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ax 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ax;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py_old 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px_old 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px_old;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy2;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx2 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx2;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy1;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx1 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx1;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy0;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx0 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx0;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vy 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vy;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py;
    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py;
    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px;
    __Vdly__ChipInterface__DOT__toggle = (1U & (~ (IData)(vlSelf->ChipInterface__DOT__toggle)));
    if (vlSelf->ChipInterface__DOT__toggle) {
        vlSelf->ChipInterface__DOT__clk10 = (1U & (~ (IData)(vlSelf->ChipInterface__DOT__clk10)));
    }
    if (vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear) {
        vlSelf->ChipInterface__DOT__simulator__DOT__wait_time__DOT__Q = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__counter__DOT__Q = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__counter__DOT__Q = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__counter__DOT__Q = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__counter__DOT__Q = 0U;
    } else {
        vlSelf->ChipInterface__DOT__simulator__DOT__wait_time__DOT__Q 
            = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__wait_time__DOT__Q)));
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__counter__DOT__Q 
            = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__counter__DOT__Q)));
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__counter__DOT__Q 
            = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__counter__DOT__Q)));
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__counter__DOT__Q 
            = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__counter__DOT__Q)));
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__counter__DOT__Q 
            = (0x7fffU & ((IData)(1U) + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__counter__DOT__Q)));
    }
    __Vdly__ChipInterface__DOT__led_module__DOT__update = 0U;
    if (((IData)(vlSelf->ChipInterface__DOT__reset) 
         | (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__done))) {
        __Vdly__ChipInterface__DOT__led_module__DOT__frame_idx = 0U;
    } else if (((1U > (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__frame_idx)) 
                & (~ (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__busy)))) {
        __Vdly__ChipInterface__DOT__led_module__DOT__update = 1U;
    }
    if (vlSelf->ChipInterface__DOT__led_module__DOT__update) {
        __Vdly__ChipInterface__DOT__led_module__DOT__frame_idx 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__frame_idx)));
    }
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__o_out = 0U;
    if (vlSelf->ChipInterface__DOT__reset) {
        vlSelf->ChipInterface__DOT__simulator__DOT__matrix[0U] = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__matrix[1U] = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__matrix[2U] = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__matrix[3U] = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__matrix[4U] = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__matrix[5U] = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__matrix[6U] = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__matrix[7U] = 0U;
        __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__led_index = 0U;
        __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index = 0U;
        __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index = 0U;
        __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr = 0U;
        __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__refresh = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px = 0xa0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py = 0xa0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px_old = 0xa0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py_old = 0xa0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px = 0x60U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py = 0xa0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px_old = 0x60U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py_old = 0xa0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px = 0x80U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py = 0x60U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px_old = 0x80U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py_old = 0x60U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px = 0x80U;
        __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py = 0x80U;
        __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px_old = 0x80U;
        __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py_old = 0x80U;
        __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vx = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vy = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ax = 0U;
        __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ay = 0U;
    } else {
        if ((0x400U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__wait_idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__matrix[0U] 
                = vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[0U];
            vlSelf->ChipInterface__DOT__simulator__DOT__matrix[1U] 
                = vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[1U];
            vlSelf->ChipInterface__DOT__simulator__DOT__matrix[2U] 
                = vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[2U];
            vlSelf->ChipInterface__DOT__simulator__DOT__matrix[3U] 
                = vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[3U];
            vlSelf->ChipInterface__DOT__simulator__DOT__matrix[4U] 
                = vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[4U];
            vlSelf->ChipInterface__DOT__simulator__DOT__matrix[5U] 
                = vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[5U];
            vlSelf->ChipInterface__DOT__simulator__DOT__matrix[6U] 
                = vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[6U];
            vlSelf->ChipInterface__DOT__simulator__DOT__matrix[7U] 
                = vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[7U];
        }
        if (vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__refresh) {
            if ((1U < vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr)) {
                __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr 
                    = (0x3ffffU & (vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr 
                                   - (IData)(1U)));
                vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__o_out = 0U;
            } else if ((1U == vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr)) {
                __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__refresh = 0U;
                __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr = 0U;
                __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__led_index = 0U;
                __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index = 0U;
                __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index = 0U;
            } else {
                __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index)));
                if ((0x19U == ((IData)(1U) + (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index)))) {
                    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index = 0U;
                    __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index)));
                    if ((0x18U == ((IData)(1U) + (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index)))) {
                        __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index = 0U;
                        if ((0x100U == ((IData)(1U) 
                                        + (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)))) {
                            __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__led_index = 0U;
                            __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr = 0xfa0U;
                        }
                        __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__led_index 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)));
                    }
                }
                vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__o_out 
                    = ((IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index) 
                       < ((IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__cur_bit_dat)
                           ? 0x10U : 8U));
            }
        } else if (vlSelf->ChipInterface__DOT__led_module__DOT__update) {
            __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__refresh = 1U;
            __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr = 0U;
            __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__led_index = 0U;
            __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index = 0U;
            __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index = 0U;
            VL_ASSIGN_W(6144,vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__data_int, vlSelf->ChipInterface__DOT__led_module__DOT__data);
        }
        if (((((((((0x12cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)) 
                   | (0x12dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                  | (0x12eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                 | (0x12fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                | (0x130U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
               | (0x131U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
              | (0x132U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
             | (0x133U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)))) {
            if ((0x12cU != (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if ((0x12dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__force_x), 3U));
                } else if ((0x12eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__force_y), 3U));
                } else if ((0x12fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px 
                        = (0xffffU & ((VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px), 1U) 
                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px_old)) 
                                      + VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax), 2U)));
                } else if ((0x130U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py 
                        = (0xffffU & ((VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py), 1U) 
                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py_old)) 
                                      + VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay), 2U)));
                } else if ((0x131U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px_old 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px;
                } else if ((0x132U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py_old 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py;
                } else {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px) 
                                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px_old))), 1U));
                }
            }
        } else if (((((((((0x134U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)) 
                          | (0x135U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                         | (0x136U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                        | (0x137U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                       | (0x138U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                      | (0x139U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                     | (0x13aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                    | (0x13bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)))) {
            if ((0x134U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy 
                    = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                               (0xffffU 
                                                & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py) 
                                                   - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py_old))), 1U));
            } else if ((0x135U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p0x));
            } else if ((0x136U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p0y));
            } else if ((0x137U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0)));
            } else if ((0x138U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0;
                }
            } else if ((0x139U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0;
                }
            } else if ((0x13aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__displace0 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)) 
                                      - (IData)(0x47U)));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)))) {
                vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_x0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p0vx));
            }
        } else if (((((((((0x13cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)) 
                          | (0x13dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                         | (0x13eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                        | (0x13fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                       | (0x140U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                      | (0x141U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                     | (0x142U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                    | (0x143U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)))) {
            if ((0x13cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_y0 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p0vy));
                }
            } else if ((0x13dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx0 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb)));
                }
            } else if ((0x13eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy0 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb)));
                }
            } else if ((0x13fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__damp0 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx0) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy0))), 2U));
                }
            } else if ((0x140U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb))));
                }
            } else if ((0x141U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb))));
                }
            } else if ((0x142U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p1x));
            } else {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p1y));
            }
        } else if (((((((((0x144U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)) 
                          | (0x145U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                         | (0x146U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                        | (0x147U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                       | (0x148U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                      | (0x149U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                     | (0x14aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                    | (0x14bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)))) {
            if ((0x144U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1)));
            } else if ((0x145U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1;
                }
            } else if ((0x146U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1;
                }
            } else if ((0x147U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__displace1 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)) 
                                      - (IData)(0x47U)));
                }
            } else if ((0x148U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_x1 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p1vx));
                }
            } else if ((0x149U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_y1 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p1vy));
                }
            } else if ((0x14aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx1 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb)));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy1 
                    = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb)));
            }
        } else if (((((((((0x14cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)) 
                          | (0x14dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                         | (0x14eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                        | (0x14fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                       | (0x150U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                      | (0x151U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                     | (0x152U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                    | (0x153U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)))) {
            if ((0x14cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__damp1 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx1) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy1))), 2U));
                }
            } else if ((0x14dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb))));
                }
            } else if ((0x14eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb))));
                }
            } else if ((0x14fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__cx));
            } else if ((0x150U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__cy));
            } else if ((0x151U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2)));
            } else if ((0x152U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2;
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2 
                    = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2;
            }
        } else if (((((((((0x154U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)) 
                          | (0x155U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                         | (0x156U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                        | (0x157U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                       | (0x158U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                      | (0x159U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                     | (0x15aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                    | (0x15bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)))) {
            if ((0x154U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__displace2 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)) 
                                      - (IData)(0x20U)));
                }
            } else if ((0x155U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_x2 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__cvx));
                }
            } else if ((0x156U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_y2 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__cvy));
                }
            } else if ((0x157U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx2 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb)));
                }
            } else if ((0x158U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy2 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb)));
                }
            } else if ((0x159U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__damp2 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx2) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy2))), 2U));
                }
            } else if ((0x15aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb))));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay) 
                                  + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb))));
            }
        } else if ((0x15cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx), 1U)));
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px = 0U;
            }
        } else if ((0x15dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            if (VL_LTES_III(32, 0x100U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx), 1U)));
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px = 0xffU;
            }
        } else if ((0x15eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py = 0U;
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx), 1U)));
            }
        } else if ((0x15fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            if (VL_LTES_III(32, 0x100U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py = 0xffU;
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx), 1U)));
            }
        }
        if (((((((((0xc8U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)) 
                   | (0xc9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                  | (0xcaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                 | (0xcbU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                | (0xccU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
               | (0xcdU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
              | (0xceU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
             | (0xcfU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)))) {
            if ((0xc8U != (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if ((0xc9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__force_x), 3U));
                } else if ((0xcaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__force_y), 3U));
                } else if ((0xcbU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px 
                        = (0xffffU & ((VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px), 1U) 
                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px_old)) 
                                      + VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax), 2U)));
                } else if ((0xccU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py 
                        = (0xffffU & ((VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py), 1U) 
                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py_old)) 
                                      + VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay), 2U)));
                } else if ((0xcdU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px_old 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px;
                } else if ((0xceU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py_old 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py;
                } else {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px) 
                                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px_old))), 1U));
                }
            }
        } else if (((((((((0xd0U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)) 
                          | (0xd1U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                         | (0xd2U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                        | (0xd3U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                       | (0xd4U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                      | (0xd5U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                     | (0xd6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                    | (0xd7U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)))) {
            if ((0xd0U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy 
                    = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                               (0xffffU 
                                                & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py) 
                                                   - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py_old))), 1U));
            } else if ((0xd1U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p0x));
            } else if ((0xd2U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p0y));
            } else if ((0xd3U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0)));
            } else if ((0xd4U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0;
                }
            } else if ((0xd5U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0;
                }
            } else if ((0xd6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__displace0 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)) 
                                      - (IData)(0x47U)));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)))) {
                vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_x0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p0vx));
            }
        } else if (((((((((0xd8U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)) 
                          | (0xd9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                         | (0xdaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                        | (0xdbU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                       | (0xdcU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                      | (0xddU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                     | (0xdeU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                    | (0xdfU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)))) {
            if ((0xd8U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_y0 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p0vy));
                }
            } else if ((0xd9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx0 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb)));
                }
            } else if ((0xdaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy0 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb)));
                }
            } else if ((0xdbU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__damp0 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx0) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy0))), 2U));
                }
            } else if ((0xdcU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb))));
                }
            } else if ((0xddU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb))));
                }
            } else if ((0xdeU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__cx));
            } else {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__cy));
            }
        } else if (((((((((0xe0U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)) 
                          | (0xe1U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                         | (0xe2U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                        | (0xe3U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                       | (0xe4U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                      | (0xe5U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                     | (0xe6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                    | (0xe7U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)))) {
            if ((0xe0U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1)));
            } else if ((0xe1U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1;
                }
            } else if ((0xe2U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1;
                }
            } else if ((0xe3U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__displace1 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)) 
                                      - (IData)(0x20U)));
                }
            } else if ((0xe4U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_x1 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__cvx));
                }
            } else if ((0xe5U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_y1 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__cvy));
                }
            } else if ((0xe6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx1 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb)));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy1 
                    = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb)));
            }
        } else if (((((((((0xe8U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)) 
                          | (0xe9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                         | (0xeaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                        | (0xebU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                       | (0xecU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                      | (0xedU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                     | (0xeeU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                    | (0xefU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)))) {
            if ((0xe8U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__damp1 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx1) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy1))), 2U));
                }
            } else if ((0xe9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb))));
                }
            } else if ((0xeaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb))));
                }
            } else if ((0xebU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p2x));
            } else if ((0xecU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p2y));
            } else if ((0xedU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2)));
            } else if ((0xeeU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2;
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2 
                    = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2;
            }
        } else if (((((((((0xf0U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)) 
                          | (0xf1U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                         | (0xf2U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                        | (0xf3U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                       | (0xf4U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                      | (0xf5U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                     | (0xf6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                    | (0xf7U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)))) {
            if ((0xf0U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__displace2 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)) 
                                      - (IData)(0x47U)));
                }
            } else if ((0xf1U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_x2 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p2vx));
                }
            } else if ((0xf2U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_y2 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p2vy));
                }
            } else if ((0xf3U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx2 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb)));
                }
            } else if ((0xf4U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy2 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb)));
                }
            } else if ((0xf5U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__damp2 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx2) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy2))), 2U));
                }
            } else if ((0xf6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb))));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay) 
                                  + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb))));
            }
        } else if ((0xf8U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx), 1U)));
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px = 0U;
            }
        } else if ((0xf9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            if (VL_LTES_III(32, 0x100U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx), 1U)));
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px = 0xffU;
            }
        } else if ((0xfaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py = 0U;
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx), 1U)));
            }
        } else if ((0xfbU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            if (VL_LTES_III(32, 0x100U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py = 0xffU;
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx), 1U)));
            }
        }
        if (((((((((0x64U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)) 
                   | (0x65U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                  | (0x66U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                 | (0x67U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                | (0x68U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
               | (0x69U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
              | (0x6aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
             | (0x6bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)))) {
            if ((0x64U != (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if ((0x65U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__force_x), 3U));
                } else if ((0x66U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__force_y), 3U));
                } else if ((0x67U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px 
                        = (0xffffU & ((VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px), 1U) 
                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px_old)) 
                                      + VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax), 2U)));
                } else if ((0x68U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py 
                        = (0xffffU & ((VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py), 1U) 
                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py_old)) 
                                      + VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay), 2U)));
                } else if ((0x69U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px_old 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px;
                } else if ((0x6aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py_old 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py;
                } else {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px) 
                                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px_old))), 1U));
                }
            }
        } else if (((((((((0x6cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)) 
                          | (0x6dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                         | (0x6eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                        | (0x6fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                       | (0x70U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                      | (0x71U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                     | (0x72U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                    | (0x73U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)))) {
            if ((0x6cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy 
                    = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                               (0xffffU 
                                                & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py) 
                                                   - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py_old))), 1U));
            } else if ((0x6dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__cx));
            } else if ((0x6eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__cy));
            } else if ((0x6fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0)));
            } else if ((0x70U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0;
                }
            } else if ((0x71U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0;
                }
            } else if ((0x72U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__displace0 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)) 
                                      - (IData)(0x20U)));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)))) {
                vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_x0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__cvx));
            }
        } else if (((((((((0x74U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)) 
                          | (0x75U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                         | (0x76U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                        | (0x77U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                       | (0x78U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                      | (0x79U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                     | (0x7aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                    | (0x7bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)))) {
            if ((0x74U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_y0 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__cvy));
                }
            } else if ((0x75U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx0 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb)));
                }
            } else if ((0x76U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy0 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb)));
                }
            } else if ((0x77U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__damp0 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx0) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy0))), 2U));
                }
            } else if ((0x78U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb))));
                }
            } else if ((0x79U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb))));
                }
            } else if ((0x7aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p1x));
            } else {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p1y));
            }
        } else if (((((((((0x7cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)) 
                          | (0x7dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                         | (0x7eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                        | (0x7fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                       | (0x80U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                      | (0x81U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                     | (0x82U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                    | (0x83U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)))) {
            if ((0x7cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1)));
            } else if ((0x7dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1;
                }
            } else if ((0x7eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1;
                }
            } else if ((0x7fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__displace1 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)) 
                                      - (IData)(0x47U)));
                }
            } else if ((0x80U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_x1 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p1vx));
                }
            } else if ((0x81U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_y1 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p1vy));
                }
            } else if ((0x82U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx1 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb)));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy1 
                    = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb)));
            }
        } else if (((((((((0x84U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)) 
                          | (0x85U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                         | (0x86U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                        | (0x87U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                       | (0x88U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                      | (0x89U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                     | (0x8aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                    | (0x8bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)))) {
            if ((0x84U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__damp1 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx1) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy1))), 2U));
                }
            } else if ((0x85U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb))));
                }
            } else if ((0x86U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb))));
                }
            } else if ((0x87U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p2x));
            } else if ((0x88U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p2y));
            } else if ((0x89U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2)));
            } else if ((0x8aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2;
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2 
                    = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2;
            }
        } else if (((((((((0x8cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)) 
                          | (0x8dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                         | (0x8eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                        | (0x8fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                       | (0x90U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                      | (0x91U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                     | (0x92U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                    | (0x93U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)))) {
            if ((0x8cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__displace2 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)) 
                                      - (IData)(0x47U)));
                }
            } else if ((0x8dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_x2 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p2vx));
                }
            } else if ((0x8eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_y2 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p2vy));
                }
            } else if ((0x8fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx2 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb)));
                }
            } else if ((0x90U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy2 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb)));
                }
            } else if ((0x91U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__damp2 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx2) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy2))), 2U));
                }
            } else if ((0x92U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb))));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay) 
                                  + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb))));
            }
        } else if ((0x94U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx), 1U)));
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px = 0U;
            }
        } else if ((0x95U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            if (VL_LTES_III(32, 0x100U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx), 1U)));
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px = 0xffU;
            }
        } else if ((0x96U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py = 0U;
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx), 1U)));
            }
        } else if ((0x97U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            if (VL_LTES_III(32, 0x100U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py = 0xffU;
                __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx), 1U)));
            }
        }
        if (((((((((0U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)) 
                   | (1U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                  | (2U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                 | (3U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                | (4U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
               | (5U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
              | (6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
             | (7U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)))) {
            if ((0U != (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if ((1U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ax 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__force_x), 4U));
                } else if ((2U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ay 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__force_y), 4U));
                } else if ((3U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px 
                        = (0xffffU & ((VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px), 1U) 
                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px_old)) 
                                      + VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ax), 2U)));
                } else if ((4U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py 
                        = (0xffffU & ((VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py), 1U) 
                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py_old)) 
                                      + VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ay), 2U)));
                } else if ((5U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px_old 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px;
                } else if ((6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py_old 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py;
                } else {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vx 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px) 
                                                       - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px_old))), 1U));
                }
            }
        } else if (((((((((8U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)) 
                          | (9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                         | (0xaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                        | (0xbU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                       | (0xcU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                      | (0xdU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                     | (0xeU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                    | (0xfU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)))) {
            if ((8U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vy 
                    = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                               (0xffffU 
                                                & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py) 
                                                   - (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py_old))), 1U));
            } else if ((9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p0x));
            } else if ((0xaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p0y));
            } else if ((0xbU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx0) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy0)));
            } else if ((0xcU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx0 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx0;
                }
            } else if ((0xdU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy0 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy0;
                }
            } else if ((0xeU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__displace0 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)) 
                                      - (IData)(0x20U)));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)))) {
                vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_x0 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p0vx));
            }
        } else if (((((((((0x10U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)) 
                          | (0x11U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                         | (0x12U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                        | (0x13U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                       | (0x14U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                      | (0x15U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                     | (0x16U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                    | (0x17U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)))) {
            if ((0x10U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_y0 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p0vy));
                }
            } else if ((0x11U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx0 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb)));
                }
            } else if ((0x12U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy0 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb)));
                }
            } else if ((0x13U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__damp0 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampx0) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampy0))), 2U));
                }
            } else if ((0x14U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb))));
                }
            } else if ((0x15U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ay 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ay) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb))));
                }
            } else if ((0x16U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p1x));
            } else {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p1y));
            }
        } else if (((((((((0x18U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)) 
                          | (0x19U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                         | (0x1aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                        | (0x1bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                       | (0x1cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                      | (0x1dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                     | (0x1eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                    | (0x1fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)))) {
            if ((0x18U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d1 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx1) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy1)));
            } else if ((0x19U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx1 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx1;
                }
            } else if ((0x1aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy1 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy1;
                }
            } else if ((0x1bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__displace1 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)) 
                                      - (IData)(0x20U)));
                }
            } else if ((0x1cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_x1 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p1vx));
                }
            } else if ((0x1dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_y1 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p1vy));
                }
            } else if ((0x1eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx1 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb)));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy1 
                    = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb)));
            }
        } else if (((((((((0x20U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)) 
                          | (0x21U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                         | (0x22U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                        | (0x23U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                       | (0x24U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                      | (0x25U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                     | (0x26U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                    | (0x27U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)))) {
            if ((0x20U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__damp1 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampx1) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampy1))), 2U));
                }
            } else if ((0x21U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb))));
                }
            } else if ((0x22U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ay 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ay) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb))));
                }
            } else if ((0x23U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p2x));
            } else if ((0x24U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py) 
                                  - vlSelf->ChipInterface__DOT__simulator__DOT__p2y));
            } else if ((0x25U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d2 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx2) 
                                  + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy2)));
            } else if ((0x26U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx2 
                        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx2;
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy2 
                    = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy2;
            }
        } else if (((((((((0x28U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)) 
                          | (0x29U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                         | (0x2aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                        | (0x2bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                       | (0x2cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                      | (0x2dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                     | (0x2eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                    | (0x2fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)))) {
            if ((0x28U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__displace2 
                        = (0xffffU & (VL_EXTENDS_II(16,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)) 
                                      - (IData)(0x20U)));
                }
            } else if ((0x29U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_x2 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p2vx));
                }
            } else if ((0x2aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_y2 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vy) 
                                      - vlSelf->ChipInterface__DOT__simulator__DOT__p2vy));
                }
            } else if ((0x2bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx2 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb)));
                }
            } else if ((0x2cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy2 
                        = (0xffffU & VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb)));
                }
            } else if ((0x2dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)))) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__damp2 
                        = (0xffffU & VL_SHIFTR_III(16,16,32, 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampx2) 
                                                       + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampy2))), 2U));
                }
            } else if ((0x2eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)))) {
                    __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ax 
                        = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ax) 
                                      + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb))));
                }
            } else if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ay 
                    = (0xffffU & ((IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ay) 
                                  + VL_MULS_III(16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa), (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb))));
            }
        } else if ((0x30U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vx 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx), 1U)));
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px = 0U;
            }
        } else if ((0x31U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            if (VL_LTES_III(32, 0x100U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vx 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx), 1U)));
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px = 0xffU;
            }
        } else if ((0x32U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py = 0U;
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vy 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx), 1U)));
            }
        } else if ((0x33U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            if (VL_LTES_III(32, 0x100U, VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py)))) {
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py = 0xffU;
                __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vy 
                    = (0xffffU & (- VL_SHIFTR_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx), 1U)));
            }
        }
    }
    vlSelf->ChipInterface__DOT__toggle = __Vdly__ChipInterface__DOT__toggle;
    vlSelf->ChipInterface__DOT__led_module__DOT__frame_idx 
        = __Vdly__ChipInterface__DOT__led_module__DOT__frame_idx;
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index 
        = __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__current_bit_index;
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr 
        = __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__latch_ctr;
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index 
        = __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index;
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index 
        = __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__led_index;
    vlSelf->ChipInterface__DOT__led_module__DOT__update 
        = __Vdly__ChipInterface__DOT__led_module__DOT__update;
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__refresh 
        = __Vdly__ChipInterface__DOT__led_module__DOT__ws__DOT__refresh;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px_old 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px_old;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py_old 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py_old;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ax;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__ay;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__d2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampx2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dampy2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px_old 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px_old;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py_old 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py_old;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ax;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__ay;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__d2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampx2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dampy2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px_old 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px_old;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py_old 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py_old;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ax;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__ay;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__d2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampx2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dampy2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py 
        = __Vdly__ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px_old 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px_old;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py_old 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py_old;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ax 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ax;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__ay 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__ay;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d0;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampx0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx0;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampy0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy0;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d1;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampx1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx1;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampy1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy1;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__d2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__d2;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampx2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampx2;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dampy2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dampy2;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx0;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy0 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy0;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx1;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy1 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy1;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dx2;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy2 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__dy2;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vy 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__vy;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py 
        = __Vdly__ChipInterface__DOT__simulator__DOT__center__DOT__py;
    vlSelf->ChipInterface__DOT__sensor__DOT__clk = vlSelf->ChipInterface__DOT__clk10;
    vlSelf->ChipInterface__DOT__simulator__DOT__wait_idx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__wait_time__DOT__Q;
    vlSelf->ChipInterface__DOT__matrix[0U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[0U];
    vlSelf->ChipInterface__DOT__matrix[1U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[1U];
    vlSelf->ChipInterface__DOT__matrix[2U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[2U];
    vlSelf->ChipInterface__DOT__matrix[3U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[3U];
    vlSelf->ChipInterface__DOT__matrix[4U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[4U];
    vlSelf->ChipInterface__DOT__matrix[5U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[5U];
    vlSelf->ChipInterface__DOT__matrix[6U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[6U];
    vlSelf->ChipInterface__DOT__matrix[7U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[7U];
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__update 
        = vlSelf->ChipInterface__DOT__led_module__DOT__update;
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__cur_led_dat 
        = ((((0x17ffU >= (0x1fffU & ((IData)(8U) + 
                                     ((IData)(0x18U) 
                                      * ((IData)(0xffU) 
                                         - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index))))))
              ? (0xffU & (((0U == (0x1fU & ((IData)(8U) 
                                            + ((IData)(0x18U) 
                                               * ((IData)(0xffU) 
                                                  - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index))))))
                            ? 0U : (vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__data_int[
                                    (((IData)(7U) + 
                                      (0x1fffU & ((IData)(8U) 
                                                  + 
                                                  ((IData)(0x18U) 
                                                   * 
                                                   ((IData)(0xffU) 
                                                    - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     ((IData)(0x18U) 
                                                      * 
                                                      ((IData)(0xffU) 
                                                       - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)))))))) 
                          | (vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__data_int[
                             (0xffU & (((IData)(8U) 
                                        + ((IData)(0x18U) 
                                           * ((IData)(0xffU) 
                                              - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)))) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(8U) 
                                       + ((IData)(0x18U) 
                                          * ((IData)(0xffU) 
                                             - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index))))))))
              : 0U) << 0x10U) | ((((0x17ffU >= (0x1fffU 
                                                & ((IData)(0x10U) 
                                                   + 
                                                   ((IData)(0x18U) 
                                                    * 
                                                    ((IData)(0xffU) 
                                                     - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index))))))
                                    ? (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x10U) 
                                                      + 
                                                      ((IData)(0x18U) 
                                                       * 
                                                       ((IData)(0xffU) 
                                                        - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index))))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__data_int[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x10U) 
                                                        + 
                                                        ((IData)(0x18U) 
                                                         * 
                                                         ((IData)(0xffU) 
                                                          - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       ((IData)(0x18U) 
                                                        * 
                                                        ((IData)(0xffU) 
                                                         - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)))))))) 
                                                | (vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__data_int[
                                                   (0xffU 
                                                    & (((IData)(0x10U) 
                                                        + 
                                                        ((IData)(0x18U) 
                                                         * 
                                                         ((IData)(0xffU) 
                                                          - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       ((IData)(0x18U) 
                                                        * 
                                                        ((IData)(0xffU) 
                                                         - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index))))))))
                                    : 0U) << 8U) | 
                                 ((0x17ffU >= (0x1fffU 
                                               & ((IData)(0x18U) 
                                                  * 
                                                  ((IData)(0xffU) 
                                                   - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)))))
                                   ? (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x18U) 
                                                     * 
                                                     ((IData)(0xffU) 
                                                      - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__data_int[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x18U) 
                                                       * 
                                                       ((IData)(0xffU) 
                                                        - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * 
                                                      ((IData)(0xffU) 
                                                       - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index))))))) 
                                               | (vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__data_int[
                                                  (0xffU 
                                                   & (((IData)(0x18U) 
                                                       * 
                                                       ((IData)(0xffU) 
                                                        - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index))) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x18U) 
                                                      * 
                                                      ((IData)(0xffU) 
                                                       - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__led_index)))))))
                                   : 0U)));
    vlSelf->led_data = vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__o_out;
    vlSelf->ChipInterface__DOT__led_module__DOT__done 
        = ((~ ((IData)(vlSelf->ChipInterface__DOT__led_module__DOT__update) 
               | (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__refresh))) 
           & (1U <= (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__frame_idx)));
    vlSelf->ChipInterface__DOT__led_module__DOT__busy 
        = vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__refresh;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vel_x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vel_y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy;
    if ((1U & (~ (IData)(vlSelf->ChipInterface__DOT__reset)))) {
        if (((((((((0x12cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)) 
                   | (0x12dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                  | (0x12eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                 | (0x12fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
                | (0x130U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
               | (0x131U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
              | (0x132U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
             | (0x133U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)))) {
            if ((0x12cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
                if (vlSelf->btn_left) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__force_x = 0xffe0U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__force_y = 0U;
                } else if (vlSelf->btn_right) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__force_x = 0x20U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__force_y = 0U;
                } else {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__force_x = 0U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__force_y 
                        = ((IData)(vlSelf->btn_up) ? 0x20U
                            : ((IData)(vlSelf->btn_down)
                                ? 0xffe0U : 0U));
                }
            }
        }
        if (((((((((0xc8U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)) 
                   | (0xc9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                  | (0xcaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                 | (0xcbU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
                | (0xccU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
               | (0xcdU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
              | (0xceU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
             | (0xcfU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)))) {
            if ((0xc8U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
                if (vlSelf->btn_left) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__force_x = 0xffe0U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__force_y = 0U;
                } else if (vlSelf->btn_right) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__force_x = 0x20U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__force_y = 0U;
                } else {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__force_x = 0U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__force_y 
                        = ((IData)(vlSelf->btn_up) ? 0x20U
                            : ((IData)(vlSelf->btn_down)
                                ? 0xffe0U : 0U));
                }
            }
        }
        if (((((((((0x64U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)) 
                   | (0x65U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                  | (0x66U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                 | (0x67U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
                | (0x68U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
               | (0x69U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
              | (0x6aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
             | (0x6bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)))) {
            if ((0x64U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
                if (vlSelf->btn_left) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__force_x = 0xffe0U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__force_y = 0U;
                } else if (vlSelf->btn_right) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__force_x = 0x20U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__force_y = 0U;
                } else {
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__force_x = 0U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__force_y 
                        = ((IData)(vlSelf->btn_up) ? 0x20U
                            : ((IData)(vlSelf->btn_down)
                                ? 0xffe0U : 0U));
                }
            }
        }
        if (((((((((0U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)) 
                   | (1U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                  | (2U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                 | (3U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
                | (4U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
               | (5U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
              | (6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
             | (7U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)))) {
            if ((0U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
                if (vlSelf->btn_left) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__force_x = 0xffe0U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__force_y = 0U;
                } else if (vlSelf->btn_right) {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__force_x = 0x20U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__force_y = 0U;
                } else {
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__force_x = 0U;
                    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__force_y 
                        = ((IData)(vlSelf->btn_up) ? 0x20U
                            : ((IData)(vlSelf->btn_down)
                                ? 0xffe0U : 0U));
                }
            }
        }
    }
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vel_x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vel_y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vel_x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vel_y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vel_x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vel_y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vy;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__clk 
        = vlSelf->ChipInterface__DOT__sensor__DOT__clk;
    vlSelf->ChipInterface__DOT__sensor__DOT__wait_time__DOT__clock 
        = vlSelf->ChipInterface__DOT__sensor__DOT__clk;
    vlSelf->ChipInterface__DOT__led_module__DOT__matrix[0U] 
        = vlSelf->ChipInterface__DOT__matrix[0U];
    vlSelf->ChipInterface__DOT__led_module__DOT__matrix[1U] 
        = vlSelf->ChipInterface__DOT__matrix[1U];
    vlSelf->ChipInterface__DOT__led_module__DOT__matrix[2U] 
        = vlSelf->ChipInterface__DOT__matrix[2U];
    vlSelf->ChipInterface__DOT__led_module__DOT__matrix[3U] 
        = vlSelf->ChipInterface__DOT__matrix[3U];
    vlSelf->ChipInterface__DOT__led_module__DOT__matrix[4U] 
        = vlSelf->ChipInterface__DOT__matrix[4U];
    vlSelf->ChipInterface__DOT__led_module__DOT__matrix[5U] 
        = vlSelf->ChipInterface__DOT__matrix[5U];
    vlSelf->ChipInterface__DOT__led_module__DOT__matrix[6U] 
        = vlSelf->ChipInterface__DOT__matrix[6U];
    vlSelf->ChipInterface__DOT__led_module__DOT__matrix[7U] 
        = vlSelf->ChipInterface__DOT__matrix[7U];
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb4U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb4U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb4U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb4U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb5U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb5U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb5U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb5U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb6U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb6U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb6U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb6U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb7U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb7U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb7U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb7U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb8U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb8U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb8U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb8U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb9U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb9U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb9U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb9U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbaU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbaU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbaU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbaU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbbU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbbU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbbU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbbU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbcU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbcU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbcU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbcU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbdU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbdU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbdU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbdU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbeU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbeU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbeU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbeU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbfU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbfU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbfU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbfU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb3U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb3U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb2U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb2U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb3U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb3U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb1U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb1U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb2U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb2U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb1U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb1U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb0U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb0U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xafU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xafU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb0U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xb0U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaeU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaeU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xafU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xafU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaeU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaeU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xadU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xadU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xacU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xacU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xadU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xadU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xabU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xabU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xacU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xacU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xabU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xabU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaaU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaaU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa9U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa9U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaaU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaaU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa8U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa8U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa9U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa9U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa8U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa8U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9cU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9cU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9cU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9dU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9dU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9eU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9eU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9fU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9fU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9fU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa0U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa0U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa0U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa0U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa1U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa1U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa1U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa1U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa2U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa2U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa2U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa2U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa3U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa3U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa3U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa3U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa4U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa4U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa4U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa4U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa5U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa5U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa5U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa5U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa6U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa6U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa6U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa6U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa7U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa7U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa7U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xa7U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9bU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9aU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9bU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x99U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x99U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9aU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x9aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x99U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x99U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x98U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x98U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x97U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x97U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x98U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x98U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x96U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x96U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x97U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x97U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x96U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x96U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x95U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x95U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x94U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x94U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x95U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x95U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x93U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x93U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x94U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x94U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x93U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x93U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x92U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x92U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x91U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x91U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x92U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x92U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x90U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x90U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x91U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x91U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x90U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x90U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x84U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x84U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x84U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x84U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x85U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x85U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x85U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x85U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x86U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x86U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x86U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x86U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x87U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x87U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x87U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x87U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x88U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x88U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x88U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x88U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x89U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x89U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x89U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x89U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8aU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8aU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8aU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8bU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8bU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8cU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8cU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8dU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8dU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8dU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8eU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8eU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8fU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8fU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x8fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x83U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x83U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x82U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x82U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x83U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x83U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x81U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x81U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x82U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x82U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x81U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x81U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x80U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x80U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7fU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x80U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x80U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7eU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7fU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7eU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7eU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7dU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7cU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7dU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7bU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7cU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7bU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7bU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7aU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x79U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x79U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7aU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x7aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x78U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x78U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x79U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x79U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x78U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x78U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6cU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6cU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6cU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6dU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6dU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6eU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6eU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6fU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6fU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6fU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x70U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x70U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x70U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x70U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x71U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x71U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x71U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x71U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x72U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x72U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x72U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x72U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x73U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x73U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x73U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x73U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x74U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x74U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x74U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x74U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x75U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x75U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x75U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x75U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x76U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x76U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x76U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x76U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x77U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x77U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x77U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x77U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6bU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6aU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6bU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x69U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x69U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6aU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x6aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x69U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x69U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x68U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x68U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x67U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x67U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x68U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x68U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x66U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x66U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x67U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x67U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x66U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x66U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x65U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x65U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x64U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x64U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x65U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x65U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x63U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x63U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x64U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x64U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x63U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x63U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x62U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x62U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x61U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x61U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x62U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x62U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x60U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x60U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x61U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x61U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x60U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x60U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x54U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x54U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x54U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x54U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x55U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x55U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x55U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x55U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x56U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x56U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x56U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x56U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x57U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x57U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x57U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x57U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x58U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x58U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x58U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x58U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x59U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x59U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x59U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x59U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5aU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5aU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5aU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5bU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5bU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5cU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5cU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5dU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5dU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5dU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5eU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5eU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5fU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5fU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x5fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x53U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x53U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x52U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x52U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x53U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x53U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x51U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x51U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x52U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x52U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x51U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x51U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x50U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x50U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4fU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x50U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x50U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4eU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4fU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4eU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4eU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4dU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4cU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4dU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4bU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4cU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4bU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4bU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4aU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x49U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x49U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4aU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x4aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x48U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x48U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x49U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x49U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x48U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x48U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3cU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3cU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3cU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3dU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3dU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3eU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3eU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3fU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3fU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3fU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x40U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x40U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x40U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x40U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x41U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x41U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x41U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x41U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x42U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x42U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x42U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x42U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x43U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x43U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x43U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x43U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x44U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x44U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x44U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x44U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x45U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x45U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x45U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x45U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x46U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x46U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x46U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x46U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x47U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x47U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x47U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x47U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3bU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3aU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3bU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x39U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x39U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3aU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x3aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x39U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x39U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x38U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x38U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x37U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x37U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x38U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x38U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x36U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x36U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x37U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x37U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x36U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x36U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x35U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x35U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x34U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x34U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x35U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x35U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x33U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x33U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x34U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x34U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x33U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x33U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x32U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x32U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x31U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x31U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x32U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x32U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x30U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x30U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x31U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x31U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x30U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x30U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x24U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x24U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x24U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x24U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x25U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x25U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x25U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x25U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x26U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x26U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x26U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x26U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x27U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x27U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x27U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x27U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x28U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x28U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x28U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x28U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x29U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x29U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x29U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x29U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2aU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2aU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2aU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2bU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2bU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2cU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2cU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2dU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2dU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2dU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2eU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2eU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2fU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2fU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x2fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x23U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x23U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x22U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x22U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x23U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x23U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x21U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x21U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x22U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x22U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x21U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x21U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x20U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x20U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1fU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x20U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x20U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1eU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1eU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1fU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1fU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1eU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1eU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1dU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1cU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1dU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1dU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1bU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1bU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1cU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1cU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1bU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1bU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1aU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x19U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x19U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1aU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x1aU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x18U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x18U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x19U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x19U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x18U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x18U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xcU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xcU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xcU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xcU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xdU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xdU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xdU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xdU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xeU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xeU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xeU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xeU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xfU] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xfU]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xfU] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xfU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x10U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x10U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x10U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x10U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x11U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x11U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x11U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x11U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x12U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x12U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x12U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x12U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x13U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x13U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x13U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x13U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x14U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x14U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x14U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x14U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x15U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x15U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x15U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x15U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x16U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x16U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x16U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x16U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x17U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x17U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0x17U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0x17U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[0U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[0U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[0U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbU] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[0U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaU] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbU] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xbU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[1U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[1U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[1U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[9U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[9U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaU] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0xaU]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[1U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[9U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[9U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[2U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[2U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[2U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[8U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[8U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[2U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[7U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[7U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[8U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[8U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[3U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[3U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[3U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[6U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[6U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[7U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[7U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[3U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[6U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[6U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[4U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[4U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[4U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[5U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[5U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[4U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[4U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[4U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[5U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[5U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[5U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[5U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[5U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[3U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[3U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[4U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[4U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[5U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[3U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[3U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[6U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[6U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[6U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[2U] 
        = ((0xffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[2U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[6U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[1U] 
        = ((0xffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[1U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x10U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[2U] 
        = ((0xffffff00U & vlSelf->ChipInterface__DOT__led_module__DOT__data[2U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 0x10U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (0xffffU & vlSelf->ChipInterface__DOT__matrix[7U]))
              ? 4U : 0U) << 0x10U) | ((((0U != (0xffffU 
                                                & vlSelf->ChipInterface__DOT__matrix[7U]))
                                         ? 4U : 0U) 
                                       << 8U) | ((0U 
                                                  != 
                                                  (0xffffU 
                                                   & vlSelf->ChipInterface__DOT__matrix[7U]))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0U] 
        = ((0xffffffU & vlSelf->ChipInterface__DOT__led_module__DOT__data[0U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              << 0x18U));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[1U] 
        = ((0xffff0000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[1U]) 
           | (ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
              >> 8U));
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 
        = ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                     >> 0x10U)) ? 4U : 0U) << 0x10U) 
           | ((((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                        >> 0x10U)) ? 4U : 0U) << 8U) 
              | ((0U != (vlSelf->ChipInterface__DOT__matrix[7U] 
                         >> 0x10U)) ? 4U : 0U)));
    vlSelf->ChipInterface__DOT__led_module__DOT__data[0U] 
        = ((0xff000000U & vlSelf->ChipInterface__DOT__led_module__DOT__data[0U]) 
           | ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0);
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__cur_bit_dat 
        = ((0x17U >= (0x1fU & ((IData)(0x17U) - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index)))) 
           && (1U & (vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__cur_led_dat 
                     >> (0x1fU & ((IData)(0x17U) - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index))))));
    vlSelf->ChipInterface__DOT__led_data = vlSelf->led_data;
    vlSelf->ChipInterface__DOT__led_module__DOT__o_out 
        = vlSelf->led_data;
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__busy 
        = vlSelf->ChipInterface__DOT__led_module__DOT__busy;
    vlSelf->ChipInterface__DOT__simulator__DOT__p2x 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p2y 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__y));
    vlSelf->ChipInterface__DOT__simulator__DOT__p2vx 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vel_x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p2vy 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vel_y));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__counter__DOT__Q;
    vlSelf->ChipInterface__DOT__simulator__DOT__p1vx 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vel_x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p1vy 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vel_y));
    vlSelf->ChipInterface__DOT__simulator__DOT__p1x 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p1y 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__y));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__counter__DOT__Q;
    vlSelf->ChipInterface__DOT__simulator__DOT__p0vx 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vel_x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p0vy 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vel_y));
    vlSelf->ChipInterface__DOT__simulator__DOT__p0x 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p0y 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__y));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__counter__DOT__Q;
    vlSelf->ChipInterface__DOT__simulator__DOT__cvx 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vel_x));
    vlSelf->ChipInterface__DOT__simulator__DOT__cvy 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vel_y));
    vlSelf->ChipInterface__DOT__simulator__DOT__cx 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__x));
    vlSelf->ChipInterface__DOT__simulator__DOT__cy 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__y));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__counter__DOT__Q;
    VL_ASSIGN_W(6144,vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__data, vlSelf->ChipInterface__DOT__led_module__DOT__data);
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__x2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__x2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__x2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__y2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__y2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__y2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2vx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2vx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2vx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vy2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2vy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2vy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2vy 
                      >> 0U));
    if (((((((((0x13dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)) 
               | (0x13eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
              | (0x140U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
             | (0x141U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
            | (0x14aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
           | (0x14bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
          | (0x14dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) 
         | (0x14eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx)))) {
        if ((0x13dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_x0));
        } else if ((0x13eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_y0));
        } else if ((0x140U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__displace0), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__damp0)));
        } else if ((0x141U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__displace0), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__damp0)));
        } else if ((0x14aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_x1));
        } else if ((0x14bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_y1));
        } else if ((0x14dU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__displace1), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__damp1)));
        } else {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__displace1), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__damp1)));
        }
    } else if ((0x157U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
            = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_x2));
    } else if ((0x158U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
            = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__rel_vel_y2));
    } else if ((0x15aU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dx2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
            = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__displace2), 3U) 
                          + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__damp2)));
    } else if ((0x15bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__dy2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
            = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__displace2), 3U) 
                          + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__damp2)));
    } else {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multb = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__multa 
            = (0xffffU & 0U);
    }
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1vx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1vx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1vx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vy1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1vy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1vy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1vy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__x1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__x1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__x1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__y1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__y1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__y1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1y 
                      >> 0U));
    if (((((((((0xd9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)) 
               | (0xdaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
              | (0xdcU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
             | (0xddU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
            | (0xe6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
           | (0xe7U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
          | (0xe9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) 
         | (0xeaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx)))) {
        if ((0xd9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_x0));
        } else if ((0xdaU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_y0));
        } else if ((0xdcU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__displace0), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__damp0)));
        } else if ((0xddU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__displace0), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__damp0)));
        } else if ((0xe6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_x1));
        } else if ((0xe7U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_y1));
        } else if ((0xe9U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__displace1), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__damp1)));
        } else {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__displace1), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__damp1)));
        }
    } else if ((0xf3U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
            = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_x2));
    } else if ((0xf4U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
            = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__rel_vel_y2));
    } else if ((0xf6U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dx2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
            = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__displace2), 3U) 
                          + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__damp2)));
    } else if ((0xf7U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__dy2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
            = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__displace2), 3U) 
                          + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__damp2)));
    } else {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multb = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__multa 
            = (0xffffU & 0U);
    }
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0vx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0vx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0vx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vy0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0vy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0vy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0vy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__x0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__x0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__x0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__y0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__y0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__y0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0y 
                      >> 0U));
    if (((((((((0x75U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)) 
               | (0x76U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
              | (0x78U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
             | (0x79U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
            | (0x82U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
           | (0x83U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
          | (0x85U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) 
         | (0x86U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx)))) {
        if ((0x75U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_x0));
        } else if ((0x76U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_y0));
        } else if ((0x78U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__displace0), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__damp0)));
        } else if ((0x79U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy0;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__displace0), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__damp0)));
        } else if ((0x82U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_x1));
        } else if ((0x83U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_y1));
        } else if ((0x85U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__displace1), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__damp1)));
        } else {
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy1;
            vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__displace1), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__damp1)));
        }
    } else if ((0x8fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
            = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_x2));
    } else if ((0x90U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
            = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__rel_vel_y2));
    } else if ((0x92U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dx2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
            = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__displace2), 3U) 
                          + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__damp2)));
    } else if ((0x93U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__dy2;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
            = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__displace2), 3U) 
                          + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__damp2)));
    } else {
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multb = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__multa 
            = (0xffffU & 0U);
    }
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cvx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cvx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cvx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cvy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cvy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cvy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__x0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__x1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__x2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cx 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__y0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__y1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__y2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[0U] = 0U;
    vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[1U] = 0U;
    vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[2U] = 0U;
    vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[3U] = 0U;
    vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[4U] = 0U;
    vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[5U] = 0U;
    vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[6U] = 0U;
    vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[7U] = 0U;
    vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y = 0U;
    while (VL_GTS_III(32, 0x10U, vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) {
        if (((((((VL_GTES_III(32, 2U, (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, (- 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y))));
        } else if (((((((VL_GTES_III(32, 2U, (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y))));
        } else if (((((((VL_GTES_III(32, 2U, (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y))));
        } else if (((((((VL_GTES_III(32, 2U, (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - (- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  ((- VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 1U;
        if (((((((VL_GTES_III(32, 2U, ((IData)(1U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(1U) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(1U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(1U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(1U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(1U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(1U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(1U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(1U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(1U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(1U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(1U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(1U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(1U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(1U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(1U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(1U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(1U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(1U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(1U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(1U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(1U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(1U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(1U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(1U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(1U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(1U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(1U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(1U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(1U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(1U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(1U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 2U;
        if (((((((VL_GTES_III(32, 2U, ((IData)(2U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(2U) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(2U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(2U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(2U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(2U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(2U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(2U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(2U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(2U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(2U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(2U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(2U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(2U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(2U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(2U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(2U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(2U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(2U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(2U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(2U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(2U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(2U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(2U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(2U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(2U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(2U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(2U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(2U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(2U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(2U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(2U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(2U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 3U;
        if (((((((VL_GTES_III(32, 2U, ((IData)(3U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(3U) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(3U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(3U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(3U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(3U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(3U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(3U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(3U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(3U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(3U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(3U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(3U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(3U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(3U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(3U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(3U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(3U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(3U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(3U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(3U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(3U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(3U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(3U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(3U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(3U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(3U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(3U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(3U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(3U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(3U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(3U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(3U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 4U;
        if (((((((VL_GTES_III(32, 2U, ((IData)(4U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(4U) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(4U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(4U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(4U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(4U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(4U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(4U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(4U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(4U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(4U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(4U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(4U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(4U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(4U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(4U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(4U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(4U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(4U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(4U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(4U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(4U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(4U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(4U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(4U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(4U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(4U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(4U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(4U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(4U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(4U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(4U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(4U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 5U;
        if (((((((VL_GTES_III(32, 2U, ((IData)(5U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(5U) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(5U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(5U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(5U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(5U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(5U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(5U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(5U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(5U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(5U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(5U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(5U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(5U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(5U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(5U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(5U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(5U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(5U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(5U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(5U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(5U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(5U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(5U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(5U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(5U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(5U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(5U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(5U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(5U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(5U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(5U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(5U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 6U;
        if (((((((VL_GTES_III(32, 2U, ((IData)(6U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(6U) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(6U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(6U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(6U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(6U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(6U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(6U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(6U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(6U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(6U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(6U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(6U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(6U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(6U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(6U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(6U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(6U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(6U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(6U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(6U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(6U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(6U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(6U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(6U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(6U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(6U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(6U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(6U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(6U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(6U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(6U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(6U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(6U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(6U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(6U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 7U;
        if (((((((VL_GTES_III(32, 2U, ((IData)(7U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(7U) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(7U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(7U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(7U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(7U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(7U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(7U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(7U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(7U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(7U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(7U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(7U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(7U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(7U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(7U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(7U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(7U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(7U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(7U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(7U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(7U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(7U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(7U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(7U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(7U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(7U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(7U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(7U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(7U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(7U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(7U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(7U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(7U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(7U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(7U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 8U;
        if (((((((VL_GTES_III(32, 2U, ((IData)(8U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(8U) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(8U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(8U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(8U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(8U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(8U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(8U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(8U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(8U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(8U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(8U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(8U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(8U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(8U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(8U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(8U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(8U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(8U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(8U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(8U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(8U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(8U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(8U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(8U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(8U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(8U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(8U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(8U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(8U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(8U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(8U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(8U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(8U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(8U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(8U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 9U;
        if (((((((VL_GTES_III(32, 2U, ((IData)(9U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(9U) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(9U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(9U) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(9U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(9U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(9U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(9U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(9U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(9U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(9U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(9U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(9U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(9U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(9U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(9U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(9U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(9U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(9U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(9U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(9U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(9U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(9U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(9U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(9U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(9U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(9U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(9U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(9U) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(9U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(9U) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(9U) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(9U) - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(9U) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(9U) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(9U) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 0xaU;
        if (((((((VL_GTES_III(32, 2U, ((IData)(0xaU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(0xaU) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(0xaU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(0xaU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(0xaU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(0xaU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xaU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xaU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xaU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xaU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xaU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xaU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xaU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(0xaU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xaU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xaU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xaU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xaU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xaU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xaU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xaU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xaU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xaU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xaU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xaU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xaU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xaU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xaU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xaU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xaU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xaU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xaU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xaU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xaU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xaU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xaU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 0xbU;
        if (((((((VL_GTES_III(32, 2U, ((IData)(0xbU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(0xbU) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(0xbU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(0xbU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(0xbU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(0xbU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xbU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xbU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xbU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xbU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xbU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xbU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xbU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(0xbU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xbU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xbU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xbU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xbU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xbU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xbU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xbU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xbU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xbU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xbU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xbU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xbU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xbU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xbU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xbU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xbU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xbU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xbU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xbU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xbU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xbU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xbU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 0xcU;
        if (((((((VL_GTES_III(32, 2U, ((IData)(0xcU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(0xcU) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(0xcU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(0xcU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(0xcU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(0xcU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xcU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xcU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xcU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xcU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xcU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xcU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xcU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(0xcU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xcU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xcU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xcU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xcU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xcU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xcU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xcU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xcU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xcU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xcU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xcU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xcU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xcU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xcU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xcU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xcU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xcU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xcU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xcU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xcU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xcU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xcU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 0xdU;
        if (((((((VL_GTES_III(32, 2U, ((IData)(0xdU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(0xdU) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(0xdU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(0xdU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(0xdU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(0xdU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xdU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xdU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xdU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xdU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xdU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xdU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xdU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(0xdU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xdU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xdU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xdU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xdU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xdU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xdU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xdU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xdU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xdU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xdU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xdU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xdU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xdU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xdU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xdU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xdU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xdU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xdU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xdU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xdU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xdU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xdU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 0xeU;
        if (((((((VL_GTES_III(32, 2U, ((IData)(0xeU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(0xeU) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(0xeU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(0xeU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(0xeU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(0xeU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xeU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xeU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xeU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xeU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xeU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xeU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xeU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(0xeU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xeU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xeU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xeU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xeU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xeU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xeU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xeU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xeU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xeU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xeU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xeU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xeU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xeU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xeU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xeU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xeU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xeU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xeU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xeU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xeU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xeU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xeU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 0xfU;
        if (((((((VL_GTES_III(32, 2U, ((IData)(0xfU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))) 
                  & VL_LTES_III(32, 0xfffffffeU, ((IData)(0xfU) 
                                                  - 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)))) 
                 & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))) 
                    & VL_LTES_III(32, 0xfffffffeU, 
                                  (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                   - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
                & VL_GTES_III(32, 3U, (((IData)(0xfU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                       + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
               & VL_GTES_III(32, 3U, (((IData)(0xfU) 
                                       - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                      - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                         - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U))))) 
              & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)) 
                                     - ((IData)(0xfU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U))))) 
             & VL_LTES_III(32, 0xfffffffdU, (((IData)(0xfU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cx, 4U)) 
                                             + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__cy, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xfU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xfU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xfU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xfU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xfU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xfU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xfU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)) 
                                            - ((IData)(0xfU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xfU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p0y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xfU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xfU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xfU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xfU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xfU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xfU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xfU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xfU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xfU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xfU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xfU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xfU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        } else if (((((((VL_GTES_III(32, 2U, ((IData)(0xfU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))) 
                         & VL_LTES_III(32, 0xfffffffeU, 
                                       ((IData)(0xfU) 
                                        - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)))) 
                        & (VL_GTES_III(32, 2U, (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))) 
                           & VL_LTES_III(32, 0xfffffffeU, 
                                         (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                          - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                       & VL_GTES_III(32, 3U, (((IData)(0xfU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                              + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                 - 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                      & VL_GTES_III(32, 3U, (((IData)(0xfU) 
                                              - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                             - (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                                - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U))))) 
                     & VL_GTES_III(32, 3U, ((vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                             - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)) 
                                            - ((IData)(0xfU) 
                                               - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U))))) 
                    & VL_LTES_III(32, 0xfffffffdU, 
                                  (((IData)(0xfU) - 
                                    VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1x, 4U)) 
                                   + (vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
                                      - VL_SHIFTR_III(32,32,32, vlSelf->ChipInterface__DOT__simulator__DOT__p1y, 4U)))))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[(7U 
                                                                     & (((IData)(0xfU) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                                                                        >> 5U))] 
                = (vlSelf->ChipInterface__DOT__simulator__DOT__next_matrix[
                   (7U & (((IData)(0xfU) + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)) 
                          >> 5U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(0xfU) 
                                                + VL_MULS_III(32, (IData)(0x10U), vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y)))));
        }
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__sv2v_autoblock_2__DOT__x = 0x10U;
        vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y 
            = ((IData)(1U) + vlSelf->ChipInterface__DOT__simulator__DOT__sv2v_autoblock_1__DOT__y);
    }
}
