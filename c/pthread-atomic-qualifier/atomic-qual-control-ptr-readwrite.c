// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2026 Levente Bajczi
//
// SPDX-License-Identifier: Apache-2.0

// Control: read/write race on an unqualified pointer object.
#include <pthread.h>

int v1;
int *p;
int *r;

void *thr(void *arg) {
  (void)arg;
  r = p; // RACE
  return 0;
}

int main(void) {
  pthread_t id;
  pthread_create(&id, 0, thr, 0);
  p = &v1; // RACE
  pthread_join(id, 0);
  return 0;
}
