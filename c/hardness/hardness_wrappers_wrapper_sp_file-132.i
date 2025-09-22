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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch132Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 signed long int var_1_2;
 double var_1_3;
 unsigned char var_1_4;
 double var_1_5;
 double var_1_6;
 double var_1_7;
 unsigned short int var_1_8;
 unsigned char var_1_9;
 unsigned short int var_1_10;
 unsigned short int var_1_11;
 signed short int var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 signed char var_1_15;
 signed short int var_1_16;
 signed char var_1_17;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0,
 -2,
 9999.5,
 1,
 999999.6,
 16.6,
 0.375,
 8,
 0,
 50,
 256,
 -5,
 10,
 2,
 2,
 31574,
 64
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
double* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed short int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
void initially(void) {
}
void step(void) {
 if (128 <= (*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = 25;
 }
 if ((*(WrapperStruct00_var_1_4_Pointer))) {
  (*(WrapperStruct00_var_1_3_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 } else {
  (*(WrapperStruct00_var_1_3_Pointer)) = ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)));
 }
 if ((*(WrapperStruct00_var_1_4_Pointer)) || (*(WrapperStruct00_var_1_9_Pointer))) {
  (*(WrapperStruct00_var_1_8_Pointer)) = ((((((((*(WrapperStruct00_var_1_10_Pointer))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer))))) < 0 ) ? -(((((*(WrapperStruct00_var_1_10_Pointer))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer))))) : (((((*(WrapperStruct00_var_1_10_Pointer))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer)))))));
 } else {
  (*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
 }
 signed long int stepLocal_0 = 1000 - (*(WrapperStruct00_var_1_11_Pointer));
 if (7.2 < (*(WrapperStruct00_var_1_6_Pointer))) {
  if (((*(WrapperStruct00_var_1_13_Pointer)) - ((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer)))) >= stepLocal_0) {
   (*(WrapperStruct00_var_1_12_Pointer)) = (((((*(WrapperStruct00_var_1_14_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))));
  } else {
   (*(WrapperStruct00_var_1_12_Pointer)) = ((((((*(WrapperStruct00_var_1_13_Pointer))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))) - ((*(WrapperStruct00_var_1_16_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))));
  }
 }
 if ((*(WrapperStruct00_var_1_8_Pointer)) > ((- 128) + (*(WrapperStruct00_var_1_16_Pointer)))) {
  (*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 65534);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 65534);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 64);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 63);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((128 <= (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) 25)) : 1) && ((*(WrapperStruct00_var_1_4_Pointer)) ? ((*(WrapperStruct00_var_1_3_Pointer)) == ((double) (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_3_Pointer)) == ((double) ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))))))) && (((*(WrapperStruct00_var_1_4_Pointer)) || (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) ((((((((*(WrapperStruct00_var_1_10_Pointer))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer))))) < 0 ) ? -(((((*(WrapperStruct00_var_1_10_Pointer))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer))))) : (((((*(WrapperStruct00_var_1_10_Pointer))) < ((*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer))))))))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_10_Pointer)))))) && ((7.2 < (*(WrapperStruct00_var_1_6_Pointer))) ? ((((*(WrapperStruct00_var_1_13_Pointer)) - ((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer)))) >= (1000 - (*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed short int) (((((*(WrapperStruct00_var_1_14_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed short int) ((((((*(WrapperStruct00_var_1_13_Pointer))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))) - ((*(WrapperStruct00_var_1_16_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))))))) : 1)) && (((*(WrapperStruct00_var_1_8_Pointer)) > ((- 128) + (*(WrapperStruct00_var_1_16_Pointer)))) ? ((*(WrapperStruct00_var_1_17_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_15_Pointer)))) : 1)
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
