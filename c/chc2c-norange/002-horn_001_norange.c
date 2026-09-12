// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/002-horn_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "002-horn_001_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC__f_0;
    int REC__f_1;
    int REC__f_2;
    int REC_f__0;
    int REC_f__1;
    int REC_f__2;
    int REC_f_f_0;
    int REC_f_f_1;
    int REC_f_f_2;
    int REC_f_f_3;
    int REC_f_f_4;
    int REC_f_f_5;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int v_5_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int v_7_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int v_4_2;
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
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int H_4;
    int I_4;
    int J_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;
    int G_5;
    int v_7_5;
    int A_6;
    int B_6;
    int v_2_6;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;
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
    int H_11;
    int I_11;
    int J_11;



    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet_int ())
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

      case 2:
          if (!((A_6 == 0) && (v_2_6 == B_6)))
              abort ();
          REC_f__0 = A_6;
          REC_f__1 = B_6;
          REC_f__2 = v_2_6;
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          D_7 = REC_f__0;
          E_7 = REC_f__1;
          C_7 = REC_f__2;
          if (!((!(A_7 == 0)) && (A_7 == (D_7 + 1)) && (B_7 == (E_7 + -1))))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          REC_f__2 = C_7;
          goto REC_f__1;

      case 3:
          if (!
              ((!(C_0 == 0)) && (C_0 == 1) && (A_0 == 0)
               && (D_0 == (E_0 + -1)) && (v_5_0 == B_0)))
              abort ();
          REC_f_f_0 = A_0;
          REC_f_f_1 = B_0;
          REC_f_f_2 = v_5_0;
          REC_f_f_3 = C_0;
          REC_f_f_4 = D_0;
          REC_f_f_5 = E_0;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet_int ();
          E_4 = __VERIFIER_nondet_int ();
          G_4 = REC_f_f_0;
          H_4 = REC_f_f_1;
          C_4 = REC_f_f_2;
          I_4 = REC_f_f_3;
          J_4 = REC_f_f_4;
          F_4 = REC_f_f_5;
          if (!
              ((!(A_4 == 0)) && (A_4 == (G_4 + 1)) && (E_4 == (J_4 + -1))
               && (!(D_4 == 0)) && (!(D_4 == 1)) && (D_4 == (I_4 + 1))
               && (B_4 == (H_4 + -1))))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          REC_f_f_4 = E_4;
          REC_f_f_5 = F_4;
          goto REC_f_f_2;

      case 4:
          if (!((A_2 == 0) && (C_2 == 0) && (v_4_2 == B_2) && (v_5_2 == D_2)))
              abort ();
          REC_f_f_0 = A_2;
          REC_f_f_1 = B_2;
          REC_f_f_2 = v_4_2;
          REC_f_f_3 = C_2;
          REC_f_f_4 = D_2;
          REC_f_f_5 = v_5_2;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet_int ();
          E_4 = __VERIFIER_nondet_int ();
          G_4 = REC_f_f_0;
          H_4 = REC_f_f_1;
          C_4 = REC_f_f_2;
          I_4 = REC_f_f_3;
          J_4 = REC_f_f_4;
          F_4 = REC_f_f_5;
          if (!
              ((!(A_4 == 0)) && (A_4 == (G_4 + 1)) && (E_4 == (J_4 + -1))
               && (!(D_4 == 0)) && (!(D_4 == 1)) && (D_4 == (I_4 + 1))
               && (B_4 == (H_4 + -1))))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          REC_f_f_4 = E_4;
          REC_f_f_5 = F_4;
          goto REC_f_f_2;

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC__f_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
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
          A_1 = __VERIFIER_nondet_int ();
          B_1 = __VERIFIER_nondet_int ();
          C_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          v_7_1 = __VERIFIER_nondet_int ();
          F_1 = REC__f_0;
          G_1 = REC__f_1;
          E_1 = REC__f_2;
          if (!
              ((!(C_1 == 0)) && (!(C_1 == 1)) && (C_1 == (F_1 + 1))
               && (A_1 == 0) && (D_1 == (G_1 + -1)) && (v_7_1 == B_1)))
              abort ();
          REC_f_f_0 = A_1;
          REC_f_f_1 = B_1;
          REC_f_f_2 = v_7_1;
          REC_f_f_3 = C_1;
          REC_f_f_4 = D_1;
          REC_f_f_5 = E_1;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet_int ();
          E_4 = __VERIFIER_nondet_int ();
          G_4 = REC_f_f_0;
          H_4 = REC_f_f_1;
          C_4 = REC_f_f_2;
          I_4 = REC_f_f_3;
          J_4 = REC_f_f_4;
          F_4 = REC_f_f_5;
          if (!
              ((!(A_4 == 0)) && (A_4 == (G_4 + 1)) && (E_4 == (J_4 + -1))
               && (!(D_4 == 0)) && (!(D_4 == 1)) && (D_4 == (I_4 + 1))
               && (B_4 == (H_4 + -1))))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          REC_f_f_4 = E_4;
          REC_f_f_5 = F_4;
          goto REC_f_f_2;

      default:
          abort ();
      }
  REC_f__1:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          D_7 = REC_f__0;
          E_7 = REC_f__1;
          C_7 = REC_f__2;
          if (!((!(A_7 == 0)) && (A_7 == (D_7 + 1)) && (B_7 == (E_7 + -1))))
              abort ();
          REC_f__0 = A_7;
          REC_f__1 = B_7;
          REC_f__2 = C_7;
          goto REC_f__1;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          E_3 = __VERIFIER_nondet_int ();
          F_3 = __VERIFIER_nondet_int ();
          G_3 = REC_f__0;
          H_3 = REC_f__1;
          C_3 = REC_f__2;
          if (!
              ((A_3 == (G_3 + 1)) && (E_3 == (F_3 + -1)) && (!(D_3 == 0))
               && (D_3 == 1) && (B_3 == (H_3 + -1)) && (!(A_3 == 0))))
              abort ();
          REC_f_f_0 = A_3;
          REC_f_f_1 = B_3;
          REC_f_f_2 = C_3;
          REC_f_f_3 = D_3;
          REC_f_f_4 = E_3;
          REC_f_f_5 = F_3;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet_int ();
          E_4 = __VERIFIER_nondet_int ();
          G_4 = REC_f_f_0;
          H_4 = REC_f_f_1;
          C_4 = REC_f_f_2;
          I_4 = REC_f_f_3;
          J_4 = REC_f_f_4;
          F_4 = REC_f_f_5;
          if (!
              ((!(A_4 == 0)) && (A_4 == (G_4 + 1)) && (E_4 == (J_4 + -1))
               && (!(D_4 == 0)) && (!(D_4 == 1)) && (D_4 == (I_4 + 1))
               && (B_4 == (H_4 + -1))))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          REC_f_f_4 = E_4;
          REC_f_f_5 = F_4;
          goto REC_f_f_2;

      case 2:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          D_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          v_7_5 = __VERIFIER_nondet_int ();
          F_5 = REC_f__0;
          G_5 = REC_f__1;
          C_5 = REC_f__2;
          if (!
              ((B_5 == (G_5 + -1)) && (!(A_5 == 0)) && (A_5 == (F_5 + 1))
               && (D_5 == 0) && (v_7_5 == E_5)))
              abort ();
          REC_f_f_0 = A_5;
          REC_f_f_1 = B_5;
          REC_f_f_2 = C_5;
          REC_f_f_3 = D_5;
          REC_f_f_4 = E_5;
          REC_f_f_5 = v_7_5;
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet_int ();
          E_4 = __VERIFIER_nondet_int ();
          G_4 = REC_f_f_0;
          H_4 = REC_f_f_1;
          C_4 = REC_f_f_2;
          I_4 = REC_f_f_3;
          J_4 = REC_f_f_4;
          F_4 = REC_f_f_5;
          if (!
              ((!(A_4 == 0)) && (A_4 == (G_4 + 1)) && (E_4 == (J_4 + -1))
               && (!(D_4 == 0)) && (!(D_4 == 1)) && (D_4 == (I_4 + 1))
               && (B_4 == (H_4 + -1))))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          REC_f_f_4 = E_4;
          REC_f_f_5 = F_4;
          goto REC_f_f_2;

      default:
          abort ();
      }
  REC_f_f_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_11 = __VERIFIER_nondet_int ();
          E_11 = __VERIFIER_nondet_int ();
          G_11 = __VERIFIER_nondet_int ();
          I_11 = __VERIFIER_nondet_int ();
          D_11 = REC_f_f_0;
          F_11 = REC_f_f_1;
          A_11 = REC_f_f_2;
          H_11 = REC_f_f_3;
          J_11 = REC_f_f_4;
          B_11 = REC_f_f_5;
          if (!
              ((C_11 == (D_11 + 1)) && (C_11 == G_11) && (!(A_11 == B_11))
               && (I_11 == (J_11 + -1)) && (!(G_11 == 0)) && (!(G_11 == 1))
               && (G_11 == (H_11 + 1)) && (E_11 == (F_11 + -1))
               && (E_11 == I_11) && (!(C_11 == 0))))
              abort ();
          goto main_error;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          D_4 = __VERIFIER_nondet_int ();
          E_4 = __VERIFIER_nondet_int ();
          G_4 = REC_f_f_0;
          H_4 = REC_f_f_1;
          C_4 = REC_f_f_2;
          I_4 = REC_f_f_3;
          J_4 = REC_f_f_4;
          F_4 = REC_f_f_5;
          if (!
              ((!(A_4 == 0)) && (A_4 == (G_4 + 1)) && (E_4 == (J_4 + -1))
               && (!(D_4 == 0)) && (!(D_4 == 1)) && (D_4 == (I_4 + 1))
               && (B_4 == (H_4 + -1))))
              abort ();
          REC_f_f_0 = A_4;
          REC_f_f_1 = B_4;
          REC_f_f_2 = C_4;
          REC_f_f_3 = D_4;
          REC_f_f_4 = E_4;
          REC_f_f_5 = F_4;
          goto REC_f_f_2;

      default:
          abort ();
      }

    // return expression

}

