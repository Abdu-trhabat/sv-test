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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch149Wrapper_AP.c", 13, "reach_error"); }
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
 1, 1, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
double double_Array_0[2] = {
 128.5, 32.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
signed char signed_char_Array_0[1] = {
 -2
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
unsigned long int unsigned_long_int_Array_0[1] = {
 64
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[3] = {
 25, 52712, 4
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 64;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = 4;
 unsigned short int stepLocal_1 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
 unsigned short int stepLocal_0 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)));
 } else {
  if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == stepLocal_1) {
   if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) < stepLocal_2) {
    (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
   } else {
    if ((- 4) < stepLocal_0) {
     (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))));
    } else {
     (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
    }
   }
  } else {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
  }
 }
 unsigned short int stepLocal_4 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
 unsigned short int stepLocal_3 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
 if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) < stepLocal_4) {
  if (last_1_unsigned_long_int_Array_0_0_ < stepLocal_3) {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + last_1_unsigned_long_int_Array_0_0_);
  } else {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = last_1_unsigned_long_int_Array_0_0_;
  }
 }
 unsigned char stepLocal_6 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
 unsigned long int stepLocal_5 = ~ ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)));
 if (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) % (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) < stepLocal_5) {
  if (stepLocal_6 && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
  }
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
 }
}
void updateVariables(void) {
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
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854766000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -128);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 assume_abort_if_not(signed_char_Array_0[0] != 0);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}
void updateLastVariables(void) {
 last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}
int property(void) {
 return (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) : (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) < 4) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) : (((- 4) < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) ? ((last_1_unsigned_long_int_Array_0_0_ < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + last_1_unsigned_long_int_Array_0_0_))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) last_1_unsigned_long_int_Array_0_0_))) : 1)) && ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) % (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) < (~ ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : 1) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))
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
