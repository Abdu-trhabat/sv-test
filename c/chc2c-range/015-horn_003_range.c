// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/015-horn_003.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "015-horn_003_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC__f_0;
    int REC__f_1;
    int A_8;
    int v_1_8;
    int A_9;
    int B_9;
    int C_9;
    int D_9;
    int A_10;
    int B_10;
    int C_10;
    int A_11;
    int B_11;
    int C_11;
    int D_11;

    if (((REC__f_0 <= -1000000000) || (REC__f_0 >= 1000000000))
        || ((REC__f_1 <= -1000000000) || (REC__f_1 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((v_1_8 <= -1000000000) || (v_1_8 >= 1000000000))
        || ((A_9 <= -1000000000) || (A_9 >= 1000000000))
        || ((B_9 <= -1000000000) || (B_9 >= 1000000000))
        || ((C_9 <= -1000000000) || (C_9 >= 1000000000))
        || ((D_9 <= -1000000000) || (D_9 >= 1000000000))
        || ((A_10 <= -1000000000) || (A_10 >= 1000000000))
        || ((B_10 <= -1000000000) || (B_10 >= 1000000000))
        || ((C_10 <= -1000000000) || (C_10 >= 1000000000))
        || ((A_11 <= -1000000000) || (A_11 >= 1000000000))
        || ((B_11 <= -1000000000) || (B_11 >= 1000000000))
        || ((C_11 <= -1000000000) || (C_11 >= 1000000000))
        || ((D_11 <= -1000000000) || (D_11 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((A_8 <= 1) && (v_1_8 == A_8)))
        abort ();
    REC__f_0 = A_8;
    REC__f_1 = v_1_8;
    A_9 = __VERIFIER_nondet_int ();
    if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
        abort ();
    B_9 = __VERIFIER_nondet_int ();
    if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
        abort ();
    D_9 = REC__f_0;
    C_9 = REC__f_1;
    if (!
        ((A_9 == (D_9 + 1)) && (C_9 >= 0) && (!(A_9 <= 1))
         && ((A_9 + C_9) == B_9)))
        abort ();
    REC__f_0 = A_9;
    REC__f_1 = B_9;
    goto REC__f_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC_f_:
    goto REC_f_;
  REC_f_f:
    goto REC_f_f;
  REC__f_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_11 = __VERIFIER_nondet_int ();
          if (((A_11 <= -1000000000) || (A_11 >= 1000000000)))
              abort ();
          B_11 = __VERIFIER_nondet_int ();
          if (((B_11 <= -1000000000) || (B_11 >= 1000000000)))
              abort ();
          D_11 = REC__f_0;
          C_11 = REC__f_1;
          if (!
              ((!(A_11 == (B_11 + C_11))) && (A_11 == B_11) && (C_11 >= 0)
               && (!(B_11 <= 1)) && (A_11 <= 1) && (B_11 == (D_11 + 1))))
              abort ();
          goto main_error;

      case 1:
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = __VERIFIER_nondet_int ();
          if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
              abort ();
          D_9 = REC__f_0;
          C_9 = REC__f_1;
          if (!
              ((A_9 == (D_9 + 1)) && (C_9 >= 0) && (!(A_9 <= 1))
               && ((A_9 + C_9) == B_9)))
              abort ();
          REC__f_0 = A_9;
          REC__f_1 = B_9;
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = __VERIFIER_nondet_int ();
          if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
              abort ();
          D_9 = REC__f_0;
          C_9 = REC__f_1;
          if (!
              ((A_9 == (D_9 + 1)) && (C_9 >= 0) && (!(A_9 <= 1))
               && ((A_9 + C_9) == B_9)))
              abort ();
          REC__f_0 = A_9;
          REC__f_1 = B_9;
          goto REC__f_1;

      case 2:
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = __VERIFIER_nondet_int ();
          if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
              abort ();
          D_9 = REC__f_0;
          C_9 = REC__f_1;
          if (!
              ((A_9 == (D_9 + 1)) && (C_9 >= 0) && (!(A_9 <= 1))
               && ((A_9 + C_9) == B_9)))
              abort ();
          REC__f_0 = A_9;
          REC__f_1 = B_9;
          goto REC__f_1;

      default:
          abort ();
      }
  REC__f_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_10 = __VERIFIER_nondet_int ();
          if (((A_10 <= -1000000000) || (A_10 >= 1000000000)))
              abort ();
          C_10 = REC__f_0;
          B_10 = REC__f_1;
          if (!((!(B_10 >= 0)) && (!(A_10 <= 1)) && (A_10 == (C_10 + 1))))
              abort ();
          REC__f_0 = A_10;
          REC__f_1 = B_10;
          goto REC__f_0;

      case 1:
          A_9 = __VERIFIER_nondet_int ();
          if (((A_9 <= -1000000000) || (A_9 >= 1000000000)))
              abort ();
          B_9 = __VERIFIER_nondet_int ();
          if (((B_9 <= -1000000000) || (B_9 >= 1000000000)))
              abort ();
          D_9 = REC__f_0;
          C_9 = REC__f_1;
          if (!
              ((A_9 == (D_9 + 1)) && (C_9 >= 0) && (!(A_9 <= 1))
               && ((A_9 + C_9) == B_9)))
              abort ();
          REC__f_0 = A_9;
          REC__f_1 = B_9;
          goto REC__f_1;

      default:
          abort ();
      }

    // return expression

}

