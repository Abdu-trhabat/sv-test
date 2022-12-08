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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch75Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
double double_Array_0[1] = {
 5.95
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
float float_Array_0[2] = {
 2.25, 16.875
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed char signed_char_Array_0[2] = {
 -4, 10
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed long int signed_long_int_Array_0[1] = {
 -100
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[7] = {
 128, 200, 32, 128, 1, 8, 32
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[3]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[4]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[5]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer = &(unsigned_char_Array_0[6]);
signed long int last_1_signed_long_int_Array_0_0_ = -100;
void initially(void) {
}
void step(void) {
 (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
 (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
 if (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) >= ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) / 128.6)) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + last_1_signed_long_int_Array_0_0_)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)));
 } else {
  if ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = 256;
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
  }
 }
 signed long int stepLocal_0 = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) * (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if (stepLocal_0 < (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
 }
 if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) == ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))));
  }
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 assume_abort_if_not(double_Array_0[0] != 0.0F);
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 254);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 254);
 unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[4] <= 254);
 unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[5] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[5] <= 127);
}
void updateLastVariables() {
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
}
int property() {
 return ((((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) * (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) < (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))) && ((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) >= ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) / 128.6)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + last_1_signed_long_int_Array_0_0_)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) : (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) 256)) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))))) && ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) == ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))))) : 1) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))
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
