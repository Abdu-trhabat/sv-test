// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/014-horn_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "014-horn_001_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC_f__0;
    int REC_f__1;
    int REC_f_f_0;
    int REC_f_f_1;
    int REC_f_f_2;
    int REC_f_f_3;
    int REC__f_0;
    int REC__f_1;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int v_5_0;
    int A_1;
    int B_1;
    int v_2_1;
    int v_3_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int v_5_3;
    int A_4;
    int v_1_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
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
    int E_8;
    int F_8;

    if (((REC_f__0 <= -1000000000) || (REC_f__0 >= 1000000000))
        || ((REC_f__1 <= -1000000000) || (REC_f__1 >= 1000000000))
        || ((REC_f_f_0 <= -1000000000) || (REC_f_f_0 >= 1000000000))
        || ((REC_f_f_1 <= -1000000000) || (REC_f_f_1 >= 1000000000))
        || ((REC_f_f_2 <= -1000000000) || (REC_f_f_2 >= 1000000000))
        || ((REC_f_f_3 <= -1000000000) || (REC_f_f_3 >= 1000000000))
        || ((REC__f_0 <= -1000000000) || (REC__f_0 >= 1000000000))
        || ((REC__f_1 <= -1000000000) || (REC__f_1 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((v_5_0 <= -1000000000) || (v_5_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((v_2_1 <= -1000000000) || (v_2_1 >= 1000000000))
        || ((v_3_1 <= -1000000000) || (v_3_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((v_5_3 <= -1000000000) || (v_5_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((v_1_4 <= -1000000000) || (v_1_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((v_1_6 <= -1000000000) || (v_1_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
        || ((A_8 <= -1000000000) || (A_8 >= 1000000000))
        || ((B_8 <= -1000000000) || (B_8 >= 1000000000))
        || ((C_8 <= -1000000000) || (C_8 >= 1000000000))
        || ((D_8 <= -1000000000) || (D_8 >= 1000000000))
        || ((E_8 <= -1000000000) || (E_8 >= 1000000000))
        || ((F_8 <= -1000000000) || (F_8 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          if (!((A_4 <= 0) && (v_1_4 == A_4)))
              abort ();
          REC_f__0 = A_4;
          REC_f__1 = v_1_4;
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          D_5 = REC_f__0;
          C_5 = REC_f__1;
          if (!((A_5 == (D_5 + 1)) && (!(A_5 <= 0)) && ((A_5 + C_5) == B_5)))
              abort ();
          REC_f__0 = A_5;
          REC_f__1 = B_5;
          goto REC_f__1;

      case 1:
          if (!((A_1 <= 0) && (B_1 <= 1) && (v_2_1 == A_1) && (v_3_1 == B_1)))
              abort ();
          REC_f_f_0 = A_1;
          REC_f_f_1 = v_2_1;
          REC_f_f_2 = B_1;
          REC_f_f_3 = v_3_1;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          G_2 = REC_f_f_0;
          E_2 = REC_f_f_1;
          H_2 = REC_f_f_2;
          F_2 = REC_f_f_3;
          if (!
              (((C_2 + F_2) == D_2) && (A_2 == (G_2 + 1))
               && (C_2 == (H_2 + 1)) && (!(A_2 <= 0)) && (!(C_2 <= 1))
               && ((A_2 + E_2) == B_2)))
              abort ();
          REC_f_f_0 = A_2;
          REC_f_f_1 = B_2;
          REC_f_f_2 = C_2;
          REC_f_f_3 = D_2;
          goto REC_f_f_0;

      case 2:
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
          if (!((A_7 == (D_7 + 1)) && (!(A_7 <= 1)) && ((A_7 + C_7) == B_7)))
              abort ();
          REC__f_0 = A_7;
          REC__f_1 = B_7;
          goto REC__f_2;

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC_f_f_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_8 = __VERIFIER_nondet_int ();
          if (((A_8 <= -1000000000) || (A_8 >= 1000000000)))
              abort ();
          C_8 = __VERIFIER_nondet_int ();
          if (((C_8 <= -1000000000) || (C_8 >= 1000000000)))
              abort ();
          E_8 = REC_f_f_0;
          B_8 = REC_f_f_1;
          F_8 = REC_f_f_2;
          D_8 = REC_f_f_3;
          if (!
              ((A_8 == (E_8 + 1)) && (A_8 == C_8) && (C_8 == (F_8 + 1))
               && (!(A_8 <= 0)) && (!(C_8 <= 1))
               && (!((A_8 + B_8) == (C_8 + D_8)))))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          G_2 = REC_f_f_0;
          E_2 = REC_f_f_1;
          H_2 = REC_f_f_2;
          F_2 = REC_f_f_3;
          if (!
              (((C_2 + F_2) == D_2) && (A_2 == (G_2 + 1))
               && (C_2 == (H_2 + 1)) && (!(A_2 <= 0)) && (!(C_2 <= 1))
               && ((A_2 + E_2) == B_2)))
              abort ();
          REC_f_f_0 = A_2;
          REC_f_f_1 = B_2;
          REC_f_f_2 = C_2;
          REC_f_f_3 = D_2;
          goto REC_f_f_0;

      default:
          abort ();
      }
  REC_f__1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          D_5 = REC_f__0;
          C_5 = REC_f__1;
          if (!((A_5 == (D_5 + 1)) && (!(A_5 <= 0)) && ((A_5 + C_5) == B_5)))
              abort ();
          REC_f__0 = A_5;
          REC_f__1 = B_5;
          goto REC_f__1;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          v_5_3 = __VERIFIER_nondet_int ();
          if (((v_5_3 <= -1000000000) || (v_5_3 >= 1000000000)))
              abort ();
          E_3 = REC_f__0;
          D_3 = REC_f__1;
          if (!
              ((A_3 == (E_3 + 1)) && (!(A_3 <= 0)) && (C_3 <= 1)
               && ((A_3 + D_3) == B_3) && (v_5_3 == C_3)))
              abort ();
          REC_f_f_0 = A_3;
          REC_f_f_1 = B_3;
          REC_f_f_2 = C_3;
          REC_f_f_3 = v_5_3;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          G_2 = REC_f_f_0;
          E_2 = REC_f_f_1;
          H_2 = REC_f_f_2;
          F_2 = REC_f_f_3;
          if (!
              (((C_2 + F_2) == D_2) && (A_2 == (G_2 + 1))
               && (C_2 == (H_2 + 1)) && (!(A_2 <= 0)) && (!(C_2 <= 1))
               && ((A_2 + E_2) == B_2)))
              abort ();
          REC_f_f_0 = A_2;
          REC_f_f_1 = B_2;
          REC_f_f_2 = C_2;
          REC_f_f_3 = D_2;
          goto REC_f_f_0;

      default:
          abort ();
      }
  REC__f_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_0 = __VERIFIER_nondet_int ();
          if (((A_0 <= -1000000000) || (A_0 >= 1000000000)))
              abort ();
          B_0 = __VERIFIER_nondet_int ();
          if (((B_0 <= -1000000000) || (B_0 >= 1000000000)))
              abort ();
          C_0 = __VERIFIER_nondet_int ();
          if (((C_0 <= -1000000000) || (C_0 >= 1000000000)))
              abort ();
          v_5_0 = __VERIFIER_nondet_int ();
          if (((v_5_0 <= -1000000000) || (v_5_0 >= 1000000000)))
              abort ();
          E_0 = REC__f_0;
          D_0 = REC__f_1;
          if (!
              ((B_0 == (E_0 + 1)) && (A_0 <= 0) && (!(B_0 <= 1))
               && ((B_0 + D_0) == C_0) && (v_5_0 == A_0)))
              abort ();
          REC_f_f_0 = A_0;
          REC_f_f_1 = v_5_0;
          REC_f_f_2 = B_0;
          REC_f_f_3 = C_0;
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          G_2 = REC_f_f_0;
          E_2 = REC_f_f_1;
          H_2 = REC_f_f_2;
          F_2 = REC_f_f_3;
          if (!
              (((C_2 + F_2) == D_2) && (A_2 == (G_2 + 1))
               && (C_2 == (H_2 + 1)) && (!(A_2 <= 0)) && (!(C_2 <= 1))
               && ((A_2 + E_2) == B_2)))
              abort ();
          REC_f_f_0 = A_2;
          REC_f_f_1 = B_2;
          REC_f_f_2 = C_2;
          REC_f_f_3 = D_2;
          goto REC_f_f_0;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          D_7 = REC__f_0;
          C_7 = REC__f_1;
          if (!((A_7 == (D_7 + 1)) && (!(A_7 <= 1)) && ((A_7 + C_7) == B_7)))
              abort ();
          REC__f_0 = A_7;
          REC__f_1 = B_7;
          goto REC__f_2;

      default:
          abort ();
      }

    // return expression

}

