// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/002-horn_002.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "002-horn_002_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC_f__0;
    int REC_f__1;
    int REC_f__2;
    int A_6;
    int B_6;
    int v_2_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
    int A_11;
    int B_11;
    int C_11;
    int D_11;
    int E_11;
    int F_11;
    int G_11;



    // main logic
    goto main_init;

  main_init:
    if (!((A_6 == 0) && (v_2_6 == B_6)))
        abort ();
    REC_f__0 = A_6;
    REC_f__1 = B_6;
    REC_f__2 = v_2_6;
    A_7 = __VERIFIER_nondet_int ();
    B_7 = __VERIFIER_nondet_int ();
    D_7 = REC_f__0;
    E_7 = REC_f__1;
    C_7 = REC_f__2;
    if (!((!(A_7 == 0)) && (A_7 == (D_7 + 1)) && (B_7 == (E_7 + -1))))
        abort ();
    REC_f__0 = A_7;
    REC_f__1 = B_7;
    REC_f__2 = C_7;
    goto REC_f__0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC__f:
    goto REC__f;
  REC_f_f:
    goto REC_f_f;
  REC_f__0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_11 = __VERIFIER_nondet_int ();
          C_11 = __VERIFIER_nondet_int ();
          E_11 = __VERIFIER_nondet_int ();
          G_11 = __VERIFIER_nondet_int ();
          D_11 = REC_f__0;
          F_11 = REC_f__1;
          A_11 = REC_f__2;
          if (!
              ((G_11 == 1) && (E_11 == (F_11 + -1)) && (E_11 == B_11)
               && (!(C_11 == 0)) && (C_11 == (D_11 + 1)) && (C_11 == G_11)
               && (!(A_11 == (B_11 + 1))) && (!(G_11 == 0))))
              abort ();
          goto main_error;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          D_7 = REC_f__0;
          E_7 = REC_f__1;
          C_7 = REC_f__2;
          if (!((!(A_7 == 0)) && (A_7 == (D_7 + 1)) && (B_7 == (E_7 + -1))))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          REC_f__2 = C_7;
          goto REC_f__0;

      default:
          abort ();
      }

    // return expression

}

