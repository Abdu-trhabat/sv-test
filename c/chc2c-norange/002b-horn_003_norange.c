// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/002b-horn_003.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "002b-horn_003_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC__f_0;
    int REC__f_1;
    int REC__f_2;
    int A_8;
    int B_8;
    int v_2_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int E_9;
    int A_10;
    int B_10;
    int C_10;
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
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          if (!((A_8 == 0) && (v_2_8 == B_8)))
              abort ();
          REC__f_0 = A_8;
          REC__f_1 = B_8;
          REC__f_2 = v_2_8;
          A_9 = __VERIFIER_nondet_int ();
          B_9 = __VERIFIER_nondet_int ();
          D_9 = REC__f_0;
          E_9 = REC__f_1;
          C_9 = REC__f_2;
          if (!
              ((!(A_9 == 0)) && (!(A_9 == 1)) && (A_9 == (D_9 + 1))
               && (B_9 == (E_9 + -1))))
              abort ();
          REC__f_0 = A_9;
          REC__f_1 = B_9;
          REC__f_2 = C_9;
          goto REC__f_0;

      case 1:
          if (!((!(A_10 == 0)) && (A_10 == 1) && (B_10 == (C_10 + -1))))
              abort ();
          REC__f_0 = A_10;
          REC__f_1 = B_10;
          REC__f_2 = C_10;
          A_9 = __VERIFIER_nondet_int ();
          B_9 = __VERIFIER_nondet_int ();
          D_9 = REC__f_0;
          E_9 = REC__f_1;
          C_9 = REC__f_2;
          if (!
              ((!(A_9 == 0)) && (!(A_9 == 1)) && (A_9 == (D_9 + 1))
               && (B_9 == (E_9 + -1))))
              abort ();
          REC__f_0 = A_9;
          REC__f_1 = B_9;
          REC__f_2 = C_9;
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
          A_11 = __VERIFIER_nondet_int ();
          C_11 = __VERIFIER_nondet_int ();
          E_11 = __VERIFIER_nondet_int ();
          G_11 = __VERIFIER_nondet_int ();
          D_11 = REC__f_0;
          F_11 = REC__f_1;
          B_11 = REC__f_2;
          if (!
              ((G_11 == C_11) && (E_11 == (F_11 + -1)) && (!(C_11 == 0))
               && (!(C_11 == 1)) && (C_11 == (D_11 + 1)) && (A_11 == E_11)
               && (!(A_11 == B_11)) && (G_11 == 0)))
              abort ();
          goto main_error;

      case 1:
          A_9 = __VERIFIER_nondet_int ();
          B_9 = __VERIFIER_nondet_int ();
          D_9 = REC__f_0;
          E_9 = REC__f_1;
          C_9 = REC__f_2;
          if (!
              ((!(A_9 == 0)) && (!(A_9 == 1)) && (A_9 == (D_9 + 1))
               && (B_9 == (E_9 + -1))))
              abort ();
          REC__f_0 = A_9;
          REC__f_1 = B_9;
          REC__f_2 = C_9;
          goto REC__f_0;

      default:
          abort ();
      }

    // return expression

}

