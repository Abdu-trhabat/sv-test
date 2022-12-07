// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch64Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 0, 0, 0
};
double double_Array_0[2] = {
 9.5, 0.9
};
float float_Array_0[3] = {
 0.8, -0.151, 63.5
};
signed short int signed_short_int_Array_0[1] = {
 -2
};
unsigned char unsigned_char_Array_0[2] = {
 10, 16
};
unsigned long int unsigned_long_int_Array_0[3] = {
 256, 2941876006, 128
};
unsigned short int unsigned_short_int_Array_0[1] = {
 8
};
unsigned char last_1_unsigned_char_Array_0_0_ = 10;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = last_1_unsigned_char_Array_0_0_;
 unsigned long int stepLocal_0 = unsigned_long_int_Array_0[1];
 if (stepLocal_1 <= (unsigned_long_int_Array_0[1] - last_1_unsigned_char_Array_0_0_)) {
  if (stepLocal_0 < (((((last_1_unsigned_char_Array_0_0_ / unsigned_long_int_Array_0[0])) > (last_1_unsigned_char_Array_0_0_)) ? ((last_1_unsigned_char_Array_0_0_ / unsigned_long_int_Array_0[0])) : (last_1_unsigned_char_Array_0_0_)))) {
   if ((float_Array_0[2] + float_Array_0[1]) > float_Array_0[0]) {
    double_Array_0[1] = double_Array_0[0];
   }
  } else {
   double_Array_0[1] = double_Array_0[0];
  }
 }
 if (double_Array_0[1] < double_Array_0[1]) {
  BOOL_unsigned_char_Array_0[1] = (! (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[0]));
 }
 unsigned long int stepLocal_2 = unsigned_long_int_Array_0[2] & (unsigned_long_int_Array_0[0] / unsigned_short_int_Array_0[0]);
 if (stepLocal_2 > unsigned_long_int_Array_0[1]) {
  if (! BOOL_unsigned_char_Array_0[1]) {
   unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
  } else {
   unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
  }
 } else {
  unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
 }
 if (BOOL_unsigned_char_Array_0[1]) {
  if (BOOL_unsigned_char_Array_0[0] || (double_Array_0[1] < (double_Array_0[1] * double_Array_0[1]))) {
   signed_short_int_Array_0[0] = (unsigned_char_Array_0[0] + unsigned_char_Array_0[0]);
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854765600e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854765600e+12F && double_Array_0[0] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 assume_abort_if_not(unsigned_long_int_Array_0[0] != 0);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
 unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[2] <= 4294967295);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
 assume_abort_if_not(unsigned_short_int_Array_0[0] != 0);
}
void updateLastVariables() {
 last_1_unsigned_char_Array_0_0_ = unsigned_char_Array_0[0];
}
int property() {
 return ((((last_1_unsigned_char_Array_0_0_ <= (unsigned_long_int_Array_0[1] - last_1_unsigned_char_Array_0_0_)) ? ((unsigned_long_int_Array_0[1] < (((((last_1_unsigned_char_Array_0_0_ / unsigned_long_int_Array_0[0])) > (last_1_unsigned_char_Array_0_0_)) ? ((last_1_unsigned_char_Array_0_0_ / unsigned_long_int_Array_0[0])) : (last_1_unsigned_char_Array_0_0_)))) ? (((float_Array_0[2] + float_Array_0[1]) > float_Array_0[0]) ? (double_Array_0[1] == ((double) double_Array_0[0])) : 1) : (double_Array_0[1] == ((double) double_Array_0[0]))) : 1) && ((double_Array_0[1] < double_Array_0[1]) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) (! (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[0])))) : 1)) && (BOOL_unsigned_char_Array_0[1] ? ((BOOL_unsigned_char_Array_0[0] || (double_Array_0[1] < (double_Array_0[1] * double_Array_0[1]))) ? (signed_short_int_Array_0[0] == ((signed short int) (unsigned_char_Array_0[0] + unsigned_char_Array_0[0]))) : 1) : 1)) && (((unsigned_long_int_Array_0[2] & (unsigned_long_int_Array_0[0] / unsigned_short_int_Array_0[0])) > unsigned_long_int_Array_0[1]) ? ((! BOOL_unsigned_char_Array_0[1]) ? (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1])) : (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1]))) : (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1])))
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
