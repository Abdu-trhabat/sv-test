// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_multipl_11_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_multipl_11_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int LOOPZ_0;
    int LOOPZ_1;
    int LOOPZ_2;
    int LOOPY_0;
    int LOOPY_1;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int A_2;
    int B_2;
    int v_2_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int A_4;
    int B_4;
    int C_4;

    if (((LOOPZ_0 <= -1000000000) || (LOOPZ_0 >= 1000000000))
        || ((LOOPZ_1 <= -1000000000) || (LOOPZ_1 >= 1000000000))
        || ((LOOPZ_2 <= -1000000000) || (LOOPZ_2 >= 1000000000))
        || ((LOOPY_0 <= -1000000000) || (LOOPY_0 >= 1000000000))
        || ((LOOPY_1 <= -1000000000) || (LOOPY_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((v_2_2 <= -1000000000) || (v_2_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!(!(B_0 <= A_0)))
        abort ();
    LOOPY_0 = A_0;
    LOOPY_1 = B_0;
    C_1 = __VERIFIER_nondet_int ();
    if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
        abort ();
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
    A_1 = LOOPY_0;
    B_1 = LOOPY_1;
    if (!((C_1 == (A_1 + 1000)) && (!(B_1 <= A_1)) && (D_1 == B_1)))
        abort ();
    LOOPY_0 = C_1;
    LOOPY_1 = D_1;
    goto LOOPY_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  LOOPY_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          v_2_2 = __VERIFIER_nondet_int ();
          if (((v_2_2 <= -1000000000) || (v_2_2 >= 1000000000)))
              abort ();
          A_2 = LOOPY_0;
          B_2 = LOOPY_1;
          if (!((B_2 <= A_2) && (0 == v_2_2)))
              abort ();
          LOOPZ_0 = v_2_2;
          LOOPZ_1 = A_2;
          LOOPZ_2 = B_2;
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          E_3 = __VERIFIER_nondet_int ();
          if (((E_3 <= -1000000000) || (E_3 >= 1000000000)))
              abort ();
          F_3 = __VERIFIER_nondet_int ();
          if (((F_3 <= -1000000000) || (F_3 >= 1000000000)))
              abort ();
          A_3 = LOOPZ_0;
          B_3 = LOOPZ_1;
          C_3 = LOOPZ_2;
          if (!
              ((F_3 == (C_3 + 2)) && (E_3 == B_3) && (!(B_3 <= C_3))
               && (D_3 == (A_3 + 1))))
              abort ();
          LOOPZ_0 = D_3;
          LOOPZ_1 = E_3;
          LOOPZ_2 = F_3;
          goto LOOPZ_1;

      case 1:
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          A_1 = LOOPY_0;
          B_1 = LOOPY_1;
          if (!((C_1 == (A_1 + 1000)) && (!(B_1 <= A_1)) && (D_1 == B_1)))
              abort ();
          LOOPY_0 = C_1;
          LOOPY_1 = D_1;
          goto LOOPY_0;

      default:
          abort ();
      }
  LOOPZ_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_4 = LOOPZ_0;
          A_4 = LOOPZ_1;
          B_4 = LOOPZ_2;
          if (!((!(C_4 <= 500)) && (A_4 <= B_4)))
              abort ();
          goto main_error;

      case 1:
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          E_3 = __VERIFIER_nondet_int ();
          if (((E_3 <= -1000000000) || (E_3 >= 1000000000)))
              abort ();
          F_3 = __VERIFIER_nondet_int ();
          if (((F_3 <= -1000000000) || (F_3 >= 1000000000)))
              abort ();
          A_3 = LOOPZ_0;
          B_3 = LOOPZ_1;
          C_3 = LOOPZ_2;
          if (!
              ((F_3 == (C_3 + 2)) && (E_3 == B_3) && (!(B_3 <= C_3))
               && (D_3 == (A_3 + 1))))
              abort ();
          LOOPZ_0 = D_3;
          LOOPZ_1 = E_3;
          LOOPZ_2 = F_3;
          goto LOOPZ_1;

      default:
          abort ();
      }

    // return expression

}

