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
extern int __VERIFIER_nondet_int();

int g;
pthread_once_t once1 = PTHREAD_ONCE_INIT;
 // PTHREAD_ONCE_INIT is `0`, so coincides with the default value for global variables (c.f. also PTHREAD_MUTEX_INITIALIZER)
pthread_once_t once2;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;


void fun() {
  g = 42; //RACE!
}


void *t_fun(void *arg) {
  pthread_once(&once1, fun);

  pthread_mutex_lock(&mutex1);
  g = 10; //RACE!
  pthread_mutex_unlock(&mutex1);
  return NULL;
}

int main(void) {
  pthread_once_t *ptr;
  pthread_t id;
  int top = __VERIFIER_nondet_int();
  ptr = &once1;

  pthread_create(&id, NULL, t_fun, NULL);

  if(top) {
    ptr = &once2;
  }

  pthread_once(ptr, fun);

  pthread_mutex_lock(&mutex1);
  g = 11; //RACE!
  pthread_mutex_unlock(&mutex1);
  pthread_join (id, NULL);
  return 0;
}
