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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 double var_1_4;
 double var_1_5;
 double var_1_6;
 double var_1_7;
 unsigned char var_1_8;
 signed long int var_1_10;
 signed long int var_1_11;
 unsigned char var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 double var_1_17;
 unsigned char var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -0.25,
 -0.5,
 31.75,
 3.862,
 7.25,
 2,
 -8,
 1,
 32,
 10,
 8,
 5,
 32,
 256.2,
 1
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
double* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
double* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned char last_1_WrapperStruct00_var_1_8 = 2;
double last_1_WrapperStruct00_var_1_17 = 256.2;
void initially(void) {
}
void step(void) {
 if (((((last_1_WrapperStruct00_var_1_17) < (10.3)) ? (last_1_WrapperStruct00_var_1_17) : (10.3))) >= last_1_WrapperStruct00_var_1_17) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + (499.94 - ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))));
 }
 if ((*(WrapperStruct00_var_1_18_Pointer)) || (((*(WrapperStruct00_var_1_1_Pointer)) * last_1_WrapperStruct00_var_1_17) <= (*(WrapperStruct00_var_1_5_Pointer)))) {
  if ((*(WrapperStruct00_var_1_10_Pointer)) >= (*(WrapperStruct00_var_1_12_Pointer))) {
   (*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  } else {
   (*(WrapperStruct00_var_1_17_Pointer)) = 1.45;
  }
 } else {
  (*(WrapperStruct00_var_1_17_Pointer)) = 128.2;
 }
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_10_Pointer));
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_10_Pointer));
 if ((last_1_WrapperStruct00_var_1_8 * (25 + 64)) != stepLocal_1) {
  if ((last_1_WrapperStruct00_var_1_8 - (*(WrapperStruct00_var_1_11_Pointer))) == stepLocal_0) {
   (*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
  } else {
   (*(WrapperStruct00_var_1_8_Pointer)) = 16;
  }
 }
 if ((*(WrapperStruct00_var_1_1_Pointer)) < (*(WrapperStruct00_var_1_17_Pointer))) {
  (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
 } else {
  (*(WrapperStruct00_var_1_13_Pointer)) = ((*(WrapperStruct00_var_1_15_Pointer)) - (*(WrapperStruct00_var_1_16_Pointer)));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 2147483647);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 126);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 126);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 126);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 1);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
 last_1_WrapperStruct00_var_1_17 = WrapperStruct00.var_1_17;
}
int property(void) {
 return ((((((((last_1_WrapperStruct00_var_1_17) < (10.3)) ? (last_1_WrapperStruct00_var_1_17) : (10.3))) >= last_1_WrapperStruct00_var_1_17) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) ((*(WrapperStruct00_var_1_4_Pointer)) + (499.94 - ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))))))) && (((last_1_WrapperStruct00_var_1_8 * (25 + 64)) != (*(WrapperStruct00_var_1_10_Pointer))) ? (((last_1_WrapperStruct00_var_1_8 - (*(WrapperStruct00_var_1_11_Pointer))) == (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer)))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) 16))) : 1)) && (((*(WrapperStruct00_var_1_1_Pointer)) < (*(WrapperStruct00_var_1_17_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_14_Pointer)))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_15_Pointer)) - (*(WrapperStruct00_var_1_16_Pointer))))))) && (((*(WrapperStruct00_var_1_18_Pointer)) || (((*(WrapperStruct00_var_1_1_Pointer)) * last_1_WrapperStruct00_var_1_17) <= (*(WrapperStruct00_var_1_5_Pointer)))) ? (((*(WrapperStruct00_var_1_10_Pointer)) >= (*(WrapperStruct00_var_1_12_Pointer))) ? ((*(WrapperStruct00_var_1_17_Pointer)) == ((double) (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_17_Pointer)) == ((double) 1.45))) : ((*(WrapperStruct00_var_1_17_Pointer)) == ((double) 128.2)))
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
