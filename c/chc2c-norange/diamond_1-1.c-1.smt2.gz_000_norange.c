// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: tricera-benchmarks/diamond_1-1.c-1.smt2.gz_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "diamond_1-1.c-1.smt2.gz_000_norange.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_main5_0;
    int inv_main5_1;
    int inv_main3_0;
    int inv_main6_0;
    int inv_main6_1;
    int A_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int A_3;
    int B_3;
    int A_4;
    int B_4;
    int A_5;
    int B_5;
    int C_5;
    int D_5;
    int E_5;
    int F_5;



    // main logic
    goto main_init;

  main_init:
    if (!(A_0 == 0))
        abort ();
    inv_main3_0 = A_0;
    B_3 = __VERIFIER_nondet_int ();
    A_3 = inv_main3_0;
    if (!((0 <= B_3) && (0 <= A_3)))
        abort ();
    inv_main5_0 = A_3;
    inv_main5_1 = B_3;
    A_2 = __VERIFIER_nondet_int ();
    D_2 = __VERIFIER_nondet_int ();
    E_2 = __VERIFIER_nondet_int ();
    B_2 = inv_main5_0;
    C_2 = inv_main5_1;
    if (!
        ((C_2 == ((2 * E_2) + D_2)) && (A_2 == (B_2 + 1)) && (-1 <= D_2)
         && (0 <= C_2) && (0 <= B_2) && (D_2 <= 1) && (B_2 <= 98)
         && ((1 <= C_2) || (!(1 <= D_2))) && ((!(D_2 <= -1)) || (C_2 <= -1))
         && (!(D_2 == 0))))
        abort ();
    inv_main5_0 = A_2;
    inv_main5_1 = C_2;
    goto inv_main5_1;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv_main5_0:
    switch (__VERIFIER_nondet_int ())
      {
      case 0:
          B_4 = inv_main5_0;
          A_4 = inv_main5_1;
          if (!((0 <= B_4) && (!(B_4 <= 98)) && (0 <= A_4)))
              abort ();
          inv_main6_0 = B_4;
          inv_main6_1 = A_4;
          C_5 = __VERIFIER_nondet_int ();
          D_5 = __VERIFIER_nondet_int ();
          E_5 = __VERIFIER_nondet_int ();
          F_5 = __VERIFIER_nondet_int ();
          B_5 = inv_main6_0;
          A_5 = inv_main6_1;
          if (!
              ((!(C_5 == E_5)) && (B_5 == ((2 * D_5) + C_5)) && (-1 <= E_5)
               && (-1 <= C_5) && (0 <= A_5) && (0 <= B_5) && (E_5 <= 1)
               && (C_5 <= 1) && ((!(1 <= E_5)) || (1 <= A_5))
               && ((!(1 <= C_5)) || (1 <= B_5)) && ((!(E_5 <= -1))
                                                    || (A_5 <= -1))
               && ((!(C_5 <= -1)) || (B_5 <= -1))
               && (A_5 == ((2 * F_5) + E_5))))
              abort ();
          goto main_error;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          B_2 = inv_main5_0;
          C_2 = inv_main5_1;
          if (!
              ((C_2 == ((2 * E_2) + D_2)) && (A_2 == (B_2 + 1)) && (-1 <= D_2)
               && (0 <= C_2) && (0 <= B_2) && (D_2 <= 1) && (B_2 <= 98)
               && ((1 <= C_2) || (!(1 <= D_2))) && ((!(D_2 <= -1))
                                                    || (C_2 <= -1))
               && (!(D_2 == 0))))
              abort ();
          inv_main5_0 = A_2;
          inv_main5_1 = C_2;
          A_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          B_2 = inv_main5_0;
          C_2 = inv_main5_1;
          if (!
              ((C_2 == ((2 * E_2) + D_2)) && (A_2 == (B_2 + 1)) && (-1 <= D_2)
               && (0 <= C_2) && (0 <= B_2) && (D_2 <= 1) && (B_2 <= 98)
               && ((1 <= C_2) || (!(1 <= D_2))) && ((!(D_2 <= -1))
                                                    || (C_2 <= -1))
               && (!(D_2 == 0))))
              abort ();
          inv_main5_0 = A_2;
          inv_main5_1 = C_2;
          goto inv_main5_1;

      case 2:
          A_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          B_2 = inv_main5_0;
          C_2 = inv_main5_1;
          if (!
              ((C_2 == ((2 * E_2) + D_2)) && (A_2 == (B_2 + 1)) && (-1 <= D_2)
               && (0 <= C_2) && (0 <= B_2) && (D_2 <= 1) && (B_2 <= 98)
               && ((1 <= C_2) || (!(1 <= D_2))) && ((!(D_2 <= -1))
                                                    || (C_2 <= -1))
               && (!(D_2 == 0))))
              abort ();
          inv_main5_0 = A_2;
          inv_main5_1 = C_2;
          goto inv_main5_1;

      default:
          abort ();
      }
  inv_main5_1:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          B_1 = __VERIFIER_nondet_int ();
          D_1 = __VERIFIER_nondet_int ();
          E_1 = __VERIFIER_nondet_int ();
          A_1 = inv_main5_0;
          C_1 = inv_main5_1;
          if (!
              ((C_1 == ((2 * E_1) + D_1)) && (B_1 == (A_1 + 2)) && (-1 <= D_1)
               && (0 <= C_1) && (0 <= A_1) && (D_1 <= 1) && (A_1 <= 98)
               && ((1 <= C_1) || (!(1 <= D_1))) && ((!(D_1 <= -1))
                                                    || (C_1 <= -1))
               && (D_1 == 0)))
              abort ();
          inv_main5_0 = B_1;
          inv_main5_1 = C_1;
          goto inv_main5_0;

      case 1:
          A_2 = __VERIFIER_nondet_int ();
          D_2 = __VERIFIER_nondet_int ();
          E_2 = __VERIFIER_nondet_int ();
          B_2 = inv_main5_0;
          C_2 = inv_main5_1;
          if (!
              ((C_2 == ((2 * E_2) + D_2)) && (A_2 == (B_2 + 1)) && (-1 <= D_2)
               && (0 <= C_2) && (0 <= B_2) && (D_2 <= 1) && (B_2 <= 98)
               && ((1 <= C_2) || (!(1 <= D_2))) && ((!(D_2 <= -1))
                                                    || (C_2 <= -1))
               && (!(D_2 == 0))))
              abort ();
          inv_main5_0 = A_2;
          inv_main5_1 = C_2;
          goto inv_main5_1;

      default:
          abort ();
      }

    // return expression

}

