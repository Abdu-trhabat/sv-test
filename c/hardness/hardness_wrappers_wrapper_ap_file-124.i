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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[2][2] = {
 {100000000.4, 8.5}, {3.2, 64.5}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
signed char signed_char_Array_0[2][2] = {
 {5, 100}, {64, 2}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed short int signed_short_int_Array_0[1] = {
 -8
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned long int unsigned_long_int_Array_0[3] = {
 16, 8, 64
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned short int unsigned_short_int_Array_0[1] = {
 8
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
 if (! ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == (15.2 + (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) {
  if (stepLocal_0 && ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) {
   if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
    (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = (2.5 - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)));
   } else {
    (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
   }
  }
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
 }
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)));
 unsigned long int stepLocal_1 = ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))));
 if ((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) < 0 ) ? -((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))))) < stepLocal_1) {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) - (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))));
 }
 (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = 16;
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) > 99.4) {
   if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) {
    (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) < (256)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) : (256)));
   }
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= -922337.2036854776000e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854776000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= -922337.2036854776000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0] >= -126);
 assume_abort_if_not(signed_char_Array_0[0][0] <= 126);
 signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][1] >= 62);
 assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
 signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][1] >= 0);
 assume_abort_if_not(signed_char_Array_0[1][1] <= 63);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 2147483647);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((! ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == (15.2 + (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) (2.5 - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : 1) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) && (((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) < 0 ) ? -((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))))) < (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) - (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) > 99.4) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) < (256)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) : (256))))) : 1) : 1) : 1)) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) 16))
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
