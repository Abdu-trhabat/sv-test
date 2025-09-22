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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch98Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 4.8;
double* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 63.5;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 9999999.5;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 0.6;
double* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 0;
signed long int* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = 25;
signed short int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = -1;
signed long int* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 4.4;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 7.25;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 7.5;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 2.3;
double* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 128;
unsigned long int* var_1_12_Pointer = &(var_1_12);
unsigned long int var_1_13 = 4078799264;
unsigned long int* var_1_13_Pointer = &(var_1_13);
unsigned long int var_1_14 = 500;
unsigned long int* var_1_14_Pointer = &(var_1_14);
void initially(void) {
}
void step(void) {
 (*(var_1_1_Pointer)) = ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)));
 signed long int stepLocal_0 = ((*(var_1_5_Pointer)) >> (*(var_1_6_Pointer))) / (*(var_1_7_Pointer));
 if (8 < stepLocal_0) {
  (*(var_1_4_Pointer)) = ((((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) + (((((*(var_1_10_Pointer))) < (1.9)) ? ((*(var_1_10_Pointer))) : (1.9)))) + (99.125 + (*(var_1_11_Pointer))));
 }
 if ((*(var_1_2_Pointer)) < (*(var_1_8_Pointer))) {
  if (((- (*(var_1_5_Pointer))) <= (*(var_1_6_Pointer))) || ((*(var_1_4_Pointer)) < (*(var_1_10_Pointer)))) {
   (*(var_1_12_Pointer)) = (((((*(var_1_5_Pointer))) < ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer)))));
  } else {
   (*(var_1_12_Pointer)) = ((*(var_1_13_Pointer)) - (*(var_1_5_Pointer)));
  }
 }
 if (((((-128) < ((*(var_1_12_Pointer)))) ? (-128) : ((*(var_1_12_Pointer))))) < (*(var_1_13_Pointer))) {
  if ((*(var_1_2_Pointer)) > (*(var_1_10_Pointer))) {
   (*(var_1_14_Pointer)) = ((*(var_1_6_Pointer)) + (*(var_1_5_Pointer)));
  } else {
   (*(var_1_14_Pointer)) = (*(var_1_13_Pointer));
  }
 } else {
  (*(var_1_14_Pointer)) = (*(var_1_13_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 30);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -115292.1504606845700e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 1152921.504606845700e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -115292.1504606845700e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 1152921.504606845700e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -230584.3009213691400e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 2305843.009213691400e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= -230584.3009213691400e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 2147483647);
 assume_abort_if_not(var_1_13 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(var_1_1_Pointer)) == ((double) ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer))))) && ((8 < (((*(var_1_5_Pointer)) >> (*(var_1_6_Pointer))) / (*(var_1_7_Pointer)))) ? ((*(var_1_4_Pointer)) == ((double) ((((*(var_1_8_Pointer)) + (*(var_1_9_Pointer))) + (((((*(var_1_10_Pointer))) < (1.9)) ? ((*(var_1_10_Pointer))) : (1.9)))) + (99.125 + (*(var_1_11_Pointer)))))) : 1)) && (((*(var_1_2_Pointer)) < (*(var_1_8_Pointer))) ? ((((- (*(var_1_5_Pointer))) <= (*(var_1_6_Pointer))) || ((*(var_1_4_Pointer)) < (*(var_1_10_Pointer)))) ? ((*(var_1_12_Pointer)) == ((unsigned long int) (((((*(var_1_5_Pointer))) < ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer))))))) : ((*(var_1_12_Pointer)) == ((unsigned long int) ((*(var_1_13_Pointer)) - (*(var_1_5_Pointer)))))) : 1)) && ((((((-128) < ((*(var_1_12_Pointer)))) ? (-128) : ((*(var_1_12_Pointer))))) < (*(var_1_13_Pointer))) ? (((*(var_1_2_Pointer)) > (*(var_1_10_Pointer))) ? ((*(var_1_14_Pointer)) == ((unsigned long int) ((*(var_1_6_Pointer)) + (*(var_1_5_Pointer))))) : ((*(var_1_14_Pointer)) == ((unsigned long int) (*(var_1_13_Pointer))))) : ((*(var_1_14_Pointer)) == ((unsigned long int) (*(var_1_13_Pointer)))))
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
