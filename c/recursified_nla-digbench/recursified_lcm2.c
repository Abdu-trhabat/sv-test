// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'lcm2.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: Dijkstra
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "lcm2.c", 5, "reach_error");
}

extern unsigned __VERIFIER_nondet_uint(void);
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

void func_to_recursive_line_35_to_46_0(unsigned *a, unsigned *x, unsigned *u, unsigned *b, unsigned *y, unsigned *v)
{
  if (1)
  {
    {
      __VERIFIER_assert((((*x) * (*u)) + ((*y) * (*v))) == ((2 * (*a)) * (*b)));
      if (!((*x) != (*y)))
      {
        return;
      }
      else
      {
      }
      if ((*x) > (*y))
      {
        *x = (*x) - (*y);
        *v = (*v) + (*u);
      }
      else
      {
        *y = (*y) - (*x);
        *u = (*u) + (*v);
      }
    }
    func_to_recursive_line_35_to_46_0(a, x, u, b, y, v);
  }
  else
  {
  }
}

int main()
{
  unsigned a;
  unsigned b;
  unsigned x;
  unsigned y;
  unsigned u;
  unsigned v;
  a = __VERIFIER_nondet_uint();
  b = __VERIFIER_nondet_uint();
  assume_abort_if_not(a >= 1);
  assume_abort_if_not(b >= 1);
  assume_abort_if_not(a <= 65535);
  assume_abort_if_not(b <= 65535);
  x = a;
  y = b;
  u = b;
  v = a;
  func_to_recursive_line_35_to_46_0(&a, &x, &u, &b, &y, &v);
  __VERIFIER_assert(((x * u) + (y * v)) == ((2 * a) * b));
  return 0;
}

