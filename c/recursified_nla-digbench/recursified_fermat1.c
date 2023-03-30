// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'fermat1.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0;to_recursive: 1;to_recursive: 0
//
// SPDX-FileCopyrightText: Knuth 4.5.4 Alg C ?
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "fermat1.c", 5, "reach_error");
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

void func_to_recursive_line_46_to_51_0(int *v, int *r, int *A, int *u)
{
  if (1)
  {
    {
      __VERIFIER_assert((4 * ((*A) + (*r))) == (((((*u) * (*u)) - ((*v) * (*v))) - (2 * (*u))) + (2 * (*v))));
      if (!((*r) < 0))
      {
        return;
      }
      else
      {
      }
      *r = (*r) + (*u);
      *u = (*u) + 2;
    }
    func_to_recursive_line_46_to_51_0(v, r, A, u);
  }
  else
  {
  }
}

void func_to_recursive_line_38_to_43_0(int *v, int *r, int *A, int *u)
{
  if (1)
  {
    {
      __VERIFIER_assert((4 * ((*A) + (*r))) == (((((*u) * (*u)) - ((*v) * (*v))) - (2 * (*u))) + (2 * (*v))));
      if (!((*r) > 0))
      {
        return;
      }
      else
      {
      }
      *r = (*r) - (*v);
      *v = (*v) + 2;
    }
    func_to_recursive_line_38_to_43_0(v, r, A, u);
  }
  else
  {
  }
}

void func_to_recursive_line_33_to_36_0(int *v, int *r, int *A, int *u)
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
      func_to_recursive_line_38_to_43_0(&(*v), &(*r), &(*A), &(*u));
      func_to_recursive_line_46_to_51_0(&(*v), &(*r), &(*A), &(*u));
    }
    func_to_recursive_line_33_to_36_0(v, r, A, u);
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
  func_to_recursive_line_33_to_36_0(&v, &r, &A, &u);
  __VERIFIER_assert((4 * A) == ((((u * u) - (v * v)) - (2 * u)) + (2 * v)));
  return 0;
}

