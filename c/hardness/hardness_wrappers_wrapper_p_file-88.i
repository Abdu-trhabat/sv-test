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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch88Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -8;
signed char* var_1_1_Pointer = &(var_1_1);
signed char var_1_2 = -128;
signed char* var_1_2_Pointer = &(var_1_2);
signed char var_1_3 = 10;
signed char* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 32;
signed long int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 1;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = -1;
signed char* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = -1000000000;
signed long int* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 0.65;
float* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 10;
unsigned short int* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = 10;
signed long int* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = -4;
signed short int* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 1.6;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 10.25;
float* var_1_14_Pointer = &(var_1_14);
signed long int last_1_var_1_8 = -1000000000;
void initially(void) {
}
void step(void) {
 if ((((*(var_1_2_Pointer)) | (*(var_1_3_Pointer))) > (*(var_1_4_Pointer))) && (*(var_1_5_Pointer))) {
  if ((*(var_1_5_Pointer)) && (*(var_1_6_Pointer))) {
   (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
  } else {
   (*(var_1_1_Pointer)) = -25;
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
 }
 if (15.2f < (*(var_1_9_Pointer))) {
  if (((*(var_1_4_Pointer)) + (*(var_1_10_Pointer))) > last_1_var_1_8) {
   (*(var_1_8_Pointer)) = ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer)));
  }
 } else {
  if ((*(var_1_10_Pointer)) > (*(var_1_4_Pointer))) {
   if (last_1_var_1_8 == (*(var_1_10_Pointer))) {
    (*(var_1_8_Pointer)) = (((((((((*(var_1_1_Pointer))) < 0 ) ? -((*(var_1_1_Pointer))) : ((*(var_1_1_Pointer)))))) > (-16)) ? ((((((*(var_1_1_Pointer))) < 0 ) ? -((*(var_1_1_Pointer))) : ((*(var_1_1_Pointer)))))) : (-16)));
   } else {
    (*(var_1_8_Pointer)) = (*(var_1_1_Pointer));
   }
  }
 }
 signed long int stepLocal_0 = (*(var_1_4_Pointer));
 if (((*(var_1_13_Pointer)) - (*(var_1_14_Pointer))) > (*(var_1_9_Pointer))) {
  if ((*(var_1_7_Pointer)) > stepLocal_0) {
   (*(var_1_12_Pointer)) = (*(var_1_3_Pointer));
  } else {
   (*(var_1_12_Pointer)) = (*(var_1_1_Pointer));
  }
 } else {
  (*(var_1_12_Pointer)) = (*(var_1_7_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -127);
 assume_abort_if_not(var_1_7 <= 126);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65535);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_8 = var_1_8;
}
int property(void) {
 return ((((((*(var_1_2_Pointer)) | (*(var_1_3_Pointer))) > (*(var_1_4_Pointer))) && (*(var_1_5_Pointer))) ? (((*(var_1_5_Pointer)) && (*(var_1_6_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_7_Pointer)))) : ((*(var_1_1_Pointer)) == ((signed char) -25))) : ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_7_Pointer))))) && ((15.2f < (*(var_1_9_Pointer))) ? ((((*(var_1_4_Pointer)) + (*(var_1_10_Pointer))) > last_1_var_1_8) ? ((*(var_1_8_Pointer)) == ((signed long int) ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))) : 1) : (((*(var_1_10_Pointer)) > (*(var_1_4_Pointer))) ? ((last_1_var_1_8 == (*(var_1_10_Pointer))) ? ((*(var_1_8_Pointer)) == ((signed long int) (((((((((*(var_1_1_Pointer))) < 0 ) ? -((*(var_1_1_Pointer))) : ((*(var_1_1_Pointer)))))) > (-16)) ? ((((((*(var_1_1_Pointer))) < 0 ) ? -((*(var_1_1_Pointer))) : ((*(var_1_1_Pointer)))))) : (-16))))) : ((*(var_1_8_Pointer)) == ((signed long int) (*(var_1_1_Pointer))))) : 1))) && ((((*(var_1_13_Pointer)) - (*(var_1_14_Pointer))) > (*(var_1_9_Pointer))) ? (((*(var_1_7_Pointer)) > (*(var_1_4_Pointer))) ? ((*(var_1_12_Pointer)) == ((signed short int) (*(var_1_3_Pointer)))) : ((*(var_1_12_Pointer)) == ((signed short int) (*(var_1_1_Pointer))))) : ((*(var_1_12_Pointer)) == ((signed short int) (*(var_1_7_Pointer)))))
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
