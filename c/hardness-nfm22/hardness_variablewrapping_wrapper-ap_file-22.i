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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch22Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
float float_Array_0[2][2] = {
 {64.2, 128.75}, {7.6, 5.9}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed short int signed_short_int_Array_0[1] = {
 -5
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned long int unsigned_long_int_Array_0[2] = {
 3135928546, 8
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[2] = {
 44772, 256
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
signed short int last_1_signed_short_int_Array_0_0_ = -5;
unsigned long int last_1_unsigned_long_int_Array_0_1_ = 8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_signed_short_int_Array_0_0_;
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = last_1_signed_short_int_Array_0_0_;
 } else {
  if (stepLocal_0 <= last_1_signed_short_int_Array_0_0_) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = ((((last_1_unsigned_long_int_Array_0_1_) > (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - 8))) ? (last_1_unsigned_long_int_Array_0_1_) : (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - 8))));
  }
 }
 if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + -16);
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
  }
 }
 if (last_1_unsigned_long_int_Array_0_1_ >= ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) & last_1_unsigned_long_int_Array_0_1_)) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((((((((((((50u) < (last_1_unsigned_long_int_Array_0_1_)) ? (50u) : (last_1_unsigned_long_int_Array_0_1_)))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? (((((50u) < (last_1_unsigned_long_int_Array_0_1_)) ? (50u) : (last_1_unsigned_long_int_Array_0_1_)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) < (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - last_1_unsigned_long_int_Array_0_1_))) ? (((((((((50u) < (last_1_unsigned_long_int_Array_0_1_)) ? (50u) : (last_1_unsigned_long_int_Array_0_1_)))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? (((((50u) < (last_1_unsigned_long_int_Array_0_1_)) ? (50u) : (last_1_unsigned_long_int_Array_0_1_)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) : (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - last_1_unsigned_long_int_Array_0_1_))));
 } else {
  if (5.7 < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = last_1_unsigned_long_int_Array_0_1_;
  } else {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = last_1_unsigned_long_int_Array_0_1_;
  }
 }
 if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) = (((10.25f + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) + (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) + (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= -230584.3009213691390e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 2305843.009213691390e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= -115292.1504606845700e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 1152921.504606845700e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= -461168.6018427382800e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 4611686.018427382800e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
}
void updateLastVariables() {
 last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
 last_1_unsigned_long_int_Array_0_1_ = unsigned_long_int_Array_0[1];
}
int property() {
 return (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + -16))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) last_1_signed_short_int_Array_0_0_)) : ((last_1_signed_short_int_Array_0_0_ <= last_1_signed_short_int_Array_0_0_) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) ((((last_1_unsigned_long_int_Array_0_1_) > (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - 8))) ? (last_1_unsigned_long_int_Array_0_1_) : (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - 8)))))) : 1))) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) == ((float) (((10.25f + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) + (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) + (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) : 1)) && ((last_1_unsigned_long_int_Array_0_1_ >= ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) & last_1_unsigned_long_int_Array_0_1_)) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((((((((((((50u) < (last_1_unsigned_long_int_Array_0_1_)) ? (50u) : (last_1_unsigned_long_int_Array_0_1_)))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? (((((50u) < (last_1_unsigned_long_int_Array_0_1_)) ? (50u) : (last_1_unsigned_long_int_Array_0_1_)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) < (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - last_1_unsigned_long_int_Array_0_1_))) ? (((((((((50u) < (last_1_unsigned_long_int_Array_0_1_)) ? (50u) : (last_1_unsigned_long_int_Array_0_1_)))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? (((((50u) < (last_1_unsigned_long_int_Array_0_1_)) ? (50u) : (last_1_unsigned_long_int_Array_0_1_)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) : (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - last_1_unsigned_long_int_Array_0_1_)))))) : ((5.7 < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) last_1_unsigned_long_int_Array_0_1_)) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) last_1_unsigned_long_int_Array_0_1_))))
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
