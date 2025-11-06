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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192Wrapper_AP.c", 13, "reach_error"); }
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
 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
double double_Array_0[5] = {
 7.25, 7.375, 8.2, 500.35, 256.6
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
signed char signed_char_Array_0[1] = {
 -4
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed long int signed_long_int_Array_0[3] = {
 -5, 16, 32
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
unsigned char unsigned_char_Array_0[2] = {
 16, 32
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[2] = {
 8, 5
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = (200 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
 if (stepLocal_1 < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) {
  if (stepLocal_2 >= -100) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
  } else {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
  }
 }
 signed long int stepLocal_3 = 1 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 if ((((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) < 0 ) ? -((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) >= (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) {
  if ((-4 + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) < stepLocal_3) {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
  } else {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = -8;
  }
 } else {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 }
 signed long int stepLocal_0 = (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) < (-5)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) : (-5))) + (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < (0)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : (0))) <= stepLocal_0) {
   (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) < 0 ) ? -((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))));
  } else {
   (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)));
  }
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 4611686.018427383000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427383000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= -922337.2036854766000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 64);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < (0)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : (0))) <= ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) < (-5)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) : (-5))) + (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) < 0 ) ? -((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) ? ((((200 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) >= -100) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : 1)) && (((((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) < 0 ) ? -((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) >= (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) ? (((-4 + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) < (1 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) -8))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))
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
