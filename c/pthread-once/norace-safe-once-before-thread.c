/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// PARAM: --set ana.activated[+] pthreadOnce --enable ana.sv-comp.functions
// main runs once before creating the thread, so the child's once is a no-op
#include <pthread.h>
#include <stdio.h>

int g;
pthread_once_t once = PTHREAD_ONCE_INIT;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

void fun() {
  g++; // NORACE only ever runs in main, before the thread exists
}

void *t_fun(void *arg) {
  pthread_once(&once, fun); // already executed -> does not run fun again
  return NULL;
}

int main(void) {
  pthread_t id;

  pthread_once(&once, fun);
  pthread_create(&id, NULL, t_fun, NULL);

  return 0;
}
