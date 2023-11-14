// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/018b-horn_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "018b-horn_001_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV4_0;
    int INV4_1;
    int INV4_2;
    int INV4_3;
    int INV4_4;
    int INV4_5;
    int INV4_6;
    int INV4_7;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int H_4;
    int I_4;
    int J_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int H_5;
    int I_5;
    int J_5;
    int K_5;
    int L_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int G_6;
    int H_6;
    int I_6;
    int J_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int F_7;
    int v_6_7;
    int v_7_7;
    int A_16;
    int B_16;
    int C_16;
    int D_16;
    int E_16;
    int F_16;
    int G_16;
    int H_16;

    if (((INV4_0 <= -1000000000) || (INV4_0 >= 1000000000))
        || ((INV4_1 <= -1000000000) || (INV4_1 >= 1000000000))
        || ((INV4_2 <= -1000000000) || (INV4_2 >= 1000000000))
        || ((INV4_3 <= -1000000000) || (INV4_3 >= 1000000000))
        || ((INV4_4 <= -1000000000) || (INV4_4 >= 1000000000))
        || ((INV4_5 <= -1000000000) || (INV4_5 >= 1000000000))
        || ((INV4_6 <= -1000000000) || (INV4_6 >= 1000000000))
        || ((INV4_7 <= -1000000000) || (INV4_7 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((H_4 <= -1000000000) || (H_4 >= 1000000000))
        || ((I_4 <= -1000000000) || (I_4 >= 1000000000))
        || ((J_4 <= -1000000000) || (J_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((F_5 <= -1000000000) || (F_5 >= 1000000000))
        || ((G_5 <= -1000000000) || (G_5 >= 1000000000))
        || ((H_5 <= -1000000000) || (H_5 >= 1000000000))
        || ((I_5 <= -1000000000) || (I_5 >= 1000000000))
        || ((J_5 <= -1000000000) || (J_5 >= 1000000000))
        || ((K_5 <= -1000000000) || (K_5 >= 1000000000))
        || ((L_5 <= -1000000000) || (L_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((F_6 <= -1000000000) || (F_6 >= 1000000000))
        || ((G_6 <= -1000000000) || (G_6 >= 1000000000))
        || ((H_6 <= -1000000000) || (H_6 >= 1000000000))
        || ((I_6 <= -1000000000) || (I_6 >= 1000000000))
        || ((J_6 <= -1000000000) || (J_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((F_7 <= -1000000000) || (F_7 >= 1000000000))
        || ((v_6_7 <= -1000000000) || (v_6_7 >= 1000000000))
        || ((v_7_7 <= -1000000000) || (v_7_7 >= 1000000000))
        || ((A_16 <= -1000000000) || (A_16 >= 1000000000))
        || ((B_16 <= -1000000000) || (B_16 >= 1000000000))
        || ((C_16 <= -1000000000) || (C_16 >= 1000000000))
        || ((D_16 <= -1000000000) || (D_16 >= 1000000000))
        || ((E_16 <= -1000000000) || (E_16 >= 1000000000))
        || ((F_16 <= -1000000000) || (F_16 >= 1000000000))
        || ((G_16 <= -1000000000) || (G_16 >= 1000000000))
        || ((H_16 <= -1000000000) || (H_16 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((E_7 == 1) && (C_7 == 0) && (B_7 == 1) && (A_7 == D_7)
         && (!(D_7 <= 0)) && (!(A_7 <= 0)) && (F_7 == 2) && (v_6_7 == A_7)
         && (v_7_7 == D_7)))
        abort ();
    INV4_0 = A_7;
    INV4_1 = B_7;
    INV4_2 = C_7;
    INV4_3 = D_7;
    INV4_4 = E_7;
    INV4_5 = F_7;
    INV4_6 = v_6_7;
    INV4_7 = v_7_7;
    B_6 = __VERIFIER_nondet_int ();
    if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
        abort ();
    C_6 = __VERIFIER_nondet_int ();
    if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
        abort ();
    A_6 = INV4_0;
    I_6 = INV4_1;
    J_6 = INV4_2;
    D_6 = INV4_3;
    E_6 = INV4_4;
    F_6 = INV4_5;
    G_6 = INV4_6;
    H_6 = INV4_7;
    if (!
        ((I_6 == (B_6 + -1)) && (G_6 == H_6) && (!((D_6 + (-1 * E_6)) >= 1))
         && (A_6 >= I_6) && (!(H_6 <= 0)) && (!(G_6 <= 0))
         && (J_6 == (C_6 + -2))))
        abort ();
    INV4_0 = A_6;
    INV4_1 = B_6;
    INV4_2 = C_6;
    INV4_3 = D_6;
    INV4_4 = E_6;
    INV4_5 = F_6;
    INV4_6 = G_6;
    INV4_7 = H_6;
    goto INV4_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV2:
    goto INV2;
  INV1:
    goto INV1;
  INV3:
    goto INV3;
  INV4_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          C_16 = INV4_0;
          D_16 = INV4_1;
          A_16 = INV4_2;
          E_16 = INV4_3;
          F_16 = INV4_4;
          B_16 = INV4_5;
          G_16 = INV4_6;
          H_16 = INV4_7;
          if (!
              ((!(A_16 == B_16)) && (!((E_16 + (-1 * F_16)) >= 1))
               && (!(C_16 >= D_16)) && (!(H_16 <= 0)) && (!(G_16 <= 0))
               && (G_16 == H_16)))
              abort ();
          goto main_error;

      case 1:
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = __VERIFIER_nondet_int ();
          if (((F_5 <= -1000000000) || (F_5 >= 1000000000)))
              abort ();
          A_5 = INV4_0;
          I_5 = INV4_1;
          J_5 = INV4_2;
          D_5 = INV4_3;
          K_5 = INV4_4;
          L_5 = INV4_5;
          G_5 = INV4_6;
          H_5 = INV4_7;
          if (!
              ((K_5 == (E_5 + -1)) && (J_5 == (C_5 + -2))
               && (I_5 == (B_5 + -1)) && (G_5 == H_5)
               && ((D_5 + (-1 * K_5)) >= 1) && (A_5 >= I_5) && (!(H_5 <= 0))
               && (!(G_5 <= 0)) && (L_5 == (F_5 + -2))))
              abort ();
          INV4_0 = A_5;
          INV4_1 = B_5;
          INV4_2 = C_5;
          INV4_3 = D_5;
          INV4_4 = E_5;
          INV4_5 = F_5;
          INV4_6 = G_5;
          INV4_7 = H_5;
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          C_6 = __VERIFIER_nondet_int ();
          if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
              abort ();
          A_6 = INV4_0;
          I_6 = INV4_1;
          J_6 = INV4_2;
          D_6 = INV4_3;
          E_6 = INV4_4;
          F_6 = INV4_5;
          G_6 = INV4_6;
          H_6 = INV4_7;
          if (!
              ((I_6 == (B_6 + -1)) && (G_6 == H_6)
               && (!((D_6 + (-1 * E_6)) >= 1)) && (A_6 >= I_6)
               && (!(H_6 <= 0)) && (!(G_6 <= 0)) && (J_6 == (C_6 + -2))))
              abort ();
          INV4_0 = A_6;
          INV4_1 = B_6;
          INV4_2 = C_6;
          INV4_3 = D_6;
          INV4_4 = E_6;
          INV4_5 = F_6;
          INV4_6 = G_6;
          INV4_7 = H_6;
          goto INV4_2;

      case 2:
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          C_6 = __VERIFIER_nondet_int ();
          if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
              abort ();
          A_6 = INV4_0;
          I_6 = INV4_1;
          J_6 = INV4_2;
          D_6 = INV4_3;
          E_6 = INV4_4;
          F_6 = INV4_5;
          G_6 = INV4_6;
          H_6 = INV4_7;
          if (!
              ((I_6 == (B_6 + -1)) && (G_6 == H_6)
               && (!((D_6 + (-1 * E_6)) >= 1)) && (A_6 >= I_6)
               && (!(H_6 <= 0)) && (!(G_6 <= 0)) && (J_6 == (C_6 + -2))))
              abort ();
          INV4_0 = A_6;
          INV4_1 = B_6;
          INV4_2 = C_6;
          INV4_3 = D_6;
          INV4_4 = E_6;
          INV4_5 = F_6;
          INV4_6 = G_6;
          INV4_7 = H_6;
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          C_6 = __VERIFIER_nondet_int ();
          if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
              abort ();
          A_6 = INV4_0;
          I_6 = INV4_1;
          J_6 = INV4_2;
          D_6 = INV4_3;
          E_6 = INV4_4;
          F_6 = INV4_5;
          G_6 = INV4_6;
          H_6 = INV4_7;
          if (!
              ((I_6 == (B_6 + -1)) && (G_6 == H_6)
               && (!((D_6 + (-1 * E_6)) >= 1)) && (A_6 >= I_6)
               && (!(H_6 <= 0)) && (!(G_6 <= 0)) && (J_6 == (C_6 + -2))))
              abort ();
          INV4_0 = A_6;
          INV4_1 = B_6;
          INV4_2 = C_6;
          INV4_3 = D_6;
          INV4_4 = E_6;
          INV4_5 = F_6;
          INV4_6 = G_6;
          INV4_7 = H_6;
          goto INV4_2;

      case 3:
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          C_6 = __VERIFIER_nondet_int ();
          if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
              abort ();
          A_6 = INV4_0;
          I_6 = INV4_1;
          J_6 = INV4_2;
          D_6 = INV4_3;
          E_6 = INV4_4;
          F_6 = INV4_5;
          G_6 = INV4_6;
          H_6 = INV4_7;
          if (!
              ((I_6 == (B_6 + -1)) && (G_6 == H_6)
               && (!((D_6 + (-1 * E_6)) >= 1)) && (A_6 >= I_6)
               && (!(H_6 <= 0)) && (!(G_6 <= 0)) && (J_6 == (C_6 + -2))))
              abort ();
          INV4_0 = A_6;
          INV4_1 = B_6;
          INV4_2 = C_6;
          INV4_3 = D_6;
          INV4_4 = E_6;
          INV4_5 = F_6;
          INV4_6 = G_6;
          INV4_7 = H_6;
          goto INV4_2;

      default:
          abort ();
      }
  INV4_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          E_4 = __VERIFIER_nondet_int ();
          if (((E_4 <= -1000000000) || (E_4 >= 1000000000)))
              abort ();
          F_4 = __VERIFIER_nondet_int ();
          if (((F_4 <= -1000000000) || (F_4 >= 1000000000)))
              abort ();
          A_4 = INV4_0;
          B_4 = INV4_1;
          C_4 = INV4_2;
          D_4 = INV4_3;
          I_4 = INV4_4;
          J_4 = INV4_5;
          G_4 = INV4_6;
          H_4 = INV4_7;
          if (!
              ((I_4 == (E_4 + -1)) && (G_4 == H_4)
               && ((D_4 + (-1 * I_4)) >= 1) && (!(A_4 >= B_4))
               && (!(H_4 <= 0)) && (!(G_4 <= 0)) && (J_4 == (F_4 + -2))))
              abort ();
          INV4_0 = A_4;
          INV4_1 = B_4;
          INV4_2 = C_4;
          INV4_3 = D_4;
          INV4_4 = E_4;
          INV4_5 = F_4;
          INV4_6 = G_4;
          INV4_7 = H_4;
          goto INV4_0;

      case 1:
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          C_6 = __VERIFIER_nondet_int ();
          if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
              abort ();
          A_6 = INV4_0;
          I_6 = INV4_1;
          J_6 = INV4_2;
          D_6 = INV4_3;
          E_6 = INV4_4;
          F_6 = INV4_5;
          G_6 = INV4_6;
          H_6 = INV4_7;
          if (!
              ((I_6 == (B_6 + -1)) && (G_6 == H_6)
               && (!((D_6 + (-1 * E_6)) >= 1)) && (A_6 >= I_6)
               && (!(H_6 <= 0)) && (!(G_6 <= 0)) && (J_6 == (C_6 + -2))))
              abort ();
          INV4_0 = A_6;
          INV4_1 = B_6;
          INV4_2 = C_6;
          INV4_3 = D_6;
          INV4_4 = E_6;
          INV4_5 = F_6;
          INV4_6 = G_6;
          INV4_7 = H_6;
          goto INV4_2;

      default:
          abort ();
      }
  INV4_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          F_5 = __VERIFIER_nondet_int ();
          if (((F_5 <= -1000000000) || (F_5 >= 1000000000)))
              abort ();
          A_5 = INV4_0;
          I_5 = INV4_1;
          J_5 = INV4_2;
          D_5 = INV4_3;
          K_5 = INV4_4;
          L_5 = INV4_5;
          G_5 = INV4_6;
          H_5 = INV4_7;
          if (!
              ((K_5 == (E_5 + -1)) && (J_5 == (C_5 + -2))
               && (I_5 == (B_5 + -1)) && (G_5 == H_5)
               && ((D_5 + (-1 * K_5)) >= 1) && (A_5 >= I_5) && (!(H_5 <= 0))
               && (!(G_5 <= 0)) && (L_5 == (F_5 + -2))))
              abort ();
          INV4_0 = A_5;
          INV4_1 = B_5;
          INV4_2 = C_5;
          INV4_3 = D_5;
          INV4_4 = E_5;
          INV4_5 = F_5;
          INV4_6 = G_5;
          INV4_7 = H_5;
          goto INV4_1;

      case 1:
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          C_6 = __VERIFIER_nondet_int ();
          if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
              abort ();
          A_6 = INV4_0;
          I_6 = INV4_1;
          J_6 = INV4_2;
          D_6 = INV4_3;
          E_6 = INV4_4;
          F_6 = INV4_5;
          G_6 = INV4_6;
          H_6 = INV4_7;
          if (!
              ((I_6 == (B_6 + -1)) && (G_6 == H_6)
               && (!((D_6 + (-1 * E_6)) >= 1)) && (A_6 >= I_6)
               && (!(H_6 <= 0)) && (!(G_6 <= 0)) && (J_6 == (C_6 + -2))))
              abort ();
          INV4_0 = A_6;
          INV4_1 = B_6;
          INV4_2 = C_6;
          INV4_3 = D_6;
          INV4_4 = E_6;
          INV4_5 = F_6;
          INV4_6 = G_6;
          INV4_7 = H_6;
          goto INV4_2;

      default:
          abort ();
      }

    // return expression

}

