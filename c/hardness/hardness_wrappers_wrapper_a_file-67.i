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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch67Wrapper_A.c", 13, "reach_error"); }
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
 0
};
double double_Array_0[1] = {
 25.875
};
float float_Array_0[2] = {
 0.9, 15.125
};
signed char signed_char_Array_0[1] = {
 8
};
signed long int signed_long_int_Array_0[3] = {
 50, -4, -10
};
signed short int signed_short_int_Array_0[3] = {
 256, -64, 2
};
unsigned short int unsigned_short_int_Array_0[3] = {
 4, 50, 128
};
void initially(void) {
}
void step(void) {
 if (! (signed_long_int_Array_0[2] <= signed_long_int_Array_0[1])) {
  signed_short_int_Array_0[2] = (signed_short_int_Array_0[1] + signed_short_int_Array_0[0]);
 }
 float_Array_0[1] = float_Array_0[0];
 double_Array_0[0] = float_Array_0[0];
 unsigned_short_int_Array_0[1] = signed_char_Array_0[0];
 signed long int stepLocal_0 = signed_char_Array_0[0] >> unsigned_short_int_Array_0[0];
 if (stepLocal_0 > (1 * unsigned_short_int_Array_0[1])) {
  unsigned_short_int_Array_0[2] = (((((42286 - unsigned_short_int_Array_0[0])) > (0)) ? ((42286 - unsigned_short_int_Array_0[0])) : (0)));
 } else {
  unsigned_short_int_Array_0[2] = unsigned_short_int_Array_0[0];
 }
 signed long int stepLocal_2 = signed_short_int_Array_0[1] / unsigned_short_int_Array_0[0];
 unsigned short int stepLocal_1 = unsigned_short_int_Array_0[2];
 if (BOOL_unsigned_char_Array_0[0]) {
  signed_long_int_Array_0[0] = ((((unsigned_short_int_Array_0[0]) < (signed_short_int_Array_0[1])) ? (unsigned_short_int_Array_0[0]) : (signed_short_int_Array_0[1])));
 } else {
  if (signed_long_int_Array_0[2] > stepLocal_2) {
   if (signed_char_Array_0[0] > stepLocal_1) {
    signed_long_int_Array_0[0] = ((((unsigned_short_int_Array_0[0]) < (100)) ? (unsigned_short_int_Array_0[0]) : (100)));
   } else {
    signed_long_int_Array_0[0] = (unsigned_short_int_Array_0[2] - unsigned_short_int_Array_0[0]);
   }
  } else {
   signed_long_int_Array_0[0] = (unsigned_short_int_Array_0[2] + signed_char_Array_0[0]);
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854766000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854766000e+12F && float_Array_0[0] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 16383);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 1);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 6);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((! (signed_long_int_Array_0[2] <= signed_long_int_Array_0[1])) ? (signed_short_int_Array_0[2] == ((signed short int) (signed_short_int_Array_0[1] + signed_short_int_Array_0[0]))) : 1) && (((signed_char_Array_0[0] >> unsigned_short_int_Array_0[0]) > (1 * unsigned_short_int_Array_0[1])) ? (unsigned_short_int_Array_0[2] == ((unsigned short int) (((((42286 - unsigned_short_int_Array_0[0])) > (0)) ? ((42286 - unsigned_short_int_Array_0[0])) : (0))))) : (unsigned_short_int_Array_0[2] == ((unsigned short int) unsigned_short_int_Array_0[0])))) && (BOOL_unsigned_char_Array_0[0] ? (signed_long_int_Array_0[0] == ((signed long int) ((((unsigned_short_int_Array_0[0]) < (signed_short_int_Array_0[1])) ? (unsigned_short_int_Array_0[0]) : (signed_short_int_Array_0[1]))))) : ((signed_long_int_Array_0[2] > (signed_short_int_Array_0[1] / unsigned_short_int_Array_0[0])) ? ((signed_char_Array_0[0] > unsigned_short_int_Array_0[2]) ? (signed_long_int_Array_0[0] == ((signed long int) ((((unsigned_short_int_Array_0[0]) < (100)) ? (unsigned_short_int_Array_0[0]) : (100))))) : (signed_long_int_Array_0[0] == ((signed long int) (unsigned_short_int_Array_0[2] - unsigned_short_int_Array_0[0])))) : (signed_long_int_Array_0[0] == ((signed long int) (unsigned_short_int_Array_0[2] + signed_char_Array_0[0])))))) && (float_Array_0[1] == ((float) float_Array_0[0]))) && (double_Array_0[0] == ((double) float_Array_0[0]))) && (unsigned_short_int_Array_0[1] == ((unsigned short int) signed_char_Array_0[0]))
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
