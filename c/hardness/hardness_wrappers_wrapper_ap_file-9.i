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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9Wrapper_AP.c", 13, "reach_error"); }
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
float float_Array_0[7] = {
 31.2, 7.3, 15.6, 4.75, 32.4, 2.625, 3.25
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[3]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[4]);
float* float_Array_0_arrayfloat_Array_0arrayVar5_Pointer = &(float_Array_0[5]);
float* float_Array_0_arrayfloat_Array_0arrayVar6_Pointer = &(float_Array_0[6]);
signed long int signed_long_int_Array_0[2] = {
 10, 1653905226
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
unsigned char unsigned_char_Array_0[2] = {
 4, 10
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[1] = {
 200
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
float last_1_float_Array_0_2_ = 15.6;
signed long int last_1_signed_long_int_Array_0_0_ = 10;
unsigned char last_1_unsigned_char_Array_0_1_ = 10;
unsigned short int last_1_unsigned_short_int_Array_0_0_ = 200;
void initially(void) {
}
void step(void) {
 if (last_1_float_Array_0_2_ > 9999999.5f) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) - last_1_signed_long_int_Array_0_0_) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)));
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((((((last_1_unsigned_char_Array_0_1_ - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) + (last_1_unsigned_short_int_Array_0_0_ - last_1_signed_long_int_Array_0_0_))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) ? (((last_1_unsigned_char_Array_0_1_ - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) + (last_1_unsigned_short_int_Array_0_0_ - last_1_signed_long_int_Array_0_0_))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))));
 }
 if (last_1_signed_long_int_Array_0_0_ <= 16) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 } else {
  if ((((((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))))) < (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))) {
   if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
    (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
   } else {
    (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = 64;
   }
  } else {
   (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
  }
 }
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  if ((- (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) >= stepLocal_0) {
   (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)));
  }
 } else {
  (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))));
 }
 (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))));
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -461168.6018427383000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427383000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -461168.6018427383000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 4611686.018427383000e+12F && float_Array_0[1] >= 1.0e-20F ));
 float_Array_0[3] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[3] >= -922337.2036854766000e+13F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854766000e+12F && float_Array_0[3] >= 1.0e-20F ));
 float_Array_0[4] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[4] >= -922337.2036854776000e+13F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 9223372.036854776000e+12F && float_Array_0[4] >= 1.0e-20F ));
 float_Array_0[5] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[5] >= -922337.2036854776000e+13F && float_Array_0[5] <= -1.0e-20F) || (float_Array_0[5] <= 9223372.036854776000e+12F && float_Array_0[5] >= 1.0e-20F ));
 float_Array_0[6] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[6] >= -922337.2036854776000e+13F && float_Array_0[6] <= -1.0e-20F) || (float_Array_0[6] <= 9223372.036854776000e+12F && float_Array_0[6] >= 1.0e-20F ));
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 1073741822);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}
void updateLastVariables(void) {
 last_1_float_Array_0_2_ = float_Array_0[2];
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
 last_1_unsigned_char_Array_0_1_ = unsigned_char_Array_0[1];
 last_1_unsigned_short_int_Array_0_0_ = unsigned_short_int_Array_0[0];
}
int property(void) {
 return ((((last_1_signed_long_int_Array_0_0_ <= 16) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : (((((((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer))) > ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))))) < (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) 64))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))))) && ((last_1_float_Array_0_2_ > 9999999.5f) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) - last_1_signed_long_int_Array_0_0_) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((((((last_1_unsigned_char_Array_0_1_ - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) + (last_1_unsigned_short_int_Array_0_0_ - last_1_signed_long_int_Array_0_0_))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) ? (((last_1_unsigned_char_Array_0_1_ - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) + (last_1_unsigned_short_int_Array_0_0_ - last_1_signed_long_int_Array_0_0_))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((- (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) : 1) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))))))
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
