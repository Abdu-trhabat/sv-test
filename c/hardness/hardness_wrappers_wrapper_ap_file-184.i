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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch184Wrapper_AP.c", 13, "reach_error"); }
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
float float_Array_0[2][2] = {
 {10.5, 31.4}, {5.25, 7.75}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1]);
signed long int signed_long_int_Array_0[3] = {
 256, 200, -16
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
unsigned char unsigned_char_Array_0[3] = {
 128, 128, 1
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[2] = {
 25, 64
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[2] = {
 25, 8
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
 if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) <= stepLocal_0) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - 32);
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > (100)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : (100)))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) ? ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > (100)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : (100)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))));
 }
 unsigned char stepLocal_2 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 if ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) < stepLocal_2) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = (((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - 4.25f) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - 4.25f) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - 4.25f)));
  } else {
   (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - (8.966829933912052E18f - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))));
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
 }
 (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer));
 (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 unsigned long int stepLocal_1 = (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) / (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))));
 if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > stepLocal_1) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))));
 }
 (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= 0.0F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 4611686.018427383000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= 0.0F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854766000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 assume_abort_if_not(signed_long_int_Array_0[0] != 0);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 assume_abort_if_not(signed_long_int_Array_0[1] != 0);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - 32))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > (100)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : (100)))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) ? ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > (100)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : (100)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))))) && ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) / (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))))) : 1)) && (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) (((((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - 4.25f) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - 4.25f) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - 4.25f))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) - (8.966829933912052E18f - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))
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
