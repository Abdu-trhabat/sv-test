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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch126Wrapper_AP.c", 13, "reach_error"); }
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
float float_Array_0[2][2] = {
 {10.2, 16.5}, {9.75, 5.876}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed char signed_char_Array_0[7] = {
 -8, 32, 8, -8, -16, 100, 8
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer = &(signed_char_Array_0[5]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer = &(signed_char_Array_0[6]);
signed long int signed_long_int_Array_0[1] = {
 8
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if ((((*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)) / (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) != stepLocal_0) {
  if ((*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)) <= stepLocal_1) {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) = ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) < ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))));
  }
 } else {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
 }
 signed char stepLocal_3 = (*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer));
 signed char stepLocal_2 = (*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer));
 if (stepLocal_3 <= (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   if (stepLocal_2 <= (((((-128 % (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)))) ? ((-128 % (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)))))) {
    (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer));
   } else {
    (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
   }
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer));
 }
 signed long int stepLocal_5 = 50;
 unsigned char stepLocal_4 = (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
 if (! (5 < (*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)))) {
  if (stepLocal_4 && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   if (stepLocal_5 < (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) {
    (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
   }
  } else {
   (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = 16.2f;
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854766000e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854766000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854766000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854766000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -127);
 assume_abort_if_not(signed_char_Array_0[0] <= 126);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -63);
 assume_abort_if_not(signed_char_Array_0[1] <= 63);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -63);
 assume_abort_if_not(signed_char_Array_0[2] <= 63);
 signed_char_Array_0[3] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[3] >= -128);
 assume_abort_if_not(signed_char_Array_0[3] <= 127);
 signed_char_Array_0[4] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[4] >= -128);
 assume_abort_if_not(signed_char_Array_0[4] <= 127);
 assume_abort_if_not(signed_char_Array_0[4] != 0);
 signed_char_Array_0[5] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[5] >= -128);
 assume_abort_if_not(signed_char_Array_0[5] <= 127);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)) / (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) != (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)) <= (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) == ((signed char) ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) < ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))))) : 1) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) && (((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) <= (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) <= (((((-128 % (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)))) ? ((-128 % (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)))))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) : 1) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))))) && ((! (5 < (*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)))) ? ((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((50 < (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) : 1) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) 16.2f))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))
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
