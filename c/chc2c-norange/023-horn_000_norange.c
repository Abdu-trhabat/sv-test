// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/023-horn_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "023-horn_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV1_0;
    int INV1_1;
    int INV1_2;
    int INV1_3;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int G_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;



    // main logic
    goto main_init;

  main_init:
    if (!((B_3 == 0) && (A_3 == C_3) && (D_3 == 1)))
        abort ();
    INV1_0 = A_3;
    INV1_1 = B_3;
    INV1_2 = C_3;
    INV1_3 = D_3;
    B_2 = __VERIFIER_nondet_int ();
    F_2 = __VERIFIER_nondet_int ();
    G_2 = __VERIFIER_nondet_int ();
    A_2 = INV1_0;
    E_2 = INV1_1;
    C_2 = INV1_2;
    D_2 = INV1_3;
    if (!
        ((E_2 == (B_2 + -1)) && (E_2 <= 10) && (!(D_2 <= 10))
         && (F_2 == G_2)))
        abort ();
    INV1_0 = A_2;
    INV1_1 = B_2;
    INV1_2 = C_2;
    INV1_3 = D_2;
    goto INV1_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV1_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          E_4 = __VERIFIER_nondet_int ();
          F_4 = __VERIFIER_nondet_int ();
          C_4 = INV1_0;
          A_4 = INV1_1;
          D_4 = INV1_2;
          B_4 = INV1_3;
          if (!
              ((!(A_4 == B_4)) && (!(B_4 <= 10)) && (!(A_4 <= 10))
               && (E_4 == F_4)))
              abort ();
          goto main_error;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          A_1 = INV1_0;
          E_1 = INV1_1;
          C_1 = INV1_2;
          F_1 = INV1_3;
          if (!
              ((F_1 == (D_1 + -1)) && (E_1 == (B_1 + -1)) && (F_1 <= 10)
               && (E_1 <= 10) && (G_1 == H_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          B_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet_int ();
          A_2 = INV1_0;
          E_2 = INV1_1;
          C_2 = INV1_2;
          D_2 = INV1_3;
          if (!
              ((E_2 == (B_2 + -1)) && (E_2 <= 10) && (!(D_2 <= 10))
               && (F_2 == G_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          goto INV1_2;

      case 2:
          B_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet_int ();
          A_2 = INV1_0;
          E_2 = INV1_1;
          C_2 = INV1_2;
          D_2 = INV1_3;
          if (!
              ((E_2 == (B_2 + -1)) && (E_2 <= 10) && (!(D_2 <= 10))
               && (F_2 == G_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          B_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet_int ();
          A_2 = INV1_0;
          E_2 = INV1_1;
          C_2 = INV1_2;
          D_2 = INV1_3;
          if (!
              ((E_2 == (B_2 + -1)) && (E_2 <= 10) && (!(D_2 <= 10))
               && (F_2 == G_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          goto INV1_2;

      case 3:
          B_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet_int ();
          A_2 = INV1_0;
          E_2 = INV1_1;
          C_2 = INV1_2;
          D_2 = INV1_3;
          if (!
              ((E_2 == (B_2 + -1)) && (E_2 <= 10) && (!(D_2 <= 10))
               && (F_2 == G_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_0 = __VERIFIER_nondet_int ();
          F_0 = __VERIFIER_nondet_int ();
          G_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          B_0 = INV1_1;
          C_0 = INV1_2;
          E_0 = INV1_3;
          if (!
              ((E_0 == (D_0 + -1)) && (E_0 <= 10) && (!(B_0 <= 10))
               && (F_0 == G_0)))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          goto INV1_0;

      case 1:
          B_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet_int ();
          A_2 = INV1_0;
          E_2 = INV1_1;
          C_2 = INV1_2;
          D_2 = INV1_3;
          if (!
              ((E_2 == (B_2 + -1)) && (E_2 <= 10) && (!(D_2 <= 10))
               && (F_2 == G_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          A_1 = INV1_0;
          E_1 = INV1_1;
          C_1 = INV1_2;
          F_1 = INV1_3;
          if (!
              ((F_1 == (D_1 + -1)) && (E_1 == (B_1 + -1)) && (F_1 <= 10)
               && (E_1 <= 10) && (G_1 == H_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          goto INV1_1;

      case 1:
          B_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet_int ();
          A_2 = INV1_0;
          E_2 = INV1_1;
          C_2 = INV1_2;
          D_2 = INV1_3;
          if (!
              ((E_2 == (B_2 + -1)) && (E_2 <= 10) && (!(D_2 <= 10))
               && (F_2 == G_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          goto INV1_2;

      default:
          abort ();
      }

    // return expression

}

