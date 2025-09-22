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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch168Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[5] = {
 0.0, 255.24, 10.2, 128.1, 4.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
signed char signed_char_Array_0[1] = {
 1
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed long int signed_long_int_Array_0[5] = {
 5, 4, 1000000000, -128, 64
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[4]);
signed short int signed_short_int_Array_0[2][2] = {
 {-10, 17840}, {-8, 5}
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[0][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[1][1]);
unsigned short int unsigned_short_int_Array_0[2] = {
 40214, 18645
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = 1 - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
 if (stepLocal_0 == (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) = ((((2) > (25)) ? (2) : (25)));
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)));
 }
 signed long int stepLocal_2 = -4;
 signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer));
 if (stepLocal_1 >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) {
  if (stepLocal_2 < ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = ((((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) > (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) : (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))) - (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)));
  }
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer));
 }
 signed long int stepLocal_3 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)));
 if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if (stepLocal_3 > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)));
  }
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))));
  } else {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer));
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= 4611686.018427383000e+12F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427383000e+12F && double_Array_0[2] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 1073741823);
 signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[3] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[3] <= 2147483647);
 signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][0] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[1][0] <= 16383);
 signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][1] >= 16383);
 assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
 signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[1][1] <= 16383);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((1 - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) == (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) == ((signed long int) ((((2) > (25)) ? (2) : (25))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) == ((signed long int) ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) ? ((-4 < ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) ((((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) > (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) : (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))) - (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))) : 1) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))))) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))) : 1) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer))))))
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
