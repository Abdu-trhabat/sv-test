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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch70Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 0;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned short int var_1_3 = 1;
unsigned short int* var_1_3_Pointer = &(var_1_3);
unsigned short int var_1_4 = 19138;
unsigned short int* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 0;
unsigned short int* var_1_5_Pointer = &(var_1_5);
signed char var_1_6 = 25;
signed char* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = -50;
signed long int* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 8.3;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 255.6;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 10000000.375;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 0.0;
double* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 255.375;
double* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 50;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 2;
unsigned char* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 1;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 5;
signed char* var_1_16_Pointer = &(var_1_16);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer))) {
  (*(var_1_1_Pointer)) = ((17222 - (*(var_1_3_Pointer))) + (((((29916) < ((*(var_1_4_Pointer)))) ? (29916) : ((*(var_1_4_Pointer))))) - (*(var_1_5_Pointer))));
 }
 if ((*(var_1_2_Pointer)) && ((*(var_1_4_Pointer)) >= ((*(var_1_3_Pointer)) + (*(var_1_1_Pointer))))) {
  (*(var_1_6_Pointer)) = 8;
 }
 signed long int stepLocal_0 = ((((*(var_1_3_Pointer))) > (((*(var_1_5_Pointer)) << (*(var_1_1_Pointer))))) ? ((*(var_1_3_Pointer))) : (((*(var_1_5_Pointer)) << (*(var_1_1_Pointer)))));
 if ((*(var_1_4_Pointer)) <= stepLocal_0) {
  (*(var_1_7_Pointer)) = ((((((*(var_1_5_Pointer)) - (*(var_1_3_Pointer)))) < ((*(var_1_4_Pointer)))) ? (((*(var_1_5_Pointer)) - (*(var_1_3_Pointer)))) : ((*(var_1_4_Pointer)))));
 } else {
  (*(var_1_7_Pointer)) = ((*(var_1_5_Pointer)) + ((*(var_1_6_Pointer)) + (*(var_1_4_Pointer))));
 }
 (*(var_1_13_Pointer)) = (*(var_1_14_Pointer));
 (*(var_1_15_Pointer)) = (*(var_1_16_Pointer));
 unsigned char stepLocal_1 = (*(var_1_13_Pointer));
 if (stepLocal_1 < (*(var_1_7_Pointer))) {
  (*(var_1_8_Pointer)) = ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer)));
 } else {
  (*(var_1_8_Pointer)) = (((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))) - (*(var_1_9_Pointer)));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 16383);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 16383);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_11 >= 4611686.018427383000e+12F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(var_1_2_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned short int) ((17222 - (*(var_1_3_Pointer))) + (((((29916) < ((*(var_1_4_Pointer)))) ? (29916) : ((*(var_1_4_Pointer))))) - (*(var_1_5_Pointer)))))) : 1) && (((*(var_1_2_Pointer)) && ((*(var_1_4_Pointer)) >= ((*(var_1_3_Pointer)) + (*(var_1_1_Pointer))))) ? ((*(var_1_6_Pointer)) == ((signed char) 8)) : 1)) && (((*(var_1_4_Pointer)) <= (((((*(var_1_3_Pointer))) > (((*(var_1_5_Pointer)) << (*(var_1_1_Pointer))))) ? ((*(var_1_3_Pointer))) : (((*(var_1_5_Pointer)) << (*(var_1_1_Pointer))))))) ? ((*(var_1_7_Pointer)) == ((signed long int) ((((((*(var_1_5_Pointer)) - (*(var_1_3_Pointer)))) < ((*(var_1_4_Pointer)))) ? (((*(var_1_5_Pointer)) - (*(var_1_3_Pointer)))) : ((*(var_1_4_Pointer))))))) : ((*(var_1_7_Pointer)) == ((signed long int) ((*(var_1_5_Pointer)) + ((*(var_1_6_Pointer)) + (*(var_1_4_Pointer)))))))) && (((*(var_1_13_Pointer)) < (*(var_1_7_Pointer))) ? ((*(var_1_8_Pointer)) == ((double) ((*(var_1_9_Pointer)) - (*(var_1_10_Pointer))))) : ((*(var_1_8_Pointer)) == ((double) (((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))) - (*(var_1_9_Pointer))))))) && ((*(var_1_13_Pointer)) == ((unsigned char) (*(var_1_14_Pointer))))) && ((*(var_1_15_Pointer)) == ((signed char) (*(var_1_16_Pointer))))
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
