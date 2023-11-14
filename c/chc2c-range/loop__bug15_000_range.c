// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__bug15_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__bug15_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV_MAIN_42_0;
    int INV_MAIN_42_1;
    int A_0;
    int B_0;
    int v_2_0;
    int v_3_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int A_2;
    int B_2;
    int C_2;
    int A_3;
    int B_3;
    int C_3;
    int A_4;
    int B_4;

    if (((INV_MAIN_42_0 <= -1000000000) || (INV_MAIN_42_0 >= 1000000000))
        || ((INV_MAIN_42_1 <= -1000000000) || (INV_MAIN_42_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((v_2_0 <= -1000000000) || (v_2_0 >= 1000000000))
        || ((v_3_0 <= -1000000000) || (v_3_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((A_0 == B_0) && (1 == v_2_0) && (1 == v_3_0)))
        abort ();
    INV_MAIN_42_0 = v_2_0;
    INV_MAIN_42_1 = v_3_0;
    A_2 = __VERIFIER_nondet_int ();
    if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
        abort ();
    B_2 = INV_MAIN_42_0;
    C_2 = INV_MAIN_42_1;
    if (!((C_2 >= 3) && (B_2 <= 2) && (A_2 == ((2 * B_2) + 4))))
        abort ();
    INV_MAIN_42_0 = A_2;
    INV_MAIN_42_1 = C_2;
    goto INV_MAIN_42_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV_MAIN_42_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_4 = INV_MAIN_42_0;
          B_4 = INV_MAIN_42_1;
          if (!((B_4 >= 3) && (!(A_4 <= 2)) && (!((4 * A_4) == (4 * B_4)))))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = INV_MAIN_42_0;
          C_2 = INV_MAIN_42_1;
          if (!((C_2 >= 3) && (B_2 <= 2) && (A_2 == ((2 * B_2) + 4))))
              abort ();
          INV_MAIN_42_0 = A_2;
          INV_MAIN_42_1 = C_2;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = INV_MAIN_42_0;
          C_2 = INV_MAIN_42_1;
          if (!((C_2 >= 3) && (B_2 <= 2) && (A_2 == ((2 * B_2) + 4))))
              abort ();
          INV_MAIN_42_0 = A_2;
          INV_MAIN_42_1 = C_2;
          goto INV_MAIN_42_2;

      case 2:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = INV_MAIN_42_0;
          C_3 = INV_MAIN_42_1;
          if (!((!(C_3 >= 3)) && (!(B_3 <= 2)) && (A_3 == ((2 * C_3) + 4))))
              abort ();
          INV_MAIN_42_0 = B_3;
          INV_MAIN_42_1 = A_3;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = INV_MAIN_42_0;
          C_2 = INV_MAIN_42_1;
          if (!((C_2 >= 3) && (B_2 <= 2) && (A_2 == ((2 * B_2) + 4))))
              abort ();
          INV_MAIN_42_0 = A_2;
          INV_MAIN_42_1 = C_2;
          goto INV_MAIN_42_2;

      case 3:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = INV_MAIN_42_0;
          C_2 = INV_MAIN_42_1;
          if (!((C_2 >= 3) && (B_2 <= 2) && (A_2 == ((2 * B_2) + 4))))
              abort ();
          INV_MAIN_42_0 = A_2;
          INV_MAIN_42_1 = C_2;
          goto INV_MAIN_42_2;

      default:
          abort ();
      }
  INV_MAIN_42_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          C_1 = INV_MAIN_42_0;
          D_1 = INV_MAIN_42_1;
          if (!
              ((B_1 == ((2 * C_1) + 4)) && (!(D_1 >= 3)) && (C_1 <= 2)
               && (A_1 == ((2 * D_1) + 4))))
              abort ();
          INV_MAIN_42_0 = B_1;
          INV_MAIN_42_1 = A_1;
          goto INV_MAIN_42_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = INV_MAIN_42_0;
          C_2 = INV_MAIN_42_1;
          if (!((C_2 >= 3) && (B_2 <= 2) && (A_2 == ((2 * B_2) + 4))))
              abort ();
          INV_MAIN_42_0 = A_2;
          INV_MAIN_42_1 = C_2;
          goto INV_MAIN_42_2;

      default:
          abort ();
      }
  INV_MAIN_42_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = INV_MAIN_42_0;
          C_3 = INV_MAIN_42_1;
          if (!((!(C_3 >= 3)) && (!(B_3 <= 2)) && (A_3 == ((2 * C_3) + 4))))
              abort ();
          INV_MAIN_42_0 = B_3;
          INV_MAIN_42_1 = A_3;
          goto INV_MAIN_42_1;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = INV_MAIN_42_0;
          C_2 = INV_MAIN_42_1;
          if (!((C_2 >= 3) && (B_2 <= 2) && (A_2 == ((2 * B_2) + 4))))
              abort ();
          INV_MAIN_42_0 = A_2;
          INV_MAIN_42_1 = C_2;
          goto INV_MAIN_42_2;

      default:
          abort ();
      }

    // return expression

}

