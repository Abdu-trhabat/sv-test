/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2026 Technical University of Munich
 *
 * SPDX-License-Identifier: MIT
 */

// Developer used two different pthread_once_t variables by mistake
#include <pthread.h>
#include <stdio.h>

int g;
pthread_once_t once = PTHREAD_ONCE_INIT;
pthread_once_t once1 = PTHREAD_ONCE_INIT;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

void fun() {
  g++; //RACE!
  g++; //RACE!
}


void* thread(void* arg) {
  pthread_once(&once, fun);
  return NULL;
}

int main(void) {
  pthread_t id;

  pthread_create(&id, NULL, thread, NULL);
  pthread_once(&once1, fun);

  return 0;
}
