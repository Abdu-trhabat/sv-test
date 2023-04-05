// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'prodbin-ll.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2023 copyright holder of 'prodbin-ll.c' in the SV-Benchmarks collection
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "prodbin-ll.c", 6, "reach_error");
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

void func_to_recursive_line_0_to_40_0(long long *z, int *a, long long *x, int *b, long long *y)
{
  if (1)
  {
    {
      __VERIFIER_assert(((*z) + ((*x) * (*y))) == (((long long) (*a)) * (*b)));
      if (!((*y) != 0))
      {
        return;
      }
      else
      {
      }
      if (((*y) % 2) == 1)
      {
        *z = (*z) + (*x);
        *y = (*y) - 1;
      }
      else
      {
      }
      *x = 2 * (*x);
      *y = (*y) / 2;
    }
    func_to_recursive_line_0_to_40_0(z, a, x, b, y);
  }
  else
  {
  }
}

int main()
{
  int a;
  int b;
  long long x;
  long long y;
  long long z;
  a = __VERIFIER_nondet_int();
  b = __VERIFIER_nondet_int();
  assume_abort_if_not(b >= 1);
  x = a;
  y = b;
  z = 0;
  func_to_recursive_line_0_to_40_0(&z, &a, &x, &b, &y);
  __VERIFIER_assert(z == (((long long) a) * b));
  return 0;
}

