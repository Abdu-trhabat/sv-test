# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
# 
# SPDX-FileCopyrightText: 2023 Inria
# SPDX-FileContributor: Raphaël Monat 
# 
# SPDX-License-Identifier: GPL-3.0-or-later

LEVEL := ../

IGNORE_SRCS := arginit.c quotearg.c # files used the generation script

CC.Arch := 64
GCC_WARNINGS := -Wno-error=shift-count-overflow # the reported overflows happen in dead code
CLANG_WARNINGS := -Wno-error=self-assign -Wno-error=sometimes-uninitialized -Wno-error=uninitialized -Wno-error=return-type -Wno-error=tautological-compare -Wno-error=unknown-warning-option -Wno-error=implicit-const-int-float-conversion  # as the last option does not exist for clang3.9 in the Ci, we add the second to last one

include $(LEVEL)/Makefile.config
