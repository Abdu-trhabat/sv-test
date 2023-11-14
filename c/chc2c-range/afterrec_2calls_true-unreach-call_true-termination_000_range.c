// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hcai-bench/afterrec_2calls_true-unreach-call_true-termination_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "afterrec_2calls_true-unreach-call_true-termination_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int main_f_0;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    int D_1;
    int E_1;
    _Bool A_2;
    _Bool B_2;
    _Bool C_2;
    _Bool D_2;
    int E_2;
    _Bool F_2;
    int G_2;
    _Bool H_2;
    _Bool I_2;
    int J_2;
    int K_2;
    _Bool A_3;
    int B_3;
    _Bool C_3;
    int D_3;
    _Bool E_3;
    int F_3;
    int G_3;
    _Bool H_3;
    _Bool I_3;
    _Bool J_3;
    _Bool K_3;
    _Bool L_3;
    _Bool M_3;
    _Bool N_3;
    _Bool O_3;
    _Bool P_3;
    _Bool Q_3;
    _Bool CHC_COMP_UNUSED_4;

    if (((main_f_0 <= -1000000000) || (main_f_0 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((J_2 <= -1000000000) || (J_2 >= 1000000000))
        || ((K_2 <= -1000000000) || (K_2 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((F_3 <= -1000000000) || (F_3 >= 1000000000))
        || ((G_3 <= -1000000000) || (G_3 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!1)
        abort ();
    A_1 = __VERIFIER_nondet__Bool ();
    B_1 = __VERIFIER_nondet__Bool ();
    C_1 = __VERIFIER_nondet__Bool ();
    D_1 = __VERIFIER_nondet_int ();
    if (((D_1 <= -1000000000) || (D_1 >= 1000000000)))
        abort ();
    E_1 = __VERIFIER_nondet_int ();
    if (((E_1 <= -1000000000) || (E_1 >= 1000000000)))
        abort ();
    if (!
        (((!C_1) || (!B_1) || (E_1 == D_1)) && ((!B_1) || (C_1 && B_1))
         && (!A_1) && B_1 && ((!C_1) || (!B_1) || (D_1 == 2))))
        abort ();
    main_f_0 = E_1;
    A_2 = __VERIFIER_nondet__Bool ();
    B_2 = __VERIFIER_nondet__Bool ();
    C_2 = __VERIFIER_nondet__Bool ();
    D_2 = __VERIFIER_nondet__Bool ();
    F_2 = __VERIFIER_nondet__Bool ();
    G_2 = __VERIFIER_nondet_int ();
    if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
        abort ();
    H_2 = __VERIFIER_nondet__Bool ();
    I_2 = __VERIFIER_nondet__Bool ();
    J_2 = __VERIFIER_nondet_int ();
    if (((J_2 <= -1000000000) || (J_2 >= 1000000000)))
        abort ();
    K_2 = __VERIFIER_nondet_int ();
    if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
        abort ();
    E_2 = main_f_0;
    if (!
        ((!((3 <= E_2) == A_2)) && ((!I_2) || (!C_2) || (!B_2))
         && ((!I_2) || (!H_2) || (J_2 == G_2)) && ((!I_2) || (!H_2)
                                                   || (K_2 == J_2)) && ((!I_2)
                                                                        ||
                                                                        (!H_2)
                                                                        ||
                                                                        (!F_2))
         && ((!H_2) || (I_2 && H_2)) && ((!I_2) || (G_2 == (E_2 + -2)))
         && ((!I_2) || (I_2 && B_2)) && ((!I_2) || (!D_2)) && (!A_2) && H_2
         && (!((4 <= E_2) == D_2))))
        abort ();
    main_f_0 = K_2;
    goto main_f_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  main_f_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = __VERIFIER_nondet__Bool ();
          C_3 = __VERIFIER_nondet__Bool ();
          D_3 = __VERIFIER_nondet_int ();
          if (((D_3 <= -1000000000) || (D_3 >= 1000000000)))
              abort ();
          E_3 = __VERIFIER_nondet__Bool ();
          F_3 = __VERIFIER_nondet_int ();
          if (((F_3 <= -1000000000) || (F_3 >= 1000000000)))
              abort ();
          G_3 = __VERIFIER_nondet_int ();
          if (((G_3 <= -1000000000) || (G_3 >= 1000000000)))
              abort ();
          H_3 = __VERIFIER_nondet__Bool ();
          I_3 = __VERIFIER_nondet__Bool ();
          J_3 = __VERIFIER_nondet__Bool ();
          K_3 = __VERIFIER_nondet__Bool ();
          L_3 = __VERIFIER_nondet__Bool ();
          M_3 = __VERIFIER_nondet__Bool ();
          N_3 = __VERIFIER_nondet__Bool ();
          O_3 = __VERIFIER_nondet__Bool ();
          P_3 = __VERIFIER_nondet__Bool ();
          Q_3 = __VERIFIER_nondet__Bool ();
          B_3 = main_f_0;
          if (!
              ((!((3 <= B_3) == A_3))
               && ((!P_3) || (O_3 && P_3) || (N_3 && P_3)) && ((!I_3)
                                                               || (!E_3)
                                                               || (!K_3))
               && ((!N_3) || (!E_3) || (F_3 == D_3)) && ((!N_3) || (!E_3)
                                                         || (G_3 == F_3))
               && ((!N_3) || (!E_3) || C_3) && ((!O_3) || (!K_3)
                                                || (L_3 == J_3)) && ((!O_3)
                                                                     || (!K_3)
                                                                     || (M_3
                                                                         ==
                                                                         L_3))
               && ((!O_3) || I_3 || (!K_3)) && ((!E_3) || (D_3 == (B_3 + -2)))
               && ((!E_3) || (K_3 && E_3)) && ((!Q_3) || (Q_3 && P_3))
               && ((!J_3) || (!E_3)) && ((!N_3) || (!((3 <= G_3) == H_3)))
               && ((!N_3) || (N_3 && E_3)) && ((!N_3) || H_3) && ((!O_3)
                                                                  || (O_3
                                                                      && K_3))
               && ((!O_3) || M_3) && (!A_3) && Q_3 && (!((4 <= B_3) == J_3))))
              abort ();
          CHC_COMP_UNUSED_4 = __VERIFIER_nondet__Bool ();
          if (!1)
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet__Bool ();
          B_2 = __VERIFIER_nondet__Bool ();
          C_2 = __VERIFIER_nondet__Bool ();
          D_2 = __VERIFIER_nondet__Bool ();
          F_2 = __VERIFIER_nondet__Bool ();
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet__Bool ();
          I_2 = __VERIFIER_nondet__Bool ();
          J_2 = __VERIFIER_nondet_int ();
          if (((J_2 <= -1000000000) || (J_2 >= 1000000000)))
              abort ();
          K_2 = __VERIFIER_nondet_int ();
          if (((K_2 <= -1000000000) || (K_2 >= 1000000000)))
              abort ();
          E_2 = main_f_0;
          if (!
              ((!((3 <= E_2) == A_2)) && ((!I_2) || (!C_2) || (!B_2))
               && ((!I_2) || (!H_2) || (J_2 == G_2)) && ((!I_2) || (!H_2)
                                                         || (K_2 == J_2))
               && ((!I_2) || (!H_2) || (!F_2)) && ((!H_2) || (I_2 && H_2))
               && ((!I_2) || (G_2 == (E_2 + -2))) && ((!I_2) || (I_2 && B_2))
               && ((!I_2) || (!D_2)) && (!A_2) && H_2
               && (!((4 <= E_2) == D_2))))
              abort ();
          main_f_0 = K_2;
          goto main_f_0;

      default:
          abort ();
      }

    // return expression

}

