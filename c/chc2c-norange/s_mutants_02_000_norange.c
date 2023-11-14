// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_mutants_02_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_mutants_02_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int itp_0;
    int itp_1;
    int itp_2;
    int itp_3;
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
    int H_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;



    // main logic
    goto main_init;

  main_init:
    if (!((C_0 == 0) && (B_0 == 0) && (A_0 == 0) && (D_0 == 0)))
        abort ();
    itp_0 = A_0;
    itp_1 = B_0;
    itp_2 = C_0;
    itp_3 = D_0;
    E_1 = __VERIFIER_nondet_int ();
    F_1 = __VERIFIER_nondet_int ();
    G_1 = __VERIFIER_nondet_int ();
    H_1 = __VERIFIER_nondet_int ();
    A_1 = itp_0;
    B_1 = itp_1;
    C_1 = itp_2;
    D_1 = itp_3;
    if (!
        ((G_1 == (C_1 + F_1)) && (F_1 == (B_1 + E_1)) && (E_1 == (A_1 + 1))
         && (H_1 == (D_1 + G_1))))
        abort ();
    itp_0 = E_1;
    itp_1 = F_1;
    itp_2 = G_1;
    itp_3 = H_1;
    goto itp_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  itp_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = itp_0;
          B_2 = itp_1;
          C_2 = itp_2;
          D_2 = itp_3;
          if (!(!(D_2 >= 0)))
              abort ();
          goto main_error;

      case 1:
          E_1 = __VERIFIER_nondet_int ();
          F_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          A_1 = itp_0;
          B_1 = itp_1;
          C_1 = itp_2;
          D_1 = itp_3;
          if (!
              ((G_1 == (C_1 + F_1)) && (F_1 == (B_1 + E_1))
               && (E_1 == (A_1 + 1)) && (H_1 == (D_1 + G_1))))
              abort ();
          itp_0 = E_1;
          itp_1 = F_1;
          itp_2 = G_1;
          itp_3 = H_1;
          goto itp_0;

      default:
          abort ();
      }

    // return expression

}

