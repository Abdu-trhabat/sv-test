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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106Wrapper_A.c", 13, "reach_error"); }
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
 0, 1
};
float float_Array_0[5] = {
 15.2, 100.875, 127.5, 63.5, 4.95
};
signed char signed_char_Array_0[2] = {
 32, 2
};
signed long int signed_long_int_Array_0[3] = {
 25, -4, -64
};
signed short int signed_short_int_Array_0[1] = {
 -2
};
void initially(void) {
}
void step(void) {
 signed_long_int_Array_0[2] = signed_long_int_Array_0[1];
 signed long int stepLocal_1 = signed_long_int_Array_0[2];
 signed long int stepLocal_0 = signed_long_int_Array_0[1];
 if (! BOOL_unsigned_char_Array_0[1]) {
  if (stepLocal_0 >= signed_long_int_Array_0[2]) {
   float_Array_0[4] = (float_Array_0[3] + float_Array_0[2]);
  } else {
   if (stepLocal_1 <= signed_long_int_Array_0[1]) {
    float_Array_0[4] = ((((((((float_Array_0[2]) < (float_Array_0[3])) ? (float_Array_0[2]) : (float_Array_0[3])))) < (float_Array_0[1])) ? (((((float_Array_0[2]) < (float_Array_0[3])) ? (float_Array_0[2]) : (float_Array_0[3])))) : (float_Array_0[1])));
   }
  }
 } else {
  float_Array_0[4] = 64.6f;
 }
 signed long int stepLocal_3 = ((((signed_char_Array_0[0]) > (signed_char_Array_0[1])) ? (signed_char_Array_0[0]) : (signed_char_Array_0[1]))) >> signed_long_int_Array_0[0];
 unsigned char stepLocal_2 = BOOL_unsigned_char_Array_0[1];
 if ((float_Array_0[3] == float_Array_0[1]) || stepLocal_2) {
  if (stepLocal_3 >= (signed_long_int_Array_0[1] + -32)) {
   float_Array_0[0] = float_Array_0[3];
  } else {
   float_Array_0[0] = float_Array_0[2];
  }
 } else {
  float_Array_0[0] = float_Array_0[3];
 }
 unsigned char stepLocal_4 = BOOL_unsigned_char_Array_0[0];
 if (BOOL_unsigned_char_Array_0[1]) {
  if ((8 > signed_char_Array_0[1]) || stepLocal_4) {
   if (BOOL_unsigned_char_Array_0[0]) {
    signed_short_int_Array_0[0] = signed_long_int_Array_0[0];
   } else {
    signed_short_int_Array_0[0] = signed_char_Array_0[0];
   }
  } else {
   signed_short_int_Array_0[0] = signed_long_int_Array_0[0];
  }
 } else {
  signed_short_int_Array_0[0] = signed_long_int_Array_0[0];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -461168.6018427383000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 4611686.018427383000e+12F && float_Array_0[2] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= -461168.6018427383000e+13F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 4611686.018427383000e+12F && float_Array_0[3] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= 0);
 assume_abort_if_not(signed_char_Array_0[1] <= 127);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 1);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 30);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483647);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((signed_long_int_Array_0[2] == ((signed long int) signed_long_int_Array_0[1])) && ((! BOOL_unsigned_char_Array_0[1]) ? ((signed_long_int_Array_0[1] >= signed_long_int_Array_0[2]) ? (float_Array_0[4] == ((float) (float_Array_0[3] + float_Array_0[2]))) : ((signed_long_int_Array_0[2] <= signed_long_int_Array_0[1]) ? (float_Array_0[4] == ((float) ((((((((float_Array_0[2]) < (float_Array_0[3])) ? (float_Array_0[2]) : (float_Array_0[3])))) < (float_Array_0[1])) ? (((((float_Array_0[2]) < (float_Array_0[3])) ? (float_Array_0[2]) : (float_Array_0[3])))) : (float_Array_0[1]))))) : 1)) : (float_Array_0[4] == ((float) 64.6f)))) && (((float_Array_0[3] == float_Array_0[1]) || BOOL_unsigned_char_Array_0[1]) ? (((((((signed_char_Array_0[0]) > (signed_char_Array_0[1])) ? (signed_char_Array_0[0]) : (signed_char_Array_0[1]))) >> signed_long_int_Array_0[0]) >= (signed_long_int_Array_0[1] + -32)) ? (float_Array_0[0] == ((float) float_Array_0[3])) : (float_Array_0[0] == ((float) float_Array_0[2]))) : (float_Array_0[0] == ((float) float_Array_0[3])))) && (BOOL_unsigned_char_Array_0[1] ? (((8 > signed_char_Array_0[1]) || BOOL_unsigned_char_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] ? (signed_short_int_Array_0[0] == ((signed short int) signed_long_int_Array_0[0])) : (signed_short_int_Array_0[0] == ((signed short int) signed_char_Array_0[0]))) : (signed_short_int_Array_0[0] == ((signed short int) signed_long_int_Array_0[0]))) : (signed_short_int_Array_0[0] == ((signed short int) signed_long_int_Array_0[0])))
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
