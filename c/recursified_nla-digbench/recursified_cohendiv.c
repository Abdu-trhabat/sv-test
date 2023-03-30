// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'cohendiv.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0;to_recursive: 0
//
// SPDX-FileCopyrightText: Cohen
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "cohendiv.c", 8, "reach_error");
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

void func_to_recursive_line_40_to_51_0(int *a, int *x, int *y, int *r, int *q, int *b)
{
  if (1)
  {
    {
      __VERIFIER_assert((*b) == ((*y) * (*a)));
      __VERIFIER_assert((*x) == (((*q) * (*y)) + (*r)));
      __VERIFIER_assert((*r) >= 0);
      if (!((*r) >= (2 * (*b))))
      {
        return;
      }
      else
      {
      }
      __VERIFIER_assert((*r) >= ((2 * (*y)) * (*a)));
      *a = 2 * (*a);
      *b = 2 * (*b);
    }
    func_to_recursive_line_40_to_51_0(a, x, y, r, q, b);
  }
  else
  {
  }
}

void func_to_recursive_line_31_to_54_0(int *a, int *x, int *y, int *r, int *q, int *b)
{
  if (1)
  {
    {
      __VERIFIER_assert((*b) == ((*y) * (*a)));
      __VERIFIER_assert((*x) == (((*q) * (*y)) + (*r)));
      if (!((*r) >= (*y)))
      {
        return;
      }
      else
      {
      }
      *a = 1;
      *b = *y;
      func_to_recursive_line_40_to_51_0(&(*a), &(*x), &(*y), &(*r), &(*q), &(*b));
      *r = (*r) - (*b);
      *q = (*q) + (*a);
    }
    func_to_recursive_line_31_to_54_0(a, x, y, r, q, b);
  }
  else
  {
  }
}

int main()
{
  int x;
  int y;
  int q;
  int r;
  int a;
  int b;
  x = __VERIFIER_nondet_int();
  y = __VERIFIER_nondet_int();
  assume_abort_if_not(y >= 1);
  q = 0;
  r = x;
  a = 0;
  b = 0;
  func_to_recursive_line_31_to_54_0(&a, &x, &y, &r, &q, &b);
  __VERIFIER_assert(x == ((q * y) + r));
  return 0;
}

