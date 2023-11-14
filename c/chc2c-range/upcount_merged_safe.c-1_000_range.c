// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/upcount_merged_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "upcount_merged_safe.c-1_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main8_0;
    int inv_main8_1;
    int inv_main8_2;
    int inv_main8_3;
    int inv_main8_4;
    int inv_main4_0;
    int inv_main4_1;
    int inv_main4_2;
    int inv_main4_3;
    int inv_main4_4;
    int inv_main5_0;
    int inv_main5_1;
    int inv_main5_2;
    int inv_main5_3;
    int inv_main5_4;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int A_5;
    int v_1_5;
    int v_2_5;
    int v_3_5;
    int v_4_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;

    if (((inv_main8_0 <= -1000000000) || (inv_main8_0 >= 1000000000))
        || ((inv_main8_1 <= -1000000000) || (inv_main8_1 >= 1000000000))
        || ((inv_main8_2 <= -1000000000) || (inv_main8_2 >= 1000000000))
        || ((inv_main8_3 <= -1000000000) || (inv_main8_3 >= 1000000000))
        || ((inv_main8_4 <= -1000000000) || (inv_main8_4 >= 1000000000))
        || ((inv_main4_0 <= -1000000000) || (inv_main4_0 >= 1000000000))
        || ((inv_main4_1 <= -1000000000) || (inv_main4_1 >= 1000000000))
        || ((inv_main4_2 <= -1000000000) || (inv_main4_2 >= 1000000000))
        || ((inv_main4_3 <= -1000000000) || (inv_main4_3 >= 1000000000))
        || ((inv_main4_4 <= -1000000000) || (inv_main4_4 >= 1000000000))
        || ((inv_main5_0 <= -1000000000) || (inv_main5_0 >= 1000000000))
        || ((inv_main5_1 <= -1000000000) || (inv_main5_1 >= 1000000000))
        || ((inv_main5_2 <= -1000000000) || (inv_main5_2 >= 1000000000))
        || ((inv_main5_3 <= -1000000000) || (inv_main5_3 >= 1000000000))
        || ((inv_main5_4 <= -1000000000) || (inv_main5_4 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((v_1_5 <= -1000000000) || (v_1_5 >= 1000000000))
        || ((v_2_5 <= -1000000000) || (v_2_5 >= 1000000000))
        || ((v_3_5 <= -1000000000) || (v_3_5 >= 1000000000))
        || ((v_4_5 <= -1000000000) || (v_4_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    A_5 = __VERIFIER_nondet_int ();
    if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
        abort ();
    v_2_5 = __VERIFIER_nondet_int ();
    if (((v_2_5 <= -1000000000) || (v_2_5 >= 1000000000)))
        abort ();
    v_1_5 = __VERIFIER_nondet_int ();
    if (((v_1_5 <= -1000000000) || (v_1_5 >= 1000000000)))
        abort ();
    v_4_5 = __VERIFIER_nondet_int ();
    if (((v_4_5 <= -1000000000) || (v_4_5 >= 1000000000)))
        abort ();
    v_3_5 = __VERIFIER_nondet_int ();
    if (((v_3_5 <= -1000000000) || (v_3_5 >= 1000000000)))
        abort ();
    if (!((v_1_5 == A_5) && (v_2_5 == A_5) && (0 == v_3_5) && (0 == v_4_5)))
        abort ();
    inv_main4_0 = A_5;
    inv_main4_1 = v_1_5;
    inv_main4_2 = v_2_5;
    inv_main4_3 = v_3_5;
    inv_main4_4 = v_4_5;
    A_3 = __VERIFIER_nondet_int ();
    if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
        abort ();
    B_3 = __VERIFIER_nondet_int ();
    if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
        abort ();
    D_3 = inv_main4_0;
    E_3 = inv_main4_1;
    C_3 = inv_main4_2;
    G_3 = inv_main4_3;
    F_3 = inv_main4_4;
    if (!((B_3 == (E_3 + -1)) && (0 <= E_3) && (A_3 == (G_3 + 1))))
        abort ();
    inv_main4_0 = D_3;
    inv_main4_1 = B_3;
    inv_main4_2 = C_3;
    inv_main4_3 = A_3;
    inv_main4_4 = F_3;
    goto inv_main4_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main5_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_2 = inv_main5_0;
          C_2 = inv_main5_1;
          A_2 = inv_main5_2;
          E_2 = inv_main5_3;
          D_2 = inv_main5_4;
          if (!(!(1 <= A_2)))
              abort ();
          inv_main8_0 = B_2;
          inv_main8_1 = C_2;
          inv_main8_2 = A_2;
          inv_main8_3 = E_2;
          inv_main8_4 = D_2;
          B_6 = inv_main8_0;
          C_6 = inv_main8_1;
          A_6 = inv_main8_2;
          E_6 = inv_main8_3;
          D_6 = inv_main8_4;
          if (!((!(B_6 <= -1)) && (!(E_6 == (D_6 + 1)))))
              abort ();
          goto main_error;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          D_4 = inv_main5_0;
          E_4 = inv_main5_1;
          C_4 = inv_main5_2;
          G_4 = inv_main5_3;
          F_4 = inv_main5_4;
          if (!((B_4 == (C_4 + -1)) && (1 <= C_4) && (A_4 == (F_4 + 1))))
              abort ();
          inv_main5_0 = D_4;
          inv_main5_1 = E_4;
          inv_main5_2 = B_4;
          inv_main5_3 = G_4;
          inv_main5_4 = A_4;
          goto inv_main5_0;

      default:
          abort ();
      }
  inv_main4_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          D_3 = inv_main4_0;
          E_3 = inv_main4_1;
          C_3 = inv_main4_2;
          G_3 = inv_main4_3;
          F_3 = inv_main4_4;
          if (!((B_3 == (E_3 + -1)) && (0 <= E_3) && (A_3 == (G_3 + 1))))
              abort ();
          inv_main4_0 = D_3;
          inv_main4_1 = B_3;
          inv_main4_2 = C_3;
          inv_main4_3 = A_3;
          inv_main4_4 = F_3;
          goto inv_main4_1;

      case 1:
          B_1 = inv_main4_0;
          C_1 = inv_main4_1;
          A_1 = inv_main4_2;
          E_1 = inv_main4_3;
          D_1 = inv_main4_4;
          if (!(!(0 <= C_1)))
              abort ();
          inv_main5_0 = B_1;
          inv_main5_1 = C_1;
          inv_main5_2 = A_1;
          inv_main5_3 = E_1;
          inv_main5_4 = D_1;
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          D_4 = inv_main5_0;
          E_4 = inv_main5_1;
          C_4 = inv_main5_2;
          G_4 = inv_main5_3;
          F_4 = inv_main5_4;
          if (!((B_4 == (C_4 + -1)) && (1 <= C_4) && (A_4 == (F_4 + 1))))
              abort ();
          inv_main5_0 = D_4;
          inv_main5_1 = E_4;
          inv_main5_2 = B_4;
          inv_main5_3 = G_4;
          inv_main5_4 = A_4;
          goto inv_main5_0;

      default:
          abort ();
      }

    // return expression

}

