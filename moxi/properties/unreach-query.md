<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

The verification task is the single query of the task's `check-system` command, which
references the system `main` (see `CONVENTIONS.md` for the required task shape).
The property holds if the query is unsatisfiable under MoXI's finite-trace semantics
(Sect. 3.2 of the language definition): no execution of `main` compatible with the
query's conditions reaches a state meeting the query's `:reachable` condition.
A counterexample (violation witness) is a finite execution demonstrating the query's
satisfiability.
