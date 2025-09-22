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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch33Wrapper_AP.c", 13, "reach_error"); }
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
 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
float float_Array_0[5] = {
 49.5, 256.5, -0.25, 0.30000000000000004, 0.4
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[3]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[4]);
signed long int signed_long_int_Array_0[3] = {
 -8, -256, 100
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed short int signed_short_int_Array_0[3] = {
 0, 4, -10
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
unsigned char unsigned_char_Array_0[2] = {
 32, 200
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
signed long int last_1_signed_long_int_Array_0_0_ = -8;
signed long int last_1_signed_long_int_Array_0_1_ = -256;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (last_1_signed_long_int_Array_0_1_ ^ last_1_signed_long_int_Array_0_0_) + last_1_signed_long_int_Array_0_0_;
 if (stepLocal_0 < -1) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = 8;
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = (128 - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))));
 }
 (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer));
 (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
 if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + 1);
 }
 if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) & ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) | (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = (((((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))));
 }
 signed short int stepLocal_1 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
 if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 } else {
  if (stepLocal_1 > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer));
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427383000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -461168.6018427383000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 4611686.018427383000e+12F && float_Array_0[2] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= 0.0F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 4611686.018427383000e+12F && float_Array_0[3] >= 1.0e-20F ));
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 16383);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
}
void updateLastVariables(void) {
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
 last_1_signed_long_int_Array_0_1_ = signed_long_int_Array_0[1];
}
int property(void) {
 return ((((((((last_1_signed_long_int_Array_0_1_ ^ last_1_signed_long_int_Array_0_0_) + last_1_signed_long_int_Array_0_0_) < -1) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) 8)) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) (128 - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))))) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + 1))) : 1)) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) & ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) | (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) (((((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))))) : 1)) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))
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
