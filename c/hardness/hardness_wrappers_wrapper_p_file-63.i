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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch63Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 8.3;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 2.25;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 10.3;
float* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 128;
signed long int* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 9.8;
float* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = 32;
signed long int* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = 2;
signed long int* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = 256;
signed long int* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = -256;
signed long int* var_1_12_Pointer = &(var_1_12);
unsigned long int var_1_13 = 1;
unsigned long int* var_1_13_Pointer = &(var_1_13);
unsigned long int var_1_14 = 32;
unsigned long int* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = -10;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 16;
signed char* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = 25;
signed char* var_1_17_Pointer = &(var_1_17);
signed char var_1_18 = 1;
signed char* var_1_18_Pointer = &(var_1_18);
signed char var_1_19 = 0;
signed char* var_1_19_Pointer = &(var_1_19);
signed char var_1_20 = 32;
signed char* var_1_20_Pointer = &(var_1_20);
signed short int var_1_21 = 256;
signed short int* var_1_21_Pointer = &(var_1_21);
signed char var_1_22 = 16;
signed char* var_1_22_Pointer = &(var_1_22);
unsigned char var_1_23 = 0;
unsigned char* var_1_23_Pointer = &(var_1_23);
void initially(void) {
}
void step(void) {
 if ((*(var_1_4_Pointer)) <= ((((((*(var_1_2_Pointer))) < ((*(var_1_3_Pointer)))) ? ((*(var_1_2_Pointer))) : ((*(var_1_3_Pointer))))) * (*(var_1_8_Pointer)))) {
  (*(var_1_7_Pointer)) = ((((((((((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)))) > ((*(var_1_11_Pointer)))) ? (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)))) : ((*(var_1_11_Pointer)))))) > ((((((*(var_1_12_Pointer))) < 0 ) ? -((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer))))))) ? (((((((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)))) > ((*(var_1_11_Pointer)))) ? (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)))) : ((*(var_1_11_Pointer)))))) : ((((((*(var_1_12_Pointer))) < 0 ) ? -((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer))))))));
 } else {
  (*(var_1_7_Pointer)) = (*(var_1_9_Pointer));
 }
 (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
 signed long int stepLocal_0 = (*(var_1_7_Pointer));
 if (stepLocal_0 != (((((*(var_1_9_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_9_Pointer))) : ((*(var_1_12_Pointer)))))) {
  (*(var_1_15_Pointer)) = ((((((10 + (*(var_1_16_Pointer)))) < ((*(var_1_17_Pointer)))) ? ((10 + (*(var_1_16_Pointer)))) : ((*(var_1_17_Pointer))))) - ((32 - (*(var_1_18_Pointer))) + (((((*(var_1_19_Pointer))) > ((*(var_1_20_Pointer)))) ? ((*(var_1_19_Pointer))) : ((*(var_1_20_Pointer)))))));
 }
 (*(var_1_21_Pointer)) = (*(var_1_13_Pointer));
 (*(var_1_22_Pointer)) = (*(var_1_16_Pointer));
 (*(var_1_23_Pointer)) = (*(var_1_6_Pointer));
 if (((((1.1f) < ((*(var_1_2_Pointer)))) ? (1.1f) : ((*(var_1_2_Pointer))))) > ((*(var_1_3_Pointer)) * (*(var_1_4_Pointer)))) {
  (*(var_1_1_Pointer)) = ((*(var_1_23_Pointer)) && (*(var_1_6_Pointer)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -1073741823);
 assume_abort_if_not(var_1_9 <= 1073741823);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -1073741823);
 assume_abort_if_not(var_1_10 <= 1073741823);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483647);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -2147483646);
 assume_abort_if_not(var_1_12 <= 2147483646);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 4294967294);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 63);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 31);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((((((1.1f) < ((*(var_1_2_Pointer)))) ? (1.1f) : ((*(var_1_2_Pointer))))) > ((*(var_1_3_Pointer)) * (*(var_1_4_Pointer)))) ? ((*(var_1_1_Pointer)) == ((unsigned char) ((*(var_1_23_Pointer)) && (*(var_1_6_Pointer))))) : 1) && (((*(var_1_4_Pointer)) <= ((((((*(var_1_2_Pointer))) < ((*(var_1_3_Pointer)))) ? ((*(var_1_2_Pointer))) : ((*(var_1_3_Pointer))))) * (*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer)) == ((signed long int) ((((((((((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)))) > ((*(var_1_11_Pointer)))) ? (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)))) : ((*(var_1_11_Pointer)))))) > ((((((*(var_1_12_Pointer))) < 0 ) ? -((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer))))))) ? (((((((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)))) > ((*(var_1_11_Pointer)))) ? (((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)))) : ((*(var_1_11_Pointer)))))) : ((((((*(var_1_12_Pointer))) < 0 ) ? -((*(var_1_12_Pointer))) : ((*(var_1_12_Pointer)))))))))) : ((*(var_1_7_Pointer)) == ((signed long int) (*(var_1_9_Pointer)))))) && ((*(var_1_13_Pointer)) == ((unsigned long int) (*(var_1_14_Pointer))))) && (((*(var_1_7_Pointer)) != (((((*(var_1_9_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_9_Pointer))) : ((*(var_1_12_Pointer)))))) ? ((*(var_1_15_Pointer)) == ((signed char) ((((((10 + (*(var_1_16_Pointer)))) < ((*(var_1_17_Pointer)))) ? ((10 + (*(var_1_16_Pointer)))) : ((*(var_1_17_Pointer))))) - ((32 - (*(var_1_18_Pointer))) + (((((*(var_1_19_Pointer))) > ((*(var_1_20_Pointer)))) ? ((*(var_1_19_Pointer))) : ((*(var_1_20_Pointer))))))))) : 1)) && ((*(var_1_21_Pointer)) == ((signed short int) (*(var_1_13_Pointer))))) && ((*(var_1_22_Pointer)) == ((signed char) (*(var_1_16_Pointer))))) && ((*(var_1_23_Pointer)) == ((unsigned char) (*(var_1_6_Pointer))))
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
