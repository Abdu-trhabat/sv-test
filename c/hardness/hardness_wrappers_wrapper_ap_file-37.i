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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch37Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double double_Array_0[2][2][2] = {
 {{0.875, 9999999999999.1}, {0.7, 2.6}}, {{0.0, 31.75}, {16.1, 3.625}}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[0][0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar5_Pointer = &(double_Array_0[1][0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar6_Pointer = &(double_Array_0[0][1][1]);
double* double_Array_0_arraydouble_Array_0arrayVar7_Pointer = &(double_Array_0[1][1][1]);
unsigned char unsigned_char_Array_0[3] = {
 8, 16, 8
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[3] = {
 3853276514, 2189221048, 10000
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned short int unsigned_short_int_Array_0[2][2] = {
 {4, 100}, {128, 59049}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[1][1]);
void initially(void) {
}
void step(void) {
 if ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) ^ ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) <= -64) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = 16;
 }
 unsigned char stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 unsigned short int stepLocal_0 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
 if (stepLocal_1 >= 4) {
  if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) <= stepLocal_0) {
   (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) = ((((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))))) < ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)))));
  }
 }
 (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) + (((((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer))))));
 signed long int stepLocal_2 = - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 if (63.8 > (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))) {
  if (stepLocal_2 <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)));
  } else {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = ((((((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? (((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))));
  }
 }
 (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
}
void updateVariables(void) {
 double_Array_0[1][0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0][0] >= 4611686.018427383000e+12F && double_Array_0[1][0][0] <= -1.0e-20F) || (double_Array_0[1][0][0] <= 9223372.036854766000e+12F && double_Array_0[1][0][0] >= 1.0e-20F ));
 double_Array_0[0][1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1][0] >= -461168.6018427383000e+13F && double_Array_0[0][1][0] <= -1.0e-20F) || (double_Array_0[0][1][0] <= 4611686.018427383000e+12F && double_Array_0[0][1][0] >= 1.0e-20F ));
 double_Array_0[1][1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1][0] >= 0.0F && double_Array_0[1][1][0] <= -1.0e-20F) || (double_Array_0[1][1][0] <= 9223372.036854766000e+12F && double_Array_0[1][1][0] >= 1.0e-20F ));
 double_Array_0[0][0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0][1] >= 0.0F && double_Array_0[0][0][1] <= -1.0e-20F) || (double_Array_0[0][0][1] <= 4611686.018427383000e+12F && double_Array_0[0][0][1] >= 1.0e-20F ));
 double_Array_0[0][1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1][1] >= -922337.2036854766000e+13F && double_Array_0[0][1][1] <= -1.0e-20F) || (double_Array_0[0][1][1] <= 9223372.036854766000e+12F && double_Array_0[0][1][1] >= 1.0e-20F ));
 double_Array_0[1][1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1][1] >= -461168.6018427383000e+13F && double_Array_0[1][1][1] <= -1.0e-20F) || (double_Array_0[1][1][1] <= 4611686.018427383000e+12F && double_Array_0[1][1][1] >= 1.0e-20F ));
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
 unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65535);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65535);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
 unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) ^ ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) <= -64) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) 16))) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) >= 4) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) == ((double) ((((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))))) < ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer))))))) : 1) : 1)) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) + (((((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer))))))))) && ((63.8 > (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))) ? (((- (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) ((((((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? (((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))))) : 1)) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))
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
