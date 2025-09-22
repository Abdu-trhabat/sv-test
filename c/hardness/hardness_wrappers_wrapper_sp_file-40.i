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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch40Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 float var_1_4;
 float var_1_5;
 signed long int var_1_6;
 unsigned char var_1_7;
 signed long int var_1_8;
 signed long int var_1_9;
 signed long int var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 double var_1_13;
 float var_1_14;
 double var_1_15;
 signed char var_1_16;
 signed char var_1_17;
 signed char var_1_18;
 float var_1_19;
 signed short int var_1_20;
 signed short int var_1_21;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -4,
 0,
 0,
 63.7,
 9999.3,
 -256,
 64,
 -2,
 -10,
 5,
 128,
 1,
 8.4,
 128.5,
 49.75,
 -2,
 25,
 -5,
 7.5,
 1,
 -256
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
double* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
float* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
signed short int* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
signed short int* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);
double last_1_WrapperStruct00_var_1_13 = 8.4;
signed short int last_1_WrapperStruct00_var_1_20 = 1;
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  if ((*(WrapperStruct00_var_1_3_Pointer)) && ((*(WrapperStruct00_var_1_4_Pointer)) <= (- 63.9f))) {
   if ((*(WrapperStruct00_var_1_4_Pointer)) >= (*(WrapperStruct00_var_1_5_Pointer))) {
    if ((*(WrapperStruct00_var_1_3_Pointer))) {
     (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
    }
   }
  }
 }
 if ((((*(WrapperStruct00_var_1_1_Pointer)) / (*(WrapperStruct00_var_1_8_Pointer))) / (*(WrapperStruct00_var_1_9_Pointer))) >= ((*(WrapperStruct00_var_1_10_Pointer)) | (*(WrapperStruct00_var_1_6_Pointer)))) {
  (*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
 }
 if (last_1_WrapperStruct00_var_1_13 != (((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))) {
  (*(WrapperStruct00_var_1_13_Pointer)) = ((*(WrapperStruct00_var_1_15_Pointer)) + (127.4 - 8.25));
 }
 if ((*(WrapperStruct00_var_1_3_Pointer))) {
  (*(WrapperStruct00_var_1_16_Pointer)) = (((((*(WrapperStruct00_var_1_17_Pointer))) > ((-2 + (*(WrapperStruct00_var_1_18_Pointer))))) ? ((*(WrapperStruct00_var_1_17_Pointer))) : ((-2 + (*(WrapperStruct00_var_1_18_Pointer))))));
 }
 (*(WrapperStruct00_var_1_19_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
 (*(WrapperStruct00_var_1_20_Pointer)) = last_1_WrapperStruct00_var_1_20;
 (*(WrapperStruct00_var_1_21_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483646);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_9 != 0);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 254);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 127);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 126);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 63);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
 last_1_WrapperStruct00_var_1_20 = WrapperStruct00.var_1_20;
}
int property(void) {
 return (((((((*(WrapperStruct00_var_1_2_Pointer)) ? (((*(WrapperStruct00_var_1_3_Pointer)) && ((*(WrapperStruct00_var_1_4_Pointer)) <= (- 63.9f))) ? (((*(WrapperStruct00_var_1_4_Pointer)) >= (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_3_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_6_Pointer)))) : 1) : 1) : 1) : 1) && (((((*(WrapperStruct00_var_1_1_Pointer)) / (*(WrapperStruct00_var_1_8_Pointer))) / (*(WrapperStruct00_var_1_9_Pointer))) >= ((*(WrapperStruct00_var_1_10_Pointer)) | (*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer)))))) && ((last_1_WrapperStruct00_var_1_13 != (((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer)))))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((double) ((*(WrapperStruct00_var_1_15_Pointer)) + (127.4 - 8.25)))) : 1)) && ((*(WrapperStruct00_var_1_3_Pointer)) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed char) (((((*(WrapperStruct00_var_1_17_Pointer))) > ((-2 + (*(WrapperStruct00_var_1_18_Pointer))))) ? ((*(WrapperStruct00_var_1_17_Pointer))) : ((-2 + (*(WrapperStruct00_var_1_18_Pointer)))))))) : 1)) && ((*(WrapperStruct00_var_1_19_Pointer)) == ((float) (*(WrapperStruct00_var_1_15_Pointer))))) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((signed short int) last_1_WrapperStruct00_var_1_20))) && ((*(WrapperStruct00_var_1_21_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_18_Pointer))))
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
