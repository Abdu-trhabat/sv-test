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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch84Wrapper_AP.c", 13, "reach_error"); }
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
float float_Array_0[2] = {
 10000000000000.926, 1000000.6
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed long int signed_long_int_Array_0[2] = {
 256, 2
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed short int signed_short_int_Array_0[3] = {
 -4, 128, 28020
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
unsigned char unsigned_char_Array_0[7] = {
 128, 0, 5, 8, 64, 25, 128
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[3]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[4]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[5]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer = &(unsigned_char_Array_0[6]);
unsigned short int unsigned_short_int_Array_0[2] = {
 64, 27843
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) != stepLocal_0) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) + (((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))));
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer));
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + 23103) - (32 + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))));
 }
 if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) {
  if (((- 8) / ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))));
  }
 }
 if (! ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) > (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (32 - 8);
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)));
 }
 (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= 16383);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 32766);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 1);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 126);
 assume_abort_if_not(unsigned_char_Array_0[2] != 127);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
 unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[4] <= 127);
 unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[5] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[5] <= 127);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) != (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)) + (((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + 23103) - (32 + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))))) : 1)) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) ? ((((- 8) / ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))))) : 1) : 1)) && ((! ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) > (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (32 - 8))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))
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
