// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// It was automatically generated from 'simple_array_index_value_2.i' with https://github.com/FlorianDyck/semtransforms
// To reproduce it you can use the following trace:
// for2while: 1;for2while: 0;to_recursive: 0;to_recursive: 0
//
// SPDX-FileCopyrightText: 2017 Chimdyalwar, Bharti, et al.
//
// SPDX-License-Identifier: Apache-2.0

extern void abort(void);
extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
extern void __assert_perror_fail(int __errnum, const char *__file, unsigned int __line, const char *__function) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void reach_error()
{
  (void) (sizeof((0) ? (1) : (0))), __extension__(  {
    if (0)
    {
      ;
    }
    else
    {
      __assert_fail("0", "simple_array_index_value_2.c", 7, __extension__ __PRETTY_FUNCTION__);
    }
  }
);
}

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
      abort();
    }

  }
  else
  {
  }
  return;
}

unsigned int __VERIFIER_nondet_uint();
void func_to_recursive_line_44_to_45_0(unsigned int (*array)[10000], unsigned int *index)
{
  if ((*index) < 10000)
  {
    {
      {
        __VERIFIER_assert((*array)[*index] > (*index));
      }
      (*index)++;
    }
    func_to_recursive_line_44_to_45_0(array, index);
  }
  else
  {
  }
}

void func_to_recursive_line_38_to_41_0(unsigned int (*array)[10000], unsigned int *index)
{
  if ((*index) < 10000)
  {
    {
      {
        unsigned int tmp = __VERIFIER_nondet_uint();
        assume_abort_if_not(tmp > (*index));
        (*array)[*index] = tmp;
      }
      (*index)++;
    }
    func_to_recursive_line_38_to_41_0(array, index);
  }
  else
  {
  }
}

int main()
{
  unsigned int array[10000];
  unsigned int index;
  {
    index = 0;
    func_to_recursive_line_38_to_41_0(&array, &index);
  }
  {
    index = 0;
    func_to_recursive_line_44_to_45_0(&array, &index);
  }
}

