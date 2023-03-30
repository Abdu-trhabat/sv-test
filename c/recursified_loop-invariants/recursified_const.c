// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'const.c' with https://github.com/FlorianDyck/semtransforms
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
  __assert_fail("0", "const.c", 3, "reach_error");
}

extern unsigned int __VERIFIER_nondet_uint(void);
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

void func_to_recursive_line_13_to_18_0(unsigned int *s)
{
  if (__VERIFIER_nondet_uint())
  {
    {
      if ((*s) != 0)
      {
        ++(*s);
      }
      else
      {
      }
      if (__VERIFIER_nondet_uint())
      {
        __VERIFIER_assert((*s) == 0);
      }
      else
      {
      }
    }
    func_to_recursive_line_13_to_18_0(s);
  }
  else
  {
  }
}

int main(void)
{
  unsigned int s = 0;
  func_to_recursive_line_13_to_18_0(&s);
  return 0;
}

