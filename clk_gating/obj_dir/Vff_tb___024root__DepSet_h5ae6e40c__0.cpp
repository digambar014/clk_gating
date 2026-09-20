// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vff_tb.h for the primary calling header

#include "verilated.h"

#include "Vff_tb__Syms.h"
#include "Vff_tb___024root.h"

VlCoroutine Vff_tb___024root___eval_initial__TOP__0(Vff_tb___024root* vlSelf);
VlCoroutine Vff_tb___024root___eval_initial__TOP__1(Vff_tb___024root* vlSelf);

void Vff_tb___024root___eval_initial(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_initial\n"); );
    // Body
    Vff_tb___024root___eval_initial__TOP__0(vlSelf);
    Vff_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ff_tb__DOT__clk__0 
        = vlSelf->ff_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__ff_tb__DOT__u2__DOT__gated_clk__0 
        = vlSelf->ff_tb__DOT__u2__DOT__gated_clk;
}

VL_INLINE_OPT VlCoroutine Vff_tb___024root___eval_initial__TOP__1(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "ff_tb.v", 
                                           6);
        vlSelf->__Vdlyvval__ff_tb__DOT__clk__v0 = (1U 
                                                   & (~ (IData)(vlSelf->ff_tb__DOT__clk)));
        vlSelf->__Vdlyvset__ff_tb__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vff_tb___024root___act_sequent__TOP__0(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->ff_tb__DOT__u2__DOT__gated_clk = ((IData)(vlSelf->ff_tb__DOT__clk) 
                                              & (IData)(vlSelf->ff_tb__DOT__enable));
}

void Vff_tb___024root___eval_act(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vff_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vff_tb___024root___nba_sequent__TOP__0(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ff_tb__DOT__clk__v0) {
        vlSelf->ff_tb__DOT__clk = vlSelf->__Vdlyvval__ff_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__ff_tb__DOT__clk__v0 = 0U;
    }
    vlSelf->ff_tb__DOT__u2__DOT__gated_clk = ((IData)(vlSelf->ff_tb__DOT__clk) 
                                              & (IData)(vlSelf->ff_tb__DOT__enable));
}

VL_INLINE_OPT void Vff_tb___024root___nba_sequent__TOP__1(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ff_tb__DOT__q_nogate = ((~ (IData)(vlSelf->ff_tb__DOT__rst)) 
                                    & (IData)(vlSelf->ff_tb__DOT__d));
}

VL_INLINE_OPT void Vff_tb___024root___nba_sequent__TOP__2(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ff_tb__DOT__q_gate = ((~ (IData)(vlSelf->ff_tb__DOT__rst)) 
                                  & (IData)(vlSelf->ff_tb__DOT__d));
}

void Vff_tb___024root___eval_nba(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vff_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vff_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vff_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vff_tb___024root___eval_triggers__act(Vff_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_tb___024root___dump_triggers__act(Vff_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vff_tb___024root___timing_resume(Vff_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_tb___024root___dump_triggers__nba(Vff_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vff_tb___024root___eval(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vff_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vff_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ff_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vff_tb___024root___timing_resume(vlSelf);
                Vff_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vff_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ff_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vff_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vff_tb___024root___timing_resume(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vff_tb___024root___eval_debug_assertions(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
