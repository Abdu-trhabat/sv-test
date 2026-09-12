// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: vmt-chc-benchmarks/vmt-_6countern_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "vmt-_6countern_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int state_0;
    int state_1;
    _Bool state_2;
    int state_3;
    int state_4;
    _Bool A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    _Bool A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int G_1;
    int H_1;
    _Bool I_1;
    int J_1;
    _Bool A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;



    // main logic
    goto main_init;

  main_init:
    if (!((E_0 == B_0) && (!((0 <= B_0) == A_0)) && (E_0 == 0)))
        abort ();
    state_0 = E_0;
    state_1 = B_0;
    state_2 = A_0;
    state_3 = C_0;
    state_4 = D_0;
    F_1 = __VERIFIER_nondet_int ();
    G_1 = __VERIFIER_nondet_int ();
    H_1 = __VERIFIER_nondet_int ();
    I_1 = __VERIFIER_nondet__Bool ();
    J_1 = __VERIFIER_nondet_int ();
    E_1 = state_0;
    B_1 = state_1;
    A_1 = state_2;
    C_1 = state_3;
    D_1 = state_4;
    if (!
        ((J_1 == H_1) && (E_1 == B_1) && (!((0 <= J_1) == I_1))
         && (!((0 <= B_1) == A_1)) && ((B_1 == 5)
                                       || ((B_1 + (-1 * G_1)) == -1))
         && ((!(B_1 == 5)) || (G_1 == 0)) && (H_1 == G_1)))
        abort ();
    state_0 = H_1;
    state_1 = J_1;
    state_2 = I_1;
    state_3 = G_1;
    state_4 = F_1;
    goto state_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  state_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          E_2 = state_0;
          B_2 = state_1;
          A_2 = state_2;
          C_2 = state_3;
          D_2 = state_4;
          if (!(!A_2))
              abort ();
          goto main_error;

      case 1:
          F_1 = __VERIFIER_nondet_int ();
          G_1 = __VERIFIER_nondet_int ();
          H_1 = __VERIFIER_nondet_int ();
          I_1 = __VERIFIER_nondet__Bool ();
          J_1 = __VERIFIER_nondet_int ();
          E_1 = state_0;
          B_1 = state_1;
          A_1 = state_2;
          C_1 = state_3;
          D_1 = state_4;
          if (!
              ((J_1 == H_1) && (E_1 == B_1) && (!((0 <= J_1) == I_1))
               && (!((0 <= B_1) == A_1)) && ((B_1 == 5)
                                             || ((B_1 + (-1 * G_1)) == -1))
               && ((!(B_1 == 5)) || (G_1 == 0)) && (H_1 == G_1)))
              abort ();
          state_0 = H_1;
          state_1 = J_1;
          state_2 = I_1;
          state_3 = G_1;
          state_4 = F_1;
          goto state_0;

      default:
          abort ();
      }

    // return expression

}

