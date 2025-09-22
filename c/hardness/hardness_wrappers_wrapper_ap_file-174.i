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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch174Wrapper_AP.c", 13, "reach_error"); }
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
float float_Array_0[1] = {
 32.1
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
signed long int signed_long_int_Array_0[2][2] = {
 {25, 1638083155}, {-10, 32}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
signed short int signed_short_int_Array_0[5] = {
 -64, 25, 8, 100, 32
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[3]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[4]);
unsigned long int unsigned_long_int_Array_0[2][3] = {
 {16, 16, 3672536656}, {2, 2030143942, 128}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[0][2]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer = &(unsigned_long_int_Array_0[1][2]);
void initially(void) {
}
void step(void) {
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))));
 if (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((((((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) < 0 ) ? -((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)))))) > (3934615513u)) ? ((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) < 0 ) ? -((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)))))) : (3934615513u))) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)));
 } else {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));
 }
 unsigned char stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) > 1000000000u;
 if (stepLocal_0 || ((- 4.4f) >= (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) - (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))))));
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
  } else {
   (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer));
  }
 }
 unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer));
 if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) >= stepLocal_1) {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)))));
  }
 } else {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 1073741823);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= 1073741823);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483646);
 signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1][1] <= 1073741823);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 16383);
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 16383);
 signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[3] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[3] <= 32766);
 signed_short_int_Array_0[4] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[4] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[4] <= 32766);
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 4294967294);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 1073741823);
 unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 1073741823);
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 2147483647);
 unsigned_long_int_Array_0[0][2] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][2] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0][2] <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)))))) && ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((((((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) < 0 ) ? -((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)))))) > (3934615513u)) ? ((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) < 0 ) ? -((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)))))) : (3934615513u))) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) && ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) > 1000000000u) || ((- 4.4f) >= (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) - (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))))))) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) < ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))))))) : 1) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))))
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
