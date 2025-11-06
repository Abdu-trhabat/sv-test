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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch157Wrapper_AP.c", 13, "reach_error"); }
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
 0, 1, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
float float_Array_0[2][3] = {
 {16.75, 64.75, 4.75}, {63.5, 24.99, 0.6}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[0][2]);
float* float_Array_0_arrayfloat_Array_0arrayVar5_Pointer = &(float_Array_0[1][2]);
signed long int signed_long_int_Array_0[2][5] = {
 {2, 1000000, 128, -16, 1}, {25, -10, 1000000000, 8, 200}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[0][2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer = &(signed_long_int_Array_0[1][2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer = &(signed_long_int_Array_0[0][3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var7_Pointer = &(signed_long_int_Array_0[1][3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer = &(signed_long_int_Array_0[0][4]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer = &(signed_long_int_Array_0[1][4]);
unsigned char unsigned_char_Array_0[5] = {
 8, 10, 10, 128, 10
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[3]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[4]);
void initially(void) {
}
void step(void) {
 if (((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) >= ((((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) - (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)));
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) = -200;
 }
 (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) - ((32 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) + (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))))));
 signed long int stepLocal_1 = (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var7_Pointer)))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var7_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))));
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer)) / (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer));
 if (128 <= stepLocal_1) {
  if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var7_Pointer)) <= stepLocal_0) {
   if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
    (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer)) = 10;
   } else {
    (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer));
   }
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer));
  }
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= 0.0F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854776000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= 0.0F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 float_Array_0[0][2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][2] >= 0.0F && float_Array_0[0][2] <= -1.0e-20F) || (float_Array_0[0][2] <= 9223372.036854776000e+12F && float_Array_0[0][2] >= 1.0e-20F ));
 float_Array_0[1][2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][2] >= -922337.2036854776000e+13F && float_Array_0[1][2] <= -1.0e-20F) || (float_Array_0[1][2] <= 9223372.036854776000e+12F && float_Array_0[1][2] >= 1.0e-20F ));
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483646);
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= -2147483647);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483646);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= -1);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483646);
 signed_long_int_Array_0[1][2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][2] >= -2147483647);
 assume_abort_if_not(signed_long_int_Array_0[1][2] <= 2147483646);
 signed_long_int_Array_0[0][3] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][3] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][3] <= 2147483647);
 assume_abort_if_not(signed_long_int_Array_0[0][3] != 0);
 signed_long_int_Array_0[1][3] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][3] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1][3] <= 2147483647);
 signed_long_int_Array_0[0][4] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][4] >= -1);
 assume_abort_if_not(signed_long_int_Array_0[0][4] <= 2147483647);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 32);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 63);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 254);
 unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[4] <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((128 <= ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var7_Pointer)))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var7_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var7_Pointer)) <= ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer)) / (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer)) == ((signed long int) 10)) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))))) && ((((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) >= ((((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) - (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) == ((signed long int) ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))))) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) == ((signed long int) -200)) : 1)) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) - ((32 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) + (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))))))))
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
