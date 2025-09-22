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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch63Wrapper_AP.c", 13, "reach_error"); }
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
float float_Array_0[2][2] = {
 {9.8, 2.25}, {10.3, 8.3}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed char signed_char_Array_0[7] = {
 32, 16, 16, 25, -10, 1, 0
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer = &(signed_char_Array_0[5]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer = &(signed_char_Array_0[6]);
signed long int signed_long_int_Array_0[5] = {
 -256, 32, 2, 128, 256
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[4]);
signed short int signed_short_int_Array_0[1] = {
 256
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned long int unsigned_long_int_Array_0[2] = {
 1, 32
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
void initially(void) {
}
void step(void) {
 if ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) <= ((((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) * (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) = ((((((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))))) > ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) < 0 ) ? -((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))) ? (((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))))) : ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) < 0 ) ? -((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))));
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
 }
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer));
 if (stepLocal_0 != (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))))) {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = ((((((10 + (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) < ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) ? ((10 + (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) - ((32 - (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer))) + (((((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))));
 }
 (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
 (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
 (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
 if (((((1.1f) < ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))) ? (1.1f) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854776000e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854776000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= -922337.2036854776000e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 63);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= 0);
 assume_abort_if_not(signed_char_Array_0[2] <= 63);
 signed_char_Array_0[3] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[3] >= -1);
 assume_abort_if_not(signed_char_Array_0[3] <= 126);
 signed_char_Array_0[5] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[5] >= 0);
 assume_abort_if_not(signed_char_Array_0[5] <= 31);
 signed_char_Array_0[6] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[6] >= 0);
 assume_abort_if_not(signed_char_Array_0[6] <= 63);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483646);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 1073741823);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 1073741823);
 signed_long_int_Array_0[4] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[4] >= -2147483647);
 assume_abort_if_not(signed_long_int_Array_0[4] <= 2147483646);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((((1.1f) < ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))) ? (1.1f) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : 1) && (((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) <= ((((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) * (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) == ((signed long int) ((((((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))))) > ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) < 0 ) ? -((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))) ? (((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))))) : ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) < 0 ) ? -((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))))))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) != (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) ((((((10 + (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) < ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) ? ((10 + (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) - ((32 - (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer))) + (((((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))))))) : 1)) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))
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
