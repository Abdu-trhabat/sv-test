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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176Wrapper_AP.c", 13, "reach_error"); }
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
 1, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[2] = {
 64.25, 255.6
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
signed long int signed_long_int_Array_0[2][3] = {
 {-32, -1, 1192640562}, {-256, 2, 64}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[0][2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer = &(signed_long_int_Array_0[1][2]);
unsigned char unsigned_char_Array_0[2] = {
 0, 5
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[1] = {
 50
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
void initially(void) {
}
void step(void) {
 (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) = ((10000000 + 5) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))));
 if (! ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))) < ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < (((((-128) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? (-128) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : (((((-128) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? (-128) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))))))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))) : ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < (((((-128) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? (-128) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : (((((-128) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? (-128) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))))))))));
 }
 unsigned long int stepLocal_2 = ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))));
 if (stepLocal_2 >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (16 + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)));
 }
 if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
 }
 signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) * ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)));
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer));
 if (stepLocal_0 > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) {
  if (stepLocal_1 > (-1 / (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
  } else {
   (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = 63.75;
  }
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = 10.2;
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854766000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= -2147483647);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483646);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483647);
 assume_abort_if_not(signed_long_int_Array_0[0][1] != 0);
 signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1][1] <= 1073741823);
 signed_long_int_Array_0[0][2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][2] >= 1073741823);
 assume_abort_if_not(signed_long_int_Array_0[0][2] <= 2147483646);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) == ((signed long int) ((10000000 + 5) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) ? ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) * ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))) > (-1 / (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) 63.75))) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) 10.2)))) && ((! ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))) < ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < (((((-128) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? (-128) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : (((((-128) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? (-128) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))))))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))) : ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < (((((-128) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? (-128) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : (((((-128) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? (-128) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))))))))) : 1)) && (((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (16 + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : 1)) && ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))) : 1)
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
