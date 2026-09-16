<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

## Definitions

A *verification task* consists of
- a program,
- a specification (the property to be verifier), and
- an expected verification verdict (not given to the verifier).

A *verification run* is
- a non-interactive execution
- of one verification tool
- on one verification task
- under specific resource constraints
in order to check whether the following statement is correct:
"The program satisfies the specification." 
An output of a verification run is a verification result.

A *verification result* is a triple (VERDICT, WITNESS, TIME), where
- VERDICT is either TRUE meaning that the program satisfies the specification, or  FALSE meaning that the program violates the specification, or UNKNOWN},
- WITNESS is a witness in a common witness format that supports validation of the (untrusted) verdict (verdict TRUE is supported by a correctness witness, verdict FALSE by a violation witness, and a witness is not needed for verdict UNKNOWN), and
- TIME is the CPU time that the verification run has consumed (in practice, also other resource measurement values are reported).

A *validation task* consists of 
- a program,
- a specification,
- a witness, and
- an optional expected validation verdict.

A *validation run* is
- a non-interactive execution
- of one validation tool
- on one validation task
- under specific resource constraints
in order to check whether the witness is valid.

A *validation result* is a pair (VERDICT, TIME), where
- VERDICT is an element of {TRUE, FALSE, UNKNOWN} and
- TIME is the CPU time that the verification run has consumed (in practice, also other resource measurement values are reported).
For a correctness witness, verdict TRUE means that the witness is valid and FALSE means that it is invalid.
For a violation witness, verdict FALSE means that the witness is valid and TRUE means that it is invalid.

A *base category* is a set of verification tasks with the same specification.

A *meta category* is a collection of base categories or meta categories of a lower level.
