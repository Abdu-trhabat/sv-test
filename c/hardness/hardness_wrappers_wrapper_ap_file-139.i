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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch139Wrapper_AP.c", 13, "reach_error"); }
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
 {128.5, 10.45}, {10.3, 49.6}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
signed char signed_char_Array_0[1] = {
 -4
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed short int signed_short_int_Array_0[3] = {
 8, 64, 32
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
unsigned char unsigned_char_Array_0[2][3] = {
 {64, 0, 100}, {200, 0, 0}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[1][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[0][2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[1][2]);
double last_1_double_Array_0_1__0_ = 10.3;
double last_1_double_Array_0_0__1_ = 10.45;
void initially(void) {
}
void step(void) {
 if (((((last_1_double_Array_0_1__0_) < (((((last_1_double_Array_0_0__1_) < 0 ) ? -(last_1_double_Array_0_0__1_) : (last_1_double_Array_0_0__1_))))) ? (last_1_double_Array_0_1__0_) : (((((last_1_double_Array_0_0__1_) < 0 ) ? -(last_1_double_Array_0_0__1_) : (last_1_double_Array_0_0__1_)))))) <= last_1_double_Array_0_0__1_) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = ((((32 - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) < 0 ) ? -(32 - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) : (32 - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))));
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
 }
 if (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) / (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) == ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) << (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))));
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 }
 unsigned char stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer));
 unsigned char stepLocal_0 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer));
 if (stepLocal_1 < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) {
  if (stepLocal_0 >= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = ((64.2 + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)));
  }
 }
 signed long int stepLocal_2 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) * (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer));
 if ((- (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) <= stepLocal_2) {
  (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer));
 }
}
void updateVariables(void) {
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= 0.0F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 4611686.018427383000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -128);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 assume_abort_if_not(signed_char_Array_0[0] != 0);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 16383);
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 64);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 190);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 254);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 63);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 32);
 unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][2] <= 31);
}
void updateLastVariables(void) {
 last_1_double_Array_0_1__0_ = double_Array_0[1][0];
 last_1_double_Array_0_0__1_ = double_Array_0[0][1];
}
int property(void) {
 return ((((((((last_1_double_Array_0_1__0_) < (((((last_1_double_Array_0_0__1_) < 0 ) ? -(last_1_double_Array_0_0__1_) : (last_1_double_Array_0_0__1_))))) ? (last_1_double_Array_0_1__0_) : (((((last_1_double_Array_0_0__1_) < 0 ) ? -(last_1_double_Array_0_0__1_) : (last_1_double_Array_0_0__1_)))))) <= last_1_double_Array_0_0__1_) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) ((((32 - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) < 0 ) ? -(32 - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) : (32 - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) && ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) / (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) == ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) << (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) >= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) ((64.2 + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : 1) : 1)) && (((- (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) <= ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) * (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) : 1)
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
