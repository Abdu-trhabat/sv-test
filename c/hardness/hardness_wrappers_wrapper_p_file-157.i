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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch157Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 200;
signed long int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 1;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 8;
signed long int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_5 = -16;
signed long int* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 1000000000;
signed long int* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = 128;
signed long int* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 0.6;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 64.75;
float* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 24.99;
float* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 16.75;
float* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 63.5;
float* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 4.75;
float* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = 1000000;
signed long int* var_1_15_Pointer = &(var_1_15);
signed long int var_1_16 = 2;
signed long int* var_1_16_Pointer = &(var_1_16);
signed long int var_1_17 = 25;
signed long int* var_1_17_Pointer = &(var_1_17);
signed long int var_1_18 = -10;
signed long int* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 0;
unsigned char* var_1_19_Pointer = &(var_1_19);
unsigned char var_1_20 = 1;
unsigned char* var_1_20_Pointer = &(var_1_20);
unsigned char var_1_21 = 10;
unsigned char* var_1_21_Pointer = &(var_1_21);
unsigned char var_1_22 = 128;
unsigned char* var_1_22_Pointer = &(var_1_22);
unsigned char var_1_23 = 8;
unsigned char* var_1_23_Pointer = &(var_1_23);
unsigned char var_1_24 = 10;
unsigned char* var_1_24_Pointer = &(var_1_24);
unsigned char var_1_25 = 10;
unsigned char* var_1_25_Pointer = &(var_1_25);
void initially(void) {
}
void step(void) {
 if (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))) >= ((((((*(var_1_11_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_12_Pointer))))) - (((((*(var_1_13_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))))) {
  (*(var_1_8_Pointer)) = ((*(var_1_15_Pointer)) - (*(var_1_16_Pointer)));
 } else {
  (*(var_1_8_Pointer)) = (*(var_1_17_Pointer));
 }
 if ((*(var_1_6_Pointer)) && ((*(var_1_19_Pointer)) && (*(var_1_20_Pointer)))) {
  (*(var_1_18_Pointer)) = -200;
 }
 (*(var_1_21_Pointer)) = ((*(var_1_22_Pointer)) - ((32 - (*(var_1_23_Pointer))) + (((((*(var_1_24_Pointer))) < ((*(var_1_25_Pointer)))) ? ((*(var_1_24_Pointer))) : ((*(var_1_25_Pointer)))))));
 signed long int stepLocal_1 = (((((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)))) > ((*(var_1_8_Pointer)))) ? (((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)))) : ((*(var_1_8_Pointer))));
 signed long int stepLocal_0 = (*(var_1_2_Pointer)) / (*(var_1_5_Pointer));
 if (128 <= stepLocal_1) {
  if ((*(var_1_3_Pointer)) <= stepLocal_0) {
   if ((*(var_1_6_Pointer))) {
    (*(var_1_1_Pointer)) = 10;
   } else {
    (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
   }
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483647);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -1);
 assume_abort_if_not(var_1_15 <= 2147483646);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -2147483647);
 assume_abort_if_not(var_1_17 <= 2147483646);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 127);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 32);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 63);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((128 <= ((((((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)))) > ((*(var_1_8_Pointer)))) ? (((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)))) : ((*(var_1_8_Pointer)))))) ? (((*(var_1_3_Pointer)) <= ((*(var_1_2_Pointer)) / (*(var_1_5_Pointer)))) ? ((*(var_1_6_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed long int) 10)) : ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_7_Pointer))))) : ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_7_Pointer))))) : ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_7_Pointer))))) && ((((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))) >= ((((((*(var_1_11_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_12_Pointer))))) - (((((*(var_1_13_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))))) ? ((*(var_1_8_Pointer)) == ((signed long int) ((*(var_1_15_Pointer)) - (*(var_1_16_Pointer))))) : ((*(var_1_8_Pointer)) == ((signed long int) (*(var_1_17_Pointer)))))) && (((*(var_1_6_Pointer)) && ((*(var_1_19_Pointer)) && (*(var_1_20_Pointer)))) ? ((*(var_1_18_Pointer)) == ((signed long int) -200)) : 1)) && ((*(var_1_21_Pointer)) == ((unsigned char) ((*(var_1_22_Pointer)) - ((32 - (*(var_1_23_Pointer))) + (((((*(var_1_24_Pointer))) < ((*(var_1_25_Pointer)))) ? ((*(var_1_24_Pointer))) : ((*(var_1_25_Pointer)))))))))
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
