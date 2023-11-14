// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/011-horn_009.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "011-horn_009_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC_f__0;
    int REC_f__1;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int A_6;
    int v_1_6;
    int A_7;
    int B_7;
    int A_24;
    int B_24;
    int C_24;
    int D_24;



    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          if (!((!(A_6 <= -1)) && (!(A_6 >= 1)) && (v_1_6 == A_6)))
              abort ();
          REC_f__0 = A_6;
          REC_f__1 = v_1_6;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = REC_f__0;
          C_4 = REC_f__1;
          if (!
              ((A_4 == (D_4 + 1)) && (A_4 >= 1) && (C_4 <= -2) && (B_4 == 0)))
              abort ();
          REC_f__0 = A_4;
          REC_f__1 = B_4;
          goto REC_f__1;

      case 1:
          if (!((!(A_7 >= 1)) && (A_7 <= -1) && (B_7 == 0)))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = REC_f__0;
          C_4 = REC_f__1;
          if (!
              ((A_4 == (D_4 + 1)) && (A_4 >= 1) && (C_4 <= -2) && (B_4 == 0)))
              abort ();
          REC_f__0 = A_4;
          REC_f__1 = B_4;
          goto REC_f__1;

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC_f_f:
    goto REC_f_f;
  REC__f:
    goto REC__f;
  REC_f__0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_24 = __VERIFIER_nondet_int ();
          C_24 = __VERIFIER_nondet_int ();
          D_24 = REC_f__0;
          B_24 = REC_f__1;
          if (!
              ((C_24 == (D_24 + 1)) && (C_24 == A_24) && (!(A_24 >= 2))
               && (C_24 >= 1) && (B_24 <= -2) && (!(A_24 <= -1))
               && (!(A_24 == 0))))
              abort ();
          goto main_error;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = REC_f__0;
          C_4 = REC_f__1;
          if (!
              ((A_4 == (D_4 + 1)) && (A_4 >= 1) && (C_4 <= -2) && (B_4 == 0)))
              abort ();
          REC_f__0 = A_4;
          REC_f__1 = B_4;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = REC_f__0;
          C_4 = REC_f__1;
          if (!
              ((A_4 == (D_4 + 1)) && (A_4 >= 1) && (C_4 <= -2) && (B_4 == 0)))
              abort ();
          REC_f__0 = A_4;
          REC_f__1 = B_4;
          goto REC_f__1;

      case 2:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = REC_f__0;
          C_4 = REC_f__1;
          if (!
              ((A_4 == (D_4 + 1)) && (A_4 >= 1) && (C_4 <= -2) && (B_4 == 0)))
              abort ();
          REC_f__0 = A_4;
          REC_f__1 = B_4;
          goto REC_f__1;

      default:
          abort ();
      }
  REC_f__1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          D_5 = REC_f__0;
          C_5 = REC_f__1;
          if (!
              ((C_5 == (B_5 + -1)) && (A_5 >= 1) && (!(C_5 <= -2))
               && (A_5 == (D_5 + 1))))
              abort ();
          REC_f__0 = A_5;
          REC_f__1 = B_5;
          goto REC_f__0;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = REC_f__0;
          C_4 = REC_f__1;
          if (!
              ((A_4 == (D_4 + 1)) && (A_4 >= 1) && (C_4 <= -2) && (B_4 == 0)))
              abort ();
          REC_f__0 = A_4;
          REC_f__1 = B_4;
          goto REC_f__1;

      default:
          abort ();
      }

    // return expression

}

