# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
# 
# SPDX-FileCopyrightText: 2023 Inria
# SPDX-FileContributor: Raphaël Monat 
# 
# SPDX-License-Identifier: GPL-3.0-or-later

main() {
  // ARGV initialization
  int argc = 4;
  char argv0[11], argv1[11], argv2[11], argv3[11];
  char *argv[5] = {argv0, argv1, argv2, argv3, 0};
  argv0[10] = 0;
  argv1[10] = 0;
  argv2[10] = 0;
  argv3[10] = 0;
  // Real program
