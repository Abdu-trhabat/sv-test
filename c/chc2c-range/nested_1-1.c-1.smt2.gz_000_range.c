// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: tricera-benchmarks/nested_1-1.c-1.smt2.gz_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "nested_1-1.c-1.smt2.gz_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main7_0;
    int inv_main7_1;
    int inv_main5_0;
    int inv_main5_1;
    int inv_main4_0;
    int inv_main4_1;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    int A_2;
    int B_2;
    int C_2;
    int A_3;
    int B_3;
    int C_3;
    int A_4;
    int B_4;
    int C_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;

    if (((inv_main7_0 <= -1000000000) || (inv_main7_0 >= 1000000000))
        || ((inv_main7_1 <= -1000000000) || (inv_main7_1 >= 1000000000))
        || ((inv_main5_0 <= -1000000000) || (inv_main5_0 >= 1000000000))
        || ((inv_main5_1 <= -1000000000) || (inv_main5_1 >= 1000000000))
        || ((inv_main4_0 <= -1000000000) || (inv_main4_0 >= 1000000000))
        || ((inv_main4_1 <= -1000000000) || (inv_main4_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((A_0 == 0) && (B_0 == 0)))
        abort ();
    inv_main4_0 = A_0;
    inv_main4_1 = B_0;
    goto inv_main4;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_1 = inv_main4_0;
          A_1 = inv_main4_1;
          if (!((0 <= A_1) && (!(B_1 <= 268435454)) && (0 <= B_1)))
              abort ();
          inv_main5_0 = B_1;
          inv_main5_1 = A_1;
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          D_5 = __VERIFIER_nondet_int ();
          if (((D_5 <= -1000000000) || (D_5 >= 1000000000)))
              abort ();
          B_5 = inv_main5_0;
          A_5 = inv_main5_1;
          if (!
              ((C_5 == 0) && (-1 <= C_5) && (0 <= A_5) && (0 <= B_5)
               && (C_5 <= 1) && ((!(1 <= C_5)) || (1 <= B_5))
               && ((!(C_5 <= -1)) || (B_5 <= -1))
               && (B_5 == ((2 * D_5) + C_5))))
              abort ();
          goto main_error;

      case 1:
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          B_2 = inv_main4_0;
          A_2 = inv_main4_1;
          if (!((0 <= A_2) && (0 <= B_2) && (B_2 <= 268435454) && (C_2 == 0)))
              abort ();
          inv_main7_0 = B_2;
          inv_main7_1 = C_2;
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          B_3 = inv_main7_0;
          A_3 = inv_main7_1;
          if (!((0 <= A_3) && (0 <= B_3) && (A_3 <= 9) && (C_3 == (A_3 + 1))))
              abort ();
          inv_main7_0 = B_3;
          inv_main7_1 = C_3;
          goto inv_main7_0;

      default:
          abort ();
      }
  inv_main7_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = inv_main7_0;
          C_4 = inv_main7_1;
          if (!
              ((0 <= C_4) && (0 <= B_4) && (!(C_4 <= 9))
               && (A_4 == (B_4 + 1))))
              abort ();
          inv_main4_0 = A_4;
          inv_main4_1 = C_4;
          goto inv_main4;

      case 1:
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          B_3 = inv_main7_0;
          A_3 = inv_main7_1;
          if (!((0 <= A_3) && (0 <= B_3) && (A_3 <= 9) && (C_3 == (A_3 + 1))))
              abort ();
          inv_main7_0 = B_3;
          inv_main7_1 = C_3;
          goto inv_main7_0;

      default:
          abort ();
      }

    // return expression

}

