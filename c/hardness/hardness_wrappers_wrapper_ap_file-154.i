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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch154Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int signed_long_int_Array_0[2][2] = {
 {1, 1}, {16, 0}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
unsigned char unsigned_char_Array_0[7] = {
 200, 2, 0, 8, 5, 10, 50
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[3]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[4]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer = &(unsigned_char_Array_0[5]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer = &(unsigned_char_Array_0[6]);
unsigned long int unsigned_long_int_Array_0[3] = {
 1000000000, 128, 1000000000
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned char last_1_unsigned_char_Array_0_4_ = 5;
unsigned long int last_1_unsigned_long_int_Array_0_1_ = 128;
void initially(void) {
}
void step(void) {
 if (last_1_unsigned_long_int_Array_0_1_ < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) {
  if (last_1_unsigned_char_Array_0_4_ <= (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) {
   (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = ((1211749435u + ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)));
  } else {
   if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) | (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) {
    (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
   }
  }
 } else {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 }
 unsigned long int stepLocal_1 = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) & (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 if (stepLocal_1 < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer));
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = 5;
 }
 signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))))) != stepLocal_0) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) = (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))));
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) = ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))));
 }
}
void updateVariables(void) {
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483647);
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483647);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483647);
 signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1][1] <= 2147483647);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 191);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 64);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
 unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[5] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[5] <= 254);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 536870912);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 1073741824);
 unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[2] >= 536870912);
 assume_abort_if_not(unsigned_long_int_Array_0[2] <= 1073741823);
}
void updateLastVariables(void) {
 last_1_unsigned_char_Array_0_4_ = unsigned_char_Array_0[4];
 last_1_unsigned_long_int_Array_0_1_ = unsigned_long_int_Array_0[1];
}
int property(void) {
 return ((((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) > ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))))) != ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) == ((unsigned char) (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer))))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var6_Pointer)) == ((unsigned char) ((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var5_Pointer)))))))) && ((last_1_unsigned_long_int_Array_0_1_ < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((last_1_unsigned_char_Array_0_4_ <= (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) ((1211749435u + ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) | (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : 1)) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))) && (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)) & (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) + (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) < 0 ) ? -((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) 5)))
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
