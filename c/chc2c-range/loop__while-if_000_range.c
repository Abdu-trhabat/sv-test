// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__while-if_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__while-if_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV_MAIN_23_0;
    int INV_MAIN_23_1;
    int INV_MAIN_23_2;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int A_9;
    int B_9;
    int C_9;

    if (((INV_MAIN_23_0 <= -1000000000) || (INV_MAIN_23_0 >= 1000000000))
        || ((INV_MAIN_23_1 <= -1000000000) || (INV_MAIN_23_1 >= 1000000000))
        || ((INV_MAIN_23_2 <= -1000000000) || (INV_MAIN_23_2 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((D_0 == B_0) && (C_0 == 0) && (!(D_0 >= 1)) && (E_0 == A_0)))
        abort ();
    INV_MAIN_23_0 = A_0;
    INV_MAIN_23_1 = B_0;
    INV_MAIN_23_2 = C_0;
    A_3 = __VERIFIER_nondet_int ();
    if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
        abort ();
    D_3 = INV_MAIN_23_0;
    B_3 = INV_MAIN_23_1;
    C_3 = INV_MAIN_23_2;
    if (!((D_3 >= 1) && (!(B_3 >= 1)) && (D_3 == (A_3 + 1))))
        abort ();
    INV_MAIN_23_0 = A_3;
    INV_MAIN_23_1 = B_3;
    INV_MAIN_23_2 = C_3;
    goto INV_MAIN_23_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV_MAIN_42:
    goto INV_MAIN_42;
  INV_MAIN_23_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          B_9 = INV_MAIN_23_0;
          C_9 = INV_MAIN_23_1;
          A_9 = INV_MAIN_23_2;
          if (!((!(B_9 >= 1)) && (!(A_9 == 0))))
              abort ();
          goto main_error;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          D_3 = INV_MAIN_23_0;
          B_3 = INV_MAIN_23_1;
          C_3 = INV_MAIN_23_2;
          if (!((D_3 >= 1) && (!(B_3 >= 1)) && (D_3 == (A_3 + 1))))
              abort ();
          INV_MAIN_23_0 = A_3;
          INV_MAIN_23_1 = B_3;
          INV_MAIN_23_2 = C_3;
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          D_3 = INV_MAIN_23_0;
          B_3 = INV_MAIN_23_1;
          C_3 = INV_MAIN_23_2;
          if (!((D_3 >= 1) && (!(B_3 >= 1)) && (D_3 == (A_3 + 1))))
              abort ();
          INV_MAIN_23_0 = A_3;
          INV_MAIN_23_1 = B_3;
          INV_MAIN_23_2 = C_3;
          goto INV_MAIN_23_1;

      case 2:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          D_3 = INV_MAIN_23_0;
          B_3 = INV_MAIN_23_1;
          C_3 = INV_MAIN_23_2;
          if (!((D_3 >= 1) && (!(B_3 >= 1)) && (D_3 == (A_3 + 1))))
              abort ();
          INV_MAIN_23_0 = A_3;
          INV_MAIN_23_1 = B_3;
          INV_MAIN_23_2 = C_3;
          goto INV_MAIN_23_1;

      default:
          abort ();
      }
  INV_MAIN_23_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = INV_MAIN_23_0;
          B_2 = INV_MAIN_23_1;
          E_2 = INV_MAIN_23_2;
          if (!
              ((D_2 == (A_2 + 1)) && (D_2 >= 1) && (B_2 >= 1)
               && (E_2 == (C_2 + -1))))
              abort ();
          INV_MAIN_23_0 = A_2;
          INV_MAIN_23_1 = B_2;
          INV_MAIN_23_2 = C_2;
          goto INV_MAIN_23_0;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          D_3 = INV_MAIN_23_0;
          B_3 = INV_MAIN_23_1;
          C_3 = INV_MAIN_23_2;
          if (!((D_3 >= 1) && (!(B_3 >= 1)) && (D_3 == (A_3 + 1))))
              abort ();
          INV_MAIN_23_0 = A_3;
          INV_MAIN_23_1 = B_3;
          INV_MAIN_23_2 = C_3;
          goto INV_MAIN_23_1;

      default:
          abort ();
      }

    // return expression

}

