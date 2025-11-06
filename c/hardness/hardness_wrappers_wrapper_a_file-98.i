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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch98Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double double_Array_0[2][2][2] = {
 {{7.25, 0.6}, {7.5, 63.5}}, {{4.4, 9999999.5}, {2.3, 4.8}}
};
signed long int signed_long_int_Array_0[2] = {
 -1, 0
};
signed short int signed_short_int_Array_0[1] = {
 25
};
unsigned long int unsigned_long_int_Array_0[3] = {
 128, 4078799264, 500
};
void initially(void) {
}
void step(void) {
 double_Array_0[1][1][1] = (double_Array_0[0][1][1] - double_Array_0[1][0][1]);
 signed long int stepLocal_0 = (signed_long_int_Array_0[1] >> signed_short_int_Array_0[0]) / signed_long_int_Array_0[0];
 if (8 < stepLocal_0) {
  double_Array_0[0][0][1] = (((double_Array_0[1][0][0] + double_Array_0[0][0][0]) + ((((double_Array_0[0][1][0]) < (1.9)) ? (double_Array_0[0][1][0]) : (1.9)))) + (99.125 + double_Array_0[1][1][0]));
 }
 if (double_Array_0[0][1][1] < double_Array_0[1][0][0]) {
  if (((- signed_long_int_Array_0[1]) <= signed_short_int_Array_0[0]) || (double_Array_0[0][0][1] < double_Array_0[0][1][0])) {
   unsigned_long_int_Array_0[0] = ((((signed_long_int_Array_0[1]) < (signed_short_int_Array_0[0])) ? (signed_long_int_Array_0[1]) : (signed_short_int_Array_0[0])));
  } else {
   unsigned_long_int_Array_0[0] = (unsigned_long_int_Array_0[1] - signed_long_int_Array_0[1]);
  }
 }
 if (((((-128) < (unsigned_long_int_Array_0[0])) ? (-128) : (unsigned_long_int_Array_0[0]))) < unsigned_long_int_Array_0[1]) {
  if (double_Array_0[0][1][1] > double_Array_0[0][1][0]) {
   unsigned_long_int_Array_0[2] = (signed_short_int_Array_0[0] + signed_long_int_Array_0[1]);
  } else {
   unsigned_long_int_Array_0[2] = unsigned_long_int_Array_0[1];
  }
 } else {
  unsigned_long_int_Array_0[2] = unsigned_long_int_Array_0[1];
 }
}
void updateVariables(void) {
 double_Array_0[0][0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0][0] >= -115292.1504606845700e+13F && double_Array_0[0][0][0] <= -1.0e-20F) || (double_Array_0[0][0][0] <= 1152921.504606845700e+12F && double_Array_0[0][0][0] >= 1.0e-20F ));
 double_Array_0[1][0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0][0] >= -115292.1504606845700e+13F && double_Array_0[1][0][0] <= -1.0e-20F) || (double_Array_0[1][0][0] <= 1152921.504606845700e+12F && double_Array_0[1][0][0] >= 1.0e-20F ));
 double_Array_0[0][1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1][0] >= -230584.3009213691400e+13F && double_Array_0[0][1][0] <= -1.0e-20F) || (double_Array_0[0][1][0] <= 2305843.009213691400e+12F && double_Array_0[0][1][0] >= 1.0e-20F ));
 double_Array_0[1][1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1][0] >= -230584.3009213691400e+13F && double_Array_0[1][1][0] <= -1.0e-20F) || (double_Array_0[1][1][0] <= 2305843.009213691400e+12F && double_Array_0[1][1][0] >= 1.0e-20F ));
 double_Array_0[1][0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0][1] >= 0.0F && double_Array_0[1][0][1] <= -1.0e-20F) || (double_Array_0[1][0][1] <= 9223372.036854766000e+12F && double_Array_0[1][0][1] >= 1.0e-20F ));
 double_Array_0[0][1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1][1] >= 0.0F && double_Array_0[0][1][1] <= -1.0e-20F) || (double_Array_0[0][1][1] <= 9223372.036854766000e+12F && double_Array_0[0][1][1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 assume_abort_if_not(signed_long_int_Array_0[0] != 0);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= 1);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 30);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((double_Array_0[1][1][1] == ((double) (double_Array_0[0][1][1] - double_Array_0[1][0][1]))) && ((8 < ((signed_long_int_Array_0[1] >> signed_short_int_Array_0[0]) / signed_long_int_Array_0[0])) ? (double_Array_0[0][0][1] == ((double) (((double_Array_0[1][0][0] + double_Array_0[0][0][0]) + ((((double_Array_0[0][1][0]) < (1.9)) ? (double_Array_0[0][1][0]) : (1.9)))) + (99.125 + double_Array_0[1][1][0])))) : 1)) && ((double_Array_0[0][1][1] < double_Array_0[1][0][0]) ? ((((- signed_long_int_Array_0[1]) <= signed_short_int_Array_0[0]) || (double_Array_0[0][0][1] < double_Array_0[0][1][0])) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) ((((signed_long_int_Array_0[1]) < (signed_short_int_Array_0[0])) ? (signed_long_int_Array_0[1]) : (signed_short_int_Array_0[0]))))) : (unsigned_long_int_Array_0[0] == ((unsigned long int) (unsigned_long_int_Array_0[1] - signed_long_int_Array_0[1])))) : 1)) && ((((((-128) < (unsigned_long_int_Array_0[0])) ? (-128) : (unsigned_long_int_Array_0[0]))) < unsigned_long_int_Array_0[1]) ? ((double_Array_0[0][1][1] > double_Array_0[0][1][0]) ? (unsigned_long_int_Array_0[2] == ((unsigned long int) (signed_short_int_Array_0[0] + signed_long_int_Array_0[1]))) : (unsigned_long_int_Array_0[2] == ((unsigned long int) unsigned_long_int_Array_0[1]))) : (unsigned_long_int_Array_0[2] == ((unsigned long int) unsigned_long_int_Array_0[1])))
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
