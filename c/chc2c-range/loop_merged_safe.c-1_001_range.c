// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/loop_merged_safe.c-1_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop_merged_safe.c-1_001_range.c", 13, "reach_error"); }



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
    int inv_main5_0;
    int inv_main5_1;
    int inv_main5_2;
    int inv_main8_0;
    int inv_main8_1;
    int inv_main8_2;
    int inv_main8_3;
    int inv_main8_4;
    int inv_main11_0;
    int inv_main11_1;
    int inv_main11_2;
    int inv_main11_3;
    int inv_main11_4;
    int A_0;
    int v_1_0;
    int v_2_0;
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
    int v_3_6;
    int v_4_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int v_5_7;
    int v_6_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;

    if (((inv_main15_0 <= -1000000000) || (inv_main15_0 >= 1000000000))
        || ((inv_main15_1 <= -1000000000) || (inv_main15_1 >= 1000000000))
        || ((inv_main15_2 <= -1000000000) || (inv_main15_2 >= 1000000000))
        || ((inv_main15_3 <= -1000000000) || (inv_main15_3 >= 1000000000))
        || ((inv_main15_4 <= -1000000000) || (inv_main15_4 >= 1000000000))
        || ((inv_main5_0 <= -1000000000) || (inv_main5_0 >= 1000000000))
        || ((inv_main5_1 <= -1000000000) || (inv_main5_1 >= 1000000000))
        || ((inv_main5_2 <= -1000000000) || (inv_main5_2 >= 1000000000))
        || ((inv_main8_0 <= -1000000000) || (inv_main8_0 >= 1000000000))
        || ((inv_main8_1 <= -1000000000) || (inv_main8_1 >= 1000000000))
        || ((inv_main8_2 <= -1000000000) || (inv_main8_2 >= 1000000000))
        || ((inv_main8_3 <= -1000000000) || (inv_main8_3 >= 1000000000))
        || ((inv_main8_4 <= -1000000000) || (inv_main8_4 >= 1000000000))
        || ((inv_main11_0 <= -1000000000) || (inv_main11_0 >= 1000000000))
        || ((inv_main11_1 <= -1000000000) || (inv_main11_1 >= 1000000000))
        || ((inv_main11_2 <= -1000000000) || (inv_main11_2 >= 1000000000))
        || ((inv_main11_3 <= -1000000000) || (inv_main11_3 >= 1000000000))
        || ((inv_main11_4 <= -1000000000) || (inv_main11_4 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((v_1_0 <= -1000000000) || (v_1_0 >= 1000000000))
        || ((v_2_0 <= -1000000000) || (v_2_0 >= 1000000000))
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
        || ((v_3_6 <= -1000000000) || (v_3_6 >= 1000000000))
        || ((v_4_6 <= -1000000000) || (v_4_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((v_5_7 <= -1000000000) || (v_5_7 >= 1000000000))
        || ((v_6_7 <= -1000000000) || (v_6_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000))
        || ((E_8 <= -1000000000) || (E_8 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((0 == v_1_0) && (0 == v_2_0)))
        abort ();
    inv_main5_0 = A_0;
    inv_main5_1 = v_1_0;
    inv_main5_2 = v_2_0;
    goto inv_main5;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main15:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_8 = inv_main15_0;
          B_8 = inv_main15_1;
          C_8 = inv_main15_2;
          E_8 = inv_main15_3;
          D_8 = inv_main15_4;
          if (!(!((E_8 + D_8) == A_8)))
              abort ();
          goto main_error;

      case 1:
          A_2 = inv_main15_0;
          B_2 = inv_main15_1;
          C_2 = inv_main15_2;
          E_2 = inv_main15_3;
          D_2 = inv_main15_4;
          if (!1)
              abort ();
          inv_main8_0 = A_2;
          inv_main8_1 = B_2;
          inv_main8_2 = C_2;
          inv_main8_3 = E_2;
          inv_main8_4 = D_2;
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = inv_main8_0;
          D_3 = inv_main8_1;
          E_3 = inv_main8_2;
          G_3 = inv_main8_3;
          F_3 = inv_main8_4;
          if (!((B_3 == (G_3 + -1)) && (0 <= G_3) && (A_3 == (F_3 + 1))))
              abort ();
          inv_main15_0 = C_3;
          inv_main15_1 = D_3;
          inv_main15_2 = E_3;
          inv_main15_3 = B_3;
          inv_main15_4 = A_3;
          goto inv_main15;

      default:
          abort ();
      }
  inv_main5:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          v_4_6 = __VERIFIER_nondet_int ();
          if (((v_4_6 <= -1000000000) || (v_4_6 >= 1000000000)))
              abort ();
          v_3_6 = __VERIFIER_nondet_int ();
          if (((v_3_6 <= -1000000000) || (v_3_6 >= 1000000000)))
              abort ();
          A_6 = inv_main5_0;
          B_6 = inv_main5_1;
          C_6 = inv_main5_2;
          if (!
              ((!(0 <= (A_6 + (-1 * B_6)))) && (v_3_6 == A_6)
               && (0 == v_4_6)))
              abort ();
          inv_main8_0 = A_6;
          inv_main8_1 = B_6;
          inv_main8_2 = C_6;
          inv_main8_3 = v_3_6;
          inv_main8_4 = v_4_6;
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = inv_main8_0;
          D_3 = inv_main8_1;
          E_3 = inv_main8_2;
          G_3 = inv_main8_3;
          F_3 = inv_main8_4;
          if (!((B_3 == (G_3 + -1)) && (0 <= G_3) && (A_3 == (F_3 + 1))))
              abort ();
          inv_main15_0 = C_3;
          inv_main15_1 = D_3;
          inv_main15_2 = E_3;
          inv_main15_3 = B_3;
          inv_main15_4 = A_3;
          goto inv_main15;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          v_6_7 = __VERIFIER_nondet_int ();
          if (((v_6_7 <= -1000000000) || (v_6_7 >= 1000000000)))
              abort ();
          v_5_7 = __VERIFIER_nondet_int ();
          if (((v_5_7 <= -1000000000) || (v_5_7 >= 1000000000)))
              abort ();
          C_7 = inv_main5_0;
          D_7 = inv_main5_1;
          E_7 = inv_main5_2;
          if (!
              ((A_7 == (E_7 + 1)) && (0 <= (C_7 + (-1 * D_7)))
               && (B_7 == (D_7 + 1)) && (v_5_7 == C_7) && (0 == v_6_7)))
              abort ();
          inv_main11_0 = C_7;
          inv_main11_1 = B_7;
          inv_main11_2 = A_7;
          inv_main11_3 = v_5_7;
          inv_main11_4 = v_6_7;
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = inv_main11_0;
          D_5 = inv_main11_1;
          E_5 = inv_main11_2;
          G_5 = inv_main11_3;
          F_5 = inv_main11_4;
          if (!
              ((B_5 == (D_5 + 1)) && (0 <= (C_5 + (-1 * D_5)))
               && (A_5 == (E_5 + 1))))
              abort ();
          inv_main11_0 = C_5;
          inv_main11_1 = B_5;
          inv_main11_2 = A_5;
          inv_main11_3 = G_5;
          inv_main11_4 = F_5;
          goto inv_main11_0;

      default:
          abort ();
      }
  inv_main12:
    goto inv_main12;
  inv_main11_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = inv_main11_0;
          B_4 = inv_main11_1;
          C_4 = inv_main11_2;
          E_4 = inv_main11_3;
          D_4 = inv_main11_4;
          if (!(!(0 <= (A_4 + (-1 * B_4)))))
              abort ();
          inv_main8_0 = A_4;
          inv_main8_1 = B_4;
          inv_main8_2 = C_4;
          inv_main8_3 = E_4;
          inv_main8_4 = D_4;
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = inv_main8_0;
          D_3 = inv_main8_1;
          E_3 = inv_main8_2;
          G_3 = inv_main8_3;
          F_3 = inv_main8_4;
          if (!((B_3 == (G_3 + -1)) && (0 <= G_3) && (A_3 == (F_3 + 1))))
              abort ();
          inv_main15_0 = C_3;
          inv_main15_1 = D_3;
          inv_main15_2 = E_3;
          inv_main15_3 = B_3;
          inv_main15_4 = A_3;
          goto inv_main15;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = inv_main11_0;
          D_5 = inv_main11_1;
          E_5 = inv_main11_2;
          G_5 = inv_main11_3;
          F_5 = inv_main11_4;
          if (!
              ((B_5 == (D_5 + 1)) && (0 <= (C_5 + (-1 * D_5)))
               && (A_5 == (E_5 + 1))))
              abort ();
          inv_main11_0 = C_5;
          inv_main11_1 = B_5;
          inv_main11_2 = A_5;
          inv_main11_3 = G_5;
          inv_main11_4 = F_5;
          goto inv_main11_0;

      default:
          abort ();
      }

    // return expression

}

