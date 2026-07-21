<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks

SPDX-FileCopyrightText: 2026 Levente Bajczi

SPDX-License-Identifier: Apache-2.0
-->

# C11 `_Atomic` qualifier placements

Small, purpose-written data-race tasks that systematically cover the syntactic positions in
which the C11 `_Atomic` type qualifier can appear: west- and east-side of the type
specifier, the parenthesised `_Atomic(T)` type-specifier form, pointers to atomics versus
atomic pointers, atomic arrays, atomic struct and union members, function parameters and
return types, and `_Atomic` in cast and `sizeof` type names.

Each task spawns one thread and performs a write–write (or, in one case, a read–write)
access to the object under test from both threads, with no synchronisation between them.
Whether the resulting program has a data race therefore depends only on whether the
`_Atomic` qualifier applies to the accessed lvalue:

- accesses to an `_Atomic`-qualified lvalue are atomic and cannot form a data race
  (`expected_verdict: true`);
- accesses to an ordinary lvalue race (`expected_verdict: false`).

The distinction is deliberately sharpened by pairs of tasks that differ only in where the
qualifier binds. For example `atomic-qual-ptr-to-atomic-deref` (`_Atomic int *p`, written
through `*p`) is race-free because the pointee is atomic, while
`atomic-qual-ptr-to-atomic-write` writes the *pointer object* `p`, which is ordinary, and
therefore races; `atomic-qual-atomic-ptr-write` and `atomic-qual-atomic-ptr-deref` form the
mirror-image pair for `int * _Atomic p`. Tasks whose name begins with
`atomic-qual-control-` contain no `_Atomic` at all and are racy by construction; they exist
so that a `true` verdict elsewhere in the directory cannot be obtained by a tool that simply
fails to model the access.

Programs that are not valid C are deliberately excluded, in particular `int _Atomic(int) x;`
and direct member access on an `_Atomic`-qualified structure, which is undefined behaviour
per C11 6.5.2.3p5.

## Expected verdicts

The expected verdicts follow from the C11 memory model: two unsynchronised accesses to the
same object where at least one is a write form a data race unless the accesses are atomic
(C11 5.1.2.4p25). Every task was additionally checked against ThreadSanitizer
(`clang -fsanitize=thread -g -O1 -std=c11 -pthread`, ten runs each); every task expected to
be racy is reported as such, and no task expected to be race-free produces a report.

Contributed by: Levente Bajczi
