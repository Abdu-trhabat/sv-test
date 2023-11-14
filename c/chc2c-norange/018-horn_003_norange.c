// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/018-horn_003.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "018-horn_003_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV2_0;
    int INV2_1;
    int INV2_2;
    int INV2_3;
    int INV2_4;
    int INV2_5;
    int A_12;
    int B_12;
    int C_12;
    int D_12;
    int E_12;
    int F_12;
    int G_12;
    int H_12;
    int I_12;
    int J_12;
    int A_13;
    int B_13;
    int C_13;
    int D_13;
    int E_13;
    int F_13;
    int G_13;
    int H_13;
    int I_13;
    int J_13;
    int K_13;
    int L_13;
    int A_14;
    int B_14;
    int C_14;
    int D_14;
    int E_14;
    int F_14;
    int G_14;
    int H_14;
    int I_14;
    int J_14;
    int A_15;
    int B_15;
    int C_15;
    int D_15;
    int E_15;
    int F_15;
    int G_15;
    int A_16;
    int B_16;
    int C_16;
    int D_16;
    int E_16;
    int F_16;
    int G_16;
    int H_16;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((F_15 == 2) && (E_15 == 1) && (C_15 == 0) && (B_15 == 1)
         && (A_15 == 1) && (G_15 <= 0) && (!(D_15 <= 0)) && (G_15 == D_15)))
        abort ();
    INV2_0 = A_15;
    INV2_1 = B_15;
    INV2_2 = C_15;
    INV2_3 = D_15;
    INV2_4 = E_15;
    INV2_5 = F_15;
    E_12 = __VERIFIER_nondet_int ();
    F_12 = __VERIFIER_nondet_int ();
    I_12 = __VERIFIER_nondet_int ();
    J_12 = __VERIFIER_nondet_int ();
    A_12 = INV2_0;
    B_12 = INV2_1;
    C_12 = INV2_2;
    D_12 = INV2_3;
    G_12 = INV2_4;
    H_12 = INV2_5;
    if (!
        ((H_12 == (F_12 + -2)) && (G_12 == (E_12 + -1))
         && ((D_12 + (-1 * G_12)) >= 1) && (!(A_12 >= B_12)) && (J_12 <= 0)
         && (!(I_12 <= 0)) && (J_12 == I_12)))
        abort ();
    INV2_0 = A_12;
    INV2_1 = B_12;
    INV2_2 = C_12;
    INV2_3 = D_12;
    INV2_4 = E_12;
    INV2_5 = F_12;
    goto INV2_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV1:
    goto INV1;
  INV4:
    goto INV4;
  INV3:
    goto INV3;
  INV2_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          G_16 = __VERIFIER_nondet_int ();
          H_16 = __VERIFIER_nondet_int ();
          C_16 = INV2_0;
          D_16 = INV2_1;
          A_16 = INV2_2;
          E_16 = INV2_3;
          F_16 = INV2_4;
          B_16 = INV2_5;
          if (!
              ((!(A_16 == B_16)) && (!((E_16 + (-1 * F_16)) >= 1))
               && (!(C_16 >= D_16)) && (H_16 <= 0) && (!(G_16 <= 0))
               && (H_16 == G_16)))
              abort ();
          goto main_error;

      case 1:
          E_12 = __VERIFIER_nondet_int ();
          F_12 = __VERIFIER_nondet_int ();
          I_12 = __VERIFIER_nondet_int ();
          J_12 = __VERIFIER_nondet_int ();
          A_12 = INV2_0;
          B_12 = INV2_1;
          C_12 = INV2_2;
          D_12 = INV2_3;
          G_12 = INV2_4;
          H_12 = INV2_5;
          if (!
              ((H_12 == (F_12 + -2)) && (G_12 == (E_12 + -1))
               && ((D_12 + (-1 * G_12)) >= 1) && (!(A_12 >= B_12))
               && (J_12 <= 0) && (!(I_12 <= 0)) && (J_12 == I_12)))
              abort ();
          INV2_0 = A_12;
          INV2_1 = B_12;
          INV2_2 = C_12;
          INV2_3 = D_12;
          INV2_4 = E_12;
          INV2_5 = F_12;
          E_12 = __VERIFIER_nondet_int ();
          F_12 = __VERIFIER_nondet_int ();
          I_12 = __VERIFIER_nondet_int ();
          J_12 = __VERIFIER_nondet_int ();
          A_12 = INV2_0;
          B_12 = INV2_1;
          C_12 = INV2_2;
          D_12 = INV2_3;
          G_12 = INV2_4;
          H_12 = INV2_5;
          if (!
              ((H_12 == (F_12 + -2)) && (G_12 == (E_12 + -1))
               && ((D_12 + (-1 * G_12)) >= 1) && (!(A_12 >= B_12))
               && (J_12 <= 0) && (!(I_12 <= 0)) && (J_12 == I_12)))
              abort ();
          INV2_0 = A_12;
          INV2_1 = B_12;
          INV2_2 = C_12;
          INV2_3 = D_12;
          INV2_4 = E_12;
          INV2_5 = F_12;
          goto INV2_2;

      case 2:
          B_14 = __VERIFIER_nondet_int ();
          C_14 = __VERIFIER_nondet_int ();
          I_14 = __VERIFIER_nondet_int ();
          J_14 = __VERIFIER_nondet_int ();
          A_14 = INV2_0;
          G_14 = INV2_1;
          H_14 = INV2_2;
          D_14 = INV2_3;
          E_14 = INV2_4;
          F_14 = INV2_5;
          if (!
              ((H_14 == (C_14 + -2)) && (G_14 == (B_14 + -1))
               && (!((D_14 + (-1 * E_14)) >= 1)) && (A_14 >= G_14)
               && (J_14 <= 0) && (!(I_14 <= 0)) && (J_14 == I_14)))
              abort ();
          INV2_0 = A_14;
          INV2_1 = B_14;
          INV2_2 = C_14;
          INV2_3 = D_14;
          INV2_4 = E_14;
          INV2_5 = F_14;
          E_12 = __VERIFIER_nondet_int ();
          F_12 = __VERIFIER_nondet_int ();
          I_12 = __VERIFIER_nondet_int ();
          J_12 = __VERIFIER_nondet_int ();
          A_12 = INV2_0;
          B_12 = INV2_1;
          C_12 = INV2_2;
          D_12 = INV2_3;
          G_12 = INV2_4;
          H_12 = INV2_5;
          if (!
              ((H_12 == (F_12 + -2)) && (G_12 == (E_12 + -1))
               && ((D_12 + (-1 * G_12)) >= 1) && (!(A_12 >= B_12))
               && (J_12 <= 0) && (!(I_12 <= 0)) && (J_12 == I_12)))
              abort ();
          INV2_0 = A_12;
          INV2_1 = B_12;
          INV2_2 = C_12;
          INV2_3 = D_12;
          INV2_4 = E_12;
          INV2_5 = F_12;
          goto INV2_2;

      case 3:
          E_12 = __VERIFIER_nondet_int ();
          F_12 = __VERIFIER_nondet_int ();
          I_12 = __VERIFIER_nondet_int ();
          J_12 = __VERIFIER_nondet_int ();
          A_12 = INV2_0;
          B_12 = INV2_1;
          C_12 = INV2_2;
          D_12 = INV2_3;
          G_12 = INV2_4;
          H_12 = INV2_5;
          if (!
              ((H_12 == (F_12 + -2)) && (G_12 == (E_12 + -1))
               && ((D_12 + (-1 * G_12)) >= 1) && (!(A_12 >= B_12))
               && (J_12 <= 0) && (!(I_12 <= 0)) && (J_12 == I_12)))
              abort ();
          INV2_0 = A_12;
          INV2_1 = B_12;
          INV2_2 = C_12;
          INV2_3 = D_12;
          INV2_4 = E_12;
          INV2_5 = F_12;
          goto INV2_2;

      default:
          abort ();
      }
  INV2_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_13 = __VERIFIER_nondet_int ();
          C_13 = __VERIFIER_nondet_int ();
          E_13 = __VERIFIER_nondet_int ();
          F_13 = __VERIFIER_nondet_int ();
          K_13 = __VERIFIER_nondet_int ();
          L_13 = __VERIFIER_nondet_int ();
          A_13 = INV2_0;
          G_13 = INV2_1;
          H_13 = INV2_2;
          D_13 = INV2_3;
          I_13 = INV2_4;
          J_13 = INV2_5;
          if (!
              ((J_13 == (F_13 + -2)) && (I_13 == (E_13 + -1))
               && (H_13 == (C_13 + -2)) && (G_13 == (B_13 + -1))
               && ((D_13 + (-1 * I_13)) >= 1) && (A_13 >= G_13) && (L_13 <= 0)
               && (!(K_13 <= 0)) && (L_13 == K_13)))
              abort ();
          INV2_0 = A_13;
          INV2_1 = B_13;
          INV2_2 = C_13;
          INV2_3 = D_13;
          INV2_4 = E_13;
          INV2_5 = F_13;
          goto INV2_0;

      case 1:
          E_12 = __VERIFIER_nondet_int ();
          F_12 = __VERIFIER_nondet_int ();
          I_12 = __VERIFIER_nondet_int ();
          J_12 = __VERIFIER_nondet_int ();
          A_12 = INV2_0;
          B_12 = INV2_1;
          C_12 = INV2_2;
          D_12 = INV2_3;
          G_12 = INV2_4;
          H_12 = INV2_5;
          if (!
              ((H_12 == (F_12 + -2)) && (G_12 == (E_12 + -1))
               && ((D_12 + (-1 * G_12)) >= 1) && (!(A_12 >= B_12))
               && (J_12 <= 0) && (!(I_12 <= 0)) && (J_12 == I_12)))
              abort ();
          INV2_0 = A_12;
          INV2_1 = B_12;
          INV2_2 = C_12;
          INV2_3 = D_12;
          INV2_4 = E_12;
          INV2_5 = F_12;
          goto INV2_2;

      default:
          abort ();
      }
  INV2_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_14 = __VERIFIER_nondet_int ();
          C_14 = __VERIFIER_nondet_int ();
          I_14 = __VERIFIER_nondet_int ();
          J_14 = __VERIFIER_nondet_int ();
          A_14 = INV2_0;
          G_14 = INV2_1;
          H_14 = INV2_2;
          D_14 = INV2_3;
          E_14 = INV2_4;
          F_14 = INV2_5;
          if (!
              ((H_14 == (C_14 + -2)) && (G_14 == (B_14 + -1))
               && (!((D_14 + (-1 * E_14)) >= 1)) && (A_14 >= G_14)
               && (J_14 <= 0) && (!(I_14 <= 0)) && (J_14 == I_14)))
              abort ();
          INV2_0 = A_14;
          INV2_1 = B_14;
          INV2_2 = C_14;
          INV2_3 = D_14;
          INV2_4 = E_14;
          INV2_5 = F_14;
          goto INV2_1;

      case 1:
          E_12 = __VERIFIER_nondet_int ();
          F_12 = __VERIFIER_nondet_int ();
          I_12 = __VERIFIER_nondet_int ();
          J_12 = __VERIFIER_nondet_int ();
          A_12 = INV2_0;
          B_12 = INV2_1;
          C_12 = INV2_2;
          D_12 = INV2_3;
          G_12 = INV2_4;
          H_12 = INV2_5;
          if (!
              ((H_12 == (F_12 + -2)) && (G_12 == (E_12 + -1))
               && ((D_12 + (-1 * G_12)) >= 1) && (!(A_12 >= B_12))
               && (J_12 <= 0) && (!(I_12 <= 0)) && (J_12 == I_12)))
              abort ();
          INV2_0 = A_12;
          INV2_1 = B_12;
          INV2_2 = C_12;
          INV2_3 = D_12;
          INV2_4 = E_12;
          INV2_5 = F_12;
          goto INV2_2;

      default:
          abort ();
      }

    // return expression

}

