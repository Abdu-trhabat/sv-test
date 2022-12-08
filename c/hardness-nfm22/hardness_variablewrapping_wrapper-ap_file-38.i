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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch38Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 0, 0, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
double double_Array_0[5] = {
 32.71, 31.2, 0.4, 7.25, 7.75
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
unsigned long int unsigned_long_int_Array_0[2] = {
 1771558822, 16
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[3][3] = {
 {32, 20114, 52902}, {16773, 32, 56507}, {25, 8, 0}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer = &(unsigned_short_int_Array_0[1][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer = &(unsigned_short_int_Array_0[2][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer = &(unsigned_short_int_Array_0[0][2]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var7_Pointer = &(unsigned_short_int_Array_0[1][2]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var8_Pointer = &(unsigned_short_int_Array_0[2][2]);
void initially(void) {
}
void step(void) {
 (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var8_Pointer)) = ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var7_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var7_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer))))) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)));
 unsigned short int stepLocal_0 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var7_Pointer));
 if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) > stepLocal_0) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer))) + 2144048120u) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var7_Pointer)));
 }
 (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) + ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))));
 if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)) - ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))));
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = ((27636 + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) - (((((16853 - 10)) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) ? ((16853 - 10)) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))))));
  } else {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer));
  }
 }
 unsigned char stepLocal_1 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
 if (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) && stepLocal_1) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)));
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
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -230584.3009213691390e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 2305843.009213691390e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -461168.6018427382800e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427382800e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= -115292.1504606845700e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 1152921.504606845700e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= -115292.1504606845700e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 1152921.504606845700e+12F && double_Array_0[4] >= 1.0e-20F ));
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 1610612735);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 2147483647);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 16384);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 32767);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
 unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 16383);
 unsigned_short_int_Array_0[2][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[2][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[2][1] <= 32767);
 unsigned_short_int_Array_0[0][2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] <= 65534);
 unsigned_short_int_Array_0[1][2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][2] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[1][2] <= 65534);
}
void updateLastVariables() {
}
int property() {
 return (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var8_Pointer)) == ((unsigned short int) ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var7_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var7_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer))))) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))))) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)) > (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var7_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer))) + 2144048120u) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var7_Pointer))))) : 1)) && ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) + ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))))))) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer)) - ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) ((27636 + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) - (((((16853 - 10)) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) ? ((16853 - 10)) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var6_Pointer))))))) && ((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))))) : 1)
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
