// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: tricera-benchmarks/phases_1-1.c-1.smt2.gz_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "phases_1-1.c-1.smt2.gz_000_norange.c", 13, "reach_error"); }



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
    int A_4;
    int B_4;
    int C_4;



    // main logic
    goto main_init;

  main_init:
    if (!(A_0 == 0))
        abort ();
    inv_main3_0 = A_0;
    A_2 = __VERIFIER_nondet_int ();
    B_2 = inv_main3_0;
    if (!
        ((0 <= B_2) && (B_2 <= 65519) && (B_2 <= 268435454)
         && (A_2 == (B_2 + 1))))
        abort ();
    inv_main3_0 = A_2;
    goto inv_main3_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main3_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_1 = inv_main3_0;
          if (!((!(A_1 <= 268435454)) && (0 <= A_1)))
              abort ();
          inv_main4_0 = A_1;
          B_4 = __VERIFIER_nondet_int ();
          C_4 = __VERIFIER_nondet_int ();
          A_4 = inv_main4_0;
          if (!
              ((!(B_4 == 0)) && (-1 <= B_4) && (0 <= A_4) && (B_4 <= 1)
               && ((!(1 <= B_4)) || (1 <= A_4)) && ((!(B_4 <= -1))
                                                    || (A_4 <= -1))
               && (A_4 == ((2 * C_4) + B_4))))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = inv_main3_0;
          if (!
              ((0 <= B_2) && (B_2 <= 65519) && (B_2 <= 268435454)
               && (A_2 == (B_2 + 1))))
              abort ();
          inv_main3_0 = A_2;
          A_2 = __VERIFIER_nondet_int ();
          B_2 = inv_main3_0;
          if (!
              ((0 <= B_2) && (B_2 <= 65519) && (B_2 <= 268435454)
               && (A_2 == (B_2 + 1))))
              abort ();
          inv_main3_0 = A_2;
          goto inv_main3_1;

      case 2:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = inv_main3_0;
          if (!
              ((0 <= B_2) && (B_2 <= 65519) && (B_2 <= 268435454)
               && (A_2 == (B_2 + 1))))
              abort ();
          inv_main3_0 = A_2;
          goto inv_main3_1;

      default:
          abort ();
      }
  inv_main3_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = inv_main3_0;
          if (!
              ((0 <= B_3) && (!(B_3 <= 65519)) && (B_3 <= 268435454)
               && (A_3 == (B_3 + 2))))
              abort ();
          inv_main3_0 = A_3;
          goto inv_main3_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = inv_main3_0;
          if (!
              ((0 <= B_2) && (B_2 <= 65519) && (B_2 <= 268435454)
               && (A_2 == (B_2 + 1))))
              abort ();
          inv_main3_0 = A_2;
          goto inv_main3_1;

      default:
          abort ();
      }

    // return expression

}

