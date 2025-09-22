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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch24Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
signed char var_1_4 = 16;
signed char* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = 4;
signed char* var_1_5_Pointer = &(var_1_5);
signed char var_1_6 = 0;
signed char* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 0;
unsigned short int* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 10000000000000.2;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 49.5;
double* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 55182;
unsigned short int* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 64;
unsigned short int* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_14 = 1;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 1;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 100;
unsigned char* var_1_16_Pointer = &(var_1_16);
float var_1_17 = 2.25;
float* var_1_17_Pointer = &(var_1_17);
float var_1_18 = 199.4;
float* var_1_18_Pointer = &(var_1_18);
signed char var_1_19 = -128;
signed char* var_1_19_Pointer = &(var_1_19);
void initially(void) {
}
void step(void) {
 if (! (*(var_1_2_Pointer))) {
  (*(var_1_12_Pointer)) = (*(var_1_14_Pointer));
 } else {
  (*(var_1_12_Pointer)) = ((! (*(var_1_15_Pointer))) || (! (! 0)));
 }
 (*(var_1_16_Pointer)) = (*(var_1_5_Pointer));
 (*(var_1_17_Pointer)) = (*(var_1_18_Pointer));
 (*(var_1_19_Pointer)) = (*(var_1_4_Pointer));
 if ((*(var_1_12_Pointer)) || (64.75f < (*(var_1_17_Pointer)))) {
  if ((*(var_1_12_Pointer))) {
   (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) - (*(var_1_5_Pointer)));
  } else {
   (*(var_1_1_Pointer)) = (((((((((*(var_1_4_Pointer))) > ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer)))))) < ((*(var_1_6_Pointer)))) ? ((((((*(var_1_4_Pointer))) > ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer)))))) : ((*(var_1_6_Pointer)))));
  }
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
 }
 if (((((((*(var_1_17_Pointer)) * 127.75)) > (((*(var_1_8_Pointer)) / 3.4))) ? (((*(var_1_17_Pointer)) * 127.75)) : (((*(var_1_8_Pointer)) / 3.4)))) >= (*(var_1_9_Pointer))) {
  (*(var_1_7_Pointer)) = ((((((*(var_1_10_Pointer)) - (22925 - (*(var_1_5_Pointer))))) < ((*(var_1_11_Pointer)))) ? (((*(var_1_10_Pointer)) - (22925 - (*(var_1_5_Pointer))))) : ((*(var_1_11_Pointer)))));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 126);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -127);
 assume_abort_if_not(var_1_6 <= 126);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((*(var_1_12_Pointer)) || (64.75f < (*(var_1_17_Pointer)))) ? ((*(var_1_12_Pointer)) ? ((*(var_1_1_Pointer)) == ((signed char) ((*(var_1_4_Pointer)) - (*(var_1_5_Pointer))))) : ((*(var_1_1_Pointer)) == ((signed char) (((((((((*(var_1_4_Pointer))) > ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer)))))) < ((*(var_1_6_Pointer)))) ? ((((((*(var_1_4_Pointer))) > ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer)))))) : ((*(var_1_6_Pointer)))))))) : ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_4_Pointer))))) && ((((((((*(var_1_17_Pointer)) * 127.75)) > (((*(var_1_8_Pointer)) / 3.4))) ? (((*(var_1_17_Pointer)) * 127.75)) : (((*(var_1_8_Pointer)) / 3.4)))) >= (*(var_1_9_Pointer))) ? ((*(var_1_7_Pointer)) == ((unsigned short int) ((((((*(var_1_10_Pointer)) - (22925 - (*(var_1_5_Pointer))))) < ((*(var_1_11_Pointer)))) ? (((*(var_1_10_Pointer)) - (22925 - (*(var_1_5_Pointer))))) : ((*(var_1_11_Pointer))))))) : 1)) && ((! (*(var_1_2_Pointer))) ? ((*(var_1_12_Pointer)) == ((unsigned char) (*(var_1_14_Pointer)))) : ((*(var_1_12_Pointer)) == ((unsigned char) ((! (*(var_1_15_Pointer))) || (! (! 0))))))) && ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_5_Pointer))))) && ((*(var_1_17_Pointer)) == ((float) (*(var_1_18_Pointer))))) && ((*(var_1_19_Pointer)) == ((signed char) (*(var_1_4_Pointer))))
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
