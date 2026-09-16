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

pthread_once_t once = PTHREAD_ONCE_INIT;
pthread_once_t i_once = PTHREAD_ONCE_INIT;
pthread_mutex_t mut;

void *t_other(void* arg) {
  g = 17; // RACE!

  // This mutex is needed to avoid races between the two threads
  // As fun() is executed only once, only one thread exists in any execution, but we cannot capture this
  // [main, t_fun@04-thread.c:50:3-50:40, t_other@04-thread.c:27:13-27:59]
  // [main, t_other@04-thread.c:27:13-27:59]
  pthread_mutex_lock(&mut);
  pthread_mutex_unlock(&mut);
  return NULL;
}

void nesting() {

}

void fun() {
  // Even though this is only called inside the once, the accesses in the new thread and the accesses here can happen in parallel
  // Checks that active is not passed to the created thread, but seen is passed
  pthread_t tid = pthread_create(&tid, NULL, t_other, NULL);
  g = 42; // RACE!

  // Active onces get passed to the callee and back to the caller
  nesting();

}

void ifun() {

}

void *t_fun(void *arg) {
  pthread_once(&i_once, ifun);
  pthread_once(&once, fun);
  return NULL;
}

int main(void) {
  pthread_t id;
  int top = __VERIFIER_nondet_int();

  pthread_create(&id, NULL, t_fun, NULL);

  pthread_once(&i_once, ifun);
  pthread_once(&once, fun);

  return 0;
}
