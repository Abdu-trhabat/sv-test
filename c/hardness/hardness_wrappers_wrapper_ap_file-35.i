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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35Wrapper_AP.c", 13, "reach_error"); }
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
 1, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[1] = {
 999999.2
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
float float_Array_0[3] = {
 -0.6, 255.1, 4.8
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed char signed_char_Array_0[2][2] = {
 {0, 8}, {-2, -4}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed short int signed_short_int_Array_0[3] = {
 -4, -100, -10
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
unsigned char unsigned_char_Array_0[2] = {
 128, 10
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[2] = {
 5, 2
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[1] = {
 8
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = ~ (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
 if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) >= stepLocal_0) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)));
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)));
  } else {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
  }
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
 }
 unsigned long int stepLocal_3 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) * (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
 signed long int stepLocal_2 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) % (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
 if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (64 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) != stepLocal_1) {
  if (stepLocal_2 >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
   if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
    (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))));
   }
  } else {
   if (32u >= stepLocal_3) {
    (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = 1;
   } else {
    (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
   }
  }
 }
 (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -461168.6018427383000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427383000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -461168.6018427383000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 4611686.018427383000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0] >= -31);
 assume_abort_if_not(signed_char_Array_0[1][0] <= 31);
 signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_char_Array_0[0][1] <= 63);
 signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][1] >= -31);
 assume_abort_if_not(signed_char_Array_0[1][1] <= 32);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 16383);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 63);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) >= (~ (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) : 1) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))) && ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (64 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) != (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) % (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) + ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))))) : 1) : ((32u >= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) * (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) 1)) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))))) : 1)) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))
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
