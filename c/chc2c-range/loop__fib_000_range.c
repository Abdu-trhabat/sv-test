// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: llreve-bench/loop__fib_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop__fib_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int INV_MAIN_42_0;
    int INV_MAIN_42_1;
    int INV_MAIN_42_2;
    int INV_MAIN_42_3;
    int INV_MAIN_42_4;
    int INV_MAIN_42_5;
    int A_0;
    int B_0;
    int v_2_0;
    int v_3_0;
    int v_4_0;
    int v_5_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    int J_1;
    int K_1;
    int L_1;
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
    int G_3;
    int H_3;
    int I_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;

    if (((INV_MAIN_42_0 <= -1000000000) || (INV_MAIN_42_0 >= 1000000000))
        || ((INV_MAIN_42_1 <= -1000000000) || (INV_MAIN_42_1 >= 1000000000))
        || ((INV_MAIN_42_2 <= -1000000000) || (INV_MAIN_42_2 >= 1000000000))
        || ((INV_MAIN_42_3 <= -1000000000) || (INV_MAIN_42_3 >= 1000000000))
        || ((INV_MAIN_42_4 <= -1000000000) || (INV_MAIN_42_4 >= 1000000000))
        || ((INV_MAIN_42_5 <= -1000000000) || (INV_MAIN_42_5 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((v_2_0 <= -1000000000) || (v_2_0 >= 1000000000))
        || ((v_3_0 <= -1000000000) || (v_3_0 >= 1000000000))
        || ((v_4_0 <= -1000000000) || (v_4_0 >= 1000000000))
        || ((v_5_0 <= -1000000000) || (v_5_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((J_1 <= -1000000000) || (J_1 >= 1000000000))
        || ((K_1 <= -1000000000) || (K_1 >= 1000000000))
        || ((L_1 <= -1000000000) || (L_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((E_3 <= -1000000000) || (E_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000))
        || ((H_3 <= -1000000000) || (H_3 >= 1000000000))
        || ((I_3 <= -1000000000) || (I_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000))
        || ((E_4 <= -1000000000) || (E_4 >= 1000000000))
        || ((F_4 <= -1000000000) || (F_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((A_0 == (B_0 + 1)) && (0 == v_2_0) && (1 == v_3_0) && (1 == v_4_0)
         && (1 == v_5_0)))
        abort ();
    INV_MAIN_42_0 = v_2_0;
    INV_MAIN_42_1 = v_3_0;
    INV_MAIN_42_2 = A_0;
    INV_MAIN_42_3 = v_4_0;
    INV_MAIN_42_4 = v_5_0;
    INV_MAIN_42_5 = B_0;
    A_3 = __VERIFIER_nondet_int ();
    if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
        abort ();
    B_3 = __VERIFIER_nondet_int ();
    if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
        abort ();
    C_3 = __VERIFIER_nondet_int ();
    if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
        abort ();
    D_3 = INV_MAIN_42_0;
    E_3 = INV_MAIN_42_1;
    F_3 = INV_MAIN_42_2;
    G_3 = INV_MAIN_42_3;
    H_3 = INV_MAIN_42_4;
    I_3 = INV_MAIN_42_5;
    if (!
        ((B_3 == (G_3 + H_3)) && (C_3 == (G_3 + H_3)) && (F_3 <= 0)
         && (!(I_3 <= 0)) && (A_3 == (I_3 + -1))))
        abort ();
    INV_MAIN_42_0 = D_3;
    INV_MAIN_42_1 = E_3;
    INV_MAIN_42_2 = F_3;
    INV_MAIN_42_3 = C_3;
    INV_MAIN_42_4 = B_3;
    INV_MAIN_42_5 = A_3;
    goto INV_MAIN_42_2;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  INV_MAIN_42_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          A_4 = INV_MAIN_42_0;
          B_4 = INV_MAIN_42_1;
          C_4 = INV_MAIN_42_2;
          D_4 = INV_MAIN_42_3;
          E_4 = INV_MAIN_42_4;
          F_4 = INV_MAIN_42_5;
          if (!((C_4 <= 0) && (F_4 <= 0) && (!(B_4 == E_4))))
              abort ();
          goto main_error;

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
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          G_1 = INV_MAIN_42_0;
          H_1 = INV_MAIN_42_1;
          I_1 = INV_MAIN_42_2;
          J_1 = INV_MAIN_42_3;
          K_1 = INV_MAIN_42_4;
          L_1 = INV_MAIN_42_5;
          if (!
              ((B_1 == (J_1 + K_1)) && (C_1 == (J_1 + K_1))
               && (D_1 == (I_1 + -1)) && (E_1 == (G_1 + H_1))
               && (F_1 == (G_1 + H_1)) && (!(I_1 <= 0)) && (!(L_1 <= 0))
               && (A_1 == (L_1 + -1))))
              abort ();
          INV_MAIN_42_0 = F_1;
          INV_MAIN_42_1 = E_1;
          INV_MAIN_42_2 = D_1;
          INV_MAIN_42_3 = C_1;
          INV_MAIN_42_4 = B_1;
          INV_MAIN_42_5 = A_1;
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = INV_MAIN_42_0;
          E_3 = INV_MAIN_42_1;
          F_3 = INV_MAIN_42_2;
          G_3 = INV_MAIN_42_3;
          H_3 = INV_MAIN_42_4;
          I_3 = INV_MAIN_42_5;
          if (!
              ((B_3 == (G_3 + H_3)) && (C_3 == (G_3 + H_3)) && (F_3 <= 0)
               && (!(I_3 <= 0)) && (A_3 == (I_3 + -1))))
              abort ();
          INV_MAIN_42_0 = D_3;
          INV_MAIN_42_1 = E_3;
          INV_MAIN_42_2 = F_3;
          INV_MAIN_42_3 = C_3;
          INV_MAIN_42_4 = B_3;
          INV_MAIN_42_5 = A_3;
          goto INV_MAIN_42_2;

      case 2:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = INV_MAIN_42_0;
          E_3 = INV_MAIN_42_1;
          F_3 = INV_MAIN_42_2;
          G_3 = INV_MAIN_42_3;
          H_3 = INV_MAIN_42_4;
          I_3 = INV_MAIN_42_5;
          if (!
              ((B_3 == (G_3 + H_3)) && (C_3 == (G_3 + H_3)) && (F_3 <= 0)
               && (!(I_3 <= 0)) && (A_3 == (I_3 + -1))))
              abort ();
          INV_MAIN_42_0 = D_3;
          INV_MAIN_42_1 = E_3;
          INV_MAIN_42_2 = F_3;
          INV_MAIN_42_3 = C_3;
          INV_MAIN_42_4 = B_3;
          INV_MAIN_42_5 = A_3;
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = INV_MAIN_42_0;
          E_3 = INV_MAIN_42_1;
          F_3 = INV_MAIN_42_2;
          G_3 = INV_MAIN_42_3;
          H_3 = INV_MAIN_42_4;
          I_3 = INV_MAIN_42_5;
          if (!
              ((B_3 == (G_3 + H_3)) && (C_3 == (G_3 + H_3)) && (F_3 <= 0)
               && (!(I_3 <= 0)) && (A_3 == (I_3 + -1))))
              abort ();
          INV_MAIN_42_0 = D_3;
          INV_MAIN_42_1 = E_3;
          INV_MAIN_42_2 = F_3;
          INV_MAIN_42_3 = C_3;
          INV_MAIN_42_4 = B_3;
          INV_MAIN_42_5 = A_3;
          goto INV_MAIN_42_2;

      case 3:
          A_3 = __VERIFIER_nondet_int ();
          if (((A_3 <= -1000000000) || (A_3 >= 1000000000)))
              abort ();
          B_3 = __VERIFIER_nondet_int ();
          if (((B_3 <= -1000000000) || (B_3 >= 1000000000)))
              abort ();
          C_3 = __VERIFIER_nondet_int ();
          if (((C_3 <= -1000000000) || (C_3 >= 1000000000)))
              abort ();
          D_3 = INV_MAIN_42_0;
          E_3 = INV_MAIN_42_1;
          F_3 = INV_MAIN_42_2;
          G_3 = INV_MAIN_42_3;
          H_3 = INV_MAIN_42_4;
          I_3 = INV_MAIN_42_5;
          if (!
              ((B_3 == (G_3 + H_3)) && (C_3 == (G_3 + H_3)) && (F_3 <= 0)
               && (!(I_3 <= 0)) && (A_3 == (I_3 + -1))))
              abort ();
          INV_MAIN_42_0 = D_3;
          INV_MAIN_42_1 = E_3;
          INV_MAIN_42_2 = F_3;
          INV_MAIN_42_3 = C_3;
          INV_MAIN_42_4 = B_3;
          INV_MAIN_42_5 = A_3;
          goto INV_MAIN_42_2;

      default:
          abort ();
      }
  INV_MAIN_42_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = __VERIFIER_nondet_int ();
          if (((A_2 <= -1000000000) || (A_2 >= 1000000000)))
              abort ();
          B_2 = __VERIFIER_nondet_int ();
          if (((B_2 <= -1000000000) || (B_2 >= 1000000000)))
              abort ();
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          D_2 = INV_MAIN_42_0;
          E_2 = INV_MAIN_42_1;
          F_2 = INV_MAIN_42_2;
          G_2 = INV_MAIN_42_3;
          H_2 = INV_MAIN_42_4;
          I_2 = INV_MAIN_42_5;
          if (!
              ((B_2 == (D_2 + E_2)) && (C_2 == (D_2 + E_2)) && (!(F_2 <= 0))
               && (I_2 <= 0) && (A_2 == (F_2 + -1))))
              abort ();
          INV_MAIN_42_0 = C_2;
          INV_MAIN_42_1 = B_2;
          INV_MAIN_42_2 = A_2;
          INV_MAIN_42_3 = G_2;
          INV_MAIN_42_4 = H_2;
          INV_MAIN_42_5 = I_2;
          goto INV_MAIN_42_0;

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
          D_3 = INV_MAIN_42_0;
          E_3 = INV_MAIN_42_1;
          F_3 = INV_MAIN_42_2;
          G_3 = INV_MAIN_42_3;
          H_3 = INV_MAIN_42_4;
          I_3 = INV_MAIN_42_5;
          if (!
              ((B_3 == (G_3 + H_3)) && (C_3 == (G_3 + H_3)) && (F_3 <= 0)
               && (!(I_3 <= 0)) && (A_3 == (I_3 + -1))))
              abort ();
          INV_MAIN_42_0 = D_3;
          INV_MAIN_42_1 = E_3;
          INV_MAIN_42_2 = F_3;
          INV_MAIN_42_3 = C_3;
          INV_MAIN_42_4 = B_3;
          INV_MAIN_42_5 = A_3;
          goto INV_MAIN_42_2;

      default:
          abort ();
      }
  INV_MAIN_42_2:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_1 = __VERIFIER_nondet_int ();
          if (((A_1 <= -1000000000) || (A_1 >= 1000000000)))
              abort ();
          B_1 = __VERIFIER_nondet_int ();
          if (((B_1 <= -1000000000) || (B_1 >= 1000000000)))
              abort ();
          C_1 = __VERIFIER_nondet_int ();
          if (((C_1 <= -1000000000) || (C_1 >= 1000000000)))
              abort ();
          D_1 = __VERIFIER_nondet_int ();
          if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
              abort ();
          E_1 = __VERIFIER_nondet_int ();
          if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
              abort ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          G_1 = INV_MAIN_42_0;
          H_1 = INV_MAIN_42_1;
          I_1 = INV_MAIN_42_2;
          J_1 = INV_MAIN_42_3;
          K_1 = INV_MAIN_42_4;
          L_1 = INV_MAIN_42_5;
          if (!
              ((B_1 == (J_1 + K_1)) && (C_1 == (J_1 + K_1))
               && (D_1 == (I_1 + -1)) && (E_1 == (G_1 + H_1))
               && (F_1 == (G_1 + H_1)) && (!(I_1 <= 0)) && (!(L_1 <= 0))
               && (A_1 == (L_1 + -1))))
              abort ();
          INV_MAIN_42_0 = F_1;
          INV_MAIN_42_1 = E_1;
          INV_MAIN_42_2 = D_1;
          INV_MAIN_42_3 = C_1;
          INV_MAIN_42_4 = B_1;
          INV_MAIN_42_5 = A_1;
          goto INV_MAIN_42_1;

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
          D_3 = INV_MAIN_42_0;
          E_3 = INV_MAIN_42_1;
          F_3 = INV_MAIN_42_2;
          G_3 = INV_MAIN_42_3;
          H_3 = INV_MAIN_42_4;
          I_3 = INV_MAIN_42_5;
          if (!
              ((B_3 == (G_3 + H_3)) && (C_3 == (G_3 + H_3)) && (F_3 <= 0)
               && (!(I_3 <= 0)) && (A_3 == (I_3 + -1))))
              abort ();
          INV_MAIN_42_0 = D_3;
          INV_MAIN_42_1 = E_3;
          INV_MAIN_42_2 = F_3;
          INV_MAIN_42_3 = C_3;
          INV_MAIN_42_4 = B_3;
          INV_MAIN_42_5 = A_3;
          goto INV_MAIN_42_2;

      default:
          abort ();
      }

    // return expression

}

