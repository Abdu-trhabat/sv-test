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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
double double_Array_0[2] = {
 9.2, 0.975
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
signed long int signed_long_int_Array_0[1] = {
 -16
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[2] = {
 1, 100
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
unsigned char unsigned_char_Array_0[3] = {
 32, 4, 10
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
double last_1_double_Array_0_0_ = 9.2;
signed long int last_1_signed_long_int_Array_0_0_ = -16;
signed short int last_1_signed_short_int_Array_0_0_ = 1;
unsigned char last_1_unsigned_char_Array_0_2_ = 10;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = last_1_double_Array_0_0_ > last_1_double_Array_0_0_;
 if (((last_1_signed_short_int_Array_0_0_ + last_1_unsigned_char_Array_0_2_) < 10) || stepLocal_0) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + last_1_signed_short_int_Array_0_0_) - ((((last_1_signed_long_int_Array_0_0_) > (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_long_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_))))) > (last_1_unsigned_char_Array_0_2_)) ? ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + last_1_signed_short_int_Array_0_0_) - ((((last_1_signed_long_int_Array_0_0_) > (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_long_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_))))) : (last_1_unsigned_char_Array_0_2_)));
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = last_1_signed_short_int_Array_0_0_;
 }
 (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
 if ((10 << (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)));
 }
 (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = 64;
 (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
 if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) <= 16) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 } else {
  if ((((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) < (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) {
   if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
    (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
   } else {
    (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
   }
  } else {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854765600e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
}
void updateLastVariables() {
 last_1_double_Array_0_0_ = double_Array_0[0];
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
 last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
 last_1_unsigned_char_Array_0_2_ = unsigned_char_Array_0[2];
}
int property() {
 return (((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) <= 16) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : (((((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) < (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))) && (((10 << (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))) : 1)) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) 64))) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) && ((((last_1_signed_short_int_Array_0_0_ + last_1_unsigned_char_Array_0_2_) < 10) || (last_1_double_Array_0_0_ > last_1_double_Array_0_0_)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + last_1_signed_short_int_Array_0_0_) - ((((last_1_signed_long_int_Array_0_0_) > (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_long_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_))))) > (last_1_unsigned_char_Array_0_2_)) ? ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + last_1_signed_short_int_Array_0_0_) - ((((last_1_signed_long_int_Array_0_0_) > (last_1_signed_short_int_Array_0_0_)) ? (last_1_signed_long_int_Array_0_0_) : (last_1_signed_short_int_Array_0_0_))))) : (last_1_unsigned_char_Array_0_2_))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) last_1_signed_short_int_Array_0_0_)))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))
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
