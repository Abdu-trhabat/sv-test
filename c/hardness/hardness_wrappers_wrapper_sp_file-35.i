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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 unsigned long int var_1_2;
 unsigned long int var_1_3;
 float var_1_4;
 float var_1_5;
 signed short int var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 signed short int var_1_9;
 signed short int var_1_10;
 signed char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned short int var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 signed char var_1_17;
 double var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 4.8,
 2,
 5,
 255.1,
 -0.6,
 -10,
 0,
 1,
 -4,
 -100,
 0,
 128,
 10,
 8,
 -4,
 -2,
 8,
 999999.2
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
double* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = ~ (*(WrapperStruct00_var_1_3_Pointer));
 if ((*(WrapperStruct00_var_1_2_Pointer)) >= stepLocal_0) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer)));
 }
 if ((*(WrapperStruct00_var_1_7_Pointer))) {
  if ((*(WrapperStruct00_var_1_8_Pointer))) {
   (*(WrapperStruct00_var_1_6_Pointer)) = ((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_10_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 }
 unsigned long int stepLocal_3 = (*(WrapperStruct00_var_1_3_Pointer)) * (*(WrapperStruct00_var_1_2_Pointer));
 signed long int stepLocal_2 = (*(WrapperStruct00_var_1_14_Pointer)) % (*(WrapperStruct00_var_1_12_Pointer));
 unsigned long int stepLocal_1 = (*(WrapperStruct00_var_1_2_Pointer));
 if (((*(WrapperStruct00_var_1_12_Pointer)) - (64 - (*(WrapperStruct00_var_1_13_Pointer)))) != stepLocal_1) {
  if (stepLocal_2 >= (*(WrapperStruct00_var_1_3_Pointer))) {
   if (! (*(WrapperStruct00_var_1_7_Pointer))) {
    (*(WrapperStruct00_var_1_11_Pointer)) = (((*(WrapperStruct00_var_1_15_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer))) + ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_17_Pointer))));
   }
  } else {
   if (32u >= stepLocal_3) {
    (*(WrapperStruct00_var_1_11_Pointer)) = 1;
   } else {
    (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
   }
  }
 }
 (*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 16383);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 16383);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 255);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 63);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 65535);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -31);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 32);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -31);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 31);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) >= (~ (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))))) : 1) && ((*(WrapperStruct00_var_1_7_Pointer)) ? ((*(WrapperStruct00_var_1_8_Pointer)) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_10_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_9_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_9_Pointer)))))) && ((((*(WrapperStruct00_var_1_12_Pointer)) - (64 - (*(WrapperStruct00_var_1_13_Pointer)))) != (*(WrapperStruct00_var_1_2_Pointer))) ? ((((*(WrapperStruct00_var_1_14_Pointer)) % (*(WrapperStruct00_var_1_12_Pointer))) >= (*(WrapperStruct00_var_1_3_Pointer))) ? ((! (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed char) (((*(WrapperStruct00_var_1_15_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer))) + ((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_17_Pointer)))))) : 1) : ((32u >= ((*(WrapperStruct00_var_1_3_Pointer)) * (*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed char) 1)) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_15_Pointer)))))) : 1)) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((double) (*(WrapperStruct00_var_1_4_Pointer))))
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
