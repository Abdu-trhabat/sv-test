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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch27Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
signed long int signed_long_int_Array_0[2][3] = {
 {10, 64, 5}, {25, 0, 0}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[0][2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer = &(signed_long_int_Array_0[1][2]);
unsigned char unsigned_char_Array_0[1] = {
 2
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned long int unsigned_long_int_Array_0[3] = {
 128, 2648415615, 500
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
void initially(void) {
}
void step(void) {
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)));
 }
 unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer));
 if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) > stepLocal_1) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) + ((((-4) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) ? (-4) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))))));
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
  }
 }
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if (32 >= stepLocal_0) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) + ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))));
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)));
 }
 signed long int stepLocal_2 = (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  if ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) * 128) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) != stepLocal_2) {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)));
  } else {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
  }
 } else {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 1073741823);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 1073741823);
 signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1][1] <= 1073741823);
 signed_long_int_Array_0[0][2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][2] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[0][2] <= 1073741823);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 assume_abort_if_not(unsigned_char_Array_0[0] != 0);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
}
void updateLastVariables() {
}
int property() {
 return ((((32 >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) == ((signed long int) ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) + ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) == ((signed long int) ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))))) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))))) : 1)) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) + ((((-4) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) ? (-4) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) : 1))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) * 128) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) != ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)))))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))
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
