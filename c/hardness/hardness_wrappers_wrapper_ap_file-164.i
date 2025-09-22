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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[2][2] = {
 {31.375, 100000000000000.5}, {63.3, 2.5}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
signed long int signed_long_int_Array_0[2][3] = {
 {-1, -100000, -256}, {100, -1000, 8}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[0][2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer = &(signed_long_int_Array_0[1][2]);
signed short int signed_short_int_Array_0[1] = {
 32
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2][3] = {
 {64, 2, 0}, {10000, 1, 500}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[1][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer = &(unsigned_short_int_Array_0[0][2]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer = &(unsigned_short_int_Array_0[1][2]);
void initially(void) {
}
void step(void) {
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))) <= -1) {
   (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
  } else {
   if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) > ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))))) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) {
    (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)));
   } else {
    (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = ((((99.5) < ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? (99.5) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))));
   }
  }
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
 }
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer));
 if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) <= stepLocal_0) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = ((((5) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) ? (5) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))));
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  if (! (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) = (10 + (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer))));
  }
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854766000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= -922337.2036854766000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854766000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= -1);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483647);
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483647);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483647);
 signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1][1] <= 2147483647);
 signed_long_int_Array_0[0][2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][2] <= 2147483647);
 signed_long_int_Array_0[1][2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1][2] <= 2147483647);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
 assume_abort_if_not(signed_short_int_Array_0[0] != 0);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 8192);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 16384);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 65534);
 unsigned_short_int_Array_0[0][2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][2] <= 8192);
 unsigned_short_int_Array_0[1][2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][2] <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))) <= -1) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) : (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) > ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))))) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) ((((99.5) < ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? (99.5) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) && ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) ((((5) < ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) ? (5) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((! (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) / (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) == ((unsigned short int) (10 + (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var5_Pointer)))))) : 1) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))))
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
