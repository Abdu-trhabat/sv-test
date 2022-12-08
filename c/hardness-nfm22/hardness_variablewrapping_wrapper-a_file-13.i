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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 1
};
double double_Array_0[2][2] = {
 {128.4, 3.8}, {50.2, 25.1}
};
signed char signed_char_Array_0[2][2] = {
 {64, 4}, {0, 16}
};
unsigned char unsigned_char_Array_0[1] = {
 16
};
unsigned short int unsigned_short_int_Array_0[3] = {
 2, 16, 25
};
void initially(void) {
}
void step(void) {
 if (((double_Array_0[0][0] - double_Array_0[1][0]) + double_Array_0[0][1]) <= (256.625 * ((((1.875) > (double_Array_0[1][1])) ? (1.875) : (double_Array_0[1][1]))))) {
  unsigned_char_Array_0[0] = (((((5) < 0 ) ? -(5) : (5))) + 5);
 }
 if (BOOL_unsigned_char_Array_0[0]) {
  unsigned_short_int_Array_0[2] = ((((unsigned_char_Array_0[0]) > (unsigned_char_Array_0[0])) ? (unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0])));
 }
 if ((unsigned_short_int_Array_0[2] == 16) || (unsigned_char_Array_0[0] < (10 / unsigned_short_int_Array_0[1]))) {
  signed_char_Array_0[1][1] = signed_char_Array_0[0][1];
 } else {
  signed_char_Array_0[1][1] = 5;
 }
 unsigned char stepLocal_1 = unsigned_char_Array_0[0];
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[0];
 if (stepLocal_0 || (unsigned_char_Array_0[0] >= unsigned_char_Array_0[0])) {
  if (stepLocal_1 < ((signed_char_Array_0[0][0] - signed_char_Array_0[1][0]) - 16)) {
   unsigned_short_int_Array_0[0] = ((((signed_char_Array_0[1][0]) > (32)) ? (signed_char_Array_0[1][0]) : (32)));
  }
 } else {
  unsigned_short_int_Array_0[0] = ((((signed_char_Array_0[0][0]) < (unsigned_char_Array_0[0])) ? (signed_char_Array_0[0][0]) : (unsigned_char_Array_0[0])));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854776000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854776000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= -922337.2036854776000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= -922337.2036854776000e+13F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0] >= 63);
 assume_abort_if_not(signed_char_Array_0[0][0] <= 127);
 signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0] >= 0);
 assume_abort_if_not(signed_char_Array_0[1][0] <= 64);
 signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][1] >= -127);
 assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
 assume_abort_if_not(unsigned_short_int_Array_0[1] != 0);
}
void updateLastVariables() {
}
int property() {
 return (((BOOL_unsigned_char_Array_0[0] ? (unsigned_short_int_Array_0[2] == ((unsigned short int) ((((unsigned_char_Array_0[0]) > (unsigned_char_Array_0[0])) ? (unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0]))))) : 1) && (((unsigned_short_int_Array_0[2] == 16) || (unsigned_char_Array_0[0] < (10 / unsigned_short_int_Array_0[1]))) ? (signed_char_Array_0[1][1] == ((signed char) signed_char_Array_0[0][1])) : (signed_char_Array_0[1][1] == ((signed char) 5)))) && ((BOOL_unsigned_char_Array_0[0] || (unsigned_char_Array_0[0] >= unsigned_char_Array_0[0])) ? ((unsigned_char_Array_0[0] < ((signed_char_Array_0[0][0] - signed_char_Array_0[1][0]) - 16)) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) ((((signed_char_Array_0[1][0]) > (32)) ? (signed_char_Array_0[1][0]) : (32))))) : 1) : (unsigned_short_int_Array_0[0] == ((unsigned short int) ((((signed_char_Array_0[0][0]) < (unsigned_char_Array_0[0])) ? (signed_char_Array_0[0][0]) : (unsigned_char_Array_0[0]))))))) && ((((double_Array_0[0][0] - double_Array_0[1][0]) + double_Array_0[0][1]) <= (256.625 * ((((1.875) > (double_Array_0[1][1])) ? (1.875) : (double_Array_0[1][1]))))) ? (unsigned_char_Array_0[0] == ((unsigned char) (((((5) < 0 ) ? -(5) : (5))) + 5))) : 1)
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
