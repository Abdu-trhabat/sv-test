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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch77Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[1] = {
 10000000000000.375
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
float float_Array_0[5] = {
 0.0, 49.5, 63.8, 31.875, 255.25
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[3]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[4]);
signed short int signed_short_int_Array_0[1] = {
 -8
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2][3] = {
 {5, 28896, 60871}, {4, 1, 50}
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
 if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) > (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))));
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = ((((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))) - ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) - 3.4f));
 }
 unsigned short int stepLocal_0 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
 if (stepLocal_0 <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) {
  if ((((((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) > (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) : (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) > (((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))))) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
  }
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
 }
 if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) * (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer));
  } else {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
  }
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
 }
 if ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) != (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) - (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) < (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) : (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 assume_abort_if_not(double_Array_0[0] != 0.0F);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 4611686.018427382800e+12F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854765600e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= 0.0F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854765600e+12F && float_Array_0[3] >= 1.0e-20F ));
 float_Array_0[4] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 9223372.036854765600e+12F && float_Array_0[4] >= 1.0e-20F ));
 unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 16383);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
 unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 32767);
 unsigned_short_int_Array_0[0][2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] <= 65534);
}
void updateLastVariables() {
}
int property() {
 return (((((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) != (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) == ((unsigned short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) - (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) < (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) : (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))))) : 1) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) > (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) ((((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))) - ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) - 3.4f)))))) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) ? (((((((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) > (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) : (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) > (((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) : 1) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) * (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))))
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
