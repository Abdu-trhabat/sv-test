// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'fermat2.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: Bressoud
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "fermat2.c", 5, "reach_error");
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

void func_to_recursive_line_33_to_42_0(int *u, int *v, int *r, int *A)
{
  if (1)
  {
    {
      __VERIFIER_assert((4 * ((*A) + (*r))) == (((((*u) * (*u)) - ((*v) * (*v))) - (2 * (*u))) + (2 * (*v))));
      if (!((*r) != 0))
      {
        return;
      }
      else
      {
      }
      if ((*r) > 0)
      {
        *r = (*r) - (*v);
        *v = (*v) + 2;
      }
      else
      {
        *r = (*r) + (*u);
        *u = (*u) + 2;
      }
    }
    func_to_recursive_line_33_to_42_0(u, v, r, A);
  }
  else
  {
  }
}

int main()
{
  int A;
  int R;
  int u;
  int v;
  int r;
  A = __VERIFIER_nondet_double();
  R = __VERIFIER_nondet_double();
  assume_abort_if_not(((R - 1) * (R - 1)) < A);
  assume_abort_if_not((A % 2) == 1);
  u = (2 * R) + 1;
  v = 1;
  r = (R * R) - A;
  func_to_recursive_line_33_to_42_0(&u, &v, &r, &A);
  __VERIFIER_assert((4 * A) == ((((u * u) - (v * v)) - (2 * u)) + (2 * v)));
  return 0;
}

