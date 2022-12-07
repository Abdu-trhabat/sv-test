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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch88Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
float float_Array_0[2] = {
 1000000.5, 4.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed char signed_char_Array_0[2][2] = {
 {100, -1}, {-50, -8}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed long int signed_long_int_Array_0[1] = {
 64
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[1] = {
 -16
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2] = {
 0, 128
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[2][2] = {
 {1191097264, 25}, {1801344522, 2568920345}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1]);
signed short int last_1_signed_short_int_Array_0_0_ = -16;
unsigned char last_1_unsigned_char_Array_0_0_ = 0;
unsigned long int last_1_unsigned_long_int_Array_0_0__1_ = 25;
void initially(void) {
}
void step(void) {
 if (((last_1_signed_short_int_Array_0_0_ | last_1_unsigned_long_int_Array_0_0__1_) > last_1_unsigned_char_Array_0_0_) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
  } else {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
  }
 } else {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))));
 }
 if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) <= (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))));
 }
 (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = 2;
 (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
 (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 unsigned char stepLocal_0 = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) < (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
 if (stepLocal_0 && ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))) == (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - ((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) - 1u));
 } else {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0] >= -127);
 assume_abort_if_not(signed_char_Array_0[0][0] <= 126);
 signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][1] >= -127);
 assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 1073741823);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 2147483647);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 1073741823);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 2147483647);
 unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 4294967294);
}
void updateLastVariables() {
 last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
 last_1_unsigned_char_Array_0_0_ = unsigned_char_Array_0[0];
 last_1_unsigned_long_int_Array_0_0__1_ = unsigned_long_int_Array_0[0][1];
}
int property() {
 return (((((((((last_1_signed_short_int_Array_0_0_ | last_1_unsigned_long_int_Array_0_0__1_) > last_1_unsigned_char_Array_0_0_) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))))) : 1)) && ((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) < (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) && ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))) == (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - ((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) - 1u)))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))))) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) <= (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))))) : 1)) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) 2))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))
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
