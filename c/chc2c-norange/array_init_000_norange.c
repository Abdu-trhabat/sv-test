// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/array_init_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "array_init_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int init_unknown_4_0;
    int init_unknown_4_1;
    int init_unknown_4_2;
    int init_unknown_4_3;
    int init_unknown_6_0;
    int init_unknown_6_1;
    int init_unknown_6_2;
    int init_unknown_6_3;
    int update_unknown_15_0;
    int update_unknown_15_1;
    int update_unknown_15_2;
    int update_unknown_15_3;
    int mk_array_unknown_9_0;
    int mk_array_unknown_9_1;
    int mk_array_unknown_9_2;
    int update_unknown_12_0;
    int update_unknown_12_1;
    int update_unknown_12_2;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int G_0;
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
    int F_2;
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
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int F_9;
    int G_9;
    int H_9;



    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          if (!
              ((!(0 == E_8)) && (A_8 == C_8)
               && (!((0 == E_8) == (D_8 == B_8)))))
              abort ();
          update_unknown_15_0 = A_8;
          update_unknown_15_1 = D_8;
          update_unknown_15_2 = C_8;
          update_unknown_15_3 = B_8;
          C_0 = __VERIFIER_nondet_int ();
          F_0 = __VERIFIER_nondet_int ();
          G_0 = __VERIFIER_nondet_int ();
          A_0 = update_unknown_15_0;
          E_0 = update_unknown_15_1;
          D_0 = update_unknown_15_2;
          B_0 = update_unknown_15_3;
          if (!
              ((0 == G_0) && (F_0 == (B_0 + 1)) && (D_0 == 1)
               && (!((0 == G_0) == (B_0 >= C_0)))))
              abort ();
          init_unknown_4_0 = A_0;
          init_unknown_4_1 = E_0;
          init_unknown_4_2 = C_0;
          init_unknown_4_3 = F_0;
          goto init_unknown_4;

      case 1:
          if (!
              ((!((0 == D_5) == (0 <= C_5)))
               && (!((0 == F_5) == ((!(0 == D_5)) && (!(0 == E_5)))))
               && (!(0 == F_5)) && (A_5 == 0)
               && ((0 == E_5) == (B_5 <= C_5))))
              abort ();
          mk_array_unknown_9_0 = A_5;
          mk_array_unknown_9_1 = C_5;
          mk_array_unknown_9_2 = B_5;
          D_4 = __VERIFIER_nondet_int ();
          A_4 = mk_array_unknown_9_0;
          C_4 = mk_array_unknown_9_1;
          B_4 = mk_array_unknown_9_2;
          if (!(D_4 == 0))
              abort ();
          init_unknown_4_0 = A_4;
          init_unknown_4_1 = C_4;
          init_unknown_4_2 = B_4;
          init_unknown_4_3 = D_4;
          goto init_unknown_4;

      case 2:
          if (!
              ((!((0 == D_6) == (0 <= C_6)))
               && (!((0 == F_6) == ((!(0 == D_6)) && (!(0 == E_6)))))
               && (0 == F_6) && (A_6 == -1) && ((0 == E_6) == (B_6 <= C_6))))
              abort ();
          mk_array_unknown_9_0 = A_6;
          mk_array_unknown_9_1 = C_6;
          mk_array_unknown_9_2 = B_6;
          D_4 = __VERIFIER_nondet_int ();
          A_4 = mk_array_unknown_9_0;
          C_4 = mk_array_unknown_9_1;
          B_4 = mk_array_unknown_9_2;
          if (!(D_4 == 0))
              abort ();
          init_unknown_4_0 = A_4;
          init_unknown_4_1 = C_4;
          init_unknown_4_2 = B_4;
          init_unknown_4_3 = D_4;
          goto init_unknown_4;

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  init_unknown_4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          E_1 = __VERIFIER_nondet_int ();
          B_1 = init_unknown_4_0;
          A_1 = init_unknown_4_1;
          D_1 = init_unknown_4_2;
          C_1 = init_unknown_4_3;
          if (!((!(0 == E_1)) && (!((0 == E_1) == (C_1 >= D_1)))))
              abort ();
          init_unknown_6_0 = B_1;
          init_unknown_6_1 = A_1;
          init_unknown_6_2 = D_1;
          init_unknown_6_3 = C_1;
          C_3 = __VERIFIER_nondet_int ();
          E_3 = __VERIFIER_nondet_int ();
          G_3 = __VERIFIER_nondet_int ();
          B_3 = init_unknown_6_0;
          A_3 = init_unknown_6_1;
          D_3 = init_unknown_6_2;
          F_3 = init_unknown_6_3;
          if (!
              ((0 == G_3) && (F_3 == (C_3 + 1)) && (E_3 == 1)
               && (!((0 == G_3) == (C_3 >= D_3)))))
              abort ();
          init_unknown_6_0 = B_3;
          init_unknown_6_1 = A_3;
          init_unknown_6_2 = D_3;
          init_unknown_6_3 = C_3;
          goto init_unknown_6_0;

      case 1:
          E_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          A_2 = init_unknown_4_0;
          D_2 = init_unknown_4_1;
          C_2 = init_unknown_4_2;
          B_2 = init_unknown_4_3;
          if (!((0 == F_2) && (E_2 == 1) && (!((0 == F_2) == (B_2 >= C_2)))))
              abort ();
          update_unknown_12_0 = A_2;
          update_unknown_12_1 = D_2;
          update_unknown_12_2 = B_2;
          A_7 = __VERIFIER_nondet_int ();
          C_7 = __VERIFIER_nondet_int ();
          E_7 = __VERIFIER_nondet_int ();
          F_7 = update_unknown_12_0;
          D_7 = update_unknown_12_1;
          B_7 = update_unknown_12_2;
          if (!
              ((0 == E_7) && (A_7 == F_7) && (!((0 == E_7) == (D_7 == B_7)))))
              abort ();
          update_unknown_15_0 = A_7;
          update_unknown_15_1 = D_7;
          update_unknown_15_2 = C_7;
          update_unknown_15_3 = B_7;
          C_0 = __VERIFIER_nondet_int ();
          F_0 = __VERIFIER_nondet_int ();
          G_0 = __VERIFIER_nondet_int ();
          A_0 = update_unknown_15_0;
          E_0 = update_unknown_15_1;
          D_0 = update_unknown_15_2;
          B_0 = update_unknown_15_3;
          if (!
              ((0 == G_0) && (F_0 == (B_0 + 1)) && (D_0 == 1)
               && (!((0 == G_0) == (B_0 >= C_0)))))
              abort ();
          init_unknown_4_0 = A_0;
          init_unknown_4_1 = E_0;
          init_unknown_4_2 = C_0;
          init_unknown_4_3 = F_0;
          goto init_unknown_4;

      default:
          abort ();
      }
  init_unknown_6_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_9 = __VERIFIER_nondet_int ();
          D_9 = __VERIFIER_nondet_int ();
          E_9 = __VERIFIER_nondet_int ();
          G_9 = __VERIFIER_nondet_int ();
          F_9 = init_unknown_6_0;
          B_9 = init_unknown_6_1;
          A_9 = init_unknown_6_2;
          H_9 = init_unknown_6_3;
          if (!
              ((!((0 == G_9) == (F_9 >= 1)))
               && (!((0 == E_9) == ((!(0 == D_9)) && (!(0 == C_9)))))
               && ((0 == D_9) == (A_9 <= B_9)) && (0 == G_9) && (!(0 == E_9))
               && (H_9 == 0) && (!((0 == C_9) == (0 <= B_9)))))
              abort ();
          goto main_error;

      case 1:
          C_3 = __VERIFIER_nondet_int ();
          E_3 = __VERIFIER_nondet_int ();
          G_3 = __VERIFIER_nondet_int ();
          B_3 = init_unknown_6_0;
          A_3 = init_unknown_6_1;
          D_3 = init_unknown_6_2;
          F_3 = init_unknown_6_3;
          if (!
              ((0 == G_3) && (F_3 == (C_3 + 1)) && (E_3 == 1)
               && (!((0 == G_3) == (C_3 >= D_3)))))
              abort ();
          init_unknown_6_0 = B_3;
          init_unknown_6_1 = A_3;
          init_unknown_6_2 = D_3;
          init_unknown_6_3 = C_3;
          goto init_unknown_6_0;

      default:
          abort ();
      }

    // return expression

}

