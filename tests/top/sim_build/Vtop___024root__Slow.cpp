// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__CLK_FREQ;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__NUM_LEDS;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__NUM_FRAMES;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__ws__DOT__NUM_LEDS;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__ws__DOT__CLK_FREQ;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__ws__DOT__T0H;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__ws__DOT__T1H;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__ws__DOT__T0L;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__ws__DOT__T1L;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__ws__DOT__LATCH_TIME;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__led_module__DOT__ws__DOT__PULSE_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__sensor__DOT__WAIT_CYCLES;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__sensor__DOT__wait_time__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__WAIT_CYCLES;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__MASS;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__INIT_X;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__INIT_Y;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__REST0;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__REST1;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__REST2;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__PHASE_OFFSET;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__SPRING;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__DAMPING;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__TIME_STEP;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__FORCE_MAG;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__TOTAL_CYCLES;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__center__DOT__counter__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__MASS;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__INIT_X;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__INIT_Y;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__REST0;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__REST1;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__REST2;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__PHASE_OFFSET;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__SPRING;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__DAMPING;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__TIME_STEP;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__FORCE_MAG;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__TOTAL_CYCLES;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral0__DOT__counter__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__MASS;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__INIT_X;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__INIT_Y;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__REST0;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__REST1;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__REST2;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__PHASE_OFFSET;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__SPRING;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__DAMPING;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__TIME_STEP;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__FORCE_MAG;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__TOTAL_CYCLES;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral1__DOT__counter__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__MASS;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__INIT_X;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__INIT_Y;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__REST0;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__REST1;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__REST2;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__PHASE_OFFSET;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__SPRING;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__DAMPING;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__TIME_STEP;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__FORCE_MAG;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__TOTAL_CYCLES;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__peripheral2__DOT__counter__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::ChipInterface__DOT__simulator__DOT__wait_time__DOT__WIDTH;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop___024root::~Vtop___024root() {
}
