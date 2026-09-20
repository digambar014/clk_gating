// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vff_tb.h for the primary calling header

#ifndef VERILATED_VFF_TB___024ROOT_H_
#define VERILATED_VFF_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vff_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vff_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ff_tb__DOT__clk;
    CData/*0:0*/ ff_tb__DOT__u2__DOT__gated_clk;
    CData/*0:0*/ ff_tb__DOT__rst;
    CData/*0:0*/ ff_tb__DOT__d;
    CData/*0:0*/ ff_tb__DOT__enable;
    CData/*0:0*/ ff_tb__DOT__q_nogate;
    CData/*0:0*/ ff_tb__DOT__q_gate;
    CData/*0:0*/ __Vdlyvval__ff_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__ff_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ff_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ff_tb__DOT__u2__DOT__gated_clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vff_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vff_tb___024root(Vff_tb__Syms* symsp, const char* v__name);
    ~Vff_tb___024root();
    VL_UNCOPYABLE(Vff_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
