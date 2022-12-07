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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
float float_Array_0[2][3] = {
 {9.25, 128.75, 255.675}, {4.5, 5.5, 32.8}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[0][2]);
float* float_Array_0_arrayfloat_Array_0arrayVar5_Pointer = &(float_Array_0[1][2]);
signed long int signed_long_int_Array_0[1] = {
 64
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[3][3] = {
 {8, 5, 100}, {4, 200, 64}, {100, 200, 2}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[1][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[2][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer = &(unsigned_char_Array_0[0][2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer = &(unsigned_char_Array_0[1][2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var8_Pointer = &(unsigned_char_Array_0[2][2]);
unsigned long int unsigned_long_int_Array_0[1] = {
 1
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned char last_1_unsigned_char_Array_0_0__1_ = 5;
void initially(void) {
}
void step(void) {
 if ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) <= (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) {
  if ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) < (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) + 1.395f)) {
   (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
  } else {
   (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
 }
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer));
 (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer));
 (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = 4;
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) - (8 + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var8_Pointer)))) > stepLocal_0) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)));
 } else {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if (last_1_unsigned_char_Array_0_0__1_ != last_1_unsigned_char_Array_0_0__1_) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) = (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)));
  } else {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) - ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer))))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))));
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854765600e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854765600e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= 0.0F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 float_Array_0[0][2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][2] >= -922337.2036854776000e+13F && float_Array_0[0][2] <= -1.0e-20F) || (float_Array_0[0][2] <= 9223372.036854776000e+12F && float_Array_0[0][2] >= 1.0e-20F ));
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 63);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 190);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 254);
 unsigned_char_Array_0[2][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2][1] >= 191);
 assume_abort_if_not(unsigned_char_Array_0[2][1] <= 255);
 unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][2] >= 63);
 assume_abort_if_not(unsigned_char_Array_0[0][2] <= 127);
 unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][2] >= 63);
 assume_abort_if_not(unsigned_char_Array_0[1][2] <= 127);
 unsigned_char_Array_0[2][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2][2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2][2] <= 63);
}
void updateLastVariables() {
 last_1_unsigned_char_Array_0_0__1_ = unsigned_char_Array_0[0][1];
}
int property() {
 return (((((((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) <= (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) ? (((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) < (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) + 1.395f)) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((last_1_unsigned_char_Array_0_0__1_ != last_1_unsigned_char_Array_0_0__1_) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) - ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer))))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))))) : 1)) && (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) - (8 + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var8_Pointer)))) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer))))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) 4))
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
