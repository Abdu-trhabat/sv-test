# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
#
# SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
#
# SPDX-License-Identifier: Apache-2.0

The tasks are built such that they test unspecified runtime issues.
For example memory alignment can change in each execution of the same program, without a recompiliation.
Example: (int) malloc(128) < (int) malloc(128)

Relevant C11 sections include Annex J (Unspecified Behavior) and 6.5.8.
From Annex J, as to what is defined as unspecified behavior:
  The order and contiguity of storage allocated by successive calls to the calloc, malloc, and realloc functions (7.22.3).

Note: § 6.5.8 (5) states that comparing pointers is not allowed in this context!