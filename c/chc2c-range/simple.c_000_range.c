// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/simple.c_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "simple.c_000_range.c", 13, "reach_error"); }



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
    int B_0;
    int C_0;
    _Bool D_0;
    _Bool E_0;
    _Bool F_0;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    _Bool D_1;
    _Bool E_1;
    int F_1;
    int G_1;
    int H_1;
    int I_1;
    _Bool J_1;
    _Bool K_1;
    _Bool L_1;
    _Bool A_2;
    int B_2;
    int C_2;
    _Bool D_2;
    _Bool E_2;
    _Bool F_2;

    if (((state_4 <= -1000000000) || (state_4 >= 1000000000))
        || ((state_5 <= -1000000000) || (state_5 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((F_1 <= -1000000000) || (F_1 >= 1000000000))
        || ((G_1 <= -1000000000) || (G_1 >= 1000000000))
        || ((H_1 <= -1000000000) || (H_1 >= 1000000000))
        || ((I_1 <= -1000000000) || (I_1 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!(F_0 && (!E_0) && (!D_0) && (!A_0)))
        abort ();
    state_0 = A_0;
    state_1 = F_0;
    state_2 = E_0;
    state_3 = D_0;
    state_4 = B_0;
    state_5 = C_0;
    B_1 = __VERIFIER_nondet__Bool ();
    C_1 = __VERIFIER_nondet__Bool ();
    D_1 = __VERIFIER_nondet__Bool ();
    E_1 = __VERIFIER_nondet__Bool ();
    F_1 = __VERIFIER_nondet_int ();
    if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
        abort ();
    H_1 = __VERIFIER_nondet_int ();
    if (((H_1 <= -1000000000) || (H_1 >= 1000000000)))
        abort ();
    A_1 = state_0;
    L_1 = state_1;
    K_1 = state_2;
    J_1 = state_3;
    G_1 = state_4;
    I_1 = state_5;
    if (!
        ((J_1 || (!K_1) || (!A_1) || (!L_1) || (!(G_1 <= I_1))
          || (E_1 && (!D_1) && (!C_1) && (!B_1) && (G_1 == F_1)
              && (I_1 == H_1))) && (A_1 || J_1 || L_1 || (!K_1)
                                    || (!(I_1 <= G_1)) || ((!E_1) && D_1
                                                           && C_1 && B_1
                                                           && (G_1 == F_1)
                                                           && (I_1 == H_1)))
         && (A_1 || J_1 || L_1 || (!K_1) || (I_1 <= G_1)
             || ((!E_1) && D_1 && C_1 && (!B_1) && (G_1 == F_1)
                 && (I_1 == H_1))) && (J_1 || K_1 || L_1 || (!A_1)
                                       || (I_1 <= 0) || ((!E_1) && D_1
                                                         && (!C_1) && (!B_1)
                                                         && (G_1 == F_1)
                                                         && (I_1 == H_1)))
         && (J_1 || K_1 || L_1 || (!A_1) || (!(I_1 <= 0))
             || ((!E_1) && (!D_1) && C_1 && B_1 && (G_1 == F_1)
                 && (I_1 == H_1))) && (A_1 || J_1 || (!K_1) || (!L_1)
                                       || ((!E_1) && D_1 && (!C_1) && B_1
                                           && (I_1 == H_1)
                                           && ((G_1 + (-1 * F_1)) == -1)))
         && (A_1 || K_1 || L_1 || (!J_1)
             || (E_1 && (!D_1) && C_1 && (!B_1) && (G_1 == F_1)
                 && (I_1 == H_1))) && (K_1 || L_1 || (!J_1) || (!A_1) || (E_1
                                                                          &&
                                                                          (!D_1)
                                                                          &&
                                                                          (!C_1)
                                                                          &&
                                                                          B_1
                                                                          &&
                                                                          (G_1
                                                                           ==
                                                                           F_1)
                                                                          &&
                                                                          (I_1
                                                                           ==
                                                                           H_1)))
         && (J_1 || L_1 || (!K_1) || (!A_1)
             || ((!E_1) && D_1 && (!C_1) && (!B_1) && (G_1 == F_1)
                 && (I_1 == H_1))) && (A_1 || J_1 || K_1 || L_1 || ((!E_1)
                                                                    && (!D_1)
                                                                    && (!C_1)
                                                                    && (!B_1)
                                                                    && (G_1 ==
                                                                        F_1)
                                                                    && (I_1 ==
                                                                        H_1)))
         && (A_1 || K_1 || (!J_1) || (!L_1)
             || ((!E_1) && (!D_1) && (!C_1) && (!B_1) && (G_1 == F_1)
                 && (I_1 == H_1))) && (J_1 || K_1 || (!A_1) || (!L_1)
                                       || ((!E_1) && (!D_1) && (!C_1)
                                           && (!B_1) && (G_1 == F_1)
                                           && (I_1 == H_1))) && (A_1 || J_1
                                                                 || K_1
                                                                 || (!L_1)
                                                                 || ((!E_1)
                                                                     && (!D_1)
                                                                     && (!C_1)
                                                                     && B_1
                                                                     && (F_1
                                                                         == 0)
                                                                     && (I_1
                                                                         ==
                                                                         H_1)))
         && (J_1 || (!K_1) || (!A_1) || (!L_1) || (G_1 <= I_1)
             || (E_1 && (!D_1) && (!C_1) && B_1 && (G_1 == F_1)
                 && (I_1 == H_1)))))
        abort ();
    state_0 = B_1;
    state_1 = C_1;
    state_2 = D_1;
    state_3 = E_1;
    state_4 = F_1;
    state_5 = H_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_2 = state_0;
          F_2 = state_1;
          E_2 = state_2;
          D_2 = state_3;
          B_2 = state_4;
          C_2 = state_5;
          if (!((!F_2) && (!E_2) && D_2 && A_2))
              abort ();
          goto main_error;

      case 1:
          B_1 = __VERIFIER_nondet__Bool ();
          C_1 = __VERIFIER_nondet__Bool ();
          D_1 = __VERIFIER_nondet__Bool ();
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet_int ();
          if (((F_1 <= -1000000000) || (F_1 >= 1000000000)))
              abort ();
          H_1 = __VERIFIER_nondet_int ();
          if (((H_1 <= -1000000000) || (H_1 >= 1000000000)))
              abort ();
          A_1 = state_0;
          L_1 = state_1;
          K_1 = state_2;
          J_1 = state_3;
          G_1 = state_4;
          I_1 = state_5;
          if (!
              ((J_1 || (!K_1) || (!A_1) || (!L_1) || (!(G_1 <= I_1))
                || (E_1 && (!D_1) && (!C_1) && (!B_1) && (G_1 == F_1)
                    && (I_1 == H_1))) && (A_1 || J_1 || L_1 || (!K_1)
                                          || (!(I_1 <= G_1)) || ((!E_1) && D_1
                                                                 && C_1 && B_1
                                                                 && (G_1 ==
                                                                     F_1)
                                                                 && (I_1 ==
                                                                     H_1)))
               && (A_1 || J_1 || L_1 || (!K_1) || (I_1 <= G_1)
                   || ((!E_1) && D_1 && C_1 && (!B_1) && (G_1 == F_1)
                       && (I_1 == H_1))) && (J_1 || K_1 || L_1 || (!A_1)
                                             || (I_1 <= 0) || ((!E_1) && D_1
                                                               && (!C_1)
                                                               && (!B_1)
                                                               && (G_1 == F_1)
                                                               && (I_1 ==
                                                                   H_1)))
               && (J_1 || K_1 || L_1 || (!A_1) || (!(I_1 <= 0))
                   || ((!E_1) && (!D_1) && C_1 && B_1 && (G_1 == F_1)
                       && (I_1 == H_1))) && (A_1 || J_1 || (!K_1) || (!L_1)
                                             || ((!E_1) && D_1 && (!C_1)
                                                 && B_1 && (I_1 == H_1)
                                                 && ((G_1 + (-1 * F_1)) ==
                                                     -1))) && (A_1 || K_1
                                                               || L_1
                                                               || (!J_1)
                                                               || (E_1
                                                                   && (!D_1)
                                                                   && C_1
                                                                   && (!B_1)
                                                                   && (G_1 ==
                                                                       F_1)
                                                                   && (I_1 ==
                                                                       H_1)))
               && (K_1 || L_1 || (!J_1) || (!A_1)
                   || (E_1 && (!D_1) && (!C_1) && B_1 && (G_1 == F_1)
                       && (I_1 == H_1))) && (J_1 || L_1 || (!K_1) || (!A_1)
                                             || ((!E_1) && D_1 && (!C_1)
                                                 && (!B_1) && (G_1 == F_1)
                                                 && (I_1 == H_1))) && (A_1
                                                                       || J_1
                                                                       || K_1
                                                                       || L_1
                                                                       ||
                                                                       ((!E_1)
                                                                        &&
                                                                        (!D_1)
                                                                        &&
                                                                        (!C_1)
                                                                        &&
                                                                        (!B_1)
                                                                        &&
                                                                        (G_1
                                                                         ==
                                                                         F_1)
                                                                        &&
                                                                        (I_1
                                                                         ==
                                                                         H_1)))
               && (A_1 || K_1 || (!J_1) || (!L_1)
                   || ((!E_1) && (!D_1) && (!C_1) && (!B_1) && (G_1 == F_1)
                       && (I_1 == H_1))) && (J_1 || K_1 || (!A_1) || (!L_1)
                                             || ((!E_1) && (!D_1) && (!C_1)
                                                 && (!B_1) && (G_1 == F_1)
                                                 && (I_1 == H_1))) && (A_1
                                                                       || J_1
                                                                       || K_1
                                                                       ||
                                                                       (!L_1)
                                                                       ||
                                                                       ((!E_1)
                                                                        &&
                                                                        (!D_1)
                                                                        &&
                                                                        (!C_1)
                                                                        && B_1
                                                                        &&
                                                                        (F_1
                                                                         == 0)
                                                                        &&
                                                                        (I_1
                                                                         ==
                                                                         H_1)))
               && (J_1 || (!K_1) || (!A_1) || (!L_1) || (G_1 <= I_1)
                   || (E_1 && (!D_1) && (!C_1) && B_1 && (G_1 == F_1)
                       && (I_1 == H_1)))))
              abort ();
          state_0 = B_1;
          state_1 = C_1;
          state_2 = D_1;
          state_3 = E_1;
          state_4 = F_1;
          state_5 = H_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

