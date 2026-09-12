// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/024b-horn_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "024b-horn_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int REC_g__0;
    int REC_g__1;
    int REC_g_g_0;
    int REC_g_g_1;
    int REC_g_g_2;
    int REC_g_g_3;
    int REC_g_g_4;
    int REC__g_0;
    int REC__g_1;
    int REC__g_2;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int G_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int v_4_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int E_3;
    int F_3;
    int v_6_3;
    int A_4;
    int B_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
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
    int C_8;
    int D_8;
    int E_8;



    // main logic
    goto main_init;

  main_init:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          if (!((A_4 <= 0) && (B_4 == 0)))
              abort ();
          REC_g__0 = A_4;
          REC_g__1 = B_4;
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          D_5 = REC_g__0;
          C_5 = REC_g__1;
          if (!((A_5 == (D_5 + 1)) && (!(A_5 <= 0)) && ((A_5 + C_5) == B_5)))
              abort ();
          REC_g__0 = A_5;
          REC_g__1 = B_5;
          goto REC_g__0;

      case 1:
          if (!((C_1 <= 0) && (A_1 <= 0) && (B_1 == 0) && (v_4_1 == D_1)))
              abort ();
          REC_g_g_0 = A_1;
          REC_g_g_1 = B_1;
          REC_g_g_2 = C_1;
          REC_g_g_3 = D_1;
          REC_g_g_4 = v_4_1;
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          G_2 = REC_g_g_0;
          F_2 = REC_g_g_1;
          H_2 = REC_g_g_2;
          I_2 = REC_g_g_3;
          E_2 = REC_g_g_4;
          if (!
              (((C_2 + D_2) == I_2) && (A_2 == (G_2 + 1))
               && (C_2 == (H_2 + 1)) && (!(A_2 <= 0)) && (!(C_2 <= 0))
               && ((A_2 + F_2) == B_2)))
              abort ();
          REC_g_g_0 = A_2;
          REC_g_g_1 = B_2;
          REC_g_g_2 = C_2;
          REC_g_g_3 = D_2;
          REC_g_g_4 = E_2;
          goto REC_g_g_1;

      case 2:
          if (!((A_6 <= 0) && (v_2_6 == B_6)))
              abort ();
          REC__g_0 = A_6;
          REC__g_1 = B_6;
          REC__g_2 = v_2_6;
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          D_7 = REC__g_0;
          E_7 = REC__g_1;
          C_7 = REC__g_2;
          if (!((A_7 == (D_7 + 1)) && (!(A_7 <= 0)) && ((A_7 + B_7) == E_7)))
              abort ();
          REC__g_0 = A_7;
          REC__g_1 = B_7;
          REC__g_2 = C_7;
          goto REC__g_2;

      default:
          abort ();
      }
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  REC_g__0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_5 = __VERIFIER_nondet_int ();
          B_5 = __VERIFIER_nondet_int ();
          D_5 = REC_g__0;
          C_5 = REC_g__1;
          if (!((A_5 == (D_5 + 1)) && (!(A_5 <= 0)) && ((A_5 + C_5) == B_5)))
              abort ();
          REC_g__0 = A_5;
          REC_g__1 = B_5;
          goto REC_g__0;

      case 1:
          A_3 = __VERIFIER_nondet_int ();
          B_3 = __VERIFIER_nondet_int ();
          C_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet_int ();
          v_6_3 = __VERIFIER_nondet_int ();
          F_3 = REC_g__0;
          E_3 = REC_g__1;
          if (!
              ((A_3 == (F_3 + 1)) && (!(A_3 <= 0)) && (C_3 <= 0)
               && ((A_3 + E_3) == B_3) && (v_6_3 == D_3)))
              abort ();
          REC_g_g_0 = A_3;
          REC_g_g_1 = B_3;
          REC_g_g_2 = C_3;
          REC_g_g_3 = D_3;
          REC_g_g_4 = v_6_3;
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          G_2 = REC_g_g_0;
          F_2 = REC_g_g_1;
          H_2 = REC_g_g_2;
          I_2 = REC_g_g_3;
          E_2 = REC_g_g_4;
          if (!
              (((C_2 + D_2) == I_2) && (A_2 == (G_2 + 1))
               && (C_2 == (H_2 + 1)) && (!(A_2 <= 0)) && (!(C_2 <= 0))
               && ((A_2 + F_2) == B_2)))
              abort ();
          REC_g_g_0 = A_2;
          REC_g_g_1 = B_2;
          REC_g_g_2 = C_2;
          REC_g_g_3 = D_2;
          REC_g_g_4 = E_2;
          goto REC_g_g_1;

      default:
          abort ();
      }
  REC_g_g_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_8 = REC_g_g_0;
          A_8 = REC_g_g_1;
          E_8 = REC_g_g_2;
          C_8 = REC_g_g_3;
          B_8 = REC_g_g_4;
          if (!((C_8 == 0) && (!(A_8 == B_8)) && (D_8 == E_8)))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          G_2 = REC_g_g_0;
          F_2 = REC_g_g_1;
          H_2 = REC_g_g_2;
          I_2 = REC_g_g_3;
          E_2 = REC_g_g_4;
          if (!
              (((C_2 + D_2) == I_2) && (A_2 == (G_2 + 1))
               && (C_2 == (H_2 + 1)) && (!(A_2 <= 0)) && (!(C_2 <= 0))
               && ((A_2 + F_2) == B_2)))
              abort ();
          REC_g_g_0 = A_2;
          REC_g_g_1 = B_2;
          REC_g_g_2 = C_2;
          REC_g_g_3 = D_2;
          REC_g_g_4 = E_2;
          goto REC_g_g_1;

      default:
          abort ();
      }
  REC__g_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_0 = __VERIFIER_nondet_int ();
          B_0 = __VERIFIER_nondet_int ();
          C_0 = __VERIFIER_nondet_int ();
          D_0 = __VERIFIER_nondet_int ();
          F_0 = REC__g_0;
          G_0 = REC__g_1;
          E_0 = REC__g_2;
          if (!
              ((B_0 == 0) && (C_0 == (F_0 + 1)) && (A_0 <= 0) && (!(C_0 <= 0))
               && ((C_0 + D_0) == G_0)))
              abort ();
          REC_g_g_0 = A_0;
          REC_g_g_1 = B_0;
          REC_g_g_2 = C_0;
          REC_g_g_3 = D_0;
          REC_g_g_4 = E_0;
          A_2 = __VERIFIER_nondet_int ();
          B_2 = __VERIFIER_nondet_int ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          G_2 = REC_g_g_0;
          F_2 = REC_g_g_1;
          H_2 = REC_g_g_2;
          I_2 = REC_g_g_3;
          E_2 = REC_g_g_4;
          if (!
              (((C_2 + D_2) == I_2) && (A_2 == (G_2 + 1))
               && (C_2 == (H_2 + 1)) && (!(A_2 <= 0)) && (!(C_2 <= 0))
               && ((A_2 + F_2) == B_2)))
              abort ();
          REC_g_g_0 = A_2;
          REC_g_g_1 = B_2;
          REC_g_g_2 = C_2;
          REC_g_g_3 = D_2;
          REC_g_g_4 = E_2;
          goto REC_g_g_1;

      case 1:
          A_7 = __VERIFIER_nondet_int ();
          B_7 = __VERIFIER_nondet_int ();
          D_7 = REC__g_0;
          E_7 = REC__g_1;
          C_7 = REC__g_2;
          if (!((A_7 == (D_7 + 1)) && (!(A_7 <= 0)) && ((A_7 + B_7) == E_7)))
              abort ();
          REC__g_0 = A_7;
          REC__g_1 = B_7;
          REC__g_2 = C_7;
          goto REC__g_2;

      default:
          abort ();
      }

    // return expression

}

