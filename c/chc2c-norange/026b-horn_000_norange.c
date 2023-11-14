// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/026b-horn_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "026b-horn_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV1_0;
    int INV1_1;
    int INV1_2;
    int INV1_3;
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
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int A_3;
    int B_3;
    int v_2_3;
    int v_3_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;



    // main logic
    goto main_init;

  main_init:
    if (!((B_3 <= 10) && (A_3 == B_3) && (v_2_3 == A_3) && (v_3_3 == B_3)))
        abort ();
    INV1_0 = A_3;
    INV1_1 = B_3;
    INV1_2 = v_2_3;
    INV1_3 = v_3_3;
    B_0 = __VERIFIER_nondet_int ();
    A_0 = INV1_0;
    E_0 = INV1_1;
    C_0 = INV1_2;
    D_0 = INV1_3;
    if (!
        ((C_0 == D_0) && (E_0 <= 9) && (D_0 <= 10) && (!(A_0 <= 10))
         && (E_0 == (B_0 + -1))))
        abort ();
    INV1_0 = A_0;
    INV1_1 = B_0;
    INV1_2 = C_0;
    INV1_3 = D_0;
    goto INV1_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV1_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_4 = INV1_0;
          B_4 = INV1_1;
          C_4 = INV1_2;
          D_4 = INV1_3;
          if (!
              ((!(A_4 == (B_4 + 1))) && (D_4 <= 10) && (!(B_4 <= 9))
               && (!(A_4 <= 10)) && (C_4 == D_4)))
              abort ();
          goto main_error;

      case 1:
          B_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          E_0 = INV1_1;
          C_0 = INV1_2;
          D_0 = INV1_3;
          if (!
              ((C_0 == D_0) && (E_0 <= 9) && (D_0 <= 10) && (!(A_0 <= 10))
               && (E_0 == (B_0 + -1))))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          B_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          E_0 = INV1_1;
          C_0 = INV1_2;
          D_0 = INV1_3;
          if (!
              ((C_0 == D_0) && (E_0 <= 9) && (D_0 <= 10) && (!(A_0 <= 10))
               && (E_0 == (B_0 + -1))))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          goto INV1_2;

      case 2:
          A_2 = __VERIFIER_nondet_int ();
          E_2 = INV1_0;
          B_2 = INV1_1;
          C_2 = INV1_2;
          D_2 = INV1_3;
          if (!
              ((C_2 == D_2) && (E_2 <= 10) && (D_2 <= 10) && (!(B_2 <= 9))
               && (E_2 == (A_2 + -1))))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          B_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          E_0 = INV1_1;
          C_0 = INV1_2;
          D_0 = INV1_3;
          if (!
              ((C_0 == D_0) && (E_0 <= 9) && (D_0 <= 10) && (!(A_0 <= 10))
               && (E_0 == (B_0 + -1))))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          goto INV1_2;

      case 3:
          B_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          E_0 = INV1_1;
          C_0 = INV1_2;
          D_0 = INV1_3;
          if (!
              ((C_0 == D_0) && (E_0 <= 9) && (D_0 <= 10) && (!(A_0 <= 10))
               && (E_0 == (B_0 + -1))))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          E_1 = INV1_0;
          F_1 = INV1_1;
          C_1 = INV1_2;
          D_1 = INV1_3;
          if (!
              ((E_1 == (A_1 + -1)) && (C_1 == D_1) && (F_1 <= 9)
               && (E_1 <= 10) && (D_1 <= 10) && (F_1 == (B_1 + -1))))
              abort ();
          INV1_0 = A_1;
          INV1_1 = B_1;
          INV1_2 = C_1;
          INV1_3 = D_1;
          goto INV1_0;

      case 1:
          B_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          E_0 = INV1_1;
          C_0 = INV1_2;
          D_0 = INV1_3;
          if (!
              ((C_0 == D_0) && (E_0 <= 9) && (D_0 <= 10) && (!(A_0 <= 10))
               && (E_0 == (B_0 + -1))))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          goto INV1_2;

      default:
          abort ();
      }
  INV1_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          E_2 = INV1_0;
          B_2 = INV1_1;
          C_2 = INV1_2;
          D_2 = INV1_3;
          if (!
              ((C_2 == D_2) && (E_2 <= 10) && (D_2 <= 10) && (!(B_2 <= 9))
               && (E_2 == (A_2 + -1))))
              abort ();
          INV1_0 = A_2;
          INV1_1 = B_2;
          INV1_2 = C_2;
          INV1_3 = D_2;
          goto INV1_1;

      case 1:
          B_0 = __VERIFIER_nondet_int ();
          A_0 = INV1_0;
          E_0 = INV1_1;
          C_0 = INV1_2;
          D_0 = INV1_3;
          if (!
              ((C_0 == D_0) && (E_0 <= 9) && (D_0 <= 10) && (!(A_0 <= 10))
               && (E_0 == (B_0 + -1))))
              abort ();
          INV1_0 = A_0;
          INV1_1 = B_0;
          INV1_2 = C_0;
          INV1_3 = D_0;
          goto INV1_2;

      default:
          abort ();
      }

    // return expression

}

