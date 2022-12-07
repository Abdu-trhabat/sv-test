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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[5] = {
 0, 0, 0, 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[3]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer = &(BOOL_unsigned_char_Array_0[4]);
float float_Array_0[2][3] = {
 {2.4, 256.75, 0.0}, {127.75, 256.6, 31.4}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[0][2]);
float* float_Array_0_arrayfloat_Array_0arrayVar5_Pointer = &(float_Array_0[1][2]);
signed long int signed_long_int_Array_0[2] = {
 64, 0
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
unsigned char unsigned_char_Array_0[2] = {
 100, 32
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
void initially(void) {
}
void step(void) {
 (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer));
 (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 unsigned char stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 signed long int stepLocal_0 = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) * ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)));
 if (stepLocal_0 >= 1u) {
  if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) <= stepLocal_1) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
  }
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 }
 signed long int stepLocal_2 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) > stepLocal_2) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))) - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))));
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))));
 }
 if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) >= (8u * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) = (! ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) || ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))));
 } else {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
 BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 0);
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= -461168.6018427382800e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 4611686.018427382800e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= 0.0F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 4611686.018427382800e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[0][2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][2] >= 2305843.009213691390e+12F && float_Array_0[0][2] <= -1.0e-20F) || (float_Array_0[0][2] <= 4611686.018427382800e+12F && float_Array_0[0][2] >= 1.0e-20F ));
 float_Array_0[1][2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][2] >= 0.0F && float_Array_0[1][2] <= -1.0e-20F) || (float_Array_0[1][2] <= 2305843.009213691390e+12F && float_Array_0[1][2] >= 1.0e-20F ));
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}
void updateLastVariables() {
}
int property() {
 return (((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) >= (8u * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (! ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) || ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))))) && (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) * ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) >= 1u) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) <= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))) - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)))))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))
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
