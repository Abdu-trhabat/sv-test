// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/barthe2-big_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "barthe2-big_safe.c-1_000_range.c", 13, "reach_error"); }



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
    int inv_main25_0;
    int inv_main25_1;
    int inv_main25_2;
    int inv_main25_3;
    int inv_main25_4;
    int inv_main3_0;
    int inv_main37_0;
    int inv_main37_1;
    int inv_main37_2;
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
    int G_3;
    int H_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int v_5_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int G_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int F_7;
    int A_8;
    int v_1_8;
    int v_2_8;
    int v_3_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int v_5_9;
    int v_6_9;
    int v_7_9;
    int A_10;
    int B_10;
    int C_10;

    if (((inv_main31_0 <= -1000000000) || (inv_main31_0 >= 1000000000))
        || ((inv_main31_1 <= -1000000000) || (inv_main31_1 >= 1000000000))
        || ((inv_main31_2 <= -1000000000) || (inv_main31_2 >= 1000000000))
        || ((inv_main31_3 <= -1000000000) || (inv_main31_3 >= 1000000000))
        || ((inv_main31_4 <= -1000000000) || (inv_main31_4 >= 1000000000))
        || ((inv_main25_0 <= -1000000000) || (inv_main25_0 >= 1000000000))
        || ((inv_main25_1 <= -1000000000) || (inv_main25_1 >= 1000000000))
        || ((inv_main25_2 <= -1000000000) || (inv_main25_2 >= 1000000000))
        || ((inv_main25_3 <= -1000000000) || (inv_main25_3 >= 1000000000))
        || ((inv_main25_4 <= -1000000000) || (inv_main25_4 >= 1000000000))
        || ((inv_main3_0 <= -1000000000) || (inv_main3_0 >= 1000000000))
        || ((inv_main37_0 <= -1000000000) || (inv_main37_0 >= 1000000000))
        || ((inv_main37_1 <= -1000000000) || (inv_main37_1 >= 1000000000))
        || ((inv_main37_2 <= -1000000000) || (inv_main37_2 >= 1000000000))
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
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((H_3 <= -1000000000) || (H_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((v_5_4 <= -1000000000) || (v_5_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((F_5 <= -1000000000) || (F_5 >= 1000000000))
        || ((G_5 <= -1000000000) || (G_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((F_6 <= -1000000000) || (F_6 >= 1000000000))
        || ((G_6 <= -1000000000) || (G_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((F_7 <= -1000000000) || (F_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((v_1_8 <= -1000000000) || (v_1_8 >= 1000000000))
        || ((v_2_8 <= -1000000000) || (v_2_8 >= 1000000000))
        || ((v_3_8 <= -1000000000) || (v_3_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000))
        || ((D_9 <= -1000000000) || (D_9 >= 1000000000))
        || ((E_9 <= -1000000000) || (E_9 >= 1000000000))
        || ((v_5_9 <= -1000000000) || (v_5_9 >= 1000000000))
        || ((v_6_9 <= -1000000000) || (v_6_9 >= 1000000000))
        || ((v_7_9 <= -1000000000) || (v_7_9 >= 1000000000))
        || ((A_10 <= -1000000000) || (A_10 >= 1000000000))
        || ((B_10 <= -1000000000) || (B_10 >= 1000000000))
        || ((C_10 <= -1000000000) || (C_10 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    inv_main3_0 = A_0;
    v_2_8 = __VERIFIER_nondet_int ();
    if (((v_2_8 <= -1000000000) || (v_2_8 >= 1000000000)))
        abort ();
    v_1_8 = __VERIFIER_nondet_int ();
    if (((v_1_8 <= -1000000000) || (v_1_8 >= 1000000000)))
        abort ();
    v_3_8 = __VERIFIER_nondet_int ();
    if (((v_3_8 <= -1000000000) || (v_3_8 >= 1000000000)))
        abort ();
    A_8 = inv_main3_0;
    if (!((v_1_8 == A_8) && (1 == v_2_8) && (1 == v_3_8)))
        abort ();
    inv_main8_0 = A_8;
    inv_main8_1 = v_1_8;
    inv_main8_2 = v_2_8;
    inv_main8_3 = v_3_8;
    A_5 = __VERIFIER_nondet_int ();
    if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
        abort ();
    B_5 = __VERIFIER_nondet_int ();
    if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
        abort ();
    C_5 = __VERIFIER_nondet_int ();
    if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
        abort ();
    G_5 = inv_main8_0;
    E_5 = inv_main8_1;
    D_5 = inv_main8_2;
    F_5 = inv_main8_3;
    if (!
        ((!(C_5 == 0)) && (B_5 == (D_5 + 1)) && (0 <= (E_5 + (-1 * D_5)))
         && (A_5 == (5 * F_5))))
        abort ();
    inv_main8_0 = G_5;
    inv_main8_1 = E_5;
    inv_main8_2 = B_5;
    inv_main8_3 = A_5;
    goto inv_main8_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main14_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_9 = __VERIFIER_nondet_int ();
          if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
              abort ();
          v_6_9 = __VERIFIER_nondet_int ();
          if (((v_6_9 <= -1000000000) || (v_6_9 >= 1000000000)))
              abort ();
          v_5_9 = __VERIFIER_nondet_int ();
          if (((v_5_9 <= -1000000000) || (v_5_9 >= 1000000000)))
              abort ();
          v_7_9 = __VERIFIER_nondet_int ();
          if (((v_7_9 <= -1000000000) || (v_7_9 >= 1000000000)))
              abort ();
          E_9 = inv_main14_0;
          C_9 = inv_main14_1;
          A_9 = inv_main14_2;
          D_9 = inv_main14_3;
          if (!
              (((!(0 <= (C_9 + (-1 * A_9)))) || (B_9 == 0)) && (v_5_9 == E_9)
               && (1 == v_6_9) && (1 == v_7_9)))
              abort ();
          inv_main25_0 = E_9;
          inv_main25_1 = D_9;
          inv_main25_2 = v_5_9;
          inv_main25_3 = v_6_9;
          inv_main25_4 = v_7_9;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          H_2 = inv_main25_0;
          F_2 = inv_main25_1;
          E_2 = inv_main25_2;
          G_2 = inv_main25_3;
          D_2 = inv_main25_4;
          if (!
              ((B_2 == (G_2 + 1)) && (!(C_2 == 0))
               && (0 <= (E_2 + (-1 * G_2))) && (A_2 == (5 * D_2))))
              abort ();
          inv_main25_0 = H_2;
          inv_main25_1 = F_2;
          inv_main25_2 = E_2;
          inv_main25_3 = B_2;
          inv_main25_4 = A_2;
          goto inv_main25_3;

      case 1:
          A_6 = __VERIFIER_nondet_int ();
          if (((A_6 <= -1000000000) || (A_6 >= 1000000000)))
              abort ();
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          C_6 = __VERIFIER_nondet_int ();
          if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
              abort ();
          G_6 = inv_main14_0;
          E_6 = inv_main14_1;
          D_6 = inv_main14_2;
          F_6 = inv_main14_3;
          if (!
              ((!(C_6 == 0)) && (B_6 == (D_6 + 1))
               && (0 <= (E_6 + (-1 * D_6))) && (A_6 == (F_6 + D_6))))
              abort ();
          inv_main14_0 = G_6;
          inv_main14_1 = E_6;
          inv_main14_2 = B_6;
          inv_main14_3 = A_6;
          goto inv_main14_0;

      default:
          abort ();
      }
  inv_main31_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_7 = __VERIFIER_nondet_int ();
          if (((C_7 <= -1000000000) || (C_7 >= 1000000000)))
              abort ();
          F_7 = inv_main31_0;
          D_7 = inv_main31_1;
          B_7 = inv_main31_2;
          E_7 = inv_main31_3;
          A_7 = inv_main31_4;
          if (!((!(0 <= (B_7 + (-1 * E_7)))) || (C_7 == 0)))
              abort ();
          inv_main37_0 = F_7;
          inv_main37_1 = D_7;
          inv_main37_2 = A_7;
          C_10 = inv_main37_0;
          B_10 = inv_main37_1;
          A_10 = inv_main37_2;
          if (!(!(B_10 == A_10)))
              abort ();
          goto main_error;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          H_3 = inv_main31_0;
          F_3 = inv_main31_1;
          E_3 = inv_main31_2;
          G_3 = inv_main31_3;
          C_3 = inv_main31_4;
          if (!
              ((B_3 == (G_3 + 1)) && (!(D_3 == 0))
               && (0 <= (E_3 + (-1 * G_3))) && (A_3 == (C_3 + G_3))))
              abort ();
          inv_main31_0 = H_3;
          inv_main31_1 = F_3;
          inv_main31_2 = E_3;
          inv_main31_3 = B_3;
          inv_main31_4 = A_3;
          goto inv_main31_1;

      default:
          abort ();
      }
  inv_main8_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          v_5_4 = __VERIFIER_nondet_int ();
          if (((v_5_4 <= -1000000000) || (v_5_4 >= 1000000000)))
              abort ();
          E_4 = inv_main8_0;
          C_4 = inv_main8_1;
          A_4 = inv_main8_2;
          D_4 = inv_main8_3;
          if (!(((!(0 <= (C_4 + (-1 * A_4)))) || (B_4 == 0)) && (0 == v_5_4)))
              abort ();
          inv_main14_0 = E_4;
          inv_main14_1 = C_4;
          inv_main14_2 = v_5_4;
          inv_main14_3 = D_4;
          A_6 = __VERIFIER_nondet_int ();
          if (((A_6 <= -1000000000) || (A_6 >= 1000000000)))
              abort ();
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          C_6 = __VERIFIER_nondet_int ();
          if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
              abort ();
          G_6 = inv_main14_0;
          E_6 = inv_main14_1;
          D_6 = inv_main14_2;
          F_6 = inv_main14_3;
          if (!
              ((!(C_6 == 0)) && (B_6 == (D_6 + 1))
               && (0 <= (E_6 + (-1 * D_6))) && (A_6 == (F_6 + D_6))))
              abort ();
          inv_main14_0 = G_6;
          inv_main14_1 = E_6;
          inv_main14_2 = B_6;
          inv_main14_3 = A_6;
          goto inv_main14_0;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          G_5 = inv_main8_0;
          E_5 = inv_main8_1;
          D_5 = inv_main8_2;
          F_5 = inv_main8_3;
          if (!
              ((!(C_5 == 0)) && (B_5 == (D_5 + 1))
               && (0 <= (E_5 + (-1 * D_5))) && (A_5 == (5 * F_5))))
              abort ();
          inv_main8_0 = G_5;
          inv_main8_1 = E_5;
          inv_main8_2 = B_5;
          inv_main8_3 = A_5;
          goto inv_main8_2;

      default:
          abort ();
      }
  inv_main25_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          v_6_1 = __VERIFIER_nondet_int ();
          if (((v_6_1 <= -1000000000) || (v_6_1 >= 1000000000)))
              abort ();
          F_1 = inv_main25_0;
          D_1 = inv_main25_1;
          C_1 = inv_main25_2;
          E_1 = inv_main25_3;
          A_1 = inv_main25_4;
          if (!(((!(0 <= (C_1 + (-1 * E_1)))) || (B_1 == 0)) && (1 == v_6_1)))
              abort ();
          inv_main31_0 = F_1;
          inv_main31_1 = D_1;
          inv_main31_2 = C_1;
          inv_main31_3 = v_6_1;
          inv_main31_4 = A_1;
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          H_3 = inv_main31_0;
          F_3 = inv_main31_1;
          E_3 = inv_main31_2;
          G_3 = inv_main31_3;
          C_3 = inv_main31_4;
          if (!
              ((B_3 == (G_3 + 1)) && (!(D_3 == 0))
               && (0 <= (E_3 + (-1 * G_3))) && (A_3 == (C_3 + G_3))))
              abort ();
          inv_main31_0 = H_3;
          inv_main31_1 = F_3;
          inv_main31_2 = E_3;
          inv_main31_3 = B_3;
          inv_main31_4 = A_3;
          goto inv_main31_1;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          H_2 = inv_main25_0;
          F_2 = inv_main25_1;
          E_2 = inv_main25_2;
          G_2 = inv_main25_3;
          D_2 = inv_main25_4;
          if (!
              ((B_2 == (G_2 + 1)) && (!(C_2 == 0))
               && (0 <= (E_2 + (-1 * G_2))) && (A_2 == (5 * D_2))))
              abort ();
          inv_main25_0 = H_2;
          inv_main25_1 = F_2;
          inv_main25_2 = E_2;
          inv_main25_3 = B_2;
          inv_main25_4 = A_2;
          goto inv_main25_3;

      default:
          abort ();
      }

    // return expression

}

