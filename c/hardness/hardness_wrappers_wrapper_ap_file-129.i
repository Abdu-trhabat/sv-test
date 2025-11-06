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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch129Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 1, 1, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
double double_Array_0[5] = {
 10.5, 8.05, 1.8, 4.7, 50.2
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
signed char signed_char_Array_0[2] = {
 25, 4
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed long int signed_long_int_Array_0[1] = {
 -100000000
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2][2] = {
 {47589, 4}, {0, 0}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[1][1]);
signed long int last_1_signed_long_int_Array_0_0_ = -100000000;
unsigned short int last_1_unsigned_short_int_Array_0_1__1_ = 0;
void initially(void) {
}
void step(void) {
 signed char stepLocal_0 = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
 if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  if (stepLocal_0 > (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)));
  } else {
   if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
    (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
   }
  }
 } else {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
 }
 if (last_1_signed_long_int_Array_0_0_ > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
 }
 signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
  if (((((5) > (last_1_unsigned_short_int_Array_0_1__1_)) ? (5) : (last_1_unsigned_short_int_Array_0_1__1_))) < stepLocal_1) {
   if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
    (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
   } else {
    (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) = 1;
   }
  }
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
 }
 unsigned short int stepLocal_2 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
  if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) <= stepLocal_2) {
   if (((((10.4) < ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? (10.4) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) < ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) * (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))) {
    (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
   } else {
    (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = 64.6;
   }
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= -922337.2036854766000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= -922337.2036854776000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854776000e+12F && double_Array_0[3] >= 1.0e-20F ));
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= -922337.2036854776000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854776000e+12F && double_Array_0[4] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -128);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -128);
 assume_abort_if_not(signed_char_Array_0[1] <= 127);
 unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65535);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65534);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
}
void updateLastVariables(void) {
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
 last_1_unsigned_short_int_Array_0_1__1_ = unsigned_short_int_Array_0[1][1];
}
int property(void) {
 return ((((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) > (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))))) : ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))) : 1)) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((((((5) > (last_1_unsigned_short_int_Array_0_1__1_)) ? (5) : (last_1_unsigned_short_int_Array_0_1__1_))) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) == ((unsigned short int) 1))) : 1) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))))) && ((last_1_signed_long_int_Array_0_0_ > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))) ? ((((((10.4) < ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? (10.4) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) < ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) * (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) 64.6))) : 1) : 1)
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
