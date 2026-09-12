// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/023b-horn_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "023b-horn_000_norange.c", 13, "reach_error"); }



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
    int INV1_4;
    int INV1_5;
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
    int v_4_3;
    int v_5_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((B_3 == 0) && (A_3 == C_3) && (D_3 == 1) && (v_4_3 == A_3)
         && (v_5_3 == C_3)))
        abort ();
    INV1_0 = A_3;
    INV1_1 = B_3;
    INV1_2 = C_3;
    INV1_3 = D_3;
    INV1_4 = v_4_3;
    INV1_5 = v_5_3;
    B_1 = __VERIFIER_nondet_int ();
    D_1 = __VERIFIER_nondet_int ();
    A_1 = INV1_0;
    G_1 = INV1_1;
    C_1 = INV1_2;
    H_1 = INV1_3;
    E_1 = INV1_4;
    F_1 = INV1_5;
    if (!
        ((G_1 == (B_1 + -1)) && (E_1 == F_1) && (H_1 <= 10) && (G_1 <= 10)
         && (H_1 == (D_1 + -1))))
        abort ();
    INV1_0 = A_1;
    INV1_1 = B_1;
    INV1_2 = C_1;
    INV1_3 = D_1;
    INV1_4 = E_1;
    INV1_5 = F_1;
    goto INV1_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV1_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          C_4 = INV1_0;
          A_4 = INV1_1;
          D_4 = INV1_2;
          B_4 = INV1_3;
          E_4 = INV1_4;
          F_4 = INV1_5;
          if (!
              ((!(A_4 == B_4)) && (!(B_4 <= 10)) && (!(A_4 <= 10))
               && (E_4 == F_4)))
              abort ();
          goto main_error;

      case 1:
          D_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          B_0 = INV1_1;
          C_0 = INV1_2;
          G_0 = INV1_3;
          E_0 = INV1_4;
          F_0 = INV1_5;
          if (!
              ((E_0 == F_0) && (G_0 <= 10) && (!(B_0 <= 10))
               && (G_0 == (D_0 + -1))))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          INV1_4 = E_0;
          INV1_5 = F_0;
          B_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          A_1 = INV1_0;
          G_1 = INV1_1;
          C_1 = INV1_2;
          H_1 = INV1_3;
          E_1 = INV1_4;
          F_1 = INV1_5;
          if (!
              ((G_1 == (B_1 + -1)) && (E_1 == F_1) && (H_1 <= 10)
               && (G_1 <= 10) && (H_1 == (D_1 + -1))))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          INV1_4 = E_1;
          INV1_5 = F_1;
          goto INV1_2;

      case 2:
          B_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          A_1 = INV1_0;
          G_1 = INV1_1;
          C_1 = INV1_2;
          H_1 = INV1_3;
          E_1 = INV1_4;
          F_1 = INV1_5;
          if (!
              ((G_1 == (B_1 + -1)) && (E_1 == F_1) && (H_1 <= 10)
               && (G_1 <= 10) && (H_1 == (D_1 + -1))))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          INV1_4 = E_1;
          INV1_5 = F_1;
          B_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          A_1 = INV1_0;
          G_1 = INV1_1;
          C_1 = INV1_2;
          H_1 = INV1_3;
          E_1 = INV1_4;
          F_1 = INV1_5;
          if (!
              ((G_1 == (B_1 + -1)) && (E_1 == F_1) && (H_1 <= 10)
               && (G_1 <= 10) && (H_1 == (D_1 + -1))))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          INV1_4 = E_1;
          INV1_5 = F_1;
          goto INV1_2;

      case 3:
          B_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          A_1 = INV1_0;
          G_1 = INV1_1;
          C_1 = INV1_2;
          H_1 = INV1_3;
          E_1 = INV1_4;
          F_1 = INV1_5;
          if (!
              ((G_1 == (B_1 + -1)) && (E_1 == F_1) && (H_1 <= 10)
               && (G_1 <= 10) && (H_1 == (D_1 + -1))))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          INV1_4 = E_1;
          INV1_5 = F_1;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_2 = __VERIFIER_nondet_int ();
          A_2 = INV1_0;
          G_2 = INV1_1;
          C_2 = INV1_2;
          D_2 = INV1_3;
          E_2 = INV1_4;
          F_2 = INV1_5;
          if (!
              ((E_2 == F_2) && (G_2 <= 10) && (!(D_2 <= 10))
               && (G_2 == (B_2 + -1))))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          INV1_4 = E_2;
          INV1_5 = F_2;
          goto INV1_0;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          A_1 = INV1_0;
          G_1 = INV1_1;
          C_1 = INV1_2;
          H_1 = INV1_3;
          E_1 = INV1_4;
          F_1 = INV1_5;
          if (!
              ((G_1 == (B_1 + -1)) && (E_1 == F_1) && (H_1 <= 10)
               && (G_1 <= 10) && (H_1 == (D_1 + -1))))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          INV1_4 = E_1;
          INV1_5 = F_1;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          B_0 = INV1_1;
          C_0 = INV1_2;
          G_0 = INV1_3;
          E_0 = INV1_4;
          F_0 = INV1_5;
          if (!
              ((E_0 == F_0) && (G_0 <= 10) && (!(B_0 <= 10))
               && (G_0 == (D_0 + -1))))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          INV1_4 = E_0;
          INV1_5 = F_0;
          goto INV1_1;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          A_1 = INV1_0;
          G_1 = INV1_1;
          C_1 = INV1_2;
          H_1 = INV1_3;
          E_1 = INV1_4;
          F_1 = INV1_5;
          if (!
              ((G_1 == (B_1 + -1)) && (E_1 == F_1) && (H_1 <= 10)
               && (G_1 <= 10) && (H_1 == (D_1 + -1))))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          INV1_4 = E_1;
          INV1_5 = F_1;
          goto INV1_2;

      default:
          abort ();
      }

    // return expression

}

