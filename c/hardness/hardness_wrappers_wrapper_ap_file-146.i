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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146Wrapper_AP.c", 13, "reach_error"); }
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
float float_Array_0[2] = {
 15.75, 1000000.1
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed long int signed_long_int_Array_0[5] = {
 -64, 0, 4, -10, -128
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[4]);
unsigned char unsigned_char_Array_0[5] = {
 128, 128, 4, 100, 4
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[3]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[4]);
unsigned long int unsigned_long_int_Array_0[2][2] = {
 {0, 1}, {50, 2}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1]);
void initially(void) {
}
void step(void) {
 (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) + (((((16 + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) < ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) > (-32)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) : (-32))))) ? ((16 + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) > (-32)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) : (-32)))))));
 if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) >= ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))) % (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) = ((2066465504u - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)));
 } else {
  if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer));
  }
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))));
  }
 } else {
  if ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) * (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (128 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)));
  }
 }
 (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
 (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 assume_abort_if_not(signed_long_int_Array_0[0] != 0);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 1073741823);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -536870911);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 536870911);
 signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[3] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[3] <= 1073741823);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 2147483647);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 536870911);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 536870912);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) == ((signed long int) ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) + (((((16 + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) < ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) > (-32)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) : (-32))))) ? ((16 + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) > (-32)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) : (-32))))))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) >= ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))) % (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) == ((unsigned long int) ((2066465504u - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) : (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)))) : 1))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))))) : 1) : (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) * (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (128 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))))) : 1))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))
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
