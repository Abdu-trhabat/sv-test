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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch156Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char signed_char_Array_0[1] = {
 -5
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed long int signed_long_int_Array_0[2] = {
 1985015368, 1
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
unsigned char unsigned_char_Array_0[3] = {
 5, 0, 1
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[1] = {
 32
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2][2] = {
 {50049, 35813}, {5, 256}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[1][1]);
unsigned char last_1_unsigned_char_Array_0_2_ = 1;
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 32;
unsigned short int last_1_unsigned_short_int_Array_0_1__0_ = 5;
unsigned short int last_1_unsigned_short_int_Array_0_1__1_ = 256;
void initially(void) {
}
void step(void) {
 if ((last_1_unsigned_char_Array_0_2_ % (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) <= (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) - last_1_unsigned_short_int_Array_0_1__0_) - last_1_unsigned_short_int_Array_0_1__1_)) {
  (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = 32u;
 }
 if (last_1_unsigned_long_int_Array_0_0_ <= last_1_unsigned_short_int_Array_0_1__1_) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))));
 }
 signed long int stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) % (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
 unsigned char stepLocal_0 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
 if (stepLocal_0 < (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) {
  if (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) >= stepLocal_1) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) = (100 + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)));
  } else {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
  }
 }
 if (! ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) {
  if (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) < 0 ) ? -((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)));
  } else {
   (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = ((((32) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? (32) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))));
  }
 }
}
void updateVariables(void) {
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -128);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 1073741823);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 assume_abort_if_not(signed_long_int_Array_0[1] != 0);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65535);
 unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 32767);
 assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 65534);
}
void updateLastVariables(void) {
 last_1_unsigned_char_Array_0_2_ = unsigned_char_Array_0[2];
 last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
 last_1_unsigned_short_int_Array_0_1__0_ = unsigned_short_int_Array_0[1][0];
 last_1_unsigned_short_int_Array_0_1__1_ = unsigned_short_int_Array_0[1][1];
}
int property(void) {
 return ((((last_1_unsigned_long_int_Array_0_0_ <= last_1_unsigned_short_int_Array_0_1__1_) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) < ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))))) : 1) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) < (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) ? ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) >= ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) % (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) == ((unsigned short int) (100 + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) == ((unsigned short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) : 1)) && ((! ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) ? ((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) < 0 ) ? -((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) ((((32) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) ? (32) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))))) : 1)) && (((last_1_unsigned_char_Array_0_2_ % (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) <= (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) - last_1_unsigned_short_int_Array_0_1__0_) - last_1_unsigned_short_int_Array_0_1__1_)) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) 32u)) : 1)
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
