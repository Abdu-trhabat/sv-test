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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double double_Array_0[2][2] = {
 {5.75, 10.2}, {1000000000000.5, 5.2}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
float float_Array_0[3] = {
 255.625, 63.8, 128.4
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed short int signed_short_int_Array_0[2][2] = {
 {64, 1}, {256, -16}
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[0][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[1][1]);
unsigned long int unsigned_long_int_Array_0[2][2] = {
 {2655377620, 1969456671}, {0, 16}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1]);
double last_1_double_Array_0_1__1_ = 5.2;
void initially(void) {
}
void step(void) {
 if (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * last_1_double_Array_0_1__1_) >= (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) {
  (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)));
 } else {
  if (last_1_double_Array_0_1__1_ <= (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
  } else {
   (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = 3.2;
  }
 }
 (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) < 0 ) ? -((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) < 0 ) ? -((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))));
 if (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) ^ (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) < (- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) {
  if ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) >= (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) {
   if ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) > (- (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) {
    (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
   }
  } else {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
  }
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
 }
 if ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) > (- (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))));
 }
}
void updateVariables(void) {
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= -461168.6018427383000e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 4611686.018427383000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= -461168.6018427383000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 4611686.018427383000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
 signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][0] >= -1);
 assume_abort_if_not(signed_short_int_Array_0[1][0] <= 32766);
 signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][1] >= -32766);
 assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
 signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][1] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[1][1] <= 32766);
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 4294967294);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 1073741823);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 2147483647);
 unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 1073741823);
}
void updateLastVariables(void) {
 last_1_double_Array_0_1__1_ = double_Array_0[1][1];
}
int property(void) {
 return ((((((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * last_1_double_Array_0_1__1_) >= (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : ((last_1_double_Array_0_1__1_ <= (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) 3.2)))) && (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) > (- (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))))) : 1)) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) < 0 ) ? -((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) < 0 ) ? -((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))))))) && ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) ^ (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) < (- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) >= (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) > (- (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) : 1) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))
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
