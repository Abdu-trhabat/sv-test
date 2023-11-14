// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/002c-horn_004.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "002c-horn_004_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC__f_0;
    int REC__f_1;
    int REC__f_2;
    int A_10;
    int B_10;
    int v_2_10;
    int A_11;
    int B_11;
    int v_2_11;
    int A_12;
    int B_12;
    int C_12;
    int D_12;
    int E_12;
    int A_13;
    int B_13;
    int C_13;
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
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          if (!((A_10 == 0) && (v_2_10 == B_10)))
              abort ();
          REC__f_0 = A_10;
          REC__f_1 = B_10;
          REC__f_2 = v_2_10;
          A_12 = __VERIFIER_nondet_int ();
          B_12 = __VERIFIER_nondet_int ();
          D_12 = REC__f_0;
          E_12 = REC__f_1;
          C_12 = REC__f_2;
          if (!
              ((!(A_12 == 2)) && (!(A_12 == 0)) && (!(A_12 == 1))
               && (A_12 == (D_12 + 1)) && (B_12 == (E_12 + -1))))
              abort ();
          REC__f_0 = A_12;
          REC__f_1 = B_12;
          REC__f_2 = C_12;
          goto REC__f_0;

      case 1:
          if (!
              ((!(A_11 == 0)) && (!(A_11 == 1)) && (A_11 == 2)
               && (v_2_11 == B_11)))
              abort ();
          REC__f_0 = A_11;
          REC__f_1 = B_11;
          REC__f_2 = v_2_11;
          A_12 = __VERIFIER_nondet_int ();
          B_12 = __VERIFIER_nondet_int ();
          D_12 = REC__f_0;
          E_12 = REC__f_1;
          C_12 = REC__f_2;
          if (!
              ((!(A_12 == 2)) && (!(A_12 == 0)) && (!(A_12 == 1))
               && (A_12 == (D_12 + 1)) && (B_12 == (E_12 + -1))))
              abort ();
          REC__f_0 = A_12;
          REC__f_1 = B_12;
          REC__f_2 = C_12;
          goto REC__f_0;

      case 2:
          if (!((!(A_13 == 0)) && (A_13 == 1) && (B_13 == (C_13 + -1))))
              abort ();
          REC__f_0 = A_13;
          REC__f_1 = B_13;
          REC__f_2 = C_13;
          A_12 = __VERIFIER_nondet_int ();
          B_12 = __VERIFIER_nondet_int ();
          D_12 = REC__f_0;
          E_12 = REC__f_1;
          C_12 = REC__f_2;
          if (!
              ((!(A_12 == 2)) && (!(A_12 == 0)) && (!(A_12 == 1))
               && (A_12 == (D_12 + 1)) && (B_12 == (E_12 + -1))))
              abort ();
          REC__f_0 = A_12;
          REC__f_1 = B_12;
          REC__f_2 = C_12;
          goto REC__f_0;

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC_f_:
    goto REC_f_;
  REC_f_f:
    goto REC_f_f;
  REC__f_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_14 = __VERIFIER_nondet_int ();
          C_14 = __VERIFIER_nondet_int ();
          E_14 = __VERIFIER_nondet_int ();
          G_14 = __VERIFIER_nondet_int ();
          D_14 = REC__f_0;
          F_14 = REC__f_1;
          B_14 = REC__f_2;
          if (!
              ((G_14 == C_14) && (E_14 == (F_14 + -1)) && (!(C_14 == 2))
               && (!(C_14 == 0)) && (!(C_14 == 1)) && (C_14 == (D_14 + 1))
               && (A_14 == E_14) && (!(A_14 == B_14)) && (G_14 == 0)))
              abort ();
          goto main_error;

      case 1:
          A_12 = __VERIFIER_nondet_int ();
          B_12 = __VERIFIER_nondet_int ();
          D_12 = REC__f_0;
          E_12 = REC__f_1;
          C_12 = REC__f_2;
          if (!
              ((!(A_12 == 2)) && (!(A_12 == 0)) && (!(A_12 == 1))
               && (A_12 == (D_12 + 1)) && (B_12 == (E_12 + -1))))
              abort ();
          REC__f_0 = A_12;
          REC__f_1 = B_12;
          REC__f_2 = C_12;
          goto REC__f_0;

      default:
          abort ();
      }

    // return expression

}

