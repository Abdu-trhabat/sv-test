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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch167Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float float_Array_0[2] = {
 -0.875, 32.46
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed char signed_char_Array_0[2][2] = {
 {10, 50}, {4, -64}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed short int signed_short_int_Array_0[1] = {
 -16
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2][2] = {
 {10, 128}, {10, 100}
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1][0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[0][1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[1][1]);
unsigned short int unsigned_short_int_Array_0[2] = {
 10, 10
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) * (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 signed long int stepLocal_0 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) % (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) <= stepLocal_1) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))))) < (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) ? ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))));
 } else {
  if (stepLocal_0 <= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) {
   (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
  }
 }
 signed short int stepLocal_2 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
 if (stepLocal_2 == (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + (((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))));
 }
 if ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) {
  if ((~ 16u) > (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))) {
   if ((~ ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) & (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) <= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) {
    (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
   } else {
    (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = 24.575f;
   }
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
 }
 (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
}
void updateVariables(void) {
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
 signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0] >= -63);
 assume_abort_if_not(signed_char_Array_0[0][0] <= 63);
 signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0] >= -63);
 assume_abort_if_not(signed_char_Array_0[1][0] <= 63);
 signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][1] >= -63);
 assume_abort_if_not(signed_char_Array_0[0][1] <= 63);
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 255);
 assume_abort_if_not(unsigned_char_Array_0[0][0] != 0);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 255);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 255);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 255);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) <= ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) * (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))))) < (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) ? ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))))) : ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) % (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) <= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) : 1)) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + (((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))))) : 1)) && (((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) > (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) ? (((~ 16u) > (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))) ? (((~ ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) & (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) <= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) 24.575f))) : 1) : ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))))) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))
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
