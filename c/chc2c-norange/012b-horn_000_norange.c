// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/012b-horn_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "012b-horn_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC_f__0;
    int REC_f__1;
    int A_4;
    int v_1_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int A_8;
    int B_8;
    int C_8;
    int D_8;



    // main logic
    goto main_init;

  main_init:
    if (!((A_4 <= 1) && (v_1_4 == A_4)))
        abort ();
    REC_f__0 = A_4;
    REC_f__1 = v_1_4;
    A_5 = __VERIFIER_nondet_int ();
    B_5 = __VERIFIER_nondet_int ();
    D_5 = REC_f__0;
    C_5 = REC_f__1;
    if (!((A_5 == (D_5 + 1)) && (!(A_5 <= 1)) && ((A_5 + C_5) == B_5)))
        abort ();
    REC_f__0 = A_5;
    REC_f__1 = B_5;
    goto REC_f__0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC_f_f:
    goto REC_f_f;
  REC__f:
    goto REC__f;
  REC_f__0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_8 = __VERIFIER_nondet_int ();
          C_8 = __VERIFIER_nondet_int ();
          D_8 = REC_f__0;
          B_8 = REC_f__1;
          if (!
              ((A_8 == (D_8 + 1)) && (A_8 == C_8) && (C_8 <= 1)
               && (!(A_8 <= 1)) && (!((A_8 + B_8) == C_8))))
              abort ();
          goto main_error;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          D_5 = REC_f__0;
          C_5 = REC_f__1;
          if (!((A_5 == (D_5 + 1)) && (!(A_5 <= 1)) && ((A_5 + C_5) == B_5)))
              abort ();
          REC_f__0 = A_5;
          REC_f__1 = B_5;
          goto REC_f__0;

      default:
          abort ();
      }

    // return expression

}

