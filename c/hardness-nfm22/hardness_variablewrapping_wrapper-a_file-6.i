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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch6Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 0, 0, 0
};
double double_Array_0[2][2] = {
 {0.25, 64.2}, {0.0, 0.0}
};
signed long int signed_long_int_Array_0[3] = {
 2, 4, -32
};
unsigned long int unsigned_long_int_Array_0[3] = {
 50, 2655070710, 0
};
unsigned short int unsigned_short_int_Array_0[3] = {
 36833, 10, 32
};
unsigned char last_1_BOOL_unsigned_char_Array_0_2_ = 0;
signed long int last_1_signed_long_int_Array_0_2_ = -32;
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 50;
void initially(void) {
}
void step(void) {
 if ((unsigned_short_int_Array_0[2] - last_1_unsigned_long_int_Array_0_0_) == last_1_signed_long_int_Array_0_2_) {
  if (((double_Array_0[1][0] - double_Array_0[0][1]) - double_Array_0[1][1]) > double_Array_0[0][0]) {
   unsigned_short_int_Array_0[1] = (unsigned_short_int_Array_0[0] - signed_long_int_Array_0[0]);
  }
 } else {
  unsigned_short_int_Array_0[1] = unsigned_short_int_Array_0[0];
 }
 if (unsigned_short_int_Array_0[0] > unsigned_short_int_Array_0[1]) {
  signed_long_int_Array_0[2] = (((((unsigned_short_int_Array_0[1]) < (unsigned_short_int_Array_0[0])) ? (unsigned_short_int_Array_0[1]) : (unsigned_short_int_Array_0[0]))) - unsigned_short_int_Array_0[1]);
 }
 if (last_1_BOOL_unsigned_char_Array_0_2_) {
  BOOL_unsigned_char_Array_0[2] = (BOOL_unsigned_char_Array_0[0] && BOOL_unsigned_char_Array_0[1]);
 }
 unsigned_long_int_Array_0[0] = ((((((((last_1_unsigned_long_int_Array_0_0_) < 0 ) ? -(last_1_unsigned_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_0_)))) < ((unsigned_long_int_Array_0[1] - signed_long_int_Array_0[1]))) ? (((((last_1_unsigned_long_int_Array_0_0_) < 0 ) ? -(last_1_unsigned_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_0_)))) : ((unsigned_long_int_Array_0[1] - signed_long_int_Array_0[1]))));
 unsigned long int stepLocal_1 = unsigned_long_int_Array_0[0];
 unsigned long int stepLocal_0 = unsigned_long_int_Array_0[0];
 if ((((((signed_long_int_Array_0[2]) > (signed_long_int_Array_0[2])) ? (signed_long_int_Array_0[2]) : (signed_long_int_Array_0[2]))) / unsigned_short_int_Array_0[2]) > stepLocal_1) {
  if (stepLocal_0 == signed_long_int_Array_0[2]) {
   unsigned_long_int_Array_0[2] = 1000000000u;
  } else {
   unsigned_long_int_Array_0[2] = 128u;
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= -922337.2036854776000e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854776000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= 4611686.018427387900e+12F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854776000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 4611686.018427387900e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= 0.0F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 16);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 17);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
 unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[2] <= 65535);
 assume_abort_if_not(unsigned_short_int_Array_0[2] != 0);
}
void updateLastVariables() {
 last_1_BOOL_unsigned_char_Array_0_2_ = BOOL_unsigned_char_Array_0[2];
 last_1_signed_long_int_Array_0_2_ = signed_long_int_Array_0[2];
 last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}
int property() {
 return ((((((((((signed_long_int_Array_0[2]) > (signed_long_int_Array_0[2])) ? (signed_long_int_Array_0[2]) : (signed_long_int_Array_0[2]))) / unsigned_short_int_Array_0[2]) > unsigned_long_int_Array_0[0]) ? ((unsigned_long_int_Array_0[0] == signed_long_int_Array_0[2]) ? (unsigned_long_int_Array_0[2] == ((unsigned long int) 1000000000u)) : (unsigned_long_int_Array_0[2] == ((unsigned long int) 128u))) : 1) && (((unsigned_short_int_Array_0[2] - last_1_unsigned_long_int_Array_0_0_) == last_1_signed_long_int_Array_0_2_) ? ((((double_Array_0[1][0] - double_Array_0[0][1]) - double_Array_0[1][1]) > double_Array_0[0][0]) ? (unsigned_short_int_Array_0[1] == ((unsigned short int) (unsigned_short_int_Array_0[0] - signed_long_int_Array_0[0]))) : 1) : (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_short_int_Array_0[0])))) && (last_1_BOOL_unsigned_char_Array_0_2_ ? (BOOL_unsigned_char_Array_0[2] == ((unsigned char) (BOOL_unsigned_char_Array_0[0] && BOOL_unsigned_char_Array_0[1]))) : 1)) && ((unsigned_short_int_Array_0[0] > unsigned_short_int_Array_0[1]) ? (signed_long_int_Array_0[2] == ((signed long int) (((((unsigned_short_int_Array_0[1]) < (unsigned_short_int_Array_0[0])) ? (unsigned_short_int_Array_0[1]) : (unsigned_short_int_Array_0[0]))) - unsigned_short_int_Array_0[1]))) : 1)) && (unsigned_long_int_Array_0[0] == ((unsigned long int) ((((((((last_1_unsigned_long_int_Array_0_0_) < 0 ) ? -(last_1_unsigned_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_0_)))) < ((unsigned_long_int_Array_0[1] - signed_long_int_Array_0[1]))) ? (((((last_1_unsigned_long_int_Array_0_0_) < 0 ) ? -(last_1_unsigned_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_0_)))) : ((unsigned_long_int_Array_0[1] - signed_long_int_Array_0[1]))))))
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
