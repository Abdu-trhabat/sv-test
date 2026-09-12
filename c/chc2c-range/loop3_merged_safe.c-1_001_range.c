// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/loop3_merged_safe.c-1_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop3_merged_safe.c-1_001_range.c", 13, "reach_error"); }



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
    int inv_main7_0;
    int inv_main7_1;
    int inv_main7_2;
    int inv_main7_3;
    int inv_main7_4;
    int inv_main13_0;
    int inv_main13_1;
    int inv_main13_2;
    int inv_main13_3;
    int inv_main13_4;
    int inv_main18_0;
    int inv_main18_1;
    int inv_main18_2;
    int inv_main18_3;
    int inv_main18_4;
    int A_0;
    int v_1_0;
    int v_2_0;
    int v_3_0;
    int v_4_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int v_5_1;
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
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int G_6;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int F_8;
    int G_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;

    if (((inv_main8_0 <= -1000000000) || (inv_main8_0 >= 1000000000))
        || ((inv_main8_1 <= -1000000000) || (inv_main8_1 >= 1000000000))
        || ((inv_main8_2 <= -1000000000) || (inv_main8_2 >= 1000000000))
        || ((inv_main8_3 <= -1000000000) || (inv_main8_3 >= 1000000000))
        || ((inv_main8_4 <= -1000000000) || (inv_main8_4 >= 1000000000))
        || ((inv_main7_0 <= -1000000000) || (inv_main7_0 >= 1000000000))
        || ((inv_main7_1 <= -1000000000) || (inv_main7_1 >= 1000000000))
        || ((inv_main7_2 <= -1000000000) || (inv_main7_2 >= 1000000000))
        || ((inv_main7_3 <= -1000000000) || (inv_main7_3 >= 1000000000))
        || ((inv_main7_4 <= -1000000000) || (inv_main7_4 >= 1000000000))
        || ((inv_main13_0 <= -1000000000) || (inv_main13_0 >= 1000000000))
        || ((inv_main13_1 <= -1000000000) || (inv_main13_1 >= 1000000000))
        || ((inv_main13_2 <= -1000000000) || (inv_main13_2 >= 1000000000))
        || ((inv_main13_3 <= -1000000000) || (inv_main13_3 >= 1000000000))
        || ((inv_main13_4 <= -1000000000) || (inv_main13_4 >= 1000000000))
        || ((inv_main18_0 <= -1000000000) || (inv_main18_0 >= 1000000000))
        || ((inv_main18_1 <= -1000000000) || (inv_main18_1 >= 1000000000))
        || ((inv_main18_2 <= -1000000000) || (inv_main18_2 >= 1000000000))
        || ((inv_main18_3 <= -1000000000) || (inv_main18_3 >= 1000000000))
        || ((inv_main18_4 <= -1000000000) || (inv_main18_4 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((v_1_0 <= -1000000000) || (v_1_0 >= 1000000000))
        || ((v_2_0 <= -1000000000) || (v_2_0 >= 1000000000))
        || ((v_3_0 <= -1000000000) || (v_3_0 >= 1000000000))
        || ((v_4_0 <= -1000000000) || (v_4_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((v_5_1 <= -1000000000) || (v_5_1 >= 1000000000))
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
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000))
        || ((D_6 <= -1000000000) || (D_6 >= 1000000000))
        || ((E_6 <= -1000000000) || (E_6 >= 1000000000))
        || ((F_6 <= -1000000000) || (F_6 >= 1000000000))
        || ((G_6 <= -1000000000) || (G_6 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000))
        || ((E_8 <= -1000000000) || (E_8 >= 1000000000))
        || ((F_8 <= -1000000000) || (F_8 >= 1000000000))
        || ((G_8 <= -1000000000) || (G_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000))
        || ((D_9 <= -1000000000) || (D_9 >= 1000000000))
        || ((E_9 <= -1000000000) || (E_9 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((1 == v_1_0) && (0 == v_2_0) && (1 == v_3_0) && (2 == v_4_0)))
        abort ();
    inv_main7_0 = A_0;
    inv_main7_1 = v_1_0;
    inv_main7_2 = v_2_0;
    inv_main7_3 = v_3_0;
    inv_main7_4 = v_4_0;
    goto inv_main7;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main15:
    goto inv_main15;
  inv_main8:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          C_3 = inv_main8_0;
          F_3 = inv_main8_1;
          B_3 = inv_main8_2;
          D_3 = inv_main8_3;
          E_3 = inv_main8_4;
          if (!((0 <= (C_3 + (-1 * F_3))) && (A_3 == (B_3 + 2))))
              abort ();
          inv_main13_0 = C_3;
          inv_main13_1 = F_3;
          inv_main13_2 = A_3;
          inv_main13_3 = D_3;
          inv_main13_4 = E_3;
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          C_4 = inv_main13_0;
          F_4 = inv_main13_1;
          B_4 = inv_main13_2;
          D_4 = inv_main13_3;
          E_4 = inv_main13_4;
          if (!(A_4 == (F_4 + 1)))
              abort ();
          inv_main8_0 = C_4;
          inv_main8_1 = A_4;
          inv_main8_2 = B_4;
          inv_main8_3 = D_4;
          inv_main8_4 = E_4;
          goto inv_main8;

      case 1:
          A_6 = __VERIFIER_nondet_int ();
          if (((A_6 <= -1000000000) || (A_6 >= 1000000000)))
              abort ();
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          D_6 = inv_main8_0;
          G_6 = inv_main8_1;
          C_6 = inv_main8_2;
          E_6 = inv_main8_3;
          F_6 = inv_main8_4;
          if (!
              ((B_6 == (E_6 + 1)) && (!(0 <= (D_6 + (-1 * G_6))))
               && (1 <= (D_6 + (-1 * E_6))) && (A_6 == (F_6 + 2))))
              abort ();
          inv_main18_0 = D_6;
          inv_main18_1 = G_6;
          inv_main18_2 = C_6;
          inv_main18_3 = B_6;
          inv_main18_4 = A_6;
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          D_8 = inv_main18_0;
          G_8 = inv_main18_1;
          C_8 = inv_main18_2;
          E_8 = inv_main18_3;
          F_8 = inv_main18_4;
          if (!
              ((B_8 == (E_8 + 1)) && (1 <= (D_8 + (-1 * E_8)))
               && (A_8 == (F_8 + 2))))
              abort ();
          inv_main18_0 = D_8;
          inv_main18_1 = G_8;
          inv_main18_2 = C_8;
          inv_main18_3 = B_8;
          inv_main18_4 = A_8;
          goto inv_main18_0;

      default:
          abort ();
      }
  inv_main7:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          v_5_1 = __VERIFIER_nondet_int ();
          if (((v_5_1 <= -1000000000) || (v_5_1 >= 1000000000)))
              abort ();
          B_1 = inv_main7_0;
          E_1 = inv_main7_1;
          A_1 = inv_main7_2;
          C_1 = inv_main7_3;
          D_1 = inv_main7_4;
          if (!((B_1 <= 0) && (1 == v_5_1)))
              abort ();
          inv_main8_0 = v_5_1;
          inv_main8_1 = E_1;
          inv_main8_2 = A_1;
          inv_main8_3 = C_1;
          inv_main8_4 = D_1;
          goto inv_main8;

      case 1:
          B_2 = inv_main7_0;
          E_2 = inv_main7_1;
          A_2 = inv_main7_2;
          C_2 = inv_main7_3;
          D_2 = inv_main7_4;
          if (!(!(B_2 <= 0)))
              abort ();
          inv_main8_0 = B_2;
          inv_main8_1 = E_2;
          inv_main8_2 = A_2;
          inv_main8_3 = C_2;
          inv_main8_4 = D_2;
          goto inv_main8;

      default:
          abort ();
      }
  inv_main18_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_9 = inv_main18_0;
          E_9 = inv_main18_1;
          A_9 = inv_main18_2;
          C_9 = inv_main18_3;
          D_9 = inv_main18_4;
          if (!(!((D_9 + (-2 * C_9)) == 0)))
              abort ();
          goto main_error;

      case 1:
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          D_8 = inv_main18_0;
          G_8 = inv_main18_1;
          C_8 = inv_main18_2;
          E_8 = inv_main18_3;
          F_8 = inv_main18_4;
          if (!
              ((B_8 == (E_8 + 1)) && (1 <= (D_8 + (-1 * E_8)))
               && (A_8 == (F_8 + 2))))
              abort ();
          inv_main18_0 = D_8;
          inv_main18_1 = G_8;
          inv_main18_2 = C_8;
          inv_main18_3 = B_8;
          inv_main18_4 = A_8;
          goto inv_main18_0;

      default:
          abort ();
      }

    // return expression

}

