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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 1, 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
signed char signed_char_Array_0[1] = {
 -128
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed long int signed_long_int_Array_0[2] = {
 -256, 1
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed short int signed_short_int_Array_0[1] = {
 -10
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[5] = {
 4, 128, 50, 128, 4
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer = &(unsigned_char_Array_0[3]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer = &(unsigned_char_Array_0[4]);
void initially(void) {
}
void step(void) {
 if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) < (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))))));
 } else {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) = (128 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)));
 }
 signed long int stepLocal_0 = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) * -10) & (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
 if ((~ (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) >= stepLocal_0) {
  (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer));
 }
 unsigned char stepLocal_3 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 unsigned char stepLocal_2 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 signed short int stepLocal_1 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
  if (stepLocal_1 < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) {
   if (((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) >= stepLocal_2) {
    (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
   } else {
    if (stepLocal_3 || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
     if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
      if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
       (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
      }
     } else {
      (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
     }
    } else {
     (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
    }
   }
  } else {
   (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer));
  }
 } else {
  (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 64);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 63);
 unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[3] <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((~ (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer))) >= (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) * -10) & (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)))) : 1) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) < (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var3_Pointer))) : (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (128 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))) ? ((((((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) >= (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : ((((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var4_Pointer)) < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))) : 1) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))
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
