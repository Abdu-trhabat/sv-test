// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/015-horn_002.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "015-horn_002_range.c", 13, "reach_error"); }



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
    int v_4_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int v_5_1;
    int A_2;
    int B_2;
    int v_2_2;
    int v_3_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int H_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int v_5_5;
    int A_6;
    int v_1_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
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
    int E_11;
    int F_11;

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
        || ((v_4_0 <= -1000000000) || (v_4_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((v_5_1 <= -1000000000) || (v_5_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((v_2_2 <= -1000000000) || (v_2_2 >= 1000000000))
        || ((v_3_2 <= -1000000000) || (v_3_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000))
        || ((G_4 <= -1000000000) || (G_4 >= 1000000000))
        || ((H_4 <= -1000000000) || (H_4 >= 1000000000))
        || ((A_5 <= -1000000000) || (A_5 >= 1000000000))
        || ((B_5 <= -1000000000) || (B_5 >= 1000000000))
        || ((C_5 <= -1000000000) || (C_5 >= 1000000000))
        || ((D_5 <= -1000000000) || (D_5 >= 1000000000))
        || ((E_5 <= -1000000000) || (E_5 >= 1000000000))
        || ((v_5_5 <= -1000000000) || (v_5_5 >= 1000000000))
        || ((A_6 <= -1000000000) || (A_6 >= 1000000000))
        || ((v_1_6 <= -1000000000) || (v_1_6 >= 1000000000))
        || ((A_7 <= -1000000000) || (A_7 >= 1000000000))
        || ((B_7 <= -1000000000) || (B_7 >= 1000000000))
        || ((C_7 <= -1000000000) || (C_7 >= 1000000000))
        || ((D_7 <= -1000000000) || (D_7 >= 1000000000))
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
        || ((D_11 <= -1000000000) || (D_11 >= 1000000000))
        || ((E_11 <= -1000000000) || (E_11 >= 1000000000))
        || ((F_11 <= -1000000000) || (F_11 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet_int ())
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
          if (!((A_7 == (D_7 + 1)) && (!(A_7 <= 1)) && ((A_7 + C_7) == B_7)))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          goto REC_f__0;

      case 1:
          if (!((A_2 <= 1) && (B_2 <= 1) && (v_2_2 == A_2) && (v_3_2 == B_2)))
              abort ();
          REC_f_f_0 = A_2;
          REC_f_f_1 = v_2_2;
          REC_f_f_2 = B_2;
          REC_f_f_3 = v_3_2;
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          G_4 = REC_f_f_0;
          E_4 = REC_f_f_1;
          H_4 = REC_f_f_2;
          F_4 = REC_f_f_3;
          if (!
              (((C_4 + F_4) == D_4) && (A_4 == (G_4 + 1))
               && (C_4 == (H_4 + 1)) && (F_4 >= 0) && (!(A_4 <= 1))
               && (!(C_4 <= 1)) && ((A_4 + E_4) == B_4)))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          goto REC_f_f_3;

      case 2:
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
          goto REC__f_4;

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC_f__0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_7 = __VERIFIER_nondet_int ();
          if (((A_7 <= -1000000000) || (A_7 >= 1000000000)))
              abort ();
          B_7 = __VERIFIER_nondet_int ();
          if (((B_7 <= -1000000000) || (B_7 >= 1000000000)))
              abort ();
          D_7 = REC_f__0;
          C_7 = REC_f__1;
          if (!((A_7 == (D_7 + 1)) && (!(A_7 <= 1)) && ((A_7 + C_7) == B_7)))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          goto REC_f__0;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          if (((A_5 <= -1000000000) || (A_5 >= 1000000000)))
              abort ();
          B_5 = __VERIFIER_nondet_int ();
          if (((B_5 <= -1000000000) || (B_5 >= 1000000000)))
              abort ();
          C_5 = __VERIFIER_nondet_int ();
          if (((C_5 <= -1000000000) || (C_5 >= 1000000000)))
              abort ();
          v_5_5 = __VERIFIER_nondet_int ();
          if (((v_5_5 <= -1000000000) || (v_5_5 >= 1000000000)))
              abort ();
          E_5 = REC_f__0;
          D_5 = REC_f__1;
          if (!
              ((A_5 == (E_5 + 1)) && (!(A_5 <= 1)) && (C_5 <= 1)
               && ((A_5 + D_5) == B_5) && (v_5_5 == C_5)))
              abort ();
          REC_f_f_0 = A_5;
          REC_f_f_1 = B_5;
          REC_f_f_2 = C_5;
          REC_f_f_3 = v_5_5;
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          G_4 = REC_f_f_0;
          E_4 = REC_f_f_1;
          H_4 = REC_f_f_2;
          F_4 = REC_f_f_3;
          if (!
              (((C_4 + F_4) == D_4) && (A_4 == (G_4 + 1))
               && (C_4 == (H_4 + 1)) && (F_4 >= 0) && (!(A_4 <= 1))
               && (!(C_4 <= 1)) && ((A_4 + E_4) == B_4)))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          goto REC_f_f_3;

      default:
          abort ();
      }
  REC_f_f_1:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_11 = __VERIFIER_nondet_int ();
          if (((A_11 <= -1000000000) || (A_11 >= 1000000000)))
              abort ();
          E_11 = __VERIFIER_nondet_int ();
          if (((E_11 <= -1000000000) || (E_11 >= 1000000000)))
              abort ();
          D_11 = REC_f_f_0;
          B_11 = REC_f_f_1;
          F_11 = REC_f_f_2;
          C_11 = REC_f_f_3;
          if (!
              ((A_11 == (D_11 + 1)) && (A_11 == E_11) && (E_11 == (F_11 + 1))
               && (!(C_11 >= 0)) && (!(A_11 <= 1)) && (!(E_11 <= 1))
               && (!((A_11 + B_11) == C_11))))
              abort ();
          goto main_error;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          G_4 = REC_f_f_0;
          E_4 = REC_f_f_1;
          H_4 = REC_f_f_2;
          F_4 = REC_f_f_3;
          if (!
              (((C_4 + F_4) == D_4) && (A_4 == (G_4 + 1))
               && (C_4 == (H_4 + 1)) && (F_4 >= 0) && (!(A_4 <= 1))
               && (!(C_4 <= 1)) && ((A_4 + E_4) == B_4)))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          G_4 = REC_f_f_0;
          E_4 = REC_f_f_1;
          H_4 = REC_f_f_2;
          F_4 = REC_f_f_3;
          if (!
              (((C_4 + F_4) == D_4) && (A_4 == (G_4 + 1))
               && (C_4 == (H_4 + 1)) && (F_4 >= 0) && (!(A_4 <= 1))
               && (!(C_4 <= 1)) && ((A_4 + E_4) == B_4)))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          goto REC_f_f_3;

      case 2:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          G_4 = REC_f_f_0;
          E_4 = REC_f_f_1;
          H_4 = REC_f_f_2;
          F_4 = REC_f_f_3;
          if (!
              (((C_4 + F_4) == D_4) && (A_4 == (G_4 + 1))
               && (C_4 == (H_4 + 1)) && (F_4 >= 0) && (!(A_4 <= 1))
               && (!(C_4 <= 1)) && ((A_4 + E_4) == B_4)))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          goto REC_f_f_3;

      default:
          abort ();
      }
  REC__f_2:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_0 = __VERIFIER_nondet_int ();
          if (((A_0 <= -1000000000) || (A_0 >= 1000000000)))
              abort ();
          B_0 = __VERIFIER_nondet_int ();
          if (((B_0 <= -1000000000) || (B_0 >= 1000000000)))
              abort ();
          v_4_0 = __VERIFIER_nondet_int ();
          if (((v_4_0 <= -1000000000) || (v_4_0 >= 1000000000)))
              abort ();
          D_0 = REC__f_0;
          C_0 = REC__f_1;
          if (!
              ((!(C_0 >= 0)) && (!(B_0 <= 1)) && (A_0 <= 1)
               && (B_0 == (D_0 + 1)) && (v_4_0 == A_0)))
              abort ();
          REC_f_f_0 = A_0;
          REC_f_f_1 = v_4_0;
          REC_f_f_2 = B_0;
          REC_f_f_3 = C_0;
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          G_4 = REC_f_f_0;
          E_4 = REC_f_f_1;
          H_4 = REC_f_f_2;
          F_4 = REC_f_f_3;
          if (!
              (((C_4 + F_4) == D_4) && (A_4 == (G_4 + 1))
               && (C_4 == (H_4 + 1)) && (F_4 >= 0) && (!(A_4 <= 1))
               && (!(C_4 <= 1)) && ((A_4 + E_4) == B_4)))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          goto REC_f_f_3;

      case 1:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          v_5_1 = __VERIFIER_nondet_int ();
          if (((v_5_1 <= -1000000000) || (v_5_1 >= 1000000000)))
              abort ();
          E_1 = REC__f_0;
          D_1 = REC__f_1;
          if (!
              ((B_1 == (E_1 + 1)) && (D_1 >= 0) && (A_1 <= 1) && (!(B_1 <= 1))
               && ((B_1 + D_1) == C_1) && (v_5_1 == A_1)))
              abort ();
          REC_f_f_0 = A_1;
          REC_f_f_1 = v_5_1;
          REC_f_f_2 = B_1;
          REC_f_f_3 = C_1;
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          G_4 = REC_f_f_0;
          E_4 = REC_f_f_1;
          H_4 = REC_f_f_2;
          F_4 = REC_f_f_3;
          if (!
              (((C_4 + F_4) == D_4) && (A_4 == (G_4 + 1))
               && (C_4 == (H_4 + 1)) && (F_4 >= 0) && (!(A_4 <= 1))
               && (!(C_4 <= 1)) && ((A_4 + E_4) == B_4)))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          goto REC_f_f_3;

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
          goto REC__f_4;

      case 3:
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
          goto REC__f_4;

      default:
          abort ();
      }
  REC_f_f_3:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          F_3 = REC_f_f_0;
          E_3 = REC_f_f_1;
          G_3 = REC_f_f_2;
          D_3 = REC_f_f_3;
          if (!
              ((A_3 == (F_3 + 1)) && (C_3 == (G_3 + 1)) && (!(D_3 >= 0))
               && (!(A_3 <= 1)) && (!(C_3 <= 1)) && ((A_3 + E_3) == B_3)))
              abort ();
          REC_f_f_0 = A_3;
          REC_f_f_1 = B_3;
          REC_f_f_2 = C_3;
          REC_f_f_3 = D_3;
          goto REC_f_f_1;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          if (((A_4 <= -1000000000) || (A_4 >= 1000000000)))
              abort ();
          B_4 = __VERIFIER_nondet_int ();
          if (((B_4 <= -1000000000) || (B_4 >= 1000000000)))
              abort ();
          C_4 = __VERIFIER_nondet_int ();
          if (((C_4 <= -1000000000) || (C_4 >= 1000000000)))
              abort ();
          D_4 = __VERIFIER_nondet_int ();
          if (((D_4 <= -1000000000) || (D_4 >= 1000000000)))
              abort ();
          G_4 = REC_f_f_0;
          E_4 = REC_f_f_1;
          H_4 = REC_f_f_2;
          F_4 = REC_f_f_3;
          if (!
              (((C_4 + F_4) == D_4) && (A_4 == (G_4 + 1))
               && (C_4 == (H_4 + 1)) && (F_4 >= 0) && (!(A_4 <= 1))
               && (!(C_4 <= 1)) && ((A_4 + E_4) == B_4)))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          goto REC_f_f_3;

      default:
          abort ();
      }
  REC__f_4:
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
          goto REC__f_2;

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
          goto REC__f_4;

      default:
          abort ();
      }

    // return expression

}

