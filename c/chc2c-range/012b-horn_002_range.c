// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/012b-horn_002.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "012b-horn_002_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC__f_0;
    int REC__f_1;
    int A_6;
    int v_1_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int A_8;
    int B_8;
    int C_8;
    int D_8;

    if (((REC__f_0 <= -1000000000) || (REC__f_0 >= 1000000000))
        || ((REC__f_1 <= -1000000000) || (REC__f_1 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((v_1_6 <= -1000000000) || (v_1_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((A_6 <= 1) && (v_1_6 == A_6)))
        abort ();
    REC__f_0 = A_6;
    REC__f_1 = v_1_6;
    A_7 = __VERIFIER_nondet_int ();
    if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
        abort ();
    B_7 = __VERIFIER_nondet_int ();
    if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
        abort ();
    D_7 = REC__f_0;
    C_7 = REC__f_1;
    if (!
        ((A_7 == (D_7 + 2)) && (!(A_7 <= 1))
         && (((2 * A_7) + C_7) == (B_7 + 1))))
        abort ();
    REC__f_0 = A_7;
    REC__f_1 = B_7;
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
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          B_8 = __VERIFIER_nondet_int ();
          if (((B_8 <= -1000000000) || (B_8 >= 1000000000)))
              abort ();
          D_8 = REC__f_0;
          C_8 = REC__f_1;
          if (!
              ((!(A_8 == ((2 * B_8) + C_8 + -1))) && (A_8 == B_8)
               && (!(B_8 <= 1)) && (A_8 <= 1) && (B_8 == (D_8 + 2))))
              abort ();
          goto main_error;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          D_7 = REC__f_0;
          C_7 = REC__f_1;
          if (!
              ((A_7 == (D_7 + 2)) && (!(A_7 <= 1))
               && (((2 * A_7) + C_7) == (B_7 + 1))))
              abort ();
          REC__f_0 = A_7;
          REC__f_1 = B_7;
          goto REC__f_0;

      default:
          abort ();
      }

    // return expression

}

