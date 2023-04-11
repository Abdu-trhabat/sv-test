# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
#
# SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
#
# SPDX-License-Identifier: Apache-2.0

These tasks test unspecified compile-time issues.
The tasks should never trigger undefined behavior.
For example the order of operand evaluation in assignments is not specified, i.e. *f1() = f2(); the order of execution of f1() or f2() is not specified.
Another example would be f1() + f2() and the ordering of f1(), f2().
(C11 does even note that execution might interleave. But since functions use functions points, it does not trigger when using functions)
Another example is the result of a malloc(0) call, which can be NULL or a non-null pointer to memory that may never be used to access memory.

Relevant C11 sections include Annex J (Unspecified Behavior).