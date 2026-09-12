// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/013b-horn_003.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "013b-horn_003_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC_f__0;
    int REC_f__1;
    int A_6;
    int v_1_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int A_8;
    int B_8;
    int A_11;
    int B_11;
    int C_11;
    int D_11;

    if (((REC_f__0 <= -1000000000) || (REC_f__0 >= 1000000000))
        || ((REC_f__1 <= -1000000000) || (REC_f__1 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((v_1_6 <= -1000000000) || (v_1_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((A_11 <= -1000000000) || (A_11 >= 1000000000))
        || ((B_11 <= -1000000000) || (B_11 >= 1000000000))
        || ((C_11 <= -1000000000) || (C_11 >= 1000000000))
        || ((D_11 <= -1000000000) || (D_11 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          if (!((A_6 <= 1) && (v_1_6 == A_6)))
              abort ();
          REC_f__0 = A_6;
          REC_f__1 = v_1_6;
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          D_7 = REC_f__0;
          C_7 = REC_f__1;
          if (!
              ((A_7 == (D_7 + 2)) && (!(A_7 <= 2)) && (!(A_7 <= 1))
               && (((2 * A_7) + C_7) == (B_7 + 1))))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          goto REC_f__0;

      case 1:
          if (!((A_8 <= 2) && (!(A_8 <= 1)) && ((2 * A_8) == (B_8 + 1))))
              abort ();
          REC_f__0 = A_8;
          REC_f__1 = B_8;
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          D_7 = REC_f__0;
          C_7 = REC_f__1;
          if (!
              ((A_7 == (D_7 + 2)) && (!(A_7 <= 2)) && (!(A_7 <= 1))
               && (((2 * A_7) + C_7) == (B_7 + 1))))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          goto REC_f__0;

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
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_11 = __VERIFIER_nondet_int ();
          if (((A_11 <= -1000000000) || (A_11 >= 1000000000)))
              abort ();
          C_11 = __VERIFIER_nondet_int ();
          if (((C_11 <= -1000000000) || (C_11 >= 1000000000)))
              abort ();
          D_11 = REC_f__0;
          B_11 = REC_f__1;
          if (!
              ((A_11 == (D_11 + 2)) && (A_11 == C_11) && (C_11 <= 1)
               && (!(A_11 <= 2)) && (!(A_11 <= 1))
               && (!(((2 * A_11) + B_11) == (C_11 + 1)))))
              abort ();
          goto main_error;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          D_7 = REC_f__0;
          C_7 = REC_f__1;
          if (!
              ((A_7 == (D_7 + 2)) && (!(A_7 <= 2)) && (!(A_7 <= 1))
               && (((2 * A_7) + C_7) == (B_7 + 1))))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          goto REC_f__0;

      default:
          abort ();
      }

    // return expression

}

