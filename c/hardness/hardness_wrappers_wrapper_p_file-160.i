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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -128;
signed char* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 8;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 1;
signed long int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 2;
signed long int* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = 16;
signed char* var_1_5_Pointer = &(var_1_5);
signed char var_1_6 = 1;
signed char* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = 10;
signed char* var_1_7_Pointer = &(var_1_7);
signed char var_1_8 = 5;
signed char* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 4;
signed char* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 200.75;
double* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = -5;
signed char* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = 1;
signed char* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 1.5;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 127.5;
double* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = -128;
signed long int* var_1_15_Pointer = &(var_1_15);
signed long int var_1_16 = 1350008661;
signed long int* var_1_16_Pointer = &(var_1_16);
signed long int var_1_17 = 1785639034;
signed long int* var_1_17_Pointer = &(var_1_17);
float var_1_18 = 16.2;
float* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 1;
unsigned char* var_1_19_Pointer = &(var_1_19);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (*(var_1_2_Pointer));
 if (stepLocal_0 >= ((*(var_1_3_Pointer)) + (*(var_1_4_Pointer)))) {
  (*(var_1_1_Pointer)) = ((*(var_1_5_Pointer)) - (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))) + (((((*(var_1_8_Pointer))) > ((*(var_1_9_Pointer)))) ? ((*(var_1_8_Pointer))) : ((*(var_1_9_Pointer)))))));
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_8_Pointer));
 }
 signed char stepLocal_1 = (*(var_1_6_Pointer));
 if (stepLocal_1 >= ((*(var_1_9_Pointer)) / (((((*(var_1_11_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_12_Pointer))))))) {
  (*(var_1_10_Pointer)) = (((((*(var_1_13_Pointer))) > (5.8)) ? ((*(var_1_13_Pointer))) : (5.8)));
 } else {
  (*(var_1_10_Pointer)) = (*(var_1_14_Pointer));
 }
 signed long int stepLocal_2 = (*(var_1_12_Pointer)) * (*(var_1_11_Pointer));
 if (stepLocal_2 == (*(var_1_9_Pointer))) {
  (*(var_1_15_Pointer)) = ((*(var_1_7_Pointer)) + (*(var_1_11_Pointer)));
 } else {
  (*(var_1_15_Pointer)) = ((*(var_1_8_Pointer)) - ((((((*(var_1_16_Pointer))) < ((*(var_1_17_Pointer)))) ? ((*(var_1_16_Pointer))) : ((*(var_1_17_Pointer))))) - (*(var_1_6_Pointer))));
 }
 signed long int stepLocal_3 = (*(var_1_17_Pointer)) ^ (*(var_1_9_Pointer));
 if (((*(var_1_7_Pointer)) << (*(var_1_16_Pointer))) != stepLocal_3) {
  if ((*(var_1_19_Pointer))) {
   (*(var_1_18_Pointer)) = (*(var_1_14_Pointer));
  }
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
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 31);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -128);
 assume_abort_if_not(var_1_11 <= 127);
 assume_abort_if_not(var_1_11 != 0);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -128);
 assume_abort_if_not(var_1_12 <= 127);
 assume_abort_if_not(var_1_12 != 0);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 1073741823);
 assume_abort_if_not(var_1_16 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 1073741823);
 assume_abort_if_not(var_1_17 <= 2147483646);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_2_Pointer)) >= ((*(var_1_3_Pointer)) + (*(var_1_4_Pointer)))) ? ((*(var_1_1_Pointer)) == ((signed char) ((*(var_1_5_Pointer)) - (((*(var_1_6_Pointer)) + (*(var_1_7_Pointer))) + (((((*(var_1_8_Pointer))) > ((*(var_1_9_Pointer)))) ? ((*(var_1_8_Pointer))) : ((*(var_1_9_Pointer))))))))) : ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_8_Pointer))))) && (((*(var_1_6_Pointer)) >= ((*(var_1_9_Pointer)) / (((((*(var_1_11_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_12_Pointer))))))) ? ((*(var_1_10_Pointer)) == ((double) (((((*(var_1_13_Pointer))) > (5.8)) ? ((*(var_1_13_Pointer))) : (5.8))))) : ((*(var_1_10_Pointer)) == ((double) (*(var_1_14_Pointer)))))) && ((((*(var_1_12_Pointer)) * (*(var_1_11_Pointer))) == (*(var_1_9_Pointer))) ? ((*(var_1_15_Pointer)) == ((signed long int) ((*(var_1_7_Pointer)) + (*(var_1_11_Pointer))))) : ((*(var_1_15_Pointer)) == ((signed long int) ((*(var_1_8_Pointer)) - ((((((*(var_1_16_Pointer))) < ((*(var_1_17_Pointer)))) ? ((*(var_1_16_Pointer))) : ((*(var_1_17_Pointer))))) - (*(var_1_6_Pointer)))))))) && ((((*(var_1_7_Pointer)) << (*(var_1_16_Pointer))) != ((*(var_1_17_Pointer)) ^ (*(var_1_9_Pointer)))) ? ((*(var_1_19_Pointer)) ? ((*(var_1_18_Pointer)) == ((float) (*(var_1_14_Pointer)))) : 1) : 1)
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
