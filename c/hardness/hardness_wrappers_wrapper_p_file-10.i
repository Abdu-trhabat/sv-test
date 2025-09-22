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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
unsigned long int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 8;
unsigned long int* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 9.15;
double* var_1_3_Pointer = &(var_1_3);
signed char var_1_4 = 2;
signed char* var_1_4_Pointer = &(var_1_4);
double var_1_6 = 1000000.875;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 49.25;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = -0.8;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 100000000000.6;
double* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 1;
unsigned char* var_1_15_Pointer = &(var_1_15);
double var_1_16 = 24.125;
double* var_1_16_Pointer = &(var_1_16);
double var_1_17 = 0.7;
double* var_1_17_Pointer = &(var_1_17);
double var_1_18 = 0.0;
double* var_1_18_Pointer = &(var_1_18);
double var_1_19 = 25.7;
double* var_1_19_Pointer = &(var_1_19);
double var_1_21 = -0.375;
double* var_1_21_Pointer = &(var_1_21);
double last_1_var_1_3 = 9.15;
void initially(void) {
}
void step(void) {
 (*(var_1_1_Pointer)) = (*(var_1_2_Pointer));
 unsigned long int stepLocal_0 = (*(var_1_1_Pointer));
 if ((*(var_1_4_Pointer)) < stepLocal_0) {
  (*(var_1_3_Pointer)) = -0.5;
 } else {
  if ((- last_1_var_1_3) == ((*(var_1_6_Pointer)) - (*(var_1_7_Pointer)))) {
   (*(var_1_3_Pointer)) = (*(var_1_8_Pointer));
  } else {
   (*(var_1_3_Pointer)) = (*(var_1_9_Pointer));
  }
 }
 if ((*(var_1_11_Pointer))) {
  if ((*(var_1_2_Pointer)) <= 1u) {
   (*(var_1_10_Pointer)) = (! ((*(var_1_12_Pointer)) && ((*(var_1_13_Pointer)) || (*(var_1_14_Pointer)))));
  } else {
   (*(var_1_10_Pointer)) = (! ((*(var_1_14_Pointer)) && (*(var_1_13_Pointer))));
  }
 } else {
  (*(var_1_10_Pointer)) = (! (*(var_1_15_Pointer)));
 }
 if ((*(var_1_10_Pointer))) {
  (*(var_1_16_Pointer)) = ((*(var_1_17_Pointer)) - ((*(var_1_18_Pointer)) - (*(var_1_19_Pointer))));
 } else {
  if (((*(var_1_10_Pointer)) || (*(var_1_15_Pointer))) && ((*(var_1_6_Pointer)) <= (*(var_1_8_Pointer)))) {
   (*(var_1_16_Pointer)) = (*(var_1_21_Pointer));
  } else {
   (*(var_1_16_Pointer)) = 64.5;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967294);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -128);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_3 = var_1_3;
}
int property(void) {
 return ((((*(var_1_1_Pointer)) == ((unsigned long int) (*(var_1_2_Pointer)))) && (((*(var_1_4_Pointer)) < (*(var_1_1_Pointer))) ? ((*(var_1_3_Pointer)) == ((double) -0.5)) : (((- last_1_var_1_3) == ((*(var_1_6_Pointer)) - (*(var_1_7_Pointer)))) ? ((*(var_1_3_Pointer)) == ((double) (*(var_1_8_Pointer)))) : ((*(var_1_3_Pointer)) == ((double) (*(var_1_9_Pointer))))))) && ((*(var_1_11_Pointer)) ? (((*(var_1_2_Pointer)) <= 1u) ? ((*(var_1_10_Pointer)) == ((unsigned char) (! ((*(var_1_12_Pointer)) && ((*(var_1_13_Pointer)) || (*(var_1_14_Pointer))))))) : ((*(var_1_10_Pointer)) == ((unsigned char) (! ((*(var_1_14_Pointer)) && (*(var_1_13_Pointer))))))) : ((*(var_1_10_Pointer)) == ((unsigned char) (! (*(var_1_15_Pointer))))))) && ((*(var_1_10_Pointer)) ? ((*(var_1_16_Pointer)) == ((double) ((*(var_1_17_Pointer)) - ((*(var_1_18_Pointer)) - (*(var_1_19_Pointer)))))) : ((((*(var_1_10_Pointer)) || (*(var_1_15_Pointer))) && ((*(var_1_6_Pointer)) <= (*(var_1_8_Pointer)))) ? ((*(var_1_16_Pointer)) == ((double) (*(var_1_21_Pointer)))) : ((*(var_1_16_Pointer)) == ((double) 64.5))))
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
