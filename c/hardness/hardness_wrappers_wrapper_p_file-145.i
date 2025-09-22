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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 25;
unsigned short int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 32;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 1;
signed long int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 32;
signed long int* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 30958;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 10000;
unsigned short int* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 10000;
unsigned short int* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 10;
unsigned short int* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = 2;
signed long int* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = -25;
signed long int* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 255.5;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 499.77;
double* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = 256;
signed short int* var_1_15_Pointer = &(var_1_15);
double var_1_16 = 64.7;
double* var_1_16_Pointer = &(var_1_16);
signed short int var_1_17 = -256;
signed short int* var_1_17_Pointer = &(var_1_17);
void initially(void) {
}
void step(void) {
 if (((*(var_1_2_Pointer)) + (*(var_1_3_Pointer))) <= (*(var_1_4_Pointer))) {
  (*(var_1_1_Pointer)) = (((*(var_1_5_Pointer)) + ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) - (*(var_1_8_Pointer)));
 }
 unsigned char stepLocal_1 = (10 > (*(var_1_10_Pointer))) && (*(var_1_11_Pointer));
 unsigned short int stepLocal_0 = (*(var_1_5_Pointer));
 if (stepLocal_1 || (*(var_1_12_Pointer))) {
  if (stepLocal_0 >= (*(var_1_10_Pointer))) {
   (*(var_1_9_Pointer)) = (*(var_1_8_Pointer));
  }
 } else {
  (*(var_1_9_Pointer)) = (*(var_1_1_Pointer));
 }
 unsigned short int stepLocal_2 = (*(var_1_8_Pointer));
 if ((*(var_1_9_Pointer)) != stepLocal_2) {
  (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
 }
 unsigned short int stepLocal_3 = (*(var_1_8_Pointer));
 if ((*(var_1_14_Pointer)) <= (((((*(var_1_13_Pointer))) < ((*(var_1_16_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_16_Pointer)))))) {
  if ((((((*(var_1_9_Pointer))) < (((*(var_1_9_Pointer)) & (*(var_1_5_Pointer))))) ? ((*(var_1_9_Pointer))) : (((*(var_1_9_Pointer)) & (*(var_1_5_Pointer)))))) < stepLocal_3) {
   (*(var_1_15_Pointer)) = (*(var_1_6_Pointer));
  } else {
   (*(var_1_15_Pointer)) = (((((((((*(var_1_7_Pointer))) < ((*(var_1_6_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_6_Pointer)))))) < ((*(var_1_17_Pointer)))) ? ((((((*(var_1_7_Pointer))) < ((*(var_1_6_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_6_Pointer)))))) : ((*(var_1_17_Pointer)))));
  }
 } else {
  (*(var_1_15_Pointer)) = (*(var_1_6_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 16383);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 8192);
 assume_abort_if_not(var_1_6 <= 16384);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 8192);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -2147483648);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -32767);
 assume_abort_if_not(var_1_17 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(var_1_2_Pointer)) + (*(var_1_3_Pointer))) <= (*(var_1_4_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (((*(var_1_5_Pointer)) + ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) - (*(var_1_8_Pointer))))) : 1) && ((((10 > (*(var_1_10_Pointer))) && (*(var_1_11_Pointer))) || (*(var_1_12_Pointer))) ? (((*(var_1_5_Pointer)) >= (*(var_1_10_Pointer))) ? ((*(var_1_9_Pointer)) == ((signed long int) (*(var_1_8_Pointer)))) : 1) : ((*(var_1_9_Pointer)) == ((signed long int) (*(var_1_1_Pointer)))))) && (((*(var_1_9_Pointer)) != (*(var_1_8_Pointer))) ? ((*(var_1_13_Pointer)) == ((double) (*(var_1_14_Pointer)))) : 1)) && (((*(var_1_14_Pointer)) <= (((((*(var_1_13_Pointer))) < ((*(var_1_16_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_16_Pointer)))))) ? (((((((*(var_1_9_Pointer))) < (((*(var_1_9_Pointer)) & (*(var_1_5_Pointer))))) ? ((*(var_1_9_Pointer))) : (((*(var_1_9_Pointer)) & (*(var_1_5_Pointer)))))) < (*(var_1_8_Pointer))) ? ((*(var_1_15_Pointer)) == ((signed short int) (*(var_1_6_Pointer)))) : ((*(var_1_15_Pointer)) == ((signed short int) (((((((((*(var_1_7_Pointer))) < ((*(var_1_6_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_6_Pointer)))))) < ((*(var_1_17_Pointer)))) ? ((((((*(var_1_7_Pointer))) < ((*(var_1_6_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_6_Pointer)))))) : ((*(var_1_17_Pointer)))))))) : ((*(var_1_15_Pointer)) == ((signed short int) (*(var_1_6_Pointer)))))
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
