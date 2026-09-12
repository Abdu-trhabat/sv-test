// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/xy10.c_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "xy10.c_000_range.c", 13, "reach_error"); }



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
    int state_6;
    _Bool A_0;
    _Bool B_0;
    int C_0;
    int D_0;
    int E_0;
    _Bool F_0;
    _Bool G_0;
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
    int L_1;
    int M_1;
    _Bool N_1;
    _Bool O_1;
    _Bool A_2;
    _Bool B_2;
    int C_2;
    int D_2;
    int E_2;
    _Bool F_2;
    _Bool G_2;

    if (((state_4 <= -1000000000) || (state_4 >= 1000000000))
        || ((state_5 <= -1000000000) || (state_5 >= 1000000000))
        || ((state_6 <= -1000000000) || (state_6 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((J_1 <= -1000000000) || (J_1 >= 1000000000))
        || ((K_1 <= -1000000000) || (K_1 >= 1000000000))
        || ((L_1 <= -1000000000) || (L_1 >= 1000000000))
        || ((M_1 <= -1000000000) || (M_1 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((!B_0) && (!G_0) && (!F_0) && A_0))
        abort ();
    state_0 = B_0;
    state_1 = A_0;
    state_2 = G_0;
    state_3 = F_0;
    state_4 = C_0;
    state_5 = D_0;
    state_6 = E_0;
    C_1 = __VERIFIER_nondet__Bool ();
    D_1 = __VERIFIER_nondet__Bool ();
    E_1 = __VERIFIER_nondet__Bool ();
    F_1 = __VERIFIER_nondet__Bool ();
    G_1 = __VERIFIER_nondet_int ();
    if (((G_1 <= -1000000000) || (G_1 >= 1000000000)))
        abort ();
    I_1 = __VERIFIER_nondet_int ();
    if (((I_1 <= -1000000000) || (I_1 >= 1000000000)))
        abort ();
    K_1 = __VERIFIER_nondet_int ();
    if (((K_1 <= -1000000000) || (K_1 >= 1000000000)))
        abort ();
    M_1 = __VERIFIER_nondet_int ();
    if (((M_1 <= -1000000000) || (M_1 >= 1000000000)))
        abort ();
    B_1 = state_0;
    A_1 = state_1;
    O_1 = state_2;
    N_1 = state_3;
    H_1 = state_4;
    J_1 = state_5;
    L_1 = state_6;
    if (!
        ((A_1 || N_1 || O_1 || (!B_1) || (M_1 == 0)
          || ((!F_1) && E_1 && D_1 && (!C_1) && (H_1 == G_1) && (J_1 == I_1)
              && (L_1 == K_1))) && (A_1 || N_1 || O_1 || (!B_1)
                                    || (!(M_1 == 0)) || ((!F_1) && (!E_1)
                                                         && D_1 && C_1
                                                         && (H_1 == G_1)
                                                         && (J_1 == I_1)
                                                         && (L_1 == K_1)))
         && (A_1 || N_1 || (!O_1) || (!B_1)
             || ((H_1 <= L_1) && (1 <= (J_1 + (-1 * L_1)))) || ((!F_1) && E_1
                                                                && D_1 && C_1
                                                                && (H_1 ==
                                                                    G_1)
                                                                && (J_1 ==
                                                                    I_1)
                                                                && (L_1 ==
                                                                    K_1)))
         && (N_1 || O_1 || (!B_1) || (!A_1)
             || ((!F_1) && E_1 && (!D_1) && (!C_1) && (J_1 == I_1)
                 && (L_1 == K_1) && ((H_1 + (-1 * G_1)) == -10))) && (A_1
                                                                      || B_1
                                                                      || N_1
                                                                      ||
                                                                      (!O_1)
                                                                      ||
                                                                      ((!F_1)
                                                                       && E_1
                                                                       &&
                                                                       (!D_1)
                                                                       && C_1
                                                                       && (H_1
                                                                           ==
                                                                           G_1)
                                                                       && (L_1
                                                                           ==
                                                                           K_1)
                                                                       &&
                                                                       ((J_1 +
                                                                         (-1 *
                                                                          I_1))
                                                                        ==
                                                                        -1)))
         && (B_1 || O_1 || (!N_1) || (!A_1)
             || (F_1 && (!E_1) && (!D_1) && C_1 && (H_1 == G_1)
                 && (J_1 == I_1) && (L_1 == K_1))) && (N_1 || (!O_1) || (!B_1)
                                                       || (!A_1) || (F_1
                                                                     && (!E_1)
                                                                     && (!D_1)
                                                                     && (!C_1)
                                                                     && (H_1
                                                                         ==
                                                                         G_1)
                                                                     && (J_1
                                                                         ==
                                                                         I_1)
                                                                     && (L_1
                                                                         ==
                                                                         K_1)))
         && (B_1 || N_1 || (!O_1) || (!A_1)
             || ((!F_1) && (!E_1) && D_1 && (!C_1) && (H_1 == G_1)
                 && (J_1 == I_1) && (L_1 == K_1))) && (A_1 || B_1 || N_1
                                                       || O_1 || ((!F_1)
                                                                  && (!E_1)
                                                                  && (!D_1)
                                                                  && (!C_1)
                                                                  && (H_1 ==
                                                                      G_1)
                                                                  && (J_1 ==
                                                                      I_1)
                                                                  && (L_1 ==
                                                                      K_1)))
         && (A_1 || B_1 || O_1 || (!N_1)
             || ((!F_1) && (!E_1) && (!D_1) && (!C_1) && (H_1 == G_1)
                 && (J_1 == I_1) && (L_1 == K_1))) && (B_1 || N_1 || O_1
                                                       || (!A_1) || ((!F_1)
                                                                     && (!E_1)
                                                                     && D_1
                                                                     && (!C_1)
                                                                     && (I_1
                                                                         == 0)
                                                                     && (G_1
                                                                         == 0)
                                                                     && (L_1
                                                                         ==
                                                                         K_1)))
         && (A_1 || N_1 || (!O_1) || (!B_1) || (!(H_1 <= L_1))
             || (!(1 <= (J_1 + (-1 * L_1)))) || (F_1 && (!E_1) && (!D_1)
                                                 && C_1 && (H_1 == G_1)
                                                 && (J_1 == I_1)
                                                 && (L_1 == K_1)))))
        abort ();
    state_0 = D_1;
    state_1 = C_1;
    state_2 = E_1;
    state_3 = F_1;
    state_4 = G_1;
    state_5 = I_1;
    state_6 = K_1;
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
          G_2 = state_2;
          F_2 = state_3;
          C_2 = state_4;
          D_2 = state_5;
          E_2 = state_6;
          if (!((!B_2) && (!G_2) && F_2 && A_2))
              abort ();
          goto main_error;

      case 1:
          C_1 = __VERIFIER_nondet__Bool ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet_int ();
          if (((G_1 <= -1000000000) || (G_1 >= 1000000000)))
              abort ();
          I_1 = __VERIFIER_nondet_int ();
          if (((I_1 <= -1000000000) || (I_1 >= 1000000000)))
              abort ();
          K_1 = __VERIFIER_nondet_int ();
          if (((K_1 <= -1000000000) || (K_1 >= 1000000000)))
              abort ();
          M_1 = __VERIFIER_nondet_int ();
          if (((M_1 <= -1000000000) || (M_1 >= 1000000000)))
              abort ();
          B_1 = state_0;
          A_1 = state_1;
          O_1 = state_2;
          N_1 = state_3;
          H_1 = state_4;
          J_1 = state_5;
          L_1 = state_6;
          if (!
              ((A_1 || N_1 || O_1 || (!B_1) || (M_1 == 0)
                || ((!F_1) && E_1 && D_1 && (!C_1) && (H_1 == G_1)
                    && (J_1 == I_1) && (L_1 == K_1))) && (A_1 || N_1 || O_1
                                                          || (!B_1)
                                                          || (!(M_1 == 0))
                                                          || ((!F_1) && (!E_1)
                                                              && D_1 && C_1
                                                              && (H_1 == G_1)
                                                              && (J_1 == I_1)
                                                              && (L_1 ==
                                                                  K_1)))
               && (A_1 || N_1 || (!O_1) || (!B_1)
                   || ((H_1 <= L_1) && (1 <= (J_1 + (-1 * L_1)))) || ((!F_1)
                                                                      && E_1
                                                                      && D_1
                                                                      && C_1
                                                                      && (H_1
                                                                          ==
                                                                          G_1)
                                                                      && (J_1
                                                                          ==
                                                                          I_1)
                                                                      && (L_1
                                                                          ==
                                                                          K_1)))
               && (N_1 || O_1 || (!B_1) || (!A_1)
                   || ((!F_1) && E_1 && (!D_1) && (!C_1) && (J_1 == I_1)
                       && (L_1 == K_1) && ((H_1 + (-1 * G_1)) == -10)))
               && (A_1 || B_1 || N_1 || (!O_1)
                   || ((!F_1) && E_1 && (!D_1) && C_1 && (H_1 == G_1)
                       && (L_1 == K_1) && ((J_1 + (-1 * I_1)) == -1))) && (B_1
                                                                           ||
                                                                           O_1
                                                                           ||
                                                                           (!N_1)
                                                                           ||
                                                                           (!A_1)
                                                                           ||
                                                                           (F_1
                                                                            &&
                                                                            (!E_1)
                                                                            &&
                                                                            (!D_1)
                                                                            &&
                                                                            C_1
                                                                            &&
                                                                            (H_1
                                                                             ==
                                                                             G_1)
                                                                            &&
                                                                            (J_1
                                                                             ==
                                                                             I_1)
                                                                            &&
                                                                            (L_1
                                                                             ==
                                                                             K_1)))
               && (N_1 || (!O_1) || (!B_1) || (!A_1)
                   || (F_1 && (!E_1) && (!D_1) && (!C_1) && (H_1 == G_1)
                       && (J_1 == I_1) && (L_1 == K_1))) && (B_1 || N_1
                                                             || (!O_1)
                                                             || (!A_1)
                                                             || ((!F_1)
                                                                 && (!E_1)
                                                                 && D_1
                                                                 && (!C_1)
                                                                 && (H_1 ==
                                                                     G_1)
                                                                 && (J_1 ==
                                                                     I_1)
                                                                 && (L_1 ==
                                                                     K_1)))
               && (A_1 || B_1 || N_1 || O_1
                   || ((!F_1) && (!E_1) && (!D_1) && (!C_1) && (H_1 == G_1)
                       && (J_1 == I_1) && (L_1 == K_1))) && (A_1 || B_1 || O_1
                                                             || (!N_1)
                                                             || ((!F_1)
                                                                 && (!E_1)
                                                                 && (!D_1)
                                                                 && (!C_1)
                                                                 && (H_1 ==
                                                                     G_1)
                                                                 && (J_1 ==
                                                                     I_1)
                                                                 && (L_1 ==
                                                                     K_1)))
               && (B_1 || N_1 || O_1 || (!A_1)
                   || ((!F_1) && (!E_1) && D_1 && (!C_1) && (I_1 == 0)
                       && (G_1 == 0) && (L_1 == K_1))) && (A_1 || N_1
                                                           || (!O_1) || (!B_1)
                                                           || (!(H_1 <= L_1))
                                                           ||
                                                           (!(1 <=
                                                              (J_1 +
                                                               (-1 * L_1))))
                                                           || (F_1 && (!E_1)
                                                               && (!D_1)
                                                               && C_1
                                                               && (H_1 == G_1)
                                                               && (J_1 == I_1)
                                                               && (L_1 ==
                                                                   K_1)))))
              abort ();
          state_0 = D_1;
          state_1 = C_1;
          state_2 = E_1;
          state_3 = F_1;
          state_4 = G_1;
          state_5 = I_1;
          state_6 = K_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

