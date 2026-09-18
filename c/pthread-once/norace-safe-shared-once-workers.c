/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// Two worker threads share the same once object, so fun runs exactly once
#include <pthread.h>
#include <stdio.h>

int g;
pthread_once_t once = PTHREAD_ONCE_INIT;

void fun() {
  g++; // NORACE executed only once across both threads
}

void *t_fun(void *arg) {
  pthread_once(&once, fun);
  return NULL;
}

int main(void) {
  pthread_t id1, id2;

  pthread_create(&id1, NULL, t_fun, NULL);
  pthread_create(&id2, NULL, t_fun, NULL);

  return 0;
}
