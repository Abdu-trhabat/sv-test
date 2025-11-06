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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch196Wrapper_AP.c", 13, "reach_error"); }
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
signed char signed_char_Array_0[5] = {
 -5, -128, -16, 5, -2
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
unsigned short int unsigned_short_int_Array_0[7] = {
 2, 47567, 2, 16876, 19354, 256, 8
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[3]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer = &(unsigned_short_int_Array_0[4]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer = &(unsigned_short_int_Array_0[5]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer = &(unsigned_short_int_Array_0[6]);
void initially(void) {
}
void step(void) {
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)) = (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) > (100)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : (100)));
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)) = (((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))))) - 32) + 10);
 }
 unsigned short int stepLocal_1 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer));
 unsigned short int stepLocal_0 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer));
 if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)) <= stepLocal_1) {
  if (stepLocal_0 >= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = ((((((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))) < ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))) ? (((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))) : ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))));
  }
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer));
 }
 if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) <= (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) < 0 ) ? -((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))))) {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (10 - (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)));
 } else {
  if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) + (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) < ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))));
  } else {
   if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
    (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = 64;
   } else {
    (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer));
   }
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -63);
 assume_abort_if_not(signed_char_Array_0[0] <= 63);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -63);
 assume_abort_if_not(signed_char_Array_0[2] <= 63);
 signed_char_Array_0[3] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[3] >= 0);
 assume_abort_if_not(signed_char_Array_0[3] <= 126);
 signed_char_Array_0[4] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[4] >= -63);
 assume_abort_if_not(signed_char_Array_0[4] <= 63);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
 unsigned_short_int_Array_0[3] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[3] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[3] <= 32767);
 unsigned_short_int_Array_0[4] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[4] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[4] <= 32767);
 unsigned_short_int_Array_0[5] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[5] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[5] <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)) == ((unsigned short int) (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) > (100)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : (100))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)) == ((unsigned short int) (((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))))) - 32) + 10)))) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)) <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)) >= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) ((((((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))) < ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))) ? (((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))) : ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))))))) : 1) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))))) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) <= (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) < 0 ) ? -((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (10 - (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) : ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) + (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) < ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) 64)) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))))))
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
