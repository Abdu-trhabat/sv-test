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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch0Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[2][2] = {
 {5.25, 128.2}, {15.4, 25.8}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
unsigned char unsigned_char_Array_0[2] = {
 1, 100
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[1] = {
 5
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
double last_1_double_Array_0_0__0_ = 5.25;
unsigned char last_1_unsigned_char_Array_0_1_ = 100;
unsigned short int last_1_unsigned_short_int_Array_0_0_ = 5;
void initially(void) {
}
void step(void) {
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) * ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - 5.3)) <= last_1_double_Array_0_0__0_) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = last_1_unsigned_char_Array_0_1_;
  }
 }
 if ((last_1_unsigned_short_int_Array_0_0_ + last_1_unsigned_short_int_Array_0_0_) < last_1_unsigned_short_int_Array_0_0_) {
  if (last_1_unsigned_short_int_Array_0_0_ > last_1_unsigned_short_int_Array_0_0_) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
  }
 }
 if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)));
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = ((((16.2) < ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? (16.2) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))));
 }
 if (((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) + ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) != (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
   if ((- (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) <= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) {
    if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
     (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
    }
   } else {
    (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
   }
  } else {
   (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
  }
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
 }
}
void updateVariables() {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854765600e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854765600e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}
void updateLastVariables() {
 last_1_double_Array_0_0__0_ = double_Array_0[0][0];
 last_1_unsigned_char_Array_0_1_ = unsigned_char_Array_0[1];
 last_1_unsigned_short_int_Array_0_0_ = unsigned_short_int_Array_0[0];
}
int property() {
 return ((((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) ((((16.2) < ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? (16.2) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))))) && ((((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) + ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) != (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? (((- (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) <= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) : 1) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))) && (((last_1_unsigned_short_int_Array_0_0_ + last_1_unsigned_short_int_Array_0_0_) < last_1_unsigned_short_int_Array_0_0_) ? ((last_1_unsigned_short_int_Array_0_0_ > last_1_unsigned_short_int_Array_0_0_) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : 1) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) * ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - 5.3)) <= last_1_double_Array_0_0__0_) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) last_1_unsigned_char_Array_0_1_)) : 1) : 1)
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
