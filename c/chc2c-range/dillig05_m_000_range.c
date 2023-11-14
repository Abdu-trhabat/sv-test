// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: extra-small-lia/dillig05_m_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "dillig05_m_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int inv_0;
    int inv_1;
    int inv_2;
    int inv_3;
    int itp_0;
    int itp_1;
    int itp_2;
    int itp_3;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int A_2;
    int B_2;
    int C_2;
    int D_2;
    int E_2;
    int F_2;
    int G_2;
    int H_2;
    int I_2;
    int A_3;
    int B_3;
    int C_3;
    int D_3;
    int A_4;
    int B_4;
    int C_4;
    int D_4;

    if (((inv_0 <= -1000000000) || (inv_0 >= 1000000000))
        || ((inv_1 <= -1000000000) || (inv_1 >= 1000000000))
        || ((inv_2 <= -1000000000) || (inv_2 >= 1000000000))
        || ((inv_3 <= -1000000000) || (inv_3 >= 1000000000))
        || ((itp_0 <= -1000000000) || (itp_0 >= 1000000000))
        || ((itp_1 <= -1000000000) || (itp_1 >= 1000000000))
        || ((itp_2 <= -1000000000) || (itp_2 >= 1000000000))
        || ((itp_3 <= -1000000000) || (itp_3 >= 1000000000))
        || ((A_0 <= -1000000000) || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((D_2 <= -1000000000) || (D_2 >= 1000000000))
        || ((E_2 <= -1000000000) || (E_2 >= 1000000000))
        || ((F_2 <= -1000000000) || (F_2 >= 1000000000))
        || ((G_2 <= -1000000000) || (G_2 >= 1000000000))
        || ((H_2 <= -1000000000) || (H_2 >= 1000000000))
        || ((I_2 <= -1000000000) || (I_2 >= 1000000000))
        || ((A_3 <= -1000000000) || (A_3 >= 1000000000))
        || ((B_3 <= -1000000000) || (B_3 >= 1000000000))
        || ((C_3 <= -1000000000) || (C_3 >= 1000000000))
        || ((D_3 <= -1000000000) || (D_3 >= 1000000000))
        || ((A_4 <= -1000000000) || (A_4 >= 1000000000))
        || ((B_4 <= -1000000000) || (B_4 >= 1000000000))
        || ((C_4 <= -1000000000) || (C_4 >= 1000000000))
        || ((D_4 <= -1000000000) || (D_4 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!((C_0 == 0) && (B_0 == 0) && (A_0 == 0) && (D_0 == 0)))
        abort ();
    inv_0 = A_0;
    inv_1 = B_0;
    inv_2 = C_0;
    inv_3 = D_0;
    goto inv;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  inv:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_4 = inv_0;
          B_4 = inv_1;
          D_4 = inv_2;
          C_4 = inv_3;
          if (!(C_4 <= (D_4 + -1)))
              abort ();
          goto main_error;

      case 1:
          A_1 = inv_0;
          B_1 = inv_1;
          C_1 = inv_2;
          D_1 = inv_3;
          if (!1)
              abort ();
          itp_0 = A_1;
          itp_1 = B_1;
          itp_2 = C_1;
          itp_3 = D_1;
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          I_2 = __VERIFIER_nondet_int ();
          if (((I_2 <= -1000000000) || (I_2 >= 1000000000)))
              abort ();
          A_2 = itp_0;
          B_2 = itp_1;
          C_2 = itp_2;
          D_2 = itp_3;
          if (!
              ((H_2 == (C_2 + F_2)) && (G_2 == (B_2 + 1))
               && (F_2 == (A_2 + 1)) && ((I_2 == E_2) || (I_2 == (E_2 + 1)))
               && (E_2 == (D_2 + G_2))))
              abort ();
          itp_0 = F_2;
          itp_1 = G_2;
          itp_2 = H_2;
          itp_3 = I_2;
          goto itp_0;

      default:
          abort ();
      }
  itp_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          A_3 = itp_0;
          B_3 = itp_1;
          C_3 = itp_2;
          D_3 = itp_3;
          if (!1)
              abort ();
          inv_0 = A_3;
          inv_1 = B_3;
          inv_2 = C_3;
          inv_3 = D_3;
          goto inv;

      case 1:
          E_2 = __VERIFIER_nondet_int ();
          if (((E_2 <= -1000000000) || (E_2 >= 1000000000)))
              abort ();
          F_2 = __VERIFIER_nondet_int ();
          if (((F_2 <= -1000000000) || (F_2 >= 1000000000)))
              abort ();
          G_2 = __VERIFIER_nondet_int ();
          if (((G_2 <= -1000000000) || (G_2 >= 1000000000)))
              abort ();
          H_2 = __VERIFIER_nondet_int ();
          if (((H_2 <= -1000000000) || (H_2 >= 1000000000)))
              abort ();
          I_2 = __VERIFIER_nondet_int ();
          if (((I_2 <= -1000000000) || (I_2 >= 1000000000)))
              abort ();
          A_2 = itp_0;
          B_2 = itp_1;
          C_2 = itp_2;
          D_2 = itp_3;
          if (!
              ((H_2 == (C_2 + F_2)) && (G_2 == (B_2 + 1))
               && (F_2 == (A_2 + 1)) && ((I_2 == E_2) || (I_2 == (E_2 + 1)))
               && (E_2 == (D_2 + G_2))))
              abort ();
          itp_0 = F_2;
          itp_1 = G_2;
          itp_2 = H_2;
          itp_3 = I_2;
          goto itp_0;

      default:
          abort ();
      }

    // return expression

}

