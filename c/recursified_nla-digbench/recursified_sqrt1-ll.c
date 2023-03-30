// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'sqrt1-ll.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2023 copyright holder of 'sqrt1-ll.c' in the SV-Benchmarks collection
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "sqrt1-ll.c", 5, "reach_error");
}

extern int __VERIFIER_nondet_int(void);
extern void abort(void);
void assume_abort_if_not(int cond)
{
  if (!cond)
  {
    abort();
  }
  else
  {
  }
}

void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
    }

  }
  else
  {
  }
  return;
}

void func_to_recursive_line_29_to_40_0(long long *t, long long *a, int *n, long long *s)
{
  if (1)
  {
    {
      __VERIFIER_assert((*t) == ((2 * (*a)) + 1));
      __VERIFIER_assert((*s) == (((*a) + 1) * ((*a) + 1)));
      __VERIFIER_assert((((((*t) * (*t)) - (4 * (*s))) + (2 * (*t))) + 1) == 0);
      if (!((*s) <= (*n)))
      {
        return;
      }
      else
      {
      }
      *a = (*a) + 1;
      *t = (*t) + 2;
      *s = (*s) + (*t);
    }
    func_to_recursive_line_29_to_40_0(t, a, n, s);
  }
  else
  {
  }
}

int main()
{
  int n;
  long long a;
  long long s;
  long long t;
  n = __VERIFIER_nondet_int();
  a = 0;
  s = 1;
  t = 1;
  func_to_recursive_line_29_to_40_0(&t, &a, &n, &s);
  __VERIFIER_assert(t == ((2 * a) + 1));
  __VERIFIER_assert(s == ((a + 1) * (a + 1)));
  __VERIFIER_assert(((((t * t) - (4 * s)) + (2 * t)) + 1) == 0);
  return 0;
}

