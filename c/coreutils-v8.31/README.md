# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
# 
# SPDX-FileCopyrightText: 2023 Inria
# SPDX-FileContributor: Raphaël Monat 
# 
# SPDX-License-Identifier: GPL-3.0-or-later

This directory contains a set of 10 coreutils, that have been instrumented by the work of [Frank Busse, Pritam Gharat, Cristian Cadar, Alastair Donaldson in their ISSTA'22 paper "Combining Static Analysis Error Traces with Dynamic Symbolic Execution (Experience Paper)"](https://srg.doc.ic.ac.uk/projects/klee-sa/).

These are based on coreutils v8.31. 

We used [Mopsa](https://gitlab.com/mopsa/mopsa-analyzer/) to perform the single-file preprocessing necessary to incorporate the files within SV-Comp, using the script `generate_files.sh` provided in this directory.

In their work, Busse et al instrumented the coreutils to create memory errors (initially, to check soundness of Clang and Infer).

We also incorporated the original files, where the task consists in verifying memory safety and absence of integer overflows. More assertions or properties could be added in the future.

These files currently have a small client to create a few symbolic arguments at the beginning of main. 
The function `quotearg_buffer_resylted` has also been transformed in a simplified version.
