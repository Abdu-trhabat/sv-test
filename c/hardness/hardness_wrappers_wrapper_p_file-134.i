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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch134Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 31.5;
double* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 25;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 64;
unsigned char* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 7.6;
double* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 9.25;
double* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 63.7;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 255.6;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 0.0;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 5.2;
double* var_1_9_Pointer = &(var_1_9);
unsigned long int var_1_10 = 100;
unsigned long int* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 100000000000.625;
double* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = -32;
signed long int* var_1_12_Pointer = &(var_1_12);
unsigned long int var_1_13 = 3973916150;
unsigned long int* var_1_13_Pointer = &(var_1_13);
unsigned long int var_1_14 = 16;
unsigned long int* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 2.6;
float* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 1;
unsigned char* var_1_16_Pointer = &(var_1_16);
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = (*(var_1_2_Pointer));
 if (stepLocal_0 > (*(var_1_3_Pointer))) {
  if (((((((*(var_1_4_Pointer))) < ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer))))) - 8.88) < (*(var_1_6_Pointer))) {
   (*(var_1_1_Pointer)) = ((*(var_1_7_Pointer)) - ((*(var_1_8_Pointer)) - (((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer)))))));
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_9_Pointer));
 }
 if ((*(var_1_1_Pointer)) >= (*(var_1_11_Pointer))) {
  if (((*(var_1_3_Pointer)) - (*(var_1_2_Pointer))) >= (*(var_1_12_Pointer))) {
   (*(var_1_10_Pointer)) = (((*(var_1_13_Pointer)) - (((((*(var_1_2_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_2_Pointer))) : ((*(var_1_3_Pointer)))))) - (*(var_1_14_Pointer)));
  }
 } else {
  (*(var_1_10_Pointer)) = (*(var_1_13_Pointer));
 }
 unsigned long int stepLocal_1 = (*(var_1_10_Pointer));
 if (! (*(var_1_16_Pointer))) {
  (*(var_1_15_Pointer)) = (((((200.5f - 4.25f)) > ((*(var_1_8_Pointer)))) ? ((200.5f - 4.25f)) : ((*(var_1_8_Pointer)))));
 } else {
  if ((((((*(var_1_14_Pointer))) > ((*(var_1_13_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_13_Pointer))))) >= stepLocal_1) {
   (*(var_1_15_Pointer)) = (*(var_1_9_Pointer));
  } else {
   (*(var_1_15_Pointer)) = (*(var_1_8_Pointer));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 4611686.018427383000e+12F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 3221225470);
 assume_abort_if_not(var_1_13 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) ? ((((((((*(var_1_4_Pointer))) < ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer))))) - 8.88) < (*(var_1_6_Pointer))) ? ((*(var_1_1_Pointer)) == ((double) ((*(var_1_7_Pointer)) - ((*(var_1_8_Pointer)) - (((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer))))))))) : ((*(var_1_1_Pointer)) == ((double) (*(var_1_7_Pointer))))) : ((*(var_1_1_Pointer)) == ((double) (*(var_1_9_Pointer))))) && (((*(var_1_1_Pointer)) >= (*(var_1_11_Pointer))) ? ((((*(var_1_3_Pointer)) - (*(var_1_2_Pointer))) >= (*(var_1_12_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned long int) (((*(var_1_13_Pointer)) - (((((*(var_1_2_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_2_Pointer))) : ((*(var_1_3_Pointer)))))) - (*(var_1_14_Pointer))))) : 1) : ((*(var_1_10_Pointer)) == ((unsigned long int) (*(var_1_13_Pointer)))))) && ((! (*(var_1_16_Pointer))) ? ((*(var_1_15_Pointer)) == ((float) (((((200.5f - 4.25f)) > ((*(var_1_8_Pointer)))) ? ((200.5f - 4.25f)) : ((*(var_1_8_Pointer))))))) : (((((((*(var_1_14_Pointer))) > ((*(var_1_13_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_13_Pointer))))) >= (*(var_1_10_Pointer))) ? ((*(var_1_15_Pointer)) == ((float) (*(var_1_9_Pointer)))) : ((*(var_1_15_Pointer)) == ((float) (*(var_1_8_Pointer))))))
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
