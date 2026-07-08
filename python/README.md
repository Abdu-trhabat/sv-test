<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks

SPDX-FileCopyrightText: 2026 Raphaël Monat, Inria
SPDX-FileCopyrightText: 2026-... The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

# Python benchmarks

## Verification Task Structure

Verification tasks are grouped in directories depending on their source. Within these directories, each verification task consists of a YAML file in the format defined by BenchExec for task-definition files. These YAML files define the main input file of a task (in field `input_files`, along with `required_files` for multi-file programs) and the expected verdict for each possible property (cf. [task definition format](https://gitlab.com/sosy-lab/benchmarking/task-definition-format/-/tree/2.0))

All Python source files of a task need to have the suffix .py. Program files must have a copyright header indicating the source of the benchmark (at least in the "main" source file). The program may import objects from the standard library.

The programs are assumed to be written in Python 3.14 by default, but programs requiring a later version can override this with the `language_version` keyword in the YAML task definition (the key is a string).

`sys.argv` is assumed to be any list of strings. Verification tasks requiring additional assumptions about `sys.argv` (e.g., that there is at most 3 arguments, each of size less than 10) can start the program by tweaking `sys.argv`.

## Category structure

- Type-specific tasks. Focusing on Python’s dynamic typing nature.
- Semantics tests. Python is known to have many tweaks in its semantics.
- Real-world projects. One subcategory per project

## Properties

The properties we currently consider correspond to families of runtime exceptions:
- assertion safety `AssertionError`
- dynamic typing `TypeError`, `AttributeError`
- arithmetic `ZeroDivisionError`, `FloatingPointError`
- data-structure lookups `KeyError`, `IndexError`
The properties state whether these exceptions interrupt the program's execution.

## Rules for Nondeterminism

The `_sv_verifier` module introduces nondeterministic functions. These functions can be stubbed by analyzers.
