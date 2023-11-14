// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/barthe2-big2_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "barthe2-big2_safe.c-1_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main31_0;
    int inv_main31_1;
    int inv_main31_2;
    int inv_main31_3;
    int inv_main31_4;
    int inv_main37_0;
    int inv_main37_1;
    int inv_main37_2;
    int inv_main37_3;
    int inv_main37_4;
    int inv_main20_0;
    int inv_main20_1;
    int inv_main20_2;
    int inv_main20_3;
    int inv_main3_0;
    int inv_main49_0;
    int inv_main49_1;
    int inv_main49_2;
    int inv_main43_0;
    int inv_main43_1;
    int inv_main43_2;
    int inv_main43_3;
    int inv_main43_4;
    int inv_main14_0;
    int inv_main14_1;
    int inv_main14_2;
    int inv_main14_3;
    int inv_main8_0;
    int inv_main8_1;
    int inv_main8_2;
    int inv_main8_3;
    int A_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int v_6_1;
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
    int v_6_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int H_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int H_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int v_5_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int F_7;
    int G_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int v_5_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int F_9;
    int G_9;
    int A_10;
    int B_10;
    int C_10;
    int D_10;
    int E_10;
    int F_10;
    int G_10;
    int A_11;
    int B_11;
    int C_11;
    int D_11;
    int E_11;
    int F_11;
    int A_12;
    int v_1_12;
    int v_2_12;
    int v_3_12;
    int A_13;
    int B_13;
    int C_13;
    int D_13;
    int E_13;
    int v_5_13;
    int v_6_13;
    int v_7_13;
    int A_14;
    int B_14;
    int C_14;

    if (((inv_main31_0 <= -1000000000) || (inv_main31_0 >= 1000000000))
        || ((inv_main31_1 <= -1000000000) || (inv_main31_1 >= 1000000000))
        || ((inv_main31_2 <= -1000000000) || (inv_main31_2 >= 1000000000))
        || ((inv_main31_3 <= -1000000000) || (inv_main31_3 >= 1000000000))
        || ((inv_main31_4 <= -1000000000) || (inv_main31_4 >= 1000000000))
        || ((inv_main37_0 <= -1000000000) || (inv_main37_0 >= 1000000000))
        || ((inv_main37_1 <= -1000000000) || (inv_main37_1 >= 1000000000))
        || ((inv_main37_2 <= -1000000000) || (inv_main37_2 >= 1000000000))
        || ((inv_main37_3 <= -1000000000) || (inv_main37_3 >= 1000000000))
        || ((inv_main37_4 <= -1000000000) || (inv_main37_4 >= 1000000000))
        || ((inv_main20_0 <= -1000000000) || (inv_main20_0 >= 1000000000))
        || ((inv_main20_1 <= -1000000000) || (inv_main20_1 >= 1000000000))
        || ((inv_main20_2 <= -1000000000) || (inv_main20_2 >= 1000000000))
        || ((inv_main20_3 <= -1000000000) || (inv_main20_3 >= 1000000000))
        || ((inv_main3_0 <= -1000000000) || (inv_main3_0 >= 1000000000))
        || ((inv_main49_0 <= -1000000000) || (inv_main49_0 >= 1000000000))
        || ((inv_main49_1 <= -1000000000) || (inv_main49_1 >= 1000000000))
        || ((inv_main49_2 <= -1000000000) || (inv_main49_2 >= 1000000000))
        || ((inv_main43_0 <= -1000000000) || (inv_main43_0 >= 1000000000))
        || ((inv_main43_1 <= -1000000000) || (inv_main43_1 >= 1000000000))
        || ((inv_main43_2 <= -1000000000) || (inv_main43_2 >= 1000000000))
        || ((inv_main43_3 <= -1000000000) || (inv_main43_3 >= 1000000000))
        || ((inv_main43_4 <= -1000000000) || (inv_main43_4 >= 1000000000))
        || ((inv_main14_0 <= -1000000000) || (inv_main14_0 >= 1000000000))
        || ((inv_main14_1 <= -1000000000) || (inv_main14_1 >= 1000000000))
        || ((inv_main14_2 <= -1000000000) || (inv_main14_2 >= 1000000000))
        || ((inv_main14_3 <= -1000000000) || (inv_main14_3 >= 1000000000))
        || ((inv_main8_0 <= -1000000000) || (inv_main8_0 >= 1000000000))
        || ((inv_main8_1 <= -1000000000) || (inv_main8_1 >= 1000000000))
        || ((inv_main8_2 <= -1000000000) || (inv_main8_2 >= 1000000000))
        || ((inv_main8_3 <= -1000000000) || (inv_main8_3 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((v_6_1 <= -1000000000) || (v_6_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((v_6_3 <= -1000000000) || (v_6_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((H_4 <= -1000000000) || (H_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((F_5 <= -1000000000) || (F_5 >= 1000000000))
        || ((G_5 <= -1000000000) || (G_5 >= 1000000000))
        || ((H_5 <= -1000000000) || (H_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((v_5_6 <= -1000000000) || (v_5_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((F_7 <= -1000000000) || (F_7 >= 1000000000))
        || ((G_7 <= -1000000000) || (G_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000))
        || ((E_8 <= -1000000000) || (E_8 >= 1000000000))
        || ((v_5_8 <= -1000000000) || (v_5_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000))
        || ((D_9 <= -1000000000) || (D_9 >= 1000000000))
        || ((E_9 <= -1000000000) || (E_9 >= 1000000000))
        || ((F_9 <= -1000000000) || (F_9 >= 1000000000))
        || ((G_9 <= -1000000000) || (G_9 >= 1000000000))
        || ((A_10 <= -1000000000) || (A_10 >= 1000000000))
        || ((B_10 <= -1000000000) || (B_10 >= 1000000000))
        || ((C_10 <= -1000000000) || (C_10 >= 1000000000))
        || ((D_10 <= -1000000000) || (D_10 >= 1000000000))
        || ((E_10 <= -1000000000) || (E_10 >= 1000000000))
        || ((F_10 <= -1000000000) || (F_10 >= 1000000000))
        || ((G_10 <= -1000000000) || (G_10 >= 1000000000))
        || ((A_11 <= -1000000000) || (A_11 >= 1000000000))
        || ((B_11 <= -1000000000) || (B_11 >= 1000000000))
        || ((C_11 <= -1000000000) || (C_11 >= 1000000000))
        || ((D_11 <= -1000000000) || (D_11 >= 1000000000))
        || ((E_11 <= -1000000000) || (E_11 >= 1000000000))
        || ((F_11 <= -1000000000) || (F_11 >= 1000000000))
        || ((A_12 <= -1000000000) || (A_12 >= 1000000000))
        || ((v_1_12 <= -1000000000) || (v_1_12 >= 1000000000))
        || ((v_2_12 <= -1000000000) || (v_2_12 >= 1000000000))
        || ((v_3_12 <= -1000000000) || (v_3_12 >= 1000000000))
        || ((A_13 <= -1000000000) || (A_13 >= 1000000000))
        || ((B_13 <= -1000000000) || (B_13 >= 1000000000))
        || ((C_13 <= -1000000000) || (C_13 >= 1000000000))
        || ((D_13 <= -1000000000) || (D_13 >= 1000000000))
        || ((E_13 <= -1000000000) || (E_13 >= 1000000000))
        || ((v_5_13 <= -1000000000) || (v_5_13 >= 1000000000))
        || ((v_6_13 <= -1000000000) || (v_6_13 >= 1000000000))
        || ((v_7_13 <= -1000000000) || (v_7_13 >= 1000000000))
        || ((A_14 <= -1000000000) || (A_14 >= 1000000000))
        || ((B_14 <= -1000000000) || (B_14 >= 1000000000))
        || ((C_14 <= -1000000000) || (C_14 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    inv_main3_0 = A_0;
    v_2_12 = __VERIFIER_nondet_int ();
    if (((v_2_12 <= -1000000000) || (v_2_12 >= 1000000000)))
        abort ();
    v_1_12 = __VERIFIER_nondet_int ();
    if (((v_1_12 <= -1000000000) || (v_1_12 >= 1000000000)))
        abort ();
    v_3_12 = __VERIFIER_nondet_int ();
    if (((v_3_12 <= -1000000000) || (v_3_12 >= 1000000000)))
        abort ();
    A_12 = inv_main3_0;
    if (!((v_1_12 == A_12) && (1 == v_2_12) && (1 == v_3_12)))
        abort ();
    inv_main8_0 = A_12;
    inv_main8_1 = v_1_12;
    inv_main8_2 = v_2_12;
    inv_main8_3 = v_3_12;
    A_7 = __VERIFIER_nondet_int ();
    if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
        abort ();
    B_7 = __VERIFIER_nondet_int ();
    if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
        abort ();
    F_7 = __VERIFIER_nondet_int ();
    if (((F_7 <= -1000000000) || (F_7 >= 1000000000)))
        abort ();
    G_7 = inv_main8_0;
    D_7 = inv_main8_1;
    E_7 = inv_main8_2;
    C_7 = inv_main8_3;
    if (!
        ((!(F_7 == 0)) && (B_7 == (E_7 + 1)) && (0 <= (D_7 + (-1 * E_7)))
         && (A_7 == C_7)))
        abort ();
    inv_main8_0 = G_7;
    inv_main8_1 = D_7;
    inv_main8_2 = B_7;
    inv_main8_3 = A_7;
    goto inv_main8_5;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main20_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_13 = __VERIFIER_nondet_int ();
          if (((D_13 <= -1000000000) || (D_13 >= 1000000000)))
              abort ();
          v_6_13 = __VERIFIER_nondet_int ();
          if (((v_6_13 <= -1000000000) || (v_6_13 >= 1000000000)))
              abort ();
          v_5_13 = __VERIFIER_nondet_int ();
          if (((v_5_13 <= -1000000000) || (v_5_13 >= 1000000000)))
              abort ();
          v_7_13 = __VERIFIER_nondet_int ();
          if (((v_7_13 <= -1000000000) || (v_7_13 >= 1000000000)))
              abort ();
          E_13 = inv_main20_0;
          B_13 = inv_main20_1;
          C_13 = inv_main20_2;
          A_13 = inv_main20_3;
          if (!
              (((!(0 <= (B_13 + (-1 * C_13)))) || (D_13 == 0))
               && (v_5_13 == E_13) && (1 == v_6_13) && (1 == v_7_13)))
              abort ();
          inv_main31_0 = E_13;
          inv_main31_1 = A_13;
          inv_main31_2 = v_5_13;
          inv_main31_3 = v_6_13;
          inv_main31_4 = v_7_13;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          G_2 = inv_main31_0;
          D_2 = inv_main31_1;
          F_2 = inv_main31_2;
          C_2 = inv_main31_3;
          E_2 = inv_main31_4;
          if (!
              ((B_2 == (C_2 + 1)) && (!(H_2 == 0))
               && (0 <= (F_2 + (-1 * C_2))) && (A_2 == E_2)))
              abort ();
          inv_main31_0 = G_2;
          inv_main31_1 = D_2;
          inv_main31_2 = F_2;
          inv_main31_3 = B_2;
          inv_main31_4 = A_2;
          goto inv_main31_3;

      case 1:
          A_10 = __VERIFIER_nondet_int ();
          if (((A_10 <= -1000000000) || (A_10 >= 1000000000)))
              abort ();
          B_10 = __VERIFIER_nondet_int ();
          if (((B_10 <= -1000000000) || (B_10 >= 1000000000)))
              abort ();
          C_10 = __VERIFIER_nondet_int ();
          if (((C_10 <= -1000000000) || (C_10 >= 1000000000)))
              abort ();
          G_10 = inv_main20_0;
          E_10 = inv_main20_1;
          F_10 = inv_main20_2;
          D_10 = inv_main20_3;
          if (!
              ((B_10 == (F_10 + 1)) && (!(C_10 == 0))
               && (0 <= (E_10 + (-1 * F_10))) && (A_10 == (2 * D_10))))
              abort ();
          inv_main20_0 = G_10;
          inv_main20_1 = E_10;
          inv_main20_2 = B_10;
          inv_main20_3 = A_10;
          goto inv_main20_0;

      default:
          abort ();
      }
  inv_main37_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          H_4 = inv_main37_0;
          E_4 = inv_main37_1;
          G_4 = inv_main37_2;
          C_4 = inv_main37_3;
          F_4 = inv_main37_4;
          if (!
              ((B_4 == (C_4 + 1)) && (!(D_4 == 0))
               && (0 <= (G_4 + (-1 * C_4))) && (A_4 == (F_4 + C_4))))
              abort ();
          inv_main37_0 = H_4;
          inv_main37_1 = E_4;
          inv_main37_2 = G_4;
          inv_main37_3 = B_4;
          inv_main37_4 = A_4;
          goto inv_main37_1;

      case 1:
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          v_6_3 = __VERIFIER_nondet_int ();
          if (((v_6_3 <= -1000000000) || (v_6_3 >= 1000000000)))
              abort ();
          F_3 = inv_main37_0;
          B_3 = inv_main37_1;
          E_3 = inv_main37_2;
          A_3 = inv_main37_3;
          D_3 = inv_main37_4;
          if (!(((!(0 <= (E_3 + (-1 * A_3)))) || (C_3 == 0)) && (1 == v_6_3)))
              abort ();
          inv_main43_0 = F_3;
          inv_main43_1 = B_3;
          inv_main43_2 = E_3;
          inv_main43_3 = v_6_3;
          inv_main43_4 = D_3;
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          H_5 = __VERIFIER_nondet_int ();
          if (((H_5 <= -1000000000) || (H_5 >= 1000000000)))
              abort ();
          G_5 = inv_main43_0;
          D_5 = inv_main43_1;
          F_5 = inv_main43_2;
          C_5 = inv_main43_3;
          E_5 = inv_main43_4;
          if (!
              ((B_5 == (C_5 + 1)) && (!(H_5 == 0))
               && (0 <= (F_5 + (-1 * C_5))) && (A_5 == (2 * E_5))))
              abort ();
          inv_main43_0 = G_5;
          inv_main43_1 = D_5;
          inv_main43_2 = F_5;
          inv_main43_3 = B_5;
          inv_main43_4 = A_5;
          goto inv_main43_2;

      default:
          abort ();
      }
  inv_main43_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_11 = __VERIFIER_nondet_int ();
          if (((D_11 <= -1000000000) || (D_11 >= 1000000000)))
              abort ();
          F_11 = inv_main43_0;
          B_11 = inv_main43_1;
          E_11 = inv_main43_2;
          A_11 = inv_main43_3;
          C_11 = inv_main43_4;
          if (!((!(0 <= (E_11 + (-1 * A_11)))) || (D_11 == 0)))
              abort ();
          inv_main49_0 = F_11;
          inv_main49_1 = B_11;
          inv_main49_2 = C_11;
          C_14 = inv_main49_0;
          A_14 = inv_main49_1;
          B_14 = inv_main49_2;
          if (!(!(A_14 == B_14)))
              abort ();
          goto main_error;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          H_5 = __VERIFIER_nondet_int ();
          if (((H_5 <= -1000000000) || (H_5 >= 1000000000)))
              abort ();
          G_5 = inv_main43_0;
          D_5 = inv_main43_1;
          F_5 = inv_main43_2;
          C_5 = inv_main43_3;
          E_5 = inv_main43_4;
          if (!
              ((B_5 == (C_5 + 1)) && (!(H_5 == 0))
               && (0 <= (F_5 + (-1 * C_5))) && (A_5 == (2 * E_5))))
              abort ();
          inv_main43_0 = G_5;
          inv_main43_1 = D_5;
          inv_main43_2 = F_5;
          inv_main43_3 = B_5;
          inv_main43_4 = A_5;
          goto inv_main43_2;

      default:
          abort ();
      }
  inv_main31_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          G_2 = inv_main31_0;
          D_2 = inv_main31_1;
          F_2 = inv_main31_2;
          C_2 = inv_main31_3;
          E_2 = inv_main31_4;
          if (!
              ((B_2 == (C_2 + 1)) && (!(H_2 == 0))
               && (0 <= (F_2 + (-1 * C_2))) && (A_2 == E_2)))
              abort ();
          inv_main31_0 = G_2;
          inv_main31_1 = D_2;
          inv_main31_2 = F_2;
          inv_main31_3 = B_2;
          inv_main31_4 = A_2;
          goto inv_main31_3;

      case 1:
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          v_6_1 = __VERIFIER_nondet_int ();
          if (((v_6_1 <= -1000000000) || (v_6_1 >= 1000000000)))
              abort ();
          F_1 = inv_main31_0;
          B_1 = inv_main31_1;
          D_1 = inv_main31_2;
          A_1 = inv_main31_3;
          C_1 = inv_main31_4;
          if (!(((!(0 <= (D_1 + (-1 * A_1)))) || (E_1 == 0)) && (1 == v_6_1)))
              abort ();
          inv_main37_0 = F_1;
          inv_main37_1 = B_1;
          inv_main37_2 = D_1;
          inv_main37_3 = v_6_1;
          inv_main37_4 = C_1;
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          H_4 = inv_main37_0;
          E_4 = inv_main37_1;
          G_4 = inv_main37_2;
          C_4 = inv_main37_3;
          F_4 = inv_main37_4;
          if (!
              ((B_4 == (C_4 + 1)) && (!(D_4 == 0))
               && (0 <= (G_4 + (-1 * C_4))) && (A_4 == (F_4 + C_4))))
              abort ();
          inv_main37_0 = H_4;
          inv_main37_1 = E_4;
          inv_main37_2 = G_4;
          inv_main37_3 = B_4;
          inv_main37_4 = A_4;
          goto inv_main37_1;

      default:
          abort ();
      }
  inv_main14_4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          v_5_8 = __VERIFIER_nondet_int ();
          if (((v_5_8 <= -1000000000) || (v_5_8 >= 1000000000)))
              abort ();
          E_8 = inv_main14_0;
          C_8 = inv_main14_1;
          D_8 = inv_main14_2;
          B_8 = inv_main14_3;
          if (!(((!(0 <= (C_8 + (-1 * D_8)))) || (A_8 == 0)) && (1 == v_5_8)))
              abort ();
          inv_main20_0 = E_8;
          inv_main20_1 = C_8;
          inv_main20_2 = v_5_8;
          inv_main20_3 = B_8;
          A_10 = __VERIFIER_nondet_int ();
          if (((A_10 <= -1000000000) || (A_10 >= 1000000000)))
              abort ();
          B_10 = __VERIFIER_nondet_int ();
          if (((B_10 <= -1000000000) || (B_10 >= 1000000000)))
              abort ();
          C_10 = __VERIFIER_nondet_int ();
          if (((C_10 <= -1000000000) || (C_10 >= 1000000000)))
              abort ();
          G_10 = inv_main20_0;
          E_10 = inv_main20_1;
          F_10 = inv_main20_2;
          D_10 = inv_main20_3;
          if (!
              ((B_10 == (F_10 + 1)) && (!(C_10 == 0))
               && (0 <= (E_10 + (-1 * F_10))) && (A_10 == (2 * D_10))))
              abort ();
          inv_main20_0 = G_10;
          inv_main20_1 = E_10;
          inv_main20_2 = B_10;
          inv_main20_3 = A_10;
          goto inv_main20_0;

      case 1:
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = __VERIFIER_nondet_int ();
          if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
              abort ();
          C_9 = __VERIFIER_nondet_int ();
          if (((C_9 <= -1000000000) || (C_9 >= 1000000000)))
              abort ();
          G_9 = inv_main14_0;
          E_9 = inv_main14_1;
          F_9 = inv_main14_2;
          D_9 = inv_main14_3;
          if (!
              ((B_9 == (F_9 + 1)) && (!(C_9 == 0))
               && (0 <= (E_9 + (-1 * F_9))) && (A_9 == (D_9 + F_9))))
              abort ();
          inv_main14_0 = G_9;
          inv_main14_1 = E_9;
          inv_main14_2 = B_9;
          inv_main14_3 = A_9;
          goto inv_main14_4;

      default:
          abort ();
      }
  inv_main8_5:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_6 = __VERIFIER_nondet_int ();
          if (((A_6 <= -1000000000) || (A_6 >= 1000000000)))
              abort ();
          v_5_6 = __VERIFIER_nondet_int ();
          if (((v_5_6 <= -1000000000) || (v_5_6 >= 1000000000)))
              abort ();
          E_6 = inv_main8_0;
          C_6 = inv_main8_1;
          D_6 = inv_main8_2;
          B_6 = inv_main8_3;
          if (!(((!(0 <= (C_6 + (-1 * D_6)))) || (A_6 == 0)) && (0 == v_5_6)))
              abort ();
          inv_main14_0 = E_6;
          inv_main14_1 = C_6;
          inv_main14_2 = v_5_6;
          inv_main14_3 = B_6;
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = __VERIFIER_nondet_int ();
          if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
              abort ();
          C_9 = __VERIFIER_nondet_int ();
          if (((C_9 <= -1000000000) || (C_9 >= 1000000000)))
              abort ();
          G_9 = inv_main14_0;
          E_9 = inv_main14_1;
          F_9 = inv_main14_2;
          D_9 = inv_main14_3;
          if (!
              ((B_9 == (F_9 + 1)) && (!(C_9 == 0))
               && (0 <= (E_9 + (-1 * F_9))) && (A_9 == (D_9 + F_9))))
              abort ();
          inv_main14_0 = G_9;
          inv_main14_1 = E_9;
          inv_main14_2 = B_9;
          inv_main14_3 = A_9;
          goto inv_main14_4;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          F_7 = __VERIFIER_nondet_int ();
          if (((F_7 <= -1000000000) || (F_7 >= 1000000000)))
              abort ();
          G_7 = inv_main8_0;
          D_7 = inv_main8_1;
          E_7 = inv_main8_2;
          C_7 = inv_main8_3;
          if (!
              ((!(F_7 == 0)) && (B_7 == (E_7 + 1))
               && (0 <= (D_7 + (-1 * E_7))) && (A_7 == C_7)))
              abort ();
          inv_main8_0 = G_7;
          inv_main8_1 = D_7;
          inv_main8_2 = B_7;
          inv_main8_3 = A_7;
          goto inv_main8_5;

      default:
          abort ();
      }

    // return expression

}

