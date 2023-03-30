// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'mod4.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2019 Dirk Beyer and Matthias
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "mod4.c", 3, "reach_error");
}

extern int __VERIFIER_nondet_int();
void __VERIFIER_assert(int cond)
{
  if (!cond)
  {
    ERROR:
    {
      reach_error();
      abort();
    }

  }
  else
  {
  }
  return;
}

void func_to_recursive_line_13_to_14_0(unsigned int *x)
{
  if (__VERIFIER_nondet_int())
  {
    {
      *x += 4;
    }
    func_to_recursive_line_13_to_14_0(x);
  }
  else
  {
  }
}

int main(void)
{
  unsigned int x = 0;
  func_to_recursive_line_13_to_14_0(&x);
  __VERIFIER_assert(!(x % 4));
  return 0;
}

