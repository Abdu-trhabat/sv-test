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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch59Wrapper_AP.c", 13, "reach_error"); }
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
 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
signed char signed_char_Array_0[2][2] = {
 {32, -1}, {-4, -4}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed long int signed_long_int_Array_0[7] = {
 32, 0, 10000, 0, -1, 50, -128
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[4]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer = &(signed_long_int_Array_0[5]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer = &(signed_long_int_Array_0[6]);
signed short int signed_short_int_Array_0[3] = {
 -32, 128, 1000
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
signed short int last_1_signed_short_int_Array_0_0_ = -32;
void initially(void) {
}
void step(void) {
 if ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) > (1)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) : (1))) <= (256 + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)) = ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) - 128) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)));
 } else {
  (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)) = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)));
 }
 if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) * ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))) {
  if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)));
  } else {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
  }
 } else {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
 }
 if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)) > (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < 0 ) ? -((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))))) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)));
 } else {
  if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
   if (2 < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) {
    (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = last_1_signed_short_int_Array_0_0_;
   }
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0][0] >= -31);
 assume_abort_if_not(signed_char_Array_0[0][0] <= 32);
 signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][0] >= -31);
 assume_abort_if_not(signed_char_Array_0[1][0] <= 31);
 signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1][1] >= -63);
 assume_abort_if_not(signed_char_Array_0[1][1] <= 63);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 1073741823);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -536870911);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 536870911);
 signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[3] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[3] <= 536870912);
 signed_long_int_Array_0[4] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[4] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[4] <= 2147483647);
 signed_long_int_Array_0[5] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[5] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[5] <= 2147483647);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -1);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 32766);
}
void updateLastVariables(void) {
 last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
}
int property(void) {
 return ((((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) > (1)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) : (1))) <= (256 + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)) == ((signed long int) ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) - 128) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)) == ((signed long int) ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)) * ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)) > (((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) < 0 ) ? -((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))) : (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((2 < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) last_1_signed_short_int_Array_0_0_)) : 1) : 1))
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
