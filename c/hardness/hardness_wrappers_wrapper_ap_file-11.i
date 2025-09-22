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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch11Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[7] = {
 0, 0, 0, 0, 0, 0, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[3]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer = &(BOOL_unsigned_char_Array_0[4]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer = &(BOOL_unsigned_char_Array_0[5]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var6_Pointer = &(BOOL_unsigned_char_Array_0[6]);
double double_Array_0[2][2] = {
 {15.875, 7.675}, {-0.5, 50.75}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
signed char signed_char_Array_0[3] = {
 10, 10, -16
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
unsigned char unsigned_char_Array_0[5] = {
 128, 10, 16, 5, 10
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[3]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[4]);
unsigned char last_1_BOOL_unsigned_char_Array_0_1_ = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var6_Pointer));
 if (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - 5.25) < ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) * ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) * 199.4))) {
  if (stepLocal_0 && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer))) {
   if ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) {
    (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
   } else {
    (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
   }
  }
 }
 if ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)));
 } else {
  if (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) || last_1_BOOL_unsigned_char_Array_0_1_) {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = 0;
  } else {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
  }
 }
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = ((((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) > (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))))) ? (((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))))));
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 0);
 BOOL_unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[4] <= 0);
 BOOL_unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[5] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[5] <= 1);
 BOOL_unsigned_char_Array_0[6] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[6] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[6] <= 1);
 double_Array_0[0][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][0] >= -922337.2036854776000e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854776000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
 assume_abort_if_not(double_Array_0[0][0] != 0.0F);
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= -922337.2036854776000e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854776000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= -922337.2036854776000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= 0.0F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -127);
 assume_abort_if_not(signed_char_Array_0[0] <= 126);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= -127);
 assume_abort_if_not(signed_char_Array_0[1] <= 126);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
 unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[4] <= 127);
}
void updateLastVariables(void) {
 last_1_BOOL_unsigned_char_Array_0_1_ = BOOL_unsigned_char_Array_0[1];
}
int property(void) {
 return (((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - 5.25) < ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) * ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) * 199.4))) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var6_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) : 1) : 1) && (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))))) : ((((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) || last_1_BOOL_unsigned_char_Array_0_1_) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) 0)) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))))) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) / (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) > (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))))) ? (((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))
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
