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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch23Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {0, 0}, {0, 0}
};
float float_Array_0[5] = {
 1.75, 9.75, 1.4, 999.7, 1.2
};
unsigned long int unsigned_long_int_Array_0[2][2][2] = {
 {{1394088949, 25}, {16, 16}}, {{0, 64}, {1277342739, 0}}
};
void initially(void) {
}
void step(void) {
 unsigned_long_int_Array_0[1][1][1] = ((((unsigned_long_int_Array_0[0][1][1]) < (unsigned_long_int_Array_0[1][0][1])) ? (unsigned_long_int_Array_0[0][1][1]) : (unsigned_long_int_Array_0[1][0][1])));
 if ((float_Array_0[4] / float_Array_0[3]) <= (float_Array_0[2] + (float_Array_0[1] - float_Array_0[0]))) {
  unsigned_long_int_Array_0[0][0][1] = ((((unsigned_long_int_Array_0[0][1][1]) < (unsigned_long_int_Array_0[1][0][1])) ? (unsigned_long_int_Array_0[0][1][1]) : (unsigned_long_int_Array_0[1][0][1])));
 }
 unsigned_long_int_Array_0[0][1][0] = ((((unsigned_long_int_Array_0[0][1][1]) > (((unsigned_long_int_Array_0[1][1][0] + unsigned_long_int_Array_0[0][0][0]) - unsigned_long_int_Array_0[1][0][0]))) ? (unsigned_long_int_Array_0[0][1][1]) : (((unsigned_long_int_Array_0[1][1][0] + unsigned_long_int_Array_0[0][0][0]) - unsigned_long_int_Array_0[1][0][0]))));
 unsigned char stepLocal_0 = (- float_Array_0[4]) != 1.9f;
 if (stepLocal_0 || ((unsigned_long_int_Array_0[0][0][1] * unsigned_long_int_Array_0[1][0][0]) < unsigned_long_int_Array_0[1][0][1])) {
  BOOL_unsigned_char_Array_0[0][1] = (! BOOL_unsigned_char_Array_0[1][1]);
 } else {
  BOOL_unsigned_char_Array_0[0][1] = BOOL_unsigned_char_Array_0[1][1];
 }
 if (BOOL_unsigned_char_Array_0[0][1]) {
  if (! ((float_Array_0[4] / float_Array_0[3]) < (float_Array_0[1] - float_Array_0[0]))) {
   if (BOOL_unsigned_char_Array_0[0][1]) {
    BOOL_unsigned_char_Array_0[1][0] = (! BOOL_unsigned_char_Array_0[0][0]);
   }
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 0);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= -922337.2036854776000e+13F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854776000e+12F && float_Array_0[3] >= 1.0e-20F ));
 assume_abort_if_not(float_Array_0[3] != 0.0F);
 float_Array_0[4] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[4] >= -922337.2036854776000e+13F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 9223372.036854776000e+12F && float_Array_0[4] >= 1.0e-20F ));
 unsigned_long_int_Array_0[0][0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0][0] >= 1073741824);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0][0] <= 2147483647);
 unsigned_long_int_Array_0[1][0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0][0] <= 2147483647);
 unsigned_long_int_Array_0[1][1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][1][0] >= 1073741823);
 assume_abort_if_not(unsigned_long_int_Array_0[1][1][0] <= 2147483647);
 unsigned_long_int_Array_0[1][0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0][1] <= 4294967294);
 unsigned_long_int_Array_0[0][1][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1][1] <= 4294967294);
}
void updateLastVariables() {
}
int property() {
 return ((((unsigned_long_int_Array_0[1][1][1] == ((unsigned long int) ((((unsigned_long_int_Array_0[0][1][1]) < (unsigned_long_int_Array_0[1][0][1])) ? (unsigned_long_int_Array_0[0][1][1]) : (unsigned_long_int_Array_0[1][0][1]))))) && (((float_Array_0[4] / float_Array_0[3]) <= (float_Array_0[2] + (float_Array_0[1] - float_Array_0[0]))) ? (unsigned_long_int_Array_0[0][0][1] == ((unsigned long int) ((((unsigned_long_int_Array_0[0][1][1]) < (unsigned_long_int_Array_0[1][0][1])) ? (unsigned_long_int_Array_0[0][1][1]) : (unsigned_long_int_Array_0[1][0][1]))))) : 1)) && (unsigned_long_int_Array_0[0][1][0] == ((unsigned long int) ((((unsigned_long_int_Array_0[0][1][1]) > (((unsigned_long_int_Array_0[1][1][0] + unsigned_long_int_Array_0[0][0][0]) - unsigned_long_int_Array_0[1][0][0]))) ? (unsigned_long_int_Array_0[0][1][1]) : (((unsigned_long_int_Array_0[1][1][0] + unsigned_long_int_Array_0[0][0][0]) - unsigned_long_int_Array_0[1][0][0]))))))) && (BOOL_unsigned_char_Array_0[0][1] ? ((! ((float_Array_0[4] / float_Array_0[3]) < (float_Array_0[1] - float_Array_0[0]))) ? (BOOL_unsigned_char_Array_0[0][1] ? (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) (! BOOL_unsigned_char_Array_0[0][0]))) : 1) : 1) : 1)) && ((((- float_Array_0[4]) != 1.9f) || ((unsigned_long_int_Array_0[0][0][1] * unsigned_long_int_Array_0[1][0][0]) < unsigned_long_int_Array_0[1][0][1])) ? (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) (! BOOL_unsigned_char_Array_0[1][1]))) : (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) BOOL_unsigned_char_Array_0[1][1])))
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
