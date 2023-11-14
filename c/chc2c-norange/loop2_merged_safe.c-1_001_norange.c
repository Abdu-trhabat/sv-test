// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: eldarica-misc/loop2_merged_safe.c-1_001.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "loop2_merged_safe.c-1_001_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main15_0;
    int inv_main15_1;
    int inv_main15_2;
    int inv_main15_3;
    int inv_main15_4;
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
    int A_4;
    int B_4;
    int C_4;
    int D_4;
    int E_4;
    int F_4;
    int G_4;
    int A_6;
    int B_6;
    int C_6;
    int D_6;
    int E_6;
    int F_6;
    int G_6;
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
    goto inv_main7;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main7:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
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
          goto inv_main7;

      case 1:
          A_4 = __VERIFIER_nondet_int ();
          B_4 = __VERIFIER_nondet_int ();
          F_4 = inv_main7_0;
          C_4 = inv_main7_1;
          E_4 = inv_main7_2;
          G_4 = inv_main7_3;
          D_4 = inv_main7_4;
          if (!
              ((B_4 == (G_4 + 1)) && (!(0 <= (F_4 + (-1 * C_4))))
               && (1 <= (F_4 + (-1 * G_4))) && (A_4 == (D_4 + 2))))
              abort ();
          inv_main15_0 = F_4;
          inv_main15_1 = C_4;
          inv_main15_2 = E_4;
          inv_main15_3 = B_4;
          inv_main15_4 = A_4;
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          F_6 = inv_main15_0;
          C_6 = inv_main15_1;
          E_6 = inv_main15_2;
          G_6 = inv_main15_3;
          D_6 = inv_main15_4;
          if (!
              ((B_6 == (G_6 + 1)) && (1 <= (F_6 + (-1 * G_6)))
               && (A_6 == (D_6 + 2))))
              abort ();
          inv_main15_0 = F_6;
          inv_main15_1 = C_6;
          inv_main15_2 = E_6;
          inv_main15_3 = B_6;
          inv_main15_4 = A_6;
          goto inv_main15_0;

      default:
          abort ();
      }
  inv_main12:
    goto inv_main12;
  inv_main15_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          D_7 = inv_main15_0;
          A_7 = inv_main15_1;
          C_7 = inv_main15_2;
          E_7 = inv_main15_3;
          B_7 = inv_main15_4;
          if (!(!((B_7 + (-2 * E_7)) == 0)))
              abort ();
          goto main_error;

      case 1:
          A_6 = __VERIFIER_nondet_int ();
          B_6 = __VERIFIER_nondet_int ();
          F_6 = inv_main15_0;
          C_6 = inv_main15_1;
          E_6 = inv_main15_2;
          G_6 = inv_main15_3;
          D_6 = inv_main15_4;
          if (!
              ((B_6 == (G_6 + 1)) && (1 <= (F_6 + (-1 * G_6)))
               && (A_6 == (D_6 + 2))))
              abort ();
          inv_main15_0 = F_6;
          inv_main15_1 = C_6;
          inv_main15_2 = E_6;
          inv_main15_3 = B_6;
          inv_main15_4 = A_6;
          goto inv_main15_0;

      default:
          abort ();
      }

    // return expression

}

