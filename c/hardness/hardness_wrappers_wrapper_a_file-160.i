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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[3] = {
 1.5, 200.75, 127.5
};
float float_Array_0[1] = {
 16.2
};
signed char signed_char_Array_0[2][2][2] = {
 {{1, -5}, {5, 16}}, {{4, 1}, {10, -128}}
};
signed long int signed_long_int_Array_0[2][3] = {
 {1350008661, -128, 1}, {1785639034, 2, 8}
};
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = signed_long_int_Array_0[1][2];
 if (stepLocal_0 >= (signed_long_int_Array_0[0][2] + signed_long_int_Array_0[1][1])) {
  signed_char_Array_0[1][1][1] = (signed_char_Array_0[0][1][1] - ((signed_char_Array_0[1][0][1] + signed_char_Array_0[1][1][0]) + ((((signed_char_Array_0[0][1][0]) > (signed_char_Array_0[1][0][0])) ? (signed_char_Array_0[0][1][0]) : (signed_char_Array_0[1][0][0])))));
 } else {
  signed_char_Array_0[1][1][1] = signed_char_Array_0[0][1][0];
 }
 signed char stepLocal_1 = signed_char_Array_0[1][0][1];
 if (stepLocal_1 >= (signed_char_Array_0[1][0][0] / ((((signed_char_Array_0[0][0][1]) < (signed_char_Array_0[0][0][0])) ? (signed_char_Array_0[0][0][1]) : (signed_char_Array_0[0][0][0]))))) {
  double_Array_0[1] = ((((double_Array_0[0]) > (5.8)) ? (double_Array_0[0]) : (5.8)));
 } else {
  double_Array_0[1] = double_Array_0[2];
 }
 signed long int stepLocal_2 = signed_char_Array_0[0][0][0] * signed_char_Array_0[0][0][1];
 if (stepLocal_2 == signed_char_Array_0[1][0][0]) {
  signed_long_int_Array_0[0][1] = (signed_char_Array_0[1][1][0] + signed_char_Array_0[0][0][1]);
 } else {
  signed_long_int_Array_0[0][1] = (signed_char_Array_0[0][1][0] - (((((signed_long_int_Array_0[0][0]) < (signed_long_int_Array_0[1][0])) ? (signed_long_int_Array_0[0][0]) : (signed_long_int_Array_0[1][0]))) - signed_char_Array_0[1][0][1]));
 }
 signed long int stepLocal_3 = signed_long_int_Array_0[1][0] ^ signed_char_Array_0[1][0][0];
 if ((signed_char_Array_0[1][1][0] << signed_long_int_Array_0[0][0]) != stepLocal_3) {
  if (BOOL_unsigned_char_Array_0[0]) {
   float_Array_0[0] = double_Array_0[2];
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854766000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= -922337.2036854766000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
 signed_char_Array_0[0][0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0][0] >= -128);
 assume_abort_if_not(signed_char_Array_0[0][0][0] <= 127);
 assume_abort_if_not(signed_char_Array_0[0][0][0] != 0);
 signed_char_Array_0[1][0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0][0] >= 0);
 assume_abort_if_not(signed_char_Array_0[1][0][0] <= 63);
 signed_char_Array_0[0][1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][1][0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0][1][0] <= 63);
 signed_char_Array_0[1][1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][1][0] >= 0);
 assume_abort_if_not(signed_char_Array_0[1][1][0] <= 31);
 signed_char_Array_0[0][0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0][1] >= -128);
 assume_abort_if_not(signed_char_Array_0[0][0][1] <= 127);
 assume_abort_if_not(signed_char_Array_0[0][0][1] != 0);
 signed_char_Array_0[1][0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0][1] >= 0);
 assume_abort_if_not(signed_char_Array_0[1][0][1] <= 32);
 signed_char_Array_0[0][1][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][1][1] >= -1);
 assume_abort_if_not(signed_char_Array_0[0][1][1] <= 126);
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= 1073741823);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483646);
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= 1073741823);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483646);
 signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1][1] <= 2147483647);
 signed_long_int_Array_0[0][2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][2] <= 2147483647);
 signed_long_int_Array_0[1][2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1][2] <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((signed_long_int_Array_0[1][2] >= (signed_long_int_Array_0[0][2] + signed_long_int_Array_0[1][1])) ? (signed_char_Array_0[1][1][1] == ((signed char) (signed_char_Array_0[0][1][1] - ((signed_char_Array_0[1][0][1] + signed_char_Array_0[1][1][0]) + ((((signed_char_Array_0[0][1][0]) > (signed_char_Array_0[1][0][0])) ? (signed_char_Array_0[0][1][0]) : (signed_char_Array_0[1][0][0]))))))) : (signed_char_Array_0[1][1][1] == ((signed char) signed_char_Array_0[0][1][0]))) && ((signed_char_Array_0[1][0][1] >= (signed_char_Array_0[1][0][0] / ((((signed_char_Array_0[0][0][1]) < (signed_char_Array_0[0][0][0])) ? (signed_char_Array_0[0][0][1]) : (signed_char_Array_0[0][0][0]))))) ? (double_Array_0[1] == ((double) ((((double_Array_0[0]) > (5.8)) ? (double_Array_0[0]) : (5.8))))) : (double_Array_0[1] == ((double) double_Array_0[2])))) && (((signed_char_Array_0[0][0][0] * signed_char_Array_0[0][0][1]) == signed_char_Array_0[1][0][0]) ? (signed_long_int_Array_0[0][1] == ((signed long int) (signed_char_Array_0[1][1][0] + signed_char_Array_0[0][0][1]))) : (signed_long_int_Array_0[0][1] == ((signed long int) (signed_char_Array_0[0][1][0] - (((((signed_long_int_Array_0[0][0]) < (signed_long_int_Array_0[1][0])) ? (signed_long_int_Array_0[0][0]) : (signed_long_int_Array_0[1][0]))) - signed_char_Array_0[1][0][1])))))) && (((signed_char_Array_0[1][1][0] << signed_long_int_Array_0[0][0]) != (signed_long_int_Array_0[1][0] ^ signed_char_Array_0[1][0][0])) ? (BOOL_unsigned_char_Array_0[0] ? (float_Array_0[0] == ((float) double_Array_0[2])) : 1) : 1)
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
