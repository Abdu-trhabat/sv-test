// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/008-horn_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "008-horn_000_norange.c", 13, "reach_error"); }



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
    int H_0;
    int I_0;
    int v_9_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    int J_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    int J_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int H_3;
    int I_3;
    int J_3;
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
    int v_11_5;
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
    int K_6;
    int L_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int F_7;
    int G_7;
    int H_7;
    int I_7;
    int J_7;
    int K_7;
    int L_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int F_8;
    int G_8;
    int H_8;
    int I_8;
    int J_8;
    int K_8;
    int L_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int F_9;
    int G_9;
    int H_9;
    int I_9;
    int J_9;
    int K_9;
    int L_9;
    int A_10;
    int B_10;
    int C_10;
    int D_10;
    int E_10;
    int F_10;
    int G_10;
    int H_10;
    int I_10;
    int J_10;
    int A_11;
    int B_11;
    int C_11;
    int D_11;
    int E_11;
    int F_11;
    int G_11;
    int A_12;
    int B_12;
    int C_12;
    int D_12;
    int E_12;
    int F_12;
    int G_12;
    int H_12;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((F_11 == -1) && (E_11 == 1) && (D_11 == 1) && (B_11 == 1)
         && (((10 * A_11) + (-1 * G_11)) >= -9)
         && ((G_11 + (-10 * A_11)) >= 0) && (G_11 == C_11)))
        abort ();
    INV1_0 = A_11;
    INV1_1 = B_11;
    INV1_2 = C_11;
    INV1_3 = D_11;
    INV1_4 = E_11;
    INV1_5 = F_11;
    A_5 = __VERIFIER_nondet_int ();
    B_5 = __VERIFIER_nondet_int ();
    E_5 = __VERIFIER_nondet_int ();
    J_5 = __VERIFIER_nondet_int ();
    K_5 = __VERIFIER_nondet_int ();
    v_11_5 = __VERIFIER_nondet_int ();
    G_5 = INV1_0;
    F_5 = INV1_1;
    C_5 = INV1_2;
    D_5 = INV1_3;
    H_5 = INV1_4;
    I_5 = INV1_5;
    if (!
        ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
         && (((10 * A_5) + (-1 * G_5)) >= -9) && ((G_5 + (-10 * A_5)) >= 0)
         && (G_5 >= 1) && (C_5 <= 9) && (J_5 == K_5) && (v_11_5 == D_5)))
        abort ();
    INV1_0 = A_5;
    INV1_1 = B_5;
    INV1_2 = C_5;
    INV1_3 = D_5;
    INV1_4 = E_5;
    INV1_5 = v_11_5;
    goto INV1_10;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV1_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          G_12 = __VERIFIER_nondet_int ();
          H_12 = __VERIFIER_nondet_int ();
          C_12 = INV1_0;
          A_12 = INV1_1;
          E_12 = INV1_2;
          F_12 = INV1_3;
          D_12 = INV1_4;
          B_12 = INV1_5;
          if (!
              ((D_12 == 0) && (!(A_12 == B_12)) && (!(C_12 >= 1))
               && (G_12 == H_12)))
              abort ();
          goto main_error;

      case 1:
          v_9_0 = __VERIFIER_nondet_int ();
          E_0 = __VERIFIER_nondet_int ();
          H_0 = __VERIFIER_nondet_int ();
          I_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          B_0 = INV1_1;
          C_0 = INV1_2;
          D_0 = INV1_3;
          F_0 = INV1_4;
          G_0 = INV1_5;
          if (!
              ((!(F_0 == 0)) && (E_0 == 0) && (!(A_0 >= 1)) && (C_0 <= 9)
               && (H_0 == I_0) && (v_9_0 == D_0)))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          INV1_4 = E_0;
          INV1_5 = v_9_0;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      case 2:
          E_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          I_1 = __VERIFIER_nondet_int ();
          J_1 = __VERIFIER_nondet_int ();
          A_1 = INV1_0;
          B_1 = INV1_1;
          C_1 = INV1_2;
          D_1 = INV1_3;
          G_1 = INV1_4;
          H_1 = INV1_5;
          if (!
              ((!(G_1 == 0)) && (E_1 == 0) && (D_1 == (F_1 + -2))
               && (!(A_1 >= 1)) && (!(C_1 <= 99)) && (C_1 <= 999)
               && (!(C_1 <= 9)) && (I_1 == J_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          INV1_4 = E_1;
          INV1_5 = F_1;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      case 3:
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          I_2 = __VERIFIER_nondet_int ();
          J_2 = __VERIFIER_nondet_int ();
          A_2 = INV1_0;
          B_2 = INV1_1;
          H_2 = INV1_2;
          G_2 = INV1_3;
          E_2 = INV1_4;
          F_2 = INV1_5;
          if (!
              ((G_2 == (D_2 + -4)) && (!(E_2 == 0))
               && (((10000 * C_2) + (-1 * H_2)) >= -9999)
               && ((H_2 + (-10000 * C_2)) >= 0) && (!(A_2 >= 1))
               && (!(H_2 <= 9999)) && (!(H_2 <= 99)) && (!(H_2 <= 999))
               && (!(H_2 <= 9)) && (I_2 == J_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          INV1_4 = E_2;
          INV1_5 = F_2;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      case 4:
          E_3 = __VERIFIER_nondet_int ();
          F_3 = __VERIFIER_nondet_int ();
          I_3 = __VERIFIER_nondet_int ();
          J_3 = __VERIFIER_nondet_int ();
          A_3 = INV1_0;
          B_3 = INV1_1;
          C_3 = INV1_2;
          D_3 = INV1_3;
          G_3 = INV1_4;
          H_3 = INV1_5;
          if (!
              ((!(G_3 == 0)) && (E_3 == 0) && (D_3 == (F_3 + -3))
               && (!(A_3 >= 1)) && (C_3 <= 9999) && (!(C_3 <= 99))
               && (!(C_3 <= 999)) && (!(C_3 <= 9)) && (I_3 == J_3)))
              abort ();
          INV1_0 = A_3;
          INV1_1 = B_3;
          INV1_2 = C_3;
          INV1_3 = D_3;
          INV1_4 = E_3;
          INV1_5 = F_3;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      case 5:
          E_4 = __VERIFIER_nondet_int ();
          F_4 = __VERIFIER_nondet_int ();
          I_4 = __VERIFIER_nondet_int ();
          J_4 = __VERIFIER_nondet_int ();
          A_4 = INV1_0;
          B_4 = INV1_1;
          C_4 = INV1_2;
          D_4 = INV1_3;
          G_4 = INV1_4;
          H_4 = INV1_5;
          if (!
              ((!(G_4 == 0)) && (E_4 == 0) && (D_4 == (F_4 + -1))
               && (!(A_4 >= 1)) && (C_4 <= 99) && (!(C_4 <= 9))
               && (I_4 == J_4)))
              abort ();
          INV1_0 = A_4;
          INV1_1 = B_4;
          INV1_2 = C_4;
          INV1_3 = D_4;
          INV1_4 = E_4;
          INV1_5 = F_4;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      case 6:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      case 7:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = __VERIFIER_nondet_int ();
          D_7 = __VERIFIER_nondet_int ();
          K_7 = __VERIFIER_nondet_int ();
          L_7 = __VERIFIER_nondet_int ();
          J_7 = INV1_0;
          G_7 = INV1_1;
          I_7 = INV1_2;
          H_7 = INV1_3;
          E_7 = INV1_4;
          F_7 = INV1_5;
          if (!
              ((H_7 == (D_7 + -4)) && (G_7 == (B_7 + -1)) && (!(E_7 == 0))
               && (((10000 * C_7) + (-1 * I_7)) >= -9999)
               && (((10 * A_7) + (-1 * J_7)) >= -9)
               && ((J_7 + (-10 * A_7)) >= 0) && ((I_7 + (-10000 * C_7)) >= 0)
               && (J_7 >= 1) && (!(I_7 <= 9999)) && (!(I_7 <= 99))
               && (!(I_7 <= 999)) && (!(I_7 <= 9)) && (K_7 == L_7)))
              abort ();
          INV1_0 = A_7;
          INV1_1 = B_7;
          INV1_2 = C_7;
          INV1_3 = D_7;
          INV1_4 = E_7;
          INV1_5 = F_7;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      case 8:
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          E_8 = __VERIFIER_nondet_int ();
          F_8 = __VERIFIER_nondet_int ();
          K_8 = __VERIFIER_nondet_int ();
          L_8 = __VERIFIER_nondet_int ();
          H_8 = INV1_0;
          G_8 = INV1_1;
          C_8 = INV1_2;
          D_8 = INV1_3;
          I_8 = INV1_4;
          J_8 = INV1_5;
          if (!
              ((!(I_8 == 0)) && (G_8 == (B_8 + -1)) && (E_8 == 0)
               && (D_8 == (F_8 + -3)) && (((10 * A_8) + (-1 * H_8)) >= -9)
               && ((H_8 + (-10 * A_8)) >= 0) && (H_8 >= 1) && (C_8 <= 9999)
               && (!(C_8 <= 99)) && (!(C_8 <= 999)) && (!(C_8 <= 9))
               && (K_8 == L_8)))
              abort ();
          INV1_0 = A_8;
          INV1_1 = B_8;
          INV1_2 = C_8;
          INV1_3 = D_8;
          INV1_4 = E_8;
          INV1_5 = F_8;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      case 9:
          A_9 = __VERIFIER_nondet_int ();
          B_9 = __VERIFIER_nondet_int ();
          E_9 = __VERIFIER_nondet_int ();
          F_9 = __VERIFIER_nondet_int ();
          K_9 = __VERIFIER_nondet_int ();
          L_9 = __VERIFIER_nondet_int ();
          H_9 = INV1_0;
          G_9 = INV1_1;
          C_9 = INV1_2;
          D_9 = INV1_3;
          I_9 = INV1_4;
          J_9 = INV1_5;
          if (!
              ((!(I_9 == 0)) && (G_9 == (B_9 + -1)) && (E_9 == 0)
               && (D_9 == (F_9 + -1)) && (((10 * A_9) + (-1 * H_9)) >= -9)
               && ((H_9 + (-10 * A_9)) >= 0) && (H_9 >= 1) && (C_9 <= 99)
               && (!(C_9 <= 9)) && (K_9 == L_9)))
              abort ();
          INV1_0 = A_9;
          INV1_1 = B_9;
          INV1_2 = C_9;
          INV1_3 = D_9;
          INV1_4 = E_9;
          INV1_5 = F_9;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      case 10:
          A_10 = __VERIFIER_nondet_int ();
          B_10 = __VERIFIER_nondet_int ();
          I_10 = __VERIFIER_nondet_int ();
          J_10 = __VERIFIER_nondet_int ();
          H_10 = INV1_0;
          G_10 = INV1_1;
          C_10 = INV1_2;
          D_10 = INV1_3;
          E_10 = INV1_4;
          F_10 = INV1_5;
          if (!
              ((G_10 == (B_10 + -1)) && (E_10 == 0)
               && (((10 * A_10) + (-1 * H_10)) >= -9)
               && ((H_10 + (-10 * A_10)) >= 0) && (H_10 >= 1)
               && (I_10 == J_10)))
              abort ();
          INV1_0 = A_10;
          INV1_1 = B_10;
          INV1_2 = C_10;
          INV1_3 = D_10;
          INV1_4 = E_10;
          INV1_5 = F_10;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      case 11:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }
  INV1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          E_6 = __VERIFIER_nondet_int ();
          F_6 = __VERIFIER_nondet_int ();
          K_6 = __VERIFIER_nondet_int ();
          L_6 = __VERIFIER_nondet_int ();
          H_6 = INV1_0;
          G_6 = INV1_1;
          C_6 = INV1_2;
          D_6 = INV1_3;
          I_6 = INV1_4;
          J_6 = INV1_5;
          if (!
              ((!(I_6 == 0)) && (G_6 == (B_6 + -1)) && (E_6 == 0)
               && (D_6 == (F_6 + -2)) && (((10 * A_6) + (-1 * H_6)) >= -9)
               && ((H_6 + (-10 * A_6)) >= 0) && (H_6 >= 1) && (!(C_6 <= 99))
               && (C_6 <= 999) && (!(C_6 <= 9)) && (K_6 == L_6)))
              abort ();
          INV1_0 = A_6;
          INV1_1 = B_6;
          INV1_2 = C_6;
          INV1_3 = D_6;
          INV1_4 = E_6;
          INV1_5 = F_6;
          goto INV1_0;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }
  INV1_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          E_8 = __VERIFIER_nondet_int ();
          F_8 = __VERIFIER_nondet_int ();
          K_8 = __VERIFIER_nondet_int ();
          L_8 = __VERIFIER_nondet_int ();
          H_8 = INV1_0;
          G_8 = INV1_1;
          C_8 = INV1_2;
          D_8 = INV1_3;
          I_8 = INV1_4;
          J_8 = INV1_5;
          if (!
              ((!(I_8 == 0)) && (G_8 == (B_8 + -1)) && (E_8 == 0)
               && (D_8 == (F_8 + -3)) && (((10 * A_8) + (-1 * H_8)) >= -9)
               && ((H_8 + (-10 * A_8)) >= 0) && (H_8 >= 1) && (C_8 <= 9999)
               && (!(C_8 <= 99)) && (!(C_8 <= 999)) && (!(C_8 <= 9))
               && (K_8 == L_8)))
              abort ();
          INV1_0 = A_8;
          INV1_1 = B_8;
          INV1_2 = C_8;
          INV1_3 = D_8;
          INV1_4 = E_8;
          INV1_5 = F_8;
          goto INV1_1;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }
  INV1_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_9 = __VERIFIER_nondet_int ();
          B_9 = __VERIFIER_nondet_int ();
          E_9 = __VERIFIER_nondet_int ();
          F_9 = __VERIFIER_nondet_int ();
          K_9 = __VERIFIER_nondet_int ();
          L_9 = __VERIFIER_nondet_int ();
          H_9 = INV1_0;
          G_9 = INV1_1;
          C_9 = INV1_2;
          D_9 = INV1_3;
          I_9 = INV1_4;
          J_9 = INV1_5;
          if (!
              ((!(I_9 == 0)) && (G_9 == (B_9 + -1)) && (E_9 == 0)
               && (D_9 == (F_9 + -1)) && (((10 * A_9) + (-1 * H_9)) >= -9)
               && ((H_9 + (-10 * A_9)) >= 0) && (H_9 >= 1) && (C_9 <= 99)
               && (!(C_9 <= 9)) && (K_9 == L_9)))
              abort ();
          INV1_0 = A_9;
          INV1_1 = B_9;
          INV1_2 = C_9;
          INV1_3 = D_9;
          INV1_4 = E_9;
          INV1_5 = F_9;
          goto INV1_2;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }
  INV1_4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          E_4 = __VERIFIER_nondet_int ();
          F_4 = __VERIFIER_nondet_int ();
          I_4 = __VERIFIER_nondet_int ();
          J_4 = __VERIFIER_nondet_int ();
          A_4 = INV1_0;
          B_4 = INV1_1;
          C_4 = INV1_2;
          D_4 = INV1_3;
          G_4 = INV1_4;
          H_4 = INV1_5;
          if (!
              ((!(G_4 == 0)) && (E_4 == 0) && (D_4 == (F_4 + -1))
               && (!(A_4 >= 1)) && (C_4 <= 99) && (!(C_4 <= 9))
               && (I_4 == J_4)))
              abort ();
          INV1_0 = A_4;
          INV1_1 = B_4;
          INV1_2 = C_4;
          INV1_3 = D_4;
          INV1_4 = E_4;
          INV1_5 = F_4;
          goto INV1_3;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }
  INV1_5:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          E_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          I_1 = __VERIFIER_nondet_int ();
          J_1 = __VERIFIER_nondet_int ();
          A_1 = INV1_0;
          B_1 = INV1_1;
          C_1 = INV1_2;
          D_1 = INV1_3;
          G_1 = INV1_4;
          H_1 = INV1_5;
          if (!
              ((!(G_1 == 0)) && (E_1 == 0) && (D_1 == (F_1 + -2))
               && (!(A_1 >= 1)) && (!(C_1 <= 99)) && (C_1 <= 999)
               && (!(C_1 <= 9)) && (I_1 == J_1)))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          INV1_4 = E_1;
          INV1_5 = F_1;
          goto INV1_4;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }
  INV1_6:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          I_2 = __VERIFIER_nondet_int ();
          J_2 = __VERIFIER_nondet_int ();
          A_2 = INV1_0;
          B_2 = INV1_1;
          H_2 = INV1_2;
          G_2 = INV1_3;
          E_2 = INV1_4;
          F_2 = INV1_5;
          if (!
              ((G_2 == (D_2 + -4)) && (!(E_2 == 0))
               && (((10000 * C_2) + (-1 * H_2)) >= -9999)
               && ((H_2 + (-10000 * C_2)) >= 0) && (!(A_2 >= 1))
               && (!(H_2 <= 9999)) && (!(H_2 <= 99)) && (!(H_2 <= 999))
               && (!(H_2 <= 9)) && (I_2 == J_2)))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          INV1_4 = E_2;
          INV1_5 = F_2;
          goto INV1_5;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }
  INV1_7:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_10 = __VERIFIER_nondet_int ();
          B_10 = __VERIFIER_nondet_int ();
          I_10 = __VERIFIER_nondet_int ();
          J_10 = __VERIFIER_nondet_int ();
          H_10 = INV1_0;
          G_10 = INV1_1;
          C_10 = INV1_2;
          D_10 = INV1_3;
          E_10 = INV1_4;
          F_10 = INV1_5;
          if (!
              ((G_10 == (B_10 + -1)) && (E_10 == 0)
               && (((10 * A_10) + (-1 * H_10)) >= -9)
               && ((H_10 + (-10 * A_10)) >= 0) && (H_10 >= 1)
               && (I_10 == J_10)))
              abort ();
          INV1_0 = A_10;
          INV1_1 = B_10;
          INV1_2 = C_10;
          INV1_3 = D_10;
          INV1_4 = E_10;
          INV1_5 = F_10;
          goto INV1_6;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }
  INV1_8:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          v_9_0 = __VERIFIER_nondet_int ();
          E_0 = __VERIFIER_nondet_int ();
          H_0 = __VERIFIER_nondet_int ();
          I_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          B_0 = INV1_1;
          C_0 = INV1_2;
          D_0 = INV1_3;
          F_0 = INV1_4;
          G_0 = INV1_5;
          if (!
              ((!(F_0 == 0)) && (E_0 == 0) && (!(A_0 >= 1)) && (C_0 <= 9)
               && (H_0 == I_0) && (v_9_0 == D_0)))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          INV1_4 = E_0;
          INV1_5 = v_9_0;
          goto INV1_7;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }
  INV1_9:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          E_3 = __VERIFIER_nondet_int ();
          F_3 = __VERIFIER_nondet_int ();
          I_3 = __VERIFIER_nondet_int ();
          J_3 = __VERIFIER_nondet_int ();
          A_3 = INV1_0;
          B_3 = INV1_1;
          C_3 = INV1_2;
          D_3 = INV1_3;
          G_3 = INV1_4;
          H_3 = INV1_5;
          if (!
              ((!(G_3 == 0)) && (E_3 == 0) && (D_3 == (F_3 + -3))
               && (!(A_3 >= 1)) && (C_3 <= 9999) && (!(C_3 <= 99))
               && (!(C_3 <= 999)) && (!(C_3 <= 9)) && (I_3 == J_3)))
              abort ();
          INV1_0 = A_3;
          INV1_1 = B_3;
          INV1_2 = C_3;
          INV1_3 = D_3;
          INV1_4 = E_3;
          INV1_5 = F_3;
          goto INV1_8;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }
  INV1_10:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = __VERIFIER_nondet_int ();
          D_7 = __VERIFIER_nondet_int ();
          K_7 = __VERIFIER_nondet_int ();
          L_7 = __VERIFIER_nondet_int ();
          J_7 = INV1_0;
          G_7 = INV1_1;
          I_7 = INV1_2;
          H_7 = INV1_3;
          E_7 = INV1_4;
          F_7 = INV1_5;
          if (!
              ((H_7 == (D_7 + -4)) && (G_7 == (B_7 + -1)) && (!(E_7 == 0))
               && (((10000 * C_7) + (-1 * I_7)) >= -9999)
               && (((10 * A_7) + (-1 * J_7)) >= -9)
               && ((J_7 + (-10 * A_7)) >= 0) && ((I_7 + (-10000 * C_7)) >= 0)
               && (J_7 >= 1) && (!(I_7 <= 9999)) && (!(I_7 <= 99))
               && (!(I_7 <= 999)) && (!(I_7 <= 9)) && (K_7 == L_7)))
              abort ();
          INV1_0 = A_7;
          INV1_1 = B_7;
          INV1_2 = C_7;
          INV1_3 = D_7;
          INV1_4 = E_7;
          INV1_5 = F_7;
          goto INV1_9;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          J_5 = __VERIFIER_nondet_int ();
          K_5 = __VERIFIER_nondet_int ();
          v_11_5 = __VERIFIER_nondet_int ();
          G_5 = INV1_0;
          F_5 = INV1_1;
          C_5 = INV1_2;
          D_5 = INV1_3;
          H_5 = INV1_4;
          I_5 = INV1_5;
          if (!
              ((!(H_5 == 0)) && (F_5 == (B_5 + -1)) && (E_5 == 0)
               && (((10 * A_5) + (-1 * G_5)) >= -9)
               && ((G_5 + (-10 * A_5)) >= 0) && (G_5 >= 1) && (C_5 <= 9)
               && (J_5 == K_5) && (v_11_5 == D_5)))
              abort ();
          INV1_0 = A_5;
          INV1_1 = B_5;
          INV1_2 = C_5;
          INV1_3 = D_5;
          INV1_4 = E_5;
          INV1_5 = v_11_5;
          goto INV1_10;

      default:
          abort ();
      }

    // return expression

}

