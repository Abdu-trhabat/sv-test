// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// Control: unqualified long, racy.
#include <pthread.h>

long q;

void *thr(void *arg) {
  (void)arg;
  q = 1; // RACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  q = 2; // RACE
  pthread_join(id, 0);
  return 0;
}
