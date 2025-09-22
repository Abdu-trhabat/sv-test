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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch193Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
double double_Array_0[5] = {
 0.4, 99999999999.5, 128.8, 31.5, 50.875
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
signed long int signed_long_int_Array_0[1] = {
 4
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[3] = {
 -25, 128, 4
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
unsigned char unsigned_char_Array_0[3] = {
 16, 5, 50
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[1] = {
 100000
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
signed long int last_1_signed_long_int_Array_0_0_ = 4;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 unsigned char stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
 unsigned char stepLocal_0 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == stepLocal_0) {
  if (stepLocal_1 > (((((- (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) ? ((- (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) {
   if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) * ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) * -5)) > stepLocal_2) {
    (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
   }
  } else {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
  }
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 }
 (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = 4;
 (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (((((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))) > (last_1_signed_long_int_Array_0_0_)) ? ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))) : (last_1_signed_long_int_Array_0_0_))));
 }
 signed short int stepLocal_4 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
 unsigned long int stepLocal_3 = 16u;
 if (stepLocal_4 > 64) {
  (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)));
 } else {
  if (stepLocal_3 == ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) / (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)));
  } else {
   (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer));
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -461168.6018427383000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 4611686.018427383000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= -461168.6018427383000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 4611686.018427383000e+12F && double_Array_0[4] >= 1.0e-20F ));
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 255);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 assume_abort_if_not(unsigned_long_int_Array_0[0] != 0);
}
void updateLastVariables(void) {
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
}
int property(void) {
 return ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) > (((((- (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) ? ((- (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) ? ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) * ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) * -5)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : 1) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (((((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))) > (last_1_signed_long_int_Array_0_0_)) ? ((((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))) : (last_1_signed_long_int_Array_0_0_)))))) : 1)) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) > 64) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) : ((16u == ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) / (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))))))) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) 4))) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))
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
