// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/gj2007_m_2_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "gj2007_m_2_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv5_0;
    int inv5_1;
    int inv5_2;
    int inv3_0;
    int inv3_1;
    int inv3_2;
    int inv_0;
    int inv_1;
    int inv_2;
    int inv4_0;
    int inv4_1;
    int inv4_2;
    int inv2_0;
    int inv2_1;
    int inv2_2;
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
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int A_10;
    int B_10;
    int C_10;



    // main logic
    goto main_init;

  main_init:
    if (!((A_0 == 0) && (!(C_0 <= 0)) && (B_0 == (2 * C_0))))
        abort ();
    inv_0 = A_0;
    inv_1 = B_0;
    inv_2 = C_0;
    C_1 = __VERIFIER_nondet_int ();
    D_1 = __VERIFIER_nondet_int ();
    A_1 = inv_0;
    B_1 = inv_1;
    E_1 = inv_2;
    if (!
        ((C_1 == (A_1 + 1)) && (!(E_1 <= A_1))
         && (D_1 == (((2 * E_1) <= A_1) ? (B_1 + 1) : B_1))))
        abort ();
    inv_0 = C_1;
    inv_1 = D_1;
    inv_2 = E_1;
    goto inv_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv4_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_8 = __VERIFIER_nondet_int ();
          B_8 = inv4_0;
          C_8 = inv4_1;
          D_8 = inv4_2;
          if (!(A_8 >= (4 * D_8)))
              abort ();
          inv5_0 = B_8;
          inv5_1 = C_8;
          inv5_2 = D_8;
          C_9 = __VERIFIER_nondet_int ();
          D_9 = __VERIFIER_nondet_int ();
          A_9 = inv5_0;
          B_9 = inv5_1;
          E_9 = inv5_2;
          if (!
              ((C_9 == (A_9 + 1)) && (!((5 * E_9) <= A_9))
               && (D_9 == (((2 * E_9) <= A_9) ? (B_9 + 1) : B_9))))
              abort ();
          inv5_0 = C_9;
          inv5_1 = D_9;
          inv5_2 = E_9;
          goto inv5_3;

      case 1:
          C_7 = __VERIFIER_nondet_int ();
          D_7 = __VERIFIER_nondet_int ();
          A_7 = inv4_0;
          B_7 = inv4_1;
          E_7 = inv4_2;
          if (!
              ((C_7 == (A_7 + 1)) && (!((4 * E_7) <= A_7))
               && (D_7 == (((2 * E_7) <= A_7) ? (B_7 + 1) : B_7))))
              abort ();
          inv4_0 = C_7;
          inv4_1 = D_7;
          inv4_2 = E_7;
          goto inv4_0;

      default:
          abort ();
      }
  inv_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          A_1 = inv_0;
          B_1 = inv_1;
          E_1 = inv_2;
          if (!
              ((C_1 == (A_1 + 1)) && (!(E_1 <= A_1))
               && (D_1 == (((2 * E_1) <= A_1) ? (B_1 + 1) : B_1))))
              abort ();
          inv_0 = C_1;
          inv_1 = D_1;
          inv_2 = E_1;
          goto inv_1;

      case 1:
          A_2 = inv_0;
          B_2 = inv_1;
          C_2 = inv_2;
          if (!(A_2 >= C_2))
              abort ();
          inv2_0 = A_2;
          inv2_1 = B_2;
          inv2_2 = C_2;
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          A_3 = inv2_0;
          B_3 = inv2_1;
          E_3 = inv2_2;
          if (!
              ((C_3 == (A_3 + 1)) && (!((2 * E_3) <= A_3))
               && (D_3 == (((2 * E_3) <= A_3) ? (B_3 + 1) : B_3))))
              abort ();
          inv2_0 = C_3;
          inv2_1 = D_3;
          inv2_2 = E_3;
          goto inv2_2;

      default:
          abort ();
      }
  inv2_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = inv2_0;
          C_4 = inv2_1;
          D_4 = inv2_2;
          if (!(A_4 >= (2 * D_4)))
              abort ();
          inv3_0 = B_4;
          inv3_1 = C_4;
          inv3_2 = D_4;
          C_5 = __VERIFIER_nondet_int ();
          D_5 = __VERIFIER_nondet_int ();
          A_5 = inv3_0;
          B_5 = inv3_1;
          E_5 = inv3_2;
          if (!
              ((C_5 == (A_5 + 1)) && (!((3 * E_5) <= A_5))
               && (D_5 == (((2 * E_5) <= A_5) ? (B_5 + 1) : B_5))))
              abort ();
          inv3_0 = C_5;
          inv3_1 = D_5;
          inv3_2 = E_5;
          goto inv3_4;

      case 1:
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          A_3 = inv2_0;
          B_3 = inv2_1;
          E_3 = inv2_2;
          if (!
              ((C_3 == (A_3 + 1)) && (!((2 * E_3) <= A_3))
               && (D_3 == (((2 * E_3) <= A_3) ? (B_3 + 1) : B_3))))
              abort ();
          inv2_0 = C_3;
          inv2_1 = D_3;
          inv2_2 = E_3;
          goto inv2_2;

      default:
          abort ();
      }
  inv5_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_10 = inv5_0;
          B_10 = inv5_1;
          C_10 = inv5_2;
          if (!((A_10 >= (5 * C_10)) && (!(B_10 == (5 * C_10)))))
              abort ();
          goto main_error;

      case 1:
          C_9 = __VERIFIER_nondet_int ();
          D_9 = __VERIFIER_nondet_int ();
          A_9 = inv5_0;
          B_9 = inv5_1;
          E_9 = inv5_2;
          if (!
              ((C_9 == (A_9 + 1)) && (!((5 * E_9) <= A_9))
               && (D_9 == (((2 * E_9) <= A_9) ? (B_9 + 1) : B_9))))
              abort ();
          inv5_0 = C_9;
          inv5_1 = D_9;
          inv5_2 = E_9;
          goto inv5_3;

      default:
          abort ();
      }
  inv3_4:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_5 = __VERIFIER_nondet_int ();
          D_5 = __VERIFIER_nondet_int ();
          A_5 = inv3_0;
          B_5 = inv3_1;
          E_5 = inv3_2;
          if (!
              ((C_5 == (A_5 + 1)) && (!((3 * E_5) <= A_5))
               && (D_5 == (((2 * E_5) <= A_5) ? (B_5 + 1) : B_5))))
              abort ();
          inv3_0 = C_5;
          inv3_1 = D_5;
          inv3_2 = E_5;
          goto inv3_4;

      case 1:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = inv3_0;
          C_6 = inv3_1;
          D_6 = inv3_2;
          if (!(A_6 >= (3 * D_6)))
              abort ();
          inv4_0 = B_6;
          inv4_1 = C_6;
          inv4_2 = D_6;
          C_7 = __VERIFIER_nondet_int ();
          D_7 = __VERIFIER_nondet_int ();
          A_7 = inv4_0;
          B_7 = inv4_1;
          E_7 = inv4_2;
          if (!
              ((C_7 == (A_7 + 1)) && (!((4 * E_7) <= A_7))
               && (D_7 == (((2 * E_7) <= A_7) ? (B_7 + 1) : B_7))))
              abort ();
          inv4_0 = C_7;
          inv4_1 = D_7;
          inv4_2 = E_7;
          goto inv4_0;

      default:
          abort ();
      }

    // return expression

}

