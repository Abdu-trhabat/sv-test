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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch20Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 0, 0
};
double double_Array_0[2] = {
 4.6, 10.2
};
float float_Array_0[5] = {
 999999999999.4, 8.5, 2.95, 0.0, 0.6
};
unsigned char unsigned_char_Array_0[3] = {
 100, 1, 128
};
unsigned long int unsigned_long_int_Array_0[2][2] = {
 {25, 256}, {1, 3724367395}
};
void initially(void) {
}
void step(void) {
 if (BOOL_unsigned_char_Array_0[1]) {
  float_Array_0[4] = ((float_Array_0[3] - float_Array_0[2]) - float_Array_0[1]);
 } else {
  float_Array_0[4] = (float_Array_0[2] + float_Array_0[0]);
 }
 double_Array_0[1] = ((15.5 + float_Array_0[2]) - (float_Array_0[3] - double_Array_0[0]));
 unsigned long int stepLocal_2 = unsigned_long_int_Array_0[1][0];
 signed long int stepLocal_1 = 5;
 if (stepLocal_1 >= unsigned_long_int_Array_0[1][1]) {
  if (float_Array_0[4] >= double_Array_0[0]) {
   unsigned_char_Array_0[1] = (128 - 16);
  } else {
   if (stepLocal_2 >= ((((unsigned_long_int_Array_0[0][0]) < 0 ) ? -(unsigned_long_int_Array_0[0][0]) : (unsigned_long_int_Array_0[0][0])))) {
    unsigned_char_Array_0[1] = (unsigned_char_Array_0[2] - unsigned_char_Array_0[0]);
   } else {
    unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
   }
  }
 }
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[1];
 if (BOOL_unsigned_char_Array_0[0] || stepLocal_0) {
  unsigned_long_int_Array_0[0][1] = ((unsigned_long_int_Array_0[1][1] - unsigned_char_Array_0[1]) - unsigned_char_Array_0[1]);
 } else {
  unsigned_long_int_Array_0[0][1] = (unsigned_char_Array_0[1] + ((((unsigned_char_Array_0[1]) < 0 ) ? -(unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1]))));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 4611686.018427382800e+12F && double_Array_0[0] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -461168.6018427382800e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427382800e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 4611686.018427382800e+12F && float_Array_0[2] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= 4611686.018427382800e+12F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854765600e+12F && float_Array_0[3] >= 1.0e-20F ));
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 254);
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 1073741823);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 2147483647);
 unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 3221225470);
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 4294967294);
}
void updateLastVariables() {
}
int property() {
 return (((BOOL_unsigned_char_Array_0[1] ? (float_Array_0[4] == ((float) ((float_Array_0[3] - float_Array_0[2]) - float_Array_0[1]))) : (float_Array_0[4] == ((float) (float_Array_0[2] + float_Array_0[0])))) && (double_Array_0[1] == ((double) ((15.5 + float_Array_0[2]) - (float_Array_0[3] - double_Array_0[0]))))) && ((BOOL_unsigned_char_Array_0[0] || BOOL_unsigned_char_Array_0[1]) ? (unsigned_long_int_Array_0[0][1] == ((unsigned long int) ((unsigned_long_int_Array_0[1][1] - unsigned_char_Array_0[1]) - unsigned_char_Array_0[1]))) : (unsigned_long_int_Array_0[0][1] == ((unsigned long int) (unsigned_char_Array_0[1] + ((((unsigned_char_Array_0[1]) < 0 ) ? -(unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1])))))))) && ((5 >= unsigned_long_int_Array_0[1][1]) ? ((float_Array_0[4] >= double_Array_0[0]) ? (unsigned_char_Array_0[1] == ((unsigned char) (128 - 16))) : ((unsigned_long_int_Array_0[1][0] >= ((((unsigned_long_int_Array_0[0][0]) < 0 ) ? -(unsigned_long_int_Array_0[0][0]) : (unsigned_long_int_Array_0[0][0])))) ? (unsigned_char_Array_0[1] == ((unsigned char) (unsigned_char_Array_0[2] - unsigned_char_Array_0[0]))) : (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])))) : 1)
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
