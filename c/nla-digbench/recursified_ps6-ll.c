// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'ps6-ll.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2023 copyright holder of 'ps6-ll.c' in the SV-Benchmarks collection
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "ps6-ll.c", 3, "reach_error");
}

extern short __VERIFIER_nondet_short(void);
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

void func_to_recursive_line_27_to_35_0(long long *c, long long *y, long long *x, short *k)
{
  if (1)
  {
    {
      __VERIFIER_assert((((((((((((-2) * (*y)) * (*y)) * (*y)) * (*y)) * (*y)) * (*y)) - (((((6 * (*y)) * (*y)) * (*y)) * (*y)) * (*y))) - ((((5 * (*y)) * (*y)) * (*y)) * (*y))) + ((*y) * (*y))) + (12 * (*x))) == 0);
      if (!((*c) < (*k)))
      {
        return;
      }
      else
      {
      }
      *c = (*c) + 1;
      *y = (*y) + 1;
      *x = (((((*y) * (*y)) * (*y)) * (*y)) * (*y)) + (*x);
    }
    func_to_recursive_line_27_to_35_0(c, y, x, k);
  }
  else
  {
  }
}

int main()
{
  short k;
  long long y;
  long long x;
  long long c;
  k = __VERIFIER_nondet_short();
  assume_abort_if_not(k <= 256);
  y = 0;
  x = 0;
  c = 0;
  func_to_recursive_line_27_to_35_0(&c, &y, &x, &k);
  __VERIFIER_assert((((((((((((-2) * y) * y) * y) * y) * y) * y) - (((((6 * y) * y) * y) * y) * y)) - ((((5 * y) * y) * y) * y)) + (y * y)) + (12 * x)) == 0);
  __VERIFIER_assert((k * y) == (y * y));
  return 0;
}

