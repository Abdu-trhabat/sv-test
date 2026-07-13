<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

# MoXI Verification Tasks -- Conventions

Models in this track are transition systems written in MoXI (Model eXchange
Interlingua), an intermediate language for symbolic model checking built on top of
SMT-LIB 2. See the language definition (SPIN 2024):
<https://doi.org/10.1007/978-3-031-66149-5_2>.

## Input formats

- A task model is given in one of two behaviorally equivalent formats:
  - *native MoXI*, the SMT-LIB-style S-expression syntax (`.moxi`); or
  - *MoXI-JSON*, a JSON serialization of the same model (`.json`).
- Both formats are interpreted identically according to the MoXI standard, and a tool
  may accept either. The task-definition `.yml` lists the concrete file(s) via
  `input_files`.

## Modeling

- Each task declares its SMT theory with `(set-logic <L>)`, where `<L>` is one of
  `QF_ABV`, `QF_BV`, or `QF_LIA`. All sorts and operators are interpreted according to
  the corresponding SMT-LIB 2.6 theory; there is no undefined behavior.
- A model is one or more transition systems defined with `define-system` (attributes
  `:input`, `:output`, `:local`, `:init`, `:trans`, `:inv`; systems may be composed
  synchronously via `:subsys`). Verification obligations are stated with `check-system`,
  using `:reachable` conditions collected into `:query`/`:queries`.
- Nondeterministic inputs are the free `:input` variables of a system; there is no
  `__VERIFIER_nondet` API and no library or external functions -- each task is
  self-contained. Uninterpreted constant and function symbols, if any, are rigid
  (time-invariant).
- Every system is expected to be deadlock-free (i.e., to execute forever), per MoXI's
  sanity requirements on the initial and transition predicates.

## Property

- The only property considered is `unreach-query` (see
  [`properties/unreach-query.md`](properties/unreach-query.md)): every reachability query
  of the system is unsatisfiable, i.e., no queried state is reachable.

## Witnesses (for validation)

- A tool's answer is a MoXI `check-system-response`. For `unreach-query`, which is a
  safety (reachability) property, a violation witness is a finite execution that reaches
  a queried state, reported as a `:trace` whose `:prefix` trail lists the states of the
  execution (in MoXI's format, a lasso trace with an empty lasso; see Fig. 4 of the
  MoXI language paper, SPIN 2024, linked above). If the model has free symbols, the
  response also provides a `:model`
  interpretation for them. Responses may be given in native MoXI or MoXI-JSON.
