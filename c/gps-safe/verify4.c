/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2020 ...
 *
 * SPDX-License-Identifier: Apache-2.0
 */

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "verify4.c", 3, "reach_error"); }
extern int __VERIFIER_nondet_int(void);

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: {reach_error();abort();}
  }
  return;
}



int main()
{
  int i = 1;  
  int havoc = __VERIFIER_nondet_int();
  while(havoc>0){ i = 10 * i; havoc--; }
  int j = 0;
  while(i>0){j++;i--;}
  while(j>0){j--;i++;}
  while(i>0){j++;i--;}

  __VERIFIER_assert(j!=791);
  return 0;
}

