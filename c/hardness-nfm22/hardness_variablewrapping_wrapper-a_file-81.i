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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch81Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 1
};
double double_Array_0[5] = {
 999999999999.3, 0.0, 2.5, 4.5, 9999.5
};
signed char signed_char_Array_0[3] = {
 16, -128, 16
};
signed long int signed_long_int_Array_0[1] = {
 -8
};
unsigned short int unsigned_short_int_Array_0[2][2] = {
 {5, 128}, {32647, 16}
};
signed long int last_1_signed_long_int_Array_0_0_ = -8;
unsigned short int last_1_unsigned_short_int_Array_0_0__0_ = 5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (((-25) < (last_1_signed_long_int_Array_0_0_)) ? (-25) : (last_1_signed_long_int_Array_0_0_));
 if (stepLocal_0 != (last_1_signed_long_int_Array_0_0_ ^ last_1_unsigned_short_int_Array_0_0__0_)) {
  if (BOOL_unsigned_char_Array_0[1]) {
   signed_char_Array_0[1] = (signed_char_Array_0[2] + signed_char_Array_0[0]);
  }
 } else {
  signed_char_Array_0[1] = ((((signed_char_Array_0[0]) < (signed_char_Array_0[2])) ? (signed_char_Array_0[0]) : (signed_char_Array_0[2])));
 }
 unsigned char stepLocal_1 = signed_char_Array_0[2] >= signed_char_Array_0[1];
 if (stepLocal_1 && BOOL_unsigned_char_Array_0[0]) {
  unsigned_short_int_Array_0[0][0] = ((((unsigned_short_int_Array_0[1][1]) < (100)) ? (unsigned_short_int_Array_0[1][1]) : (100)));
 } else {
  unsigned_short_int_Array_0[0][0] = ((unsigned_short_int_Array_0[1][0] - 5) + unsigned_short_int_Array_0[0][1]);
 }
 signed char stepLocal_2 = signed_char_Array_0[1];
 if (stepLocal_2 > unsigned_short_int_Array_0[1][0]) {
  if (double_Array_0[3] < (double_Array_0[1] - double_Array_0[0])) {
   signed_long_int_Array_0[0] = ((((unsigned_short_int_Array_0[1][1]) < 0 ) ? -(unsigned_short_int_Array_0[1][1]) : (unsigned_short_int_Array_0[1][1])));
  } else {
   signed_long_int_Array_0[0] = unsigned_short_int_Array_0[0][0];
  }
 } else {
  signed_long_int_Array_0[0] = unsigned_short_int_Array_0[1][1];
 }
 if (BOOL_unsigned_char_Array_0[1]) {
  double_Array_0[4] = ((((double_Array_0[3]) > ((double_Array_0[2] - (double_Array_0[1] - double_Array_0[0])))) ? (double_Array_0[3]) : ((double_Array_0[2] - (double_Array_0[1] - double_Array_0[0])))));
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
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 4611686.018427382800e+12F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854765600e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= -922337.2036854765600e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854765600e+12F && double_Array_0[3] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -63);
 assume_abort_if_not(signed_char_Array_0[0] <= 63);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -63);
 assume_abort_if_not(signed_char_Array_0[2] <= 63);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 32767);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
 unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 65534);
}
void updateLastVariables() {
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
 last_1_unsigned_short_int_Array_0_0__0_ = unsigned_short_int_Array_0[0][0];
}
int property() {
 return (((BOOL_unsigned_char_Array_0[1] ? (double_Array_0[4] == ((double) ((((double_Array_0[3]) > ((double_Array_0[2] - (double_Array_0[1] - double_Array_0[0])))) ? (double_Array_0[3]) : ((double_Array_0[2] - (double_Array_0[1] - double_Array_0[0]))))))) : 1) && ((((((-25) < (last_1_signed_long_int_Array_0_0_)) ? (-25) : (last_1_signed_long_int_Array_0_0_))) != (last_1_signed_long_int_Array_0_0_ ^ last_1_unsigned_short_int_Array_0_0__0_)) ? (BOOL_unsigned_char_Array_0[1] ? (signed_char_Array_0[1] == ((signed char) (signed_char_Array_0[2] + signed_char_Array_0[0]))) : 1) : (signed_char_Array_0[1] == ((signed char) ((((signed_char_Array_0[0]) < (signed_char_Array_0[2])) ? (signed_char_Array_0[0]) : (signed_char_Array_0[2]))))))) && (((signed_char_Array_0[2] >= signed_char_Array_0[1]) && BOOL_unsigned_char_Array_0[0]) ? (unsigned_short_int_Array_0[0][0] == ((unsigned short int) ((((unsigned_short_int_Array_0[1][1]) < (100)) ? (unsigned_short_int_Array_0[1][1]) : (100))))) : (unsigned_short_int_Array_0[0][0] == ((unsigned short int) ((unsigned_short_int_Array_0[1][0] - 5) + unsigned_short_int_Array_0[0][1]))))) && ((signed_char_Array_0[1] > unsigned_short_int_Array_0[1][0]) ? ((double_Array_0[3] < (double_Array_0[1] - double_Array_0[0])) ? (signed_long_int_Array_0[0] == ((signed long int) ((((unsigned_short_int_Array_0[1][1]) < 0 ) ? -(unsigned_short_int_Array_0[1][1]) : (unsigned_short_int_Array_0[1][1]))))) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[0][0]))) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[1][1])))
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
