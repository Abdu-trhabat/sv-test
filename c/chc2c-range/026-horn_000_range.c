// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/026-horn_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "026-horn_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV1_0;
    int INV1_1;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int A_3;
    int B_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;

    if (((INV1_0 <= -1000000000) || (INV1_0 >= 1000000000))
        || ((INV1_1 <= -1000000000) || (INV1_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((B_3 <= 10) && (A_3 == B_3)))
        abort ();
    INV1_0 = A_3;
    INV1_1 = B_3;
    A_1 = __VERIFIER_nondet_int ();
    if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
        abort ();
    B_1 = __VERIFIER_nondet_int ();
    if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
        abort ();
    E_1 = __VERIFIER_nondet_int ();
    if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
        abort ();
    F_1 = __VERIFIER_nondet_int ();
    if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
        abort ();
    C_1 = INV1_0;
    D_1 = INV1_1;
    if (!
        ((D_1 == (B_1 + -1)) && (C_1 == (A_1 + -1)) && (F_1 <= 10)
         && (D_1 <= 9) && (C_1 <= 10) && (E_1 == F_1)))
        abort ();
    INV1_0 = A_1;
    INV1_1 = B_1;
    goto INV1_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV1_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          A_4 = INV1_0;
          B_4 = INV1_1;
          if (!
              ((!(A_4 == (B_4 + 1))) && (D_4 <= 10) && (!(B_4 <= 9))
               && (!(A_4 <= 10)) && (C_4 == D_4)))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          C_1 = INV1_0;
          D_1 = INV1_1;
          if (!
              ((D_1 == (B_1 + -1)) && (C_1 == (A_1 + -1)) && (F_1 <= 10)
               && (D_1 <= 9) && (C_1 <= 10) && (E_1 == F_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          C_1 = INV1_0;
          D_1 = INV1_1;
          if (!
              ((D_1 == (B_1 + -1)) && (C_1 == (A_1 + -1)) && (F_1 <= 10)
               && (D_1 <= 9) && (C_1 <= 10) && (E_1 == F_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          goto INV1_2;

      case 2:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          C_2 = INV1_0;
          B_2 = INV1_1;
          if (!
              ((C_2 == (A_2 + -1)) && (E_2 <= 10) && (C_2 <= 10)
               && (!(B_2 <= 9)) && (D_2 == E_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          C_1 = INV1_0;
          D_1 = INV1_1;
          if (!
              ((D_1 == (B_1 + -1)) && (C_1 == (A_1 + -1)) && (F_1 <= 10)
               && (D_1 <= 9) && (C_1 <= 10) && (E_1 == F_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          goto INV1_2;

      case 3:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          C_1 = INV1_0;
          D_1 = INV1_1;
          if (!
              ((D_1 == (B_1 + -1)) && (C_1 == (A_1 + -1)) && (F_1 <= 10)
               && (D_1 <= 9) && (C_1 <= 10) && (E_1 == F_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_0 = __VERIFIER_nondet_int ();
          if (((B_0 <= -1000000000) || (B_0 >= 1000000000)))
              abort ();
          D_0 = __VERIFIER_nondet_int ();
          if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
              abort ();
          E_0 = __VERIFIER_nondet_int ();
          if (((E_0 <= -1000000000) || (E_0 >= 1000000000)))
              abort ();
          A_0 = INV1_0;
          C_0 = INV1_1;
          if (!
              ((C_0 == (B_0 + -1)) && (E_0 <= 10) && (C_0 <= 9)
               && (!(A_0 <= 10)) && (D_0 == E_0)))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          goto INV1_0;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          C_1 = INV1_0;
          D_1 = INV1_1;
          if (!
              ((D_1 == (B_1 + -1)) && (C_1 == (A_1 + -1)) && (F_1 <= 10)
               && (D_1 <= 9) && (C_1 <= 10) && (E_1 == F_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          C_2 = INV1_0;
          B_2 = INV1_1;
          if (!
              ((C_2 == (A_2 + -1)) && (E_2 <= 10) && (C_2 <= 10)
               && (!(B_2 <= 9)) && (D_2 == E_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          goto INV1_1;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          C_1 = INV1_0;
          D_1 = INV1_1;
          if (!
              ((D_1 == (B_1 + -1)) && (C_1 == (A_1 + -1)) && (F_1 <= 10)
               && (D_1 <= 9) && (C_1 <= 10) && (E_1 == F_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          goto INV1_2;

      default:
          abort ();
      }

    // return expression

}

