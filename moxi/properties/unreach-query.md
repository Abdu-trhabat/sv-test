<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

No reachability query of the system is satisfiable.
A 'check-system' command may declare one or more queries (':query'/':queries').
A query is satisfiable if some execution of the system reaches a state that meets its
reachability condition (':reachable'), under the query's assumptions and fairness conditions.
This property requires that every query is unsatisfiable: no queried state is reachable.
Equivalently, the proposition "query" -- true in a state iff a declared query's reachability
condition is met -- never holds on any execution (G ! query).
A counterexample is a finite execution that reaches a queried state.
