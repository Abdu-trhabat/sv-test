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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 4.8;
float* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 2;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 5;
unsigned long int* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 255.1;
float* var_1_4_Pointer = &(var_1_4);
float var_1_5 = -0.6;
float* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = -10;
signed short int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 1;
unsigned char* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = -4;
signed short int* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = -100;
signed short int* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = 0;
signed char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 128;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 10;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned short int var_1_14 = 8;
unsigned short int* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = -4;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = -2;
signed char* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = 8;
signed char* var_1_17_Pointer = &(var_1_17);
double var_1_18 = 999999.2;
double* var_1_18_Pointer = &(var_1_18);
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = ~ (*(var_1_3_Pointer));
 if ((*(var_1_2_Pointer)) >= stepLocal_0) {
  (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer)));
 }
 if ((*(var_1_7_Pointer))) {
  if ((*(var_1_8_Pointer))) {
   (*(var_1_6_Pointer)) = ((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)));
  } else {
   (*(var_1_6_Pointer)) = (*(var_1_9_Pointer));
  }
 } else {
  (*(var_1_6_Pointer)) = (*(var_1_9_Pointer));
 }
 unsigned long int stepLocal_3 = (*(var_1_3_Pointer)) * (*(var_1_2_Pointer));
 signed long int stepLocal_2 = (*(var_1_14_Pointer)) % (*(var_1_12_Pointer));
 unsigned long int stepLocal_1 = (*(var_1_2_Pointer));
 if (((*(var_1_12_Pointer)) - (64 - (*(var_1_13_Pointer)))) != stepLocal_1) {
  if (stepLocal_2 >= (*(var_1_3_Pointer))) {
   if (! (*(var_1_7_Pointer))) {
    (*(var_1_11_Pointer)) = (((*(var_1_15_Pointer)) + (*(var_1_16_Pointer))) + ((*(var_1_13_Pointer)) - (*(var_1_17_Pointer))));
   }
  } else {
   if (32u >= stepLocal_3) {
    (*(var_1_11_Pointer)) = 1;
   } else {
    (*(var_1_11_Pointer)) = (*(var_1_15_Pointer));
   }
  }
 }
 (*(var_1_18_Pointer)) = (*(var_1_4_Pointer));
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -16383);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -16383);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 127);
 assume_abort_if_not(var_1_12 <= 255);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 65535);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -31);
 assume_abort_if_not(var_1_15 <= 32);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -31);
 assume_abort_if_not(var_1_16 <= 31);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_2_Pointer)) >= (~ (*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer)) == ((float) ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))) : 1) && ((*(var_1_7_Pointer)) ? ((*(var_1_8_Pointer)) ? ((*(var_1_6_Pointer)) == ((signed short int) ((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))))) : ((*(var_1_6_Pointer)) == ((signed short int) (*(var_1_9_Pointer))))) : ((*(var_1_6_Pointer)) == ((signed short int) (*(var_1_9_Pointer)))))) && ((((*(var_1_12_Pointer)) - (64 - (*(var_1_13_Pointer)))) != (*(var_1_2_Pointer))) ? ((((*(var_1_14_Pointer)) % (*(var_1_12_Pointer))) >= (*(var_1_3_Pointer))) ? ((! (*(var_1_7_Pointer))) ? ((*(var_1_11_Pointer)) == ((signed char) (((*(var_1_15_Pointer)) + (*(var_1_16_Pointer))) + ((*(var_1_13_Pointer)) - (*(var_1_17_Pointer)))))) : 1) : ((32u >= ((*(var_1_3_Pointer)) * (*(var_1_2_Pointer)))) ? ((*(var_1_11_Pointer)) == ((signed char) 1)) : ((*(var_1_11_Pointer)) == ((signed char) (*(var_1_15_Pointer)))))) : 1)) && ((*(var_1_18_Pointer)) == ((double) (*(var_1_4_Pointer))))
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
