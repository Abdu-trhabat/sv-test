// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Levente Bajczi, Department of Measurement and Information Systems, Budapest University of Technology and Economics
//
// SPDX-License-Identifier: Apache-2.0

// Original CHC file: hopv/enc-zip3_000.smt2
extern void abort ();
extern int __VERIFIER_nondet_int ();
extern _Bool __VERIFIER_nondet__Bool ();
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "enc-zip3_000_range.c", 13, "reach_error"); }



int main ();

int
main ()
{
    // return parameter


    // variables
    int zip_unknown_5_0;
    int zip_unknown_5_1;
    int zip_unknown_5_2;
    int A_0;
    int B_0;
    int C_0;
    int D_0;
    int E_0;
    int F_0;
    int G_0;
    int H_0;
    int A_1;
    int B_1;
    int C_1;
    int D_1;
    int E_1;
    int A_2;
    int B_2;
    int C_2;
    int v_3_2;

    if (((zip_unknown_5_0 <= -1000000000) || (zip_unknown_5_0 >= 1000000000))
        || ((zip_unknown_5_1 <= -1000000000)
            || (zip_unknown_5_1 >= 1000000000))
        || ((zip_unknown_5_2 <= -1000000000)
            || (zip_unknown_5_2 >= 1000000000)) || ((A_0 <= -1000000000)
                                                    || (A_0 >= 1000000000))
        || ((B_0 <= -1000000000) || (B_0 >= 1000000000))
        || ((C_0 <= -1000000000) || (C_0 >= 1000000000))
        || ((D_0 <= -1000000000) || (D_0 >= 1000000000))
        || ((E_0 <= -1000000000) || (E_0 >= 1000000000))
        || ((F_0 <= -1000000000) || (F_0 >= 1000000000))
        || ((G_0 <= -1000000000) || (G_0 >= 1000000000))
        || ((H_0 <= -1000000000) || (H_0 >= 1000000000))
        || ((A_1 <= -1000000000) || (A_1 >= 1000000000))
        || ((B_1 <= -1000000000) || (B_1 >= 1000000000))
        || ((C_1 <= -1000000000) || (C_1 >= 1000000000))
        || ((D_1 <= -1000000000) || (D_1 >= 1000000000))
        || ((E_1 <= -1000000000) || (E_1 >= 1000000000))
        || ((A_2 <= -1000000000) || (A_2 >= 1000000000))
        || ((B_2 <= -1000000000) || (B_2 >= 1000000000))
        || ((C_2 <= -1000000000) || (C_2 >= 1000000000))
        || ((v_3_2 <= -1000000000) || (v_3_2 >= 1000000000)))
        abort ();

    // main logic
    goto main_init;

  main_init:
    if (!
        ((!((0 == D_1) == (C_1 == 0))) && (!(0 == E_1)) && (!(0 == D_1))
         && (A_1 == 0) && (!((0 == E_1) == (B_1 == 0)))))
        abort ();
    zip_unknown_5_0 = A_1;
    zip_unknown_5_1 = C_1;
    zip_unknown_5_2 = B_1;
    A_0 = __VERIFIER_nondet_int ();
    if (((A_0 <= -1000000000) || (A_0 >= 1000000000)))
        abort ();
    B_0 = __VERIFIER_nondet_int ();
    if (((B_0 <= -1000000000) || (B_0 >= 1000000000)))
        abort ();
    C_0 = __VERIFIER_nondet_int ();
    if (((C_0 <= -1000000000) || (C_0 >= 1000000000)))
        abort ();
    D_0 = __VERIFIER_nondet_int ();
    if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
        abort ();
    E_0 = __VERIFIER_nondet_int ();
    if (((E_0 <= -1000000000) || (E_0 >= 1000000000)))
        abort ();
    H_0 = zip_unknown_5_0;
    G_0 = zip_unknown_5_1;
    F_0 = zip_unknown_5_2;
    if (!
        ((!((0 == E_0) == (C_0 == 0))) && (0 == D_0) && (0 == E_0)
         && (A_0 == (H_0 + 1)) && (G_0 == (C_0 + -1)) && (F_0 == (B_0 + -1))
         && (!((0 == D_0) == (B_0 == 0)))))
        abort ();
    zip_unknown_5_0 = A_0;
    zip_unknown_5_1 = C_0;
    zip_unknown_5_2 = B_0;
    goto zip_unknown_5_0;
  main_error:
    reach_error ();
  main_final:
    goto main_final;
  zip_unknown_5_0:
    switch (__VERIFIER_nondet__Bool ())
      {
      case 0:
          C_2 = __VERIFIER_nondet_int ();
          if (((C_2 <= -1000000000) || (C_2 >= 1000000000)))
              abort ();
          B_2 = zip_unknown_5_0;
          A_2 = zip_unknown_5_1;
          v_3_2 = zip_unknown_5_2;
          if (!
              ((v_3_2 == A_2) && (0 == C_2)
               && (!((0 == C_2) == (B_2 == A_2)))))
              abort ();
          goto main_error;

      case 1:
          A_0 = __VERIFIER_nondet_int ();
          if (((A_0 <= -1000000000) || (A_0 >= 1000000000)))
              abort ();
          B_0 = __VERIFIER_nondet_int ();
          if (((B_0 <= -1000000000) || (B_0 >= 1000000000)))
              abort ();
          C_0 = __VERIFIER_nondet_int ();
          if (((C_0 <= -1000000000) || (C_0 >= 1000000000)))
              abort ();
          D_0 = __VERIFIER_nondet_int ();
          if (((D_0 <= -1000000000) || (D_0 >= 1000000000)))
              abort ();
          E_0 = __VERIFIER_nondet_int ();
          if (((E_0 <= -1000000000) || (E_0 >= 1000000000)))
              abort ();
          H_0 = zip_unknown_5_0;
          G_0 = zip_unknown_5_1;
          F_0 = zip_unknown_5_2;
          if (!
              ((!((0 == E_0) == (C_0 == 0))) && (0 == D_0) && (0 == E_0)
               && (A_0 == (H_0 + 1)) && (G_0 == (C_0 + -1))
               && (F_0 == (B_0 + -1)) && (!((0 == D_0) == (B_0 == 0)))))
              abort ();
          zip_unknown_5_0 = A_0;
          zip_unknown_5_1 = C_0;
          zip_unknown_5_2 = B_0;
          goto zip_unknown_5_0;

      default:
          abort ();
      }

    // return expression

}

