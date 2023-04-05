// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'geo3.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2023 copyright holder of 'geo3.c' in the SV-Benchmarks collection
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "geo3.c", 8, "reach_error");
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

void func_to_recursive_line_29_to_37_0(int *k, int *c, int *a, int *z, int *x, int *y)
{
  if (1)
  {
    {
      __VERIFIER_assert((((((*z) * (*x)) - (*x)) + (*a)) - (((*a) * (*z)) * (*y))) == 0);
      if (!((*c) < (*k)))
      {
        return;
      }
      else
      {
      }
      *c = (*c) + 1;
      *x = ((*x) * (*z)) + (*a);
      *y = (*y) * (*z);
    }
    func_to_recursive_line_29_to_37_0(k, c, a, z, x, y);
  }
  else
  {
  }
}

int main()
{
  int z;
  int a;
  int k;
  int x;
  int y;
  int c;
  z = __VERIFIER_nondet_int();
  a = __VERIFIER_nondet_int();
  k = __VERIFIER_nondet_int();
  x = a;
  y = 1;
  c = 1;
  func_to_recursive_line_29_to_37_0(&k, &c, &a, &z, &x, &y);
  __VERIFIER_assert(((((z * x) - x) + a) - ((a * z) * y)) == 0);
  return x;
}

