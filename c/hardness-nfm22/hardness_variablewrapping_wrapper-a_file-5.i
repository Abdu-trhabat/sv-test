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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 0
};
signed long int signed_long_int_Array_0[1] = {
 0
};
signed short int signed_short_int_Array_0[2][3] = {
 {-10, 4, 0}, {2, -1, 10000}
};
unsigned char unsigned_char_Array_0[2][2] = {
 {100, 4}, {10, 128}
};
unsigned short int unsigned_short_int_Array_0[3] = {
 25, 20416, 21022
};
signed short int last_1_signed_short_int_Array_0_0__0_ = -10;
unsigned short int last_1_unsigned_short_int_Array_0_0_ = 25;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = last_1_unsigned_short_int_Array_0_0_ + (signed_short_int_Array_0[0][2] - signed_short_int_Array_0[1][0]);
 signed long int stepLocal_1 = last_1_unsigned_short_int_Array_0_0_;
 if (BOOL_unsigned_char_Array_0[0]) {
  if (signed_short_int_Array_0[0][1] > stepLocal_2) {
   if (stepLocal_1 < (~ last_1_signed_short_int_Array_0_0__0_)) {
    unsigned_char_Array_0[1][0] = unsigned_char_Array_0[0][0];
   } else {
    unsigned_char_Array_0[1][0] = unsigned_char_Array_0[0][0];
   }
  } else {
   unsigned_char_Array_0[1][0] = unsigned_char_Array_0[0][0];
  }
 }
 if (unsigned_char_Array_0[0][0] <= ((unsigned_char_Array_0[1][0] / unsigned_char_Array_0[0][1]) * (2 % unsigned_char_Array_0[1][1]))) {
  unsigned_short_int_Array_0[0] = (unsigned_char_Array_0[1][0] + (((((unsigned_short_int_Array_0[1]) > (unsigned_short_int_Array_0[2])) ? (unsigned_short_int_Array_0[1]) : (unsigned_short_int_Array_0[2]))) - unsigned_char_Array_0[1][1]));
 }
 signed long int stepLocal_0 = unsigned_char_Array_0[1][0] - unsigned_char_Array_0[1][0];
 if ((unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[0]) >= stepLocal_0) {
  signed_short_int_Array_0[1][2] = ((((unsigned_char_Array_0[1][0] - unsigned_char_Array_0[1][0]) < 0 ) ? -(unsigned_char_Array_0[1][0] - unsigned_char_Array_0[1][0]) : (unsigned_char_Array_0[1][0] - unsigned_char_Array_0[1][0])));
 }
 signed_long_int_Array_0[0] = -4;
 signed_short_int_Array_0[1][1] = unsigned_char_Array_0[1][0];
 signed_short_int_Array_0[0][0] = unsigned_char_Array_0[0][0];
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[1][0] <= 32767);
 signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
 signed_short_int_Array_0[0][2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][2] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0][2] <= 32766);
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 255);
 assume_abort_if_not(unsigned_char_Array_0[0][1] != 0);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 255);
 assume_abort_if_not(unsigned_char_Array_0[1][1] != 0);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
 unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[2] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[2] <= 32767);
}
void updateLastVariables() {
 last_1_signed_short_int_Array_0_0__0_ = signed_short_int_Array_0[0][0];
 last_1_unsigned_short_int_Array_0_0_ = unsigned_short_int_Array_0[0];
}
int property() {
 return (((((((unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[0]) >= (unsigned_char_Array_0[1][0] - unsigned_char_Array_0[1][0])) ? (signed_short_int_Array_0[1][2] == ((signed short int) ((((unsigned_char_Array_0[1][0] - unsigned_char_Array_0[1][0]) < 0 ) ? -(unsigned_char_Array_0[1][0] - unsigned_char_Array_0[1][0]) : (unsigned_char_Array_0[1][0] - unsigned_char_Array_0[1][0]))))) : 1) && (BOOL_unsigned_char_Array_0[0] ? ((signed_short_int_Array_0[0][1] > (last_1_unsigned_short_int_Array_0_0_ + (signed_short_int_Array_0[0][2] - signed_short_int_Array_0[1][0]))) ? ((last_1_unsigned_short_int_Array_0_0_ < (~ last_1_signed_short_int_Array_0_0__0_)) ? (unsigned_char_Array_0[1][0] == ((unsigned char) unsigned_char_Array_0[0][0])) : (unsigned_char_Array_0[1][0] == ((unsigned char) unsigned_char_Array_0[0][0]))) : (unsigned_char_Array_0[1][0] == ((unsigned char) unsigned_char_Array_0[0][0]))) : 1)) && ((unsigned_char_Array_0[0][0] <= ((unsigned_char_Array_0[1][0] / unsigned_char_Array_0[0][1]) * (2 % unsigned_char_Array_0[1][1]))) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) (unsigned_char_Array_0[1][0] + (((((unsigned_short_int_Array_0[1]) > (unsigned_short_int_Array_0[2])) ? (unsigned_short_int_Array_0[1]) : (unsigned_short_int_Array_0[2]))) - unsigned_char_Array_0[1][1])))) : 1)) && (signed_long_int_Array_0[0] == ((signed long int) -4))) && (signed_short_int_Array_0[1][1] == ((signed short int) unsigned_char_Array_0[1][0]))) && (signed_short_int_Array_0[0][0] == ((signed short int) unsigned_char_Array_0[0][0]))
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
