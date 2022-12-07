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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch99Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 1
};
float float_Array_0[7] = {
 4.8, 127.25, 0.4, 99999999999.5, 500.5, 1000000000000000.6, 255.5
};
signed long int signed_long_int_Array_0[5] = {
 256, 25, 0, -50, -5
};
signed short int signed_short_int_Array_0[1] = {
 2
};
unsigned char unsigned_char_Array_0[1] = {
 16
};
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (((8) < 0 ) ? -(8) : (8));
 if ((((((200) < (128)) ? (200) : (128))) - unsigned_char_Array_0[0]) > stepLocal_0) {
  float_Array_0[6] = (((((float_Array_0[5]) < (float_Array_0[4])) ? (float_Array_0[5]) : (float_Array_0[4]))) - float_Array_0[3]);
 } else {
  if (BOOL_unsigned_char_Array_0[0]) {
   float_Array_0[6] = (((((float_Array_0[1]) < (float_Array_0[0])) ? (float_Array_0[1]) : (float_Array_0[0]))) + float_Array_0[2]);
  }
 }
 if ((float_Array_0[4] + float_Array_0[3]) == float_Array_0[6]) {
  signed_long_int_Array_0[2] = (((((unsigned_char_Array_0[0]) < (signed_long_int_Array_0[0])) ? (unsigned_char_Array_0[0]) : (signed_long_int_Array_0[0]))) - signed_long_int_Array_0[1]);
 } else {
  signed_long_int_Array_0[2] = signed_long_int_Array_0[1];
 }
 signed long int stepLocal_1 = signed_long_int_Array_0[0] % signed_short_int_Array_0[0];
 if (float_Array_0[0] == float_Array_0[5]) {
  signed_long_int_Array_0[4] = signed_long_int_Array_0[1];
 } else {
  if (stepLocal_1 != signed_long_int_Array_0[1]) {
   signed_long_int_Array_0[4] = ((((((signed_short_int_Array_0[0] + unsigned_char_Array_0[0]) + signed_long_int_Array_0[3])) > (signed_long_int_Array_0[1])) ? (((signed_short_int_Array_0[0] + unsigned_char_Array_0[0]) + signed_long_int_Array_0[3])) : (signed_long_int_Array_0[1])));
  } else {
   signed_long_int_Array_0[4] = signed_long_int_Array_0[3];
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -461168.6018427382800e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427382800e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -461168.6018427382800e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 4611686.018427382800e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -461168.6018427382800e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 4611686.018427382800e+12F && float_Array_0[2] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= 0.0F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854765600e+12F && float_Array_0[3] >= 1.0e-20F ));
 float_Array_0[4] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 9223372.036854765600e+12F && float_Array_0[4] >= 1.0e-20F ));
 float_Array_0[5] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[5] >= 0.0F && float_Array_0[5] <= -1.0e-20F) || (float_Array_0[5] <= 9223372.036854765600e+12F && float_Array_0[5] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -1);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
 signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[3] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[3] <= 1073741823);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
 assume_abort_if_not(signed_short_int_Array_0[0] != 0);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
}
void updateLastVariables() {
}
int property() {
 return ((((((((200) < (128)) ? (200) : (128))) - unsigned_char_Array_0[0]) > ((((8) < 0 ) ? -(8) : (8)))) ? (float_Array_0[6] == ((float) (((((float_Array_0[5]) < (float_Array_0[4])) ? (float_Array_0[5]) : (float_Array_0[4]))) - float_Array_0[3]))) : (BOOL_unsigned_char_Array_0[0] ? (float_Array_0[6] == ((float) (((((float_Array_0[1]) < (float_Array_0[0])) ? (float_Array_0[1]) : (float_Array_0[0]))) + float_Array_0[2]))) : 1)) && (((float_Array_0[4] + float_Array_0[3]) == float_Array_0[6]) ? (signed_long_int_Array_0[2] == ((signed long int) (((((unsigned_char_Array_0[0]) < (signed_long_int_Array_0[0])) ? (unsigned_char_Array_0[0]) : (signed_long_int_Array_0[0]))) - signed_long_int_Array_0[1]))) : (signed_long_int_Array_0[2] == ((signed long int) signed_long_int_Array_0[1])))) && ((float_Array_0[0] == float_Array_0[5]) ? (signed_long_int_Array_0[4] == ((signed long int) signed_long_int_Array_0[1])) : (((signed_long_int_Array_0[0] % signed_short_int_Array_0[0]) != signed_long_int_Array_0[1]) ? (signed_long_int_Array_0[4] == ((signed long int) ((((((signed_short_int_Array_0[0] + unsigned_char_Array_0[0]) + signed_long_int_Array_0[3])) > (signed_long_int_Array_0[1])) ? (((signed_short_int_Array_0[0] + unsigned_char_Array_0[0]) + signed_long_int_Array_0[3])) : (signed_long_int_Array_0[1]))))) : (signed_long_int_Array_0[4] == ((signed long int) signed_long_int_Array_0[3]))))
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
