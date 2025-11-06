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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch127Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[2] = {
 10.55, 10.375
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
signed long int signed_long_int_Array_0[3] = {
 2, 16, 1
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed short int signed_short_int_Array_0[3] = {
 128, -50, -64
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[2] = {
 100, 0
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
void initially(void) {
}
void step(void) {
 if (((((0u) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? (0u) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) > (~ (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))));
 }
 if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))));
 } else {
  if ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
  } else {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer));
  }
 }
 unsigned long int stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
 if ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) >= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
  if (10 >= stepLocal_0) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)));
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + 256));
  }
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer));
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer));
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 536870911);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 536870911);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((0u) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? (0u) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) > (~ (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))))) : 1) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))))) : (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))))) && (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) >= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((10 >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + 256))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))))
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
