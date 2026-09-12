// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/011d-horn_003.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "011d-horn_003_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC__f_0;
    int REC__f_1;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int A_2;
    int v_1_2;
    int A_3;
    int B_3;
    int A_24;
    int B_24;
    int C_24;
    int D_24;

    if (((REC__f_0 <= -1000000000) || (REC__f_0 >= 1000000000))
        || ((REC__f_1 <= -1000000000) || (REC__f_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((v_1_2 <= -1000000000) || (v_1_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((A_24 <= -1000000000) || (A_24 >= 1000000000))
        || ((B_24 <= -1000000000) || (B_24 >= 1000000000))
        || ((C_24 <= -1000000000) || (C_24 >= 1000000000))
        || ((D_24 <= -1000000000) || (D_24 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          if (!((!(A_2 <= 1)) && (!(A_2 >= 2)) && (v_1_2 == A_2)))
              abort ();
          REC__f_0 = A_2;
          REC__f_1 = v_1_2;
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          D_1 = REC__f_0;
          C_1 = REC__f_1;
          if (!
              ((C_1 == (B_1 + -2)) && (A_1 >= 2) && (!(C_1 <= -1))
               && (A_1 == (D_1 + 2))))
              abort ();
          REC__f_0 = A_1;
          REC__f_1 = B_1;
          goto REC__f_1;

      case 1:
          if (!((!(A_3 >= 2)) && (A_3 <= 1) && (B_3 == 0)))
              abort ();
          REC__f_0 = A_3;
          REC__f_1 = B_3;
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          D_1 = REC__f_0;
          C_1 = REC__f_1;
          if (!
              ((C_1 == (B_1 + -2)) && (A_1 >= 2) && (!(C_1 <= -1))
               && (A_1 == (D_1 + 2))))
              abort ();
          REC__f_0 = A_1;
          REC__f_1 = B_1;
          goto REC__f_1;

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
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_24 = __VERIFIER_nondet_int ();
          if (((A_24 <= -1000000000) || (A_24 >= 1000000000)))
              abort ();
          C_24 = __VERIFIER_nondet_int ();
          if (((C_24 <= -1000000000) || (C_24 >= 1000000000)))
              abort ();
          D_24 = REC__f_0;
          B_24 = REC__f_1;
          if (!
              ((A_24 == C_24) && (C_24 == (D_24 + 2)) && (!(A_24 >= 1))
               && (C_24 >= 2) && (!(B_24 <= -1)) && (!(A_24 <= -1))
               && (!(A_24 == (B_24 + 2)))))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          D_1 = REC__f_0;
          C_1 = REC__f_1;
          if (!
              ((C_1 == (B_1 + -2)) && (A_1 >= 2) && (!(C_1 <= -1))
               && (A_1 == (D_1 + 2))))
              abort ();
          REC__f_0 = A_1;
          REC__f_1 = B_1;
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          D_1 = REC__f_0;
          C_1 = REC__f_1;
          if (!
              ((C_1 == (B_1 + -2)) && (A_1 >= 2) && (!(C_1 <= -1))
               && (A_1 == (D_1 + 2))))
              abort ();
          REC__f_0 = A_1;
          REC__f_1 = B_1;
          goto REC__f_1;

      case 2:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          D_1 = REC__f_0;
          C_1 = REC__f_1;
          if (!
              ((C_1 == (B_1 + -2)) && (A_1 >= 2) && (!(C_1 <= -1))
               && (A_1 == (D_1 + 2))))
              abort ();
          REC__f_0 = A_1;
          REC__f_1 = B_1;
          goto REC__f_1;

      default:
          abort ();
      }
  REC__f_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_0 = __VERIFIER_nondet_int ();
          if (((A_0 <= -1000000000) || (A_0 >= 1000000000)))
              abort ();
          B_0 = __VERIFIER_nondet_int ();
          if (((B_0 <= -1000000000) || (B_0 >= 1000000000)))
              abort ();
          D_0 = REC__f_0;
          C_0 = REC__f_1;
          if (!
              ((A_0 == (D_0 + 2)) && (A_0 >= 2) && (C_0 <= -1) && (B_0 == 0)))
              abort ();
          REC__f_0 = A_0;
          REC__f_1 = B_0;
          goto REC__f_0;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          D_1 = REC__f_0;
          C_1 = REC__f_1;
          if (!
              ((C_1 == (B_1 + -2)) && (A_1 >= 2) && (!(C_1 <= -1))
               && (A_1 == (D_1 + 2))))
              abort ();
          REC__f_0 = A_1;
          REC__f_1 = B_1;
          goto REC__f_1;

      default:
          abort ();
      }

    // return expression

}

