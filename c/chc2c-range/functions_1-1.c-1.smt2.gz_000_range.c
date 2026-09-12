// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: tricera-benchmarks/functions_1-1.c-1.smt2.gz_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "functions_1-1.c-1.smt2.gz_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main3_0;
    int inv_main4_0;
    int A_0;
    int A_1;
    int A_2;
    int B_2;
    int A_3;
    int B_3;
    int C_3;

    if (((inv_main3_0 <= -1000000000) || (inv_main3_0 >= 1000000000))
        || ((inv_main4_0 <= -1000000000) || (inv_main4_0 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!(A_0 == 0))
        abort ();
    inv_main3_0 = A_0;
    A_2 = __VERIFIER_nondet_int ();
    if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
        abort ();
    B_2 = inv_main3_0;
    if (!((0 <= B_2) && (B_2 <= 268435454) && (A_2 == (B_2 + 2))))
        abort ();
    inv_main3_0 = A_2;
    goto inv_main3_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main3_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = inv_main3_0;
          if (!((!(A_1 <= 268435454)) && (0 <= A_1)))
              abort ();
          inv_main4_0 = A_1;
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          A_3 = inv_main4_0;
          if (!
              ((!(B_3 == 0)) && (-1 <= B_3) && (0 <= A_3) && (B_3 <= 1)
               && ((!(1 <= B_3)) || (1 <= A_3)) && ((!(B_3 <= -1))
                                                    || (A_3 <= -1))
               && (A_3 == ((2 * C_3) + B_3))))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = inv_main3_0;
          if (!((0 <= B_2) && (B_2 <= 268435454) && (A_2 == (B_2 + 2))))
              abort ();
          inv_main3_0 = A_2;
          goto inv_main3_0;

      default:
          abort ();
      }

    // return expression

}

