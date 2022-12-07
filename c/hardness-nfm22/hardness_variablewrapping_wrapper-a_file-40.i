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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch40Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 0, 0
};
double double_Array_0[2] = {
 8.4, 49.75
};
float float_Array_0[1] = {
 7.5
};
signed char signed_char_Array_0[3] = {
 -2, 25, -5
};
signed long int signed_long_int_Array_0[3] = {
 -10, -2, -4
};
signed short int signed_short_int_Array_0[2] = {
 1, -256
};
unsigned char unsigned_char_Array_0[3] = {
 1, 64, 128
};
double last_1_double_Array_0_0_ = 8.4;
void initially(void) {
}
void step(void) {
 if (BOOL_unsigned_char_Array_0[0]) {
  signed_char_Array_0[0] = ((((signed_char_Array_0[1]) > ((-2 + signed_char_Array_0[2]))) ? (signed_char_Array_0[1]) : ((-2 + signed_char_Array_0[2]))));
 }
 float_Array_0[0] = double_Array_0[1];
 signed_short_int_Array_0[0] = signed_char_Array_0[0];
 signed_short_int_Array_0[1] = signed_char_Array_0[2];
 if (BOOL_unsigned_char_Array_0[1]) {
  if (BOOL_unsigned_char_Array_0[0] && (float_Array_0[0] <= (- 63.9f))) {
   if (float_Array_0[0] >= float_Array_0[0]) {
    if (BOOL_unsigned_char_Array_0[0]) {
     signed_long_int_Array_0[2] = signed_short_int_Array_0[1];
    }
   }
  }
 }
 if (((signed_char_Array_0[0] / signed_long_int_Array_0[1]) / signed_long_int_Array_0[0]) >= (signed_short_int_Array_0[1] | signed_char_Array_0[0])) {
  unsigned_char_Array_0[1] = (unsigned_char_Array_0[2] - unsigned_char_Array_0[0]);
 } else {
  unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
 }
 if (float_Array_0[0] != ((((last_1_double_Array_0_0_) < (float_Array_0[0])) ? (last_1_double_Array_0_0_) : (float_Array_0[0])))) {
  double_Array_0[0] = (double_Array_0[1] + (127.4 - 8.25));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -461168.6018427382800e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427382800e+12F && double_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -63);
 assume_abort_if_not(signed_char_Array_0[2] <= 63);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 assume_abort_if_not(signed_long_int_Array_0[0] != 0);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 assume_abort_if_not(signed_long_int_Array_0[1] != 0);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 254);
}
void updateLastVariables() {
 last_1_double_Array_0_0_ = double_Array_0[0];
}
int property() {
 return ((((((BOOL_unsigned_char_Array_0[1] ? ((BOOL_unsigned_char_Array_0[0] && (float_Array_0[0] <= (- 63.9f))) ? ((float_Array_0[0] >= float_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] ? (signed_long_int_Array_0[2] == ((signed long int) signed_short_int_Array_0[1])) : 1) : 1) : 1) : 1) && ((((signed_char_Array_0[0] / signed_long_int_Array_0[1]) / signed_long_int_Array_0[0]) >= (signed_short_int_Array_0[1] | signed_char_Array_0[0])) ? (unsigned_char_Array_0[1] == ((unsigned char) (unsigned_char_Array_0[2] - unsigned_char_Array_0[0]))) : (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])))) && ((float_Array_0[0] != ((((last_1_double_Array_0_0_) < (float_Array_0[0])) ? (last_1_double_Array_0_0_) : (float_Array_0[0])))) ? (double_Array_0[0] == ((double) (double_Array_0[1] + (127.4 - 8.25)))) : 1)) && (BOOL_unsigned_char_Array_0[0] ? (signed_char_Array_0[0] == ((signed char) ((((signed_char_Array_0[1]) > ((-2 + signed_char_Array_0[2]))) ? (signed_char_Array_0[1]) : ((-2 + signed_char_Array_0[2])))))) : 1)) && (float_Array_0[0] == ((float) double_Array_0[1]))) && (signed_short_int_Array_0[0] == ((signed short int) signed_char_Array_0[0]))) && (signed_short_int_Array_0[1] == ((signed short int) signed_char_Array_0[2]))
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
