<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

The verification task is the single query of the task's `check-system` command, which
references the system `main` (see `CONVENTIONS.md` for the required task shape).
The property holds if the query is unsatisfiable (see Sect. 3.2 of the MoXI language
definition for the semantics of queries).
A counterexample (violation witness) is a trace demonstrating the query's
satisfiability: a finite execution for queries without fairness conditions
(evaluated under finite-trace semantics), and a lasso-shaped execution for queries
with fairness conditions (evaluated under infinite-trace semantics).
