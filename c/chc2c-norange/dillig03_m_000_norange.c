// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/dillig03_m_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "dillig03_m_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int itp_0;
    int itp_1;
    int inv_0;
    int inv_1;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    int C_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int A_3;
    int B_3;
    int A_4;
    int B_4;



    // main logic
    goto main_init;

  main_init:
    if (!((A_0 == 1) && (B_0 == 1)))
        abort ();
    inv_0 = A_0;
    inv_1 = B_0;
    goto inv;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = inv_0;
          B_4 = inv_1;
          if (!(!(B_4 >= 1)))
              abort ();
          goto main_error;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          A_1 = inv_0;
          C_1 = inv_1;
          if (!(B_1 == (A_1 + 1)))
              abort ();
          itp_0 = B_1;
          itp_1 = C_1;
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          A_2 = itp_0;
          B_2 = itp_1;
          if (!(((C_2 == A_2) || (C_2 == (A_2 + 1))) && (D_2 == (B_2 + C_2))))
              abort ();
          itp_0 = C_2;
          itp_1 = D_2;
          goto itp_0;

      default:
          abort ();
      }
  itp_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = itp_0;
          B_3 = itp_1;
          if (!1)
              abort ();
          inv_0 = A_3;
          inv_1 = B_3;
          goto inv;

      case 1:
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          A_2 = itp_0;
          B_2 = itp_1;
          if (!(((C_2 == A_2) || (C_2 == (A_2 + 1))) && (D_2 == (B_2 + C_2))))
              abort ();
          itp_0 = C_2;
          itp_1 = D_2;
          goto itp_0;

      default:
          abort ();
      }

    // return expression

}

