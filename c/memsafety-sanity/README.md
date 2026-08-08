# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
#
# SPDX-FileCopyrightText: 2026 Simmo Saan
#
# SPDX-License-Identifier: MIT

Sanity checks for memory safety assumptions and properties:

1. `malloc-null-*`: `malloc` may return `NULL`.
2. `calloc-null-*`: `calloc` may return `NULL`.
3. `realloc-null-*`: `realloc` may return `NULL`.
4. `alloca-nonnull-*`: `alloca` never returns `NULL`.
