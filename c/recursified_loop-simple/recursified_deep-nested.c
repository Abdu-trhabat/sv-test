// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'deep-nested.c' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// for2while: 3;for2while: 1;to_recursive: 0;to_recursive: 0;for2while: 0;for2while: 1;for2while: 0;to_recursive: 2;to_recursive: 0;to_recursive: 0
//
// SPDX-FileCopyrightText: Philipp Berger, RWTH Aachen University
//
// SPDX-License-Identifier: Apache-2.0

extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  __assert_fail("0", "deep-nested.c", 2, "reach_error");
}

void func_to_recursive_line_14_to_16_0(unsigned *d, unsigned *e, unsigned *uint32_max, unsigned *a, unsigned *b, unsigned *c)
{
  if ((*e) < ((*uint32_max) - 1))
  {
    {
      {
        if ((((((*a) == (*b)) && ((*b) == (*c))) && ((*c) == (*d))) && ((*d) == (*e))) && ((*e) == ((*uint32_max) - 2)))
        {
          {
            reach_error();
          }
        }
        else
        {
        }
      }
      ++(*e);
    }
    func_to_recursive_line_14_to_16_0(d, e, uint32_max, a, b, c);
  }
  else
  {
  }
}

void func_to_recursive_line_13_to_14_0(unsigned *d, unsigned *e, unsigned *uint32_max, unsigned *a, unsigned *b, unsigned *c)
{
  if ((*d) < ((*uint32_max) - 1))
  {
    {
      {
        {
          *e = 0;
          func_to_recursive_line_14_to_16_0(&(*d), &(*e), &(*uint32_max), &(*a), &(*b), &(*c));
        }
      }
      ++(*d);
    }
    func_to_recursive_line_13_to_14_0(d, e, uint32_max, a, b, c);
  }
  else
  {
  }
}

void func_to_recursive_line_12_to_13_0(unsigned *d, unsigned *e, unsigned *uint32_max, unsigned *a, unsigned *b, unsigned *c)
{
  if ((*c) < ((*uint32_max) - 1))
  {
    {
      {
        {
          *d = 0;
          func_to_recursive_line_13_to_14_0(&(*d), &(*e), &(*uint32_max), &(*a), &(*b), &(*c));
        }
      }
      ++(*c);
    }
    func_to_recursive_line_12_to_13_0(d, e, uint32_max, a, b, c);
  }
  else
  {
  }
}

void func_to_recursive_line_11_to_12_0(unsigned *d, unsigned *e, unsigned *uint32_max, unsigned *a, unsigned *b, unsigned *c)
{
  if ((*b) < ((*uint32_max) - 1))
  {
    {
      {
        {
          *c = 0;
          func_to_recursive_line_12_to_13_0(&(*d), &(*e), &(*uint32_max), &(*a), &(*b), &(*c));
        }
      }
      ++(*b);
    }
    func_to_recursive_line_11_to_12_0(d, e, uint32_max, a, b, c);
  }
  else
  {
  }
}

void func_to_recursive_line_10_to_11_0(unsigned *d, unsigned *e, unsigned *uint32_max, unsigned *a, unsigned *b, unsigned *c)
{
  if ((*a) < ((*uint32_max) - 1))
  {
    {
      {
        {
          *b = 0;
          func_to_recursive_line_11_to_12_0(&(*d), &(*e), &(*uint32_max), &(*a), &(*b), &(*c));
        }
      }
      ++(*a);
    }
    func_to_recursive_line_10_to_11_0(d, e, uint32_max, a, b, c);
  }
  else
  {
  }
}

int main()
{
  unsigned a;
  unsigned b;
  unsigned c;
  unsigned d;
  unsigned e;
  unsigned uint32_max;
  uint32_max = 0xffffffff;
  {
    a = 0;
    func_to_recursive_line_10_to_11_0(&d, &e, &uint32_max, &a, &b, &c);
  }
  return 0;
}

