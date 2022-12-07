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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch93Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {1, 0}, {0, 1}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
double double_Array_0[5] = {
 9.6, 31.75, 9.186, 128.5, -0.9
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
float float_Array_0[3] = {
 499.2, 1.5, 255.3
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float last_1_float_Array_0_1_ = 1.5;
void initially(void) {
}
void step(void) {
 if (((- last_1_float_Array_0_1_) / (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) != (last_1_float_Array_0_1_ / (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) {
  if (last_1_float_Array_0_1_ != ((((((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) {
   (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
  } else {
   (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = 64.51f;
 }
 if ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) > ((((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) * 128.4)) > (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) ? (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) * 128.4)) : (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))))) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = 1.00000000000004E13f;
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
 }
 if (! ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) <= (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)));
 } else {
  if (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) < (((((((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))) < ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) ? ((((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))))) {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer));
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854776000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= -922337.2036854776000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854776000e+12F && double_Array_0[3] >= 1.0e-20F ));
 assume_abort_if_not(double_Array_0[3] != 0.0F);
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= -922337.2036854776000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854776000e+12F && double_Array_0[4] >= 1.0e-20F ));
 assume_abort_if_not(double_Array_0[4] != 0.0F);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854765600e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854765600e+12F && float_Array_0[0] >= 1.0e-20F ));
}
void updateLastVariables() {
 last_1_float_Array_0_1_ = float_Array_0[1];
}
int property() {
 return (((((- last_1_float_Array_0_1_) / (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) != (last_1_float_Array_0_1_ / (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) ? ((last_1_float_Array_0_1_ != ((((((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) 64.51f))) && (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) > ((((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) * 128.4)) > (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) ? (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) * 128.4)) : (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) 1.00000000000004E13f)) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) && ((! ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) <= (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : ((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) < (((((((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))) < ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) ? ((((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)))) : 1))
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
