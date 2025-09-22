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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch53Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][3] = {
 {0, 1, 1}, {0, 0, 0}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer = &(BOOL_unsigned_char_Array_0[0][2]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer = &(BOOL_unsigned_char_Array_0[1][2]);
double double_Array_0[2] = {
 256.5, 8.8
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[2][3] = {
 {3110219175, 1000000000, 500}, {1, 1456677701, 5}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[0][2]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer = &(unsigned_long_int_Array_0[1][2]);
unsigned short int unsigned_short_int_Array_0[2] = {
 16, 128
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned char last_1_BOOL_unsigned_char_Array_0_0__0_ = 0;
void initially(void) {
}
void step(void) {
 (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) + ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))));
 (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
 unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
 unsigned long int stepLocal_0 = ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))));
 if (stepLocal_0 != (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))))) {
  if ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
   if (last_1_BOOL_unsigned_char_Array_0_0__0_) {
    if (stepLocal_1 >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
     (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)));
    } else {
     (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
    }
   }
  }
 } else {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
 }
 if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) <= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) < 0 ) ? -((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))));
 }
 if (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) * 16.5f) > (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) = (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)));
 } else {
  (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 4294967295);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 536870911);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 536870911);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 1073741823);
 unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 1073741823);
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 2147483647);
 unsigned_long_int_Array_0[0][2] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][2] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][2] <= 2147483647);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}
void updateLastVariables(void) {
 last_1_BOOL_unsigned_char_Array_0_0__0_ = BOOL_unsigned_char_Array_0[0][0];
}
int property(void) {
 return (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) + ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) && (((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) != (((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? (last_1_BOOL_unsigned_char_Array_0_0__0_ ? (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : 1) : 1) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)))))) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) <= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) < 0 ) ? -((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))))) : 1)) && ((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) * 16.5f) > (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))))))
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
