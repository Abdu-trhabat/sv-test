// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/phases_m_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "phases_m_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv2_0;
    int inv2_1;
    int inv2_2;
    int inv1_0;
    int inv1_1;
    int inv1_2;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int A_2;
    int B_2;
    int C_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int A_4;
    int B_4;
    int C_4;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((D_0 == (2 * A_0)) && (C_0 == 0) && (!(E_0 <= D_0)) && (!(D_0 <= 0))
         && (E_0 == ((2 * B_0) + 1))))
        abort ();
    inv1_0 = C_0;
    inv1_1 = D_0;
    inv1_2 = E_0;
    B_1 = __VERIFIER_nondet_int ();
    A_1 = inv1_0;
    C_1 = inv1_1;
    D_1 = inv1_2;
    if (!((!(C_1 <= A_1)) && (B_1 == ((C_1 <= A_1) ? (A_1 + 2) : (A_1 + 1)))))
        abort ();
    inv1_0 = B_1;
    inv1_1 = C_1;
    inv1_2 = D_1;
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
          if (!(B_2 <= A_2))
              abort ();
          inv2_0 = A_2;
          inv2_1 = B_2;
          inv2_2 = C_2;
          B_3 = __VERIFIER_nondet_int ();
          A_3 = inv2_0;
          C_3 = inv2_1;
          D_3 = inv2_2;
          if (!
              ((!(D_3 <= A_3))
               && (B_3 == ((C_3 <= A_3) ? (A_3 + 2) : (A_3 + 1)))))
              abort ();
          inv2_0 = B_3;
          inv2_1 = C_3;
          inv2_2 = D_3;
          goto inv2_1;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          A_1 = inv1_0;
          C_1 = inv1_1;
          D_1 = inv1_2;
          if (!
              ((!(C_1 <= A_1))
               && (B_1 == ((C_1 <= A_1) ? (A_1 + 2) : (A_1 + 1)))))
              abort ();
          inv1_0 = B_1;
          inv1_1 = C_1;
          inv1_2 = D_1;
          goto inv1_0;

      default:
          abort ();
      }
  inv2_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_4 = inv2_0;
          A_4 = inv2_1;
          B_4 = inv2_2;
          if (!((C_4 >= B_4) && (!(((C_4 % 2 + 2) % 2) == 0))))
              abort ();
          goto main_error;

      case 1:
          B_3 = __VERIFIER_nondet_int ();
          A_3 = inv2_0;
          C_3 = inv2_1;
          D_3 = inv2_2;
          if (!
              ((!(D_3 <= A_3))
               && (B_3 == ((C_3 <= A_3) ? (A_3 + 2) : (A_3 + 1)))))
              abort ();
          inv2_0 = B_3;
          inv2_1 = C_3;
          inv2_2 = D_3;
          goto inv2_1;

      default:
          abort ();
      }

    // return expression

}

