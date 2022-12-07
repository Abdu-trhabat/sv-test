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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch87Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 0
};
signed char signed_char_Array_0[5] = {
 16, 8, 0, 10, -128
};
signed long int signed_long_int_Array_0[2] = {
 8, 10
};
unsigned long int unsigned_long_int_Array_0[2][2] = {
 {64, 3164414017}, {128, 1}
};
signed long int last_1_signed_long_int_Array_0_1_ = 10;
void initially(void) {
}
void step(void) {
 signed_long_int_Array_0[0] = signed_char_Array_0[1];
 BOOL_unsigned_char_Array_0[0] = BOOL_unsigned_char_Array_0[1];
 unsigned_long_int_Array_0[0][0] = signed_char_Array_0[0];
 if (BOOL_unsigned_char_Array_0[0]) {
  unsigned_long_int_Array_0[1][1] = ((((unsigned_long_int_Array_0[0][1] - unsigned_long_int_Array_0[1][0]) < 0 ) ? -(unsigned_long_int_Array_0[0][1] - unsigned_long_int_Array_0[1][0]) : (unsigned_long_int_Array_0[0][1] - unsigned_long_int_Array_0[1][0])));
 }
 unsigned long int stepLocal_1 = unsigned_long_int_Array_0[1][0];
 signed long int stepLocal_0 = -8;
 if (stepLocal_0 < unsigned_long_int_Array_0[1][0]) {
  if (stepLocal_1 != signed_long_int_Array_0[0]) {
   signed_char_Array_0[4] = (((((signed_char_Array_0[3]) < 0 ) ? -(signed_char_Array_0[3]) : (signed_char_Array_0[3]))) - (((((signed_char_Array_0[2]) < (signed_char_Array_0[1])) ? (signed_char_Array_0[2]) : (signed_char_Array_0[1]))) + signed_char_Array_0[0]));
  } else {
   signed_char_Array_0[4] = -8;
  }
 } else {
  signed_char_Array_0[4] = signed_char_Array_0[1];
 }
 if ((last_1_signed_long_int_Array_0_1_ * unsigned_long_int_Array_0[0][1]) <= unsigned_long_int_Array_0[1][0]) {
  if ((signed_char_Array_0[0] - ((((-1) < 0 ) ? -(-1) : (-1)))) <= (unsigned_long_int_Array_0[0][0] * signed_char_Array_0[1])) {
   signed_long_int_Array_0[1] = (signed_char_Array_0[1] - signed_char_Array_0[0]);
  } else {
   signed_long_int_Array_0[1] = signed_char_Array_0[2];
  }
 } else {
  signed_long_int_Array_0[1] = signed_char_Array_0[2];
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 63);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= 0);
 assume_abort_if_not(signed_char_Array_0[1] <= 63);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= 0);
 assume_abort_if_not(signed_char_Array_0[2] <= 63);
 signed_char_Array_0[3] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[3] >= -126);
 assume_abort_if_not(signed_char_Array_0[3] <= 126);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 2147483647);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 4294967294);
}
void updateLastVariables() {
 last_1_signed_long_int_Array_0_1_ = signed_long_int_Array_0[1];
}
int property() {
 return (((((BOOL_unsigned_char_Array_0[0] ? (unsigned_long_int_Array_0[1][1] == ((unsigned long int) ((((unsigned_long_int_Array_0[0][1] - unsigned_long_int_Array_0[1][0]) < 0 ) ? -(unsigned_long_int_Array_0[0][1] - unsigned_long_int_Array_0[1][0]) : (unsigned_long_int_Array_0[0][1] - unsigned_long_int_Array_0[1][0]))))) : 1) && ((-8 < unsigned_long_int_Array_0[1][0]) ? ((unsigned_long_int_Array_0[1][0] != signed_long_int_Array_0[0]) ? (signed_char_Array_0[4] == ((signed char) (((((signed_char_Array_0[3]) < 0 ) ? -(signed_char_Array_0[3]) : (signed_char_Array_0[3]))) - (((((signed_char_Array_0[2]) < (signed_char_Array_0[1])) ? (signed_char_Array_0[2]) : (signed_char_Array_0[1]))) + signed_char_Array_0[0])))) : (signed_char_Array_0[4] == ((signed char) -8))) : (signed_char_Array_0[4] == ((signed char) signed_char_Array_0[1])))) && (((last_1_signed_long_int_Array_0_1_ * unsigned_long_int_Array_0[0][1]) <= unsigned_long_int_Array_0[1][0]) ? (((signed_char_Array_0[0] - ((((-1) < 0 ) ? -(-1) : (-1)))) <= (unsigned_long_int_Array_0[0][0] * signed_char_Array_0[1])) ? (signed_long_int_Array_0[1] == ((signed long int) (signed_char_Array_0[1] - signed_char_Array_0[0]))) : (signed_long_int_Array_0[1] == ((signed long int) signed_char_Array_0[2]))) : (signed_long_int_Array_0[1] == ((signed long int) signed_char_Array_0[2])))) && (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[1]))) && (BOOL_unsigned_char_Array_0[0] == ((unsigned char) BOOL_unsigned_char_Array_0[1]))) && (unsigned_long_int_Array_0[0][0] == ((unsigned long int) signed_char_Array_0[0]))
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
