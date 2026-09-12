// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/vmt-stalmark_e8_48_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "vmt-stalmark_e8_48_000_norange.c", 13, "reach_error"); }



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
    _Bool state_4;
    _Bool state_5;
    _Bool state_6;
    _Bool state_7;
    _Bool A_0;
    _Bool B_0;
    _Bool C_0;
    _Bool D_0;
    _Bool E_0;
    _Bool F_0;
    _Bool G_0;
    _Bool H_0;
    _Bool A_1;
    _Bool B_1;
    _Bool C_1;
    _Bool D_1;
    _Bool E_1;
    _Bool F_1;
    _Bool G_1;
    _Bool H_1;
    _Bool I_1;
    _Bool J_1;
    _Bool K_1;
    _Bool L_1;
    _Bool M_1;
    _Bool N_1;
    _Bool O_1;
    _Bool P_1;
    _Bool A_2;
    _Bool B_2;
    _Bool C_2;
    _Bool D_2;
    _Bool E_2;
    _Bool F_2;
    _Bool G_2;
    _Bool H_2;



    // main logic
    goto main_init;

  main_init:
    if (!
        ((D_0 == A_0) && (B_0 == F_0) && (C_0 == H_0) && (!D_0) && B_0
         && (!C_0)
         &&
         (((((!A_0) && F_0 && (!H_0)) || (A_0 && F_0 && H_0))
           && ((!H_0) || (!A_0) || (!F_0))) == E_0)))
        abort ();
    state_0 = D_0;
    state_1 = C_0;
    state_2 = B_0;
    state_3 = A_0;
    state_4 = H_0;
    state_5 = F_0;
    state_6 = E_0;
    state_7 = G_0;
    E_1 = __VERIFIER_nondet__Bool ();
    F_1 = __VERIFIER_nondet__Bool ();
    G_1 = __VERIFIER_nondet__Bool ();
    H_1 = __VERIFIER_nondet__Bool ();
    I_1 = __VERIFIER_nondet__Bool ();
    J_1 = __VERIFIER_nondet__Bool ();
    K_1 = __VERIFIER_nondet__Bool ();
    O_1 = __VERIFIER_nondet__Bool ();
    D_1 = state_0;
    C_1 = state_1;
    B_1 = state_2;
    A_1 = state_3;
    P_1 = state_4;
    M_1 = state_5;
    L_1 = state_6;
    N_1 = state_7;
    if (!
        ((((((!A_1) && M_1 && (!P_1)) || (A_1 && M_1 && P_1))
           && ((!P_1) || (!A_1) || (!M_1))) == L_1) && (P_1 == G_1)
         && (M_1 == F_1) && (I_1 == E_1) && (J_1 == F_1) && (K_1 == G_1)
         && (D_1 == A_1) && (C_1 == P_1) && (B_1 == M_1) && (A_1 == E_1)
         &&
         ((((K_1 && J_1 && I_1) || ((!K_1) && (!J_1) && I_1))
           && ((!K_1) || (!J_1) || (!I_1))) == H_1)))
        abort ();
    state_0 = G_1;
    state_1 = F_1;
    state_2 = E_1;
    state_3 = K_1;
    state_4 = J_1;
    state_5 = I_1;
    state_6 = H_1;
    state_7 = O_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_2 = state_0;
          C_2 = state_1;
          B_2 = state_2;
          A_2 = state_3;
          H_2 = state_4;
          F_2 = state_5;
          E_2 = state_6;
          G_2 = state_7;
          if (!(!E_2))
              abort ();
          goto main_error;

      case 1:
          E_1 = __VERIFIER_nondet__Bool ();
          F_1 = __VERIFIER_nondet__Bool ();
          G_1 = __VERIFIER_nondet__Bool ();
          H_1 = __VERIFIER_nondet__Bool ();
          I_1 = __VERIFIER_nondet__Bool ();
          J_1 = __VERIFIER_nondet__Bool ();
          K_1 = __VERIFIER_nondet__Bool ();
          O_1 = __VERIFIER_nondet__Bool ();
          D_1 = state_0;
          C_1 = state_1;
          B_1 = state_2;
          A_1 = state_3;
          P_1 = state_4;
          M_1 = state_5;
          L_1 = state_6;
          N_1 = state_7;
          if (!
              ((((((!A_1) && M_1 && (!P_1)) || (A_1 && M_1 && P_1))
                 && ((!P_1) || (!A_1) || (!M_1))) == L_1) && (P_1 == G_1)
               && (M_1 == F_1) && (I_1 == E_1) && (J_1 == F_1) && (K_1 == G_1)
               && (D_1 == A_1) && (C_1 == P_1) && (B_1 == M_1) && (A_1 == E_1)
               &&
               ((((K_1 && J_1 && I_1) || ((!K_1) && (!J_1) && I_1))
                 && ((!K_1) || (!J_1) || (!I_1))) == H_1)))
              abort ();
          state_0 = G_1;
          state_1 = F_1;
          state_2 = E_1;
          state_3 = K_1;
          state_4 = J_1;
          state_5 = I_1;
          state_6 = H_1;
          state_7 = O_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

