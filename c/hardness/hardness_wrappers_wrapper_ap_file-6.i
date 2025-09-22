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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double double_Array_0[2] = {
 1000000000000000.5, 4.25
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
float float_Array_0[2] = {
 100000000.5, 4.8
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed char signed_char_Array_0[1] = {
 2
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed long int signed_long_int_Array_0[3] = {
 2, 1, 256
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[3] = {
 4054687923, 32, 0
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned short int unsigned_short_int_Array_0[3] = {
 10, 32, 2
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);
unsigned long int last_1_unsigned_long_int_Array_0_2_ = 0;
void initially(void) {
}
void step(void) {
 if (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) >> ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) >= (((((last_1_unsigned_long_int_Array_0_2_ + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) ? ((last_1_unsigned_long_int_Array_0_2_ + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
 } else {
  if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) < 64) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
  }
 }
 if ((- (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) != (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))))));
 }
 unsigned long int stepLocal_1 = (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) / (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
 unsigned long int stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
 if (stepLocal_1 > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
  if (stepLocal_0 == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = 1000000000u;
  } else {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) = 128u;
  }
 }
 signed long int stepLocal_2 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if (stepLocal_2 == ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) | -5)) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = ((((1.5f) > ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? (1.5f) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))));
 }
}
void updateVariables(void) {
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 1);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 3);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 3);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
 assume_abort_if_not(unsigned_short_int_Array_0[1] != 0);
 unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[2] <= 65535);
}
void updateLastVariables(void) {
 last_1_unsigned_long_int_Array_0_2_ = unsigned_long_int_Array_0[2];
}
int property(void) {
 return ((((((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) / (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) 1000000000u)) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) == ((unsigned long int) 128u))) : 1) && ((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) >> ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) >= (((((last_1_unsigned_long_int_Array_0_2_ + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) ? ((last_1_unsigned_long_int_Array_0_2_ + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) : (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) < 64) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) : 1))) && (((- (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) != (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))))))) : 1)) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) | -5)) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) ((((1.5f) > ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? (1.5f) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))))) : 1)
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
