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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[7] = {
 0.0, 1.8, 4.2, 1000.99, 199.5, 50.4, 15.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
double* double_Array_0_arraydouble_Array_0arrayVar5_Pointer = &(double_Array_0[5]);
double* double_Array_0_arraydouble_Array_0arrayVar6_Pointer = &(double_Array_0[6]);
signed short int signed_short_int_Array_0[2] = {
 100, -5
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
unsigned char unsigned_char_Array_0[7] = {
 128, 50, 8, 16, 64, 2, 16
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[3]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[4]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[5]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer = &(unsigned_char_Array_0[6]);
void initially(void) {
}
void step(void) {
 if ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))) {
  if ((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer))) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + ((((128) < 0 ) ? -(128) : (128))));
  } else {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
  }
 }
 if ((((((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer))))) > (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) {
  if (((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) / 256.8) >= (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) - ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) = 64;
  } else {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
  }
 }
 if (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) + 8));
  } else {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer));
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= 4611686.018427388000e+12F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427388000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427388000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 4611686.018427388000e+12F && double_Array_0[3] >= 1.0e-20F ));
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= -922337.2036854776000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854776000e+12F && double_Array_0[4] >= 1.0e-20F ));
 double_Array_0[5] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[5] >= -922337.2036854776000e+13F && double_Array_0[5] <= -1.0e-20F) || (double_Array_0[5] <= 9223372.036854776000e+12F && double_Array_0[5] >= 1.0e-20F ));
 double_Array_0[6] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[6] >= -922337.2036854776000e+13F && double_Array_0[6] <= -1.0e-20F) || (double_Array_0[6] <= 9223372.036854776000e+12F && double_Array_0[6] >= 1.0e-20F ));
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 32);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 31);
 unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[4] >= 63);
 assume_abort_if_not(unsigned_char_Array_0[4] <= 127);
 unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[5] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[5] <= 64);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + ((((128) < 0 ) ? -(128) : (128)))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) : 1) && (((((((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer))))) > (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) ? ((((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) / 256.8) >= (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) - ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) == ((unsigned char) 64)) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : 1)) && ((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) + 8)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))))) : 1)
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
