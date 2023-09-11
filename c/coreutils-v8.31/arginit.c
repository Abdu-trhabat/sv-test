# This file is part of the SV-Benchmarks collection of verification tasks:
# https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
# 
# SPDX-FileCopyrightText: 2023 Inria
# SPDX-FileContributor: Raphaël Monat 
# 
# SPDX-License-Identifier: GPL-3.0-or-later

/* Client for SV Comp */
extern char __VERIFIER_nondet_char();

int main() {
  int argc = 4;
  optind = 1;
  char **argv = malloc((argc+1) * sizeof(char*));
  argv[argc] = 0;
  for(int i = 0; i < argc; i++) {
    argv[i] = malloc(11 * sizeof(char));
    argv[i][10] = 0;
    for(int j = 0; j < 10; j++)
      argv[i][j] = __VERIFIER_nondet_char();
  }
  int res = __main(argc, argv);
  for(int i = 0; i < argc; i++)
    free(argv[i]);
  free(argv);
  return res;
}
