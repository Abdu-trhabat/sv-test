// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][3] = {
 {0, 0, 0}, {0, 0, 1}
};
double double_Array_0[2][5] = {
 {100000000000.6, -0.375, 24.125, 0.0, 1000000.875}, {-0.8, 49.25, 0.7, 25.7, 9.15}
};
signed char signed_char_Array_0[1] = {
 2
};
unsigned long int unsigned_long_int_Array_0[2] = {
 8, 5
};
double last_1_double_Array_0_1__4_ = 9.15;
void initially(void) {
}
void step(void) {
 unsigned_long_int_Array_0[1] = unsigned_long_int_Array_0[0];
 unsigned long int stepLocal_0 = unsigned_long_int_Array_0[1];
 if (signed_char_Array_0[0] < stepLocal_0) {
  double_Array_0[1][4] = -0.5;
 } else {
  if ((- last_1_double_Array_0_1__4_) == (double_Array_0[0][4] - double_Array_0[1][1])) {
   double_Array_0[1][4] = double_Array_0[1][0];
  } else {
   double_Array_0[1][4] = double_Array_0[0][0];
  }
 }
 if (BOOL_unsigned_char_Array_0[1][1]) {
  if (unsigned_long_int_Array_0[0] <= 1u) {
   BOOL_unsigned_char_Array_0[0][1] = (! (BOOL_unsigned_char_Array_0[0][0] && (BOOL_unsigned_char_Array_0[1][0] || BOOL_unsigned_char_Array_0[0][2])));
  } else {
   BOOL_unsigned_char_Array_0[0][1] = (! (BOOL_unsigned_char_Array_0[0][2] && BOOL_unsigned_char_Array_0[1][0]));
  }
 } else {
  BOOL_unsigned_char_Array_0[0][1] = (! BOOL_unsigned_char_Array_0[1][2]);
 }
 if (BOOL_unsigned_char_Array_0[0][1]) {
  double_Array_0[0][2] = (double_Array_0[1][2] - (double_Array_0[0][3] - double_Array_0[1][3]));
 } else {
  if ((BOOL_unsigned_char_Array_0[0][1] || BOOL_unsigned_char_Array_0[1][2]) && (double_Array_0[0][4] <= double_Array_0[1][0])) {
   double_Array_0[0][2] = double_Array_0[0][1];
  } else {
   double_Array_0[0][2] = 64.5;
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
 BOOL_unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] <= 0);
 BOOL_unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= -922337.2036854766000e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= -922337.2036854766000e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854766000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= -922337.2036854766000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854766000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= 0.0F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 double_Array_0[1][2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][2] >= 0.0F && double_Array_0[1][2] <= -1.0e-20F) || (double_Array_0[1][2] <= 9223372.036854766000e+12F && double_Array_0[1][2] >= 1.0e-20F ));
 double_Array_0[0][3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][3] >= 4611686.018427383000e+12F && double_Array_0[0][3] <= -1.0e-20F) || (double_Array_0[0][3] <= 9223372.036854766000e+12F && double_Array_0[0][3] >= 1.0e-20F ));
 double_Array_0[1][3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][3] >= 0.0F && double_Array_0[1][3] <= -1.0e-20F) || (double_Array_0[1][3] <= 4611686.018427383000e+12F && double_Array_0[1][3] >= 1.0e-20F ));
 double_Array_0[0][4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][4] >= 0.0F && double_Array_0[0][4] <= -1.0e-20F) || (double_Array_0[0][4] <= 9223372.036854776000e+12F && double_Array_0[0][4] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -128);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
}
void updateLastVariables(void) {
 last_1_double_Array_0_1__4_ = double_Array_0[1][4];
}
int property(void) {
 return (((unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_long_int_Array_0[0])) && ((signed_char_Array_0[0] < unsigned_long_int_Array_0[1]) ? (double_Array_0[1][4] == ((double) -0.5)) : (((- last_1_double_Array_0_1__4_) == (double_Array_0[0][4] - double_Array_0[1][1])) ? (double_Array_0[1][4] == ((double) double_Array_0[1][0])) : (double_Array_0[1][4] == ((double) double_Array_0[0][0]))))) && (BOOL_unsigned_char_Array_0[1][1] ? ((unsigned_long_int_Array_0[0] <= 1u) ? (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) (! (BOOL_unsigned_char_Array_0[0][0] && (BOOL_unsigned_char_Array_0[1][0] || BOOL_unsigned_char_Array_0[0][2]))))) : (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) (! (BOOL_unsigned_char_Array_0[0][2] && BOOL_unsigned_char_Array_0[1][0]))))) : (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) (! BOOL_unsigned_char_Array_0[1][2]))))) && (BOOL_unsigned_char_Array_0[0][1] ? (double_Array_0[0][2] == ((double) (double_Array_0[1][2] - (double_Array_0[0][3] - double_Array_0[1][3])))) : (((BOOL_unsigned_char_Array_0[0][1] || BOOL_unsigned_char_Array_0[1][2]) && (double_Array_0[0][4] <= double_Array_0[1][0])) ? (double_Array_0[0][2] == ((double) double_Array_0[0][1])) : (double_Array_0[0][2] == ((double) 64.5))))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
