// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'nested_2.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// for2while: 1;for2while: 0;to_recursive: 0;to_recursive: 0
//
// SPDX-FileCopyrightText: 2007-2020 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "nested_2.c", 13, "reach_error");
}

void func_to_recursive_line_21_to_21_0(int *b)
{
  if ((*b) < 6)
  {
    {
      {
      }
      ++(*b);
    }
    func_to_recursive_line_21_to_21_0(b);
  }
  else
  {
  }
}

void func_to_recursive_line_20_to_21_0(int *b, int *a)
{
  if ((*a) < 6)
  {
    {
      {
        {
          *b = 0;
          func_to_recursive_line_21_to_21_0(&(*b));
        }
      }
      ++(*a);
    }
    func_to_recursive_line_20_to_21_0(b, a);
  }
  else
  {
  }
}

int main()
{
  int a = 6;
  int b = 6;
  {
    a = 0;
    func_to_recursive_line_20_to_21_0(&b, &a);
  }
  if (!((a == 6) && (b == 6)))
  {
    reach_error();
  }
  else
  {
  }
  return 1;
}

