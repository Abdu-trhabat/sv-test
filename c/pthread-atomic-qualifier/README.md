<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks

SPDX-FileCopyrightText: 2026 Levente Bajczi

SPDX-License-Identifier: Apache-2.0
-->

# C11 `_Atomic` qualifier placements

Small, purpose-written tasks that systematically cover the syntactic positions in which the
C11 `_Atomic` type qualifier can appear: west- and east-side of the type specifier, the
parenthesised `_Atomic(T)` type-specifier form, pointers to atomics versus atomic pointers,
atomic arrays, atomic struct and union members, function parameters, and `_Atomic` in cast
and `sizeof` type names.

Most tasks spawn one thread and perform a write–write (or, in one case, a read–write) access
to the object under test from both threads, with no synchronisation between them. Whether
the resulting program has a data race therefore depends only on whether the `_Atomic`
qualifier applies to the accessed lvalue:

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

Some tasks put the qualifier under test on an object that is only reached indirectly, so
that the tool is forced to track atomicity through the indirection rather than reading it
off a directly-named declaration: `atomic-qual-cast-ptr` and `atomic-qual-param-ptr-to-atomic`
declare the accessed object as plain `int` and access it exclusively through a pointer cast
to `_Atomic int *` (respectively a function parameter of that type, fed by an explicit cast
at the call site); `atomic-qual-param-array` does the same for an array parameter, which
decays to a pointer rather than copying the array; `atomic-qual-funcptr` races on the
`_Atomic`-qualified function-pointer object itself rather than on an unrelated,
separately-declared object. In each case the qualifier being exercised is the sole reason the
task is race-free, so a tool cannot get the right verdict without actually modelling that
specific syntactic position.

Two syntactic positions cannot be turned into data-race tasks at all, because `sizeof` is a
compile-time, non-evaluating operator with no runtime access to race on: `atomic-qual-sizeof`
and `atomic-qual-paren-sizeof` instead check, under the `unreach-call` property, that
`sizeof(_Atomic int)` (respectively `sizeof(_Atomic(int))`) equals `sizeof(int)`, i.e. that
the qualifier does not change the object's size. `atomic-qual-cast` is a similar case: a cast
of a *value* (as opposed to a pointer) to an atomic scalar type cannot make any access atomic
or racy, since it does not touch any object's storage — it can only be checked for whether it
preserves the value across the cast, again under `unreach-call`.

A few other positions were dropped entirely because they admit no meaningful test, even as a
reachability check: a block-local automatic object, a by-value function parameter, the
*parameter object itself* (as opposed to what it points to) for a pointer-typed parameter,
and a function's return value are all storage that is private to a single call or a single
thread, by construction, regardless of any qualifier — there is no way for two threads to
ever race on them, so `_Atomic` there has no observable effect to test at all.

Programs that are not valid C are deliberately excluded, in particular `int _Atomic(int) x;`
and direct member access on an `_Atomic`-qualified structure, which is undefined behaviour
per C11 6.5.2.3p5.

## Expected verdicts

The expected verdicts for the data-race tasks follow from the C11 memory model: two
unsynchronised accesses to the same object where at least one is a write form a data race
unless the accesses are atomic (C11 5.1.2.4p25). Every data-race task was additionally
checked against ThreadSanitizer (`clang -fsanitize=thread -g -O1 -std=c11 -pthread` and the
same with `gcc`, ten runs each); every task expected to be racy is reported as such, and no
task expected to be race-free produces a report.

The expected verdicts for the three reachability tasks (`atomic-qual-sizeof`,
`atomic-qual-paren-sizeof`, `atomic-qual-cast`) were checked by compiling and running them
directly with both GCC and Clang, natively and under `-m32` (matching the `ILP32` data
model): `sizeof(_Atomic int)` and `sizeof(_Atomic(int))` equal `sizeof(int)`, and a value cast
through `_Atomic int` and back is unchanged, in every case.

Contributed by: Levente Bajczi
