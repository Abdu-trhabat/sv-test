// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'geo1-u.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2023 copyright holder of 'geo1-u.c' in the SV-Benchmarks collection
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "geo1-u.c", 9, "reach_error");
}

extern unsigned int __VERIFIER_nondet_uint(void);
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

void func_to_recursive_line_28_to_36_0(unsigned int *k, long long *c, unsigned int *z, long long *y, long long *x)
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
    func_to_recursive_line_28_to_36_0(k, c, z, y, x);
  }
  else
  {
  }
}

int main()
{
  unsigned int z;
  unsigned int k;
  long long x;
  long long y;
  long long c;
  z = __VERIFIER_nondet_uint();
  k = __VERIFIER_nondet_uint();
  x = 1;
  y = z;
  c = 1;
  func_to_recursive_line_28_to_36_0(&k, &c, &z, &y, &x);
  x = x * (z - 1);
  __VERIFIER_assert(((1 + x) - y) == 0);
  return 0;
}

