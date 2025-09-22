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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch138Wrapper_P.c", 13, "reach_error"); }
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
signed char var_1_2 = 8;
signed char* var_1_2_Pointer = &(var_1_2);
signed char var_1_3 = -4;
signed char* var_1_3_Pointer = &(var_1_3);
unsigned short int var_1_4 = 5;
unsigned short int* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 55712;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 4;
unsigned short int* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = 0;
signed char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 1;
unsigned char* var_1_8_Pointer = &(var_1_8);
signed char var_1_10 = -8;
signed char* var_1_10_Pointer = &(var_1_10);
float var_1_11 = -0.75;
float* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 63.25;
float* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 31.5;
float* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 256.8;
float* var_1_16_Pointer = &(var_1_16);
float var_1_17 = 4.875;
float* var_1_17_Pointer = &(var_1_17);
void initially(void) {
}
void step(void) {
 signed char stepLocal_0 = (*(var_1_2_Pointer));
 if (stepLocal_0 >= (*(var_1_3_Pointer))) {
  (*(var_1_1_Pointer)) = (((((*(var_1_4_Pointer))) > (((*(var_1_5_Pointer)) - ((((100) > ((*(var_1_6_Pointer)))) ? (100) : ((*(var_1_6_Pointer)))))))) ? ((*(var_1_4_Pointer))) : (((*(var_1_5_Pointer)) - ((((100) > ((*(var_1_6_Pointer)))) ? (100) : ((*(var_1_6_Pointer)))))))));
 } else {
  (*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
 }
 unsigned char stepLocal_2 = (*(var_1_8_Pointer));
 signed long int stepLocal_1 = (*(var_1_6_Pointer)) << (*(var_1_5_Pointer));
 if (-128 >= stepLocal_1) {
  if (stepLocal_2 && (*(var_1_13_Pointer))) {
   (*(var_1_11_Pointer)) = (15.125f - (*(var_1_14_Pointer)));
  } else {
   (*(var_1_11_Pointer)) = (((((*(var_1_14_Pointer)) - ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer)))) < 0 ) ? -((*(var_1_14_Pointer)) - ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer)))) : ((*(var_1_14_Pointer)) - ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer))))));
  }
 } else {
  if (! ((*(var_1_4_Pointer)) == (*(var_1_5_Pointer)))) {
   (*(var_1_11_Pointer)) = (*(var_1_17_Pointer));
  } else {
   (*(var_1_11_Pointer)) = (*(var_1_16_Pointer));
  }
 }
 if ((*(var_1_8_Pointer)) && (4.5f >= (*(var_1_11_Pointer)))) {
  if (((*(var_1_6_Pointer)) & (*(var_1_1_Pointer))) > (*(var_1_1_Pointer))) {
   (*(var_1_7_Pointer)) = (*(var_1_10_Pointer));
  }
 } else {
  (*(var_1_7_Pointer)) = (*(var_1_10_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -128);
 assume_abort_if_not(var_1_2 <= 127);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -128);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 32767);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (((((*(var_1_4_Pointer))) > (((*(var_1_5_Pointer)) - ((((100) > ((*(var_1_6_Pointer)))) ? (100) : ((*(var_1_6_Pointer)))))))) ? ((*(var_1_4_Pointer))) : (((*(var_1_5_Pointer)) - ((((100) > ((*(var_1_6_Pointer)))) ? (100) : ((*(var_1_6_Pointer))))))))))) : ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_4_Pointer))))) && (((*(var_1_8_Pointer)) && (4.5f >= (*(var_1_11_Pointer)))) ? ((((*(var_1_6_Pointer)) & (*(var_1_1_Pointer))) > (*(var_1_1_Pointer))) ? ((*(var_1_7_Pointer)) == ((signed char) (*(var_1_10_Pointer)))) : 1) : ((*(var_1_7_Pointer)) == ((signed char) (*(var_1_10_Pointer)))))) && ((-128 >= ((*(var_1_6_Pointer)) << (*(var_1_5_Pointer)))) ? (((*(var_1_8_Pointer)) && (*(var_1_13_Pointer))) ? ((*(var_1_11_Pointer)) == ((float) (15.125f - (*(var_1_14_Pointer))))) : ((*(var_1_11_Pointer)) == ((float) (((((*(var_1_14_Pointer)) - ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer)))) < 0 ) ? -((*(var_1_14_Pointer)) - ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer)))) : ((*(var_1_14_Pointer)) - ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer))))))))) : ((! ((*(var_1_4_Pointer)) == (*(var_1_5_Pointer)))) ? ((*(var_1_11_Pointer)) == ((float) (*(var_1_17_Pointer)))) : ((*(var_1_11_Pointer)) == ((float) (*(var_1_16_Pointer))))))
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
