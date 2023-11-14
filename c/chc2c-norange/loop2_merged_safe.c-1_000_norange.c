// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/loop2_merged_safe.c-1_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop2_merged_safe.c-1_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main7_0;
    int inv_main7_1;
    int inv_main7_2;
    int inv_main7_3;
    int inv_main7_4;
    int inv_main10_0;
    int inv_main10_1;
    int inv_main10_2;
    int inv_main10_3;
    int inv_main10_4;
    int A_0;
    int v_1_0;
    int v_2_0;
    int v_3_0;
    int v_4_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int F_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int A_7;
    int B_7;
    int C_7;
    int D_7;
    int E_7;



    // main logic
    goto main_init;

  main_init:
    if (!((1 == v_1_0) && (0 == v_2_0) && (0 == v_3_0) && (0 == v_4_0)))
        abort ();
    inv_main7_0 = A_0;
    inv_main7_1 = v_1_0;
    inv_main7_2 = v_2_0;
    inv_main7_3 = v_3_0;
    inv_main7_4 = v_4_0;
    A_1 = __VERIFIER_nondet_int ();
    E_1 = inv_main7_0;
    B_1 = inv_main7_1;
    D_1 = inv_main7_2;
    F_1 = inv_main7_3;
    C_1 = inv_main7_4;
    if (!((0 <= (E_1 + (-1 * B_1))) && (A_1 == (D_1 + 2))))
        abort ();
    inv_main10_0 = E_1;
    inv_main10_1 = B_1;
    inv_main10_2 = A_1;
    inv_main10_3 = F_1;
    inv_main10_4 = C_1;
    goto inv_main10;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main15:
    goto inv_main15;
  inv_main10:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_7 = inv_main10_0;
          A_7 = inv_main10_1;
          C_7 = inv_main10_2;
          E_7 = inv_main10_3;
          B_7 = inv_main10_4;
          if (!(!((C_7 + (-2 * A_7)) == 0)))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          E_2 = inv_main10_0;
          B_2 = inv_main10_1;
          D_2 = inv_main10_2;
          F_2 = inv_main10_3;
          C_2 = inv_main10_4;
          if (!(A_2 == (B_2 + 1)))
              abort ();
          inv_main7_0 = E_2;
          inv_main7_1 = A_2;
          inv_main7_2 = D_2;
          inv_main7_3 = F_2;
          inv_main7_4 = C_2;
          A_1 = __VERIFIER_nondet_int ();
          E_1 = inv_main7_0;
          B_1 = inv_main7_1;
          D_1 = inv_main7_2;
          F_1 = inv_main7_3;
          C_1 = inv_main7_4;
          if (!((0 <= (E_1 + (-1 * B_1))) && (A_1 == (D_1 + 2))))
              abort ();
          inv_main10_0 = E_1;
          inv_main10_1 = B_1;
          inv_main10_2 = A_1;
          inv_main10_3 = F_1;
          inv_main10_4 = C_1;
          goto inv_main10;

      default:
          abort ();
      }
  inv_main12:
    goto inv_main12;

    // return expression

}

