// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
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
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h59cfc347_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h7f0f6363_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop__ConstPool__TABLE_ha1f7aeaa_0;
extern const VlUnpacked<CData/*7:0*/, 32> Vtop__ConstPool__TABLE_hce82f550_0;
extern const VlUnpacked<CData/*7:0*/, 32> Vtop__ConstPool__TABLE_hd9226b0c_0;
extern const VlUnpacked<CData/*5:0*/, 128> Vtop__ConstPool__TABLE_h987e8cbc_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->ChipInterface__DOT__sensor__DOT__wait_time__DOT__Q 
        = ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__clear)
            ? 0U : (0x1fffffU & ((IData)(1U) + vlSelf->ChipInterface__DOT__sensor__DOT__wait_time__DOT__Q)));
    if (((((((((0U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
               | (0x12U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
              | (0x14U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
             | (0x16U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
            | (0x18U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
           | (0x1aU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
          | (0x1cU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
         | (0x1eU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)))) {
        if ((0U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) {
            vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata = 0U;
        } else {
            vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata 
                = ((0x12U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                    ? ((0x7fU & (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata)) 
                       | ((IData)(vlSelf->SDO) << 7U))
                    : ((0x14U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                        ? ((0xbfU & (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata)) 
                           | ((IData)(vlSelf->SDO) 
                              << 6U)) : ((0x16U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                          ? ((0xdfU 
                                              & (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata)) 
                                             | ((IData)(vlSelf->SDO) 
                                                << 5U))
                                          : ((0x18U 
                                              == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                              ? ((0xefU 
                                                  & (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata)) 
                                                 | ((IData)(vlSelf->SDO) 
                                                    << 4U))
                                              : ((0x1aU 
                                                  == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                  ? 
                                                 ((0xf7U 
                                                   & (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata)) 
                                                  | ((IData)(vlSelf->SDO) 
                                                     << 3U))
                                                  : 
                                                 ((0x1cU 
                                                   == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                   ? 
                                                  ((0xfbU 
                                                    & (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata)) 
                                                   | ((IData)(vlSelf->SDO) 
                                                      << 2U))
                                                   : 
                                                  ((0xfdU 
                                                    & (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata)) 
                                                   | ((IData)(vlSelf->SDO) 
                                                      << 1U))))))));
        }
    } else if ((0x20U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata 
            = ((0xfeU & (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata)) 
               | (IData)(vlSelf->SDO));
    }
    if (((((((((0U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
               | (1U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
              | (2U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
             | (3U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
            | (4U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
           | (5U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
          | (6U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
         | (7U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SPC 
            = ((0U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
               || ((1U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                   && ((2U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                       || ((3U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                           && ((4U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                               || ((5U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                                   && (6U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))))))));
    } else if (((((((((8U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                      | (9U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                     | (0xaU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                    | (0xbU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                   | (0xcU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                  | (0xdU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                 | (0xeU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                | (0xfU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SPC 
            = ((8U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
               || ((9U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                   && ((0xaU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                       || ((0xbU != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                           && ((0xcU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                               || ((0xdU != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                                   && (0xeU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))))))));
    } else if (((((((((0x10U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                      | (0x11U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                     | (0x12U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                    | (0x13U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                   | (0x14U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                  | (0x15U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                 | (0x16U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                | (0x17U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SPC 
            = ((0x10U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
               || ((0x11U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                   && ((0x12U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                       || ((0x13U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                           && ((0x14U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                               || ((0x15U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                                   && (0x16U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))))))));
    } else if (((((((((0x18U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                      | (0x19U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                     | (0x1aU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                    | (0x1bU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                   | (0x1cU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                  | (0x1dU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                 | (0x1eU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                | (0x1fU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SPC 
            = ((0x18U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
               || ((0x19U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                   && ((0x1aU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                       || ((0x1bU != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                           && ((0x1cU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                               || ((0x1dU != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                                   && (0x1eU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))))))));
    } else if ((0x20U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SPC = 1U;
    } else if ((0x21U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SPC = 1U;
    }
    if (((((((((1U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
               | (2U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
              | (3U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
             | (4U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
            | (5U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
           | (6U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
          | (7U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
         | (8U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SDI 
            = (1U & ((1U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                      ? (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)
                      : ((2U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                          ? (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)
                          : ((3U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                              ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                 >> 6U) : ((4U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                            ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                               >> 6U)
                                            : ((5U 
                                                == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                                   >> 5U)
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                    ? 
                                                   ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                                    >> 5U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                     ? 
                                                    ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                                     >> 4U)
                                                     : 
                                                    ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                                     >> 4U)))))))));
    } else if (((((((((9U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                      | (0xaU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                     | (0xbU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                    | (0xcU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                   | (0xdU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                  | (0xeU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                 | (0xfU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                | (0x10U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SDI 
            = (1U & ((9U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                      ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                         >> 3U) : ((0xaU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                    ? ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                       >> 3U) : ((0xbU 
                                                  == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                  ? 
                                                 ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                                  >> 2U)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                   ? 
                                                  ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                                   >> 2U)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                    ? 
                                                   ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                                    >> 1U)
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                     ? 
                                                    ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr) 
                                                     >> 1U)
                                                     : (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__addr))))))));
    } else if (((((((((0x11U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                      | (0x12U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                     | (0x13U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                    | (0x14U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                   | (0x15U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                  | (0x16U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                 | (0x17U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                | (0x18U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SDI 
            = (1U & ((0x11U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                      ? ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                         & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                            >> 7U)) : ((0x12U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                        ? ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                           & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                              >> 7U))
                                        : ((0x13U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                            ? ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                               & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                                  >> 6U))
                                            : ((0x14U 
                                                == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                ? (
                                                   (~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                                   & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                                      >> 6U))
                                                : (
                                                   (0x15U 
                                                    == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                    ? 
                                                   ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                                       >> 5U))
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                     ? 
                                                    ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                                     & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                                        >> 5U))
                                                     : 
                                                    ((0x17U 
                                                      == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                      ? 
                                                     ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                                      & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                                         >> 4U))
                                                      : 
                                                     ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                                      & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                                         >> 4U))))))))));
    } else if (((((((((0x19U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
                      | (0x1aU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                     | (0x1bU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                    | (0x1cU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                   | (0x1dU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                  | (0x1eU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                 | (0x1fU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))) 
                | (0x20U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SDI 
            = (1U & ((0x19U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                      ? ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                         & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                            >> 3U)) : ((0x1aU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                        ? ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                           & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                              >> 3U))
                                        : ((0x1bU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                            ? ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                               & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                                  >> 2U))
                                            : ((0x1cU 
                                                == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                ? (
                                                   (~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                                   & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                                      >> 2U))
                                                : (
                                                   (0x1dU 
                                                    == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                    ? 
                                                   ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                                    & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                                       >> 1U))
                                                    : 
                                                   ((0x1eU 
                                                     == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                     ? 
                                                    ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                                     & ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata) 
                                                        >> 1U))
                                                     : 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state))
                                                      ? 
                                                     ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                                      & (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata))
                                                      : 
                                                     ((~ (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__read)) 
                                                      & (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__wdata))))))))));
    }
    vlSelf->ChipInterface__DOT__sensor__DOT__wait_idx 
        = vlSelf->ChipInterface__DOT__sensor__DOT__wait_time__DOT__Q;
    vlSelf->SPC = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SPC;
    if (vlSelf->ChipInterface__DOT__reset) {
        vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[0U] = 0U;
        vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[1U] = 0U;
        vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[2U] = 0U;
    } else if ((0x11U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__next_state))) {
        vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[0U] 
            = vlSelf->ChipInterface__DOT__sensor__DOT__next_data[0U];
        vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[1U] 
            = vlSelf->ChipInterface__DOT__sensor__DOT__next_data[1U];
        vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[2U] 
            = vlSelf->ChipInterface__DOT__sensor__DOT__next_data[2U];
    }
    vlSelf->ChipInterface__DOT__data[0U] = vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[0U];
    vlSelf->ChipInterface__DOT__data[1U] = vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[1U];
    vlSelf->ChipInterface__DOT__data[2U] = vlSelf->ChipInterface__DOT__sensor__DOT__curr_data[2U];
    if (((((((((4U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state)) 
               | (5U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
              | (6U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
             | (7U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
            | (8U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
           | (9U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
          | (0xaU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) 
         | (0xbU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state)))) {
        if ((4U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
            vlSelf->ChipInterface__DOT__sensor__DOT__next_data[0U] = 0U;
            vlSelf->ChipInterface__DOT__sensor__DOT__next_data[1U] = 0U;
            vlSelf->ChipInterface__DOT__sensor__DOT__next_data[2U] = 0U;
        } else if ((5U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
            if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
                vlSelf->ChipInterface__DOT__sensor__DOT__next_data[2U] 
                    = ((0xff00ffffU & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[2U]) 
                       | ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata) 
                          << 0x10U));
            }
        } else if ((6U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
            if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
                vlSelf->ChipInterface__DOT__sensor__DOT__next_data[2U] 
                    = ((0xffffffU & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[2U]) 
                       | ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata) 
                          << 0x18U));
            }
        } else if ((7U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
            if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
                vlSelf->ChipInterface__DOT__sensor__DOT__next_data[2U] 
                    = ((0xffffff00U & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[2U]) 
                       | (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata));
            }
        } else if ((8U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
            if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
                vlSelf->ChipInterface__DOT__sensor__DOT__next_data[2U] 
                    = ((0xffff00ffU & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[2U]) 
                       | ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata) 
                          << 8U));
            }
        } else if ((9U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
            if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
                vlSelf->ChipInterface__DOT__sensor__DOT__next_data[1U] 
                    = ((0xff00ffffU & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[1U]) 
                       | ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata) 
                          << 0x10U));
            }
        } else if ((0xaU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
            if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
                vlSelf->ChipInterface__DOT__sensor__DOT__next_data[1U] 
                    = ((0xffffffU & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[1U]) 
                       | ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata) 
                          << 0x18U));
            }
        } else if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
            vlSelf->ChipInterface__DOT__sensor__DOT__next_data[1U] 
                = ((0xffffff00U & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[1U]) 
                   | (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata));
        }
    } else if ((0xcU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
        if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
            vlSelf->ChipInterface__DOT__sensor__DOT__next_data[1U] 
                = ((0xffff00ffU & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[1U]) 
                   | ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata) 
                      << 8U));
        }
    } else if ((0xdU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
        if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
            vlSelf->ChipInterface__DOT__sensor__DOT__next_data[0U] 
                = ((0xff00ffffU & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[0U]) 
                   | ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata) 
                      << 0x10U));
        }
    } else if ((0xeU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
        if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
            vlSelf->ChipInterface__DOT__sensor__DOT__next_data[0U] 
                = ((0xffffffU & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[0U]) 
                   | ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata) 
                      << 0x18U));
        }
    } else if ((0xfU == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
        if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
            vlSelf->ChipInterface__DOT__sensor__DOT__next_data[0U] 
                = ((0xffffff00U & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[0U]) 
                   | (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata));
        }
    } else if ((0x10U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state))) {
        if ((0U != (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata))) {
            vlSelf->ChipInterface__DOT__sensor__DOT__next_data[0U] 
                = ((0xffff00ffU & vlSelf->ChipInterface__DOT__sensor__DOT__next_data[0U]) 
                   | ((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__rdata) 
                      << 8U));
        }
    }
    vlSelf->SDI = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__SDI;
    __Vtableidx1 = vlSelf->ChipInterface__DOT__sensor__DOT__curr_state;
    if (vlSelf->ChipInterface__DOT__reset) {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state = 0U;
        vlSelf->ChipInterface__DOT__sensor__DOT__curr_state = 0U;
    } else {
        vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state 
            = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__next_state;
        vlSelf->ChipInterface__DOT__sensor__DOT__curr_state 
            = vlSelf->ChipInterface__DOT__sensor__DOT__next_state;
    }
    vlSelf->ChipInterface__DOT__sensor__DOT__enable 
        = Vtop__ConstPool__TABLE_h59cfc347_0[__Vtableidx1];
    vlSelf->ChipInterface__DOT__sensor__DOT__read = 
        Vtop__ConstPool__TABLE_h7f0f6363_0[__Vtableidx1];
    if ((4U & Vtop__ConstPool__TABLE_ha1f7aeaa_0[__Vtableidx1])) {
        vlSelf->ChipInterface__DOT__sensor__DOT__addr 
            = Vtop__ConstPool__TABLE_hce82f550_0[__Vtableidx1];
    }
    if ((8U & Vtop__ConstPool__TABLE_ha1f7aeaa_0[__Vtableidx1])) {
        vlSelf->ChipInterface__DOT__sensor__DOT__wdata 
            = Vtop__ConstPool__TABLE_hd9226b0c_0[__Vtableidx1];
    }
    vlSelf->ChipInterface__DOT__SPC = vlSelf->SPC;
    vlSelf->ChipInterface__DOT__sensor__DOT__SPC = vlSelf->SPC;
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
    vlSelf->ChipInterface__DOT__sensor__DOT__rdata 
        = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__rdata;
    vlSelf->ChipInterface__DOT__SDI = vlSelf->SDI;
    vlSelf->ChipInterface__DOT__sensor__DOT__SDI = vlSelf->SDI;
    vlSelf->led = vlSelf->ChipInterface__DOT__led;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__done 
        = (0x21U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state));
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__CS 
        = ((0U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)) 
           | (0x21U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state)));
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__read 
        = vlSelf->ChipInterface__DOT__sensor__DOT__read;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__addr 
        = vlSelf->ChipInterface__DOT__sensor__DOT__addr;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__wdata 
        = vlSelf->ChipInterface__DOT__sensor__DOT__wdata;
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__enable 
        = vlSelf->ChipInterface__DOT__sensor__DOT__enable;
    __Vtableidx2 = (((IData)(vlSelf->ChipInterface__DOT__sensor__DOT__enable) 
                     << 6U) | (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__curr_state));
    vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__next_state 
        = Vtop__ConstPool__TABLE_h987e8cbc_0[__Vtableidx2];
    vlSelf->ChipInterface__DOT__sensor__DOT__done = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__done;
    vlSelf->CS = vlSelf->ChipInterface__DOT__sensor__DOT__spi_internal__DOT__CS;
    vlSelf->ChipInterface__DOT__CS = vlSelf->CS;
    vlSelf->ChipInterface__DOT__sensor__DOT__CS = vlSelf->CS;
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
    vlSelf->ChipInterface__DOT__sensor__DOT__clear 
        = ((0x10U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state)) 
           | (3U == (IData)(vlSelf->ChipInterface__DOT__sensor__DOT__curr_state)));
    vlSelf->ChipInterface__DOT__sensor__DOT__wait_time__DOT__clear 
        = vlSelf->ChipInterface__DOT__sensor__DOT__clear;
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/Andre/Downloads/18224/Project/tests/top/../../ChipInterface.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/Andre/Downloads/18224/Project/tests/top/../../ChipInterface.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/Andre/Downloads/18224/Project/tests/top/../../ChipInterface.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->SDO & 0xfeU))) {
        Verilated::overWidthError("SDO");}
    if (VL_UNLIKELY((vlSelf->btn_left & 0xfeU))) {
        Verilated::overWidthError("btn_left");}
    if (VL_UNLIKELY((vlSelf->btn_right & 0xfeU))) {
        Verilated::overWidthError("btn_right");}
    if (VL_UNLIKELY((vlSelf->btn_up & 0xfeU))) {
        Verilated::overWidthError("btn_up");}
    if (VL_UNLIKELY((vlSelf->btn_down & 0xfeU))) {
        Verilated::overWidthError("btn_down");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
