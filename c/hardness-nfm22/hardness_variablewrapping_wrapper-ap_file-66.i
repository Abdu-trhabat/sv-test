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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch66Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
signed long int signed_long_int_Array_0[1] = {
 -1000000
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2][3] = {
 {0, 0, 2}, {32, 2, 100}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[1][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[0][2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[1][2]);
unsigned long int unsigned_long_int_Array_0[1] = {
 10
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[3] = {
 38382, 10000, 8
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);
signed long int last_1_signed_long_int_Array_0_0_ = -1000000;
unsigned char last_1_unsigned_char_Array_0_0__1_ = 0;
void initially(void) {
}
void step(void) {
 (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer));
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 unsigned char stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer));
 unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
 if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) > last_1_unsigned_char_Array_0_0__1_) || stepLocal_0) {
  if (last_1_unsigned_char_Array_0_0__1_ != stepLocal_1) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
  } else {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) > ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))))))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) : ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))))))));
  }
 }
 if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) + (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))) + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))));
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)));
 }
 if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + 16);
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) <= last_1_signed_long_int_Array_0_0_)) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
  }
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 127);
 unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][2] <= 254);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 8191);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 16383);
}
void updateLastVariables() {
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
 last_1_unsigned_char_Array_0_0__1_ = unsigned_char_Array_0[0][1];
}
int property() {
 return ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) + (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))) + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))))) && ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) > last_1_unsigned_char_Array_0_0__1_) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((last_1_unsigned_char_Array_0_0__1_ != (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) > ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))))))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) : ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))))))))))) : 1)) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + 16))) : (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) <= last_1_signed_long_int_Array_0_0_)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))
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
