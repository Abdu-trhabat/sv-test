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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[5] = {
 9.75, 5.1, 32.6, 128.1, 63.9
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
signed char signed_char_Array_0[2] = {
 8, -128
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed long int signed_long_int_Array_0[1] = {
 -10
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned long int unsigned_long_int_Array_0[2] = {
 1885310857, 1
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
signed long int last_1_signed_long_int_Array_0_0_ = -10;
void initially(void) {
}
void step(void) {
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((1514707036u + (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) < 0 ) ? -((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) - last_1_signed_long_int_Array_0_0_);
 } else {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((((last_1_signed_long_int_Array_0_0_) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? (last_1_signed_long_int_Array_0_0_) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))));
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))));
 }
 unsigned char stepLocal_1 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if (stepLocal_1 || ((~ (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) {
  if (stepLocal_0 < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
   if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
    (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
   }
  } else {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = 2;
  }
 } else {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
 }
 if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
  (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - ((((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) > ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer))))));
 } else {
  (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427383000e+12F && double_Array_0[1] >= 1.0e-20F ));
 double_Array_0[3] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 4611686.018427383000e+12F && double_Array_0[3] >= 1.0e-20F ));
 double_Array_0[4] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[4] >= 0.0F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854766000e+12F && double_Array_0[4] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -127);
 assume_abort_if_not(signed_char_Array_0[0] <= 126);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 1073741824);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 2147483647);
}
void updateLastVariables(void) {
 last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
}
int property(void) {
 return (((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || ((~ (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) : 1) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) 2))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((1514707036u + (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) < 0 ) ? -((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) - last_1_signed_long_int_Array_0_0_))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((((last_1_signed_long_int_Array_0_0_) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? (last_1_signed_long_int_Array_0_0_) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) < 0 ) ? -((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))))) : 1)) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - ((((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) > ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) > ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))))))
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
