// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/loop_unswitching_merged_safe.c-1_003.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop_unswitching_merged_safe.c-1_003_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main6_0;
    int inv_main6_1;
    int inv_main6_2;
    int inv_main6_3;
    int inv_main6_4;
    int inv_main6_5;
    int inv_main12_0;
    int inv_main12_1;
    int inv_main12_2;
    int inv_main12_3;
    int inv_main12_4;
    int inv_main12_5;
    int inv_main8_0;
    int inv_main8_1;
    int inv_main8_2;
    int inv_main8_3;
    int inv_main8_4;
    int inv_main8_5;
    int inv_main15_0;
    int inv_main15_1;
    int inv_main15_2;
    int inv_main15_3;
    int inv_main15_4;
    int inv_main15_5;
    int inv_main20_0;
    int inv_main20_1;
    int inv_main20_2;
    int inv_main20_3;
    int inv_main20_4;
    int inv_main20_5;
    int inv_main9_0;
    int inv_main9_1;
    int inv_main9_2;
    int inv_main9_3;
    int inv_main9_4;
    int inv_main9_5;
    int inv_main7_0;
    int inv_main7_1;
    int inv_main7_2;
    int inv_main7_3;
    int inv_main7_4;
    int inv_main7_5;
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
    int F_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
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
    int G_9;
    int H_9;
    int A_10;
    int B_10;
    int C_10;
    int D_10;
    int E_10;
    int F_10;
    int G_10;
    int H_10;
    int A_11;
    int B_11;
    int v_2_11;
    int v_3_11;
    int v_4_11;
    int v_5_11;
    int A_12;
    int B_12;
    int v_2_12;
    int v_3_12;
    int v_4_12;
    int v_5_12;
    int A_13;
    int B_13;
    int C_13;
    int D_13;
    int E_13;
    int F_13;

    if (((inv_main6_0 <= -1000000000) || (inv_main6_0 >= 1000000000))
        || ((inv_main6_1 <= -1000000000) || (inv_main6_1 >= 1000000000))
        || ((inv_main6_2 <= -1000000000) || (inv_main6_2 >= 1000000000))
        || ((inv_main6_3 <= -1000000000) || (inv_main6_3 >= 1000000000))
        || ((inv_main6_4 <= -1000000000) || (inv_main6_4 >= 1000000000))
        || ((inv_main6_5 <= -1000000000) || (inv_main6_5 >= 1000000000))
        || ((inv_main12_0 <= -1000000000) || (inv_main12_0 >= 1000000000))
        || ((inv_main12_1 <= -1000000000) || (inv_main12_1 >= 1000000000))
        || ((inv_main12_2 <= -1000000000) || (inv_main12_2 >= 1000000000))
        || ((inv_main12_3 <= -1000000000) || (inv_main12_3 >= 1000000000))
        || ((inv_main12_4 <= -1000000000) || (inv_main12_4 >= 1000000000))
        || ((inv_main12_5 <= -1000000000) || (inv_main12_5 >= 1000000000))
        || ((inv_main8_0 <= -1000000000) || (inv_main8_0 >= 1000000000))
        || ((inv_main8_1 <= -1000000000) || (inv_main8_1 >= 1000000000))
        || ((inv_main8_2 <= -1000000000) || (inv_main8_2 >= 1000000000))
        || ((inv_main8_3 <= -1000000000) || (inv_main8_3 >= 1000000000))
        || ((inv_main8_4 <= -1000000000) || (inv_main8_4 >= 1000000000))
        || ((inv_main8_5 <= -1000000000) || (inv_main8_5 >= 1000000000))
        || ((inv_main15_0 <= -1000000000) || (inv_main15_0 >= 1000000000))
        || ((inv_main15_1 <= -1000000000) || (inv_main15_1 >= 1000000000))
        || ((inv_main15_2 <= -1000000000) || (inv_main15_2 >= 1000000000))
        || ((inv_main15_3 <= -1000000000) || (inv_main15_3 >= 1000000000))
        || ((inv_main15_4 <= -1000000000) || (inv_main15_4 >= 1000000000))
        || ((inv_main15_5 <= -1000000000) || (inv_main15_5 >= 1000000000))
        || ((inv_main20_0 <= -1000000000) || (inv_main20_0 >= 1000000000))
        || ((inv_main20_1 <= -1000000000) || (inv_main20_1 >= 1000000000))
        || ((inv_main20_2 <= -1000000000) || (inv_main20_2 >= 1000000000))
        || ((inv_main20_3 <= -1000000000) || (inv_main20_3 >= 1000000000))
        || ((inv_main20_4 <= -1000000000) || (inv_main20_4 >= 1000000000))
        || ((inv_main20_5 <= -1000000000) || (inv_main20_5 >= 1000000000))
        || ((inv_main9_0 <= -1000000000) || (inv_main9_0 >= 1000000000))
        || ((inv_main9_1 <= -1000000000) || (inv_main9_1 >= 1000000000))
        || ((inv_main9_2 <= -1000000000) || (inv_main9_2 >= 1000000000))
        || ((inv_main9_3 <= -1000000000) || (inv_main9_3 >= 1000000000))
        || ((inv_main9_4 <= -1000000000) || (inv_main9_4 >= 1000000000))
        || ((inv_main9_5 <= -1000000000) || (inv_main9_5 >= 1000000000))
        || ((inv_main7_0 <= -1000000000) || (inv_main7_0 >= 1000000000))
        || ((inv_main7_1 <= -1000000000) || (inv_main7_1 >= 1000000000))
        || ((inv_main7_2 <= -1000000000) || (inv_main7_2 >= 1000000000))
        || ((inv_main7_3 <= -1000000000) || (inv_main7_3 >= 1000000000))
        || ((inv_main7_4 <= -1000000000) || (inv_main7_4 >= 1000000000))
        || ((inv_main7_5 <= -1000000000) || (inv_main7_5 >= 1000000000))
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
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((F_5 <= -1000000000) || (F_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((F_6 <= -1000000000) || (F_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((F_7 <= -1000000000) || (F_7 >= 1000000000))
        || ((G_7 <= -1000000000) || (G_7 >= 1000000000))
        || ((H_7 <= -1000000000) || (H_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000))
        || ((E_8 <= -1000000000) || (E_8 >= 1000000000))
        || ((F_8 <= -1000000000) || (F_8 >= 1000000000))
        || ((G_8 <= -1000000000) || (G_8 >= 1000000000))
        || ((H_8 <= -1000000000) || (H_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000))
        || ((D_9 <= -1000000000) || (D_9 >= 1000000000))
        || ((E_9 <= -1000000000) || (E_9 >= 1000000000))
        || ((F_9 <= -1000000000) || (F_9 >= 1000000000))
        || ((G_9 <= -1000000000) || (G_9 >= 1000000000))
        || ((H_9 <= -1000000000) || (H_9 >= 1000000000))
        || ((A_10 <= -1000000000) || (A_10 >= 1000000000))
        || ((B_10 <= -1000000000) || (B_10 >= 1000000000))
        || ((C_10 <= -1000000000) || (C_10 >= 1000000000))
        || ((D_10 <= -1000000000) || (D_10 >= 1000000000))
        || ((E_10 <= -1000000000) || (E_10 >= 1000000000))
        || ((F_10 <= -1000000000) || (F_10 >= 1000000000))
        || ((G_10 <= -1000000000) || (G_10 >= 1000000000))
        || ((H_10 <= -1000000000) || (H_10 >= 1000000000))
        || ((A_11 <= -1000000000) || (A_11 >= 1000000000))
        || ((B_11 <= -1000000000) || (B_11 >= 1000000000))
        || ((v_2_11 <= -1000000000) || (v_2_11 >= 1000000000))
        || ((v_3_11 <= -1000000000) || (v_3_11 >= 1000000000))
        || ((v_4_11 <= -1000000000) || (v_4_11 >= 1000000000))
        || ((v_5_11 <= -1000000000) || (v_5_11 >= 1000000000))
        || ((A_12 <= -1000000000) || (A_12 >= 1000000000))
        || ((B_12 <= -1000000000) || (B_12 >= 1000000000))
        || ((v_2_12 <= -1000000000) || (v_2_12 >= 1000000000))
        || ((v_3_12 <= -1000000000) || (v_3_12 >= 1000000000))
        || ((v_4_12 <= -1000000000) || (v_4_12 >= 1000000000))
        || ((v_5_12 <= -1000000000) || (v_5_12 >= 1000000000))
        || ((A_13 <= -1000000000) || (A_13 >= 1000000000))
        || ((B_13 <= -1000000000) || (B_13 >= 1000000000))
        || ((C_13 <= -1000000000) || (C_13 >= 1000000000))
        || ((D_13 <= -1000000000) || (D_13 >= 1000000000))
        || ((E_13 <= -1000000000) || (E_13 >= 1000000000))
        || ((F_13 <= -1000000000) || (F_13 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    goto inv_main2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_12 = __VERIFIER_nondet_int ();
          if (((A_12 <= -1000000000) || (A_12 >= 1000000000)))
              abort ();
          B_12 = __VERIFIER_nondet_int ();
          if (((B_12 <= -1000000000) || (B_12 >= 1000000000)))
              abort ();
          v_2_12 = __VERIFIER_nondet_int ();
          if (((v_2_12 <= -1000000000) || (v_2_12 >= 1000000000)))
              abort ();
          v_4_12 = __VERIFIER_nondet_int ();
          if (((v_4_12 <= -1000000000) || (v_4_12 >= 1000000000)))
              abort ();
          v_3_12 = __VERIFIER_nondet_int ();
          if (((v_3_12 <= -1000000000) || (v_3_12 >= 1000000000)))
              abort ();
          v_5_12 = __VERIFIER_nondet_int ();
          if (((v_5_12 <= -1000000000) || (v_5_12 >= 1000000000)))
              abort ();
          if (!
              ((!(1 <= B_12)) && (v_2_12 == A_12) && (v_3_12 == A_12)
               && (0 == v_4_12) && (0 == v_5_12)))
              abort ();
          inv_main8_0 = B_12;
          inv_main8_1 = A_12;
          inv_main8_2 = v_2_12;
          inv_main8_3 = v_3_12;
          inv_main8_4 = v_4_12;
          inv_main8_5 = v_5_12;
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          H_8 = inv_main8_0;
          C_8 = inv_main8_1;
          D_8 = inv_main8_2;
          F_8 = inv_main8_3;
          E_8 = inv_main8_4;
          G_8 = inv_main8_5;
          if (!((B_8 == (D_8 + -1)) && (1 <= D_8) && (A_8 == (E_8 + -1))))
              abort ();
          inv_main8_0 = H_8;
          inv_main8_1 = C_8;
          inv_main8_2 = B_8;
          inv_main8_3 = F_8;
          inv_main8_4 = A_8;
          inv_main8_5 = G_8;
          goto inv_main8_1;

      case 1:
          A_11 = __VERIFIER_nondet_int ();
          if (((A_11 <= -1000000000) || (A_11 >= 1000000000)))
              abort ();
          B_11 = __VERIFIER_nondet_int ();
          if (((B_11 <= -1000000000) || (B_11 >= 1000000000)))
              abort ();
          v_2_11 = __VERIFIER_nondet_int ();
          if (((v_2_11 <= -1000000000) || (v_2_11 >= 1000000000)))
              abort ();
          v_4_11 = __VERIFIER_nondet_int ();
          if (((v_4_11 <= -1000000000) || (v_4_11 >= 1000000000)))
              abort ();
          v_3_11 = __VERIFIER_nondet_int ();
          if (((v_3_11 <= -1000000000) || (v_3_11 >= 1000000000)))
              abort ();
          v_5_11 = __VERIFIER_nondet_int ();
          if (((v_5_11 <= -1000000000) || (v_5_11 >= 1000000000)))
              abort ();
          if (!
              ((1 <= B_11) && (v_2_11 == A_11) && (v_3_11 == A_11)
               && (0 == v_4_11) && (0 == v_5_11)))
              abort ();
          inv_main7_0 = B_11;
          inv_main7_1 = A_11;
          inv_main7_2 = v_2_11;
          inv_main7_3 = v_3_11;
          inv_main7_4 = v_4_11;
          inv_main7_5 = v_5_11;
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          H_7 = inv_main7_0;
          C_7 = inv_main7_1;
          D_7 = inv_main7_2;
          F_7 = inv_main7_3;
          E_7 = inv_main7_4;
          G_7 = inv_main7_5;
          if (!((B_7 == (D_7 + -1)) && (1 <= D_7) && (A_7 == (E_7 + 1))))
              abort ();
          inv_main7_0 = H_7;
          inv_main7_1 = C_7;
          inv_main7_2 = B_7;
          inv_main7_3 = F_7;
          inv_main7_4 = A_7;
          inv_main7_5 = G_7;
          goto inv_main7_3;

      default:
          abort ();
      }
  inv_main6_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          F_5 = inv_main6_0;
          A_5 = inv_main6_1;
          B_5 = inv_main6_2;
          D_5 = inv_main6_3;
          C_5 = inv_main6_4;
          E_5 = inv_main6_5;
          if (!(!(1 <= D_5)))
              abort ();
          inv_main15_0 = F_5;
          inv_main15_1 = A_5;
          inv_main15_2 = B_5;
          inv_main15_3 = D_5;
          inv_main15_4 = C_5;
          inv_main15_5 = E_5;
          F_6 = inv_main15_0;
          A_6 = inv_main15_1;
          B_6 = inv_main15_2;
          D_6 = inv_main15_3;
          C_6 = inv_main15_4;
          E_6 = inv_main15_5;
          if (!1)
              abort ();
          inv_main20_0 = F_6;
          inv_main20_1 = A_6;
          inv_main20_2 = B_6;
          inv_main20_3 = D_6;
          inv_main20_4 = C_6;
          inv_main20_5 = E_6;
          F_13 = inv_main20_0;
          A_13 = inv_main20_1;
          B_13 = inv_main20_2;
          D_13 = inv_main20_3;
          C_13 = inv_main20_4;
          E_13 = inv_main20_5;
          if (!(!(C_13 == E_13)))
              abort ();
          goto main_error;

      case 1:
          A_10 = __VERIFIER_nondet_int ();
          if (((A_10 <= -1000000000) || (A_10 >= 1000000000)))
              abort ();
          B_10 = __VERIFIER_nondet_int ();
          if (((B_10 <= -1000000000) || (B_10 >= 1000000000)))
              abort ();
          H_10 = inv_main6_0;
          C_10 = inv_main6_1;
          D_10 = inv_main6_2;
          F_10 = inv_main6_3;
          E_10 = inv_main6_4;
          G_10 = inv_main6_5;
          if (!
              ((B_10 == (F_10 + -1)) && (1 <= F_10) && (!(1 <= H_10))
               && (A_10 == (G_10 + -1))))
              abort ();
          inv_main6_0 = H_10;
          inv_main6_1 = C_10;
          inv_main6_2 = D_10;
          inv_main6_3 = B_10;
          inv_main6_4 = E_10;
          inv_main6_5 = A_10;
          A_10 = __VERIFIER_nondet_int ();
          if (((A_10 <= -1000000000) || (A_10 >= 1000000000)))
              abort ();
          B_10 = __VERIFIER_nondet_int ();
          if (((B_10 <= -1000000000) || (B_10 >= 1000000000)))
              abort ();
          H_10 = inv_main6_0;
          C_10 = inv_main6_1;
          D_10 = inv_main6_2;
          F_10 = inv_main6_3;
          E_10 = inv_main6_4;
          G_10 = inv_main6_5;
          if (!
              ((B_10 == (F_10 + -1)) && (1 <= F_10) && (!(1 <= H_10))
               && (A_10 == (G_10 + -1))))
              abort ();
          inv_main6_0 = H_10;
          inv_main6_1 = C_10;
          inv_main6_2 = D_10;
          inv_main6_3 = B_10;
          inv_main6_4 = E_10;
          inv_main6_5 = A_10;
          goto inv_main6_2;

      case 2:
          A_10 = __VERIFIER_nondet_int ();
          if (((A_10 <= -1000000000) || (A_10 >= 1000000000)))
              abort ();
          B_10 = __VERIFIER_nondet_int ();
          if (((B_10 <= -1000000000) || (B_10 >= 1000000000)))
              abort ();
          H_10 = inv_main6_0;
          C_10 = inv_main6_1;
          D_10 = inv_main6_2;
          F_10 = inv_main6_3;
          E_10 = inv_main6_4;
          G_10 = inv_main6_5;
          if (!
              ((B_10 == (F_10 + -1)) && (1 <= F_10) && (!(1 <= H_10))
               && (A_10 == (G_10 + -1))))
              abort ();
          inv_main6_0 = H_10;
          inv_main6_1 = C_10;
          inv_main6_2 = D_10;
          inv_main6_3 = B_10;
          inv_main6_4 = E_10;
          inv_main6_5 = A_10;
          goto inv_main6_2;

      default:
          abort ();
      }
  inv_main8_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          F_3 = inv_main8_0;
          A_3 = inv_main8_1;
          B_3 = inv_main8_2;
          D_3 = inv_main8_3;
          C_3 = inv_main8_4;
          E_3 = inv_main8_5;
          if (!(!(1 <= B_3)))
              abort ();
          inv_main12_0 = F_3;
          inv_main12_1 = A_3;
          inv_main12_2 = B_3;
          inv_main12_3 = D_3;
          inv_main12_4 = C_3;
          inv_main12_5 = E_3;
          F_4 = inv_main12_0;
          A_4 = inv_main12_1;
          B_4 = inv_main12_2;
          D_4 = inv_main12_3;
          C_4 = inv_main12_4;
          E_4 = inv_main12_5;
          if (!1)
              abort ();
          inv_main6_0 = F_4;
          inv_main6_1 = A_4;
          inv_main6_2 = B_4;
          inv_main6_3 = D_4;
          inv_main6_4 = C_4;
          inv_main6_5 = E_4;
          A_10 = __VERIFIER_nondet_int ();
          if (((A_10 <= -1000000000) || (A_10 >= 1000000000)))
              abort ();
          B_10 = __VERIFIER_nondet_int ();
          if (((B_10 <= -1000000000) || (B_10 >= 1000000000)))
              abort ();
          H_10 = inv_main6_0;
          C_10 = inv_main6_1;
          D_10 = inv_main6_2;
          F_10 = inv_main6_3;
          E_10 = inv_main6_4;
          G_10 = inv_main6_5;
          if (!
              ((B_10 == (F_10 + -1)) && (1 <= F_10) && (!(1 <= H_10))
               && (A_10 == (G_10 + -1))))
              abort ();
          inv_main6_0 = H_10;
          inv_main6_1 = C_10;
          inv_main6_2 = D_10;
          inv_main6_3 = B_10;
          inv_main6_4 = E_10;
          inv_main6_5 = A_10;
          goto inv_main6_2;

      case 1:
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          H_8 = inv_main8_0;
          C_8 = inv_main8_1;
          D_8 = inv_main8_2;
          F_8 = inv_main8_3;
          E_8 = inv_main8_4;
          G_8 = inv_main8_5;
          if (!((B_8 == (D_8 + -1)) && (1 <= D_8) && (A_8 == (E_8 + -1))))
              abort ();
          inv_main8_0 = H_8;
          inv_main8_1 = C_8;
          inv_main8_2 = B_8;
          inv_main8_3 = F_8;
          inv_main8_4 = A_8;
          inv_main8_5 = G_8;
          goto inv_main8_1;

      default:
          abort ();
      }
  inv_main6_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = __VERIFIER_nondet_int ();
          if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
              abort ();
          H_9 = inv_main6_0;
          C_9 = inv_main6_1;
          D_9 = inv_main6_2;
          F_9 = inv_main6_3;
          E_9 = inv_main6_4;
          G_9 = inv_main6_5;
          if (!
              ((B_9 == (F_9 + -1)) && (1 <= F_9) && (1 <= H_9)
               && (A_9 == (G_9 + 1))))
              abort ();
          inv_main6_0 = H_9;
          inv_main6_1 = C_9;
          inv_main6_2 = D_9;
          inv_main6_3 = B_9;
          inv_main6_4 = E_9;
          inv_main6_5 = A_9;
          goto inv_main6_0;

      case 1:
          A_10 = __VERIFIER_nondet_int ();
          if (((A_10 <= -1000000000) || (A_10 >= 1000000000)))
              abort ();
          B_10 = __VERIFIER_nondet_int ();
          if (((B_10 <= -1000000000) || (B_10 >= 1000000000)))
              abort ();
          H_10 = inv_main6_0;
          C_10 = inv_main6_1;
          D_10 = inv_main6_2;
          F_10 = inv_main6_3;
          E_10 = inv_main6_4;
          G_10 = inv_main6_5;
          if (!
              ((B_10 == (F_10 + -1)) && (1 <= F_10) && (!(1 <= H_10))
               && (A_10 == (G_10 + -1))))
              abort ();
          inv_main6_0 = H_10;
          inv_main6_1 = C_10;
          inv_main6_2 = D_10;
          inv_main6_3 = B_10;
          inv_main6_4 = E_10;
          inv_main6_5 = A_10;
          goto inv_main6_2;

      default:
          abort ();
      }
  inv_main7_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          F_1 = inv_main7_0;
          A_1 = inv_main7_1;
          B_1 = inv_main7_2;
          D_1 = inv_main7_3;
          C_1 = inv_main7_4;
          E_1 = inv_main7_5;
          if (!(!(1 <= B_1)))
              abort ();
          inv_main9_0 = F_1;
          inv_main9_1 = A_1;
          inv_main9_2 = B_1;
          inv_main9_3 = D_1;
          inv_main9_4 = C_1;
          inv_main9_5 = E_1;
          F_2 = inv_main9_0;
          A_2 = inv_main9_1;
          B_2 = inv_main9_2;
          D_2 = inv_main9_3;
          C_2 = inv_main9_4;
          E_2 = inv_main9_5;
          if (!1)
              abort ();
          inv_main6_0 = F_2;
          inv_main6_1 = A_2;
          inv_main6_2 = B_2;
          inv_main6_3 = D_2;
          inv_main6_4 = C_2;
          inv_main6_5 = E_2;
          A_10 = __VERIFIER_nondet_int ();
          if (((A_10 <= -1000000000) || (A_10 >= 1000000000)))
              abort ();
          B_10 = __VERIFIER_nondet_int ();
          if (((B_10 <= -1000000000) || (B_10 >= 1000000000)))
              abort ();
          H_10 = inv_main6_0;
          C_10 = inv_main6_1;
          D_10 = inv_main6_2;
          F_10 = inv_main6_3;
          E_10 = inv_main6_4;
          G_10 = inv_main6_5;
          if (!
              ((B_10 == (F_10 + -1)) && (1 <= F_10) && (!(1 <= H_10))
               && (A_10 == (G_10 + -1))))
              abort ();
          inv_main6_0 = H_10;
          inv_main6_1 = C_10;
          inv_main6_2 = D_10;
          inv_main6_3 = B_10;
          inv_main6_4 = E_10;
          inv_main6_5 = A_10;
          goto inv_main6_2;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          H_7 = inv_main7_0;
          C_7 = inv_main7_1;
          D_7 = inv_main7_2;
          F_7 = inv_main7_3;
          E_7 = inv_main7_4;
          G_7 = inv_main7_5;
          if (!((B_7 == (D_7 + -1)) && (1 <= D_7) && (A_7 == (E_7 + 1))))
              abort ();
          inv_main7_0 = H_7;
          inv_main7_1 = C_7;
          inv_main7_2 = B_7;
          inv_main7_3 = F_7;
          inv_main7_4 = A_7;
          inv_main7_5 = G_7;
          goto inv_main7_3;

      default:
          abort ();
      }

    // return expression

}

