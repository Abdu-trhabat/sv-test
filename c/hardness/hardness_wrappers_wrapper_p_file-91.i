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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch91Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 100000000;
unsigned long int* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 49.25;
float* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 64;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_4 = 64;
unsigned long int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = 1;
signed short int* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 8.4;
float* var_1_6_Pointer = &(var_1_6);
float var_1_7 = -0.25;
float* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = -4;
signed short int* var_1_8_Pointer = &(var_1_8);
unsigned long int var_1_9 = 64;
unsigned long int* var_1_9_Pointer = &(var_1_9);
unsigned long int var_1_10 = 16;
unsigned long int* var_1_10_Pointer = &(var_1_10);
unsigned long int var_1_11 = 10;
unsigned long int* var_1_11_Pointer = &(var_1_11);
signed short int var_1_12 = 100;
signed short int* var_1_12_Pointer = &(var_1_12);
signed short int var_1_14 = 128;
signed short int* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = 10;
signed short int* var_1_15_Pointer = &(var_1_15);
void initially(void) {
}
void step(void) {
 if ((*(var_1_2_Pointer)) >= 50.4f) {
  (*(var_1_1_Pointer)) = (((((*(var_1_3_Pointer))) > ((*(var_1_4_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_4_Pointer)))));
 }
 if ((*(var_1_3_Pointer)) == ((*(var_1_1_Pointer)) * (*(var_1_4_Pointer)))) {
  if ((*(var_1_2_Pointer)) >= ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) {
   (*(var_1_5_Pointer)) = (*(var_1_8_Pointer));
  } else {
   (*(var_1_5_Pointer)) = 32;
  }
 } else {
  (*(var_1_5_Pointer)) = (*(var_1_8_Pointer));
 }
 if (! ((*(var_1_4_Pointer)) < (*(var_1_3_Pointer)))) {
  (*(var_1_9_Pointer)) = (((((((((*(var_1_3_Pointer))) < ((*(var_1_4_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_4_Pointer)))))) < ((((((*(var_1_10_Pointer))) > ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))))) ? ((((((*(var_1_3_Pointer))) < ((*(var_1_4_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_4_Pointer)))))) : ((((((*(var_1_10_Pointer))) > ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))))));
 } else {
  (*(var_1_9_Pointer)) = (((((*(var_1_11_Pointer))) > ((*(var_1_10_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_10_Pointer)))));
 }
 if ((*(var_1_10_Pointer)) > (*(var_1_9_Pointer))) {
  if (63.1 >= (*(var_1_7_Pointer))) {
   if ((*(var_1_7_Pointer)) >= (*(var_1_2_Pointer))) {
    (*(var_1_12_Pointer)) = ((*(var_1_14_Pointer)) - (*(var_1_15_Pointer)));
   } else {
    (*(var_1_12_Pointer)) = (*(var_1_14_Pointer));
   }
  }
 } else {
  (*(var_1_12_Pointer)) = (*(var_1_15_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967294);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32767);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 4294967294);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_2_Pointer)) >= 50.4f) ? ((*(var_1_1_Pointer)) == ((unsigned long int) (((((*(var_1_3_Pointer))) > ((*(var_1_4_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_4_Pointer))))))) : 1) && (((*(var_1_3_Pointer)) == ((*(var_1_1_Pointer)) * (*(var_1_4_Pointer)))) ? (((*(var_1_2_Pointer)) >= ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) ? ((*(var_1_5_Pointer)) == ((signed short int) (*(var_1_8_Pointer)))) : ((*(var_1_5_Pointer)) == ((signed short int) 32))) : ((*(var_1_5_Pointer)) == ((signed short int) (*(var_1_8_Pointer)))))) && ((! ((*(var_1_4_Pointer)) < (*(var_1_3_Pointer)))) ? ((*(var_1_9_Pointer)) == ((unsigned long int) (((((((((*(var_1_3_Pointer))) < ((*(var_1_4_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_4_Pointer)))))) < ((((((*(var_1_10_Pointer))) > ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer))))))) ? ((((((*(var_1_3_Pointer))) < ((*(var_1_4_Pointer)))) ? ((*(var_1_3_Pointer))) : ((*(var_1_4_Pointer)))))) : ((((((*(var_1_10_Pointer))) > ((*(var_1_11_Pointer)))) ? ((*(var_1_10_Pointer))) : ((*(var_1_11_Pointer)))))))))) : ((*(var_1_9_Pointer)) == ((unsigned long int) (((((*(var_1_11_Pointer))) > ((*(var_1_10_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_10_Pointer))))))))) && (((*(var_1_10_Pointer)) > (*(var_1_9_Pointer))) ? ((63.1 >= (*(var_1_7_Pointer))) ? (((*(var_1_7_Pointer)) >= (*(var_1_2_Pointer))) ? ((*(var_1_12_Pointer)) == ((signed short int) ((*(var_1_14_Pointer)) - (*(var_1_15_Pointer))))) : ((*(var_1_12_Pointer)) == ((signed short int) (*(var_1_14_Pointer))))) : 1) : ((*(var_1_12_Pointer)) == ((signed short int) (*(var_1_15_Pointer)))))
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
