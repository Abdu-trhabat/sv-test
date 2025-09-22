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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch107Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 1;
signed char* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 3.25;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 10.5;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 1000.75;
double* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = -1;
signed char* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = 256;
signed short int* var_1_6_Pointer = &(var_1_6);
unsigned long int var_1_7 = 5;
unsigned long int* var_1_7_Pointer = &(var_1_7);
unsigned long int var_1_8 = 10000;
unsigned long int* var_1_8_Pointer = &(var_1_8);
unsigned long int var_1_9 = 64;
unsigned long int* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 32;
signed short int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_11 = 32;
signed short int* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = 2;
signed short int* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = 2;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = 10;
signed char* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 64;
signed char* var_1_15_Pointer = &(var_1_15);
signed char var_1_16 = 50;
signed char* var_1_16_Pointer = &(var_1_16);
signed char var_1_17 = 32;
signed char* var_1_17_Pointer = &(var_1_17);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer)) > ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer)))) {
  (*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
 } else {
  if ((*(var_1_4_Pointer)) > (*(var_1_2_Pointer))) {
   (*(var_1_1_Pointer)) = 10;
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
  }
 }
 unsigned long int stepLocal_0 = ~ (- (*(var_1_9_Pointer)));
 if (! ((*(var_1_5_Pointer)) >= (*(var_1_1_Pointer)))) {
  if ((((((*(var_1_7_Pointer))) < ((*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_8_Pointer))))) >= stepLocal_0) {
   (*(var_1_6_Pointer)) = ((*(var_1_1_Pointer)) + ((*(var_1_10_Pointer)) + -2));
  } else {
   (*(var_1_6_Pointer)) = (((((((((-8) < 0 ) ? -(-8) : (-8)))) < ((*(var_1_11_Pointer)))) ? (((((-8) < 0 ) ? -(-8) : (-8)))) : ((*(var_1_11_Pointer))))) - (*(var_1_12_Pointer)));
  }
 }
 (*(var_1_13_Pointer)) = (*(var_1_5_Pointer));
 if ((*(var_1_7_Pointer)) <= (*(var_1_9_Pointer))) {
  if ((*(var_1_6_Pointer)) > (((*(var_1_15_Pointer)) - (*(var_1_16_Pointer))) - (*(var_1_17_Pointer)))) {
   (*(var_1_14_Pointer)) = (*(var_1_5_Pointer));
  } else {
   (*(var_1_14_Pointer)) = -100;
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967295);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967295);
 var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 4294967295);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -8191);
 assume_abort_if_not(var_1_10 <= 8192);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= 63);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 64);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_2_Pointer)) > ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer)))) ? ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_5_Pointer)))) : (((*(var_1_4_Pointer)) > (*(var_1_2_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed char) 10)) : ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_5_Pointer)))))) && ((! ((*(var_1_5_Pointer)) >= (*(var_1_1_Pointer)))) ? (((((((*(var_1_7_Pointer))) < ((*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_8_Pointer))))) >= (~ (- (*(var_1_9_Pointer))))) ? ((*(var_1_6_Pointer)) == ((signed short int) ((*(var_1_1_Pointer)) + ((*(var_1_10_Pointer)) + -2)))) : ((*(var_1_6_Pointer)) == ((signed short int) (((((((((-8) < 0 ) ? -(-8) : (-8)))) < ((*(var_1_11_Pointer)))) ? (((((-8) < 0 ) ? -(-8) : (-8)))) : ((*(var_1_11_Pointer))))) - (*(var_1_12_Pointer)))))) : 1)) && ((*(var_1_13_Pointer)) == ((signed char) (*(var_1_5_Pointer))))) && (((*(var_1_7_Pointer)) <= (*(var_1_9_Pointer))) ? (((*(var_1_6_Pointer)) > (((*(var_1_15_Pointer)) - (*(var_1_16_Pointer))) - (*(var_1_17_Pointer)))) ? ((*(var_1_14_Pointer)) == ((signed char) (*(var_1_5_Pointer)))) : ((*(var_1_14_Pointer)) == ((signed char) -100))) : 1)
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
