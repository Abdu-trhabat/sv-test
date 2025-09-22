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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 double var_1_8;
 float var_1_9;
 float var_1_10;
 float var_1_11;
 double var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 signed long int var_1_17;
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
 0,
 0,
 0,
 0,
 9999999.4,
 2.125,
 0.29,
 -0.5,
 1000.7,
 -10,
 2,
 10,
 -5,
 1
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed long int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed char last_1_WrapperStruct00_var_1_16 = -5;
void initially(void) {
}
void step(void) {
 if (((((last_1_WrapperStruct00_var_1_16) < 0 ) ? -(last_1_WrapperStruct00_var_1_16) : (last_1_WrapperStruct00_var_1_16))) <= ((*(WrapperStruct00_var_1_14_Pointer)) / (((((*(WrapperStruct00_var_1_17_Pointer))) > (-1)) ? ((*(WrapperStruct00_var_1_17_Pointer))) : (-1))))) {
  if ((*(WrapperStruct00_var_1_5_Pointer))) {
   (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
  } else {
   (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_16_Pointer)) = -8;
 }
 signed long int stepLocal_1 = -256;
 if (((*(WrapperStruct00_var_1_16_Pointer)) / 200) <= stepLocal_1) {
  if (((((((*(WrapperStruct00_var_1_9_Pointer)) * (*(WrapperStruct00_var_1_10_Pointer)))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? (((*(WrapperStruct00_var_1_9_Pointer)) * (*(WrapperStruct00_var_1_10_Pointer)))) : ((*(WrapperStruct00_var_1_11_Pointer))))) != 16.5f) {
   (*(WrapperStruct00_var_1_8_Pointer)) = 4.4;
  }
 } else {
  (*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
 }
 if ((*(WrapperStruct00_var_1_9_Pointer)) <= (*(WrapperStruct00_var_1_8_Pointer))) {
  (*(WrapperStruct00_var_1_13_Pointer)) = ((*(WrapperStruct00_var_1_14_Pointer)) + -50);
 } else {
  if ((*(WrapperStruct00_var_1_4_Pointer))) {
   (*(WrapperStruct00_var_1_13_Pointer)) = (25 - (*(WrapperStruct00_var_1_15_Pointer)));
  }
 }
 signed char stepLocal_0 = (*(WrapperStruct00_var_1_13_Pointer));
 if (stepLocal_0 < (*(WrapperStruct00_var_1_16_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((*(WrapperStruct00_var_1_4_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer))) || ((*(WrapperStruct00_var_1_6_Pointer)) || (*(WrapperStruct00_var_1_7_Pointer))));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (! (*(WrapperStruct00_var_1_7_Pointer)));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 0);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 126);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_17 != 0);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_16 = WrapperStruct00.var_1_16;
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_13_Pointer)) < (*(WrapperStruct00_var_1_16_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (((*(WrapperStruct00_var_1_4_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer))) || ((*(WrapperStruct00_var_1_6_Pointer)) || (*(WrapperStruct00_var_1_7_Pointer)))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_7_Pointer)))))) && ((((*(WrapperStruct00_var_1_16_Pointer)) / 200) <= -256) ? ((((((((*(WrapperStruct00_var_1_9_Pointer)) * (*(WrapperStruct00_var_1_10_Pointer)))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? (((*(WrapperStruct00_var_1_9_Pointer)) * (*(WrapperStruct00_var_1_10_Pointer)))) : ((*(WrapperStruct00_var_1_11_Pointer))))) != 16.5f) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((double) 4.4)) : 1) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((double) (*(WrapperStruct00_var_1_12_Pointer)))))) && (((*(WrapperStruct00_var_1_9_Pointer)) <= (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_14_Pointer)) + -50))) : ((*(WrapperStruct00_var_1_4_Pointer)) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed char) (25 - (*(WrapperStruct00_var_1_15_Pointer))))) : 1))) && ((((((last_1_WrapperStruct00_var_1_16) < 0 ) ? -(last_1_WrapperStruct00_var_1_16) : (last_1_WrapperStruct00_var_1_16))) <= ((*(WrapperStruct00_var_1_14_Pointer)) / (((((*(WrapperStruct00_var_1_17_Pointer))) > (-1)) ? ((*(WrapperStruct00_var_1_17_Pointer))) : (-1))))) ? ((*(WrapperStruct00_var_1_5_Pointer)) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_15_Pointer)))) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_14_Pointer))))) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed char) -8)))
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
