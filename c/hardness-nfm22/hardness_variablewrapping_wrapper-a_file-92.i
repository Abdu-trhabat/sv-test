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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch92Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 0, 0, 0
};
double double_Array_0[3] = {
 15.5, 16.65, 1000000.625
};
float float_Array_0[1] = {
 2.4
};
signed char signed_char_Array_0[2][3] = {
 {10, 0, 2}, {32, 8, 32}
};
signed short int signed_short_int_Array_0[1] = {
 500
};
unsigned short int unsigned_short_int_Array_0[2] = {
 8, 100
};
void initially(void) {
}
void step(void) {
 signed_char_Array_0[1][2] = ((signed_char_Array_0[0][2] + signed_char_Array_0[1][1]) - ((((signed_char_Array_0[0][1]) > ((signed_char_Array_0[1][0] + signed_char_Array_0[0][0]))) ? (signed_char_Array_0[0][1]) : ((signed_char_Array_0[1][0] + signed_char_Array_0[0][0])))));
 signed long int stepLocal_0 = (~ signed_char_Array_0[1][0]) * (signed_char_Array_0[0][0] & signed_char_Array_0[1][1]);
 if (stepLocal_0 >= signed_char_Array_0[0][1]) {
  double_Array_0[2] = double_Array_0[1];
 } else {
  double_Array_0[2] = double_Array_0[0];
 }
 signed_short_int_Array_0[0] = ((((signed_char_Array_0[0][2]) < 0 ) ? -(signed_char_Array_0[0][2]) : (signed_char_Array_0[0][2])));
 signed long int stepLocal_1 = signed_char_Array_0[0][0] / unsigned_short_int_Array_0[1];
 if (stepLocal_1 < -100) {
  BOOL_unsigned_char_Array_0[0] = (! (! (! BOOL_unsigned_char_Array_0[2])));
 } else {
  BOOL_unsigned_char_Array_0[0] = (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[1]);
 }
 float_Array_0[0] = double_Array_0[1];
 if (! BOOL_unsigned_char_Array_0[0]) {
  unsigned_short_int_Array_0[0] = (signed_char_Array_0[1][0] + (((((signed_char_Array_0[0][0]) > (1)) ? (signed_char_Array_0[0][0]) : (1))) + 64));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854765600e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854765600e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854765600e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0][0] <= 63);
 signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0] >= 0);
 assume_abort_if_not(signed_char_Array_0[1][0] <= 63);
 signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
 signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][1] >= 0);
 assume_abort_if_not(signed_char_Array_0[1][1] <= 63);
 signed_char_Array_0[0][2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][2] >= 0);
 assume_abort_if_not(signed_char_Array_0[0][2] <= 63);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
 assume_abort_if_not(unsigned_short_int_Array_0[1] != 0);
}
void updateLastVariables() {
}
int property() {
 return (((((signed_char_Array_0[1][2] == ((signed char) ((signed_char_Array_0[0][2] + signed_char_Array_0[1][1]) - ((((signed_char_Array_0[0][1]) > ((signed_char_Array_0[1][0] + signed_char_Array_0[0][0]))) ? (signed_char_Array_0[0][1]) : ((signed_char_Array_0[1][0] + signed_char_Array_0[0][0]))))))) && ((((~ signed_char_Array_0[1][0]) * (signed_char_Array_0[0][0] & signed_char_Array_0[1][1])) >= signed_char_Array_0[0][1]) ? (double_Array_0[2] == ((double) double_Array_0[1])) : (double_Array_0[2] == ((double) double_Array_0[0])))) && (signed_short_int_Array_0[0] == ((signed short int) ((((signed_char_Array_0[0][2]) < 0 ) ? -(signed_char_Array_0[0][2]) : (signed_char_Array_0[0][2])))))) && ((! BOOL_unsigned_char_Array_0[0]) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) (signed_char_Array_0[1][0] + (((((signed_char_Array_0[0][0]) > (1)) ? (signed_char_Array_0[0][0]) : (1))) + 64)))) : 1)) && (((signed_char_Array_0[0][0] / unsigned_short_int_Array_0[1]) < -100) ? (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (! (! (! BOOL_unsigned_char_Array_0[2]))))) : (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[1]))))) && (float_Array_0[0] == ((float) double_Array_0[1]))
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
