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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch65Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
double double_Array_0[5] = {
 25.25, 100.5, 63.6, 0.0, 0.8
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
float float_Array_0[2] = {
 8.2, 1000000000.1
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed char signed_char_Array_0[2] = {
 -8, 8
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed long int signed_long_int_Array_0[1] = {
 -32
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[3] = {
 0, 2, 50
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);
double last_1_double_Array_0_1_ = 100.5;
void initially(void) {
}
void step(void) {
 if (0.625f > last_1_double_Array_0_1_) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = (((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))));
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = (((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))));
 }
 (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
 (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
 (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) >= (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) * 64)) {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = ((((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) < (50.5)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : (50.5))) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)));
  }
 } else {
  if ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) <= (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))));
  }
 }
 if ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) > (-64)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : (-64))) + (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + -2) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854765600e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854765600e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= 4611686.018427382800e+12F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854765600e+12F && double_Array_0[3] >= 1.0e-20F ));
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= 0.0F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 4611686.018427382800e+12F && double_Array_0[4] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854765600e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854765600e+12F && float_Array_0[0] >= 1.0e-20F ));
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[2] <= 65534);
}
void updateLastVariables() {
 last_1_double_Array_0_1_ = double_Array_0[1];
}
int property() {
 return ((((((0.625f > last_1_double_Array_0_1_) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) (((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))))) : 1) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) (((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))))) && (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) > (-64)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : (-64))) + (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + -2) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) >= (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) * 64)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) ((((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) < (50.5)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : (50.5))) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) : 1) : (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) <= (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))))) : 1))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))
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
