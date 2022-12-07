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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
float float_Array_0[2][2] = {
 {128.5, 499.3}, {127.8, 255.8}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed short int signed_short_int_Array_0[5] = {
 2, -256, 256, 2, 0
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[3]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[4]);
unsigned long int unsigned_long_int_Array_0[1] = {
 64
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2][3] = {
 {8, 16, 256}, {10, 57705, 1}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[1][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer = &(unsigned_short_int_Array_0[0][2]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer = &(unsigned_short_int_Array_0[1][2]);
void initially(void) {
}
void step(void) {
 if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) = ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))));
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer));
 }
 signed short int stepLocal_0 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer));
 if (stepLocal_0 > 2) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) = (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)));
 }
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + (((((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) ? ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))));
 } else {
  if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) < (200 * (-25 << (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (((((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) > ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))))))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) : ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))))) < 0 ) ? -((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) > ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))))))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) : ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))))) : ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) > ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))))))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) : ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))))))))));
  } else {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)));
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= 0.0F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 4611686.018427382800e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 4611686.018427382800e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= 0.0F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854765600e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -8191);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 8191);
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= -8191);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 8192);
 signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[3] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[3] <= 16383);
 unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 32767);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
 unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 65534);
 unsigned_short_int_Array_0[0][2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] <= 32767);
 unsigned_short_int_Array_0[1][2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][2] <= 32767);
}
void updateLastVariables() {
}
int property() {
 return ((((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) == ((signed short int) ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) > 2) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) == ((float) (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) : 1)) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + (((((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) ? ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))))))) : (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) < (200 * (-25 << (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (((((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) > ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))))))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) : ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))))) < 0 ) ? -((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) > ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))))))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) : ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))))) : ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) > ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))))))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - 10000)) : ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))))))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))))
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
