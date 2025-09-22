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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch185Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -128;
signed long int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 1;
unsigned char* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = 0;
signed short int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = 500;
signed short int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 8;
signed long int* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 10000000000000.25;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 31.2;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 16.475;
double* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 100;
signed short int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_11 = -1;
signed short int* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = 16;
signed short int* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 128.25;
double* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = 1227102632;
signed long int* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = 50;
signed long int* var_1_15_Pointer = &(var_1_15);
double var_1_16 = 10.5;
double* var_1_16_Pointer = &(var_1_16);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = (*(var_1_4_Pointer)) - (*(var_1_5_Pointer));
 unsigned char stepLocal_0 = (*(var_1_3_Pointer));
 if ((*(var_1_2_Pointer)) && stepLocal_0) {
  if (stepLocal_1 <= (*(var_1_6_Pointer))) {
   (*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
  }
 }
 signed short int stepLocal_2 = (*(var_1_4_Pointer));
 if (stepLocal_2 == ((((32) < ((*(var_1_5_Pointer)))) ? (32) : ((*(var_1_5_Pointer)))))) {
  if (! (*(var_1_2_Pointer))) {
   (*(var_1_7_Pointer)) = ((((((*(var_1_8_Pointer))) < 0 ) ? -((*(var_1_8_Pointer))) : ((*(var_1_8_Pointer))))) - (*(var_1_9_Pointer)));
  } else {
   (*(var_1_7_Pointer)) = (*(var_1_9_Pointer));
  }
 } else {
  (*(var_1_7_Pointer)) = (*(var_1_8_Pointer));
 }
 signed long int stepLocal_3 = (*(var_1_6_Pointer)) + (*(var_1_1_Pointer));
 if (-64 < stepLocal_3) {
  (*(var_1_10_Pointer)) = ((*(var_1_11_Pointer)) - (*(var_1_12_Pointer)));
 } else {
  (*(var_1_10_Pointer)) = (*(var_1_11_Pointer));
 }
 if (((((- (*(var_1_10_Pointer))) < 0 ) ? -(- (*(var_1_10_Pointer))) : (- (*(var_1_10_Pointer))))) < (((*(var_1_12_Pointer)) + (*(var_1_5_Pointer))) - ((*(var_1_14_Pointer)) - (*(var_1_15_Pointer))))) {
  (*(var_1_13_Pointer)) = (*(var_1_16_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 1073741823);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_2_Pointer)) && (*(var_1_3_Pointer))) ? ((((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))) <= (*(var_1_6_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_5_Pointer)))) : 1) : 1) && (((*(var_1_4_Pointer)) == ((((32) < ((*(var_1_5_Pointer)))) ? (32) : ((*(var_1_5_Pointer)))))) ? ((! (*(var_1_2_Pointer))) ? ((*(var_1_7_Pointer)) == ((double) ((((((*(var_1_8_Pointer))) < 0 ) ? -((*(var_1_8_Pointer))) : ((*(var_1_8_Pointer))))) - (*(var_1_9_Pointer))))) : ((*(var_1_7_Pointer)) == ((double) (*(var_1_9_Pointer))))) : ((*(var_1_7_Pointer)) == ((double) (*(var_1_8_Pointer)))))) && ((-64 < ((*(var_1_6_Pointer)) + (*(var_1_1_Pointer)))) ? ((*(var_1_10_Pointer)) == ((signed short int) ((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))))) : ((*(var_1_10_Pointer)) == ((signed short int) (*(var_1_11_Pointer)))))) && ((((((- (*(var_1_10_Pointer))) < 0 ) ? -(- (*(var_1_10_Pointer))) : (- (*(var_1_10_Pointer))))) < (((*(var_1_12_Pointer)) + (*(var_1_5_Pointer))) - ((*(var_1_14_Pointer)) - (*(var_1_15_Pointer))))) ? ((*(var_1_13_Pointer)) == ((double) (*(var_1_16_Pointer)))) : 1)
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
