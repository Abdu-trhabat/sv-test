// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/inductive_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "inductive_001_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int loop_unknown_3_0;
    int loop_unknown_3_1;
    int loop_unknown_3_2;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int G_0;
    int H_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;



    // main logic
    goto main_init;

  main_init:
    if (!((!(0 == D_3)) && (A_3 == B_3) && ((0 == D_3) == (0 <= C_3))))
        abort ();
    loop_unknown_3_0 = A_3;
    loop_unknown_3_1 = C_3;
    loop_unknown_3_2 = B_3;
    A_2 = __VERIFIER_nondet_int ();
    B_2 = __VERIFIER_nondet_int ();
    C_2 = __VERIFIER_nondet_int ();
    D_2 = __VERIFIER_nondet_int ();
    E_2 = __VERIFIER_nondet_int ();
    F_2 = __VERIFIER_nondet_int ();
    I_2 = loop_unknown_3_0;
    H_2 = loop_unknown_3_1;
    G_2 = loop_unknown_3_2;
    if (!
        (((0 == E_2) == (1 <= B_2)) && ((0 == D_2) == (0 <= C_2))
         && (0 == F_2) && (0 == E_2) && (0 == D_2) && (A_2 == I_2)
         && (H_2 == (C_2 + -1)) && (G_2 == ((-1 * B_2) + 3))
         && ((0 == F_2) == (B_2 <= 2))))
        abort ();
    loop_unknown_3_0 = A_2;
    loop_unknown_3_1 = C_2;
    loop_unknown_3_2 = B_2;
    goto loop_unknown_3_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  loop_unknown_3_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          D_4 = __VERIFIER_nondet_int ();
          C_4 = loop_unknown_3_0;
          A_4 = loop_unknown_3_1;
          B_4 = loop_unknown_3_2;
          if (!((0 == D_4) && (B_4 == 3) && (!((0 == D_4) == (C_4 >= 3)))))
              abort ();
          goto main_error;

      case 1:
          A_0 = __VERIFIER_nondet_int ();
          C_0 = __VERIFIER_nondet_int ();
          D_0 = __VERIFIER_nondet_int ();
          G_0 = __VERIFIER_nondet_int ();
          H_0 = __VERIFIER_nondet_int ();
          F_0 = loop_unknown_3_0;
          E_0 = loop_unknown_3_1;
          B_0 = loop_unknown_3_2;
          if (!
              (((0 == D_0) == (0 <= C_0)) && ((0 == H_0) == (B_0 <= 2))
               && (0 == G_0) && (0 == D_0) && (!(0 == H_0))
               && (E_0 == (C_0 + -1)) && (A_0 == F_0)
               && ((0 == G_0) == (1 <= B_0))))
              abort ();
          loop_unknown_3_0 = A_0;
          loop_unknown_3_1 = C_0;
          loop_unknown_3_2 = B_0;
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          I_2 = loop_unknown_3_0;
          H_2 = loop_unknown_3_1;
          G_2 = loop_unknown_3_2;
          if (!
              (((0 == E_2) == (1 <= B_2)) && ((0 == D_2) == (0 <= C_2))
               && (0 == F_2) && (0 == E_2) && (0 == D_2) && (A_2 == I_2)
               && (H_2 == (C_2 + -1)) && (G_2 == ((-1 * B_2) + 3))
               && ((0 == F_2) == (B_2 <= 2))))
              abort ();
          loop_unknown_3_0 = A_2;
          loop_unknown_3_1 = C_2;
          loop_unknown_3_2 = B_2;
          goto loop_unknown_3_2;

      case 2:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          I_2 = loop_unknown_3_0;
          H_2 = loop_unknown_3_1;
          G_2 = loop_unknown_3_2;
          if (!
              (((0 == E_2) == (1 <= B_2)) && ((0 == D_2) == (0 <= C_2))
               && (0 == F_2) && (0 == E_2) && (0 == D_2) && (A_2 == I_2)
               && (H_2 == (C_2 + -1)) && (G_2 == ((-1 * B_2) + 3))
               && ((0 == F_2) == (B_2 <= 2))))
              abort ();
          loop_unknown_3_0 = A_2;
          loop_unknown_3_1 = C_2;
          loop_unknown_3_2 = B_2;
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          I_2 = loop_unknown_3_0;
          H_2 = loop_unknown_3_1;
          G_2 = loop_unknown_3_2;
          if (!
              (((0 == E_2) == (1 <= B_2)) && ((0 == D_2) == (0 <= C_2))
               && (0 == F_2) && (0 == E_2) && (0 == D_2) && (A_2 == I_2)
               && (H_2 == (C_2 + -1)) && (G_2 == ((-1 * B_2) + 3))
               && ((0 == F_2) == (B_2 <= 2))))
              abort ();
          loop_unknown_3_0 = A_2;
          loop_unknown_3_1 = C_2;
          loop_unknown_3_2 = B_2;
          goto loop_unknown_3_2;

      case 3:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          I_2 = loop_unknown_3_0;
          H_2 = loop_unknown_3_1;
          G_2 = loop_unknown_3_2;
          if (!
              (((0 == E_2) == (1 <= B_2)) && ((0 == D_2) == (0 <= C_2))
               && (0 == F_2) && (0 == E_2) && (0 == D_2) && (A_2 == I_2)
               && (H_2 == (C_2 + -1)) && (G_2 == ((-1 * B_2) + 3))
               && ((0 == F_2) == (B_2 <= 2))))
              abort ();
          loop_unknown_3_0 = A_2;
          loop_unknown_3_1 = C_2;
          loop_unknown_3_2 = B_2;
          goto loop_unknown_3_2;

      default:
          abort ();
      }
  loop_unknown_3_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          G_1 = loop_unknown_3_0;
          F_1 = loop_unknown_3_1;
          E_1 = loop_unknown_3_2;
          if (!
              (((0 == H_1) == (1 <= B_1)) && (0 == D_1) && (!(0 == H_1))
               && (F_1 == (C_1 + -1)) && (E_1 == (B_1 + -1)) && (A_1 == G_1)
               && ((0 == D_1) == (0 <= C_1))))
              abort ();
          loop_unknown_3_0 = A_1;
          loop_unknown_3_1 = C_1;
          loop_unknown_3_2 = B_1;
          goto loop_unknown_3_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          I_2 = loop_unknown_3_0;
          H_2 = loop_unknown_3_1;
          G_2 = loop_unknown_3_2;
          if (!
              (((0 == E_2) == (1 <= B_2)) && ((0 == D_2) == (0 <= C_2))
               && (0 == F_2) && (0 == E_2) && (0 == D_2) && (A_2 == I_2)
               && (H_2 == (C_2 + -1)) && (G_2 == ((-1 * B_2) + 3))
               && ((0 == F_2) == (B_2 <= 2))))
              abort ();
          loop_unknown_3_0 = A_2;
          loop_unknown_3_1 = C_2;
          loop_unknown_3_2 = B_2;
          goto loop_unknown_3_2;

      default:
          abort ();
      }
  loop_unknown_3_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_0 = __VERIFIER_nondet_int ();
          C_0 = __VERIFIER_nondet_int ();
          D_0 = __VERIFIER_nondet_int ();
          G_0 = __VERIFIER_nondet_int ();
          H_0 = __VERIFIER_nondet_int ();
          F_0 = loop_unknown_3_0;
          E_0 = loop_unknown_3_1;
          B_0 = loop_unknown_3_2;
          if (!
              (((0 == D_0) == (0 <= C_0)) && ((0 == H_0) == (B_0 <= 2))
               && (0 == G_0) && (0 == D_0) && (!(0 == H_0))
               && (E_0 == (C_0 + -1)) && (A_0 == F_0)
               && ((0 == G_0) == (1 <= B_0))))
              abort ();
          loop_unknown_3_0 = A_0;
          loop_unknown_3_1 = C_0;
          loop_unknown_3_2 = B_0;
          goto loop_unknown_3_1;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          I_2 = loop_unknown_3_0;
          H_2 = loop_unknown_3_1;
          G_2 = loop_unknown_3_2;
          if (!
              (((0 == E_2) == (1 <= B_2)) && ((0 == D_2) == (0 <= C_2))
               && (0 == F_2) && (0 == E_2) && (0 == D_2) && (A_2 == I_2)
               && (H_2 == (C_2 + -1)) && (G_2 == ((-1 * B_2) + 3))
               && ((0 == F_2) == (B_2 <= 2))))
              abort ();
          loop_unknown_3_0 = A_2;
          loop_unknown_3_1 = C_2;
          loop_unknown_3_2 = B_2;
          goto loop_unknown_3_2;

      default:
          abort ();
      }

    // return expression

}

