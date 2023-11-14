// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/while_after_while_if_merged_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "while_after_while_if_merged_safe.c-1_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main15_0;
    int inv_main15_1;
    int inv_main15_2;
    int inv_main15_3;
    int inv_main15_4;
    int inv_main15_5;
    int inv_main15_6;
    int inv_main15_7;
    int inv_main15_8;
    int inv_main12_0;
    int inv_main12_1;
    int inv_main12_2;
    int inv_main12_3;
    int inv_main12_4;
    int inv_main12_5;
    int inv_main12_6;
    int inv_main12_7;
    int inv_main12_8;
    int inv_main7_0;
    int inv_main7_1;
    int inv_main7_2;
    int inv_main7_3;
    int inv_main7_4;
    int inv_main7_5;
    int inv_main7_6;
    int inv_main7_7;
    int inv_main7_8;
    int inv_main20_0;
    int inv_main20_1;
    int inv_main20_2;
    int inv_main20_3;
    int inv_main20_4;
    int inv_main20_5;
    int inv_main20_6;
    int inv_main20_7;
    int inv_main20_8;
    int inv_main3_0;
    int inv_main3_1;
    int inv_main8_0;
    int inv_main8_1;
    int inv_main8_2;
    int inv_main8_3;
    int inv_main8_4;
    int inv_main8_5;
    int inv_main8_6;
    int inv_main8_7;
    int inv_main8_8;
    int v_0_0;
    int v_1_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int H_3;
    int I_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int H_4;
    int I_4;
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
    int A_10;
    int B_10;
    int C_10;
    int D_10;
    int E_10;
    int v_5_10;
    int v_6_10;
    int v_7_10;
    int v_8_10;
    int A_11;
    int B_11;
    int C_11;
    int D_11;
    int E_11;
    int v_5_11;
    int v_6_11;
    int v_7_11;
    int v_8_11;
    int A_12;
    int B_12;
    int C_12;
    int D_12;
    int E_12;
    int F_12;
    int G_12;
    int H_12;
    int I_12;



    // main logic
    goto main_init;

  main_init:
    if (!((0 == v_0_0) && (0 == v_1_0)))
        abort ();
    inv_main3_0 = v_0_0;
    inv_main3_1 = v_1_0;
    goto inv_main3;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_11 = __VERIFIER_nondet_int ();
          D_11 = __VERIFIER_nondet_int ();
          E_11 = __VERIFIER_nondet_int ();
          v_6_11 = __VERIFIER_nondet_int ();
          v_5_11 = __VERIFIER_nondet_int ();
          v_8_11 = __VERIFIER_nondet_int ();
          v_7_11 = __VERIFIER_nondet_int ();
          B_11 = inv_main3_0;
          C_11 = inv_main3_1;
          if (!
              ((!(1 <= A_11)) && (v_5_11 == E_11) && (v_6_11 == E_11)
               && (v_7_11 == D_11) && (v_8_11 == D_11)))
              abort ();
          inv_main7_0 = B_11;
          inv_main7_1 = C_11;
          inv_main7_2 = E_11;
          inv_main7_3 = v_5_11;
          inv_main7_4 = v_6_11;
          inv_main7_5 = A_11;
          inv_main7_6 = D_11;
          inv_main7_7 = v_7_11;
          inv_main7_8 = v_8_11;
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = inv_main7_0;
          E_6 = inv_main7_1;
          G_6 = inv_main7_2;
          D_6 = inv_main7_3;
          F_6 = inv_main7_4;
          K_6 = inv_main7_5;
          I_6 = inv_main7_6;
          J_6 = inv_main7_7;
          H_6 = inv_main7_8;
          if (!((B_6 == (C_6 + 2)) && (1 <= J_6) && (A_6 == (J_6 + -1))))
              abort ();
          inv_main7_0 = B_6;
          inv_main7_1 = E_6;
          inv_main7_2 = G_6;
          inv_main7_3 = D_6;
          inv_main7_4 = F_6;
          inv_main7_5 = K_6;
          inv_main7_6 = I_6;
          inv_main7_7 = A_6;
          inv_main7_8 = H_6;
          goto inv_main7_0;

      case 1:
          A_10 = __VERIFIER_nondet_int ();
          C_10 = __VERIFIER_nondet_int ();
          E_10 = __VERIFIER_nondet_int ();
          v_6_10 = __VERIFIER_nondet_int ();
          v_5_10 = __VERIFIER_nondet_int ();
          v_8_10 = __VERIFIER_nondet_int ();
          v_7_10 = __VERIFIER_nondet_int ();
          B_10 = inv_main3_0;
          D_10 = inv_main3_1;
          if (!
              ((1 <= A_10) && (v_5_10 == E_10) && (v_6_10 == E_10)
               && (v_7_10 == C_10) && (v_8_10 == C_10)))
              abort ();
          inv_main8_0 = B_10;
          inv_main8_1 = D_10;
          inv_main8_2 = E_10;
          inv_main8_3 = v_5_10;
          inv_main8_4 = v_6_10;
          inv_main8_5 = A_10;
          inv_main8_6 = C_10;
          inv_main8_7 = v_7_10;
          inv_main8_8 = v_8_10;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          C_5 = inv_main8_0;
          E_5 = inv_main8_1;
          G_5 = inv_main8_2;
          D_5 = inv_main8_3;
          F_5 = inv_main8_4;
          K_5 = inv_main8_5;
          I_5 = inv_main8_6;
          J_5 = inv_main8_7;
          H_5 = inv_main8_8;
          if (!((B_5 == (C_5 + 1)) && (1 <= D_5) && (A_5 == (D_5 + -1))))
              abort ();
          inv_main8_0 = B_5;
          inv_main8_1 = E_5;
          inv_main8_2 = G_5;
          inv_main8_3 = A_5;
          inv_main8_4 = F_5;
          inv_main8_5 = K_5;
          inv_main8_6 = I_5;
          inv_main8_7 = J_5;
          inv_main8_8 = H_5;
          goto inv_main8_3;

      default:
          abort ();
      }
  inv_main7_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = inv_main7_0;
          C_2 = inv_main7_1;
          E_2 = inv_main7_2;
          B_2 = inv_main7_3;
          D_2 = inv_main7_4;
          I_2 = inv_main7_5;
          G_2 = inv_main7_6;
          H_2 = inv_main7_7;
          F_2 = inv_main7_8;
          if (!(!(1 <= H_2)))
              abort ();
          inv_main12_0 = A_2;
          inv_main12_1 = C_2;
          inv_main12_2 = E_2;
          inv_main12_3 = B_2;
          inv_main12_4 = D_2;
          inv_main12_5 = I_2;
          inv_main12_6 = G_2;
          inv_main12_7 = H_2;
          inv_main12_8 = F_2;
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          C_8 = inv_main12_0;
          E_8 = inv_main12_1;
          G_8 = inv_main12_2;
          D_8 = inv_main12_3;
          F_8 = inv_main12_4;
          K_8 = inv_main12_5;
          I_8 = inv_main12_6;
          J_8 = inv_main12_7;
          H_8 = inv_main12_8;
          if (!
              ((B_8 == (E_8 + 1)) && (1 <= F_8) && (1 <= K_8)
               && (A_8 == (F_8 + -1))))
              abort ();
          inv_main12_0 = C_8;
          inv_main12_1 = B_8;
          inv_main12_2 = G_8;
          inv_main12_3 = D_8;
          inv_main12_4 = A_8;
          inv_main12_5 = K_8;
          inv_main12_6 = I_8;
          inv_main12_7 = J_8;
          inv_main12_8 = H_8;
          goto inv_main12_4;

      case 1:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = inv_main7_0;
          E_6 = inv_main7_1;
          G_6 = inv_main7_2;
          D_6 = inv_main7_3;
          F_6 = inv_main7_4;
          K_6 = inv_main7_5;
          I_6 = inv_main7_6;
          J_6 = inv_main7_7;
          H_6 = inv_main7_8;
          if (!((B_6 == (C_6 + 2)) && (1 <= J_6) && (A_6 == (J_6 + -1))))
              abort ();
          inv_main7_0 = B_6;
          inv_main7_1 = E_6;
          inv_main7_2 = G_6;
          inv_main7_3 = D_6;
          inv_main7_4 = F_6;
          inv_main7_5 = K_6;
          inv_main7_6 = I_6;
          inv_main7_7 = A_6;
          inv_main7_8 = H_6;
          goto inv_main7_0;

      default:
          abort ();
      }
  inv_main15_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = inv_main15_0;
          C_4 = inv_main15_1;
          E_4 = inv_main15_2;
          B_4 = inv_main15_3;
          D_4 = inv_main15_4;
          I_4 = inv_main15_5;
          G_4 = inv_main15_6;
          H_4 = inv_main15_7;
          F_4 = inv_main15_8;
          if (!(!(1 <= F_4)))
              abort ();
          inv_main20_0 = A_4;
          inv_main20_1 = C_4;
          inv_main20_2 = E_4;
          inv_main20_3 = B_4;
          inv_main20_4 = D_4;
          inv_main20_5 = I_4;
          inv_main20_6 = G_4;
          inv_main20_7 = H_4;
          inv_main20_8 = F_4;
          A_12 = inv_main20_0;
          C_12 = inv_main20_1;
          E_12 = inv_main20_2;
          B_12 = inv_main20_3;
          D_12 = inv_main20_4;
          I_12 = inv_main20_5;
          G_12 = inv_main20_6;
          H_12 = inv_main20_7;
          F_12 = inv_main20_8;
          if (!(!(A_12 == C_12)))
              abort ();
          goto main_error;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = inv_main15_0;
          E_7 = inv_main15_1;
          G_7 = inv_main15_2;
          D_7 = inv_main15_3;
          F_7 = inv_main15_4;
          K_7 = inv_main15_5;
          I_7 = inv_main15_6;
          J_7 = inv_main15_7;
          H_7 = inv_main15_8;
          if (!((B_7 == (E_7 + 2)) && (1 <= H_7) && (A_7 == (H_7 + -1))))
              abort ();
          inv_main15_0 = C_7;
          inv_main15_1 = B_7;
          inv_main15_2 = G_7;
          inv_main15_3 = D_7;
          inv_main15_4 = F_7;
          inv_main15_5 = K_7;
          inv_main15_6 = I_7;
          inv_main15_7 = J_7;
          inv_main15_8 = A_7;
          goto inv_main15_1;

      default:
          abort ();
      }
  inv_main12_2:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_3 = inv_main12_0;
          C_3 = inv_main12_1;
          E_3 = inv_main12_2;
          B_3 = inv_main12_3;
          D_3 = inv_main12_4;
          I_3 = inv_main12_5;
          G_3 = inv_main12_6;
          H_3 = inv_main12_7;
          F_3 = inv_main12_8;
          if (!(!(1 <= D_3)))
              abort ();
          inv_main15_0 = A_3;
          inv_main15_1 = C_3;
          inv_main15_2 = E_3;
          inv_main15_3 = B_3;
          inv_main15_4 = D_3;
          inv_main15_5 = I_3;
          inv_main15_6 = G_3;
          inv_main15_7 = H_3;
          inv_main15_8 = F_3;
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          C_7 = inv_main15_0;
          E_7 = inv_main15_1;
          G_7 = inv_main15_2;
          D_7 = inv_main15_3;
          F_7 = inv_main15_4;
          K_7 = inv_main15_5;
          I_7 = inv_main15_6;
          J_7 = inv_main15_7;
          H_7 = inv_main15_8;
          if (!((B_7 == (E_7 + 2)) && (1 <= H_7) && (A_7 == (H_7 + -1))))
              abort ();
          inv_main15_0 = C_7;
          inv_main15_1 = B_7;
          inv_main15_2 = G_7;
          inv_main15_3 = D_7;
          inv_main15_4 = F_7;
          inv_main15_5 = K_7;
          inv_main15_6 = I_7;
          inv_main15_7 = J_7;
          inv_main15_8 = A_7;
          goto inv_main15_1;

      case 1:
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          C_8 = inv_main12_0;
          E_8 = inv_main12_1;
          G_8 = inv_main12_2;
          D_8 = inv_main12_3;
          F_8 = inv_main12_4;
          K_8 = inv_main12_5;
          I_8 = inv_main12_6;
          J_8 = inv_main12_7;
          H_8 = inv_main12_8;
          if (!
              ((B_8 == (E_8 + 1)) && (1 <= F_8) && (1 <= K_8)
               && (A_8 == (F_8 + -1))))
              abort ();
          inv_main12_0 = C_8;
          inv_main12_1 = B_8;
          inv_main12_2 = G_8;
          inv_main12_3 = D_8;
          inv_main12_4 = A_8;
          inv_main12_5 = K_8;
          inv_main12_6 = I_8;
          inv_main12_7 = J_8;
          inv_main12_8 = H_8;
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          C_8 = inv_main12_0;
          E_8 = inv_main12_1;
          G_8 = inv_main12_2;
          D_8 = inv_main12_3;
          F_8 = inv_main12_4;
          K_8 = inv_main12_5;
          I_8 = inv_main12_6;
          J_8 = inv_main12_7;
          H_8 = inv_main12_8;
          if (!
              ((B_8 == (E_8 + 1)) && (1 <= F_8) && (1 <= K_8)
               && (A_8 == (F_8 + -1))))
              abort ();
          inv_main12_0 = C_8;
          inv_main12_1 = B_8;
          inv_main12_2 = G_8;
          inv_main12_3 = D_8;
          inv_main12_4 = A_8;
          inv_main12_5 = K_8;
          inv_main12_6 = I_8;
          inv_main12_7 = J_8;
          inv_main12_8 = H_8;
          goto inv_main12_4;

      case 2:
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          C_8 = inv_main12_0;
          E_8 = inv_main12_1;
          G_8 = inv_main12_2;
          D_8 = inv_main12_3;
          F_8 = inv_main12_4;
          K_8 = inv_main12_5;
          I_8 = inv_main12_6;
          J_8 = inv_main12_7;
          H_8 = inv_main12_8;
          if (!
              ((B_8 == (E_8 + 1)) && (1 <= F_8) && (1 <= K_8)
               && (A_8 == (F_8 + -1))))
              abort ();
          inv_main12_0 = C_8;
          inv_main12_1 = B_8;
          inv_main12_2 = G_8;
          inv_main12_3 = D_8;
          inv_main12_4 = A_8;
          inv_main12_5 = K_8;
          inv_main12_6 = I_8;
          inv_main12_7 = J_8;
          inv_main12_8 = H_8;
          goto inv_main12_4;

      default:
          abort ();
      }
  inv_main8_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = inv_main8_0;
          C_1 = inv_main8_1;
          E_1 = inv_main8_2;
          B_1 = inv_main8_3;
          D_1 = inv_main8_4;
          I_1 = inv_main8_5;
          G_1 = inv_main8_6;
          H_1 = inv_main8_7;
          F_1 = inv_main8_8;
          if (!(!(1 <= B_1)))
              abort ();
          inv_main7_0 = A_1;
          inv_main7_1 = C_1;
          inv_main7_2 = E_1;
          inv_main7_3 = B_1;
          inv_main7_4 = D_1;
          inv_main7_5 = I_1;
          inv_main7_6 = G_1;
          inv_main7_7 = H_1;
          inv_main7_8 = F_1;
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          C_6 = inv_main7_0;
          E_6 = inv_main7_1;
          G_6 = inv_main7_2;
          D_6 = inv_main7_3;
          F_6 = inv_main7_4;
          K_6 = inv_main7_5;
          I_6 = inv_main7_6;
          J_6 = inv_main7_7;
          H_6 = inv_main7_8;
          if (!((B_6 == (C_6 + 2)) && (1 <= J_6) && (A_6 == (J_6 + -1))))
              abort ();
          inv_main7_0 = B_6;
          inv_main7_1 = E_6;
          inv_main7_2 = G_6;
          inv_main7_3 = D_6;
          inv_main7_4 = F_6;
          inv_main7_5 = K_6;
          inv_main7_6 = I_6;
          inv_main7_7 = A_6;
          inv_main7_8 = H_6;
          goto inv_main7_0;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          C_5 = inv_main8_0;
          E_5 = inv_main8_1;
          G_5 = inv_main8_2;
          D_5 = inv_main8_3;
          F_5 = inv_main8_4;
          K_5 = inv_main8_5;
          I_5 = inv_main8_6;
          J_5 = inv_main8_7;
          H_5 = inv_main8_8;
          if (!((B_5 == (C_5 + 1)) && (1 <= D_5) && (A_5 == (D_5 + -1))))
              abort ();
          inv_main8_0 = B_5;
          inv_main8_1 = E_5;
          inv_main8_2 = G_5;
          inv_main8_3 = A_5;
          inv_main8_4 = F_5;
          inv_main8_5 = K_5;
          inv_main8_6 = I_5;
          inv_main8_7 = J_5;
          inv_main8_8 = H_5;
          goto inv_main8_3;

      default:
          abort ();
      }
  inv_main12_4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_9 = __VERIFIER_nondet_int ();
          B_9 = inv_main12_0;
          D_9 = inv_main12_1;
          F_9 = inv_main12_2;
          C_9 = inv_main12_3;
          E_9 = inv_main12_4;
          J_9 = inv_main12_5;
          H_9 = inv_main12_6;
          I_9 = inv_main12_7;
          G_9 = inv_main12_8;
          if (!((1 <= E_9) && (!(1 <= J_9)) && (A_9 == (E_9 + -1))))
              abort ();
          inv_main12_0 = B_9;
          inv_main12_1 = D_9;
          inv_main12_2 = F_9;
          inv_main12_3 = C_9;
          inv_main12_4 = A_9;
          inv_main12_5 = J_9;
          inv_main12_6 = H_9;
          inv_main12_7 = I_9;
          inv_main12_8 = G_9;
          goto inv_main12_2;

      case 1:
          A_8 = __VERIFIER_nondet_int ();
          B_8 = __VERIFIER_nondet_int ();
          C_8 = inv_main12_0;
          E_8 = inv_main12_1;
          G_8 = inv_main12_2;
          D_8 = inv_main12_3;
          F_8 = inv_main12_4;
          K_8 = inv_main12_5;
          I_8 = inv_main12_6;
          J_8 = inv_main12_7;
          H_8 = inv_main12_8;
          if (!
              ((B_8 == (E_8 + 1)) && (1 <= F_8) && (1 <= K_8)
               && (A_8 == (F_8 + -1))))
              abort ();
          inv_main12_0 = C_8;
          inv_main12_1 = B_8;
          inv_main12_2 = G_8;
          inv_main12_3 = D_8;
          inv_main12_4 = A_8;
          inv_main12_5 = K_8;
          inv_main12_6 = I_8;
          inv_main12_7 = J_8;
          inv_main12_8 = H_8;
          goto inv_main12_4;

      default:
          abort ();
      }

    // return expression

}

