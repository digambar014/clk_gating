// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vff_tb.h for the primary calling header

#include "verilated.h"

#include "Vff_tb__Syms.h"
#include "Vff_tb__Syms.h"
#include "Vff_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vff_tb___024root___eval_initial__TOP__0(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->ff_tb__DOT__rst = 1U;
    vlSelf->ff_tb__DOT__d = 0U;
    vlSelf->ff_tb__DOT__enable = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ff_tb.v", 31);
    vlSelf->ff_tb__DOT__rst = 0U;
    vlSelf->ff_tb__DOT__d = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "ff_tb.v", 34);
    vlSelf->ff_tb__DOT__enable = 1U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "ff_tb.v", 37);
    vlSelf->ff_tb__DOT__enable = 0U;
    vlSelf->ff_tb__DOT__d = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "ff_tb.v", 41);
    VL_FINISH_MT("ff_tb.v", 43, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_tb___024root___dump_triggers__act(Vff_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vff_tb___024root___eval_triggers__act(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->ff_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ff_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->ff_tb__DOT__u2__DOT__gated_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ff_tb__DOT__u2__DOT__gated_clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__ff_tb__DOT__clk__0 
        = vlSelf->ff_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ff_tb__DOT__u2__DOT__gated_clk__0 
        = vlSelf->ff_tb__DOT__u2__DOT__gated_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vff_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
