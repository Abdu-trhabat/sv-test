/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

#include <pthread.h>
#include <stdio.h>
#include <assert.h>

int g = 0;
pthread_once_t once = PTHREAD_ONCE_INIT;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

void fun() {
  g++; //RACE
}

void *f(void *p){
  fun();
  return NULL;
}
pthread_t id1;

int main(void) {
  pthread_t id;

  pthread_create(&id1, NULL, f, NULL);
  pthread_once(&once, fun);

  return 0;
}
