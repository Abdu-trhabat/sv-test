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

This file is meant to get competition participants started quickly: it lists the most
important MoXI constructs and fixes the interpretation of aspects relevant to the
competition. It is neither a comprehensive tutorial nor a replacement of the official
language definition; the SPIN 2024 paper above is the normative reference.

## Input format

- A task model is given in _native MoXI_, the SMT-LIB-style S-expression syntax
  (`.moxi`). This is the sole input format of the track; no other rendition (e.g.,
  MoXI-JSON) is provided or accepted. Tools that internally prefer another
  representation must convert the input themselves (e.g., MoXI-MC-Flow provides a
  `moxi2json` converter).
- The task-definition `.yml` lists the concrete file via `input_files`.

## Modeling

- Each task declares its SMT-LIB logic with `(set-logic <L>)`. All sorts and operators
  are interpreted according to the corresponding SMT-LIB theories; there is no
  undefined behavior.
- A model is one or more transition systems defined with `define-system` (attributes
  `:input`, `:output`, `:local`, `:init`, `:trans`, `:inv`; systems may be composed
  synchronously via `:subsys`). For the competition, each task file contains exactly
  one top system, named `main`: no other system instantiates it, and every other
  defined system is a transitive subsystem of `main`.
- Nondeterministic inputs are the free `:input` variables of a system; there is no
  `__VERIFIER_nondet` API and no library or external functions -- each task is
  self-contained. Uninterpreted constant and function symbols, if any, are rigid (time-invariant).
- Per the sanity requirements of the [MoXI language](https://doi.org/10.1007/978-3-031-66149-5_2) paper,
  models are expected (but not guaranteed) to be deadlock-free, that is, to start and to run forever:
  every assignment to the input variables can be extended to an initial state, and from every
  reachable state, every assignment to the next inputs can be extended to a successor state.
  Note that right-totality of the transition relation is not assumed: unreachable states may lack successors.

## Property

- The only property considered is `unsat-query` (see
  [`properties/unsat-query.md`](properties/unsat-query.md)): the single query of
  the task is unsatisfiable. For the current tasks, whose queries are reachability
  queries, this means that no queried state is reachable.
- The verification obligation is stated with `check-system`;
  see Sect. 3.2 of the SPIN 2024 MoXI language paper for the definition of a query.
  For the competition, each task file contains exactly
  one `check-system` command; it references the system `main` and contains exactly one
  `:query` (the `:queries` attribute is not used).
- The query may range over `:reachable`, `:assumption`, and `:current` conditions;
  `:fairness` conditions are excluded from the current task set, because a
  query with a fairness condition is evaluated with infinite-trace semantics
  (Sect. 3.2 of the SPIN 2024 paper), which is incompatible with the finite violation
  witnesses below. Tasks whose queries contain fairness conditions may be added in
  the future as a separate category (distinguished by task-set files), with
  lasso-shaped violation witnesses.

## Witnesses (for validation)

- A tool's answer is a MoXI `check-system-response`. The queries of the current tasks
  contain no fairness conditions and are thus safety (reachability) properties: a
  violation witness is a finite execution that reaches a queried state, reported as a
  `:trace` whose `:prefix` trail lists the states of the execution (in MoXI's format,
  a lasso trace with an empty lasso; see Fig. 4 of the MoXI language paper, SPIN 2024,
  linked above). If the model has free symbols, the response also provides a `:model`
  interpretation for them. Responses are given in native MoXI.
