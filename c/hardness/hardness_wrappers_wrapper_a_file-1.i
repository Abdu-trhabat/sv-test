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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 1
};
double double_Array_0[2] = {
 -0.4, 128.5
};
float float_Array_0[3] = {
 -0.25, 256.2, 5.5
};
signed char signed_char_Array_0[1] = {
 -100
};
signed long int signed_long_int_Array_0[3] = {
 128, 1000000, -8
};
unsigned char unsigned_char_Array_0[5] = {
 50, 50, 0, 100, 5
};
unsigned long int unsigned_long_int_Array_0[1] = {
 128
};
void initially(void) {
}
void step(void) {
 signed_long_int_Array_0[2] = (signed_long_int_Array_0[1] + signed_long_int_Array_0[0]);
 if (BOOL_unsigned_char_Array_0[0]) {
  unsigned_char_Array_0[2] = ((unsigned_char_Array_0[3] - unsigned_char_Array_0[0]) + (((((unsigned_char_Array_0[1]) < (8)) ? (unsigned_char_Array_0[1]) : (8))) + ((((unsigned_char_Array_0[4]) < 0 ) ? -(unsigned_char_Array_0[4]) : (unsigned_char_Array_0[4])))));
 }
 signed long int stepLocal_0 = signed_long_int_Array_0[2];
 if (((((signed_long_int_Array_0[1]) < (signed_long_int_Array_0[2])) ? (signed_long_int_Array_0[1]) : (signed_long_int_Array_0[2]))) > stepLocal_0) {
  unsigned_long_int_Array_0[0] = ((((((((unsigned_char_Array_0[1]) > (signed_long_int_Array_0[2])) ? (unsigned_char_Array_0[1]) : (signed_long_int_Array_0[2])))) < (unsigned_char_Array_0[0])) ? (((((unsigned_char_Array_0[1]) > (signed_long_int_Array_0[2])) ? (unsigned_char_Array_0[1]) : (signed_long_int_Array_0[2])))) : (unsigned_char_Array_0[0])));
 } else {
  unsigned_long_int_Array_0[0] = ((((unsigned_char_Array_0[3]) < (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[3]) : (unsigned_char_Array_0[1])));
 }
 double_Array_0[0] = float_Array_0[1];
 double_Array_0[1] = float_Array_0[0];
 if (double_Array_0[1] <= (- double_Array_0[0])) {
  float_Array_0[2] = ((((float_Array_0[1]) < 0 ) ? -(float_Array_0[1]) : (float_Array_0[1])));
 } else {
  if (BOOL_unsigned_char_Array_0[0]) {
   float_Array_0[2] = float_Array_0[1];
  } else {
   float_Array_0[2] = float_Array_0[0];
  }
 }
 if (double_Array_0[0] < 1.25f) {
  signed_char_Array_0[0] = unsigned_char_Array_0[1];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854766000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854766000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 1073741823);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 1073741823);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 63);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 64);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 63);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
 unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[4] <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((double_Array_0[1] <= (- double_Array_0[0])) ? (float_Array_0[2] == ((float) ((((float_Array_0[1]) < 0 ) ? -(float_Array_0[1]) : (float_Array_0[1]))))) : (BOOL_unsigned_char_Array_0[0] ? (float_Array_0[2] == ((float) float_Array_0[1])) : (float_Array_0[2] == ((float) float_Array_0[0])))) && (signed_long_int_Array_0[2] == ((signed long int) (signed_long_int_Array_0[1] + signed_long_int_Array_0[0])))) && (BOOL_unsigned_char_Array_0[0] ? (unsigned_char_Array_0[2] == ((unsigned char) ((unsigned_char_Array_0[3] - unsigned_char_Array_0[0]) + (((((unsigned_char_Array_0[1]) < (8)) ? (unsigned_char_Array_0[1]) : (8))) + ((((unsigned_char_Array_0[4]) < 0 ) ? -(unsigned_char_Array_0[4]) : (unsigned_char_Array_0[4]))))))) : 1)) && ((double_Array_0[0] < 1.25f) ? (signed_char_Array_0[0] == ((signed char) unsigned_char_Array_0[1])) : 1)) && ((((((signed_long_int_Array_0[1]) < (signed_long_int_Array_0[2])) ? (signed_long_int_Array_0[1]) : (signed_long_int_Array_0[2]))) > signed_long_int_Array_0[2]) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) ((((((((unsigned_char_Array_0[1]) > (signed_long_int_Array_0[2])) ? (unsigned_char_Array_0[1]) : (signed_long_int_Array_0[2])))) < (unsigned_char_Array_0[0])) ? (((((unsigned_char_Array_0[1]) > (signed_long_int_Array_0[2])) ? (unsigned_char_Array_0[1]) : (signed_long_int_Array_0[2])))) : (unsigned_char_Array_0[0]))))) : (unsigned_long_int_Array_0[0] == ((unsigned long int) ((((unsigned_char_Array_0[3]) < (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[3]) : (unsigned_char_Array_0[1]))))))) && (double_Array_0[0] == ((double) float_Array_0[1]))) && (double_Array_0[1] == ((double) float_Array_0[0]))
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
