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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch88Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
float float_Array_0[3] = {
 0.65, 1.6, 10.25
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed char signed_char_Array_0[2][2] = {
 {-1, -128}, {10, -8}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed long int signed_long_int_Array_0[3] = {
 -1000000000, 10, 32
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed short int signed_short_int_Array_0[1] = {
 -4
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[1] = {
 10
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
signed long int last_1_signed_long_int_Array_0_0_ = -1000000000;
void initially(void) {
}
void step(void) {
 if ((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) | (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
  } else {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = -25;
  }
 } else {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
 }
 if (15.2f < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
  if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) > last_1_signed_long_int_Array_0_0_) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)));
  }
 } else {
  if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) {
   if (last_1_signed_long_int_Array_0_0_ == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) {
    (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (((((((((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))))) > (-16)) ? ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))))) : (-16)));
   } else {
    (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
   }
  }
 }
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer));
 if (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) > (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
  if ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) > stepLocal_0) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
  } else {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
  }
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
 signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0] >= -127);
 assume_abort_if_not(signed_char_Array_0[0][0] <= 126);
 signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0] >= -128);
 assume_abort_if_not(signed_char_Array_0[1][0] <= 127);
 signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][1] >= -128);
 assume_abort_if_not(signed_char_Array_0[0][1] <= 127);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
}
void updateLastVariables(void) {
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
}
int property(void) {
 return ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) | (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) -25))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) && ((15.2f < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) > last_1_signed_long_int_Array_0_0_) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))) : 1) : (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((last_1_signed_long_int_Array_0_0_ == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (((((((((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))))) > (-16)) ? ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))))) : (-16))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) : 1))) && ((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) > (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))
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
