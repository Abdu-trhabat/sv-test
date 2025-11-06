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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch191Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 0, 0
};
double double_Array_0[2] = {
 5.8, 64.375
};
unsigned long int unsigned_long_int_Array_0[2][2] = {
 {32, 4}, {256, 64}
};
unsigned short int unsigned_short_int_Array_0[1] = {
 32
};
unsigned long int last_1_unsigned_long_int_Array_0_1__0_ = 256;
unsigned long int last_1_unsigned_long_int_Array_0_1__1_ = 64;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = last_1_unsigned_long_int_Array_0_1__0_ / unsigned_short_int_Array_0[0];
 if (stepLocal_0 == last_1_unsigned_long_int_Array_0_1__1_) {
  unsigned_long_int_Array_0[1][1] = ((((25u) > (last_1_unsigned_long_int_Array_0_1__0_)) ? (25u) : (last_1_unsigned_long_int_Array_0_1__0_)));
 } else {
  unsigned_long_int_Array_0[1][1] = last_1_unsigned_long_int_Array_0_1__0_;
 }
 unsigned long int stepLocal_2 = unsigned_long_int_Array_0[1][1] ^ (256u / unsigned_short_int_Array_0[0]);
 if (stepLocal_2 < unsigned_long_int_Array_0[1][1]) {
  unsigned_long_int_Array_0[1][0] = ((unsigned_long_int_Array_0[1][1] + unsigned_short_int_Array_0[0]) + ((((unsigned_long_int_Array_0[0][0]) < (unsigned_long_int_Array_0[0][1])) ? (unsigned_long_int_Array_0[0][0]) : (unsigned_long_int_Array_0[0][1]))));
 } else {
  unsigned_long_int_Array_0[1][0] = ((((unsigned_long_int_Array_0[1][1]) < ((unsigned_long_int_Array_0[0][1] + unsigned_short_int_Array_0[0]))) ? (unsigned_long_int_Array_0[1][1]) : ((unsigned_long_int_Array_0[0][1] + unsigned_short_int_Array_0[0]))));
 }
 unsigned long int stepLocal_1 = - 64u;
 if (stepLocal_1 >= unsigned_short_int_Array_0[0]) {
  BOOL_unsigned_char_Array_0[1] = (! BOOL_unsigned_char_Array_0[0]);
 }
 unsigned long int stepLocal_4 = (((unsigned_long_int_Array_0[1][1]) < 0 ) ? -(unsigned_long_int_Array_0[1][1]) : (unsigned_long_int_Array_0[1][1]));
 unsigned long int stepLocal_3 = (((unsigned_long_int_Array_0[1][0]) > ((- 2))) ? (unsigned_long_int_Array_0[1][0]) : ((- 2)));
 if (stepLocal_3 < (unsigned_long_int_Array_0[0][0] - unsigned_short_int_Array_0[0])) {
  if (unsigned_long_int_Array_0[0][0] <= stepLocal_4) {
   double_Array_0[1] = double_Array_0[0];
  }
 } else {
  double_Array_0[1] = double_Array_0[0];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854766000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 2147483647);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 2147483647);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
 assume_abort_if_not(unsigned_short_int_Array_0[0] != 0);
}
void updateLastVariables(void) {
 last_1_unsigned_long_int_Array_0_1__0_ = unsigned_long_int_Array_0[1][0];
 last_1_unsigned_long_int_Array_0_1__1_ = unsigned_long_int_Array_0[1][1];
}
int property(void) {
 return (((((last_1_unsigned_long_int_Array_0_1__0_ / unsigned_short_int_Array_0[0]) == last_1_unsigned_long_int_Array_0_1__1_) ? (unsigned_long_int_Array_0[1][1] == ((unsigned long int) ((((25u) > (last_1_unsigned_long_int_Array_0_1__0_)) ? (25u) : (last_1_unsigned_long_int_Array_0_1__0_))))) : (unsigned_long_int_Array_0[1][1] == ((unsigned long int) last_1_unsigned_long_int_Array_0_1__0_))) && (((- 64u) >= unsigned_short_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) (! BOOL_unsigned_char_Array_0[0]))) : 1)) && (((unsigned_long_int_Array_0[1][1] ^ (256u / unsigned_short_int_Array_0[0])) < unsigned_long_int_Array_0[1][1]) ? (unsigned_long_int_Array_0[1][0] == ((unsigned long int) ((unsigned_long_int_Array_0[1][1] + unsigned_short_int_Array_0[0]) + ((((unsigned_long_int_Array_0[0][0]) < (unsigned_long_int_Array_0[0][1])) ? (unsigned_long_int_Array_0[0][0]) : (unsigned_long_int_Array_0[0][1])))))) : (unsigned_long_int_Array_0[1][0] == ((unsigned long int) ((((unsigned_long_int_Array_0[1][1]) < ((unsigned_long_int_Array_0[0][1] + unsigned_short_int_Array_0[0]))) ? (unsigned_long_int_Array_0[1][1]) : ((unsigned_long_int_Array_0[0][1] + unsigned_short_int_Array_0[0])))))))) && ((((((unsigned_long_int_Array_0[1][0]) > ((- 2))) ? (unsigned_long_int_Array_0[1][0]) : ((- 2)))) < (unsigned_long_int_Array_0[0][0] - unsigned_short_int_Array_0[0])) ? ((unsigned_long_int_Array_0[0][0] <= ((((unsigned_long_int_Array_0[1][1]) < 0 ) ? -(unsigned_long_int_Array_0[1][1]) : (unsigned_long_int_Array_0[1][1])))) ? (double_Array_0[1] == ((double) double_Array_0[0])) : 1) : (double_Array_0[1] == ((double) double_Array_0[0])))
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
