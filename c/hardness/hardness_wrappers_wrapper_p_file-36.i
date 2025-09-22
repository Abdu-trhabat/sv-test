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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch36Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1;
unsigned long int* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 63.25;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 9999999999.875;
float* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 4.25;
float* var_1_5_Pointer = &(var_1_5);
unsigned long int var_1_6 = 256;
unsigned long int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 1;
unsigned char* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = 16;
signed long int* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = 0;
signed long int* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 1;
unsigned char* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 64.2;
double* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 9.5;
double* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 199.5;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 3.5;
double* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 1;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_17 = 2;
unsigned char* var_1_17_Pointer = &(var_1_17);
void initially(void) {
}
void step(void) {
 if (((*(var_1_8_Pointer)) >> 16u) < (((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer)))))) {
  (*(var_1_7_Pointer)) = ((*(var_1_4_Pointer)) || (*(var_1_10_Pointer)));
 }
 if ((*(var_1_2_Pointer)) > (*(var_1_5_Pointer))) {
  (*(var_1_11_Pointer)) = 4.6;
 } else {
  (*(var_1_11_Pointer)) = (((((*(var_1_12_Pointer))) > ((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))))) ? ((*(var_1_12_Pointer))) : ((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))))));
 }
 if ((*(var_1_13_Pointer)) == (- (*(var_1_12_Pointer)))) {
  if ((*(var_1_4_Pointer)) && (*(var_1_7_Pointer))) {
   (*(var_1_15_Pointer)) = (*(var_1_17_Pointer));
  } else {
   (*(var_1_15_Pointer)) = 0;
  }
 } else {
  (*(var_1_15_Pointer)) = (*(var_1_17_Pointer));
 }
 unsigned char stepLocal_0 = (*(var_1_2_Pointer)) > (*(var_1_3_Pointer));
 if (stepLocal_0 && (*(var_1_7_Pointer))) {
  if ((((((*(var_1_2_Pointer))) > ((- (*(var_1_3_Pointer))))) ? ((*(var_1_2_Pointer))) : ((- (*(var_1_3_Pointer)))))) != (*(var_1_5_Pointer))) {
   if ((*(var_1_7_Pointer))) {
    (*(var_1_1_Pointer)) = 10u;
   } else {
    (*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
   }
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483647);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) && (*(var_1_7_Pointer))) ? (((((((*(var_1_2_Pointer))) > ((- (*(var_1_3_Pointer))))) ? ((*(var_1_2_Pointer))) : ((- (*(var_1_3_Pointer)))))) != (*(var_1_5_Pointer))) ? ((*(var_1_7_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned long int) 10u)) : ((*(var_1_1_Pointer)) == ((unsigned long int) (*(var_1_6_Pointer))))) : ((*(var_1_1_Pointer)) == ((unsigned long int) (*(var_1_6_Pointer))))) : ((*(var_1_1_Pointer)) == ((unsigned long int) (*(var_1_6_Pointer))))) && ((((*(var_1_8_Pointer)) >> 16u) < (((((*(var_1_9_Pointer))) < 0 ) ? -((*(var_1_9_Pointer))) : ((*(var_1_9_Pointer)))))) ? ((*(var_1_7_Pointer)) == ((unsigned char) ((*(var_1_4_Pointer)) || (*(var_1_10_Pointer))))) : 1)) && (((*(var_1_2_Pointer)) > (*(var_1_5_Pointer))) ? ((*(var_1_11_Pointer)) == ((double) 4.6)) : ((*(var_1_11_Pointer)) == ((double) (((((*(var_1_12_Pointer))) > ((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))))) ? ((*(var_1_12_Pointer))) : ((((((*(var_1_13_Pointer))) > ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer)))))))))))) && (((*(var_1_13_Pointer)) == (- (*(var_1_12_Pointer)))) ? (((*(var_1_4_Pointer)) && (*(var_1_7_Pointer))) ? ((*(var_1_15_Pointer)) == ((unsigned char) (*(var_1_17_Pointer)))) : ((*(var_1_15_Pointer)) == ((unsigned char) 0))) : ((*(var_1_15_Pointer)) == ((unsigned char) (*(var_1_17_Pointer)))))
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
