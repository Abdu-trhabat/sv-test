// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__nested-while_006.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__nested-while_006_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV_MAIN_42_0;
    int INV_MAIN_42_1;
    int INV_MAIN_42_2;
    int INV_MAIN_42_3;
    int INV_MAIN_42_4;
    int INV_MAIN_42_5;
    int INV_MAIN_23_0;
    int INV_MAIN_23_1;
    int INV_MAIN_23_2;
    int INV_MAIN_23_3;
    int INV_MAIN_23_4;
    int INV_MAIN_23_5;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int v_4_0;
    int v_5_0;
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
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int H_3;
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
    int G_7;
    int H_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int F_8;
    int G_8;
    int H_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int F_9;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((A_0 == C_0) && (!(C_0 <= 0)) && (!(A_0 <= 0)) && (B_0 == D_0)
         && (0 == v_4_0) && (0 == v_5_0)))
        abort ();
    INV_MAIN_23_0 = B_0;
    INV_MAIN_23_1 = v_4_0;
    INV_MAIN_23_2 = A_0;
    INV_MAIN_23_3 = D_0;
    INV_MAIN_23_4 = v_5_0;
    INV_MAIN_23_5 = C_0;
    A_3 = __VERIFIER_nondet_int ();
    B_3 = __VERIFIER_nondet_int ();
    C_3 = INV_MAIN_23_0;
    D_3 = INV_MAIN_23_1;
    E_3 = INV_MAIN_23_2;
    F_3 = INV_MAIN_23_3;
    G_3 = INV_MAIN_23_4;
    H_3 = INV_MAIN_23_5;
    if (!
        ((B_3 == (F_3 + -1)) && (!(H_3 <= (G_3 + 1))) && (G_3 <= (H_3 + -1))
         && ((E_3 <= (D_3 + 1)) || (!(D_3 <= (E_3 + -1))))
         && (A_3 == (G_3 + 1))))
        abort ();
    INV_MAIN_23_0 = C_3;
    INV_MAIN_23_1 = D_3;
    INV_MAIN_23_2 = E_3;
    INV_MAIN_23_3 = B_3;
    INV_MAIN_23_4 = A_3;
    INV_MAIN_23_5 = H_3;
    goto INV_MAIN_23_5;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV_MAIN_42_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_9 = INV_MAIN_42_0;
          B_9 = INV_MAIN_42_1;
          C_9 = INV_MAIN_42_2;
          D_9 = INV_MAIN_42_3;
          E_9 = INV_MAIN_42_4;
          F_9 = INV_MAIN_42_5;
          if (!
              ((F_9 <= (D_9 + -1)) && (D_9 <= (F_9 + 1))
               && (!(C_9 <= (A_9 + -1))) && (A_9 <= (C_9 + 1))))
              abort ();
          goto main_error;

      case 1:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = __VERIFIER_nondet_int ();
          D_6 = __VERIFIER_nondet_int ();
          E_6 = INV_MAIN_42_0;
          F_6 = INV_MAIN_42_1;
          G_6 = INV_MAIN_42_2;
          H_6 = INV_MAIN_42_3;
          I_6 = INV_MAIN_42_4;
          J_6 = INV_MAIN_42_5;
          if (!
              ((B_6 == (I_6 + 1)) && (C_6 == (G_6 + 1)) && (D_6 == (F_6 + 1))
               && (!(E_6 <= (G_6 + 1))) && (!(H_6 <= (J_6 + 1)))
               && (A_6 == (J_6 + 1))))
              abort ();
          INV_MAIN_42_0 = E_6;
          INV_MAIN_42_1 = D_6;
          INV_MAIN_42_2 = C_6;
          INV_MAIN_42_3 = H_6;
          INV_MAIN_42_4 = B_6;
          INV_MAIN_42_5 = A_6;
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = __VERIFIER_nondet_int ();
          D_6 = __VERIFIER_nondet_int ();
          E_6 = INV_MAIN_42_0;
          F_6 = INV_MAIN_42_1;
          G_6 = INV_MAIN_42_2;
          H_6 = INV_MAIN_42_3;
          I_6 = INV_MAIN_42_4;
          J_6 = INV_MAIN_42_5;
          if (!
              ((B_6 == (I_6 + 1)) && (C_6 == (G_6 + 1)) && (D_6 == (F_6 + 1))
               && (!(E_6 <= (G_6 + 1))) && (!(H_6 <= (J_6 + 1)))
               && (A_6 == (J_6 + 1))))
              abort ();
          INV_MAIN_42_0 = E_6;
          INV_MAIN_42_1 = D_6;
          INV_MAIN_42_2 = C_6;
          INV_MAIN_42_3 = H_6;
          INV_MAIN_42_4 = B_6;
          INV_MAIN_42_5 = A_6;
          goto INV_MAIN_42_3;

      case 2:
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          C_8 = INV_MAIN_42_0;
          D_8 = INV_MAIN_42_1;
          E_8 = INV_MAIN_42_2;
          F_8 = INV_MAIN_42_3;
          G_8 = INV_MAIN_42_4;
          H_8 = INV_MAIN_42_5;
          if (!
              ((B_8 == (G_8 + 1)) && (C_8 <= (E_8 + 1))
               && (!(F_8 <= (H_8 + 1))) && (A_8 == (H_8 + 1))))
              abort ();
          INV_MAIN_42_0 = C_8;
          INV_MAIN_42_1 = D_8;
          INV_MAIN_42_2 = E_8;
          INV_MAIN_42_3 = F_8;
          INV_MAIN_42_4 = B_8;
          INV_MAIN_42_5 = A_8;
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = __VERIFIER_nondet_int ();
          D_6 = __VERIFIER_nondet_int ();
          E_6 = INV_MAIN_42_0;
          F_6 = INV_MAIN_42_1;
          G_6 = INV_MAIN_42_2;
          H_6 = INV_MAIN_42_3;
          I_6 = INV_MAIN_42_4;
          J_6 = INV_MAIN_42_5;
          if (!
              ((B_6 == (I_6 + 1)) && (C_6 == (G_6 + 1)) && (D_6 == (F_6 + 1))
               && (!(E_6 <= (G_6 + 1))) && (!(H_6 <= (J_6 + 1)))
               && (A_6 == (J_6 + 1))))
              abort ();
          INV_MAIN_42_0 = E_6;
          INV_MAIN_42_1 = D_6;
          INV_MAIN_42_2 = C_6;
          INV_MAIN_42_3 = H_6;
          INV_MAIN_42_4 = B_6;
          INV_MAIN_42_5 = A_6;
          goto INV_MAIN_42_3;

      case 3:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = __VERIFIER_nondet_int ();
          D_6 = __VERIFIER_nondet_int ();
          E_6 = INV_MAIN_42_0;
          F_6 = INV_MAIN_42_1;
          G_6 = INV_MAIN_42_2;
          H_6 = INV_MAIN_42_3;
          I_6 = INV_MAIN_42_4;
          J_6 = INV_MAIN_42_5;
          if (!
              ((B_6 == (I_6 + 1)) && (C_6 == (G_6 + 1)) && (D_6 == (F_6 + 1))
               && (!(E_6 <= (G_6 + 1))) && (!(H_6 <= (J_6 + 1)))
               && (A_6 == (J_6 + 1))))
              abort ();
          INV_MAIN_42_0 = E_6;
          INV_MAIN_42_1 = D_6;
          INV_MAIN_42_2 = C_6;
          INV_MAIN_42_3 = H_6;
          INV_MAIN_42_4 = B_6;
          INV_MAIN_42_5 = A_6;
          goto INV_MAIN_42_3;

      case 4:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          C_5 = __VERIFIER_nondet_int ();
          D_5 = __VERIFIER_nondet_int ();
          E_5 = INV_MAIN_42_0;
          F_5 = INV_MAIN_42_1;
          G_5 = INV_MAIN_42_2;
          H_5 = INV_MAIN_42_3;
          I_5 = INV_MAIN_42_4;
          J_5 = INV_MAIN_42_5;
          if (!
              ((B_5 == (I_5 + 1)) && (C_5 == (G_5 + 1)) && (D_5 == (F_5 + 1))
               && (E_5 <= (G_5 + 1)) && (!(J_5 <= (H_5 + -1)))
               && (H_5 <= (J_5 + 1)) && (!(G_5 <= (E_5 + -1)))
               && (A_5 == (J_5 + 1))))
              abort ();
          INV_MAIN_23_0 = D_5;
          INV_MAIN_23_1 = E_5;
          INV_MAIN_23_2 = C_5;
          INV_MAIN_23_3 = B_5;
          INV_MAIN_23_4 = H_5;
          INV_MAIN_23_5 = A_5;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_23_0;
          D_3 = INV_MAIN_23_1;
          E_3 = INV_MAIN_23_2;
          F_3 = INV_MAIN_23_3;
          G_3 = INV_MAIN_23_4;
          H_3 = INV_MAIN_23_5;
          if (!
              ((B_3 == (F_3 + -1)) && (!(H_3 <= (G_3 + 1)))
               && (G_3 <= (H_3 + -1)) && ((E_3 <= (D_3 + 1))
                                          || (!(D_3 <= (E_3 + -1))))
               && (A_3 == (G_3 + 1))))
              abort ();
          INV_MAIN_23_0 = C_3;
          INV_MAIN_23_1 = D_3;
          INV_MAIN_23_2 = E_3;
          INV_MAIN_23_3 = B_3;
          INV_MAIN_23_4 = A_3;
          INV_MAIN_23_5 = H_3;
          goto INV_MAIN_23_5;

      default:
          abort ();
      }
  INV_MAIN_23_1:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          C_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet_int ();
          E_4 = INV_MAIN_23_0;
          F_4 = INV_MAIN_23_1;
          G_4 = INV_MAIN_23_2;
          H_4 = INV_MAIN_23_3;
          I_4 = INV_MAIN_23_4;
          J_4 = INV_MAIN_23_5;
          if (!
              ((B_4 == (I_4 + 1)) && (C_4 == (E_4 + -1)) && (D_4 == (F_4 + 1))
               && (!(F_4 <= (G_4 + -1))) && (!(I_4 <= (J_4 + -1)))
               && (A_4 == (H_4 + -1))))
              abort ();
          INV_MAIN_42_0 = D_4;
          INV_MAIN_42_1 = C_4;
          INV_MAIN_42_2 = G_4;
          INV_MAIN_42_3 = B_4;
          INV_MAIN_42_4 = A_4;
          INV_MAIN_42_5 = J_4;
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = __VERIFIER_nondet_int ();
          D_6 = __VERIFIER_nondet_int ();
          E_6 = INV_MAIN_42_0;
          F_6 = INV_MAIN_42_1;
          G_6 = INV_MAIN_42_2;
          H_6 = INV_MAIN_42_3;
          I_6 = INV_MAIN_42_4;
          J_6 = INV_MAIN_42_5;
          if (!
              ((B_6 == (I_6 + 1)) && (C_6 == (G_6 + 1)) && (D_6 == (F_6 + 1))
               && (!(E_6 <= (G_6 + 1))) && (!(H_6 <= (J_6 + 1)))
               && (A_6 == (J_6 + 1))))
              abort ();
          INV_MAIN_42_0 = E_6;
          INV_MAIN_42_1 = D_6;
          INV_MAIN_42_2 = C_6;
          INV_MAIN_42_3 = H_6;
          INV_MAIN_42_4 = B_6;
          INV_MAIN_42_5 = A_6;
          goto INV_MAIN_42_3;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          E_1 = INV_MAIN_23_0;
          F_1 = INV_MAIN_23_1;
          G_1 = INV_MAIN_23_2;
          H_1 = INV_MAIN_23_3;
          I_1 = INV_MAIN_23_4;
          J_1 = INV_MAIN_23_5;
          if (!
              ((B_1 == (H_1 + -1)) && (C_1 == (F_1 + 1))
               && (D_1 == (E_1 + -1)) && (F_1 <= (G_1 + -1))
               && (!(J_1 <= (I_1 + 1))) && (I_1 <= (J_1 + -1))
               && (!(G_1 <= (F_1 + 1))) && (A_1 == (I_1 + 1))))
              abort ();
          INV_MAIN_23_0 = D_1;
          INV_MAIN_23_1 = C_1;
          INV_MAIN_23_2 = G_1;
          INV_MAIN_23_3 = B_1;
          INV_MAIN_23_4 = A_1;
          INV_MAIN_23_5 = J_1;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_23_0;
          D_3 = INV_MAIN_23_1;
          E_3 = INV_MAIN_23_2;
          F_3 = INV_MAIN_23_3;
          G_3 = INV_MAIN_23_4;
          H_3 = INV_MAIN_23_5;
          if (!
              ((B_3 == (F_3 + -1)) && (!(H_3 <= (G_3 + 1)))
               && (G_3 <= (H_3 + -1)) && ((E_3 <= (D_3 + 1))
                                          || (!(D_3 <= (E_3 + -1))))
               && (A_3 == (G_3 + 1))))
              abort ();
          INV_MAIN_23_0 = C_3;
          INV_MAIN_23_1 = D_3;
          INV_MAIN_23_2 = E_3;
          INV_MAIN_23_3 = B_3;
          INV_MAIN_23_4 = A_3;
          INV_MAIN_23_5 = H_3;
          goto INV_MAIN_23_5;

      case 2:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_23_0;
          D_3 = INV_MAIN_23_1;
          E_3 = INV_MAIN_23_2;
          F_3 = INV_MAIN_23_3;
          G_3 = INV_MAIN_23_4;
          H_3 = INV_MAIN_23_5;
          if (!
              ((B_3 == (F_3 + -1)) && (!(H_3 <= (G_3 + 1)))
               && (G_3 <= (H_3 + -1)) && ((E_3 <= (D_3 + 1))
                                          || (!(D_3 <= (E_3 + -1))))
               && (A_3 == (G_3 + 1))))
              abort ();
          INV_MAIN_23_0 = C_3;
          INV_MAIN_23_1 = D_3;
          INV_MAIN_23_2 = E_3;
          INV_MAIN_23_3 = B_3;
          INV_MAIN_23_4 = A_3;
          INV_MAIN_23_5 = H_3;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_23_0;
          D_3 = INV_MAIN_23_1;
          E_3 = INV_MAIN_23_2;
          F_3 = INV_MAIN_23_3;
          G_3 = INV_MAIN_23_4;
          H_3 = INV_MAIN_23_5;
          if (!
              ((B_3 == (F_3 + -1)) && (!(H_3 <= (G_3 + 1)))
               && (G_3 <= (H_3 + -1)) && ((E_3 <= (D_3 + 1))
                                          || (!(D_3 <= (E_3 + -1))))
               && (A_3 == (G_3 + 1))))
              abort ();
          INV_MAIN_23_0 = C_3;
          INV_MAIN_23_1 = D_3;
          INV_MAIN_23_2 = E_3;
          INV_MAIN_23_3 = B_3;
          INV_MAIN_23_4 = A_3;
          INV_MAIN_23_5 = H_3;
          goto INV_MAIN_23_5;

      case 3:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_23_0;
          D_3 = INV_MAIN_23_1;
          E_3 = INV_MAIN_23_2;
          F_3 = INV_MAIN_23_3;
          G_3 = INV_MAIN_23_4;
          H_3 = INV_MAIN_23_5;
          if (!
              ((B_3 == (F_3 + -1)) && (!(H_3 <= (G_3 + 1)))
               && (G_3 <= (H_3 + -1)) && ((E_3 <= (D_3 + 1))
                                          || (!(D_3 <= (E_3 + -1))))
               && (A_3 == (G_3 + 1))))
              abort ();
          INV_MAIN_23_0 = C_3;
          INV_MAIN_23_1 = D_3;
          INV_MAIN_23_2 = E_3;
          INV_MAIN_23_3 = B_3;
          INV_MAIN_23_4 = A_3;
          INV_MAIN_23_5 = H_3;
          goto INV_MAIN_23_5;

      default:
          abort ();
      }
  INV_MAIN_42_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = INV_MAIN_42_0;
          D_7 = INV_MAIN_42_1;
          E_7 = INV_MAIN_42_2;
          F_7 = INV_MAIN_42_3;
          G_7 = INV_MAIN_42_4;
          H_7 = INV_MAIN_42_5;
          if (!
              ((B_7 == (D_7 + 1)) && (!(C_7 <= (E_7 + 1)))
               && (F_7 <= (H_7 + 1)) && (A_7 == (E_7 + 1))))
              abort ();
          INV_MAIN_42_0 = C_7;
          INV_MAIN_42_1 = B_7;
          INV_MAIN_42_2 = A_7;
          INV_MAIN_42_3 = F_7;
          INV_MAIN_42_4 = G_7;
          INV_MAIN_42_5 = H_7;
          goto INV_MAIN_42_0;

      case 1:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = __VERIFIER_nondet_int ();
          D_6 = __VERIFIER_nondet_int ();
          E_6 = INV_MAIN_42_0;
          F_6 = INV_MAIN_42_1;
          G_6 = INV_MAIN_42_2;
          H_6 = INV_MAIN_42_3;
          I_6 = INV_MAIN_42_4;
          J_6 = INV_MAIN_42_5;
          if (!
              ((B_6 == (I_6 + 1)) && (C_6 == (G_6 + 1)) && (D_6 == (F_6 + 1))
               && (!(E_6 <= (G_6 + 1))) && (!(H_6 <= (J_6 + 1)))
               && (A_6 == (J_6 + 1))))
              abort ();
          INV_MAIN_42_0 = E_6;
          INV_MAIN_42_1 = D_6;
          INV_MAIN_42_2 = C_6;
          INV_MAIN_42_3 = H_6;
          INV_MAIN_42_4 = B_6;
          INV_MAIN_42_5 = A_6;
          goto INV_MAIN_42_3;

      default:
          abort ();
      }
  INV_MAIN_42_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          C_8 = INV_MAIN_42_0;
          D_8 = INV_MAIN_42_1;
          E_8 = INV_MAIN_42_2;
          F_8 = INV_MAIN_42_3;
          G_8 = INV_MAIN_42_4;
          H_8 = INV_MAIN_42_5;
          if (!
              ((B_8 == (G_8 + 1)) && (C_8 <= (E_8 + 1))
               && (!(F_8 <= (H_8 + 1))) && (A_8 == (H_8 + 1))))
              abort ();
          INV_MAIN_42_0 = C_8;
          INV_MAIN_42_1 = D_8;
          INV_MAIN_42_2 = E_8;
          INV_MAIN_42_3 = F_8;
          INV_MAIN_42_4 = B_8;
          INV_MAIN_42_5 = A_8;
          goto INV_MAIN_42_2;

      case 1:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = __VERIFIER_nondet_int ();
          D_6 = __VERIFIER_nondet_int ();
          E_6 = INV_MAIN_42_0;
          F_6 = INV_MAIN_42_1;
          G_6 = INV_MAIN_42_2;
          H_6 = INV_MAIN_42_3;
          I_6 = INV_MAIN_42_4;
          J_6 = INV_MAIN_42_5;
          if (!
              ((B_6 == (I_6 + 1)) && (C_6 == (G_6 + 1)) && (D_6 == (F_6 + 1))
               && (!(E_6 <= (G_6 + 1))) && (!(H_6 <= (J_6 + 1)))
               && (A_6 == (J_6 + 1))))
              abort ();
          INV_MAIN_42_0 = E_6;
          INV_MAIN_42_1 = D_6;
          INV_MAIN_42_2 = C_6;
          INV_MAIN_42_3 = H_6;
          INV_MAIN_42_4 = B_6;
          INV_MAIN_42_5 = A_6;
          goto INV_MAIN_42_3;

      default:
          abort ();
      }
  INV_MAIN_23_4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = INV_MAIN_23_0;
          D_2 = INV_MAIN_23_1;
          E_2 = INV_MAIN_23_2;
          F_2 = INV_MAIN_23_3;
          G_2 = INV_MAIN_23_4;
          H_2 = INV_MAIN_23_5;
          if (!
              ((B_2 == (C_2 + -1)) && (D_2 <= (E_2 + -1))
               && (!(E_2 <= (D_2 + 1))) && ((!(G_2 <= (H_2 + -1)))
                                            || (H_2 <= (G_2 + 1)))
               && (A_2 == (D_2 + 1))))
              abort ();
          INV_MAIN_23_0 = B_2;
          INV_MAIN_23_1 = A_2;
          INV_MAIN_23_2 = E_2;
          INV_MAIN_23_3 = F_2;
          INV_MAIN_23_4 = G_2;
          INV_MAIN_23_5 = H_2;
          goto INV_MAIN_23_1;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_23_0;
          D_3 = INV_MAIN_23_1;
          E_3 = INV_MAIN_23_2;
          F_3 = INV_MAIN_23_3;
          G_3 = INV_MAIN_23_4;
          H_3 = INV_MAIN_23_5;
          if (!
              ((B_3 == (F_3 + -1)) && (!(H_3 <= (G_3 + 1)))
               && (G_3 <= (H_3 + -1)) && ((E_3 <= (D_3 + 1))
                                          || (!(D_3 <= (E_3 + -1))))
               && (A_3 == (G_3 + 1))))
              abort ();
          INV_MAIN_23_0 = C_3;
          INV_MAIN_23_1 = D_3;
          INV_MAIN_23_2 = E_3;
          INV_MAIN_23_3 = B_3;
          INV_MAIN_23_4 = A_3;
          INV_MAIN_23_5 = H_3;
          goto INV_MAIN_23_5;

      default:
          abort ();
      }
  INV_MAIN_23_5:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          E_1 = INV_MAIN_23_0;
          F_1 = INV_MAIN_23_1;
          G_1 = INV_MAIN_23_2;
          H_1 = INV_MAIN_23_3;
          I_1 = INV_MAIN_23_4;
          J_1 = INV_MAIN_23_5;
          if (!
              ((B_1 == (H_1 + -1)) && (C_1 == (F_1 + 1))
               && (D_1 == (E_1 + -1)) && (F_1 <= (G_1 + -1))
               && (!(J_1 <= (I_1 + 1))) && (I_1 <= (J_1 + -1))
               && (!(G_1 <= (F_1 + 1))) && (A_1 == (I_1 + 1))))
              abort ();
          INV_MAIN_23_0 = D_1;
          INV_MAIN_23_1 = C_1;
          INV_MAIN_23_2 = G_1;
          INV_MAIN_23_3 = B_1;
          INV_MAIN_23_4 = A_1;
          INV_MAIN_23_5 = J_1;
          goto INV_MAIN_23_4;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = INV_MAIN_23_0;
          D_3 = INV_MAIN_23_1;
          E_3 = INV_MAIN_23_2;
          F_3 = INV_MAIN_23_3;
          G_3 = INV_MAIN_23_4;
          H_3 = INV_MAIN_23_5;
          if (!
              ((B_3 == (F_3 + -1)) && (!(H_3 <= (G_3 + 1)))
               && (G_3 <= (H_3 + -1)) && ((E_3 <= (D_3 + 1))
                                          || (!(D_3 <= (E_3 + -1))))
               && (A_3 == (G_3 + 1))))
              abort ();
          INV_MAIN_23_0 = C_3;
          INV_MAIN_23_1 = D_3;
          INV_MAIN_23_2 = E_3;
          INV_MAIN_23_3 = B_3;
          INV_MAIN_23_4 = A_3;
          INV_MAIN_23_5 = H_3;
          goto INV_MAIN_23_5;

      default:
          abort ();
      }

    // return expression

}

