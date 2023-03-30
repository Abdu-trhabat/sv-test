// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'hard2.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0;to_recursive: 0
//
// SPDX-FileCopyrightText: Manna
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "hard2.c", 8, "reach_error");
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

void func_to_recursive_line_40_to_50_0(int *d, int *p, int *r, int *B, int *q, int *A)
{
  if (1)
  {
    {
      __VERIFIER_assert((*A) == (((*q) * (*B)) + (*r)));
      __VERIFIER_assert((*d) == ((*B) * (*p)));
      if (!((*p) != 1))
      {
        return;
      }
      else
      {
      }
      *d = (*d) / 2;
      *p = (*p) / 2;
      if ((*r) >= (*d))
      {
        *r = (*r) - (*d);
        *q = (*q) + (*p);
      }
      else
      {
      }
    }
    func_to_recursive_line_40_to_50_0(d, p, r, B, q, A);
  }
  else
  {
  }
}

void func_to_recursive_line_30_to_37_0(int *d, int *p, int *r, int *B, int *q, int *A)
{
  if (1)
  {
    {
      __VERIFIER_assert((*q) == 0);
      __VERIFIER_assert((*r) == (*A));
      __VERIFIER_assert((*d) == ((*B) * (*p)));
      if (!((*r) >= (*d)))
      {
        return;
      }
      else
      {
      }
      *d = 2 * (*d);
      *p = 2 * (*p);
    }
    func_to_recursive_line_30_to_37_0(d, p, r, B, q, A);
  }
  else
  {
  }
}

int main()
{
  int A;
  int B;
  int r;
  int d;
  int p;
  int q;
  A = __VERIFIER_nondet_int();
  B = 1;
  r = A;
  d = B;
  p = 1;
  q = 0;
  func_to_recursive_line_30_to_37_0(&d, &p, &r, &B, &q, &A);
  func_to_recursive_line_40_to_50_0(&d, &p, &r, &B, &q, &A);
  __VERIFIER_assert(A == ((d * q) + r));
  __VERIFIER_assert(B == d);
  return 0;
}

