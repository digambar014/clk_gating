# Clock Gating

An RTL demonstration of clock gating for dynamic-power reduction on flip-flops.

## Overview

Two versions of a flip-flop are implemented and compared: one ungated and one with an integrated clock-gating cell, showing how gating suppresses unnecessary clock toggling when the flip-flop is not updating.

## Files

| File | Description |
|------|-------------|
| `ff_no_gating.v` | Flip-flop without clock gating |
| `ff_with_gating.v` | Flip-flop with clock gating |
| `ff_tb.v` | Comparison testbench |

## Simulation

Compile and run `ff_tb.v` with a Verilog simulator (Icarus Verilog or Verilator).

## License

MIT - see [LICENSE](LICENSE).
