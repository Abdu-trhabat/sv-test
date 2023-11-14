// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/027b-horn_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "027b-horn_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV2_0;
    int INV2_1;
    int INV2_2;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int F_9;
    int G_9;



    // main logic
    goto main_init;

  main_init:
    if (!((D_0 == A_0) && (C_0 == 0) && (!(D_0 >= 1)) && (E_0 == B_0)))
        abort ();
    INV2_0 = A_0;
    INV2_1 = B_0;
    INV2_2 = C_0;
    B_1 = __VERIFIER_nondet_int ();
    C_1 = __VERIFIER_nondet_int ();
    F_1 = __VERIFIER_nondet_int ();
    G_1 = __VERIFIER_nondet_int ();
    H_1 = __VERIFIER_nondet_int ();
    I_1 = __VERIFIER_nondet_int ();
    A_1 = INV2_0;
    D_1 = INV2_1;
    E_1 = INV2_2;
    if (!
        ((H_1 == I_1) && (F_1 == G_1) && (E_1 == (C_1 + -1)) && (A_1 >= 1)
         && (D_1 >= 1) && (!(F_1 >= 1)) && (D_1 == (B_1 + 1))))
        abort ();
    INV2_0 = A_1;
    INV2_1 = B_1;
    INV2_2 = C_1;
    goto INV2_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV1:
    goto INV1;
  INV2_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          D_9 = __VERIFIER_nondet_int ();
          E_9 = __VERIFIER_nondet_int ();
          F_9 = __VERIFIER_nondet_int ();
          G_9 = __VERIFIER_nondet_int ();
          C_9 = INV2_0;
          B_9 = INV2_1;
          A_9 = INV2_2;
          if (!
              ((F_9 == G_9) && (D_9 == E_9) && (!(B_9 >= 1)) && (!(D_9 >= 1))
               && (!(A_9 == 0))))
              abort ();
          goto main_error;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          I_1 = __VERIFIER_nondet_int ();
          A_1 = INV2_0;
          D_1 = INV2_1;
          E_1 = INV2_2;
          if (!
              ((H_1 == I_1) && (F_1 == G_1) && (E_1 == (C_1 + -1))
               && (A_1 >= 1) && (D_1 >= 1) && (!(F_1 >= 1))
               && (D_1 == (B_1 + 1))))
              abort ();
          INV2_0 = A_1;
          INV2_1 = B_1;
          INV2_2 = C_1;
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          I_1 = __VERIFIER_nondet_int ();
          A_1 = INV2_0;
          D_1 = INV2_1;
          E_1 = INV2_2;
          if (!
              ((H_1 == I_1) && (F_1 == G_1) && (E_1 == (C_1 + -1))
               && (A_1 >= 1) && (D_1 >= 1) && (!(F_1 >= 1))
               && (D_1 == (B_1 + 1))))
              abort ();
          INV2_0 = A_1;
          INV2_1 = B_1;
          INV2_2 = C_1;
          goto INV2_1;

      case 2:
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          I_1 = __VERIFIER_nondet_int ();
          A_1 = INV2_0;
          D_1 = INV2_1;
          E_1 = INV2_2;
          if (!
              ((H_1 == I_1) && (F_1 == G_1) && (E_1 == (C_1 + -1))
               && (A_1 >= 1) && (D_1 >= 1) && (!(F_1 >= 1))
               && (D_1 == (B_1 + 1))))
              abort ();
          INV2_0 = A_1;
          INV2_1 = B_1;
          INV2_2 = C_1;
          goto INV2_1;

      default:
          abort ();
      }
  INV2_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet_int ();
          H_2 = __VERIFIER_nondet_int ();
          A_2 = INV2_0;
          D_2 = INV2_1;
          C_2 = INV2_2;
          if (!
              ((E_2 == F_2) && (D_2 == (B_2 + 1)) && (!(A_2 >= 1))
               && (!(E_2 >= 1)) && (D_2 >= 1) && (G_2 == H_2)))
              abort ();
          INV2_0 = A_2;
          INV2_1 = B_2;
          INV2_2 = C_2;
          goto INV2_0;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          I_1 = __VERIFIER_nondet_int ();
          A_1 = INV2_0;
          D_1 = INV2_1;
          E_1 = INV2_2;
          if (!
              ((H_1 == I_1) && (F_1 == G_1) && (E_1 == (C_1 + -1))
               && (A_1 >= 1) && (D_1 >= 1) && (!(F_1 >= 1))
               && (D_1 == (B_1 + 1))))
              abort ();
          INV2_0 = A_1;
          INV2_1 = B_1;
          INV2_2 = C_1;
          goto INV2_1;

      default:
          abort ();
      }

    // return expression

}

