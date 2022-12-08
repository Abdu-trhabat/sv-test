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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch90Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[5] = {
 0, 1, 0, 1, 1
};
signed long int signed_long_int_Array_0[1] = {
 -5
};
signed short int signed_short_int_Array_0[2][3] = {
 {-25, 10, 0}, {10, 1, 25}
};
unsigned long int unsigned_long_int_Array_0[3] = {
 2, 2762957886, 2
};
unsigned char last_1_BOOL_unsigned_char_Array_0_2_ = 0;
signed long int last_1_signed_long_int_Array_0_0_ = -5;
signed short int last_1_signed_short_int_Array_0_0__0_ = -25;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = unsigned_long_int_Array_0[1] - unsigned_long_int_Array_0[0];
 signed long int stepLocal_0 = (((signed_short_int_Array_0[0][2]) < (signed_short_int_Array_0[0][1])) ? (signed_short_int_Array_0[0][2]) : (signed_short_int_Array_0[0][1]));
 if (last_1_signed_short_int_Array_0_0__0_ != stepLocal_0) {
  if (stepLocal_1 >= last_1_signed_long_int_Array_0_0_) {
   if (last_1_BOOL_unsigned_char_Array_0_2_) {
    unsigned_long_int_Array_0[2] = unsigned_long_int_Array_0[0];
   } else {
    unsigned_long_int_Array_0[2] = unsigned_long_int_Array_0[0];
   }
  } else {
   unsigned_long_int_Array_0[2] = unsigned_long_int_Array_0[0];
  }
 } else {
  unsigned_long_int_Array_0[2] = unsigned_long_int_Array_0[0];
 }
 if (unsigned_long_int_Array_0[2] <= unsigned_long_int_Array_0[1]) {
  if (signed_short_int_Array_0[1][0] > unsigned_long_int_Array_0[2]) {
   signed_long_int_Array_0[0] = signed_short_int_Array_0[1][0];
  }
 }
 if (BOOL_unsigned_char_Array_0[4]) {
  BOOL_unsigned_char_Array_0[2] = (BOOL_unsigned_char_Array_0[3] || (! BOOL_unsigned_char_Array_0[0]));
 } else {
  BOOL_unsigned_char_Array_0[2] = ((! BOOL_unsigned_char_Array_0[1]) || BOOL_unsigned_char_Array_0[0]);
 }
 signed_short_int_Array_0[0][0] = ((((signed_short_int_Array_0[0][2]) > ((signed_short_int_Array_0[1][0] - 256))) ? (signed_short_int_Array_0[0][2]) : ((signed_short_int_Array_0[1][0] - 256))));
 if (BOOL_unsigned_char_Array_0[2]) {
  signed_short_int_Array_0[1][2] = (((((signed_short_int_Array_0[0][2] + signed_short_int_Array_0[1][1])) < (signed_short_int_Array_0[0][1])) ? ((signed_short_int_Array_0[0][2] + signed_short_int_Array_0[1][1])) : (signed_short_int_Array_0[0][1])));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
 BOOL_unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[4] <= 1);
 signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][0] >= -1);
 assume_abort_if_not(signed_short_int_Array_0[1][0] <= 32766);
 signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][1] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
 signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][1] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[1][1] <= 16383);
 signed_short_int_Array_0[0][2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][2] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[0][2] <= 16383);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 2147483647);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
}
void updateLastVariables() {
 last_1_BOOL_unsigned_char_Array_0_2_ = BOOL_unsigned_char_Array_0[2];
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
 last_1_signed_short_int_Array_0_0__0_ = signed_short_int_Array_0[0][0];
}
int property() {
 return ((((BOOL_unsigned_char_Array_0[2] ? (signed_short_int_Array_0[1][2] == ((signed short int) (((((signed_short_int_Array_0[0][2] + signed_short_int_Array_0[1][1])) < (signed_short_int_Array_0[0][1])) ? ((signed_short_int_Array_0[0][2] + signed_short_int_Array_0[1][1])) : (signed_short_int_Array_0[0][1]))))) : 1) && ((last_1_signed_short_int_Array_0_0__0_ != ((((signed_short_int_Array_0[0][2]) < (signed_short_int_Array_0[0][1])) ? (signed_short_int_Array_0[0][2]) : (signed_short_int_Array_0[0][1])))) ? (((unsigned_long_int_Array_0[1] - unsigned_long_int_Array_0[0]) >= last_1_signed_long_int_Array_0_0_) ? (last_1_BOOL_unsigned_char_Array_0_2_ ? (unsigned_long_int_Array_0[2] == ((unsigned long int) unsigned_long_int_Array_0[0])) : (unsigned_long_int_Array_0[2] == ((unsigned long int) unsigned_long_int_Array_0[0]))) : (unsigned_long_int_Array_0[2] == ((unsigned long int) unsigned_long_int_Array_0[0]))) : (unsigned_long_int_Array_0[2] == ((unsigned long int) unsigned_long_int_Array_0[0])))) && (BOOL_unsigned_char_Array_0[4] ? (BOOL_unsigned_char_Array_0[2] == ((unsigned char) (BOOL_unsigned_char_Array_0[3] || (! BOOL_unsigned_char_Array_0[0])))) : (BOOL_unsigned_char_Array_0[2] == ((unsigned char) ((! BOOL_unsigned_char_Array_0[1]) || BOOL_unsigned_char_Array_0[0]))))) && (signed_short_int_Array_0[0][0] == ((signed short int) ((((signed_short_int_Array_0[0][2]) > ((signed_short_int_Array_0[1][0] - 256))) ? (signed_short_int_Array_0[0][2]) : ((signed_short_int_Array_0[1][0] - 256))))))) && ((unsigned_long_int_Array_0[2] <= unsigned_long_int_Array_0[1]) ? ((signed_short_int_Array_0[1][0] > unsigned_long_int_Array_0[2]) ? (signed_long_int_Array_0[0] == ((signed long int) signed_short_int_Array_0[1][0])) : 1) : 1)
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
