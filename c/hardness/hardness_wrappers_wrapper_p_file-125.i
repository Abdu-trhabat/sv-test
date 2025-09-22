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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 7.25;
float* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 1.8199999999999998;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 0.0;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 99999999999.35;
float* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 1;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 100.5;
double* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 1;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 56793;
unsigned short int* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 8;
unsigned short int* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = -50;
signed long int* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 9.25;
float* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 49.6;
float* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 32;
signed char* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = 8;
signed char* var_1_17_Pointer = &(var_1_17);
signed char var_1_18 = 32;
signed char* var_1_18_Pointer = &(var_1_18);
unsigned short int var_1_19 = 64;
unsigned short int* var_1_19_Pointer = &(var_1_19);
signed char var_1_20 = 100;
signed char* var_1_20_Pointer = &(var_1_20);
unsigned short int var_1_21 = 58395;
unsigned short int* var_1_21_Pointer = &(var_1_21);
unsigned short int var_1_22 = 32;
unsigned short int* var_1_22_Pointer = &(var_1_22);
void initially(void) {
}
void step(void) {
 (*(var_1_1_Pointer)) = ((*(var_1_2_Pointer)) - ((*(var_1_4_Pointer)) + 32.4f));
 (*(var_1_5_Pointer)) = ((*(var_1_6_Pointer)) && (! (*(var_1_7_Pointer))));
 (*(var_1_8_Pointer)) = (*(var_1_3_Pointer));
 signed long int stepLocal_0 = (*(var_1_12_Pointer));
 if (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))) < stepLocal_0) {
  (*(var_1_9_Pointer)) = (*(var_1_13_Pointer));
 }
 (*(var_1_14_Pointer)) = ((*(var_1_4_Pointer)) + (*(var_1_15_Pointer)));
 if (((*(var_1_14_Pointer)) * (*(var_1_2_Pointer))) >= (*(var_1_3_Pointer))) {
  (*(var_1_16_Pointer)) = (((*(var_1_17_Pointer)) + (*(var_1_18_Pointer))) - 32);
 }
 if ((*(var_1_2_Pointer)) > (*(var_1_8_Pointer))) {
  if (! ((*(var_1_16_Pointer)) < (*(var_1_20_Pointer)))) {
   (*(var_1_19_Pointer)) = ((((((((8) < (((*(var_1_21_Pointer)) - 8))) ? (8) : (((*(var_1_21_Pointer)) - 8))))) > ((*(var_1_17_Pointer)))) ? (((((8) < (((*(var_1_21_Pointer)) - 8))) ? (8) : (((*(var_1_21_Pointer)) - 8))))) : ((*(var_1_17_Pointer)))));
  }
 } else {
  (*(var_1_19_Pointer)) = 50;
 }
 (*(var_1_22_Pointer)) = (*(var_1_11_Pointer));
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 6917529.027641074000e+12F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65535);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483648);
 assume_abort_if_not(var_1_12 <= 2147483647);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -128);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((*(var_1_1_Pointer)) == ((float) ((*(var_1_2_Pointer)) - ((*(var_1_4_Pointer)) + 32.4f)))) && ((*(var_1_5_Pointer)) == ((unsigned char) ((*(var_1_6_Pointer)) && (! (*(var_1_7_Pointer))))))) && ((*(var_1_8_Pointer)) == ((double) (*(var_1_3_Pointer))))) && ((((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))) < (*(var_1_12_Pointer))) ? ((*(var_1_9_Pointer)) == ((unsigned char) (*(var_1_13_Pointer)))) : 1)) && ((*(var_1_14_Pointer)) == ((float) ((*(var_1_4_Pointer)) + (*(var_1_15_Pointer)))))) && ((((*(var_1_14_Pointer)) * (*(var_1_2_Pointer))) >= (*(var_1_3_Pointer))) ? ((*(var_1_16_Pointer)) == ((signed char) (((*(var_1_17_Pointer)) + (*(var_1_18_Pointer))) - 32))) : 1)) && (((*(var_1_2_Pointer)) > (*(var_1_8_Pointer))) ? ((! ((*(var_1_16_Pointer)) < (*(var_1_20_Pointer)))) ? ((*(var_1_19_Pointer)) == ((unsigned short int) ((((((((8) < (((*(var_1_21_Pointer)) - 8))) ? (8) : (((*(var_1_21_Pointer)) - 8))))) > ((*(var_1_17_Pointer)))) ? (((((8) < (((*(var_1_21_Pointer)) - 8))) ? (8) : (((*(var_1_21_Pointer)) - 8))))) : ((*(var_1_17_Pointer))))))) : 1) : ((*(var_1_19_Pointer)) == ((unsigned short int) 50)))) && ((*(var_1_22_Pointer)) == ((unsigned short int) (*(var_1_11_Pointer))))
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
