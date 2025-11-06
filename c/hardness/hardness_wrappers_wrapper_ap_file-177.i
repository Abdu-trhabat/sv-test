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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double double_Array_0[5] = {
 15.125, 1000000000.6, 31.124, 127.5, 32.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
signed long int signed_long_int_Array_0[1] = {
 -64
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[1] = {
 -1
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2][3] = {
 {54889, 5, 8}, {256, 5, 128}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[1][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer = &(unsigned_short_int_Array_0[0][2]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer = &(unsigned_short_int_Array_0[1][2]);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = (((5) < (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))))) ? (5) : (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))));
 signed long int stepLocal_1 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) * ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) * 50);
 unsigned short int stepLocal_0 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer));
 if (stepLocal_2 <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
  if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) > stepLocal_0) {
   if ((- (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) == stepLocal_1) {
    (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = ((((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) > ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))));
   }
  }
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
 }
 if (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) >= -32) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) + 64);
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
 }
 unsigned short int stepLocal_4 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
 unsigned short int stepLocal_3 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
 if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) >= stepLocal_3) {
  if (stepLocal_4 < (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) << (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
  }
 }
 (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer));
}
void updateVariables(void) {
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854766000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65535);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 16384);
 unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 16383);
 unsigned_short_int_Array_0[0][2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] <= 65535);
 unsigned_short_int_Array_0[1][2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][2] <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((5) < (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))))) ? (5) : (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) > (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) ? (((- (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) == ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) * ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) * 50))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) ((((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) > ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))))) : 1) : 1) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) && ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) >= -32) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) + 64))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))))) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) >= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) < (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) << (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : 1) : 1)) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))))
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
