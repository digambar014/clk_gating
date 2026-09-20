// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vff_tb.h for the primary calling header

#include "verilated.h"

#include "Vff_tb__Syms.h"
#include "Vff_tb___024root.h"

VL_ATTR_COLD void Vff_tb___024root___eval_static__TOP(Vff_tb___024root* vlSelf);

VL_ATTR_COLD void Vff_tb___024root___eval_static(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_static\n"); );
    // Body
    Vff_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vff_tb___024root___eval_static__TOP(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ff_tb__DOT__clk = 0U;
    vlSelf->ff_tb__DOT__rst = 0U;
    vlSelf->ff_tb__DOT__d = 0U;
    vlSelf->ff_tb__DOT__enable = 0U;
}

VL_ATTR_COLD void Vff_tb___024root___eval_final(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vff_tb___024root___eval_triggers__stl(Vff_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_tb___024root___dump_triggers__stl(Vff_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vff_tb___024root___eval_stl(Vff_tb___024root* vlSelf);

VL_ATTR_COLD void Vff_tb___024root___eval_settle(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vff_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vff_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("ff_tb.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vff_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_tb___024root___dump_triggers__stl(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vff_tb___024root___act_sequent__TOP__0(Vff_tb___024root* vlSelf);

VL_ATTR_COLD void Vff_tb___024root___eval_stl(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vff_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_tb___024root___dump_triggers__act(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ff_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ff_tb.u2.gated_clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vff_tb___024root___dump_triggers__nba(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ff_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ff_tb.u2.gated_clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vff_tb___024root___ctor_var_reset(Vff_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ff_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->ff_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->ff_tb__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->ff_tb__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->ff_tb__DOT__q_nogate = VL_RAND_RESET_I(1);
    vlSelf->ff_tb__DOT__q_gate = VL_RAND_RESET_I(1);
    vlSelf->ff_tb__DOT__u2__DOT__gated_clk = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ff_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ff_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ff_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ff_tb__DOT__u2__DOT__gated_clk__0 = VL_RAND_RESET_I(1);
}
