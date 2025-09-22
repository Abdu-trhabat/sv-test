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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch61Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {0, 0}, {0, 0}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
double double_Array_0[1] = {
 32.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
float float_Array_0[2][2] = {
 {255.5, 49.4}, {255.5, 128.6}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed char signed_char_Array_0[1] = {
 0
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
unsigned char unsigned_char_Array_0[11] = {
 5, 100, 128, 64, 100, 8, 50, 8, 32, 64, 0
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[3]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[4]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[5]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer = &(unsigned_char_Array_0[6]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer = &(unsigned_char_Array_0[7]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var8_Pointer = &(unsigned_char_Array_0[8]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var9_Pointer = &(unsigned_char_Array_0[9]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var10_Pointer = &(unsigned_char_Array_0[10]);
unsigned short int unsigned_short_int_Array_0[1] = {
 64
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
void initially(void) {
}
void step(void) {
 if ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)));
 } else {
  if ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) >= (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
  } else {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
  }
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))));
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (((64 + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var8_Pointer))) + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var9_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)))) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var10_Pointer))));
 }
 unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || stepLocal_0) {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var9_Pointer));
 }
 (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
 (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var10_Pointer));
 (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = 0.010000000000000009;
 if ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) < (((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= -922337.2036854766000e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854766000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 254);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
 unsigned_char_Array_0[6] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[6] >= 32);
 assume_abort_if_not(unsigned_char_Array_0[6] <= 63);
 unsigned_char_Array_0[7] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[7] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[7] <= 64);
 unsigned_char_Array_0[8] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[8] >= 32);
 assume_abort_if_not(unsigned_char_Array_0[8] <= 63);
 unsigned_char_Array_0[9] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[9] >= 32);
 assume_abort_if_not(unsigned_char_Array_0[9] <= 64);
 unsigned_char_Array_0[10] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[10] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[10] <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) >= (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))))) && (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) < (((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (((64 + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var8_Pointer))) + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var9_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)))) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var7_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var10_Pointer)))))))) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var9_Pointer)))) : 1)) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var10_Pointer))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) 0.010000000000000009))
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
