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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch73Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {1, 0}, {1, 1}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
double double_Array_0[3] = {
 -0.41, 2.6, 5.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
float float_Array_0[2] = {
 1.25, 64.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed long int signed_long_int_Array_0[5] = {
 16, 64, -4, 4, 1000000
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[4]);
unsigned long int unsigned_long_int_Array_0[2][2] = {
 {64, 2}, {10, 8}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1]);
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
 unsigned char stepLocal_1 = (~ (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) && stepLocal_2) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < ((((((64) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? (64) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))))) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : ((((((64) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? (64) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))))) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))))));
 } else {
  if (stepLocal_1 && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer));
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = 32;
  }
 }
 unsigned char stepLocal_3 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
 if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) || stepLocal_3) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))));
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
 }
 (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
 (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
 unsigned long int stepLocal_0 = ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) > (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) : (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))));
 if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) <= stepLocal_0) {
  if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
  } else {
   (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = 255.375;
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854766000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 1073741823);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 1073741823);
 signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[3] >= -2147483647);
 assume_abort_if_not(signed_long_int_Array_0[3] <= 2147483646);
 signed_long_int_Array_0[4] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[4] >= -1);
 assume_abort_if_not(signed_long_int_Array_0[4] <= 2147483646);
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 4294967295);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 4294967295);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 4294967295);
 unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) <= (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) > (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) : (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))))) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) 255.375))) : 1) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < ((((((64) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? (64) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))))) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : ((((((64) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? (64) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))))) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))))))) : ((((~ (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) 32))))) && ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) || ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))
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
