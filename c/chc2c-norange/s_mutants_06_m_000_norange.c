// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_mutants_06_m_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_mutants_06_m_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv2_0;
    int inv2_1;
    int inv2_2;
    int inv2_3;
    int inv1_0;
    int inv1_1;
    int inv1_2;
    int inv1_3;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
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



    // main logic
    goto main_init;

  main_init:
    if (!((C_0 == 0) && (B_0 == 0) && (A_0 == 0) && (D_0 == 0)))
        abort ();
    inv1_0 = A_0;
    inv1_1 = B_0;
    inv1_2 = C_0;
    inv1_3 = D_0;
    D_1 = __VERIFIER_nondet_int ();
    E_1 = __VERIFIER_nondet_int ();
    F_1 = __VERIFIER_nondet_int ();
    B_1 = inv1_0;
    C_1 = inv1_1;
    A_1 = inv1_2;
    G_1 = inv1_3;
    if (!((E_1 == (C_1 + -1)) && (D_1 == (B_1 + 1)) && (F_1 == (A_1 + 1))))
        abort ();
    inv1_0 = D_1;
    inv1_1 = E_1;
    inv1_2 = F_1;
    inv1_3 = G_1;
    goto inv1_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv1_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = inv1_0;
          B_2 = inv1_1;
          C_2 = inv1_2;
          D_2 = inv1_3;
          if (!1)
              abort ();
          inv2_0 = A_2;
          inv2_1 = B_2;
          inv2_2 = C_2;
          inv2_3 = D_2;
          D_3 = __VERIFIER_nondet_int ();
          E_3 = __VERIFIER_nondet_int ();
          G_3 = __VERIFIER_nondet_int ();
          B_3 = inv2_0;
          C_3 = inv2_1;
          F_3 = inv2_2;
          A_3 = inv2_3;
          if (!
              ((E_3 == (C_3 + 1)) && (D_3 == (B_3 + -1))
               && (G_3 == (A_3 + 1))))
              abort ();
          inv2_0 = D_3;
          inv2_1 = E_3;
          inv2_2 = F_3;
          inv2_3 = G_3;
          goto inv2_1;

      case 1:
          D_1 = __VERIFIER_nondet_int ();
          E_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          B_1 = inv1_0;
          C_1 = inv1_1;
          A_1 = inv1_2;
          G_1 = inv1_3;
          if (!
              ((E_1 == (C_1 + -1)) && (D_1 == (B_1 + 1))
               && (F_1 == (A_1 + 1))))
              abort ();
          inv1_0 = D_1;
          inv1_1 = E_1;
          inv1_2 = F_1;
          inv1_3 = G_1;
          goto inv1_0;

      default:
          abort ();
      }
  inv2_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_4 = inv2_0;
          D_4 = inv2_1;
          A_4 = inv2_2;
          B_4 = inv2_3;
          if (!((!(A_4 <= B_4)) && (C_4 <= D_4)))
              abort ();
          goto main_error;

      case 1:
          D_3 = __VERIFIER_nondet_int ();
          E_3 = __VERIFIER_nondet_int ();
          G_3 = __VERIFIER_nondet_int ();
          B_3 = inv2_0;
          C_3 = inv2_1;
          F_3 = inv2_2;
          A_3 = inv2_3;
          if (!
              ((E_3 == (C_3 + 1)) && (D_3 == (B_3 + -1))
               && (G_3 == (A_3 + 1))))
              abort ();
          inv2_0 = D_3;
          inv2_1 = E_3;
          inv2_2 = F_3;
          inv2_3 = G_3;
          goto inv2_1;

      default:
          abort ();
      }

    // return expression

}

