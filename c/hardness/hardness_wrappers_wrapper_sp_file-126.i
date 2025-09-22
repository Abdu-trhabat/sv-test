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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch126Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 signed char var_1_2;
 signed char var_1_3;
 signed char var_1_4;
 signed long int var_1_5;
 signed char var_1_6;
 signed char var_1_7;
 signed char var_1_8;
 float var_1_9;
 unsigned char var_1_10;
 float var_1_11;
 float var_1_12;
 float var_1_13;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 8,
 100,
 -16,
 -8,
 8,
 8,
 32,
 -8,
 9.75,
 1,
 5.876,
 10.2,
 16.5
};
signed char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
float* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
float* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
void initially(void) {
}
void step(void) {
 signed char stepLocal_1 = (*(WrapperStruct00_var_1_4_Pointer));
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_5_Pointer));
 if ((((*(WrapperStruct00_var_1_2_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) + (*(WrapperStruct00_var_1_4_Pointer))) != stepLocal_0) {
  if ((*(WrapperStruct00_var_1_2_Pointer)) <= stepLocal_1) {
   (*(WrapperStruct00_var_1_1_Pointer)) = ((((((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? (((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_8_Pointer)))));
  }
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
 }
 signed char stepLocal_3 = (*(WrapperStruct00_var_1_1_Pointer));
 signed char stepLocal_2 = (*(WrapperStruct00_var_1_1_Pointer));
 if (stepLocal_3 <= (*(WrapperStruct00_var_1_3_Pointer))) {
  if ((*(WrapperStruct00_var_1_10_Pointer))) {
   if (stepLocal_2 <= (((((-128 % (*(WrapperStruct00_var_1_3_Pointer)))) > ((*(WrapperStruct00_var_1_1_Pointer)))) ? ((-128 % (*(WrapperStruct00_var_1_3_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)))))) {
    (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
   } else {
    (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
   }
  }
 } else {
  (*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
 }
 signed long int stepLocal_5 = 50;
 unsigned char stepLocal_4 = (*(WrapperStruct00_var_1_11_Pointer)) < (*(WrapperStruct00_var_1_9_Pointer));
 if (! (5 < (*(WrapperStruct00_var_1_1_Pointer)))) {
  if (stepLocal_4 && (*(WrapperStruct00_var_1_10_Pointer))) {
   if (stepLocal_5 < (*(WrapperStruct00_var_1_6_Pointer))) {
    (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_13_Pointer)) = 16.2f;
  }
 } else {
  (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 127);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 127);
 assume_abort_if_not(WrapperStruct00.var_1_3 != 0);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 63);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 126);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_2_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) + (*(WrapperStruct00_var_1_4_Pointer))) != (*(WrapperStruct00_var_1_5_Pointer))) ? (((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) ((((((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) < ((*(WrapperStruct00_var_1_8_Pointer)))) ? (((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_8_Pointer))))))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_8_Pointer))))) && (((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) ? (((*(WrapperStruct00_var_1_1_Pointer)) <= (((((-128 % (*(WrapperStruct00_var_1_3_Pointer)))) > ((*(WrapperStruct00_var_1_1_Pointer)))) ? ((-128 % (*(WrapperStruct00_var_1_3_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)))))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((float) (*(WrapperStruct00_var_1_11_Pointer)))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((float) (*(WrapperStruct00_var_1_12_Pointer))))) : 1) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((float) (*(WrapperStruct00_var_1_11_Pointer)))))) && ((! (5 < (*(WrapperStruct00_var_1_1_Pointer)))) ? ((((*(WrapperStruct00_var_1_11_Pointer)) < (*(WrapperStruct00_var_1_9_Pointer))) && (*(WrapperStruct00_var_1_10_Pointer))) ? ((50 < (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((float) (*(WrapperStruct00_var_1_12_Pointer)))) : 1) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((float) 16.2f))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((float) (*(WrapperStruct00_var_1_12_Pointer)))))
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
