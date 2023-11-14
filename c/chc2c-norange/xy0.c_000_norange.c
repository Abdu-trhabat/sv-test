// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/xy0.c_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "xy0.c_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    _Bool state_0;
    _Bool state_1;
    _Bool state_2;
    _Bool state_3;
    int state_4;
    int state_5;
    _Bool A_0;
    _Bool B_0;
    int C_0;
    int D_0;
    _Bool E_0;
    _Bool F_0;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    _Bool D_1;
    _Bool E_1;
    _Bool F_1;
    int G_1;
    int H_1;
    int I_1;
    int J_1;
    int K_1;
    _Bool L_1;
    _Bool M_1;
    _Bool A_2;
    _Bool B_2;
    int C_2;
    int D_2;
    _Bool E_2;
    _Bool F_2;



    // main logic
    goto main_init;

  main_init:
    if (!(A_0 && (!F_0) && (!E_0) && (!B_0)))
        abort ();
    state_0 = B_0;
    state_1 = A_0;
    state_2 = F_0;
    state_3 = E_0;
    state_4 = C_0;
    state_5 = D_0;
    C_1 = __VERIFIER_nondet__Bool ();
    D_1 = __VERIFIER_nondet__Bool ();
    E_1 = __VERIFIER_nondet__Bool ();
    F_1 = __VERIFIER_nondet__Bool ();
    G_1 = __VERIFIER_nondet_int ();
    I_1 = __VERIFIER_nondet_int ();
    K_1 = __VERIFIER_nondet_int ();
    B_1 = state_0;
    A_1 = state_1;
    M_1 = state_2;
    L_1 = state_3;
    H_1 = state_4;
    J_1 = state_5;
    if (!
        ((M_1 || (!L_1) || (!B_1) || (!A_1) || (J_1 <= -1)
          || (F_1 && E_1 && (!D_1) && (!C_1) && (H_1 == G_1) && (J_1 == I_1)))
         && (L_1 || (!M_1) || (!B_1) || (!A_1) || (!(H_1 <= 0))
             || (F_1 && (!E_1) && D_1 && C_1 && (H_1 == G_1) && (J_1 == I_1)))
         && (L_1 || (!M_1) || (!B_1) || (!A_1) || (H_1 <= 0)
             || (F_1 && (!E_1) && (!D_1) && (!C_1) && (H_1 == G_1)
                 && (J_1 == I_1))) && (L_1 || M_1 || (!B_1) || (!A_1)
                                       || (K_1 == 0) || ((!F_1) && E_1 && D_1
                                                         && C_1
                                                         && (H_1 == G_1)
                                                         && (J_1 == I_1)))
         && (L_1 || M_1 || (!B_1) || (!A_1) || (!(K_1 == 0))
             || ((!F_1) && E_1 && (!D_1) && (!C_1) && (H_1 == G_1)
                 && (J_1 == I_1))) && (A_1 || B_1 || L_1 || (!M_1) || ((!F_1)
                                                                       && E_1
                                                                       && D_1
                                                                       &&
                                                                       (!C_1)
                                                                       && (J_1
                                                                           ==
                                                                           I_1)
                                                                       &&
                                                                       ((H_1 +
                                                                         (-1 *
                                                                          G_1))
                                                                        ==
                                                                        -1)))
         && (A_1 || B_1 || M_1 || (!L_1)
             || (F_1 && (!E_1) && D_1 && (!C_1) && (J_1 == I_1)
                 && ((H_1 + (-1 * G_1)) == 1))) && (B_1 || L_1 || (!M_1)
                                                    || (!A_1) || ((!F_1)
                                                                  && E_1
                                                                  && (!D_1)
                                                                  && C_1
                                                                  && (H_1 ==
                                                                      G_1)
                                                                  &&
                                                                  ((J_1 +
                                                                    (-1 *
                                                                     I_1)) ==
                                                                   -1)))
         && (B_1 || M_1 || (!L_1) || (!A_1)
             || (F_1 && (!E_1) && (!D_1) && C_1 && (H_1 == G_1)
                 && ((J_1 + (-1 * I_1)) == 1))) && (A_1 || B_1 || (!L_1)
                                                    || (!M_1) || (F_1 && E_1
                                                                  && D_1
                                                                  && (!C_1)
                                                                  && (H_1 ==
                                                                      G_1)
                                                                  && (J_1 ==
                                                                      I_1)))
         && (A_1 || (!L_1) || (!M_1) || (!B_1)
             || (F_1 && E_1 && (!D_1) && C_1 && (H_1 == G_1) && (J_1 == I_1)))
         && (A_1 || M_1 || (!L_1) || (!B_1)
             || ((!F_1) && E_1 && D_1 && C_1 && (H_1 == G_1) && (J_1 == I_1)))
         && (A_1 || L_1 || (!M_1) || (!B_1)
             || ((!F_1) && (!E_1) && D_1 && C_1 && (H_1 == G_1)
                 && (J_1 == I_1))) && (A_1 || B_1 || L_1 || M_1 || ((!F_1)
                                                                    && (!E_1)
                                                                    && (!D_1)
                                                                    && (!C_1)
                                                                    && (H_1 ==
                                                                        G_1)
                                                                    && (J_1 ==
                                                                        I_1)))
         && (B_1 || (!L_1) || (!M_1) || (!A_1)
             || ((!F_1) && (!E_1) && (!D_1) && (!C_1) && (H_1 == G_1)
                 && (J_1 == I_1))) && (B_1 || L_1 || M_1 || (!A_1) || ((!F_1)
                                                                       &&
                                                                       (!E_1)
                                                                       &&
                                                                       (!D_1)
                                                                       && C_1
                                                                       && (G_1
                                                                           ==
                                                                           0)
                                                                       && (J_1
                                                                           ==
                                                                           I_1)))
         && (A_1 || L_1 || M_1 || (!B_1)
             || ((!F_1) && (!E_1) && D_1 && C_1 && (I_1 == 0)
                 && (H_1 == G_1))) && (M_1 || (!L_1) || (!B_1) || (!A_1)
                                       || (!(J_1 <= -1)) || (F_1 && E_1
                                                             && (!D_1) && C_1
                                                             && (H_1 == G_1)
                                                             && (J_1 ==
                                                                 I_1)))))
        abort ();
    state_0 = C_1;
    state_1 = D_1;
    state_2 = E_1;
    state_3 = F_1;
    state_4 = G_1;
    state_5 = I_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_2 = state_0;
          A_2 = state_1;
          F_2 = state_2;
          E_2 = state_3;
          C_2 = state_4;
          D_2 = state_5;
          if (!((!A_2) && F_2 && E_2 && B_2))
              abort ();
          goto main_error;

      case 1:
          C_1 = __VERIFIER_nondet__Bool ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet_int ();
          I_1 = __VERIFIER_nondet_int ();
          K_1 = __VERIFIER_nondet_int ();
          B_1 = state_0;
          A_1 = state_1;
          M_1 = state_2;
          L_1 = state_3;
          H_1 = state_4;
          J_1 = state_5;
          if (!
              ((M_1 || (!L_1) || (!B_1) || (!A_1) || (J_1 <= -1)
                || (F_1 && E_1 && (!D_1) && (!C_1) && (H_1 == G_1)
                    && (J_1 == I_1))) && (L_1 || (!M_1) || (!B_1) || (!A_1)
                                          || (!(H_1 <= 0)) || (F_1 && (!E_1)
                                                               && D_1 && C_1
                                                               && (H_1 == G_1)
                                                               && (J_1 ==
                                                                   I_1)))
               && (L_1 || (!M_1) || (!B_1) || (!A_1) || (H_1 <= 0)
                   || (F_1 && (!E_1) && (!D_1) && (!C_1) && (H_1 == G_1)
                       && (J_1 == I_1))) && (L_1 || M_1 || (!B_1) || (!A_1)
                                             || (K_1 == 0) || ((!F_1) && E_1
                                                               && D_1 && C_1
                                                               && (H_1 == G_1)
                                                               && (J_1 ==
                                                                   I_1)))
               && (L_1 || M_1 || (!B_1) || (!A_1) || (!(K_1 == 0))
                   || ((!F_1) && E_1 && (!D_1) && (!C_1) && (H_1 == G_1)
                       && (J_1 == I_1))) && (A_1 || B_1 || L_1 || (!M_1)
                                             || ((!F_1) && E_1 && D_1
                                                 && (!C_1) && (J_1 == I_1)
                                                 && ((H_1 + (-1 * G_1)) ==
                                                     -1))) && (A_1 || B_1
                                                               || M_1
                                                               || (!L_1)
                                                               || (F_1
                                                                   && (!E_1)
                                                                   && D_1
                                                                   && (!C_1)
                                                                   && (J_1 ==
                                                                       I_1)
                                                                   &&
                                                                   ((H_1 +
                                                                     (-1 *
                                                                      G_1)) ==
                                                                    1)))
               && (B_1 || L_1 || (!M_1) || (!A_1)
                   || ((!F_1) && E_1 && (!D_1) && C_1 && (H_1 == G_1)
                       && ((J_1 + (-1 * I_1)) == -1))) && (B_1 || M_1
                                                           || (!L_1) || (!A_1)
                                                           || (F_1 && (!E_1)
                                                               && (!D_1)
                                                               && C_1
                                                               && (H_1 == G_1)
                                                               &&
                                                               ((J_1 +
                                                                 (-1 *
                                                                  I_1)) ==
                                                                1))) && (A_1
                                                                         ||
                                                                         B_1
                                                                         ||
                                                                         (!L_1)
                                                                         ||
                                                                         (!M_1)
                                                                         ||
                                                                         (F_1
                                                                          &&
                                                                          E_1
                                                                          &&
                                                                          D_1
                                                                          &&
                                                                          (!C_1)
                                                                          &&
                                                                          (H_1
                                                                           ==
                                                                           G_1)
                                                                          &&
                                                                          (J_1
                                                                           ==
                                                                           I_1)))
               && (A_1 || (!L_1) || (!M_1) || (!B_1)
                   || (F_1 && E_1 && (!D_1) && C_1 && (H_1 == G_1)
                       && (J_1 == I_1))) && (A_1 || M_1 || (!L_1) || (!B_1)
                                             || ((!F_1) && E_1 && D_1 && C_1
                                                 && (H_1 == G_1)
                                                 && (J_1 == I_1))) && (A_1
                                                                       || L_1
                                                                       ||
                                                                       (!M_1)
                                                                       ||
                                                                       (!B_1)
                                                                       ||
                                                                       ((!F_1)
                                                                        &&
                                                                        (!E_1)
                                                                        && D_1
                                                                        && C_1
                                                                        &&
                                                                        (H_1
                                                                         ==
                                                                         G_1)
                                                                        &&
                                                                        (J_1
                                                                         ==
                                                                         I_1)))
               && (A_1 || B_1 || L_1 || M_1
                   || ((!F_1) && (!E_1) && (!D_1) && (!C_1) && (H_1 == G_1)
                       && (J_1 == I_1))) && (B_1 || (!L_1) || (!M_1) || (!A_1)
                                             || ((!F_1) && (!E_1) && (!D_1)
                                                 && (!C_1) && (H_1 == G_1)
                                                 && (J_1 == I_1))) && (B_1
                                                                       || L_1
                                                                       || M_1
                                                                       ||
                                                                       (!A_1)
                                                                       ||
                                                                       ((!F_1)
                                                                        &&
                                                                        (!E_1)
                                                                        &&
                                                                        (!D_1)
                                                                        && C_1
                                                                        &&
                                                                        (G_1
                                                                         == 0)
                                                                        &&
                                                                        (J_1
                                                                         ==
                                                                         I_1)))
               && (A_1 || L_1 || M_1 || (!B_1)
                   || ((!F_1) && (!E_1) && D_1 && C_1 && (I_1 == 0)
                       && (H_1 == G_1))) && (M_1 || (!L_1) || (!B_1) || (!A_1)
                                             || (!(J_1 <= -1)) || (F_1 && E_1
                                                                   && (!D_1)
                                                                   && C_1
                                                                   && (H_1 ==
                                                                       G_1)
                                                                   && (J_1 ==
                                                                       I_1)))))
              abort ();
          state_0 = C_1;
          state_1 = D_1;
          state_2 = E_1;
          state_3 = F_1;
          state_4 = G_1;
          state_5 = I_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

