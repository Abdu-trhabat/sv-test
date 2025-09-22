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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch75Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 5;
unsigned char* var_1_3_Pointer = &(var_1_3);
signed long int var_1_5 = 1;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 100;
signed long int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 32;
unsigned char* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = 1;
signed short int* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 9.3;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 31.2;
double* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = 1;
signed char* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = -32;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = -32;
signed char* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = -50;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = -16;
signed char* var_1_16_Pointer = &(var_1_16);
float var_1_17 = 99999999999999.2;
float* var_1_17_Pointer = &(var_1_17);
float var_1_18 = 4.9;
float* var_1_18_Pointer = &(var_1_18);
unsigned char last_1_var_1_1 = 32;
signed short int last_1_var_1_8 = 1;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = ((((*(var_1_5_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer))));
 if (((last_1_var_1_1 * last_1_var_1_8) * last_1_var_1_8) < stepLocal_0) {
  (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
 } else {
  (*(var_1_1_Pointer)) = 10;
 }
 if ((- (*(var_1_9_Pointer))) >= (*(var_1_10_Pointer))) {
  if ((*(var_1_11_Pointer))) {
   (*(var_1_8_Pointer)) = (((((((((*(var_1_2_Pointer))) < (last_1_var_1_8)) ? ((*(var_1_2_Pointer))) : (last_1_var_1_8))) + (((((*(var_1_1_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer))) : ((*(var_1_3_Pointer)))))) < 0 ) ? -((((((*(var_1_2_Pointer))) < (last_1_var_1_8)) ? ((*(var_1_2_Pointer))) : (last_1_var_1_8))) + (((((*(var_1_1_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer))) : ((*(var_1_3_Pointer)))))) : ((((((*(var_1_2_Pointer))) < (last_1_var_1_8)) ? ((*(var_1_2_Pointer))) : (last_1_var_1_8))) + (((((*(var_1_1_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer))) : ((*(var_1_3_Pointer))))))));
  } else {
   (*(var_1_8_Pointer)) = ((*(var_1_3_Pointer)) + (*(var_1_1_Pointer)));
  }
 }
 if (2.8f == (*(var_1_10_Pointer))) {
  (*(var_1_12_Pointer)) = ((((((((((*(var_1_13_Pointer))) > (16)) ? ((*(var_1_13_Pointer))) : (16)))) > ((*(var_1_14_Pointer)))) ? ((((((*(var_1_13_Pointer))) > (16)) ? ((*(var_1_13_Pointer))) : (16)))) : ((*(var_1_14_Pointer))))) + (*(var_1_15_Pointer)));
 }
 (*(var_1_16_Pointer)) = ((((-4) < ((*(var_1_14_Pointer)))) ? (-4) : ((*(var_1_14_Pointer)))));
 if ((*(var_1_1_Pointer)) > ((*(var_1_8_Pointer)) + (*(var_1_16_Pointer)))) {
  (*(var_1_17_Pointer)) = (*(var_1_18_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 254);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -63);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -63);
 assume_abort_if_not(var_1_14 <= 63);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -63);
 assume_abort_if_not(var_1_15 <= 63);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_8 = var_1_8;
}
int property(void) {
 return (((((((last_1_var_1_1 * last_1_var_1_8) * last_1_var_1_8) < (((((*(var_1_5_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer)))))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_7_Pointer)))) : ((*(var_1_1_Pointer)) == ((unsigned char) 10))) && (((- (*(var_1_9_Pointer))) >= (*(var_1_10_Pointer))) ? ((*(var_1_11_Pointer)) ? ((*(var_1_8_Pointer)) == ((signed short int) (((((((((*(var_1_2_Pointer))) < (last_1_var_1_8)) ? ((*(var_1_2_Pointer))) : (last_1_var_1_8))) + (((((*(var_1_1_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer))) : ((*(var_1_3_Pointer)))))) < 0 ) ? -((((((*(var_1_2_Pointer))) < (last_1_var_1_8)) ? ((*(var_1_2_Pointer))) : (last_1_var_1_8))) + (((((*(var_1_1_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer))) : ((*(var_1_3_Pointer)))))) : ((((((*(var_1_2_Pointer))) < (last_1_var_1_8)) ? ((*(var_1_2_Pointer))) : (last_1_var_1_8))) + (((((*(var_1_1_Pointer))) > ((*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer))) : ((*(var_1_3_Pointer)))))))))) : ((*(var_1_8_Pointer)) == ((signed short int) ((*(var_1_3_Pointer)) + (*(var_1_1_Pointer)))))) : 1)) && ((2.8f == (*(var_1_10_Pointer))) ? ((*(var_1_12_Pointer)) == ((signed char) ((((((((((*(var_1_13_Pointer))) > (16)) ? ((*(var_1_13_Pointer))) : (16)))) > ((*(var_1_14_Pointer)))) ? ((((((*(var_1_13_Pointer))) > (16)) ? ((*(var_1_13_Pointer))) : (16)))) : ((*(var_1_14_Pointer))))) + (*(var_1_15_Pointer))))) : 1)) && ((*(var_1_16_Pointer)) == ((signed char) ((((-4) < ((*(var_1_14_Pointer)))) ? (-4) : ((*(var_1_14_Pointer)))))))) && (((*(var_1_1_Pointer)) > ((*(var_1_8_Pointer)) + (*(var_1_16_Pointer)))) ? ((*(var_1_17_Pointer)) == ((float) (*(var_1_18_Pointer)))) : 1)
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
