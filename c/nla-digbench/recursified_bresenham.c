// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'bresenham.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: '10 Srivastava et al.
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "bresenham.c", 7, "reach_error");
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

void func_to_recursive_line_27_to_39_0(int *v, int *X, int *Y, int *y, int *x)
{
  if (1)
  {
    {
      __VERIFIER_assert(((((((2 * (*Y)) * (*x)) - ((2 * (*X)) * (*y))) - (*X)) + (2 * (*Y))) - (*v)) == 0);
      if (!((*x) <= (*X)))
      {
        return;
      }
      else
      {
      }
      if ((*v) < 0)
      {
        *v = (*v) + (2 * (*Y));
      }
      else
      {
        *v = (*v) + (2 * ((*Y) - (*X)));
        (*y)++;
      }
      (*x)++;
    }
    func_to_recursive_line_27_to_39_0(v, X, Y, y, x);
  }
  else
  {
  }
}

int main()
{
  int X;
  int Y;
  int v;
  int x;
  int y;
  X = __VERIFIER_nondet_int();
  Y = __VERIFIER_nondet_int();
  v = (2 * Y) - X;
  y = 0;
  x = 0;
  func_to_recursive_line_27_to_39_0(&v, &X, &Y, &y, &x);
  __VERIFIER_assert((((((((2 * Y) * x) - ((2 * x) * y)) - X) + (2 * Y)) - v) + (2 * y)) == 0);
  return 0;
}

