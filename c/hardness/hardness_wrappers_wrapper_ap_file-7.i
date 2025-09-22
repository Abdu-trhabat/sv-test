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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7Wrapper_AP.c", 13, "reach_error"); }
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
 0, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
float float_Array_0[7] = {
 0.0, 4.6, 63.6, 31.4, 9.9, 100000000000.4, 8.2
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[3]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[4]);
float* float_Array_0_arrayfloat_Array_0arrayVar5_Pointer = &(float_Array_0[5]);
float* float_Array_0_arrayfloat_Array_0arrayVar6_Pointer = &(float_Array_0[6]);
signed long int signed_long_int_Array_0[1] = {
 4
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2] = {
 4, 1
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[1] = {
 64
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[1] = {
 25
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
void initially(void) {
}
void step(void) {
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 signed long int stepLocal_0 = ~ (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if (stepLocal_0 < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
  }
 }
 unsigned char stepLocal_1 = -256 == ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) * (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if (stepLocal_1 || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
   (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) - (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)));
  } else {
   (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))));
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))));
 }
 if (! ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) <= ((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))))) {
  if (-1 < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
  } else {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = 128;
  }
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 4611686.018427383000e+12F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854766000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 4611686.018427383000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= 0.0F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854766000e+12F && float_Array_0[3] >= 1.0e-20F ));
 float_Array_0[4] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 4611686.018427383000e+12F && float_Array_0[4] >= 1.0e-20F ));
 float_Array_0[5] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[5] >= 0.0F && float_Array_0[5] <= -1.0e-20F) || (float_Array_0[5] <= 9223372.036854776000e+12F && float_Array_0[5] >= 1.0e-20F ));
 float_Array_0[6] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[6] >= 0.0F && float_Array_0[6] <= -1.0e-20F) || (float_Array_0[6] <= 9223372.036854776000e+12F && float_Array_0[6] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((! ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) <= ((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))))) ? ((-1 < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) 128))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((~ (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : 1) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((-256 == ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) * (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) - (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))))))))) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))
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
