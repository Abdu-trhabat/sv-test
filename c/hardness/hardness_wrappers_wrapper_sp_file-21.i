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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned char var_1_4;
 signed long int var_1_5;
 signed long int var_1_6;
 unsigned char var_1_7;
 double var_1_8;
 double var_1_9;
 double var_1_10;
 unsigned char var_1_12;
 signed short int var_1_13;
 float var_1_14;
 float var_1_15;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 32,
 8,
 4,
 32,
 -128,
 -1000000000,
 0,
 15.6,
 15.4,
 32.2,
 1,
 256,
 5.75,
 8.6
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char last_1_WrapperStruct00_var_1_7 = 0;
void initially(void) {
}
void step(void) {
 if (((*(WrapperStruct00_var_1_2_Pointer)) + (((((*(WrapperStruct00_var_1_3_Pointer))) > ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))))) < ((*(WrapperStruct00_var_1_5_Pointer)) * (*(WrapperStruct00_var_1_6_Pointer)))) {
  if ((*(WrapperStruct00_var_1_5_Pointer)) < ((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer)))) {
   if ((*(WrapperStruct00_var_1_5_Pointer)) != ((((((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_2_Pointer))))) < 0 ) ? -(((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_2_Pointer))))) : (((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_2_Pointer)))))))) {
    (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_2_Pointer));
   }
  }
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
 }
 if ((((((*(WrapperStruct00_var_1_8_Pointer))) < ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer))))) <= (*(WrapperStruct00_var_1_10_Pointer))) {
  if (last_1_WrapperStruct00_var_1_7 && ((*(WrapperStruct00_var_1_5_Pointer)) >= (*(WrapperStruct00_var_1_1_Pointer)))) {
   (*(WrapperStruct00_var_1_7_Pointer)) = 0;
  }
 } else {
  (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
 }
 if ((*(WrapperStruct00_var_1_12_Pointer))) {
  if (((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))) >= (((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_10_Pointer))) + (*(WrapperStruct00_var_1_9_Pointer)))) {
   (*(WrapperStruct00_var_1_13_Pointer)) = (((((*(WrapperStruct00_var_1_2_Pointer))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_2_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer)))));
  } else {
   (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 255);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 255);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_7 = WrapperStruct00.var_1_7;
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) + (((((*(WrapperStruct00_var_1_3_Pointer))) > ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))))) < ((*(WrapperStruct00_var_1_5_Pointer)) * (*(WrapperStruct00_var_1_6_Pointer)))) ? (((*(WrapperStruct00_var_1_5_Pointer)) < ((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer)))) ? (((*(WrapperStruct00_var_1_5_Pointer)) != ((((((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_2_Pointer))))) < 0 ) ? -(((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_2_Pointer))))) : (((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_2_Pointer)))))))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_2_Pointer)))) : 1) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_4_Pointer))))) && (((((((*(WrapperStruct00_var_1_8_Pointer))) < ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer))))) <= (*(WrapperStruct00_var_1_10_Pointer))) ? ((last_1_WrapperStruct00_var_1_7 && ((*(WrapperStruct00_var_1_5_Pointer)) >= (*(WrapperStruct00_var_1_1_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) 0)) : 1) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer)))))) && ((*(WrapperStruct00_var_1_12_Pointer)) ? ((((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))) >= (((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_10_Pointer))) + (*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed short int) (((((*(WrapperStruct00_var_1_2_Pointer))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_2_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_4_Pointer))))) : 1)
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
