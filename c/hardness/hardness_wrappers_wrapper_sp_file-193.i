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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch193Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned char var_1_4;
 signed long int var_1_5;
 unsigned char var_1_6;
 double var_1_7;
 double var_1_8;
 double var_1_9;
 unsigned long int var_1_10;
 double var_1_11;
 double var_1_12;
 signed short int var_1_13;
 signed short int var_1_14;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 4,
 50,
 5,
 16,
 4,
 1,
 31.5,
 128.8,
 99999999999.5,
 100000,
 50.875,
 0.4,
 -25,
 128
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed long int last_1_WrapperStruct00_var_1_5 = 4;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = (*(WrapperStruct00_var_1_3_Pointer));
 unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_2_Pointer));
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_3_Pointer));
 if ((*(WrapperStruct00_var_1_2_Pointer)) == stepLocal_0) {
  if (stepLocal_1 > (((((- (*(WrapperStruct00_var_1_3_Pointer)))) > ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((- (*(WrapperStruct00_var_1_3_Pointer)))) : ((*(WrapperStruct00_var_1_4_Pointer)))))) {
   if (((*(WrapperStruct00_var_1_2_Pointer)) * ((*(WrapperStruct00_var_1_4_Pointer)) * -5)) > stepLocal_2) {
    (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_2_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
 }
 (*(WrapperStruct00_var_1_13_Pointer)) = 4;
 (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
 if ((*(WrapperStruct00_var_1_6_Pointer))) {
  (*(WrapperStruct00_var_1_5_Pointer)) = ((*(WrapperStruct00_var_1_14_Pointer)) + (((((((((*(WrapperStruct00_var_1_1_Pointer))) < ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer)))))) > (last_1_WrapperStruct00_var_1_5)) ? ((((((*(WrapperStruct00_var_1_1_Pointer))) < ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer)))))) : (last_1_WrapperStruct00_var_1_5))));
 }
 signed short int stepLocal_4 = (*(WrapperStruct00_var_1_13_Pointer));
 unsigned long int stepLocal_3 = 16u;
 if (stepLocal_4 > 64) {
  (*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer)));
 } else {
  if (stepLocal_3 == ((*(WrapperStruct00_var_1_13_Pointer)) / (*(WrapperStruct00_var_1_10_Pointer)))) {
   (*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) + (*(WrapperStruct00_var_1_12_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
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
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 4294967295);
 assume_abort_if_not(WrapperStruct00.var_1_10 != 0);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_5 = WrapperStruct00.var_1_5;
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_2_Pointer)) == (*(WrapperStruct00_var_1_3_Pointer))) ? (((*(WrapperStruct00_var_1_2_Pointer)) > (((((- (*(WrapperStruct00_var_1_3_Pointer)))) > ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((- (*(WrapperStruct00_var_1_3_Pointer)))) : ((*(WrapperStruct00_var_1_4_Pointer)))))) ? ((((*(WrapperStruct00_var_1_2_Pointer)) * ((*(WrapperStruct00_var_1_4_Pointer)) * -5)) > (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_3_Pointer)))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_2_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_4_Pointer))))) && ((*(WrapperStruct00_var_1_6_Pointer)) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_14_Pointer)) + (((((((((*(WrapperStruct00_var_1_1_Pointer))) < ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer)))))) > (last_1_WrapperStruct00_var_1_5)) ? ((((((*(WrapperStruct00_var_1_1_Pointer))) < ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer)))))) : (last_1_WrapperStruct00_var_1_5)))))) : 1)) && (((*(WrapperStruct00_var_1_13_Pointer)) > 64) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((double) ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))))) : ((16u == ((*(WrapperStruct00_var_1_13_Pointer)) / (*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((double) ((*(WrapperStruct00_var_1_11_Pointer)) + (*(WrapperStruct00_var_1_12_Pointer))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((double) (*(WrapperStruct00_var_1_11_Pointer))))))) && ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed short int) 4))) && ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_13_Pointer))))
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
