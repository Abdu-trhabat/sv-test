// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: tricera-benchmarks/id_build.i.v+lhb-reducer.c-1.smt2.gz_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "id_build.i.v+lhb-reducer.c-1.smt2.gz_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main5_0;
    int inv_main5_1;
    int inv_main5_2;
    int inv_main5_3;
    int inv_main5_4;
    int inv_main21_0;
    int inv_main21_1;
    int inv_main21_2;
    int inv_main21_3;
    int inv_main21_4;
    int inv_main21_5;
    int inv_main21_6;
    int inv_main21_7;
    int inv_main21_8;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int H_4;
    int I_4;
    int J_4;
    int K_4;
    int L_4;
    int M_4;
    int N_4;
    int v_14_4;
    int A_8;
    int B_8;
    int C_8;
    int D_8;
    int E_8;
    int F_8;
    int G_8;
    int H_8;
    int I_8;



    // main logic
    goto main_init;

  main_init:
    if (!((D_0 == 0) && (E_0 == 0)))
        abort ();
    inv_main5_0 = E_0;
    inv_main5_1 = D_0;
    inv_main5_2 = C_0;
    inv_main5_3 = B_0;
    inv_main5_4 = A_0;
    B_4 = __VERIFIER_nondet_int ();
    C_4 = __VERIFIER_nondet_int ();
    D_4 = __VERIFIER_nondet_int ();
    E_4 = __VERIFIER_nondet_int ();
    F_4 = __VERIFIER_nondet_int ();
    G_4 = __VERIFIER_nondet_int ();
    I_4 = __VERIFIER_nondet_int ();
    M_4 = __VERIFIER_nondet_int ();
    N_4 = __VERIFIER_nondet_int ();
    v_14_4 = __VERIFIER_nondet_int ();
    H_4 = inv_main5_0;
    K_4 = inv_main5_1;
    A_4 = inv_main5_2;
    J_4 = inv_main5_3;
    L_4 = inv_main5_4;
    if (!
        ((G_4 == 0) && (F_4 == A_4) && (E_4 == H_4) && (D_4 == 0)
         && (C_4 == B_4) && (N_4 == J_4) && (M_4 == K_4) && (1 <= B_4)
         && (((1 <= B_4) && (D_4 == 1)) || ((!(1 <= B_4)) && (D_4 == 0)))
         && (I_4 == 0) && (v_14_4 == D_4)))
        abort ();
    inv_main21_0 = E_4;
    inv_main21_1 = M_4;
    inv_main21_2 = F_4;
    inv_main21_3 = N_4;
    inv_main21_4 = C_4;
    inv_main21_5 = I_4;
    inv_main21_6 = G_4;
    inv_main21_7 = D_4;
    inv_main21_8 = v_14_4;
    G_8 = inv_main21_0;
    I_8 = inv_main21_1;
    B_8 = inv_main21_2;
    D_8 = inv_main21_3;
    F_8 = inv_main21_4;
    E_8 = inv_main21_5;
    A_8 = inv_main21_6;
    H_8 = inv_main21_7;
    C_8 = inv_main21_8;
    if (!1)
        abort ();
    goto main_error;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main32:
    goto inv_main32;
  inv_main29:
    goto inv_main29;
  inv_main40:
    goto inv_main40;

    // return expression

}

