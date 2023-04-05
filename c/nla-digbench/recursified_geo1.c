// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'geo1.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2023 copyright holder of 'geo1.c' in the SV-Benchmarks collection
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "geo1.c", 9, "reach_error");
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

void func_to_recursive_line_28_to_36_0(int *c, int *x, int *k, int *y, int *z)
{
  if (1)
  {
    {
      __VERIFIER_assert((((((*x) * (*z)) - (*x)) - (*y)) + 1) == 0);
      if (!((*c) < (*k)))
      {
        return;
      }
      else
      {
      }
      *c = (*c) + 1;
      *x = ((*x) * (*z)) + 1;
      *y = (*y) * (*z);
    }
    func_to_recursive_line_28_to_36_0(c, x, k, y, z);
  }
  else
  {
  }
}

int main()
{
  int z;
  int k;
  int x;
  int y;
  int c;
  z = __VERIFIER_nondet_int();
  k = __VERIFIER_nondet_int();
  x = 1;
  y = z;
  c = 1;
  func_to_recursive_line_28_to_36_0(&c, &x, &k, &y, &z);
  x = x * (z - 1);
  __VERIFIER_assert(((1 + x) - y) == 0);
  return 0;
}

