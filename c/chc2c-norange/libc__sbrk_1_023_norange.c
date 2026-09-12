// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/libc__sbrk_1_023.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "libc__sbrk_1_023_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV_MAIN_0_0;
    int INV_MAIN_0_1;
    int INV_MAIN_0_2;
    int INV_MAIN_0_3;
    int INV_MAIN_0_4;
    int INV_MAIN_0_5;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;



    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          if (!
              ((!(A_0 == 0)) && ((!(E_0 == B_0)) || (F_0 == C_0))
               && (D_0 == A_0)))
              abort ();
          INV_MAIN_0_0 = A_0;
          INV_MAIN_0_1 = B_0;
          INV_MAIN_0_2 = C_0;
          INV_MAIN_0_3 = D_0;
          INV_MAIN_0_4 = E_0;
          INV_MAIN_0_5 = F_0;
          A_2 = INV_MAIN_0_0;
          B_2 = INV_MAIN_0_1;
          C_2 = INV_MAIN_0_2;
          D_2 = INV_MAIN_0_3;
          E_2 = INV_MAIN_0_4;
          F_2 = INV_MAIN_0_5;
          if (!
              ((B_2 == -9) && (!((F_2 + D_2 + (-1 * C_2) + (-1 * A_2)) >= 0))
               && (!(F_2 >= C_2)) && (!(A_2 >= 1)) && (E_2 == -9)))
              abort ();
          goto main_error;

      case 1:
          if (!
              ((!(A_1 == 0)) && ((!(E_1 == -9)) || (!(F_1 == 0)))
               && ((!(E_1 == B_1)) || (F_1 == C_1)) && ((!(B_1 == -9))
                                                        ||
                                                        (((!(E_1 == -9))
                                                          || (F_1 == C_1))
                                                         && (!(C_1 == 0))))
               && (D_1 == A_1)))
              abort ();
          INV_MAIN_0_0 = A_1;
          INV_MAIN_0_1 = B_1;
          INV_MAIN_0_2 = C_1;
          INV_MAIN_0_3 = D_1;
          INV_MAIN_0_4 = E_1;
          INV_MAIN_0_5 = F_1;
          A_2 = INV_MAIN_0_0;
          B_2 = INV_MAIN_0_1;
          C_2 = INV_MAIN_0_2;
          D_2 = INV_MAIN_0_3;
          E_2 = INV_MAIN_0_4;
          F_2 = INV_MAIN_0_5;
          if (!
              ((B_2 == -9) && (!((F_2 + D_2 + (-1 * C_2) + (-1 * A_2)) >= 0))
               && (!(F_2 >= C_2)) && (!(A_2 >= 1)) && (E_2 == -9)))
              abort ();
          goto main_error;

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;

    // return expression

}

