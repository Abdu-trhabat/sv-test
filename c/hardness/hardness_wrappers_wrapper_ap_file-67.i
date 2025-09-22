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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch67Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[1] = {
 25.875
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
float float_Array_0[2] = {
 0.9, 15.125
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed char signed_char_Array_0[1] = {
 8
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed long int signed_long_int_Array_0[3] = {
 50, -4, -10
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed short int signed_short_int_Array_0[3] = {
 256, -64, 2
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
unsigned short int unsigned_short_int_Array_0[3] = {
 4, 50, 128
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);
void initially(void) {
}
void step(void) {
 if (! ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)));
 }
 (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
 (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
 (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
 signed long int stepLocal_0 = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) >> (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
 if (stepLocal_0 > (1 * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (((((42286 - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) > (0)) ? ((42286 - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) : (0)));
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
 }
 signed long int stepLocal_2 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) / (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
 unsigned short int stepLocal_1 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))));
 } else {
  if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) > stepLocal_2) {
   if ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) > stepLocal_1) {
    (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < (100)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : (100)));
   } else {
    (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)));
   }
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)));
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854766000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854766000e+12F && float_Array_0[0] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 16383);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 1);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 6);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((! ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) : 1) && ((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) >> (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) > (1 * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (((((42286 - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) > (0)) ? ((42286 - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) : (0))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))))) : (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) / (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) > (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < (100)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) : (100))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))
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
