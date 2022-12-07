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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch96Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[5] = {
 0, 0, 0, 1, 0
};
double double_Array_0[3] = {
 2.75, 4.575, 128.5
};
float float_Array_0[1] = {
 99999.25
};
signed char signed_char_Array_0[2] = {
 1, 50
};
signed long int signed_long_int_Array_0[1] = {
 -1000000000
};
unsigned short int unsigned_short_int_Array_0[3] = {
 1000, 8, 8
};
unsigned char last_1_BOOL_unsigned_char_Array_0_3_ = 1;
void initially(void) {
}
void step(void) {
 if (! last_1_BOOL_unsigned_char_Array_0_3_) {
  unsigned_short_int_Array_0[2] = ((((unsigned_short_int_Array_0[1]) < (unsigned_short_int_Array_0[0])) ? (unsigned_short_int_Array_0[1]) : (unsigned_short_int_Array_0[0])));
 } else {
  unsigned_short_int_Array_0[2] = unsigned_short_int_Array_0[0];
 }
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[2];
 if (BOOL_unsigned_char_Array_0[4]) {
  if (stepLocal_0 && ((unsigned_short_int_Array_0[1] >= 16) || last_1_BOOL_unsigned_char_Array_0_3_)) {
   if (BOOL_unsigned_char_Array_0[2]) {
    BOOL_unsigned_char_Array_0[3] = ((unsigned_short_int_Array_0[2] < unsigned_short_int_Array_0[2]) && BOOL_unsigned_char_Array_0[0]);
   } else {
    BOOL_unsigned_char_Array_0[3] = BOOL_unsigned_char_Array_0[1];
   }
  }
 }
 signed_long_int_Array_0[0] = unsigned_short_int_Array_0[2];
 float_Array_0[0] = double_Array_0[0];
 signed_char_Array_0[0] = signed_char_Array_0[1];
 if (((((signed_long_int_Array_0[0]) < 0 ) ? -(signed_long_int_Array_0[0]) : (signed_long_int_Array_0[0]))) > signed_long_int_Array_0[0]) {
  if ((signed_long_int_Array_0[0] / -5) >= ((unsigned_short_int_Array_0[0] + signed_long_int_Array_0[0]) - ((((unsigned_short_int_Array_0[2]) < (unsigned_short_int_Array_0[1])) ? (unsigned_short_int_Array_0[2]) : (unsigned_short_int_Array_0[1]))))) {
   double_Array_0[1] = (double_Array_0[0] + double_Array_0[2]);
  } else {
   double_Array_0[1] = double_Array_0[2];
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 BOOL_unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[4] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -461168.6018427382800e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 4611686.018427382800e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= -461168.6018427382800e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427382800e+12F && double_Array_0[2] >= 1.0e-20F ));
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}
void updateLastVariables() {
 last_1_BOOL_unsigned_char_Array_0_3_ = BOOL_unsigned_char_Array_0[3];
}
int property() {
 return ((((((! last_1_BOOL_unsigned_char_Array_0_3_) ? (unsigned_short_int_Array_0[2] == ((unsigned short int) ((((unsigned_short_int_Array_0[1]) < (unsigned_short_int_Array_0[0])) ? (unsigned_short_int_Array_0[1]) : (unsigned_short_int_Array_0[0]))))) : (unsigned_short_int_Array_0[2] == ((unsigned short int) unsigned_short_int_Array_0[0]))) && (BOOL_unsigned_char_Array_0[4] ? ((BOOL_unsigned_char_Array_0[2] && ((unsigned_short_int_Array_0[1] >= 16) || last_1_BOOL_unsigned_char_Array_0_3_)) ? (BOOL_unsigned_char_Array_0[2] ? (BOOL_unsigned_char_Array_0[3] == ((unsigned char) ((unsigned_short_int_Array_0[2] < unsigned_short_int_Array_0[2]) && BOOL_unsigned_char_Array_0[0]))) : (BOOL_unsigned_char_Array_0[3] == ((unsigned char) BOOL_unsigned_char_Array_0[1]))) : 1) : 1)) && ((((((signed_long_int_Array_0[0]) < 0 ) ? -(signed_long_int_Array_0[0]) : (signed_long_int_Array_0[0]))) > signed_long_int_Array_0[0]) ? (((signed_long_int_Array_0[0] / -5) >= ((unsigned_short_int_Array_0[0] + signed_long_int_Array_0[0]) - ((((unsigned_short_int_Array_0[2]) < (unsigned_short_int_Array_0[1])) ? (unsigned_short_int_Array_0[2]) : (unsigned_short_int_Array_0[1]))))) ? (double_Array_0[1] == ((double) (double_Array_0[0] + double_Array_0[2]))) : (double_Array_0[1] == ((double) double_Array_0[2]))) : 1)) && (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[2]))) && (float_Array_0[0] == ((float) double_Array_0[0]))) && (signed_char_Array_0[0] == ((signed char) signed_char_Array_0[1]))
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
