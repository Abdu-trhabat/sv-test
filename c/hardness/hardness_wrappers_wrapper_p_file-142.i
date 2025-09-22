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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch142Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 5;
signed long int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 50;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 500;
unsigned long int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 128;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 64;
signed long int* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 15.5;
double* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 39435;
unsigned short int* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 64;
unsigned short int* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 10.5;
double* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 50;
signed short int* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = -32;
signed short int* var_1_13_Pointer = &(var_1_13);
signed short int var_1_14 = 0;
signed short int* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 0.4;
double* var_1_15_Pointer = &(var_1_15);
double var_1_16 = 256.5;
double* var_1_16_Pointer = &(var_1_16);
double var_1_17 = 128.6;
double* var_1_17_Pointer = &(var_1_17);
double var_1_18 = 499.4;
double* var_1_18_Pointer = &(var_1_18);
double var_1_19 = 5.4;
double* var_1_19_Pointer = &(var_1_19);
double var_1_20 = 4.25;
double* var_1_20_Pointer = &(var_1_20);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) {
  if ((*(var_1_3_Pointer)) <= (*(var_1_2_Pointer))) {
   (*(var_1_1_Pointer)) = (1 - (*(var_1_4_Pointer)));
  } else {
   (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)));
  }
 }
 if (((*(var_1_7_Pointer)) - (*(var_1_8_Pointer))) <= 0) {
  (*(var_1_6_Pointer)) = (((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer)))));
 }
 unsigned char stepLocal_0 = (*(var_1_11_Pointer));
 if (stepLocal_0 && (*(var_1_12_Pointer))) {
  (*(var_1_10_Pointer)) = (*(var_1_13_Pointer));
 } else {
  (*(var_1_10_Pointer)) = (((((*(var_1_13_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer)))));
 }
 unsigned long int stepLocal_1 = (*(var_1_2_Pointer));
 if (stepLocal_1 == (((((*(var_1_7_Pointer))) > ((*(var_1_5_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_5_Pointer)))))) {
  (*(var_1_15_Pointer)) = ((*(var_1_16_Pointer)) + (*(var_1_17_Pointer)));
 } else {
  (*(var_1_15_Pointer)) = ((*(var_1_18_Pointer)) - (*(var_1_19_Pointer)));
 }
 unsigned long int stepLocal_2 = (*(var_1_3_Pointer));
 if ((*(var_1_19_Pointer)) <= (*(var_1_17_Pointer))) {
  if (stepLocal_2 < (*(var_1_7_Pointer))) {
   (*(var_1_20_Pointer)) = 199.75;
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
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 2147483646);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483646);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 32767);
 assume_abort_if_not(var_1_7 <= 65535);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -32767);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) ? (((*(var_1_3_Pointer)) <= (*(var_1_2_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed long int) (1 - (*(var_1_4_Pointer))))) : ((*(var_1_1_Pointer)) == ((signed long int) ((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)))))) : 1) && ((((*(var_1_7_Pointer)) - (*(var_1_8_Pointer))) <= 0) ? ((*(var_1_6_Pointer)) == ((double) (((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer))))))) : 1)) && (((*(var_1_11_Pointer)) && (*(var_1_12_Pointer))) ? ((*(var_1_10_Pointer)) == ((signed short int) (*(var_1_13_Pointer)))) : ((*(var_1_10_Pointer)) == ((signed short int) (((((*(var_1_13_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))))))) && (((*(var_1_2_Pointer)) == (((((*(var_1_7_Pointer))) > ((*(var_1_5_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_5_Pointer)))))) ? ((*(var_1_15_Pointer)) == ((double) ((*(var_1_16_Pointer)) + (*(var_1_17_Pointer))))) : ((*(var_1_15_Pointer)) == ((double) ((*(var_1_18_Pointer)) - (*(var_1_19_Pointer))))))) && (((*(var_1_19_Pointer)) <= (*(var_1_17_Pointer))) ? (((*(var_1_3_Pointer)) < (*(var_1_7_Pointer))) ? ((*(var_1_20_Pointer)) == ((double) 199.75)) : 1) : 1)
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
