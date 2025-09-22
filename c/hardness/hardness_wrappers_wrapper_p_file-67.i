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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch67Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
signed short int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = -10;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = -4;
signed long int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = -64;
signed short int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = 256;
signed short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 128;
unsigned short int* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = 8;
signed char* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 4;
unsigned short int* var_1_8_Pointer = &(var_1_8);
signed long int var_1_9 = 50;
signed long int* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 15.125;
float* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 0.9;
float* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 25.875;
double* var_1_13_Pointer = &(var_1_13);
unsigned short int var_1_14 = 50;
unsigned short int* var_1_14_Pointer = &(var_1_14);
void initially(void) {
}
void step(void) {
 if (! ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer)))) {
  (*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer)));
 }
 (*(var_1_11_Pointer)) = (*(var_1_12_Pointer));
 (*(var_1_13_Pointer)) = (*(var_1_12_Pointer));
 (*(var_1_14_Pointer)) = (*(var_1_7_Pointer));
 signed long int stepLocal_0 = (*(var_1_7_Pointer)) >> (*(var_1_8_Pointer));
 if (stepLocal_0 > (1 * (*(var_1_14_Pointer)))) {
  (*(var_1_6_Pointer)) = (((((42286 - (*(var_1_8_Pointer)))) > (0)) ? ((42286 - (*(var_1_8_Pointer)))) : (0)));
 } else {
  (*(var_1_6_Pointer)) = (*(var_1_8_Pointer));
 }
 signed long int stepLocal_2 = (*(var_1_4_Pointer)) / (*(var_1_8_Pointer));
 unsigned short int stepLocal_1 = (*(var_1_6_Pointer));
 if ((*(var_1_10_Pointer))) {
  (*(var_1_9_Pointer)) = (((((*(var_1_8_Pointer))) < ((*(var_1_4_Pointer)))) ? ((*(var_1_8_Pointer))) : ((*(var_1_4_Pointer)))));
 } else {
  if ((*(var_1_2_Pointer)) > stepLocal_2) {
   if ((*(var_1_7_Pointer)) > stepLocal_1) {
    (*(var_1_9_Pointer)) = (((((*(var_1_8_Pointer))) < (100)) ? ((*(var_1_8_Pointer))) : (100)));
   } else {
    (*(var_1_9_Pointer)) = ((*(var_1_6_Pointer)) - (*(var_1_8_Pointer)));
   }
  } else {
   (*(var_1_9_Pointer)) = ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)));
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
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -16383);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -16383);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 6);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((! ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer)) == ((signed short int) ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer))))) : 1) && ((((*(var_1_7_Pointer)) >> (*(var_1_8_Pointer))) > (1 * (*(var_1_14_Pointer)))) ? ((*(var_1_6_Pointer)) == ((unsigned short int) (((((42286 - (*(var_1_8_Pointer)))) > (0)) ? ((42286 - (*(var_1_8_Pointer)))) : (0))))) : ((*(var_1_6_Pointer)) == ((unsigned short int) (*(var_1_8_Pointer)))))) && ((*(var_1_10_Pointer)) ? ((*(var_1_9_Pointer)) == ((signed long int) (((((*(var_1_8_Pointer))) < ((*(var_1_4_Pointer)))) ? ((*(var_1_8_Pointer))) : ((*(var_1_4_Pointer))))))) : (((*(var_1_2_Pointer)) > ((*(var_1_4_Pointer)) / (*(var_1_8_Pointer)))) ? (((*(var_1_7_Pointer)) > (*(var_1_6_Pointer))) ? ((*(var_1_9_Pointer)) == ((signed long int) (((((*(var_1_8_Pointer))) < (100)) ? ((*(var_1_8_Pointer))) : (100))))) : ((*(var_1_9_Pointer)) == ((signed long int) ((*(var_1_6_Pointer)) - (*(var_1_8_Pointer)))))) : ((*(var_1_9_Pointer)) == ((signed long int) ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))))))) && ((*(var_1_11_Pointer)) == ((float) (*(var_1_12_Pointer))))) && ((*(var_1_13_Pointer)) == ((double) (*(var_1_12_Pointer))))) && ((*(var_1_14_Pointer)) == ((unsigned short int) (*(var_1_7_Pointer))))
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
