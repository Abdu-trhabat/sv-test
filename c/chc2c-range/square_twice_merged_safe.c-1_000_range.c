// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/square_twice_merged_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "square_twice_merged_safe.c-1_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main18_0;
    int inv_main18_1;
    int inv_main18_2;
    int inv_main18_3;
    int inv_main18_4;
    int inv_main4_0;
    int inv_main4_1;
    int inv_main5_0;
    int inv_main5_1;
    int inv_main5_2;
    int inv_main12_0;
    int inv_main12_1;
    int inv_main12_2;
    int inv_main12_3;
    int inv_main12_4;
    int A_0;
    int v_1_0;
    int A_1;
    int B_1;
    int v_2_1;
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
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
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
    int H_6;
    int I_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int A_8;
    int B_8;
    int C_8;
    int v_3_8;
    int v_4_8;
    int v_5_8;
    int v_6_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;

    if (((inv_main18_0 <= -1000000000) || (inv_main18_0 >= 1000000000))
        || ((inv_main18_1 <= -1000000000) || (inv_main18_1 >= 1000000000))
        || ((inv_main18_2 <= -1000000000) || (inv_main18_2 >= 1000000000))
        || ((inv_main18_3 <= -1000000000) || (inv_main18_3 >= 1000000000))
        || ((inv_main18_4 <= -1000000000) || (inv_main18_4 >= 1000000000))
        || ((inv_main4_0 <= -1000000000) || (inv_main4_0 >= 1000000000))
        || ((inv_main4_1 <= -1000000000) || (inv_main4_1 >= 1000000000))
        || ((inv_main5_0 <= -1000000000) || (inv_main5_0 >= 1000000000))
        || ((inv_main5_1 <= -1000000000) || (inv_main5_1 >= 1000000000))
        || ((inv_main5_2 <= -1000000000) || (inv_main5_2 >= 1000000000))
        || ((inv_main12_0 <= -1000000000) || (inv_main12_0 >= 1000000000))
        || ((inv_main12_1 <= -1000000000) || (inv_main12_1 >= 1000000000))
        || ((inv_main12_2 <= -1000000000) || (inv_main12_2 >= 1000000000))
        || ((inv_main12_3 <= -1000000000) || (inv_main12_3 >= 1000000000))
        || ((inv_main12_4 <= -1000000000) || (inv_main12_4 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((v_1_0 <= -1000000000) || (v_1_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((v_2_1 <= -1000000000) || (v_2_1 >= 1000000000))
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
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
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
        || ((H_6 <= -1000000000) || (H_6 >= 1000000000))
        || ((I_6 <= -1000000000) || (I_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((E_7 <= -1000000000) || (E_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((v_3_8 <= -1000000000) || (v_3_8 >= 1000000000))
        || ((v_4_8 <= -1000000000) || (v_4_8 >= 1000000000))
        || ((v_5_8 <= -1000000000) || (v_5_8 >= 1000000000))
        || ((v_6_8 <= -1000000000) || (v_6_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000))
        || ((D_9 <= -1000000000) || (D_9 >= 1000000000))
        || ((E_9 <= -1000000000) || (E_9 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!(0 == v_1_0))
        abort ();
    inv_main4_0 = A_0;
    inv_main4_1 = v_1_0;
    v_2_1 = __VERIFIER_nondet_int ();
    if (((v_2_1 <= -1000000000) || (v_2_1 >= 1000000000)))
        abort ();
    B_1 = inv_main4_0;
    A_1 = inv_main4_1;
    if (!(v_2_1 == B_1))
        abort ();
    inv_main5_0 = B_1;
    inv_main5_1 = A_1;
    inv_main5_2 = v_2_1;
    A_7 = __VERIFIER_nondet_int ();
    if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
        abort ();
    B_7 = __VERIFIER_nondet_int ();
    if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
        abort ();
    E_7 = inv_main5_0;
    D_7 = inv_main5_1;
    C_7 = inv_main5_2;
    if (!((B_7 == (D_7 + E_7)) && (1 <= C_7) && (A_7 == (C_7 + -1))))
        abort ();
    inv_main5_0 = E_7;
    inv_main5_1 = B_7;
    inv_main5_2 = A_7;
    goto inv_main5_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main18:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_2 = inv_main18_0;
          C_2 = inv_main18_1;
          B_2 = inv_main18_2;
          A_2 = inv_main18_3;
          E_2 = inv_main18_4;
          if (!1)
              abort ();
          inv_main12_0 = D_2;
          inv_main12_1 = C_2;
          inv_main12_2 = B_2;
          inv_main12_3 = A_2;
          inv_main12_4 = E_2;
          goto inv_main12;

      case 1:
          D_9 = inv_main18_0;
          C_9 = inv_main18_1;
          B_9 = inv_main18_2;
          A_9 = inv_main18_3;
          E_9 = inv_main18_4;
          if (!(!(C_9 == A_9)))
              abort ();
          goto main_error;

      default:
          abort ();
      }
  inv_main12:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          D_3 = inv_main12_0;
          C_3 = inv_main12_1;
          B_3 = inv_main12_2;
          A_3 = inv_main12_3;
          E_3 = inv_main12_4;
          if (!((!(1 <= E_3)) && (!(1 <= B_3))))
              abort ();
          inv_main18_0 = D_3;
          inv_main18_1 = C_3;
          inv_main18_2 = B_3;
          inv_main18_3 = A_3;
          inv_main18_4 = E_3;
          goto inv_main18;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          F_4 = inv_main12_0;
          E_4 = inv_main12_1;
          D_4 = inv_main12_2;
          C_4 = inv_main12_3;
          G_4 = inv_main12_4;
          if (!
              ((B_4 == (C_4 + F_4)) && (!(1 <= D_4)) && (1 <= G_4)
               && (A_4 == (G_4 + -1))))
              abort ();
          inv_main18_0 = F_4;
          inv_main18_1 = E_4;
          inv_main18_2 = D_4;
          inv_main18_3 = B_4;
          inv_main18_4 = A_4;
          goto inv_main18;

      case 2:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          F_5 = inv_main12_0;
          E_5 = inv_main12_1;
          D_5 = inv_main12_2;
          C_5 = inv_main12_3;
          G_5 = inv_main12_4;
          if (!
              ((B_5 == (E_5 + F_5)) && (1 <= D_5) && (!(1 <= G_5))
               && (A_5 == (D_5 + -1))))
              abort ();
          inv_main18_0 = F_5;
          inv_main18_1 = B_5;
          inv_main18_2 = A_5;
          inv_main18_3 = C_5;
          inv_main18_4 = G_5;
          goto inv_main18;

      case 3:
          A_6 = __VERIFIER_nondet_int ();
          if (((A_6 <= -1000000000) || (A_6 >= 1000000000)))
              abort ();
          B_6 = __VERIFIER_nondet_int ();
          if (((B_6 <= -1000000000) || (B_6 >= 1000000000)))
              abort ();
          C_6 = __VERIFIER_nondet_int ();
          if (((C_6 <= -1000000000) || (C_6 >= 1000000000)))
              abort ();
          D_6 = __VERIFIER_nondet_int ();
          if (((D_6 <= -1000000000) || (D_6 >= 1000000000)))
              abort ();
          H_6 = inv_main12_0;
          G_6 = inv_main12_1;
          F_6 = inv_main12_2;
          E_6 = inv_main12_3;
          I_6 = inv_main12_4;
          if (!
              ((B_6 == (E_6 + H_6)) && (C_6 == (F_6 + -1))
               && (D_6 == (G_6 + H_6)) && (1 <= F_6) && (1 <= I_6)
               && (A_6 == (I_6 + -1))))
              abort ();
          inv_main18_0 = H_6;
          inv_main18_1 = D_6;
          inv_main18_2 = C_6;
          inv_main18_3 = B_6;
          inv_main18_4 = A_6;
          goto inv_main18;

      default:
          abort ();
      }
  inv_main5_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          v_4_8 = __VERIFIER_nondet_int ();
          if (((v_4_8 <= -1000000000) || (v_4_8 >= 1000000000)))
              abort ();
          v_3_8 = __VERIFIER_nondet_int ();
          if (((v_3_8 <= -1000000000) || (v_3_8 >= 1000000000)))
              abort ();
          v_6_8 = __VERIFIER_nondet_int ();
          if (((v_6_8 <= -1000000000) || (v_6_8 >= 1000000000)))
              abort ();
          v_5_8 = __VERIFIER_nondet_int ();
          if (((v_5_8 <= -1000000000) || (v_5_8 >= 1000000000)))
              abort ();
          C_8 = inv_main5_0;
          B_8 = inv_main5_1;
          A_8 = inv_main5_2;
          if (!
              ((!(1 <= A_8)) && (0 == v_3_8) && (v_4_8 == C_8) && (0 == v_5_8)
               && (v_6_8 == C_8)))
              abort ();
          inv_main12_0 = C_8;
          inv_main12_1 = v_3_8;
          inv_main12_2 = v_4_8;
          inv_main12_3 = v_5_8;
          inv_main12_4 = v_6_8;
          goto inv_main12;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          E_7 = inv_main5_0;
          D_7 = inv_main5_1;
          C_7 = inv_main5_2;
          if (!((B_7 == (D_7 + E_7)) && (1 <= C_7) && (A_7 == (C_7 + -1))))
              abort ();
          inv_main5_0 = E_7;
          inv_main5_1 = B_7;
          inv_main5_2 = A_7;
          goto inv_main5_0;

      default:
          abort ();
      }

    // return expression

}

