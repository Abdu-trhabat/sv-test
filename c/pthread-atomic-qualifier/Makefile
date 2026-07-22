# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
#
# SPDX-FileCopyrightText: 2026 Levente Bajczi
#
# SPDX-License-Identifier: Apache-2.0

LEVEL := ../

# The tasks use C11 features (_Atomic, stdatomic.h).
CC.Standard := c11

# A cast to an atomic scalar type is valid C11: 6.5.4p2 requires the type name of
# a cast to "specify atomic, qualified, or unqualified scalar type". GCC accepts
# it, but Clang rejects "(_Atomic int)0" with "used type '_Atomic(int)' where
# arithmetic or pointer type is required" -- not just the Clang version used in
# CI (3.9), but every version tried, up to and including 22. The program is
# correct, so it is kept as a verification task and only excluded from the
# compile check.
IGNORE_SRCS := atomic-qual-cast.c

include $(LEVEL)/Makefile.config
