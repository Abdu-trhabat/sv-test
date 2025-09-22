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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch115Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 float var_1_2;
 float var_1_4;
 float var_1_5;
 double var_1_6;
 double var_1_7;
 unsigned long int var_1_8;
 unsigned long int var_1_9;
 unsigned long int var_1_10;
 unsigned long int var_1_11;
 signed short int var_1_12;
 signed short int var_1_13;
 signed short int var_1_14;
 signed short int var_1_15;
 double var_1_16;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 5.2,
 128.4,
 63.8,
 255.625,
 10.2,
 5.75,
 0,
 2655377620,
 1969456671,
 16,
 64,
 256,
 1,
 -16,
 1000000000000.5
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
float* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
double* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
double last_1_WrapperStruct00_var_1_1 = 5.2;
void initially(void) {
}
void step(void) {
 if (((*(WrapperStruct00_var_1_2_Pointer)) * last_1_WrapperStruct00_var_1_1) >= (((((*(WrapperStruct00_var_1_4_Pointer))) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_5_Pointer)))))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)));
 } else {
  if (last_1_WrapperStruct00_var_1_1 <= (*(WrapperStruct00_var_1_7_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = 3.2;
  }
 }
 (*(WrapperStruct00_var_1_12_Pointer)) = ((((((*(WrapperStruct00_var_1_13_Pointer)) - (((((*(WrapperStruct00_var_1_14_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) < ((*(WrapperStruct00_var_1_15_Pointer)))) ? (((*(WrapperStruct00_var_1_13_Pointer)) - (((((*(WrapperStruct00_var_1_14_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) : ((*(WrapperStruct00_var_1_15_Pointer)))));
 if (((*(WrapperStruct00_var_1_12_Pointer)) ^ (*(WrapperStruct00_var_1_11_Pointer))) < (- (*(WrapperStruct00_var_1_9_Pointer)))) {
  if ((*(WrapperStruct00_var_1_6_Pointer)) >= (*(WrapperStruct00_var_1_7_Pointer))) {
   if ((*(WrapperStruct00_var_1_1_Pointer)) > (- (*(WrapperStruct00_var_1_1_Pointer)))) {
    (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
 }
 if ((*(WrapperStruct00_var_1_16_Pointer)) > (- (*(WrapperStruct00_var_1_6_Pointer)))) {
  (*(WrapperStruct00_var_1_8_Pointer)) = ((*(WrapperStruct00_var_1_9_Pointer)) - ((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 4294967294);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1073741823);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 32766);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -32766);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 32766);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 32766);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_2_Pointer)) * last_1_WrapperStruct00_var_1_1) >= (((((*(WrapperStruct00_var_1_4_Pointer))) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_5_Pointer)))))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))))) : ((last_1_WrapperStruct00_var_1_1 <= (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) 3.2)))) && (((*(WrapperStruct00_var_1_16_Pointer)) > (- (*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_9_Pointer)) - ((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer)))))) : 1)) && ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed short int) ((((((*(WrapperStruct00_var_1_13_Pointer)) - (((((*(WrapperStruct00_var_1_14_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) < ((*(WrapperStruct00_var_1_15_Pointer)))) ? (((*(WrapperStruct00_var_1_13_Pointer)) - (((((*(WrapperStruct00_var_1_14_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) : ((*(WrapperStruct00_var_1_15_Pointer)))))))) && ((((*(WrapperStruct00_var_1_12_Pointer)) ^ (*(WrapperStruct00_var_1_11_Pointer))) < (- (*(WrapperStruct00_var_1_9_Pointer)))) ? (((*(WrapperStruct00_var_1_6_Pointer)) >= (*(WrapperStruct00_var_1_7_Pointer))) ? (((*(WrapperStruct00_var_1_1_Pointer)) > (- (*(WrapperStruct00_var_1_1_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((double) (*(WrapperStruct00_var_1_6_Pointer)))) : 1) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((double) (*(WrapperStruct00_var_1_7_Pointer))))) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((double) (*(WrapperStruct00_var_1_6_Pointer)))))
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
