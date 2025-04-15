// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*5:0*/, 128> Vtop__ConstPool__TABLE_h987e8cbc_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*23:0*/ ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0;
    ChipInterface__DOT__led_module__DOT____Vlvbound_hd79733d4__0 = 0;
    IData/*23:0*/ ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0;
    ChipInterface__DOT__led_module__DOT____Vlvbound_h3b5b631d__0 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->ChipInterface__DOT__rst_n = vlSelf->rst_n;
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__update 
        = vlSelf->ChipInterface__DOT__led_module__DOT__update;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__addr 
        = vlSelf->ChipInterface__DOT__sensor__DOT__addr;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__wdata 
        = vlSelf->ChipInterface__DOT__sensor__DOT__wdata;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__read 
        = vlSelf->ChipInterface__DOT__sensor__DOT__read;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__enable 
        = vlSelf->ChipInterface__DOT__sensor__DOT__enable;
    vlSelf->ChipInterface__DOT__sensor__DOT__rdata 
        = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata;
    vlSelf->ChipInterface__DOT__simulator__DOT__wait_idx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__wait_time__DOT__Q;
    vlSelf->ChipInterface__DOT__led_module__DOT__done 
        = ((~ ((IData)(vlSelf->ChipInterface__DOT__led_module__DOT__update) 
               | (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__refresh))) 
           & (1U <= (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__frame_idx)));
    vlSelf->ChipInterface__DOT__led_module__DOT__busy 
        = vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__refresh;
    vlSelf->ChipInterface__DOT__sensor__DOT__clear 
        = ((0x10U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state)) 
           | (3U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state)));
    __Vtableidx2 = (((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__enable) 
                     << 6U) | (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state));
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__next_state 
        = Vtop__ConstPool__TABLE_h987e8cbc_0[__Vtableidx2];
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
    vlSelf->ChipInterface__DOT__sensor__DOT__wait_idx 
        = vlSelf->ChipInterface__DOT__sensor__DOT__wait_time__DOT__Q;
    vlSelf->ChipInterface__DOT__SDO = vlSelf->SDO;
    vlSelf->ChipInterface__DOT__sensor__DOT__clk = vlSelf->ChipInterface__DOT__clk10;
    vlSelf->led_data = vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__o_out;
    vlSelf->SDI = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SDI;
    vlSelf->SPC = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SPC;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__done 
        = (0x21U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state));
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__CS 
        = ((0U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
           | (0x21U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)));
    vlSelf->ChipInterface__DOT__simulator__DOT__p0m 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__m));
    vlSelf->ChipInterface__DOT__simulator__DOT__p1m 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__m));
    vlSelf->ChipInterface__DOT__simulator__DOT__p2m 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__m));
    vlSelf->ChipInterface__DOT__simulator__DOT__cm 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__m));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vel_x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vel_y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vy;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vel_x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vel_y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vy;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vel_x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vel_y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vy;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__py;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vel_x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vx;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vel_y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vy;
    vlSelf->ChipInterface__DOT__data[0U] = vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[0U];
    vlSelf->ChipInterface__DOT__data[1U] = vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[1U];
    vlSelf->ChipInterface__DOT__data[2U] = vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[2U];
    vlSelf->ChipInterface__DOT__matrix[0U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[0U];
    vlSelf->ChipInterface__DOT__matrix[1U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[1U];
    vlSelf->ChipInterface__DOT__matrix[2U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[2U];
    vlSelf->ChipInterface__DOT__matrix[3U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[3U];
    vlSelf->ChipInterface__DOT__matrix[4U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[4U];
    vlSelf->ChipInterface__DOT__matrix[5U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[5U];
    vlSelf->ChipInterface__DOT__matrix[6U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[6U];
    vlSelf->ChipInterface__DOT__matrix[7U] = vlSelf->ChipInterface__DOT__simulator__DOT__matrix[7U];
    vlSelf->ChipInterface__DOT__btn_left = vlSelf->btn_left;
    vlSelf->ChipInterface__DOT__btn_right = vlSelf->btn_right;
    vlSelf->ChipInterface__DOT__btn_up = vlSelf->btn_up;
    vlSelf->ChipInterface__DOT__btn_down = vlSelf->btn_down;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__py;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__py;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__y 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__py;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__x 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__px;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__counter__DOT__Q;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__idx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__counter__DOT__Q;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__idx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__counter__DOT__Q;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__idx 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__counter__DOT__Q;
    vlSelf->ChipInterface__DOT__clk = vlSelf->clk;
    vlSelf->ChipInterface__DOT__reset = (1U & (~ (IData)(vlSelf->rst_n)));
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__busy 
        = vlSelf->ChipInterface__DOT__led_module__DOT__busy;
    vlSelf->ChipInterface__DOT__sensor__DOT__wait_time__DOT__clear 
        = vlSelf->ChipInterface__DOT__sensor__DOT__clear;
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__cur_bit_dat 
        = ((0x17U >= (0x1fU & ((IData)(0x17U) - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index)))) 
           && (1U & (vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__cur_led_dat 
                     >> (0x1fU & ((IData)(0x17U) - (IData)(vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__bit_index))))));
    vlSelf->ChipInterface__DOT__sensor__DOT__SDO = vlSelf->ChipInterface__DOT__SDO;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__clk 
        = vlSelf->ChipInterface__DOT__sensor__DOT__clk;
    vlSelf->ChipInterface__DOT__sensor__DOT__wait_time__DOT__clock 
        = vlSelf->ChipInterface__DOT__sensor__DOT__clk;
    vlSelf->ChipInterface__DOT__led_data = vlSelf->led_data;
    vlSelf->ChipInterface__DOT__led_module__DOT__o_out 
        = vlSelf->led_data;
    vlSelf->ChipInterface__DOT__SDI = vlSelf->SDI;
    vlSelf->ChipInterface__DOT__sensor__DOT__SDI = vlSelf->SDI;
    vlSelf->ChipInterface__DOT__SPC = vlSelf->SPC;
    vlSelf->ChipInterface__DOT__sensor__DOT__SPC = vlSelf->SPC;
    vlSelf->ChipInterface__DOT__sensor__DOT__done = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__done;
    vlSelf->CS = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__CS;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__m0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0m 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__m0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0m 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__m0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0m 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__m1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1m 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__m1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1m 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__m1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1m 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__m2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2m 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__m2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2m 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__m2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2m 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__m0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cm 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__m1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cm 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__m2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cm 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__cvx 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vel_x));
    vlSelf->ChipInterface__DOT__simulator__DOT__cvy 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__vel_y));
    vlSelf->ChipInterface__DOT__simulator__DOT__p0vx 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vel_x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p0vy 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__vel_y));
    vlSelf->ChipInterface__DOT__simulator__DOT__p1vx 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vel_x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p1vy 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__vel_y));
    vlSelf->ChipInterface__DOT__simulator__DOT__p2y 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__y));
    vlSelf->ChipInterface__DOT__simulator__DOT__p2vx 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vel_x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p2x 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p2vy 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__vel_y));
    vlSelf->ChipInterface__DOT__led_module__DOT__imu_data[0U] 
        = vlSelf->ChipInterface__DOT__data[0U];
    vlSelf->ChipInterface__DOT__led_module__DOT__imu_data[1U] 
        = vlSelf->ChipInterface__DOT__data[1U];
    vlSelf->ChipInterface__DOT__led_module__DOT__imu_data[2U] 
        = vlSelf->ChipInterface__DOT__data[2U];
    vlSelf->ChipInterface__DOT__simulator__DOT__data[0U] 
        = vlSelf->ChipInterface__DOT__data[0U];
    vlSelf->ChipInterface__DOT__simulator__DOT__data[1U] 
        = vlSelf->ChipInterface__DOT__data[1U];
    vlSelf->ChipInterface__DOT__simulator__DOT__data[2U] 
        = vlSelf->ChipInterface__DOT__data[2U];
    vlSelf->ChipInterface__DOT__led = (vlSelf->ChipInterface__DOT__data[2U] 
                                       >> 0x18U);
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
    vlSelf->ChipInterface__DOT__simulator__DOT__btn_left 
        = vlSelf->ChipInterface__DOT__btn_left;
    vlSelf->ChipInterface__DOT__simulator__DOT__btn_right 
        = vlSelf->ChipInterface__DOT__btn_right;
    vlSelf->ChipInterface__DOT__simulator__DOT__btn_up 
        = vlSelf->ChipInterface__DOT__btn_up;
    vlSelf->ChipInterface__DOT__simulator__DOT__btn_down 
        = vlSelf->ChipInterface__DOT__btn_down;
    vlSelf->ChipInterface__DOT__simulator__DOT__cy 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__y));
    vlSelf->ChipInterface__DOT__simulator__DOT__cx 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p0y 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__y));
    vlSelf->ChipInterface__DOT__simulator__DOT__p0x 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__x));
    vlSelf->ChipInterface__DOT__simulator__DOT__p1y 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__y));
    vlSelf->ChipInterface__DOT__simulator__DOT__p1x 
        = VL_EXTENDS_II(32,16, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__x));
    if (((((((((0x11U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)) 
               | (0x12U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
              | (0x14U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
             | (0x15U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
            | (0x1eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
           | (0x1fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
          | (0x21U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) 
         | (0x22U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx)))) {
        if ((0x11U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx0;
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_x0));
        } else if ((0x12U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy0;
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_y0));
        } else if ((0x14U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx0;
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__displace0), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__damp0)));
        } else if ((0x15U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy0;
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__displace0), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__damp0)));
        } else if ((0x1eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx1;
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_x1));
        } else if ((0x1fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy1;
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
                = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_y1));
        } else if ((0x21U == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx1;
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__displace1), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__damp1)));
        } else {
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
                = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy1;
            vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
                = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__displace1), 3U) 
                              + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__damp1)));
        }
    } else if ((0x2bU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx2;
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
            = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_x2));
    } else if ((0x2cU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy2;
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
            = (0xffffU & (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__rel_vel_y2));
    } else if ((0x2eU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dx2;
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
            = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__displace2), 3U) 
                          + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__damp2)));
    } else if ((0x2fU == (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__idx))) {
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb 
            = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__dy2;
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
            = (0xffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__displace2), 3U) 
                          + (IData)(vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__damp2)));
    } else {
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multb = 0U;
        vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__multa 
            = (0xffffU & 0U);
    }
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
    vlSelf->ChipInterface__DOT__led_module__DOT__clock 
        = vlSelf->ChipInterface__DOT__clk;
    vlSelf->ChipInterface__DOT__simulator__DOT__clk 
        = vlSelf->ChipInterface__DOT__clk;
    vlSelf->ChipInterface__DOT__led_module__DOT__reset 
        = vlSelf->ChipInterface__DOT__reset;
    vlSelf->ChipInterface__DOT__sensor__DOT__reset 
        = vlSelf->ChipInterface__DOT__reset;
    vlSelf->ChipInterface__DOT__simulator__DOT__reset 
        = vlSelf->ChipInterface__DOT__reset;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear 
        = vlSelf->ChipInterface__DOT__reset;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SDO 
        = vlSelf->ChipInterface__DOT__sensor__DOT__SDO;
    vlSelf->ChipInterface__DOT__sensor__DOT__next_state 
        = vlSelf->ChipInterface__DOT__sensor__DOT__curr_state;
    if (((((((((0U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state)) 
               | (1U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
              | (2U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
             | (3U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
            | (4U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
           | (5U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
          | (6U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
         | (7U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state)))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__next_state 
            = ((0U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                    ? 1U : 0U) : ((1U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                   ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                       ? 2U : 1U) : 
                                  ((2U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                    ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                        ? 3U : 2U) : 
                                   ((3U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                     ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                         ? 4U : 3U)
                                     : ((4U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                         ? ((0xf4240U 
                                             == vlSelf->ChipInterface__DOT__sensor__DOT__wait_idx)
                                             ? 5U : 4U)
                                         : ((5U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                             ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                                 ? 6U
                                                 : 5U)
                                             : ((6U 
                                                 == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                                 ? 
                                                ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                                  ? 7U
                                                  : 6U)
                                                 : 
                                                ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                                  ? 8U
                                                  : 7U))))))));
    } else if (((((((((8U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state)) 
                      | (9U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
                     | (0xaU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
                    | (0xbU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
                   | (0xcU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
                  | (0xdU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
                 | (0xeU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
                | (0xfU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state)))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__next_state 
            = ((8U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                    ? 9U : 8U) : ((9U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                   ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                       ? 0xaU : 9U)
                                   : ((0xaU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                       ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                           ? 0xbU : 0xaU)
                                       : ((0xbU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                           ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                               ? 0xcU
                                               : 0xbU)
                                           : ((0xcU 
                                               == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                               ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                                   ? 0xdU
                                                   : 0xcU)
                                               : ((0xdU 
                                                   == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                                   ? 
                                                  ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                                    ? 0xeU
                                                    : 0xdU)
                                                   : 
                                                  ((0xeU 
                                                    == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))
                                                    ? 
                                                   ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                                     ? 0xfU
                                                     : 0xeU)
                                                    : 
                                                   ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                                                     ? 0x10U
                                                     : 0xfU))))))));
    } else if ((0x10U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__next_state 
            = ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__done)
                ? 0x11U : 0x10U);
    } else if ((0x11U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__next_state = 4U;
    }
    vlSelf->ChipInterface__DOT__CS = vlSelf->CS;
    vlSelf->ChipInterface__DOT__sensor__DOT__CS = vlSelf->CS;
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
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__x2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__x2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2x 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__x2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p2x 
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
    vlSelf->led = vlSelf->ChipInterface__DOT__led;
    VL_ASSIGN_W(6144,vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__data, vlSelf->ChipInterface__DOT__led_module__DOT__data);
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__btn_left 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_left;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__btn_left 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_left;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__btn_left 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_left;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__btn_left 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_left;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__btn_right 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_right;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__btn_right 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_right;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__btn_right 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_right;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__btn_right 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_right;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__btn_up 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_up;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__btn_up 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_up;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__btn_up 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_up;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__btn_up 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_up;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__btn_down 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_down;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__btn_down 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_down;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__btn_down 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_down;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__btn_down 
        = vlSelf->ChipInterface__DOT__simulator__DOT__btn_down;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__y0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__y1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cy 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__y2 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__cy 
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
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__y0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__y0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__y0 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p0y 
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
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__y1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__y1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1y 
                      >> 0U));
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__y1 
        = (0xffffU & (vlSelf->ChipInterface__DOT__simulator__DOT__p1y 
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
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__clock 
        = vlSelf->ChipInterface__DOT__led_module__DOT__clock;
    vlSelf->ChipInterface__DOT__simulator__DOT__wait_time__DOT__clock 
        = vlSelf->ChipInterface__DOT__simulator__DOT__clk;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clk 
        = vlSelf->ChipInterface__DOT__simulator__DOT__clk;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__clk 
        = vlSelf->ChipInterface__DOT__simulator__DOT__clk;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__clk 
        = vlSelf->ChipInterface__DOT__simulator__DOT__clk;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__clk 
        = vlSelf->ChipInterface__DOT__simulator__DOT__clk;
    vlSelf->ChipInterface__DOT__led_module__DOT__ws__DOT__reset 
        = vlSelf->ChipInterface__DOT__led_module__DOT__reset;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__reset 
        = vlSelf->ChipInterface__DOT__sensor__DOT__reset;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__reset 
        = vlSelf->ChipInterface__DOT__simulator__DOT__reset;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__reset 
        = vlSelf->ChipInterface__DOT__simulator__DOT__reset;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__reset 
        = vlSelf->ChipInterface__DOT__simulator__DOT__reset;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__reset 
        = vlSelf->ChipInterface__DOT__simulator__DOT__reset;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__counter__DOT__clear 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__counter__DOT__clear 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__counter__DOT__clear 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__counter__DOT__clear 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear;
    vlSelf->ChipInterface__DOT__simulator__DOT__wait_time__DOT__clear 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear;
    vlSelf->ChipInterface__DOT__simulator__DOT__clear 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__clear 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__clear 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__clear 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clear;
    vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__counter__DOT__clock 
        = vlSelf->ChipInterface__DOT__simulator__DOT__center__DOT__clk;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__counter__DOT__clock 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral0__DOT__clk;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__counter__DOT__clock 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral1__DOT__clk;
    vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__counter__DOT__clock 
        = vlSelf->ChipInterface__DOT__simulator__DOT__peripheral2__DOT__clk;
}
