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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch26Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
float float_Array_0[2][2] = {
 {8.75, 199.5}, {1.125, 100000000000000.3}
};
signed long int signed_long_int_Array_0[1] = {
 -32
};
signed short int signed_short_int_Array_0[2] = {
 1, -1
};
unsigned char unsigned_char_Array_0[2] = {
 2, 64
};
unsigned long int unsigned_long_int_Array_0[1] = {
 50
};
unsigned char last_1_unsigned_char_Array_0_1_ = 64;
void initially(void) {
}
void step(void) {
 float_Array_0[1][0] = ((0.85f - float_Array_0[0][1]) + float_Array_0[1][1]);
 if ((- last_1_unsigned_char_Array_0_1_) >= (signed_short_int_Array_0[0] / ((((-4) < 0 ) ? -(-4) : (-4))))) {
  unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
 }
 float_Array_0[0][0] = float_Array_0[0][1];
 if (float_Array_0[0][0] > float_Array_0[0][0]) {
  signed_short_int_Array_0[1] = ((((unsigned_char_Array_0[1]) > (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1])));
 } else {
  signed_short_int_Array_0[1] = (((((unsigned_char_Array_0[1] - ((((unsigned_char_Array_0[1]) > (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1]))))) < ((unsigned_char_Array_0[1] + ((((unsigned_char_Array_0[1]) < (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1])))))) ? ((unsigned_char_Array_0[1] - ((((unsigned_char_Array_0[1]) > (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1]))))) : ((unsigned_char_Array_0[1] + ((((unsigned_char_Array_0[1]) < (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1])))))));
 }
 signed long int stepLocal_0 = unsigned_char_Array_0[1] + (unsigned_char_Array_0[1] + signed_short_int_Array_0[1]);
 if (stepLocal_0 != (unsigned_char_Array_0[1] * (signed_short_int_Array_0[1] / signed_long_int_Array_0[0]))) {
  unsigned_long_int_Array_0[0] = (((((10u) < ((signed_short_int_Array_0[1] + unsigned_char_Array_0[1]))) ? (10u) : ((signed_short_int_Array_0[1] + unsigned_char_Array_0[1])))) + unsigned_char_Array_0[1]);
 }
}
void updateVariables() {
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= 0.0F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 4611686.018427382800e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= -461168.6018427382800e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 4611686.018427382800e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 assume_abort_if_not(signed_long_int_Array_0[0] != 0);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}
void updateLastVariables() {
 last_1_unsigned_char_Array_0_1_ = unsigned_char_Array_0[1];
}
int property() {
 return (((((float_Array_0[0][0] > float_Array_0[0][0]) ? (signed_short_int_Array_0[1] == ((signed short int) ((((unsigned_char_Array_0[1]) > (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1]))))) : (signed_short_int_Array_0[1] == ((signed short int) (((((unsigned_char_Array_0[1] - ((((unsigned_char_Array_0[1]) > (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1]))))) < ((unsigned_char_Array_0[1] + ((((unsigned_char_Array_0[1]) < (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1])))))) ? ((unsigned_char_Array_0[1] - ((((unsigned_char_Array_0[1]) > (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1]))))) : ((unsigned_char_Array_0[1] + ((((unsigned_char_Array_0[1]) < (unsigned_char_Array_0[1])) ? (unsigned_char_Array_0[1]) : (unsigned_char_Array_0[1])))))))))) && (float_Array_0[1][0] == ((float) ((0.85f - float_Array_0[0][1]) + float_Array_0[1][1])))) && (((- last_1_unsigned_char_Array_0_1_) >= (signed_short_int_Array_0[0] / ((((-4) < 0 ) ? -(-4) : (-4))))) ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : 1)) && (((unsigned_char_Array_0[1] + (unsigned_char_Array_0[1] + signed_short_int_Array_0[1])) != (unsigned_char_Array_0[1] * (signed_short_int_Array_0[1] / signed_long_int_Array_0[0]))) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) (((((10u) < ((signed_short_int_Array_0[1] + unsigned_char_Array_0[1]))) ? (10u) : ((signed_short_int_Array_0[1] + unsigned_char_Array_0[1])))) + unsigned_char_Array_0[1]))) : 1)) && (float_Array_0[0][0] == ((float) float_Array_0[0][1]))
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
