<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks

SPDX-FileCopyrightText: 2026 Raphaël Monat, Inria
SPDX-FileCopyrightText: 2026-... The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

All Python source files of a task need to have the suffix .py. Program files must have a copyright header indicating the source of the benchmark (at least in the "main" source file). The program may import objects from the standard library.

The programs are assumed to be written in Python 3.14 by default, but programs requiring a later version can override this with the `language_version` keyword in the YAML task definition (the key is a string).

`sys.argv` is assumed to be any list of strings. Verification tasks requiring additional assumptions about `sys.argv` (e.g., that there is at most 3 arguments, each of size less than 10) can start the program by tweaking `sys.argv`.
