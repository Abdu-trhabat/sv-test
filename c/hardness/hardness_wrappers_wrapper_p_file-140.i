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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch140Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 16;
signed long int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 1;
unsigned char* var_1_3_Pointer = &(var_1_3);
signed char var_1_4 = 8;
signed char* var_1_4_Pointer = &(var_1_4);
signed long int var_1_6 = 0;
signed long int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 16;
signed long int* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = 16;
signed long int* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 8;
signed char* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 63.25;
float* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 63.375;
float* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = -4;
signed char* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 3.2;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 9.13;
float* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 31.5;
float* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 24.625;
float* var_1_16_Pointer = &(var_1_16);
void initially(void) {
}
void step(void) {
 if ((- 256.5f) > ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer)))) {
  if ((*(var_1_11_Pointer)) >= (*(var_1_10_Pointer))) {
   (*(var_1_9_Pointer)) = (*(var_1_12_Pointer));
  }
 } else {
  (*(var_1_9_Pointer)) = (*(var_1_12_Pointer));
 }
 if ((*(var_1_8_Pointer)) >= (*(var_1_12_Pointer))) {
  (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
 } else {
  (*(var_1_13_Pointer)) = ((*(var_1_15_Pointer)) + ((*(var_1_16_Pointer)) - 2.6f));
 }
 unsigned char stepLocal_1 = (*(var_1_2_Pointer));
 signed long int stepLocal_0 = -5 * -8;
 if (stepLocal_1 && (*(var_1_3_Pointer))) {
  if ((((((((((*(var_1_4_Pointer))) < 0 ) ? -((*(var_1_4_Pointer))) : ((*(var_1_4_Pointer)))))) > ((*(var_1_9_Pointer)))) ? ((((((*(var_1_4_Pointer))) < 0 ) ? -((*(var_1_4_Pointer))) : ((*(var_1_4_Pointer)))))) : ((*(var_1_9_Pointer))))) < stepLocal_0) {
   (*(var_1_1_Pointer)) = ((*(var_1_6_Pointer)) - (*(var_1_7_Pointer)));
  } else {
   if ((*(var_1_3_Pointer))) {
    (*(var_1_1_Pointer)) = ((((((((((*(var_1_4_Pointer)) + (*(var_1_9_Pointer)))) > ((*(var_1_7_Pointer)))) ? (((*(var_1_4_Pointer)) + (*(var_1_9_Pointer)))) : ((*(var_1_7_Pointer)))))) > ((((((*(var_1_6_Pointer))) > ((*(var_1_8_Pointer)))) ? ((*(var_1_6_Pointer))) : ((*(var_1_8_Pointer))))))) ? (((((((*(var_1_4_Pointer)) + (*(var_1_9_Pointer)))) > ((*(var_1_7_Pointer)))) ? (((*(var_1_4_Pointer)) + (*(var_1_9_Pointer)))) : ((*(var_1_7_Pointer)))))) : ((((((*(var_1_6_Pointer))) > ((*(var_1_8_Pointer)))) ? ((*(var_1_6_Pointer))) : ((*(var_1_8_Pointer))))))));
   } else {
    (*(var_1_1_Pointer)) = 4;
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -127);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 2147483646);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483647);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(var_1_2_Pointer)) && (*(var_1_3_Pointer))) ? (((((((((((*(var_1_4_Pointer))) < 0 ) ? -((*(var_1_4_Pointer))) : ((*(var_1_4_Pointer)))))) > ((*(var_1_9_Pointer)))) ? ((((((*(var_1_4_Pointer))) < 0 ) ? -((*(var_1_4_Pointer))) : ((*(var_1_4_Pointer)))))) : ((*(var_1_9_Pointer))))) < (-5 * -8)) ? ((*(var_1_1_Pointer)) == ((signed long int) ((*(var_1_6_Pointer)) - (*(var_1_7_Pointer))))) : ((*(var_1_3_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed long int) ((((((((((*(var_1_4_Pointer)) + (*(var_1_9_Pointer)))) > ((*(var_1_7_Pointer)))) ? (((*(var_1_4_Pointer)) + (*(var_1_9_Pointer)))) : ((*(var_1_7_Pointer)))))) > ((((((*(var_1_6_Pointer))) > ((*(var_1_8_Pointer)))) ? ((*(var_1_6_Pointer))) : ((*(var_1_8_Pointer))))))) ? (((((((*(var_1_4_Pointer)) + (*(var_1_9_Pointer)))) > ((*(var_1_7_Pointer)))) ? (((*(var_1_4_Pointer)) + (*(var_1_9_Pointer)))) : ((*(var_1_7_Pointer)))))) : ((((((*(var_1_6_Pointer))) > ((*(var_1_8_Pointer)))) ? ((*(var_1_6_Pointer))) : ((*(var_1_8_Pointer)))))))))) : ((*(var_1_1_Pointer)) == ((signed long int) 4)))) : 1) && (((- 256.5f) > ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer)))) ? (((*(var_1_11_Pointer)) >= (*(var_1_10_Pointer))) ? ((*(var_1_9_Pointer)) == ((signed char) (*(var_1_12_Pointer)))) : 1) : ((*(var_1_9_Pointer)) == ((signed char) (*(var_1_12_Pointer)))))) && (((*(var_1_8_Pointer)) >= (*(var_1_12_Pointer))) ? ((*(var_1_13_Pointer)) == ((float) (*(var_1_14_Pointer)))) : ((*(var_1_13_Pointer)) == ((float) ((*(var_1_15_Pointer)) + ((*(var_1_16_Pointer)) - 2.6f)))))
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
