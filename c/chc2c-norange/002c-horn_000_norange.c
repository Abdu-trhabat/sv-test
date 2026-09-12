// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/002c-horn_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "002c-horn_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC_f__0;
    int REC_f__1;
    int REC_f__2;
    int A_8;
    int B_8;
    int v_2_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int A_14;
    int B_14;
    int C_14;
    int D_14;
    int E_14;
    int F_14;
    int G_14;



    // main logic
    goto main_init;

  main_init:
    if (!((A_8 == 0) && (v_2_8 == B_8)))
        abort ();
    REC_f__0 = A_8;
    REC_f__1 = B_8;
    REC_f__2 = v_2_8;
    A_9 = __VERIFIER_nondet_int ();
    B_9 = __VERIFIER_nondet_int ();
    D_9 = REC_f__0;
    E_9 = REC_f__1;
    C_9 = REC_f__2;
    if (!((!(A_9 == 0)) && (A_9 == (D_9 + 1)) && (B_9 == (E_9 + -1))))
        abort ();
    REC_f__0 = A_9;
    REC_f__1 = B_9;
    REC_f__2 = C_9;
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
          B_14 = __VERIFIER_nondet_int ();
          C_14 = __VERIFIER_nondet_int ();
          E_14 = __VERIFIER_nondet_int ();
          G_14 = __VERIFIER_nondet_int ();
          D_14 = REC_f__0;
          F_14 = REC_f__1;
          A_14 = REC_f__2;
          if (!
              ((E_14 == (F_14 + -1)) && (E_14 == B_14) && (!(C_14 == 0))
               && (C_14 == (D_14 + 1)) && (C_14 == G_14) && (!(A_14 == B_14))
               && (G_14 == 0)))
              abort ();
          goto main_error;

      case 1:
          A_9 = __VERIFIER_nondet_int ();
          B_9 = __VERIFIER_nondet_int ();
          D_9 = REC_f__0;
          E_9 = REC_f__1;
          C_9 = REC_f__2;
          if (!((!(A_9 == 0)) && (A_9 == (D_9 + 1)) && (B_9 == (E_9 + -1))))
              abort ();
          REC_f__0 = A_9;
          REC_f__1 = B_9;
          REC_f__2 = C_9;
          goto REC_f__0;

      default:
          abort ();
      }

    // return expression

}

