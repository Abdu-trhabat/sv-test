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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch198Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 signed long int var_1_2;
 unsigned char var_1_3;
 signed long int var_1_4;
 double var_1_5;
 double var_1_6;
 double var_1_7;
 float var_1_8;
 signed char var_1_9;
 unsigned char var_1_10;
 signed char var_1_11;
 signed char var_1_12;
 signed char var_1_13;
 signed char var_1_14;
 signed char var_1_15;
 signed char var_1_16;
 signed char var_1_17;
 signed short int var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 0.8,
 32,
 0,
 0,
 16.75,
 15.5,
 0.9,
 16.8,
 -64,
 0,
 -32,
 -1,
 100,
 16,
 2,
 5,
 -8,
 256
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
double* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
float* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed short int* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer));
 if (stepLocal_0 >= (*(WrapperStruct00_var_1_4_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((((*(WrapperStruct00_var_1_5_Pointer))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))) + 10.55) + (*(WrapperStruct00_var_1_7_Pointer)));
 }
 if ((*(WrapperStruct00_var_1_7_Pointer)) > 64.2) {
  (*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 }
 unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_10_Pointer));
 if ((*(WrapperStruct00_var_1_3_Pointer)) || stepLocal_1) {
  (*(WrapperStruct00_var_1_9_Pointer)) = (((((*(WrapperStruct00_var_1_11_Pointer))) < (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer))))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer))))));
 } else {
  if ((*(WrapperStruct00_var_1_3_Pointer))) {
   (*(WrapperStruct00_var_1_9_Pointer)) = ((*(WrapperStruct00_var_1_14_Pointer)) + (((((*(WrapperStruct00_var_1_15_Pointer))) > ((((((*(WrapperStruct00_var_1_16_Pointer))) > ((*(WrapperStruct00_var_1_17_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer))) : ((*(WrapperStruct00_var_1_17_Pointer))))))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((((((*(WrapperStruct00_var_1_16_Pointer))) > ((*(WrapperStruct00_var_1_17_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer))) : ((*(WrapperStruct00_var_1_17_Pointer)))))))));
  } else {
   if ((*(WrapperStruct00_var_1_7_Pointer)) >= (*(WrapperStruct00_var_1_6_Pointer))) {
    (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
   } else {
    (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
   }
  }
 }
 if ((*(WrapperStruct00_var_1_1_Pointer)) > ((((((((*(WrapperStruct00_var_1_5_Pointer))) > ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))) < 0 ) ? -(((((*(WrapperStruct00_var_1_5_Pointer))) > ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))) : (((((*(WrapperStruct00_var_1_5_Pointer))) > ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer)))))))) {
  (*(WrapperStruct00_var_1_18_Pointer)) = (25 - ((((4) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? (4) : ((*(WrapperStruct00_var_1_13_Pointer))))));
 } else {
  (*(WrapperStruct00_var_1_18_Pointer)) = 32;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 126);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 126);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 63);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 63);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) >= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (((((((*(WrapperStruct00_var_1_5_Pointer))) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))) + 10.55) + (*(WrapperStruct00_var_1_7_Pointer))))) : 1) && (((*(WrapperStruct00_var_1_7_Pointer)) > 64.2) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((float) (*(WrapperStruct00_var_1_5_Pointer)))) : 1)) && (((*(WrapperStruct00_var_1_3_Pointer)) || (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed char) (((((*(WrapperStruct00_var_1_11_Pointer))) < (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer))))) ? ((*(WrapperStruct00_var_1_11_Pointer))) : (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer)))))))) : ((*(WrapperStruct00_var_1_3_Pointer)) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_14_Pointer)) + (((((*(WrapperStruct00_var_1_15_Pointer))) > ((((((*(WrapperStruct00_var_1_16_Pointer))) > ((*(WrapperStruct00_var_1_17_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer))) : ((*(WrapperStruct00_var_1_17_Pointer))))))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((((((*(WrapperStruct00_var_1_16_Pointer))) > ((*(WrapperStruct00_var_1_17_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer))) : ((*(WrapperStruct00_var_1_17_Pointer))))))))))) : (((*(WrapperStruct00_var_1_7_Pointer)) >= (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_17_Pointer)))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_16_Pointer)))))))) && (((*(WrapperStruct00_var_1_1_Pointer)) > ((((((((*(WrapperStruct00_var_1_5_Pointer))) > ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))) < 0 ) ? -(((((*(WrapperStruct00_var_1_5_Pointer))) > ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))) : (((((*(WrapperStruct00_var_1_5_Pointer))) > ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_5_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer)))))))) ? ((*(WrapperStruct00_var_1_18_Pointer)) == ((signed short int) (25 - ((((4) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? (4) : ((*(WrapperStruct00_var_1_13_Pointer)))))))) : ((*(WrapperStruct00_var_1_18_Pointer)) == ((signed short int) 32)))
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
