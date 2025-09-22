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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch73Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 5.5;
double* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 8;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 2;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_4 = 10;
unsigned long int* var_1_4_Pointer = &(var_1_4);
unsigned long int var_1_5 = 64;
unsigned long int* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 1;
unsigned char* var_1_6_Pointer = &(var_1_6);
double var_1_7 = -0.41;
double* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = -4;
signed long int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 1;
unsigned char* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = 4;
signed long int* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = 1000000;
signed long int* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 16;
signed long int* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = 64;
signed long int* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 1.25;
float* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 64.5;
float* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 1;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 0;
unsigned char* var_1_17_Pointer = &(var_1_17);
double var_1_18 = 2.6;
double* var_1_18_Pointer = &(var_1_18);
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = (*(var_1_9_Pointer));
 unsigned char stepLocal_1 = (~ (*(var_1_13_Pointer))) <= (*(var_1_11_Pointer));
 if ((*(var_1_6_Pointer)) && stepLocal_2) {
  (*(var_1_8_Pointer)) = (((((*(var_1_10_Pointer))) < ((((((64) < ((*(var_1_11_Pointer)))) ? (64) : ((*(var_1_11_Pointer))))) - ((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)))))) ? ((*(var_1_10_Pointer))) : ((((((64) < ((*(var_1_11_Pointer)))) ? (64) : ((*(var_1_11_Pointer))))) - ((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)))))));
 } else {
  if (stepLocal_1 && (*(var_1_6_Pointer))) {
   (*(var_1_8_Pointer)) = (*(var_1_11_Pointer));
  } else {
   (*(var_1_8_Pointer)) = 32;
  }
 }
 unsigned char stepLocal_3 = (*(var_1_11_Pointer)) >= (*(var_1_2_Pointer));
 if (((*(var_1_13_Pointer)) <= (*(var_1_12_Pointer))) || stepLocal_3) {
  (*(var_1_14_Pointer)) = (((((*(var_1_7_Pointer))) < ((*(var_1_15_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_15_Pointer)))));
 } else {
  (*(var_1_14_Pointer)) = (*(var_1_7_Pointer));
 }
 (*(var_1_16_Pointer)) = (*(var_1_17_Pointer));
 (*(var_1_18_Pointer)) = (*(var_1_7_Pointer));
 unsigned long int stepLocal_0 = ((((*(var_1_3_Pointer))) > (((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))) ? ((*(var_1_3_Pointer))) : (((*(var_1_4_Pointer)) + (*(var_1_5_Pointer)))));
 if ((*(var_1_2_Pointer)) <= stepLocal_0) {
  if (! (*(var_1_16_Pointer))) {
   (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
  } else {
   (*(var_1_1_Pointer)) = 255.375;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483647);
 assume_abort_if_not(var_1_10 <= 2147483646);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(var_1_2_Pointer)) <= (((((*(var_1_3_Pointer))) > (((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))) ? ((*(var_1_3_Pointer))) : (((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))))) ? ((! (*(var_1_16_Pointer))) ? ((*(var_1_1_Pointer)) == ((double) (*(var_1_7_Pointer)))) : ((*(var_1_1_Pointer)) == ((double) 255.375))) : 1) && (((*(var_1_6_Pointer)) && (*(var_1_9_Pointer))) ? ((*(var_1_8_Pointer)) == ((signed long int) (((((*(var_1_10_Pointer))) < ((((((64) < ((*(var_1_11_Pointer)))) ? (64) : ((*(var_1_11_Pointer))))) - ((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)))))) ? ((*(var_1_10_Pointer))) : ((((((64) < ((*(var_1_11_Pointer)))) ? (64) : ((*(var_1_11_Pointer))))) - ((*(var_1_12_Pointer)) + (*(var_1_13_Pointer))))))))) : ((((~ (*(var_1_13_Pointer))) <= (*(var_1_11_Pointer))) && (*(var_1_6_Pointer))) ? ((*(var_1_8_Pointer)) == ((signed long int) (*(var_1_11_Pointer)))) : ((*(var_1_8_Pointer)) == ((signed long int) 32))))) && ((((*(var_1_13_Pointer)) <= (*(var_1_12_Pointer))) || ((*(var_1_11_Pointer)) >= (*(var_1_2_Pointer)))) ? ((*(var_1_14_Pointer)) == ((float) (((((*(var_1_7_Pointer))) < ((*(var_1_15_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_15_Pointer))))))) : ((*(var_1_14_Pointer)) == ((float) (*(var_1_7_Pointer)))))) && ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_17_Pointer))))) && ((*(var_1_18_Pointer)) == ((double) (*(var_1_7_Pointer))))
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
