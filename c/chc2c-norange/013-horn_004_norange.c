// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/013-horn_004.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "013-horn_004_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC__f_0;
    int REC__f_1;
    int A_9;
    int v_1_9;
    int A_10;
    int B_10;
    int C_10;
    int D_10;
    int A_11;
    int B_11;
    int C_11;
    int D_11;



    // main logic
    goto main_init;

  main_init:
    if (!((A_9 <= 1) && (v_1_9 == A_9)))
        abort ();
    REC__f_0 = A_9;
    REC__f_1 = v_1_9;
    A_10 = __VERIFIER_nondet_int ();
    B_10 = __VERIFIER_nondet_int ();
    D_10 = REC__f_0;
    C_10 = REC__f_1;
    if (!
        ((A_10 == (D_10 + 2)) && (!(A_10 <= 1))
         && (((2 * A_10) + C_10) == (B_10 + 1))))
        abort ();
    REC__f_0 = A_10;
    REC__f_1 = B_10;
    goto REC__f_0;
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
          B_11 = __VERIFIER_nondet_int ();
          D_11 = REC__f_0;
          C_11 = REC__f_1;
          if (!
              ((!(A_11 == ((2 * B_11) + C_11 + -1))) && (A_11 == B_11)
               && (!(B_11 <= 1)) && (A_11 <= 1) && (B_11 == (D_11 + 2))))
              abort ();
          goto main_error;

      case 1:
          A_10 = __VERIFIER_nondet_int ();
          B_10 = __VERIFIER_nondet_int ();
          D_10 = REC__f_0;
          C_10 = REC__f_1;
          if (!
              ((A_10 == (D_10 + 2)) && (!(A_10 <= 1))
               && (((2 * A_10) + C_10) == (B_10 + 1))))
              abort ();
          REC__f_0 = A_10;
          REC__f_1 = B_10;
          goto REC__f_0;

      default:
          abort ();
      }

    // return expression

}

