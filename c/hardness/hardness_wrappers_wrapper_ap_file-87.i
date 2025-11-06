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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch87Wrapper_AP.c", 13, "reach_error"); }
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
signed char signed_char_Array_0[5] = {
 16, 8, 0, 10, -128
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
signed long int signed_long_int_Array_0[2] = {
 8, 10
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[2][2] = {
 {64, 3164414017}, {128, 1}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1]);
void initially(void) {
}
void step(void) {
 (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
 (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) = (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) < 0 ) ? -((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))));
 }
 unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
 signed long int stepLocal_0 = -8;
 if (stepLocal_0 < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
  if (stepLocal_1 != (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) - ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) < ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))));
  } else {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = -8;
  }
 } else {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
 }
 if (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) * (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
  if (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - ((((-1) < 0 ) ? -(-1) : (-1)))) <= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) * (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)));
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
  }
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 63);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= 0);
 assume_abort_if_not(signed_char_Array_0[1] <= 63);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= 0);
 assume_abort_if_not(signed_char_Array_0[2] <= 63);
 signed_char_Array_0[3] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[3] >= -126);
 assume_abort_if_not(signed_char_Array_0[3] <= 126);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 2147483647);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) == ((unsigned long int) (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) < 0 ) ? -((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))))) : 1) && ((-8 < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) != (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) - ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) < ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) -8))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))))) && ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) * (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - ((((-1) < 0 ) ? -(-1) : (-1)))) <= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) * (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))
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
