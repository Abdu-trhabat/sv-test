// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_multipl_17_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_multipl_17_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int LOOPX_0;
    int LOOPY_0;
    int LOOPY_1;
    int A_0;
    int A_1;
    int B_1;
    int C_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int A_3;
    int B_3;
    int C_3;
    int A_4;

    if (((LOOPX_0 <= -1000000000) || (LOOPX_0 >= 1000000000))
        || ((LOOPY_0 <= -1000000000) || (LOOPY_0 >= 1000000000))
        || ((LOOPY_1 <= -1000000000) || (LOOPY_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!(A_0 == 3138))
        abort ();
    LOOPX_0 = A_0;
    goto LOOPX;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  LOOPX:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = LOOPX_0;
          if (!(!(((A_4 % 6 + 6) % 6) == 0)))
              abort ();
          goto main_error;

      case 1:
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          A_1 = LOOPX_0;
          if (!((C_1 == 0) && (B_1 == A_1)))
              abort ();
          LOOPY_0 = B_1;
          LOOPY_1 = C_1;
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          B_2 = LOOPY_0;
          A_2 = LOOPY_1;
          if (!
              ((D_2 == (A_2 + 2))
               && ((A_2 <= 0) || (!(((A_2 % 3 + 3) % 3) == 0)))
               && (C_2 == B_2)))
              abort ();
          LOOPY_0 = C_2;
          LOOPY_1 = D_2;
          goto LOOPY_0;

      default:
          abort ();
      }
  LOOPY_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          A_3 = LOOPY_0;
          B_3 = LOOPY_1;
          if (!
              ((C_3 == (A_3 + B_3)) && (!(B_3 <= 0))
               && (((B_3 % 3 + 3) % 3) == 0)))
              abort ();
          LOOPX_0 = C_3;
          goto LOOPX;

      case 1:
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          B_2 = LOOPY_0;
          A_2 = LOOPY_1;
          if (!
              ((D_2 == (A_2 + 2))
               && ((A_2 <= 0) || (!(((A_2 % 3 + 3) % 3) == 0)))
               && (C_2 == B_2)))
              abort ();
          LOOPY_0 = C_2;
          LOOPY_1 = D_2;
          goto LOOPY_0;

      default:
          abort ();
      }

    // return expression

}

