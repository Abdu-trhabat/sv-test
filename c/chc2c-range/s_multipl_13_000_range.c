// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_multipl_13_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_multipl_13_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int POST1_0;
    int POST1_1;
    int POST1_2;
    int PRE_0;
    int PRE_1;
    int PRE_2;
    int PRE_3;
    int POST2_0;
    int POST2_1;
    int POST2_2;
    int A_0;
    int v_1_0;
    int v_2_0;
    int v_3_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
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
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int A_6;
    int B_6;
    int C_6;

    if (((POST1_0 <= -1000000000) || (POST1_0 >= 1000000000))
        || ((POST1_1 <= -1000000000) || (POST1_1 >= 1000000000))
        || ((POST1_2 <= -1000000000) || (POST1_2 >= 1000000000))
        || ((PRE_0 <= -1000000000) || (PRE_0 >= 1000000000))
        || ((PRE_1 <= -1000000000) || (PRE_1 >= 1000000000))
        || ((PRE_2 <= -1000000000) || (PRE_2 >= 1000000000))
        || ((PRE_3 <= -1000000000) || (PRE_3 >= 1000000000))
        || ((POST2_0 <= -1000000000) || (POST2_0 >= 1000000000))
        || ((POST2_1 <= -1000000000) || (POST2_1 >= 1000000000))
        || ((POST2_2 <= -1000000000) || (POST2_2 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((v_1_0 <= -1000000000) || (v_1_0 >= 1000000000))
        || ((v_2_0 <= -1000000000) || (v_2_0 >= 1000000000))
        || ((v_3_0 <= -1000000000) || (v_3_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((B_6 <= -1000000000) || (B_6 >= 1000000000))
        || ((C_6 <= -1000000000) || (C_6 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((A_0 >= 0) && (v_1_0 == A_0) && (0 == v_2_0) && (0 == v_3_0)))
        abort ();
    PRE_0 = A_0;
    PRE_1 = v_1_0;
    PRE_2 = v_2_0;
    PRE_3 = v_3_0;
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
    F_1 = __VERIFIER_nondet_int ();
    if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
        abort ();
    G_1 = __VERIFIER_nondet_int ();
    if (((G_1 <= -1000000000) || (G_1 >= 1000000000)))
        abort ();
    A_1 = PRE_0;
    E_1 = PRE_1;
    B_1 = PRE_2;
    C_1 = PRE_3;
    if (!
        ((!(A_1 == 0))
         && (((G_1 == C_1) && (F_1 == (B_1 + 1)))
             || ((G_1 == (C_1 + 1)) && (F_1 == B_1))) && (D_1 == (A_1 + -1))))
        abort ();
    PRE_0 = D_1;
    PRE_1 = E_1;
    PRE_2 = F_1;
    PRE_3 = G_1;
    goto PRE_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  POST2_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_6 = POST2_0;
          A_6 = POST2_1;
          B_6 = POST2_2;
          if (!((!(C_6 == 0)) && (B_6 == 0)))
              abort ();
          goto main_error;

      case 1:
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          B_5 = POST2_0;
          D_5 = POST2_1;
          A_5 = POST2_2;
          if (!((!(A_5 == 0)) && (E_5 == (A_5 + -1)) && (C_5 == (B_5 + -1))))
              abort ();
          POST2_0 = C_5;
          POST2_1 = D_5;
          POST2_2 = E_5;
          goto POST2_0;

      default:
          abort ();
      }
  POST1_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          B_3 = POST1_0;
          A_3 = POST1_1;
          E_3 = POST1_2;
          if (!((C_3 == (B_3 + -1)) && (!(A_3 == 0)) && (D_3 == (A_3 + -1))))
              abort ();
          POST1_0 = C_3;
          POST1_1 = D_3;
          POST1_2 = E_3;
          goto POST1_1;

      case 1:
          A_4 = POST1_0;
          B_4 = POST1_1;
          C_4 = POST1_2;
          if (!(B_4 == 0))
              abort ();
          POST2_0 = A_4;
          POST2_1 = B_4;
          POST2_2 = C_4;
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          E_5 = __VERIFIER_nondet_int ();
          if (((E_5 <= -1000000000) || (E_5 >= 1000000000)))
              abort ();
          B_5 = POST2_0;
          D_5 = POST2_1;
          A_5 = POST2_2;
          if (!((!(A_5 == 0)) && (E_5 == (A_5 + -1)) && (C_5 == (B_5 + -1))))
              abort ();
          POST2_0 = C_5;
          POST2_1 = D_5;
          POST2_2 = E_5;
          goto POST2_0;

      default:
          abort ();
      }
  PRE_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = PRE_0;
          B_2 = PRE_1;
          C_2 = PRE_2;
          D_2 = PRE_3;
          if (!(A_2 == 0))
              abort ();
          POST1_0 = B_2;
          POST1_1 = C_2;
          POST1_2 = D_2;
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          B_3 = POST1_0;
          A_3 = POST1_1;
          E_3 = POST1_2;
          if (!((C_3 == (B_3 + -1)) && (!(A_3 == 0)) && (D_3 == (A_3 + -1))))
              abort ();
          POST1_0 = C_3;
          POST1_1 = D_3;
          POST1_2 = E_3;
          goto POST1_1;

      case 1:
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          G_1 = __VERIFIER_nondet_int ();
          if (((G_1 <= -1000000000) || (G_1 >= 1000000000)))
              abort ();
          A_1 = PRE_0;
          E_1 = PRE_1;
          B_1 = PRE_2;
          C_1 = PRE_3;
          if (!
              ((!(A_1 == 0))
               && (((G_1 == C_1) && (F_1 == (B_1 + 1)))
                   || ((G_1 == (C_1 + 1)) && (F_1 == B_1)))
               && (D_1 == (A_1 + -1))))
              abort ();
          PRE_0 = D_1;
          PRE_1 = E_1;
          PRE_2 = F_1;
          PRE_3 = G_1;
          goto PRE_2;

      default:
          abort ();
      }

    // return expression

}

