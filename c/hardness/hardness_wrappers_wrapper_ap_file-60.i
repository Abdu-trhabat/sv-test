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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch60Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[2][2] = {
 {2.5, 64.25}, {31.2, 9999.6}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
float float_Array_0[7] = {
 10.5, 4.4, 64.8, 5.8, 32.902, 8.6, 999.375
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[3]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[4]);
float* float_Array_0_arrayfloat_Array_0arrayVar5_Pointer = &(float_Array_0[5]);
float* float_Array_0_arrayfloat_Array_0arrayVar6_Pointer = &(float_Array_0[6]);
signed long int signed_long_int_Array_0[2] = {
 10, 1
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
unsigned char unsigned_char_Array_0[1] = {
 2
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
void initially(void) {
}
void step(void) {
 (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)));
 if ((- (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
  if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) {
   if ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) {
    (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (256 - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + 5));
   } else {
    (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
   }
  }
 }
 unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && stepLocal_0) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) = (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))) + ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) + ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)))));
 }
 (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = 500.25;
 if ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   if ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) <= (((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))))) {
    (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)));
   }
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854766000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854766000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -230584.3009213691400e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 2305843.009213691400e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -115292.1504606845700e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 1152921.504606845700e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 4611686.018427383000e+12F && float_Array_0[2] >= 1.0e-20F ));
 float_Array_0[4] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 4611686.018427383000e+12F && float_Array_0[4] >= 1.0e-20F ));
 float_Array_0[6] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[6] >= -115292.1504606845700e+13F && float_Array_0[6] <= -1.0e-20F) || (float_Array_0[6] <= 1152921.504606845700e+12F && float_Array_0[6] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) && (((- (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (256 - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + 5)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) : 1) : 1)) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) == ((float) (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))) + ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) + ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer))))))) : 1)) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) 500.25))) && (((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) <= (((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))) : 1) : 1) : ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))
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
