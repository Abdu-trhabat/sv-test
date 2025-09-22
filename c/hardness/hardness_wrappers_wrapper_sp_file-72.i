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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch72Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 double var_1_2;
 double var_1_3;
 double var_1_4;
 double var_1_5;
 unsigned char var_1_7;
 unsigned char var_1_9;
 unsigned long int var_1_10;
 signed char var_1_11;
 signed char var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 double var_1_15;
 float var_1_16;
 double var_1_17;
 double var_1_18;
 double var_1_19;
 double var_1_20;
 signed char var_1_21;
 unsigned short int var_1_22;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 1,
 128.875,
 24.5,
 8.2,
 10.05,
 0,
 0,
 2,
 -16,
 -2,
 -10,
 4,
 256.4,
 0.25,
 100000000000.2,
 50.5,
 9.5,
 100000000000.4,
 4,
 10000
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
double* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
double* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
double* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
float* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
double* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
double* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
double* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
double* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
signed char* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);
unsigned short int* WrapperStruct00_var_1_22_Pointer = &(WrapperStruct00.var_1_22);
unsigned char last_1_WrapperStruct00_var_1_1 = 1;
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_3_Pointer)) < ((((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_2_Pointer))))) * (*(WrapperStruct00_var_1_5_Pointer)))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (last_1_WrapperStruct00_var_1_1 && (((*(WrapperStruct00_var_1_7_Pointer)) || last_1_WrapperStruct00_var_1_1) && (*(WrapperStruct00_var_1_9_Pointer))));
 }
 if ((*(WrapperStruct00_var_1_9_Pointer))) {
  (*(WrapperStruct00_var_1_10_Pointer)) = 2u;
 }
 (*(WrapperStruct00_var_1_11_Pointer)) = ((((((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_13_Pointer)))) < ((10 - (*(WrapperStruct00_var_1_14_Pointer))))) ? (((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_13_Pointer)))) : ((10 - (*(WrapperStruct00_var_1_14_Pointer))))));
 if (((*(WrapperStruct00_var_1_2_Pointer)) + ((*(WrapperStruct00_var_1_3_Pointer)) / (*(WrapperStruct00_var_1_16_Pointer)))) == (*(WrapperStruct00_var_1_5_Pointer))) {
  if ((*(WrapperStruct00_var_1_3_Pointer)) >= (*(WrapperStruct00_var_1_4_Pointer))) {
   (*(WrapperStruct00_var_1_15_Pointer)) = ((*(WrapperStruct00_var_1_17_Pointer)) - ((((((*(WrapperStruct00_var_1_18_Pointer)) + (*(WrapperStruct00_var_1_19_Pointer)))) < (9.9999999999995E12)) ? (((*(WrapperStruct00_var_1_18_Pointer)) + (*(WrapperStruct00_var_1_19_Pointer)))) : (9.9999999999995E12))));
  } else {
   (*(WrapperStruct00_var_1_15_Pointer)) = (((((*(WrapperStruct00_var_1_17_Pointer))) < ((5.75 + (*(WrapperStruct00_var_1_19_Pointer))))) ? ((*(WrapperStruct00_var_1_17_Pointer))) : ((5.75 + (*(WrapperStruct00_var_1_19_Pointer))))));
  }
 }
 (*(WrapperStruct00_var_1_20_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));
 (*(WrapperStruct00_var_1_21_Pointer)) = 1;
 (*(WrapperStruct00_var_1_22_Pointer)) = 10;
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 0);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 63);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 63);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 126);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
 assume_abort_if_not(WrapperStruct00.var_1_16 != 0.0F);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_17 >= 0.0F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_18 >= 0.0F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_19 >= 0.0F && WrapperStruct00.var_1_19 <= -1.0e-20F) || (WrapperStruct00.var_1_19 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_19 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
}
int property(void) {
 return ((((((((*(WrapperStruct00_var_1_3_Pointer)) < ((((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_2_Pointer))))) * (*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (last_1_WrapperStruct00_var_1_1 && (((*(WrapperStruct00_var_1_7_Pointer)) || last_1_WrapperStruct00_var_1_1) && (*(WrapperStruct00_var_1_9_Pointer)))))) : 1) && ((*(WrapperStruct00_var_1_9_Pointer)) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned long int) 2u)) : 1)) && ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed char) ((((((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_13_Pointer)))) < ((10 - (*(WrapperStruct00_var_1_14_Pointer))))) ? (((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_13_Pointer)))) : ((10 - (*(WrapperStruct00_var_1_14_Pointer))))))))) && ((((*(WrapperStruct00_var_1_2_Pointer)) + ((*(WrapperStruct00_var_1_3_Pointer)) / (*(WrapperStruct00_var_1_16_Pointer)))) == (*(WrapperStruct00_var_1_5_Pointer))) ? (((*(WrapperStruct00_var_1_3_Pointer)) >= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((double) ((*(WrapperStruct00_var_1_17_Pointer)) - ((((((*(WrapperStruct00_var_1_18_Pointer)) + (*(WrapperStruct00_var_1_19_Pointer)))) < (9.9999999999995E12)) ? (((*(WrapperStruct00_var_1_18_Pointer)) + (*(WrapperStruct00_var_1_19_Pointer)))) : (9.9999999999995E12)))))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((double) (((((*(WrapperStruct00_var_1_17_Pointer))) < ((5.75 + (*(WrapperStruct00_var_1_19_Pointer))))) ? ((*(WrapperStruct00_var_1_17_Pointer))) : ((5.75 + (*(WrapperStruct00_var_1_19_Pointer))))))))) : 1)) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((double) (*(WrapperStruct00_var_1_19_Pointer))))) && ((*(WrapperStruct00_var_1_21_Pointer)) == ((signed char) 1))) && ((*(WrapperStruct00_var_1_22_Pointer)) == ((unsigned short int) 10))
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
