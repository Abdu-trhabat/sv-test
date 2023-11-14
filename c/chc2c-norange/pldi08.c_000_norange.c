// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/pldi08.c_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "pldi08.c_000_norange.c", 13, "reach_error"); }



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
    int A_0;
    int B_0;
    _Bool C_0;
    _Bool D_0;
    _Bool E_0;
    _Bool F_0;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    _Bool D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    _Bool I_1;
    _Bool J_1;
    _Bool K_1;
    _Bool L_1;
    int A_2;
    int B_2;
    _Bool C_2;
    _Bool D_2;
    _Bool E_2;
    _Bool F_2;



    // main logic
    goto main_init;

  main_init:
    if (!(E_0 && (!D_0) && (!C_0) && (!F_0)))
        abort ();
    state_0 = F_0;
    state_1 = E_0;
    state_2 = D_0;
    state_3 = C_0;
    state_4 = A_0;
    state_5 = B_0;
    A_1 = __VERIFIER_nondet__Bool ();
    B_1 = __VERIFIER_nondet__Bool ();
    C_1 = __VERIFIER_nondet__Bool ();
    D_1 = __VERIFIER_nondet__Bool ();
    E_1 = __VERIFIER_nondet_int ();
    G_1 = __VERIFIER_nondet_int ();
    L_1 = state_0;
    K_1 = state_1;
    J_1 = state_2;
    I_1 = state_3;
    F_1 = state_4;
    H_1 = state_5;
    if (!
        ((I_1 || K_1 || (!J_1) || (!L_1) || (!(0 <= H_1))
          || ((!D_1) && C_1 && B_1 && A_1 && (F_1 == E_1) && (H_1 == G_1)))
         && (I_1 || J_1 || K_1 || (!L_1) || (!(0 <= F_1))
             || ((!D_1) && C_1 && B_1 && (!A_1) && (F_1 == E_1)
                 && (H_1 == G_1))) && (I_1 || J_1 || K_1 || (!L_1)
                                       || (0 <= F_1) || ((!D_1) && (!C_1)
                                                         && B_1 && A_1
                                                         && (F_1 == E_1)
                                                         && (H_1 == G_1)))
         && (I_1 || J_1 || (!L_1) || (!K_1)
             || ((!D_1) && C_1 && (!B_1) && (!A_1) && (H_1 == G_1)
                 && ((F_1 + (-1 * E_1) + H_1) == 0))) && (I_1 || K_1 || L_1
                                                          || (!J_1) || ((!D_1)
                                                                        && C_1
                                                                        &&
                                                                        (!B_1)
                                                                        && A_1
                                                                        &&
                                                                        (F_1
                                                                         ==
                                                                         E_1)
                                                                        &&
                                                                        ((H_1
                                                                          +
                                                                          (-1
                                                                           *
                                                                           G_1))
                                                                         ==
                                                                         -1)))
         && (J_1 || L_1 || (!I_1) || (!K_1)
             || (D_1 && (!C_1) && (!B_1) && A_1 && (F_1 == E_1)
                 && (H_1 == G_1))) && (I_1 || (!J_1) || (!L_1) || (!K_1)
                                       || (D_1 && (!C_1) && (!B_1) && (!A_1)
                                           && (F_1 == E_1) && (H_1 == G_1)))
         && (I_1 || L_1 || (!J_1) || (!K_1)
             || ((!D_1) && (!C_1) && B_1 && (!A_1) && (F_1 == E_1)
                 && (H_1 == G_1))) && (I_1 || J_1 || K_1 || L_1 || ((!D_1)
                                                                    && (!C_1)
                                                                    && (!B_1)
                                                                    && (!A_1)
                                                                    && (F_1 ==
                                                                        E_1)
                                                                    && (H_1 ==
                                                                        G_1)))
         && (J_1 || K_1 || L_1 || (!I_1)
             || ((!D_1) && (!C_1) && (!B_1) && (!A_1) && (F_1 == E_1)
                 && (H_1 == G_1))) && (I_1 || J_1 || L_1 || (!K_1) || ((!D_1)
                                                                       &&
                                                                       (!C_1)
                                                                       && B_1
                                                                       &&
                                                                       (!A_1)
                                                                       && (E_1
                                                                           ==
                                                                           -50)
                                                                       && (H_1
                                                                           ==
                                                                           G_1)))
         && (I_1 || K_1 || (!J_1) || (!L_1) || (0 <= H_1)
             || (D_1 && (!C_1) && (!B_1) && A_1 && (F_1 == E_1)
                 && (H_1 == G_1)))))
        abort ();
    state_0 = B_1;
    state_1 = A_1;
    state_2 = C_1;
    state_3 = D_1;
    state_4 = E_1;
    state_5 = G_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          F_2 = state_0;
          E_2 = state_1;
          D_2 = state_2;
          C_2 = state_3;
          A_2 = state_4;
          B_2 = state_5;
          if (!(E_2 && (!D_2) && C_2 && (!F_2)))
              abort ();
          goto main_error;

      case 1:
          A_1 = __VERIFIER_nondet__Bool ();
          B_1 = __VERIFIER_nondet__Bool ();
          C_1 = __VERIFIER_nondet__Bool ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          L_1 = state_0;
          K_1 = state_1;
          J_1 = state_2;
          I_1 = state_3;
          F_1 = state_4;
          H_1 = state_5;
          if (!
              ((I_1 || K_1 || (!J_1) || (!L_1) || (!(0 <= H_1))
                || ((!D_1) && C_1 && B_1 && A_1 && (F_1 == E_1)
                    && (H_1 == G_1))) && (I_1 || J_1 || K_1 || (!L_1)
                                          || (!(0 <= F_1)) || ((!D_1) && C_1
                                                               && B_1
                                                               && (!A_1)
                                                               && (F_1 == E_1)
                                                               && (H_1 ==
                                                                   G_1)))
               && (I_1 || J_1 || K_1 || (!L_1) || (0 <= F_1)
                   || ((!D_1) && (!C_1) && B_1 && A_1 && (F_1 == E_1)
                       && (H_1 == G_1))) && (I_1 || J_1 || (!L_1) || (!K_1)
                                             || ((!D_1) && C_1 && (!B_1)
                                                 && (!A_1) && (H_1 == G_1)
                                                 && ((F_1 + (-1 * E_1) + H_1)
                                                     == 0))) && (I_1 || K_1
                                                                 || L_1
                                                                 || (!J_1)
                                                                 || ((!D_1)
                                                                     && C_1
                                                                     && (!B_1)
                                                                     && A_1
                                                                     && (F_1
                                                                         ==
                                                                         E_1)
                                                                     &&
                                                                     ((H_1 +
                                                                       (-1 *
                                                                        G_1))
                                                                      == -1)))
               && (J_1 || L_1 || (!I_1) || (!K_1)
                   || (D_1 && (!C_1) && (!B_1) && A_1 && (F_1 == E_1)
                       && (H_1 == G_1))) && (I_1 || (!J_1) || (!L_1) || (!K_1)
                                             || (D_1 && (!C_1) && (!B_1)
                                                 && (!A_1) && (F_1 == E_1)
                                                 && (H_1 == G_1))) && (I_1
                                                                       || L_1
                                                                       ||
                                                                       (!J_1)
                                                                       ||
                                                                       (!K_1)
                                                                       ||
                                                                       ((!D_1)
                                                                        &&
                                                                        (!C_1)
                                                                        && B_1
                                                                        &&
                                                                        (!A_1)
                                                                        &&
                                                                        (F_1
                                                                         ==
                                                                         E_1)
                                                                        &&
                                                                        (H_1
                                                                         ==
                                                                         G_1)))
               && (I_1 || J_1 || K_1 || L_1
                   || ((!D_1) && (!C_1) && (!B_1) && (!A_1) && (F_1 == E_1)
                       && (H_1 == G_1))) && (J_1 || K_1 || L_1 || (!I_1)
                                             || ((!D_1) && (!C_1) && (!B_1)
                                                 && (!A_1) && (F_1 == E_1)
                                                 && (H_1 == G_1))) && (I_1
                                                                       || J_1
                                                                       || L_1
                                                                       ||
                                                                       (!K_1)
                                                                       ||
                                                                       ((!D_1)
                                                                        &&
                                                                        (!C_1)
                                                                        && B_1
                                                                        &&
                                                                        (!A_1)
                                                                        &&
                                                                        (E_1
                                                                         ==
                                                                         -50)
                                                                        &&
                                                                        (H_1
                                                                         ==
                                                                         G_1)))
               && (I_1 || K_1 || (!J_1) || (!L_1) || (0 <= H_1)
                   || (D_1 && (!C_1) && (!B_1) && A_1 && (F_1 == E_1)
                       && (H_1 == G_1)))))
              abort ();
          state_0 = B_1;
          state_1 = A_1;
          state_2 = C_1;
          state_3 = D_1;
          state_4 = E_1;
          state_5 = G_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

