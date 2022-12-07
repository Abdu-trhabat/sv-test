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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch63Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 0, 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
float float_Array_0[2][2] = {
 {9.8, 2.25}, {10.3, 8.3}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed char signed_char_Array_0[7] = {
 32, 16, 16, 25, -10, 1, 0
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer = &(signed_char_Array_0[5]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer = &(signed_char_Array_0[6]);
signed long int signed_long_int_Array_0[1] = {
 128
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[1] = {
 256
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned long int unsigned_long_int_Array_0[2] = {
 1, 32
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
signed short int last_1_signed_short_int_Array_0_0_ = 256;
void initially(void) {
}
void step(void) {
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
 (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = last_1_signed_short_int_Array_0_0_;
 (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
 (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
 if (((((1.1f) < ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))) ? (1.1f) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)));
 }
 signed char stepLocal_0 = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
 if (stepLocal_0 != (((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))) {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = ((((((10 + (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) < ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) ? ((10 + (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) - ((32 - (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer))) + (((((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))));
 }
 if ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) <= ((((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) * (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((((((((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))))) > ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))))))) ? (((((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))))) : ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))))))));
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854776000e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854776000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= -922337.2036854776000e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 63);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= 0);
 assume_abort_if_not(signed_char_Array_0[2] <= 63);
 signed_char_Array_0[3] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[3] >= -1);
 assume_abort_if_not(signed_char_Array_0[3] <= 126);
 signed_char_Array_0[5] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[5] >= 0);
 assume_abort_if_not(signed_char_Array_0[5] <= 31);
 signed_char_Array_0[6] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[6] >= 0);
 assume_abort_if_not(signed_char_Array_0[6] <= 63);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
}
void updateLastVariables() {
 last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
}
int property() {
 return (((((((((((1.1f) < ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))) ? (1.1f) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : 1) && (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) <= ((((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) * (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((((((((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))))) > ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))))))) ? (((((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))))) : ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))))))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) && (((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) != (((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) ((((((10 + (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) < ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) ? ((10 + (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) - ((32 - (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer))) + (((((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))))))) : 1)) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) last_1_signed_short_int_Array_0_0_))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))
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
