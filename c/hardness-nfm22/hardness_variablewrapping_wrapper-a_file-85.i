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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch85Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][5] = {
 {0, 1, 0, 0, 0}, {0, 0, 1, 0, 0}
};
signed char signed_char_Array_0[3] = {
 50, 32, 4
};
signed long int signed_long_int_Array_0[1] = {
 16
};
unsigned char unsigned_char_Array_0[2] = {
 2, 128
};
unsigned short int unsigned_short_int_Array_0[1] = {
 64
};
void initially(void) {
}
void step(void) {
 unsigned_char_Array_0[1] = ((((((((32) > (unsigned_char_Array_0[0])) ? (32) : (unsigned_char_Array_0[0])))) < (16)) ? (((((32) > (unsigned_char_Array_0[0])) ? (32) : (unsigned_char_Array_0[0])))) : (16)));
 BOOL_unsigned_char_Array_0[1][1] = ((BOOL_unsigned_char_Array_0[1][0] || (BOOL_unsigned_char_Array_0[0][2] || BOOL_unsigned_char_Array_0[0][3])) || BOOL_unsigned_char_Array_0[0][0]);
 BOOL_unsigned_char_Array_0[0][1] = ((BOOL_unsigned_char_Array_0[0][4] && BOOL_unsigned_char_Array_0[1][4]) && BOOL_unsigned_char_Array_0[1][3]);
 if (BOOL_unsigned_char_Array_0[0][1]) {
  signed_char_Array_0[1] = (((((signed_char_Array_0[2]) < (100)) ? (signed_char_Array_0[2]) : (100))) - 64);
 } else {
  signed_char_Array_0[1] = (signed_char_Array_0[2] - signed_char_Array_0[0]);
 }
 signed long int stepLocal_0 = unsigned_char_Array_0[0] * (unsigned_char_Array_0[1] / unsigned_short_int_Array_0[0]);
 if (stepLocal_0 == unsigned_char_Array_0[1]) {
  if (! BOOL_unsigned_char_Array_0[0][2]) {
   BOOL_unsigned_char_Array_0[1][2] = BOOL_unsigned_char_Array_0[0][0];
  } else {
   BOOL_unsigned_char_Array_0[1][2] = BOOL_unsigned_char_Array_0[0][2];
  }
 } else {
  BOOL_unsigned_char_Array_0[1][2] = BOOL_unsigned_char_Array_0[1][0];
 }
 if (BOOL_unsigned_char_Array_0[1][2]) {
  signed_long_int_Array_0[0] = (((((signed_char_Array_0[1] + unsigned_char_Array_0[1])) < (-16)) ? ((signed_char_Array_0[1] + unsigned_char_Array_0[1])) : (-16)));
 } else {
  if (BOOL_unsigned_char_Array_0[1][1]) {
   signed_long_int_Array_0[0] = (unsigned_char_Array_0[1] + -4);
  } else {
   signed_long_int_Array_0[0] = unsigned_char_Array_0[1];
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] <= 0);
 BOOL_unsigned_char_Array_0[0][3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][3] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][3] <= 0);
 BOOL_unsigned_char_Array_0[1][3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][3] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][3] <= 1);
 BOOL_unsigned_char_Array_0[0][4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][4] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][4] <= 1);
 BOOL_unsigned_char_Array_0[1][4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][4] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][4] <= 1);
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 126);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -1);
 assume_abort_if_not(signed_char_Array_0[2] <= 126);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
 assume_abort_if_not(unsigned_short_int_Array_0[0] != 0);
}
void updateLastVariables() {
}
int property() {
 return (((((BOOL_unsigned_char_Array_0[1][2] ? (signed_long_int_Array_0[0] == ((signed long int) (((((signed_char_Array_0[1] + unsigned_char_Array_0[1])) < (-16)) ? ((signed_char_Array_0[1] + unsigned_char_Array_0[1])) : (-16))))) : (BOOL_unsigned_char_Array_0[1][1] ? (signed_long_int_Array_0[0] == ((signed long int) (unsigned_char_Array_0[1] + -4))) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[1])))) && (unsigned_char_Array_0[1] == ((unsigned char) ((((((((32) > (unsigned_char_Array_0[0])) ? (32) : (unsigned_char_Array_0[0])))) < (16)) ? (((((32) > (unsigned_char_Array_0[0])) ? (32) : (unsigned_char_Array_0[0])))) : (16)))))) && (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) ((BOOL_unsigned_char_Array_0[1][0] || (BOOL_unsigned_char_Array_0[0][2] || BOOL_unsigned_char_Array_0[0][3])) || BOOL_unsigned_char_Array_0[0][0])))) && (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) ((BOOL_unsigned_char_Array_0[0][4] && BOOL_unsigned_char_Array_0[1][4]) && BOOL_unsigned_char_Array_0[1][3])))) && (BOOL_unsigned_char_Array_0[0][1] ? (signed_char_Array_0[1] == ((signed char) (((((signed_char_Array_0[2]) < (100)) ? (signed_char_Array_0[2]) : (100))) - 64))) : (signed_char_Array_0[1] == ((signed char) (signed_char_Array_0[2] - signed_char_Array_0[0]))))) && (((unsigned_char_Array_0[0] * (unsigned_char_Array_0[1] / unsigned_short_int_Array_0[0])) == unsigned_char_Array_0[1]) ? ((! BOOL_unsigned_char_Array_0[0][2]) ? (BOOL_unsigned_char_Array_0[1][2] == ((unsigned char) BOOL_unsigned_char_Array_0[0][0])) : (BOOL_unsigned_char_Array_0[1][2] == ((unsigned char) BOOL_unsigned_char_Array_0[0][2]))) : (BOOL_unsigned_char_Array_0[1][2] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0])))
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
