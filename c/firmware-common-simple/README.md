<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
SPDX-FileCopyrightText: 2026 The SV-Benchmarks Community
SPDX-License-Identifier: Apache-2.0
-->

# Example Tasks with Programming Constructs Common in Firmware

These programs are simple verification tasks that exercise low-level systems-programming constructs commonly used in firmware code,
such as `union`/`struct` layout, type punning, bit-fields, and `packed`/`aligned` compiler attributes.
They are derived from the [TACAS 2026 case study]((https://doi.org/10.1007/978-3-032-22749-2_3)) on applying formal methods to the [Intel TDX Module](https://github.com/intel/confidential-computing.tdx.tdx-module/tree/tdx_1.5),
which identified several such constructs that are not well supported by off-the-shelf software verifiers.
Each task isolates one of these constructs in a minimal example designed to expose the corresponding verification challenge,
with the goal of encouraging verifier developers to improve support for these constructs.
