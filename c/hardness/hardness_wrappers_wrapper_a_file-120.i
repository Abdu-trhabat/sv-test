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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch120Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 1, 1, 1
};
double double_Array_0[2][5] = {
 {32.5, 255.6, 16.75, 100000000000.2, 99999999999.6}, {8.8, 128.25, 3.4, 128.6, 256.5}
};
signed char signed_char_Array_0[2] = {
 25, 32
};
signed long int signed_long_int_Array_0[1] = {
 64
};
signed short int signed_short_int_Array_0[2][2] = {
 {-4, -2}, {-8, -4}
};
unsigned char unsigned_char_Array_0[2] = {
 100, 128
};
unsigned char last_1_BOOL_unsigned_char_Array_0_0_ = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = signed_long_int_Array_0[0];
 if (last_1_BOOL_unsigned_char_Array_0_0_) {
  signed_short_int_Array_0[1][1] = ((((((((signed_short_int_Array_0[0][1] + -5) < 0 ) ? -(signed_short_int_Array_0[0][1] + -5) : (signed_short_int_Array_0[0][1] + -5)))) > (signed_short_int_Array_0[1][0])) ? (((((signed_short_int_Array_0[0][1] + -5) < 0 ) ? -(signed_short_int_Array_0[0][1] + -5) : (signed_short_int_Array_0[0][1] + -5)))) : (signed_short_int_Array_0[1][0])));
 } else {
  if ((signed_short_int_Array_0[1][0] * signed_short_int_Array_0[0][0]) > stepLocal_1) {
   if (last_1_BOOL_unsigned_char_Array_0_0_) {
    signed_short_int_Array_0[1][1] = signed_short_int_Array_0[0][1];
   }
  } else {
   signed_short_int_Array_0[1][1] = -32;
  }
 }
 signed short int stepLocal_2 = signed_short_int_Array_0[1][1];
 if (stepLocal_2 != signed_short_int_Array_0[0][0]) {
  BOOL_unsigned_char_Array_0[0] = (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1]);
 }
 signed long int stepLocal_0 = signed_long_int_Array_0[0];
 if (10 > stepLocal_0) {
  if (BOOL_unsigned_char_Array_0[0]) {
   double_Array_0[1][4] = ((((double_Array_0[0][4]) < 0 ) ? -(double_Array_0[0][4]) : (double_Array_0[0][4])));
  }
 }
 if (signed_long_int_Array_0[0] > signed_short_int_Array_0[0][1]) {
  double_Array_0[0][1] = (((((double_Array_0[1][1] - double_Array_0[0][0])) < ((double_Array_0[1][0] + ((((double_Array_0[0][2]) > (double_Array_0[1][2])) ? (double_Array_0[0][2]) : (double_Array_0[1][2])))))) ? ((double_Array_0[1][1] - double_Array_0[0][0])) : ((double_Array_0[1][0] + ((((double_Array_0[0][2]) > (double_Array_0[1][2])) ? (double_Array_0[0][2]) : (double_Array_0[1][2])))))));
 }
 unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
 double_Array_0[0][3] = double_Array_0[1][3];
 signed_char_Array_0[1] = signed_char_Array_0[0];
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= -461168.6018427383000e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 4611686.018427383000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= 0.0F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854766000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 double_Array_0[0][2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][2] >= -461168.6018427383000e+13F && double_Array_0[0][2] <= -1.0e-20F) || (double_Array_0[0][2] <= 4611686.018427383000e+12F && double_Array_0[0][2] >= 1.0e-20F ));
 double_Array_0[1][2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][2] >= -461168.6018427383000e+13F && double_Array_0[1][2] <= -1.0e-20F) || (double_Array_0[1][2] <= 4611686.018427383000e+12F && double_Array_0[1][2] >= 1.0e-20F ));
 double_Array_0[1][3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][3] >= -922337.2036854766000e+13F && double_Array_0[1][3] <= -1.0e-20F) || (double_Array_0[1][3] <= 9223372.036854766000e+12F && double_Array_0[1][3] >= 1.0e-20F ));
 double_Array_0[0][4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][4] >= -922337.2036854766000e+13F && double_Array_0[0][4] <= -1.0e-20F) || (double_Array_0[0][4] <= 9223372.036854766000e+12F && double_Array_0[0][4] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -127);
 assume_abort_if_not(signed_char_Array_0[0] <= 126);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][0] >= -32768);
 assume_abort_if_not(signed_short_int_Array_0[0][0] <= 32767);
 signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][0] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[1][0] <= 32766);
 signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][1] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[0][1] <= 16383);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
}
void updateLastVariables(void) {
 last_1_BOOL_unsigned_char_Array_0_0_ = BOOL_unsigned_char_Array_0[0];
}
int property(void) {
 return (((((((10 > signed_long_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] ? (double_Array_0[1][4] == ((double) ((((double_Array_0[0][4]) < 0 ) ? -(double_Array_0[0][4]) : (double_Array_0[0][4]))))) : 1) : 1) && (last_1_BOOL_unsigned_char_Array_0_0_ ? (signed_short_int_Array_0[1][1] == ((signed short int) ((((((((signed_short_int_Array_0[0][1] + -5) < 0 ) ? -(signed_short_int_Array_0[0][1] + -5) : (signed_short_int_Array_0[0][1] + -5)))) > (signed_short_int_Array_0[1][0])) ? (((((signed_short_int_Array_0[0][1] + -5) < 0 ) ? -(signed_short_int_Array_0[0][1] + -5) : (signed_short_int_Array_0[0][1] + -5)))) : (signed_short_int_Array_0[1][0]))))) : (((signed_short_int_Array_0[1][0] * signed_short_int_Array_0[0][0]) > signed_long_int_Array_0[0]) ? (last_1_BOOL_unsigned_char_Array_0_0_ ? (signed_short_int_Array_0[1][1] == ((signed short int) signed_short_int_Array_0[0][1])) : 1) : (signed_short_int_Array_0[1][1] == ((signed short int) -32))))) && ((signed_long_int_Array_0[0] > signed_short_int_Array_0[0][1]) ? (double_Array_0[0][1] == ((double) (((((double_Array_0[1][1] - double_Array_0[0][0])) < ((double_Array_0[1][0] + ((((double_Array_0[0][2]) > (double_Array_0[1][2])) ? (double_Array_0[0][2]) : (double_Array_0[1][2])))))) ? ((double_Array_0[1][1] - double_Array_0[0][0])) : ((double_Array_0[1][0] + ((((double_Array_0[0][2]) > (double_Array_0[1][2])) ? (double_Array_0[0][2]) : (double_Array_0[1][2]))))))))) : 1)) && ((signed_short_int_Array_0[1][1] != signed_short_int_Array_0[0][0]) ? (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1]))) : 1)) && (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1]))) && (double_Array_0[0][3] == ((double) double_Array_0[1][3]))) && (signed_char_Array_0[1] == ((signed char) signed_char_Array_0[0]))
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
