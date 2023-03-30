// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'ps3.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2023 copyright holder of 'ps3.c' in the SV-Benchmarks collection
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "ps3.c", 3, "reach_error");
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

void func_to_recursive_line_25_to_33_0(int *k, int *x, int *y, int *c)
{
  if (1)
  {
    {
      __VERIFIER_assert(((((6 * (*x)) - (((2 * (*y)) * (*y)) * (*y))) - ((3 * (*y)) * (*y))) - (*y)) == 0);
      if (!((*c) < (*k)))
      {
        return;
      }
      else
      {
      }
      *c = (*c) + 1;
      *y = (*y) + 1;
      *x = ((*y) * (*y)) + (*x);
    }
    func_to_recursive_line_25_to_33_0(k, x, y, c);
  }
  else
  {
  }
}

int main()
{
  int k;
  int y;
  int x;
  int c;
  k = __VERIFIER_nondet_int();
  y = 0;
  x = 0;
  c = 0;
  func_to_recursive_line_25_to_33_0(&k, &x, &y, &c);
  __VERIFIER_assert(((((6 * x) - (((2 * y) * y) * y)) - ((3 * y) * y)) - y) == 0);
  return 0;
}

