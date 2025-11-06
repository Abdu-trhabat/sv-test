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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch171Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 1, 0, 1
};
float float_Array_0[5] = {
 32.4, 256.9, -0.75, -0.25, 9.5
};
signed long int signed_long_int_Array_0[1] = {
 -50
};
signed short int signed_short_int_Array_0[1] = {
 -128
};
unsigned char unsigned_char_Array_0[2][3] = {
 {2, 8, 32}, {8, 0, 16}
};
void initially(void) {
}
void step(void) {
 if ((float_Array_0[4] - 15.25f) <= (float_Array_0[3] * (- float_Array_0[2]))) {
  unsigned_char_Array_0[1][2] = ((unsigned_char_Array_0[0][2] + ((((unsigned_char_Array_0[1][1]) < (unsigned_char_Array_0[0][1])) ? (unsigned_char_Array_0[1][1]) : (unsigned_char_Array_0[0][1])))) + (unsigned_char_Array_0[1][0] + unsigned_char_Array_0[0][0]));
 }
 if ((((((float_Array_0[4]) < (15.8f)) ? (float_Array_0[4]) : (15.8f))) - (float_Array_0[1] + float_Array_0[0])) != ((((((((-0.05f) > (float_Array_0[2])) ? (-0.05f) : (float_Array_0[2])))) < (float_Array_0[3])) ? (((((-0.05f) > (float_Array_0[2])) ? (-0.05f) : (float_Array_0[2])))) : (float_Array_0[3])))) {
  if (float_Array_0[1] < float_Array_0[0]) {
   signed_long_int_Array_0[0] = unsigned_char_Array_0[0][0];
  } else {
   signed_long_int_Array_0[0] = unsigned_char_Array_0[0][1];
  }
 }
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[2];
 if (BOOL_unsigned_char_Array_0[1] || stepLocal_0) {
  signed_short_int_Array_0[0] = ((((unsigned_char_Array_0[1][2]) < (((((((((unsigned_char_Array_0[1][0]) > (unsigned_char_Array_0[0][0])) ? (unsigned_char_Array_0[1][0]) : (unsigned_char_Array_0[0][0])))) < (unsigned_char_Array_0[0][2])) ? (((((unsigned_char_Array_0[1][0]) > (unsigned_char_Array_0[0][0])) ? (unsigned_char_Array_0[1][0]) : (unsigned_char_Array_0[0][0])))) : (unsigned_char_Array_0[0][2]))))) ? (unsigned_char_Array_0[1][2]) : (((((((((unsigned_char_Array_0[1][0]) > (unsigned_char_Array_0[0][0])) ? (unsigned_char_Array_0[1][0]) : (unsigned_char_Array_0[0][0])))) < (unsigned_char_Array_0[0][2])) ? (((((unsigned_char_Array_0[1][0]) > (unsigned_char_Array_0[0][0])) ? (unsigned_char_Array_0[1][0]) : (unsigned_char_Array_0[0][0])))) : (unsigned_char_Array_0[0][2]))))));
 } else {
  signed_short_int_Array_0[0] = (unsigned_char_Array_0[1][1] + unsigned_char_Array_0[0][1]);
 }
 BOOL_unsigned_char_Array_0[0] = 0;
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427388000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 4611686.018427388000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= -922337.2036854776000e+13F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854776000e+12F && float_Array_0[3] >= 1.0e-20F ));
 float_Array_0[4] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 9223372.036854776000e+12F && float_Array_0[4] >= 1.0e-20F ));
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 63);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 64);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 63);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 63);
 unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][2] <= 64);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((float_Array_0[4] - 15.25f) <= (float_Array_0[3] * (- float_Array_0[2]))) ? (unsigned_char_Array_0[1][2] == ((unsigned char) ((unsigned_char_Array_0[0][2] + ((((unsigned_char_Array_0[1][1]) < (unsigned_char_Array_0[0][1])) ? (unsigned_char_Array_0[1][1]) : (unsigned_char_Array_0[0][1])))) + (unsigned_char_Array_0[1][0] + unsigned_char_Array_0[0][0])))) : 1) && (((((((float_Array_0[4]) < (15.8f)) ? (float_Array_0[4]) : (15.8f))) - (float_Array_0[1] + float_Array_0[0])) != ((((((((-0.05f) > (float_Array_0[2])) ? (-0.05f) : (float_Array_0[2])))) < (float_Array_0[3])) ? (((((-0.05f) > (float_Array_0[2])) ? (-0.05f) : (float_Array_0[2])))) : (float_Array_0[3])))) ? ((float_Array_0[1] < float_Array_0[0]) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[0][0])) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[0][1]))) : 1)) && ((BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[2]) ? (signed_short_int_Array_0[0] == ((signed short int) ((((unsigned_char_Array_0[1][2]) < (((((((((unsigned_char_Array_0[1][0]) > (unsigned_char_Array_0[0][0])) ? (unsigned_char_Array_0[1][0]) : (unsigned_char_Array_0[0][0])))) < (unsigned_char_Array_0[0][2])) ? (((((unsigned_char_Array_0[1][0]) > (unsigned_char_Array_0[0][0])) ? (unsigned_char_Array_0[1][0]) : (unsigned_char_Array_0[0][0])))) : (unsigned_char_Array_0[0][2]))))) ? (unsigned_char_Array_0[1][2]) : (((((((((unsigned_char_Array_0[1][0]) > (unsigned_char_Array_0[0][0])) ? (unsigned_char_Array_0[1][0]) : (unsigned_char_Array_0[0][0])))) < (unsigned_char_Array_0[0][2])) ? (((((unsigned_char_Array_0[1][0]) > (unsigned_char_Array_0[0][0])) ? (unsigned_char_Array_0[1][0]) : (unsigned_char_Array_0[0][0])))) : (unsigned_char_Array_0[0][2])))))))) : (signed_short_int_Array_0[0] == ((signed short int) (unsigned_char_Array_0[1][1] + unsigned_char_Array_0[0][1]))))) && (BOOL_unsigned_char_Array_0[0] == ((unsigned char) 0))
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
