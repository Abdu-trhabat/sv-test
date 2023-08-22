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
CC.Standard := c11
GCC_WARNINGS := -Wno-error=shift-count-overflow # the reported overflows happen in dead code
CLANG_WARNINGS := -Wno-error=self-assign -Wno-error=sometimes-uninitialized -Wno-error=uninitialized -Wno-error=return-type -Wno-error=tautological-compare # for clang3.9 in the ci
                  # -Wno-error=implicit-const-int-float-conversion # does not exist in clang3.9, the version used in the CI.
	                # the reported errors originate from the coreutils themselves or happen in dead code

include $(LEVEL)/Makefile.config
