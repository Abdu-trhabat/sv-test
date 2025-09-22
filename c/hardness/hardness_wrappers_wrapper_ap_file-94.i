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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch94Wrapper_AP.c", 13, "reach_error"); }
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
 0, 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
double double_Array_0[5] = {
 63.75, 3.7, 63.4, 0.0, 63.4
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
float float_Array_0[2] = {
 3.75, 25.2
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed char signed_char_Array_0[2][3] = {
 {-32, -64, -4}, {2, 5, -25}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[0][2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer = &(signed_char_Array_0[1][2]);
signed long int signed_long_int_Array_0[1] = {
 -2
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2] = {
 2, 16
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
void initially(void) {
}
void step(void) {
 if ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) != (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
  (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)));
 }
 if ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) {
  if ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
  } else {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
  }
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
 } else {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))))) + ((*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))));
 }
 signed char stepLocal_0 = (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer));
 if ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) {
  if ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) != ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) {
   if (((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) % ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) > stepLocal_0) {
    (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = -64;
   }
  }
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 assume_abort_if_not(double_Array_0[0] != 0.0F);
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427383000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= 4611686.018427383000e+12F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0] >= -127);
 assume_abort_if_not(signed_char_Array_0[0][0] <= 126);
 signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0] >= -63);
 assume_abort_if_not(signed_char_Array_0[1][0] <= 63);
 signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][1] >= -31);
 assume_abort_if_not(signed_char_Array_0[1][1] <= 31);
 signed_char_Array_0[0][2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][2] >= -63);
 assume_abort_if_not(signed_char_Array_0[0][2] <= 63);
 signed_char_Array_0[1][2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][2] >= -31);
 assume_abort_if_not(signed_char_Array_0[1][2] <= 32);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 1);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 128);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) != (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) : 1) && (((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : 1)) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))))) + ((*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))))))) && (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) != ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) % ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) > (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) -64)) : 1) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))))
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
