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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 signed long int var_1_2;
 signed long int var_1_3;
 signed long int var_1_4;
 signed char var_1_5;
 signed char var_1_6;
 signed char var_1_7;
 signed char var_1_8;
 signed char var_1_9;
 double var_1_10;
 signed char var_1_11;
 signed char var_1_12;
 double var_1_13;
 double var_1_14;
 signed long int var_1_15;
 signed long int var_1_16;
 signed long int var_1_17;
 float var_1_18;
 unsigned char var_1_19;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -128,
 8,
 1,
 2,
 16,
 1,
 10,
 5,
 4,
 200.75,
 -5,
 1,
 1.5,
 127.5,
 -128,
 1350008661,
 1785639034,
 16.2,
 1
};
signed char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed long int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
float* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned char* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer));
 if (stepLocal_0 >= ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer)))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_5_Pointer)) - (((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))) + (((((*(WrapperStruct00_var_1_8_Pointer))) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer)))))));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
 }
 signed char stepLocal_1 = (*(WrapperStruct00_var_1_6_Pointer));
 if (stepLocal_1 >= ((*(WrapperStruct00_var_1_9_Pointer)) / (((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer))))))) {
  (*(WrapperStruct00_var_1_10_Pointer)) = (((((*(WrapperStruct00_var_1_13_Pointer))) > (5.8)) ? ((*(WrapperStruct00_var_1_13_Pointer))) : (5.8)));
 } else {
  (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
 }
 signed long int stepLocal_2 = (*(WrapperStruct00_var_1_12_Pointer)) * (*(WrapperStruct00_var_1_11_Pointer));
 if (stepLocal_2 == (*(WrapperStruct00_var_1_9_Pointer))) {
  (*(WrapperStruct00_var_1_15_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_15_Pointer)) = ((*(WrapperStruct00_var_1_8_Pointer)) - ((((((*(WrapperStruct00_var_1_16_Pointer))) < ((*(WrapperStruct00_var_1_17_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer))) : ((*(WrapperStruct00_var_1_17_Pointer))))) - (*(WrapperStruct00_var_1_6_Pointer))));
 }
 signed long int stepLocal_3 = (*(WrapperStruct00_var_1_17_Pointer)) ^ (*(WrapperStruct00_var_1_9_Pointer));
 if (((*(WrapperStruct00_var_1_7_Pointer)) << (*(WrapperStruct00_var_1_16_Pointer))) != stepLocal_3) {
  if ((*(WrapperStruct00_var_1_19_Pointer))) {
   (*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 126);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 32);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 31);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 63);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 63);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
 assume_abort_if_not(WrapperStruct00.var_1_11 != 0);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 127);
 assume_abort_if_not(WrapperStruct00.var_1_12 != 0);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 2147483646);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 2147483646);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) >= ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_5_Pointer)) - (((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))) + (((((*(WrapperStruct00_var_1_8_Pointer))) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer))))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_8_Pointer))))) && (((*(WrapperStruct00_var_1_6_Pointer)) >= ((*(WrapperStruct00_var_1_9_Pointer)) / (((((*(WrapperStruct00_var_1_11_Pointer))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : ((*(WrapperStruct00_var_1_12_Pointer))))))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((double) (((((*(WrapperStruct00_var_1_13_Pointer))) > (5.8)) ? ((*(WrapperStruct00_var_1_13_Pointer))) : (5.8))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((double) (*(WrapperStruct00_var_1_14_Pointer)))))) && ((((*(WrapperStruct00_var_1_12_Pointer)) * (*(WrapperStruct00_var_1_11_Pointer))) == (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer))))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_8_Pointer)) - ((((((*(WrapperStruct00_var_1_16_Pointer))) < ((*(WrapperStruct00_var_1_17_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer))) : ((*(WrapperStruct00_var_1_17_Pointer))))) - (*(WrapperStruct00_var_1_6_Pointer)))))))) && ((((*(WrapperStruct00_var_1_7_Pointer)) << (*(WrapperStruct00_var_1_16_Pointer))) != ((*(WrapperStruct00_var_1_17_Pointer)) ^ (*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_19_Pointer)) ? ((*(WrapperStruct00_var_1_18_Pointer)) == ((float) (*(WrapperStruct00_var_1_14_Pointer)))) : 1) : 1)
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
