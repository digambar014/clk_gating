// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vff_tb__Syms.h"


VL_ATTR_COLD void Vff_tb___024root__trace_init_sub__TOP__0(Vff_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ff_tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"d", false,-1);
    tracep->declBit(c+4,"enable", false,-1);
    tracep->declBit(c+5,"q_nogate", false,-1);
    tracep->declBit(c+6,"q_gate", false,-1);
    tracep->pushNamePrefix("u1 ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"d", false,-1);
    tracep->declBit(c+5,"q", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u2 ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"d", false,-1);
    tracep->declBit(c+4,"enable", false,-1);
    tracep->declBit(c+6,"q", false,-1);
    tracep->declBit(c+7,"gated_clk", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vff_tb___024root__trace_init_top(Vff_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root__trace_init_top\n"); );
    // Body
    Vff_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vff_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vff_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vff_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vff_tb___024root__trace_register(Vff_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vff_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vff_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vff_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vff_tb___024root__trace_full_sub_0(Vff_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vff_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root__trace_full_top_0\n"); );
    // Init
    Vff_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vff_tb___024root*>(voidSelf);
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vff_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vff_tb___024root__trace_full_sub_0(Vff_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vff_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vff_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ff_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->ff_tb__DOT__rst));
    bufp->fullBit(oldp+3,(vlSelf->ff_tb__DOT__d));
    bufp->fullBit(oldp+4,(vlSelf->ff_tb__DOT__enable));
    bufp->fullBit(oldp+5,(vlSelf->ff_tb__DOT__q_nogate));
    bufp->fullBit(oldp+6,(vlSelf->ff_tb__DOT__q_gate));
    bufp->fullBit(oldp+7,(vlSelf->ff_tb__DOT__u2__DOT__gated_clk));
}
