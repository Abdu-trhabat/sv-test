// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'linear-inequality-inv-a.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// to_recursive: 0
//
// SPDX-FileCopyrightText: 2022 Dirk Beyer, Matthias Dangl, Daniel Dietsch, Matthias Heizmann, Thomas Lemberger, and Michael Tautschnig
//
// SPDX-License-Identifier: Apache-2.0

extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "linear-inequality-inv-a.c", 2, "reach_error");
}

extern unsigned char __VERIFIER_nondet_uchar(void);
void func_to_recursive_line_12_to_15_0(unsigned int *i, unsigned int *s, unsigned char *v, unsigned char *n)
{
  if ((*i) < (*n))
  {
    {
      *v = __VERIFIER_nondet_uchar();
      *s += *v;
      ++(*i);
    }
    func_to_recursive_line_12_to_15_0(i, s, v, n);
  }
  else
  {
  }
}

int main()
{
  unsigned char n = __VERIFIER_nondet_uchar();
  if (n == 0)
  {
    return 0;
  }
  else
  {
  }
  unsigned char v = 0;
  unsigned int s = 0;
  unsigned int i = 0;
  func_to_recursive_line_12_to_15_0(&i, &s, &v, &n);
  if (s < v)
  {
    reach_error();
    return 1;
  }
  else
  {
  }
  if (s > 65025)
  {
    reach_error();
    return 1;
  }
  else
  {
  }
  return 0;
}

