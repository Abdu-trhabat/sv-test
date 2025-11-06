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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch101Wrapper_AP.c", 13, "reach_error"); }
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
 1, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[5] = {
 9999999999.25, 64.2, 16.25, 127.5, 4.4
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
unsigned char unsigned_char_Array_0[2][3] = {
 {200, 0, 128}, {1, 2, 64}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[1][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[0][2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[1][2]);
unsigned short int unsigned_short_int_Array_0[1] = {
 5
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + 128;
 unsigned char stepLocal_0 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))));
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   if (stepLocal_0 > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) {
    if (stepLocal_1 >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) {
     (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
    } else {
     (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) = 4;
    }
   } else {
    (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer));
   }
  } else {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
  }
 }
 if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) {
  (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) < ((((((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) < ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) > ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) < ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) : ((((((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) < ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) > ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) < ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))))));
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = 2.5;
  } else {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
  }
 }
 if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) > (-1000 % ((((16) < 0 ) ? -(16) : (16))))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer));
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = 32;
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854766000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= -922337.2036854766000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= -922337.2036854766000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= -922337.2036854766000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854766000e+12F && double_Array_0[4] >= 1.0e-20F ));
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 31);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 32);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 64);
 unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][2] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0][2] <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + 128) >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) == ((unsigned char) 4))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) < ((((((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) < ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) > ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) < ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) : ((((((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) < ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) > ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((((((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) < ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) 2.5)) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))))) && ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) > (-1000 % ((((16) < 0 ) ? -(16) : (16))))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) 32)))
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
