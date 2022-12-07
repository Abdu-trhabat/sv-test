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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch74Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {1, 0}, {1, 1}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
double double_Array_0[5] = {
 9.3, 100.5, 31.6, 3.779, 63.25
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
unsigned long int unsigned_long_int_Array_0[5] = {
 1, 128, 3150951169, 64, 25
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[3]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[4]);
unsigned char last_1_BOOL_unsigned_char_Array_0_1__0_ = 1;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = last_1_BOOL_unsigned_char_Array_0_1__0_ && last_1_BOOL_unsigned_char_Array_0_1__0_;
 if (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) || stepLocal_0) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
 } else {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))));
 }
 unsigned char stepLocal_1 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
 if (stepLocal_1 && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) < (- (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer));
  } else {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer));
  }
 } else {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer));
 }
 if ((((((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))))) < ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) < (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) > (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) : (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))));
 } else {
  if ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) >= ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) {
   if ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > (- (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) {
    (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
   } else {
    (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
   }
  } else {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= -922337.2036854776000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854776000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= -922337.2036854776000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854776000e+12F && double_Array_0[3] >= 1.0e-20F ));
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= -922337.2036854776000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854776000e+12F && double_Array_0[4] >= 1.0e-20F ));
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 2147483647);
 unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[2] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[2] <= 4294967294);
 unsigned_long_int_Array_0[3] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[3] <= 4294967294);
}
void updateLastVariables() {
 last_1_BOOL_unsigned_char_Array_0_1__0_ = BOOL_unsigned_char_Array_0[1][0];
}
int property() {
 return ((((((((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))))) < ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) < (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) > (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) : (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))))))) : (((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) >= ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > (- (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))))) && ((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) || (last_1_BOOL_unsigned_char_Array_0_1__0_ && last_1_BOOL_unsigned_char_Array_0_1__0_)) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)))))))) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) < (- (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)))))
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
