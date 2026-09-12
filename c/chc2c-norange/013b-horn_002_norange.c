// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/013b-horn_002.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "013b-horn_002_norange.c", 13, "reach_error"); }



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
    int v_5_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int G_3;
    int H_3;
    int A_4;
    int B_4;
    int C_4;
    int v_3_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int A_6;
    int v_1_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int A_8;
    int B_8;
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
    int E_11;
    int F_11;



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
          B_7 = __VERIFIER_nondet_int ();
          D_7 = REC_f__0;
          C_7 = REC_f__1;
          if (!
              ((A_7 == (D_7 + 2)) && (!(A_7 <= 2)) && (!(A_7 <= 1))
               && (((2 * A_7) + C_7) == (B_7 + 1))))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          goto REC_f__1;

      case 1:
          if (!((A_8 <= 2) && (!(A_8 <= 1)) && ((2 * A_8) == (B_8 + 1))))
              abort ();
          REC_f__0 = A_8;
          REC_f__1 = B_8;
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          D_7 = REC_f__0;
          C_7 = REC_f__1;
          if (!
              ((A_7 == (D_7 + 2)) && (!(A_7 <= 2)) && (!(A_7 <= 1))
               && (((2 * A_7) + C_7) == (B_7 + 1))))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          goto REC_f__1;

      case 2:
          if (!((A_1 <= 1) && (B_1 <= 1) && (v_2_1 == A_1) && (v_3_1 == B_1)))
              abort ();
          REC_f_f_0 = A_1;
          REC_f_f_1 = v_2_1;
          REC_f_f_2 = B_1;
          REC_f_f_3 = v_3_1;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          G_3 = REC_f_f_0;
          E_3 = REC_f_f_1;
          H_3 = REC_f_f_2;
          F_3 = REC_f_f_3;
          if (!
              ((((2 * C_3) + F_3) == (D_3 + 1)) && (A_3 == (G_3 + 2))
               && (C_3 == (H_3 + 2)) && (!(A_3 <= 2)) && (!(A_3 <= 1))
               && (!(C_3 <= 1)) && (((2 * A_3) + E_3) == (B_3 + 1))))
              abort ();
          REC_f_f_0 = A_3;
          REC_f_f_1 = B_3;
          REC_f_f_2 = C_3;
          REC_f_f_3 = D_3;
          goto REC_f_f_2;

      case 3:
          if (!
              ((C_4 <= 1) && (A_4 <= 2) && (!(A_4 <= 1))
               && ((2 * A_4) == (B_4 + 1)) && (v_3_4 == C_4)))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = v_3_4;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          G_3 = REC_f_f_0;
          E_3 = REC_f_f_1;
          H_3 = REC_f_f_2;
          F_3 = REC_f_f_3;
          if (!
              ((((2 * C_3) + F_3) == (D_3 + 1)) && (A_3 == (G_3 + 2))
               && (C_3 == (H_3 + 2)) && (!(A_3 <= 2)) && (!(A_3 <= 1))
               && (!(C_3 <= 1)) && (((2 * A_3) + E_3) == (B_3 + 1))))
              abort ();
          REC_f_f_0 = A_3;
          REC_f_f_1 = B_3;
          REC_f_f_2 = C_3;
          REC_f_f_3 = D_3;
          goto REC_f_f_2;

      case 4:
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

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC__f_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_0 = __VERIFIER_nondet_int ();
          B_0 = __VERIFIER_nondet_int ();
          C_0 = __VERIFIER_nondet_int ();
          v_5_0 = __VERIFIER_nondet_int ();
          E_0 = REC__f_0;
          D_0 = REC__f_1;
          if (!
              ((B_0 == (E_0 + 2)) && (A_0 <= 1) && (!(B_0 <= 1))
               && (((2 * B_0) + D_0) == (C_0 + 1)) && (v_5_0 == A_0)))
              abort ();
          REC_f_f_0 = A_0;
          REC_f_f_1 = v_5_0;
          REC_f_f_2 = B_0;
          REC_f_f_3 = C_0;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          G_3 = REC_f_f_0;
          E_3 = REC_f_f_1;
          H_3 = REC_f_f_2;
          F_3 = REC_f_f_3;
          if (!
              ((((2 * C_3) + F_3) == (D_3 + 1)) && (A_3 == (G_3 + 2))
               && (C_3 == (H_3 + 2)) && (!(A_3 <= 2)) && (!(A_3 <= 1))
               && (!(C_3 <= 1)) && (((2 * A_3) + E_3) == (B_3 + 1))))
              abort ();
          REC_f_f_0 = A_3;
          REC_f_f_1 = B_3;
          REC_f_f_2 = C_3;
          REC_f_f_3 = D_3;
          goto REC_f_f_2;

      case 1:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          C_5 = __VERIFIER_nondet_int ();
          D_5 = __VERIFIER_nondet_int ();
          F_5 = REC__f_0;
          E_5 = REC__f_1;
          if (!
              ((((2 * C_5) + E_5) == (D_5 + 1)) && (C_5 == (F_5 + 2))
               && (A_5 <= 2) && (!(A_5 <= 1)) && (!(C_5 <= 1))
               && ((2 * A_5) == (B_5 + 1))))
              abort ();
          REC_f_f_0 = A_5;
          REC_f_f_1 = B_5;
          REC_f_f_2 = C_5;
          REC_f_f_3 = D_5;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          G_3 = REC_f_f_0;
          E_3 = REC_f_f_1;
          H_3 = REC_f_f_2;
          F_3 = REC_f_f_3;
          if (!
              ((((2 * C_3) + F_3) == (D_3 + 1)) && (A_3 == (G_3 + 2))
               && (C_3 == (H_3 + 2)) && (!(A_3 <= 2)) && (!(A_3 <= 1))
               && (!(C_3 <= 1)) && (((2 * A_3) + E_3) == (B_3 + 1))))
              abort ();
          REC_f_f_0 = A_3;
          REC_f_f_1 = B_3;
          REC_f_f_2 = C_3;
          REC_f_f_3 = D_3;
          goto REC_f_f_2;

      case 2:
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
  REC_f__1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          D_7 = REC_f__0;
          C_7 = REC_f__1;
          if (!
              ((A_7 == (D_7 + 2)) && (!(A_7 <= 2)) && (!(A_7 <= 1))
               && (((2 * A_7) + C_7) == (B_7 + 1))))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          goto REC_f__1;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          v_5_2 = __VERIFIER_nondet_int ();
          E_2 = REC_f__0;
          D_2 = REC_f__1;
          if (!
              ((A_2 == (E_2 + 2)) && (!(A_2 <= 2)) && (!(A_2 <= 1))
               && (C_2 <= 1) && (((2 * A_2) + D_2) == (B_2 + 1))
               && (v_5_2 == C_2)))
              abort ();
          REC_f_f_0 = A_2;
          REC_f_f_1 = B_2;
          REC_f_f_2 = C_2;
          REC_f_f_3 = v_5_2;
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          G_3 = REC_f_f_0;
          E_3 = REC_f_f_1;
          H_3 = REC_f_f_2;
          F_3 = REC_f_f_3;
          if (!
              ((((2 * C_3) + F_3) == (D_3 + 1)) && (A_3 == (G_3 + 2))
               && (C_3 == (H_3 + 2)) && (!(A_3 <= 2)) && (!(A_3 <= 1))
               && (!(C_3 <= 1)) && (((2 * A_3) + E_3) == (B_3 + 1))))
              abort ();
          REC_f_f_0 = A_3;
          REC_f_f_1 = B_3;
          REC_f_f_2 = C_3;
          REC_f_f_3 = D_3;
          goto REC_f_f_2;

      default:
          abort ();
      }
  REC_f_f_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_11 = __VERIFIER_nondet_int ();
          C_11 = __VERIFIER_nondet_int ();
          E_11 = REC_f_f_0;
          B_11 = REC_f_f_1;
          F_11 = REC_f_f_2;
          D_11 = REC_f_f_3;
          if (!
              ((A_11 == (E_11 + 2)) && (A_11 == C_11) && (C_11 == (F_11 + 2))
               && (!(A_11 <= 2)) && (!(A_11 <= 1)) && (!(C_11 <= 1))
               && (!(((2 * A_11) + B_11) == ((2 * C_11) + D_11)))))
              abort ();
          goto main_error;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          G_3 = REC_f_f_0;
          E_3 = REC_f_f_1;
          H_3 = REC_f_f_2;
          F_3 = REC_f_f_3;
          if (!
              ((((2 * C_3) + F_3) == (D_3 + 1)) && (A_3 == (G_3 + 2))
               && (C_3 == (H_3 + 2)) && (!(A_3 <= 2)) && (!(A_3 <= 1))
               && (!(C_3 <= 1)) && (((2 * A_3) + E_3) == (B_3 + 1))))
              abort ();
          REC_f_f_0 = A_3;
          REC_f_f_1 = B_3;
          REC_f_f_2 = C_3;
          REC_f_f_3 = D_3;
          goto REC_f_f_2;

      default:
          abort ();
      }

    // return expression

}

