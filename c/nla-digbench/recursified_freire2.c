// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'freire2.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2023 copyright holder of 'freire2.c' in the SV-Benchmarks collection
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "freire2.c", 10, "reach_error");
}

extern double __VERIFIER_nondet_double(void);
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

void func_to_recursive_line_0_to_36_0(int *r, double *s, double *a, double *x)
{
  if (1)
  {
    {
      __VERIFIER_assert((((int) (4 * (*s))) - ((12 * (*r)) * (*r))) == 1);
      __VERIFIER_assert(((((((4 * (*r)) * (*r)) * (*r)) - ((6 * (*r)) * (*r))) + (3 * (*r))) + ((int) ((4 * (*x)) - (4 * (*a))))) == 1);
      __VERIFIER_assert((int) ((((((((8 * (*r)) * (*s)) - (24 * (*a))) + (16 * (*r))) - (12 * (*s))) + (24 * (*x))) - 3) == 0));
      if (!(((*x) - (*s)) > 0.0))
      {
        return;
      }
      else
      {
      }
      *x = (*x) - (*s);
      *s = ((*s) + (6 * (*r))) + 3;
      *r = (*r) + 1;
    }
    func_to_recursive_line_0_to_36_0(r, s, a, x);
  }
  else
  {
  }
}

int main()
{
  int r;
  double a;
  double x;
  double s;
  a = __VERIFIER_nondet_double();
  x = a;
  s = 3.25;
  r = 1;
  func_to_recursive_line_0_to_36_0(&r, &s, &a, &x);
  __VERIFIER_assert((((int) (4 * s)) - ((12 * r) * r)) == 1);
  __VERIFIER_assert(((((((4 * r) * r) * r) - ((6 * r) * r)) + (3 * r)) + ((int) ((4 * x) - (4 * a)))) == 1);
  __VERIFIER_assert((int) ((((((((8 * r) * s) - (24 * a)) + (16 * r)) - (12 * s)) + (24 * x)) - 3) == 0));
  return 0;
}

