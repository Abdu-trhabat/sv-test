// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/s_multipl_24_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "s_multipl_24_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int FUN_0;
    int FUN_1;
    int FUN_2;
    int FUN_3;
    int SAD_0;
    int SAD_1;
    int SAD_2;
    int SAD_3;
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
    int F_1;
    int G_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int v_6_2;
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

    if (((FUN_0 <= -1000000000) || (FUN_0 >= 1000000000))
        || ((FUN_1 <= -1000000000) || (FUN_1 >= 1000000000))
        || ((FUN_2 <= -1000000000) || (FUN_2 >= 1000000000))
        || ((FUN_3 <= -1000000000) || (FUN_3 >= 1000000000))
        || ((SAD_0 <= -1000000000) || (SAD_0 >= 1000000000))
        || ((SAD_1 <= -1000000000) || (SAD_1 >= 1000000000))
        || ((SAD_2 <= -1000000000) || (SAD_2 >= 1000000000))
        || ((SAD_3 <= -1000000000) || (SAD_3 >= 1000000000))
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
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((v_6_2 <= -1000000000) || (v_6_2 >= 1000000000))
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
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((C_0 == 0) && (B_0 == 0) && (!(D_0 <= 0)) && (D_0 == ((2 * A_0) + 1))
         && (0 == v_4_0)))
        abort ();
    FUN_0 = B_0;
    FUN_1 = C_0;
    FUN_2 = v_4_0;
    FUN_3 = D_0;
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
    E_1 = __VERIFIER_nondet_int ();
    if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
        abort ();
    F_1 = __VERIFIER_nondet_int ();
    if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
        abort ();
    A_1 = FUN_0;
    C_1 = FUN_1;
    B_1 = FUN_2;
    G_1 = FUN_3;
    if (!
        ((E_1 == ((B_1 == 0) ? (C_1 + 1) : C_1)) && (D_1 == (A_1 + 1))
         && (!(G_1 <= A_1)) && (F_1 == ((B_1 == 0) ? 1 : 0))))
        abort ();
    FUN_0 = D_1;
    FUN_1 = E_1;
    FUN_2 = F_1;
    FUN_3 = G_1;
    goto FUN_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  FUN_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          A_1 = FUN_0;
          C_1 = FUN_1;
          B_1 = FUN_2;
          G_1 = FUN_3;
          if (!
              ((E_1 == ((B_1 == 0) ? (C_1 + 1) : C_1)) && (D_1 == (A_1 + 1))
               && (!(G_1 <= A_1)) && (F_1 == ((B_1 == 0) ? 1 : 0))))
              abort ();
          FUN_0 = D_1;
          FUN_1 = E_1;
          FUN_2 = F_1;
          FUN_3 = G_1;
          goto FUN_0;

      case 1:
          D_2 = __VERIFIER_nondet_int ();
          if (((D_2 <= -1000000000) || (D_2 >= 1000000000)))
              abort ();
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          v_6_2 = __VERIFIER_nondet_int ();
          if (((v_6_2 <= -1000000000) || (v_6_2 >= 1000000000)))
              abort ();
          A_2 = FUN_0;
          C_2 = FUN_1;
          B_2 = FUN_2;
          F_2 = FUN_3;
          if (!((D_2 == 0) && (C_2 >= F_2) && (E_2 == C_2) && (0 == v_6_2)))
              abort ();
          SAD_0 = D_2;
          SAD_1 = E_2;
          SAD_2 = v_6_2;
          SAD_3 = F_2;
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          E_3 = __VERIFIER_nondet_int ();
          if (((E_3 <= -1000000000) || (E_3 >= 1000000000)))
              abort ();
          F_3 = __VERIFIER_nondet_int ();
          if (((F_3 <= -1000000000) || (F_3 >= 1000000000)))
              abort ();
          A_3 = SAD_0;
          C_3 = SAD_1;
          B_3 = SAD_2;
          G_3 = SAD_3;
          if (!
              ((E_3 == ((B_3 == 1) ? (C_3 + 1) : C_3)) && (D_3 == (A_3 + 1))
               && (!(G_3 <= A_3)) && (F_3 == ((B_3 == 0) ? 1 : 0))))
              abort ();
          SAD_0 = D_3;
          SAD_1 = E_3;
          SAD_2 = F_3;
          SAD_3 = G_3;
          goto SAD_1;

      default:
          abort ();
      }
  SAD_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_4 = SAD_0;
          D_4 = SAD_1;
          A_4 = SAD_2;
          C_4 = SAD_3;
          if (!((B_4 >= C_4) && (!(C_4 == D_4))))
              abort ();
          goto main_error;

      case 1:
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          E_3 = __VERIFIER_nondet_int ();
          if (((E_3 <= -1000000000) || (E_3 >= 1000000000)))
              abort ();
          F_3 = __VERIFIER_nondet_int ();
          if (((F_3 <= -1000000000) || (F_3 >= 1000000000)))
              abort ();
          A_3 = SAD_0;
          C_3 = SAD_1;
          B_3 = SAD_2;
          G_3 = SAD_3;
          if (!
              ((E_3 == ((B_3 == 1) ? (C_3 + 1) : C_3)) && (D_3 == (A_3 + 1))
               && (!(G_3 <= A_3)) && (F_3 == ((B_3 == 0) ? 1 : 0))))
              abort ();
          SAD_0 = D_3;
          SAD_1 = E_3;
          SAD_2 = F_3;
          SAD_3 = G_3;
          goto SAD_1;

      default:
          abort ();
      }

    // return expression

}

