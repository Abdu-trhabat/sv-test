// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_multipl_23_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_multipl_23_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int SAD_0;
    int SAD_1;
    int SAD_2;
    int FUN_0;
    int FUN_1;
    int FUN_2;
    int A_0;
    int B_0;
    int C_0;
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
    int A_4;
    int B_4;
    int C_4;



    // main logic
    goto main_init;

  main_init:
    if (!((A_0 == 0) && (!(C_0 <= 0)) && (B_0 == 0)))
        abort ();
    FUN_0 = A_0;
    FUN_1 = B_0;
    FUN_2 = C_0;
    C_1 = __VERIFIER_nondet_int ();
    D_1 = __VERIFIER_nondet_int ();
    A_1 = FUN_0;
    B_1 = FUN_1;
    E_1 = FUN_2;
    if (!((C_1 == (A_1 + 1)) && (!(E_1 <= B_1)) && (D_1 == (B_1 + 2))))
        abort ();
    FUN_0 = C_1;
    FUN_1 = D_1;
    FUN_2 = E_1;
    goto FUN_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  SAD_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_4 = SAD_0;
          A_4 = SAD_1;
          C_4 = SAD_2;
          if (!((A_4 >= C_4) && (!(B_4 == C_4))))
              abort ();
          goto main_error;

      case 1:
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          A_3 = SAD_0;
          B_3 = SAD_1;
          E_3 = SAD_2;
          if (!((C_3 == (A_3 + 1)) && (!(E_3 <= B_3)) && (D_3 == (B_3 + 2))))
              abort ();
          SAD_0 = C_3;
          SAD_1 = D_3;
          SAD_2 = E_3;
          goto SAD_0;

      default:
          abort ();
      }
  FUN_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          B_2 = FUN_0;
          A_2 = FUN_1;
          E_2 = FUN_2;
          if (!((C_2 == B_2) && (A_2 >= E_2) && (D_2 == 1)))
              abort ();
          SAD_0 = C_2;
          SAD_1 = D_2;
          SAD_2 = E_2;
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          A_3 = SAD_0;
          B_3 = SAD_1;
          E_3 = SAD_2;
          if (!((C_3 == (A_3 + 1)) && (!(E_3 <= B_3)) && (D_3 == (B_3 + 2))))
              abort ();
          SAD_0 = C_3;
          SAD_1 = D_3;
          SAD_2 = E_3;
          goto SAD_0;

      case 1:
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          A_1 = FUN_0;
          B_1 = FUN_1;
          E_1 = FUN_2;
          if (!((C_1 == (A_1 + 1)) && (!(E_1 <= B_1)) && (D_1 == (B_1 + 2))))
              abort ();
          FUN_0 = C_1;
          FUN_1 = D_1;
          FUN_2 = E_1;
          goto FUN_1;

      default:
          abort ();
      }

    // return expression

}

