// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/loop_unswitching_merged_safe.c-1_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop_unswitching_merged_safe.c-1_001_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
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
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int F_8;
    int G_8;
    int H_8;
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

    if (((inv_main12_0 <= -1000000000) || (inv_main12_0 >= 1000000000))
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
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000))
        || ((E_8 <= -1000000000) || (E_8 >= 1000000000))
        || ((F_8 <= -1000000000) || (F_8 >= 1000000000))
        || ((G_8 <= -1000000000) || (G_8 >= 1000000000))
        || ((H_8 <= -1000000000) || (H_8 >= 1000000000))
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
    goto inv_main8_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main6:
    goto inv_main6;
  inv_main15:
    goto inv_main15;
  inv_main20:
    goto inv_main20;
  inv_main9:
    goto inv_main9;
  inv_main7:
    goto inv_main7;
  inv_main8_0:
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
          F_13 = inv_main12_0;
          A_13 = inv_main12_1;
          B_13 = inv_main12_2;
          D_13 = inv_main12_3;
          C_13 = inv_main12_4;
          E_13 = inv_main12_5;
          if (!((!(A_13 <= 0)) && (!((C_13 + A_13) == 0))))
              abort ();
          goto main_error;

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
          goto inv_main8_0;

      default:
          abort ();
      }

    // return expression

}

