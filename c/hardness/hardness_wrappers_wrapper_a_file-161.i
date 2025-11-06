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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {1, 1}, {0, 0}
};
float float_Array_0[2][2][2] = {
 {{8.75, 1.9}, {127.62, 3.7}}, {{3.25, 32.375}, {63.25, 3.8}}
};
signed long int signed_long_int_Array_0[2] = {
 32, -5
};
unsigned long int unsigned_long_int_Array_0[1] = {
 5
};
unsigned char last_1_BOOL_unsigned_char_Array_0_0__0_ = 1;
signed long int last_1_signed_long_int_Array_0_1_ = -5;
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_signed_long_int_Array_0_1_;
 if (stepLocal_0 <= 32) {
  if ((float_Array_0[0][1][1] - float_Array_0[1][0][1]) < float_Array_0[0][0][1]) {
   float_Array_0[1][1][1] = float_Array_0[1][1][0];
  } else {
   if (float_Array_0[1][1][0] < float_Array_0[1][0][1]) {
    if (last_1_BOOL_unsigned_char_Array_0_0__0_) {
     float_Array_0[1][1][1] = (float_Array_0[1][0][0] - (float_Array_0[0][0][0] + float_Array_0[0][1][0]));
    } else {
     float_Array_0[1][1][1] = float_Array_0[1][1][0];
    }
   } else {
    float_Array_0[1][1][1] = float_Array_0[0][0][0];
   }
  }
 }
 if (float_Array_0[0][1][1] < ((float_Array_0[1][1][1] * float_Array_0[1][0][0]) + float_Array_0[0][0][0])) {
  unsigned_long_int_Array_0[0] = ((((last_1_unsigned_long_int_Array_0_0_) < 0 ) ? -(last_1_unsigned_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_0_)));
 }
 if (BOOL_unsigned_char_Array_0[0][1]) {
  BOOL_unsigned_char_Array_0[0][0] = (BOOL_unsigned_char_Array_0[1][0] || BOOL_unsigned_char_Array_0[1][1]);
 }
 unsigned char stepLocal_1 = BOOL_unsigned_char_Array_0[0][0];
 if (BOOL_unsigned_char_Array_0[1][1]) {
  if (BOOL_unsigned_char_Array_0[0][0]) {
   if (stepLocal_1 || (float_Array_0[0][0][0] <= float_Array_0[0][1][1])) {
    signed_long_int_Array_0[1] = (unsigned_long_int_Array_0[0] - signed_long_int_Array_0[0]);
   }
  } else {
   signed_long_int_Array_0[1] = signed_long_int_Array_0[0];
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 0);
 float_Array_0[0][0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0][0] >= 0.0F && float_Array_0[0][0][0] <= -1.0e-20F) || (float_Array_0[0][0][0] <= 4611686.018427383000e+12F && float_Array_0[0][0][0] >= 1.0e-20F ));
 float_Array_0[1][0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0][0] >= 0.0F && float_Array_0[1][0][0] <= -1.0e-20F) || (float_Array_0[1][0][0] <= 9223372.036854766000e+12F && float_Array_0[1][0][0] >= 1.0e-20F ));
 float_Array_0[0][1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1][0] >= 0.0F && float_Array_0[0][1][0] <= -1.0e-20F) || (float_Array_0[0][1][0] <= 4611686.018427383000e+12F && float_Array_0[0][1][0] >= 1.0e-20F ));
 float_Array_0[1][1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1][0] >= -922337.2036854766000e+13F && float_Array_0[1][1][0] <= -1.0e-20F) || (float_Array_0[1][1][0] <= 9223372.036854766000e+12F && float_Array_0[1][1][0] >= 1.0e-20F ));
 float_Array_0[0][0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0][1] >= -922337.2036854776000e+13F && float_Array_0[0][0][1] <= -1.0e-20F) || (float_Array_0[0][0][1] <= 9223372.036854776000e+12F && float_Array_0[0][0][1] >= 1.0e-20F ));
 float_Array_0[1][0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0][1] >= 0.0F && float_Array_0[1][0][1] <= -1.0e-20F) || (float_Array_0[1][0][1] <= 9223372.036854776000e+12F && float_Array_0[1][0][1] >= 1.0e-20F ));
 float_Array_0[0][1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1][1] >= 0.0F && float_Array_0[0][1][1] <= -1.0e-20F) || (float_Array_0[0][1][1] <= 9223372.036854776000e+12F && float_Array_0[0][1][1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
}
void updateLastVariables(void) {
 last_1_BOOL_unsigned_char_Array_0_0__0_ = BOOL_unsigned_char_Array_0[0][0];
 last_1_signed_long_int_Array_0_1_ = signed_long_int_Array_0[1];
 last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}
int property(void) {
 return ((((last_1_signed_long_int_Array_0_1_ <= 32) ? (((float_Array_0[0][1][1] - float_Array_0[1][0][1]) < float_Array_0[0][0][1]) ? (float_Array_0[1][1][1] == ((float) float_Array_0[1][1][0])) : ((float_Array_0[1][1][0] < float_Array_0[1][0][1]) ? (last_1_BOOL_unsigned_char_Array_0_0__0_ ? (float_Array_0[1][1][1] == ((float) (float_Array_0[1][0][0] - (float_Array_0[0][0][0] + float_Array_0[0][1][0])))) : (float_Array_0[1][1][1] == ((float) float_Array_0[1][1][0]))) : (float_Array_0[1][1][1] == ((float) float_Array_0[0][0][0])))) : 1) && ((float_Array_0[0][1][1] < ((float_Array_0[1][1][1] * float_Array_0[1][0][0]) + float_Array_0[0][0][0])) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) ((((last_1_unsigned_long_int_Array_0_0_) < 0 ) ? -(last_1_unsigned_long_int_Array_0_0_) : (last_1_unsigned_long_int_Array_0_0_))))) : 1)) && (BOOL_unsigned_char_Array_0[0][1] ? (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) (BOOL_unsigned_char_Array_0[1][0] || BOOL_unsigned_char_Array_0[1][1]))) : 1)) && (BOOL_unsigned_char_Array_0[1][1] ? (BOOL_unsigned_char_Array_0[0][0] ? ((BOOL_unsigned_char_Array_0[0][0] || (float_Array_0[0][0][0] <= float_Array_0[0][1][1])) ? (signed_long_int_Array_0[1] == ((signed long int) (unsigned_long_int_Array_0[0] - signed_long_int_Array_0[0]))) : 1) : (signed_long_int_Array_0[1] == ((signed long int) signed_long_int_Array_0[0]))) : 1)
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
