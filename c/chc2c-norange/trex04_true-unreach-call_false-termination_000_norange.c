// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/trex04_true-unreach-call_false-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "trex04_true-unreach-call_false-termination_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main__bb4_0;
    int main__bb4_1;
    int main_entry_0;
    int main_entry_1;
    int A_0;
    int B_0;
    int A_1;
    int B_1;
    int C_1;
    _Bool D_1;
    int E_1;
    int F_1;
    _Bool G_1;
    int H_1;
    int I_1;
    _Bool J_1;
    _Bool K_1;
    _Bool L_1;
    _Bool M_1;
    int N_1;
    int O_1;
    int P_1;
    int Q_1;
    int R_1;
    _Bool S_1;
    _Bool T_1;
    _Bool U_1;
    _Bool V_1;
    _Bool W_1;
    _Bool X_1;
    int Y_1;
    int Z_1;
    int A1_1;
    _Bool B1_1;
    _Bool C1_1;
    int D1_1;
    int E1_1;
    int F1_1;
    int A_2;
    _Bool B_2;
    int C_2;
    _Bool D_2;
    _Bool E_2;
    int F_2;
    int G_2;
    int H_2;
    int A_3;
    int B_3;
    int C_3;
    _Bool D_3;
    _Bool E_3;
    _Bool F_3;
    _Bool G_3;
    _Bool H_3;
    _Bool CHC_COMP_UNUSED_4;



    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    main_entry_0 = A_0;
    main_entry_1 = B_0;
    A_1 = __VERIFIER_nondet_int ();
    C_1 = __VERIFIER_nondet_int ();
    D_1 = __VERIFIER_nondet__Bool ();
    E_1 = __VERIFIER_nondet_int ();
    F_1 = __VERIFIER_nondet_int ();
    G_1 = __VERIFIER_nondet__Bool ();
    H_1 = __VERIFIER_nondet_int ();
    I_1 = __VERIFIER_nondet_int ();
    J_1 = __VERIFIER_nondet__Bool ();
    K_1 = __VERIFIER_nondet__Bool ();
    L_1 = __VERIFIER_nondet__Bool ();
    E1_1 = __VERIFIER_nondet_int ();
    M_1 = __VERIFIER_nondet__Bool ();
    N_1 = __VERIFIER_nondet_int ();
    C1_1 = __VERIFIER_nondet__Bool ();
    O_1 = __VERIFIER_nondet_int ();
    P_1 = __VERIFIER_nondet_int ();
    A1_1 = __VERIFIER_nondet_int ();
    Q_1 = __VERIFIER_nondet_int ();
    S_1 = __VERIFIER_nondet__Bool ();
    T_1 = __VERIFIER_nondet__Bool ();
    U_1 = __VERIFIER_nondet__Bool ();
    V_1 = __VERIFIER_nondet__Bool ();
    W_1 = __VERIFIER_nondet__Bool ();
    X_1 = __VERIFIER_nondet__Bool ();
    Y_1 = __VERIFIER_nondet_int ();
    Z_1 = __VERIFIER_nondet_int ();
    F1_1 = __VERIFIER_nondet_int ();
    D1_1 = __VERIFIER_nondet_int ();
    B1_1 = __VERIFIER_nondet__Bool ();
    R_1 = main_entry_0;
    B_1 = main_entry_1;
    if (!
        ((!(W_1 == G_1)) && (A_1 == B_1) && (C_1 == (A1_1 + 1000000))
         && (E_1 == R_1) && (F_1 == R_1) && (Z_1 == (G_1 ? 1 : 0)) && ((!J_1)
                                                                       ||
                                                                       (!K_1)
                                                                       || M_1)
         && ((!M_1) || (!L_1) || (!K_1)) && ((!T_1) || (T_1 && J_1)
                                             || (L_1 && K_1)) && ((!S_1)
                                                                  || (!T_1)
                                                                  || V_1)
         && ((!V_1) || (!U_1) || (!T_1)) && ((!C1_1) || (C1_1 && S_1)
                                             || (U_1 && T_1)) && ((!C1_1)
                                                                  || (!B1_1)
                                                                  || (D1_1 ==
                                                                      A1_1))
         && ((!C1_1) || (!B1_1) || (E1_1 == D1_1)) && ((!J_1) || (H_1 == R_1))
         && ((!J_1) || (I_1 == R_1)) && ((!J_1) || (K_1 && J_1)) && ((!L_1)
                                                                     || K_1)
         && ((!S_1) || (P_1 == R_1)) && ((!S_1) || (Q_1 == R_1)) && ((!S_1)
                                                                     || (T_1
                                                                         &&
                                                                         S_1))
         && ((!T_1) || (N_1 == R_1)) && ((!T_1) || (O_1 == R_1)) && ((!U_1)
                                                                     || T_1)
         && ((!B1_1) || (C1_1 && B1_1)) && ((!C1_1)
                                            || (Y_1 == (W_1 ? -1 : 0)))
         && ((!C1_1) || (F1_1 == (X_1 ? Y_1 : Z_1))) && D_1 && B1_1
         && (D_1 == ((!(2000001 <= C_1)) && (C_1 >= 0)))))
        abort ();
    main__bb4_0 = E1_1;
    main__bb4_1 = F1_1;
    B_2 = __VERIFIER_nondet__Bool ();
    C_2 = __VERIFIER_nondet_int ();
    D_2 = __VERIFIER_nondet__Bool ();
    E_2 = __VERIFIER_nondet__Bool ();
    F_2 = __VERIFIER_nondet_int ();
    G_2 = __VERIFIER_nondet_int ();
    A_2 = main__bb4_0;
    H_2 = main__bb4_1;
    if (!
        ((C_2 == (A_2 + (-1 * H_2))) && ((!E_2) || (!D_2) || (F_2 == C_2))
         && ((!E_2) || (!D_2) || (G_2 == F_2)) && ((!D_2) || B_2 || (!E_2))
         && ((!D_2) || (E_2 && D_2)) && D_2 && (!((A_2 <= 0) == B_2))))
        abort ();
    main__bb4_0 = G_2;
    main__bb4_1 = H_2;
    goto main__bb4_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  main__bb4_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet_int ();
          D_3 = __VERIFIER_nondet__Bool ();
          E_3 = __VERIFIER_nondet__Bool ();
          F_3 = __VERIFIER_nondet__Bool ();
          G_3 = __VERIFIER_nondet__Bool ();
          H_3 = __VERIFIER_nondet__Bool ();
          B_3 = main__bb4_0;
          C_3 = main__bb4_1;
          if (!
              ((A_3 == (B_3 + (-1 * C_3))) && ((!G_3) || (!E_3) || (!D_3))
               && ((!G_3) || (G_3 && D_3)) && ((!G_3) || (!F_3)) && ((!H_3)
                                                                     || (H_3
                                                                         &&
                                                                         G_3))
               && (!G_3) && H_3 && (!((B_3 <= 0) == E_3))))
              abort ();
          CHC_COMP_UNUSED_4 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet__Bool ();
          E_2 = __VERIFIER_nondet__Bool ();
          F_2 = __VERIFIER_nondet_int ();
          G_2 = __VERIFIER_nondet_int ();
          A_2 = main__bb4_0;
          H_2 = main__bb4_1;
          if (!
              ((C_2 == (A_2 + (-1 * H_2)))
               && ((!E_2) || (!D_2) || (F_2 == C_2)) && ((!E_2) || (!D_2)
                                                         || (G_2 == F_2))
               && ((!D_2) || B_2 || (!E_2)) && ((!D_2) || (E_2 && D_2)) && D_2
               && (!((A_2 <= 0) == B_2))))
              abort ();
          main__bb4_0 = G_2;
          main__bb4_1 = H_2;
          goto main__bb4_0;

      default:
          abort ();
      }

    // return expression

}

