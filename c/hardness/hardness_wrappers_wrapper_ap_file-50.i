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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch50Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {1, 0}, {0, 1}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
double double_Array_0[2][3] = {
 {1.125, 127.8, 63.5}, {256.4, 16.6, 8.875}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[0][2]);
double* double_Array_0_arraydouble_Array_0arrayVar5_Pointer = &(double_Array_0[1][2]);
unsigned long int unsigned_long_int_Array_0[5] = {
 5, 1000, 3315050863, 1923971610, 32
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[3]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[4]);
unsigned short int unsigned_short_int_Array_0[2][2] = {
 {4, 10}, {55587, 32}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[1][1]);
void initially(void) {
}
void step(void) {
 if ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)));
 }
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
 (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
 if ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) {
  if ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) * ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - 4.5))) {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))));
  }
 } else {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
 }
 unsigned long int stepLocal_0 = ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))));
 if (((((((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))) < (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))) : (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))) != 31.9) {
  if (stepLocal_0 < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
   if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
    (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
   } else {
    (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
   }
  } else {
   (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
  }
 } else {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= -922337.2036854766000e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854766000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= 0.0F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 double_Array_0[0][2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][2] >= -922337.2036854776000e+13F && double_Array_0[0][2] <= -1.0e-20F) || (double_Array_0[0][2] <= 9223372.036854776000e+12F && double_Array_0[0][2] >= 1.0e-20F ));
 double_Array_0[1][2] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][2] >= -922337.2036854776000e+13F && double_Array_0[1][2] <= -1.0e-20F) || (double_Array_0[1][2] <= 9223372.036854776000e+12F && double_Array_0[1][2] >= 1.0e-20F ));
 unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[2] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[2] <= 4294967294);
 unsigned_long_int_Array_0[3] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[3] >= 1073741823);
 assume_abort_if_not(unsigned_long_int_Array_0[3] <= 2147483647);
 unsigned_long_int_Array_0[4] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[4] <= 1073741823);
 unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 49150);
 assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65534);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 16383);
 unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 32767);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))) < (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)))) : (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))))) != 31.9) ? (((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))) && (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) * ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) - 4.5))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)))))) : 1) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))))) && (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))))) : 1)) && ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))
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
