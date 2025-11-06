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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
float float_Array_0[2][2] = {
 {1.6, 127.6}, {7.3, 8.25}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed char signed_char_Array_0[1] = {
 -5
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed short int signed_short_int_Array_0[5] = {
 5, 4, -10, -256, 500
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[3]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[4]);
unsigned char unsigned_char_Array_0[3] = {
 128, 64, 25
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[2] = {
 1, 128
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
void initially(void) {
}
void step(void) {
 signed short int stepLocal_0 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer));
 if (stepLocal_0 > (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) = (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))));
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) = 32;
 }
 if ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) * (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) < (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
  }
 }
 if (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) / 1u) != ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + 10u)) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < (128)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : (128))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)));
 }
 if (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) / (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) > (-8)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : (-8)))) >= (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) | (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
 } else {
  if ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) != ((((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) {
   (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854766000e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854766000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -128);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 assume_abort_if_not(signed_char_Array_0[0] != 0);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= -32768);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 32767);
 signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[3] >= -32768);
 assume_abort_if_not(signed_short_int_Array_0[3] <= 32767);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 127);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) > (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) == ((signed short int) (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) == ((signed short int) 32))) && (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) * (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) < (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) : 1) : 1)) && ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) / 1u) != ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + 10u)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < (128)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : (128))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))) : 1)) && ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) / (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) > (-8)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : (-8)))) >= (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) | (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) : (((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) != ((((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) : 1))
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
