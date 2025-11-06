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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch142Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 0
};
double double_Array_0[2][2][2] = {
 {{4.25, 0.4}, {256.5, 5.4}}, {{10.5, 499.4}, {128.6, 15.5}}
};
signed long int signed_long_int_Array_0[3] = {
 64, 128, 5
};
signed short int signed_short_int_Array_0[3] = {
 -32, 50, 0
};
unsigned long int unsigned_long_int_Array_0[2] = {
 500, 50
};
unsigned short int unsigned_short_int_Array_0[2] = {
 64, 39435
};
void initially(void) {
}
void step(void) {
 if (unsigned_long_int_Array_0[1] <= unsigned_long_int_Array_0[0]) {
  if (unsigned_long_int_Array_0[0] <= unsigned_long_int_Array_0[1]) {
   signed_long_int_Array_0[2] = (1 - signed_long_int_Array_0[1]);
  } else {
   signed_long_int_Array_0[2] = (signed_long_int_Array_0[1] - signed_long_int_Array_0[0]);
  }
 }
 if ((unsigned_short_int_Array_0[1] - unsigned_short_int_Array_0[0]) <= 0) {
  double_Array_0[1][1][1] = ((((double_Array_0[1][0][0]) < 0 ) ? -(double_Array_0[1][0][0]) : (double_Array_0[1][0][0])));
 }
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[1];
 if (stepLocal_0 && BOOL_unsigned_char_Array_0[0]) {
  signed_short_int_Array_0[1] = signed_short_int_Array_0[0];
 } else {
  signed_short_int_Array_0[1] = ((((signed_short_int_Array_0[0]) < (signed_short_int_Array_0[2])) ? (signed_short_int_Array_0[0]) : (signed_short_int_Array_0[2])));
 }
 unsigned long int stepLocal_1 = unsigned_long_int_Array_0[1];
 if (stepLocal_1 == ((((unsigned_short_int_Array_0[1]) > (signed_long_int_Array_0[0])) ? (unsigned_short_int_Array_0[1]) : (signed_long_int_Array_0[0])))) {
  double_Array_0[0][0][1] = (double_Array_0[0][1][0] + double_Array_0[1][1][0]);
 } else {
  double_Array_0[0][0][1] = (double_Array_0[1][0][1] - double_Array_0[0][1][1]);
 }
 unsigned long int stepLocal_2 = unsigned_long_int_Array_0[0];
 if (double_Array_0[0][1][1] <= double_Array_0[1][1][0]) {
  if (stepLocal_2 < unsigned_short_int_Array_0[1]) {
   double_Array_0[0][0][0] = 199.75;
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[1][0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0][0] >= -922337.2036854766000e+13F && double_Array_0[1][0][0] <= -1.0e-20F) || (double_Array_0[1][0][0] <= 9223372.036854766000e+12F && double_Array_0[1][0][0] >= 1.0e-20F ));
 double_Array_0[0][1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1][0] >= -461168.6018427383000e+13F && double_Array_0[0][1][0] <= -1.0e-20F) || (double_Array_0[0][1][0] <= 4611686.018427383000e+12F && double_Array_0[0][1][0] >= 1.0e-20F ));
 double_Array_0[1][1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1][0] >= -461168.6018427383000e+13F && double_Array_0[1][1][0] <= -1.0e-20F) || (double_Array_0[1][1][0] <= 4611686.018427383000e+12F && double_Array_0[1][1][0] >= 1.0e-20F ));
 double_Array_0[1][0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0][1] >= 0.0F && double_Array_0[1][0][1] <= -1.0e-20F) || (double_Array_0[1][0][1] <= 9223372.036854766000e+12F && double_Array_0[1][0][1] >= 1.0e-20F ));
 double_Array_0[0][1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1][1] >= 0.0F && double_Array_0[0][1][1] <= -1.0e-20F) || (double_Array_0[0][1][1] <= 9223372.036854766000e+12F && double_Array_0[0][1][1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 32766);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((unsigned_long_int_Array_0[1] <= unsigned_long_int_Array_0[0]) ? ((unsigned_long_int_Array_0[0] <= unsigned_long_int_Array_0[1]) ? (signed_long_int_Array_0[2] == ((signed long int) (1 - signed_long_int_Array_0[1]))) : (signed_long_int_Array_0[2] == ((signed long int) (signed_long_int_Array_0[1] - signed_long_int_Array_0[0])))) : 1) && (((unsigned_short_int_Array_0[1] - unsigned_short_int_Array_0[0]) <= 0) ? (double_Array_0[1][1][1] == ((double) ((((double_Array_0[1][0][0]) < 0 ) ? -(double_Array_0[1][0][0]) : (double_Array_0[1][0][0]))))) : 1)) && ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0])) : (signed_short_int_Array_0[1] == ((signed short int) ((((signed_short_int_Array_0[0]) < (signed_short_int_Array_0[2])) ? (signed_short_int_Array_0[0]) : (signed_short_int_Array_0[2]))))))) && ((unsigned_long_int_Array_0[1] == ((((unsigned_short_int_Array_0[1]) > (signed_long_int_Array_0[0])) ? (unsigned_short_int_Array_0[1]) : (signed_long_int_Array_0[0])))) ? (double_Array_0[0][0][1] == ((double) (double_Array_0[0][1][0] + double_Array_0[1][1][0]))) : (double_Array_0[0][0][1] == ((double) (double_Array_0[1][0][1] - double_Array_0[0][1][1]))))) && ((double_Array_0[0][1][1] <= double_Array_0[1][1][0]) ? ((unsigned_long_int_Array_0[0] < unsigned_short_int_Array_0[1]) ? (double_Array_0[0][0][0] == ((double) 199.75)) : 1) : 1)
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
