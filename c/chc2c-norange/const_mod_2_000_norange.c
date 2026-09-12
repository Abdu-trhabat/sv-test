// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/const_mod_2_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "const_mod_2_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_0;
    int A_0;
    int A_1;
    int B_1;
    int A_2;



    // main logic
    goto main_init;

  main_init:
    if (!(A_0 == 0))
        abort ();
    inv_0 = A_0;
    B_1 = __VERIFIER_nondet_int ();
    A_1 = inv_0;
    if (!(B_1 == (A_1 + 23468)))
        abort ();
    inv_0 = B_1;
    goto inv_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = inv_0;
          if (!(!(((A_2 % 23468 + 23468) % 23468) == 0)))
              abort ();
          goto main_error;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          A_1 = inv_0;
          if (!(B_1 == (A_1 + 23468)))
              abort ();
          inv_0 = B_1;
          goto inv_0;

      default:
          abort ();
      }

    // return expression

}

