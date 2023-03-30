// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'nested_4.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// for2while: 3;for2while: 2;for2while: 0;to_recursive: 1;for2while: 0;to_recursive: 1;to_recursive: 0;to_recursive: 0
//
// SPDX-FileCopyrightText: 2007-2020 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "nested_4.c", 13, "reach_error");
}

void func_to_recursive_line_25_to_25_0(int *d)
{
  if ((*d) < 6)
  {
    {
      {
      }
      ++(*d);
    }
    func_to_recursive_line_25_to_25_0(d);
  }
  else
  {
  }
}

void func_to_recursive_line_24_to_25_0(int *d, int *c)
{
  if ((*c) < 6)
  {
    {
      {
        {
          *d = 0;
          func_to_recursive_line_25_to_25_0(&(*d));
        }
      }
      ++(*c);
    }
    func_to_recursive_line_24_to_25_0(d, c);
  }
  else
  {
  }
}

void func_to_recursive_line_23_to_24_0(int *d, int *b, int *c)
{
  if ((*b) < 6)
  {
    {
      {
        {
          *c = 0;
          func_to_recursive_line_24_to_25_0(&(*d), &(*c));
        }
      }
      ++(*b);
    }
    func_to_recursive_line_23_to_24_0(d, b, c);
  }
  else
  {
  }
}

void func_to_recursive_line_22_to_23_0(int *d, int *a, int *b, int *c)
{
  if ((*a) < 6)
  {
    {
      {
        {
          *b = 0;
          func_to_recursive_line_23_to_24_0(&(*d), &(*b), &(*c));
        }
      }
      ++(*a);
    }
    func_to_recursive_line_22_to_23_0(d, a, b, c);
  }
  else
  {
  }
}

int main()
{
  int a = 6;
  int b = 6;
  int c = 6;
  int d = 6;
  {
    a = 0;
    func_to_recursive_line_22_to_23_0(&d, &a, &b, &c);
  }
  if (!((((a == 6) && (b == 6)) && (c == 6)) && (d == 6)))
  {
    reach_error();
  }
  else
  {
  }
  return 1;
}

