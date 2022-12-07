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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch71Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 1, 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
signed char signed_char_Array_0[3] = {
 -4, -10, 5
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
unsigned char unsigned_char_Array_0[5] = {
 128, 32, 8, 8, 16
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[3]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[4]);
unsigned long int unsigned_long_int_Array_0[1] = {
 2
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2] = {
 1, 1
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
 signed long int stepLocal_0 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = ((((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) > (50)) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : (50)))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? (((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) > (50)) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : (50)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))));
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && stepLocal_1) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
  } else {
   if (stepLocal_0 < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) {
    (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
   } else {
    (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = 5;
   }
  }
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))));
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)));
 }
 (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
 if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) <= (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) > (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))))) {
  if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) / (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) * ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = 128;
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -128);
 assume_abort_if_not(signed_char_Array_0[1] <= 127);
 assume_abort_if_not(signed_char_Array_0[1] != 0);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -127);
 assume_abort_if_not(signed_char_Array_0[2] <= 126);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 127);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
}
void updateLastVariables() {
}
int property() {
 return (((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) ((((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) > (50)) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : (50)))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? (((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) > (50)) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : (50)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))))) : (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) 5))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))))))) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) <= (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) > (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))))) ? ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) / (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) * ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) 128)) : 1) : 1)) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))))
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
