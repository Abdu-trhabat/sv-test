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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch29Wrapper_AP.c", 13, "reach_error"); }
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
float float_Array_0[3] = {
 3.4, 9.3, 2.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
unsigned char unsigned_char_Array_0[3] = {
 8, 5, 8
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer = &(unsigned_char_Array_0[2]);
unsigned short int unsigned_short_int_Array_0[5] = {
 1, 16, 64, 10, 32
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[3]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer = &(unsigned_short_int_Array_0[4]);
void initially(void) {
}
void step(void) {
 (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
 (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
  (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
 } else {
  if (! ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) {
   (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) = (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))));
  }
 }
 if (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + 8.125) > ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) = ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))));
 } else {
  (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
 }
 unsigned short int stepLocal_0 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer));
 if ((((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) == (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) {
  if (stepLocal_0 > (5 * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) {
   if ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * 256.5f)) {
    (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer));
   }
  }
 }
 if ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) {
  (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
 unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[2] <= 32767);
 unsigned_short_int_Array_0[3] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[3] <= 32767);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) : ((! ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) == ((float) (((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) < 0 ) ? -((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))))) : 1)) && ((((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + 8.125) > ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) == ((unsigned short int) ((((((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) > ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))))) && (((((((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))))) == (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) > (5 * (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) ? (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) < ((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) * 256.5f)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)))) : 1) : 1) : 1)) && (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))
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
