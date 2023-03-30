// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'simple_vardep_2.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2017 Chimdyalwar, Bharti, et al.
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "simple_vardep_2.c", 6, "reach_error");
}

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

void func_to_recursive_line_20_to_24_0(unsigned int *k, unsigned int *j, unsigned int *i)
{
  if ((*k) < 0x0fffffff)
  {
    {
      *i = (*i) + 1;
      *j = (*j) + 2;
      *k = (*k) + 3;
      __VERIFIER_assert(((*k) == (3 * (*i))) && ((*j) == (2 * (*i))));
    }
    func_to_recursive_line_20_to_24_0(k, j, i);
  }
  else
  {
  }
}

int main()
{
  unsigned int i = 0;
  unsigned int j = 0;
  unsigned int k = 0;
  func_to_recursive_line_20_to_24_0(&k, &j, &i);
}

