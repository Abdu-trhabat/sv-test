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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch73Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 0, 0, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
double double_Array_0[2] = {
 -0.41, 5.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
float float_Array_0[3] = {
 15.75, 1.6, 16.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed char signed_char_Array_0[2] = {
 10, -10
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed long int signed_long_int_Array_0[1] = {
 -16
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[3] = {
 100, 25, 1
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
float last_1_float_Array_0_0_ = 15.75;
void initially(void) {
}
void step(void) {
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))));
 } else {
  if (last_1_float_Array_0_0_ < (last_1_float_Array_0_0_ + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))));
  }
 }
 (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
   (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - ((((99999.25f) < 0 ) ? -(99999.25f) : (99999.25f))));
  } else {
   if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
    (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)));
   } else {
    (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer));
   }
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
 }
 signed long int stepLocal_0 = ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))));
 if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) <= stepLocal_0) {
  if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
  } else {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
  }
 }
 (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854765600e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854765600e+12F && double_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854765600e+12F && float_Array_0[2] >= 1.0e-20F ));
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 254);
}
void updateLastVariables() {
 last_1_float_Array_0_0_ = float_Array_0[0];
}
int property() {
 return ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) <= (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : 1) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))))) : ((last_1_float_Array_0_0_ < (last_1_float_Array_0_0_ + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))))) : 1))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - ((((99999.25f) < 0 ) ? -(99999.25f) : (99999.25f)))))) : (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))
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
