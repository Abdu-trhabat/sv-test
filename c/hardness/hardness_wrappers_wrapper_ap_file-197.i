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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch197Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {0, 0}, {0, 0}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
signed short int signed_short_int_Array_0[2][3] = {
 {10, -5, 2}, {-100, 10, 0}
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[0][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[1][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[0][2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer = &(signed_short_int_Array_0[1][2]);
unsigned char unsigned_char_Array_0[3] = {
 0, 2, 64
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[2] = {
 0, 8
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[2] = {
 1, 59616
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int last_1_unsigned_short_int_Array_0_0_ = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_unsigned_short_int_Array_0_0_;
 if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) < stepLocal_0) {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
  } else {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)));
  }
 }
 unsigned char stepLocal_1 = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) >> (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
 if (stepLocal_1 || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (((((200 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) < 0 ) ? -(200 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : (200 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)));
 }
 if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) = (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) < ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) < (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) : (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) : ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) < (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) : (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))))))));
 }
 if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) > (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)))))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)));
 } else {
  if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) * (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
  } else {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = 8;
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 0);
 signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0][0] <= 32767);
 signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][0] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[1][0] <= 16383);
 signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][1] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[0][1] <= 16383);
 signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][1] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[1][1] <= 32766);
 signed_short_int_Array_0[0][2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][2] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[0][2] <= 32766);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 14);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 127);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 49150);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}
void updateLastVariables(void) {
 last_1_unsigned_short_int_Array_0_0_ = unsigned_short_int_Array_0[0];
}
int property(void) {
 return (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) == ((signed short int) (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) < ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) < (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) : (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))) : ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) < (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) : (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))))))))) : 1) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) < last_1_unsigned_short_int_Array_0_0_) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)))))) : 1)) && (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) >> (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (((((200 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) < 0 ) ? -(200 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : (200 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))) : 1)) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) > (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)))))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) * (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) 8))))
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
