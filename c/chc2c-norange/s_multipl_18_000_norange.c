// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_multipl_18_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_multipl_18_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int PRE_0;
    int PRE_1;
    int PRE_2;
    int POST_0;
    int POST_1;
    int POST_2;
    int A_0;
    int v_1_0;
    int v_2_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
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
    if (!((0 == v_1_0) && (0 == v_2_0)))
        abort ();
    PRE_0 = v_1_0;
    PRE_1 = v_2_0;
    PRE_2 = A_0;
    C_1 = __VERIFIER_nondet_int ();
    D_1 = __VERIFIER_nondet_int ();
    B_1 = PRE_0;
    A_1 = PRE_1;
    E_1 = PRE_2;
    if (!
        (((!(0 <= A_1)) && (C_1 == (B_1 + E_1))
          && (D_1 == (A_1 + (-1 * E_1)))) || ((A_1 >= 0)
                                              && (C_1 == (B_1 + (-1 * E_1)))
                                              && (D_1 == (A_1 + E_1)))))
        abort ();
    PRE_0 = C_1;
    PRE_1 = D_1;
    PRE_2 = E_1;
    goto PRE_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  POST_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_4 = POST_0;
          B_4 = POST_1;
          A_4 = POST_2;
          if (!((C_4 == B_4) && (!(C_4 == 0))))
              abort ();
          goto main_error;

      case 1:
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          A_3 = POST_0;
          B_3 = POST_1;
          E_3 = POST_2;
          if (!
              ((((!(0 <= B_3)) && (C_3 == (B_3 + (-1 * E_3)))
                 && (D_3 == (A_3 + E_3))) || ((B_3 >= 0)
                                              && (C_3 == (B_3 + E_3))
                                              && (D_3 == (A_3 + (-1 * E_3)))))
               && (!(A_3 == B_3))))
              abort ();
          POST_0 = C_3;
          POST_1 = D_3;
          POST_2 = E_3;
          goto POST_0;

      default:
          abort ();
      }
  PRE_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          B_1 = PRE_0;
          A_1 = PRE_1;
          E_1 = PRE_2;
          if (!
              (((!(0 <= A_1)) && (C_1 == (B_1 + E_1))
                && (D_1 == (A_1 + (-1 * E_1)))) || ((A_1 >= 0)
                                                    && (C_1 ==
                                                        (B_1 + (-1 * E_1)))
                                                    && (D_1 == (A_1 + E_1)))))
              abort ();
          PRE_0 = C_1;
          PRE_1 = D_1;
          PRE_2 = E_1;
          goto PRE_1;

      case 1:
          D_2 = __VERIFIER_nondet_int ();
          B_2 = PRE_0;
          C_2 = PRE_1;
          A_2 = PRE_2;
          if (!((!(C_2 <= B_2)) && (D_2 == (-1 * A_2))))
              abort ();
          POST_0 = B_2;
          POST_1 = C_2;
          POST_2 = D_2;
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          A_3 = POST_0;
          B_3 = POST_1;
          E_3 = POST_2;
          if (!
              ((((!(0 <= B_3)) && (C_3 == (B_3 + (-1 * E_3)))
                 && (D_3 == (A_3 + E_3))) || ((B_3 >= 0)
                                              && (C_3 == (B_3 + E_3))
                                              && (D_3 == (A_3 + (-1 * E_3)))))
               && (!(A_3 == B_3))))
              abort ();
          POST_0 = C_3;
          POST_1 = D_3;
          POST_2 = E_3;
          goto POST_0;

      default:
          abort ();
      }

    // return expression

}

