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

int h;
int i;
pthread_once_t once = PTHREAD_ONCE_INIT;
pthread_once_t i_once = PTHREAD_ONCE_INIT;
pthread_mutex_t mut;

void *t_other(void* arg) {
  // only called once
  i = 7; //NORACE
  return NULL;
}

void nesting() {
  h = 5; //NORACE
}

void fun() {
  pthread_t tid = pthread_create(&tid, NULL, t_other, NULL);

  h = 8; //NORACE
  nesting();
  h = 12; //NORACE
}

void ifun() {
  i = 11; //NORACE
}

void *t_fun(void *arg) {
  pthread_once(&i_once, ifun);
  pthread_once(&once, fun);
  return NULL;
}

int main(void) {
  pthread_t id;

  pthread_create(&id, NULL, t_fun, NULL);

  pthread_once(&i_once, ifun);
  pthread_once(&once, fun);

  h = 5; //NORACE

  return 0;
}
