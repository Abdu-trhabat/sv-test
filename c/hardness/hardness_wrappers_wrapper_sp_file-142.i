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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch142Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 unsigned long int var_1_2;
 unsigned long int var_1_3;
 signed long int var_1_4;
 signed long int var_1_5;
 double var_1_6;
 unsigned short int var_1_7;
 unsigned short int var_1_8;
 double var_1_9;
 signed short int var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 signed short int var_1_13;
 signed short int var_1_14;
 double var_1_15;
 double var_1_16;
 double var_1_17;
 double var_1_18;
 double var_1_19;
 double var_1_20;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 5,
 50,
 500,
 128,
 64,
 15.5,
 39435,
 64,
 10.5,
 50,
 0,
 1,
 -32,
 0,
 0.4,
 256.5,
 128.6,
 499.4,
 5.4,
 4.25
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
double* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
double* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
double* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
double* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
double* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
double* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) {
  if ((*(WrapperStruct00_var_1_3_Pointer)) <= (*(WrapperStruct00_var_1_2_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (1 - (*(WrapperStruct00_var_1_4_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)));
  }
 }
 if (((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer))) <= 0) {
  (*(WrapperStruct00_var_1_6_Pointer)) = (((((*(WrapperStruct00_var_1_9_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer)))));
 }
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_11_Pointer));
 if (stepLocal_0 && (*(WrapperStruct00_var_1_12_Pointer))) {
  (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
 } else {
  (*(WrapperStruct00_var_1_10_Pointer)) = (((((*(WrapperStruct00_var_1_13_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))));
 }
 unsigned long int stepLocal_1 = (*(WrapperStruct00_var_1_2_Pointer));
 if (stepLocal_1 == (((((*(WrapperStruct00_var_1_7_Pointer))) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_5_Pointer)))))) {
  (*(WrapperStruct00_var_1_15_Pointer)) = ((*(WrapperStruct00_var_1_16_Pointer)) + (*(WrapperStruct00_var_1_17_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_15_Pointer)) = ((*(WrapperStruct00_var_1_18_Pointer)) - (*(WrapperStruct00_var_1_19_Pointer)));
 }
 unsigned long int stepLocal_2 = (*(WrapperStruct00_var_1_3_Pointer));
 if ((*(WrapperStruct00_var_1_19_Pointer)) <= (*(WrapperStruct00_var_1_17_Pointer))) {
  if (stepLocal_2 < (*(WrapperStruct00_var_1_7_Pointer))) {
   (*(WrapperStruct00_var_1_20_Pointer)) = 199.75;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483646);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483646);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 65535);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 32767);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 32766);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 32766);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_17 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_18 >= 0.0F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_19 >= 0.0F && WrapperStruct00.var_1_19 <= -1.0e-20F) || (WrapperStruct00.var_1_19 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_19 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) ? (((*(WrapperStruct00_var_1_3_Pointer)) <= (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (1 - (*(WrapperStruct00_var_1_4_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer)))))) : 1) && ((((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer))) <= 0) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((double) (((((*(WrapperStruct00_var_1_9_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer))))))) : 1)) && (((*(WrapperStruct00_var_1_11_Pointer)) && (*(WrapperStruct00_var_1_12_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_13_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed short int) (((((*(WrapperStruct00_var_1_13_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))))))) && (((*(WrapperStruct00_var_1_2_Pointer)) == (((((*(WrapperStruct00_var_1_7_Pointer))) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_5_Pointer)))))) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((double) ((*(WrapperStruct00_var_1_16_Pointer)) + (*(WrapperStruct00_var_1_17_Pointer))))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((double) ((*(WrapperStruct00_var_1_18_Pointer)) - (*(WrapperStruct00_var_1_19_Pointer))))))) && (((*(WrapperStruct00_var_1_19_Pointer)) <= (*(WrapperStruct00_var_1_17_Pointer))) ? (((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_20_Pointer)) == ((double) 199.75)) : 1) : 1)
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
