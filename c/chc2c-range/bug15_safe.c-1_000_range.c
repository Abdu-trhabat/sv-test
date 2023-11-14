// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/bug15_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "bug15_safe.c-1_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main17_0;
    int inv_main17_1;
    int inv_main17_2;
    int inv_main17_3;
    int inv_main17_4;
    int inv_main8_0;
    int inv_main8_1;
    int inv_main8_2;
    int inv_main8_3;
    int inv_main3_0;
    int inv_main21_0;
    int inv_main21_1;
    int inv_main21_2;
    int A_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
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
    int v_1_4;
    int v_2_4;
    int v_3_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int v_5_5;
    int v_6_5;
    int v_7_5;
    int A_6;
    int B_6;
    int C_6;

    if (((inv_main17_0 <= -1000000000) || (inv_main17_0 >= 1000000000))
        || ((inv_main17_1 <= -1000000000) || (inv_main17_1 >= 1000000000))
        || ((inv_main17_2 <= -1000000000) || (inv_main17_2 >= 1000000000))
        || ((inv_main17_3 <= -1000000000) || (inv_main17_3 >= 1000000000))
        || ((inv_main17_4 <= -1000000000) || (inv_main17_4 >= 1000000000))
        || ((inv_main8_0 <= -1000000000) || (inv_main8_0 >= 1000000000))
        || ((inv_main8_1 <= -1000000000) || (inv_main8_1 >= 1000000000))
        || ((inv_main8_2 <= -1000000000) || (inv_main8_2 >= 1000000000))
        || ((inv_main8_3 <= -1000000000) || (inv_main8_3 >= 1000000000))
        || ((inv_main3_0 <= -1000000000) || (inv_main3_0 >= 1000000000))
        || ((inv_main21_0 <= -1000000000) || (inv_main21_0 >= 1000000000))
        || ((inv_main21_1 <= -1000000000) || (inv_main21_1 >= 1000000000))
        || ((inv_main21_2 <= -1000000000) || (inv_main21_2 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
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
        || ((v_1_4 <= -1000000000) || (v_1_4 >= 1000000000))
        || ((v_2_4 <= -1000000000) || (v_2_4 >= 1000000000))
        || ((v_3_4 <= -1000000000) || (v_3_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((v_5_5 <= -1000000000) || (v_5_5 >= 1000000000))
        || ((v_6_5 <= -1000000000) || (v_6_5 >= 1000000000))
        || ((v_7_5 <= -1000000000) || (v_7_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    inv_main3_0 = A_0;
    v_2_4 = __VERIFIER_nondet_int ();
    if (((v_2_4 <= -1000000000) || (v_2_4 >= 1000000000)))
        abort ();
    v_1_4 = __VERIFIER_nondet_int ();
    if (((v_1_4 <= -1000000000) || (v_1_4 >= 1000000000)))
        abort ();
    v_3_4 = __VERIFIER_nondet_int ();
    if (((v_3_4 <= -1000000000) || (v_3_4 >= 1000000000)))
        abort ();
    A_4 = inv_main3_0;
    if (!((v_1_4 == A_4) && (1 == v_2_4) && (0 == v_3_4)))
        abort ();
    inv_main8_0 = A_4;
    inv_main8_1 = v_1_4;
    inv_main8_2 = v_2_4;
    inv_main8_3 = v_3_4;
    A_2 = __VERIFIER_nondet_int ();
    if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
        abort ();
    B_2 = __VERIFIER_nondet_int ();
    if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
        abort ();
    C_2 = inv_main8_0;
    F_2 = inv_main8_1;
    D_2 = inv_main8_2;
    E_2 = inv_main8_3;
    if (!((B_2 == ((2 * D_2) + 4)) && (D_2 <= 9) && (A_2 == (D_2 + 2))))
        abort ();
    inv_main8_0 = C_2;
    inv_main8_1 = F_2;
    inv_main8_2 = B_2;
    inv_main8_3 = A_2;
    goto inv_main8_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main17_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = inv_main17_0;
          F_3 = inv_main17_1;
          E_3 = inv_main17_2;
          D_3 = inv_main17_3;
          C_3 = inv_main17_4;
          if (!((!(C_3 <= 9)) && (A_3 == (2 * C_3))))
              abort ();
          inv_main21_0 = B_3;
          inv_main21_1 = F_3;
          inv_main21_2 = A_3;
          B_6 = inv_main21_0;
          C_6 = inv_main21_1;
          A_6 = inv_main21_2;
          if (!(!(C_6 == A_6)))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          C_1 = inv_main17_0;
          G_1 = inv_main17_1;
          F_1 = inv_main17_2;
          E_1 = inv_main17_3;
          D_1 = inv_main17_4;
          if (!((B_1 == (D_1 + 2)) && (D_1 <= 9) && (A_1 == ((2 * D_1) + 4))))
              abort ();
          inv_main17_0 = C_1;
          inv_main17_1 = G_1;
          inv_main17_2 = F_1;
          inv_main17_3 = B_1;
          inv_main17_4 = A_1;
          goto inv_main17_0;

      default:
          abort ();
      }
  inv_main8_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          v_6_5 = __VERIFIER_nondet_int ();
          if (((v_6_5 <= -1000000000) || (v_6_5 >= 1000000000)))
              abort ();
          v_5_5 = __VERIFIER_nondet_int ();
          if (((v_5_5 <= -1000000000) || (v_5_5 >= 1000000000)))
              abort ();
          v_7_5 = __VERIFIER_nondet_int ();
          if (((v_7_5 <= -1000000000) || (v_7_5 >= 1000000000)))
              abort ();
          B_5 = inv_main8_0;
          E_5 = inv_main8_1;
          C_5 = inv_main8_2;
          D_5 = inv_main8_3;
          if (!
              ((!(C_5 <= 9)) && (A_5 == (2 * C_5)) && (v_5_5 == B_5)
               && (0 == v_6_5) && (1 == v_7_5)))
              abort ();
          inv_main17_0 = B_5;
          inv_main17_1 = A_5;
          inv_main17_2 = v_5_5;
          inv_main17_3 = v_6_5;
          inv_main17_4 = v_7_5;
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          C_1 = inv_main17_0;
          G_1 = inv_main17_1;
          F_1 = inv_main17_2;
          E_1 = inv_main17_3;
          D_1 = inv_main17_4;
          if (!((B_1 == (D_1 + 2)) && (D_1 <= 9) && (A_1 == ((2 * D_1) + 4))))
              abort ();
          inv_main17_0 = C_1;
          inv_main17_1 = G_1;
          inv_main17_2 = F_1;
          inv_main17_3 = B_1;
          inv_main17_4 = A_1;
          goto inv_main17_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          C_2 = inv_main8_0;
          F_2 = inv_main8_1;
          D_2 = inv_main8_2;
          E_2 = inv_main8_3;
          if (!((B_2 == ((2 * D_2) + 4)) && (D_2 <= 9) && (A_2 == (D_2 + 2))))
              abort ();
          inv_main8_0 = C_2;
          inv_main8_1 = F_2;
          inv_main8_2 = B_2;
          inv_main8_3 = A_2;
          goto inv_main8_1;

      default:
          abort ();
      }

    // return expression

}

