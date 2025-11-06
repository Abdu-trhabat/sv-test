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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[2] = {
 5.2, 9.7
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
float float_Array_0[2] = {
 99.25, 0.8
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed char signed_char_Array_0[5] = {
 10, 4, 4, 50, 32
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
signed long int signed_long_int_Array_0[1] = {
 10
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[1] = {
 64
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[3] = {
 128, 8, 2
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
void initially(void) {
}
void step(void) {
 if ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = (((((-32 + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) > ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))))) ? ((-32 + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) : ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))))));
 } else {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = ((1 - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)));
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) <= ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) * (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
 }
 (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)));
 signed long int stepLocal_1 = -100;
 signed long int stepLocal_0 = 4;
 if (stepLocal_1 >= (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) {
  if ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) > 63.5f) {
   if (! ((64 >> (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) >= (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) {
    if (stepLocal_0 >= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) {
     (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) > (10.2)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) : (10.2)));
    }
   } else {
    (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
   }
  } else {
   (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854766000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 63);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -127);
 assume_abort_if_not(signed_char_Array_0[2] <= 126);
 signed_char_Array_0[3] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[3] >= -63);
 assume_abort_if_not(signed_char_Array_0[3] <= 63);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 1);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 30);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
 assume_abort_if_not(unsigned_char_Array_0[1] != 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) (((((-32 + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) > ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))))) ? ((-32 + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) : ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))))))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) ((1 - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))))) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) <= ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) * (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) : 1)) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))) && ((-100 >= (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) ? (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) > 63.5f) ? ((! ((64 >> (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) >= (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) ? ((4 >= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) > (10.2)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) : (10.2))))) : 1) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) : 1)
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
