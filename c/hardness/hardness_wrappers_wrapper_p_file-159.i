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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = -16;
signed long int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 64;
unsigned short int* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 256.305;
float* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 25.25;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 128.8;
float* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 50.825;
float* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 32;
signed long int* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = -64;
signed long int* var_1_13_Pointer = &(var_1_13);
unsigned short int var_1_14 = 5;
unsigned short int* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = -100;
signed short int* var_1_15_Pointer = &(var_1_15);
signed long int var_1_16 = 0;
signed long int* var_1_16_Pointer = &(var_1_16);
signed short int var_1_17 = 10;
signed short int* var_1_17_Pointer = &(var_1_17);
float var_1_18 = 128.75;
float* var_1_18_Pointer = &(var_1_18);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (*(var_1_3_Pointer));
 if ((*(var_1_2_Pointer))) {
  if (64 < stepLocal_0) {
   (*(var_1_1_Pointer)) = (! ((*(var_1_4_Pointer)) && (*(var_1_5_Pointer))));
  }
 } else {
  if ((*(var_1_5_Pointer))) {
   (*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
  }
 }
 if ((((*(var_1_8_Pointer)) - (*(var_1_9_Pointer))) / (*(var_1_10_Pointer))) < (*(var_1_11_Pointer))) {
  if ((((((*(var_1_3_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_12_Pointer))))) < (*(var_1_13_Pointer))) {
   if ((*(var_1_4_Pointer))) {
    (*(var_1_7_Pointer)) = (((((*(var_1_14_Pointer))) < (1)) ? ((*(var_1_14_Pointer))) : (1)));
   }
  }
 }
 signed long int stepLocal_1 = ((*(var_1_14_Pointer)) - (*(var_1_7_Pointer))) * ((*(var_1_16_Pointer)) >> (*(var_1_17_Pointer)));
 if (-128 == stepLocal_1) {
  if ((*(var_1_9_Pointer)) > ((*(var_1_8_Pointer)) - (*(var_1_18_Pointer)))) {
   if ((*(var_1_18_Pointer)) < 4.8f) {
    (*(var_1_15_Pointer)) = (*(var_1_17_Pointer));
   } else {
    (*(var_1_15_Pointer)) = -32;
   }
  } else {
   (*(var_1_15_Pointer)) = (*(var_1_17_Pointer));
  }
 } else {
  (*(var_1_15_Pointer)) = (*(var_1_17_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(var_1_10 != 0.0F);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -2147483648);
 assume_abort_if_not(var_1_13 <= 2147483647);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 65534);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 30);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((*(var_1_2_Pointer)) ? ((64 < (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (! ((*(var_1_4_Pointer)) && (*(var_1_5_Pointer)))))) : 1) : ((*(var_1_5_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_6_Pointer)))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_4_Pointer)))))) && (((((*(var_1_8_Pointer)) - (*(var_1_9_Pointer))) / (*(var_1_10_Pointer))) < (*(var_1_11_Pointer))) ? (((((((*(var_1_3_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_12_Pointer))))) < (*(var_1_13_Pointer))) ? ((*(var_1_4_Pointer)) ? ((*(var_1_7_Pointer)) == ((unsigned short int) (((((*(var_1_14_Pointer))) < (1)) ? ((*(var_1_14_Pointer))) : (1))))) : 1) : 1) : 1)) && ((-128 == (((*(var_1_14_Pointer)) - (*(var_1_7_Pointer))) * ((*(var_1_16_Pointer)) >> (*(var_1_17_Pointer))))) ? (((*(var_1_9_Pointer)) > ((*(var_1_8_Pointer)) - (*(var_1_18_Pointer)))) ? (((*(var_1_18_Pointer)) < 4.8f) ? ((*(var_1_15_Pointer)) == ((signed short int) (*(var_1_17_Pointer)))) : ((*(var_1_15_Pointer)) == ((signed short int) -32))) : ((*(var_1_15_Pointer)) == ((signed short int) (*(var_1_17_Pointer))))) : ((*(var_1_15_Pointer)) == ((signed short int) (*(var_1_17_Pointer)))))
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
