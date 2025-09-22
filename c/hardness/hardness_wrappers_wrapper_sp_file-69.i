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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch69Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 unsigned long int var_1_2;
 unsigned long int var_1_3;
 unsigned long int var_1_4;
 unsigned long int var_1_5;
 signed short int var_1_6;
 signed long int var_1_7;
 unsigned char var_1_8;
 signed char var_1_9;
 signed short int var_1_10;
 signed short int var_1_11;
 signed long int var_1_12;
 signed short int var_1_13;
 float var_1_14;
 signed char var_1_15;
 signed char var_1_16;
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
 -100,
 0,
 8,
 256,
 500,
 -128,
 -5,
 1,
 -4,
 -1,
 32,
 8,
 1,
 16.25,
 16,
 50,
 -100
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = (*(WrapperStruct00_var_1_2_Pointer));
 unsigned long int stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer)) * (((((*(WrapperStruct00_var_1_3_Pointer))) < ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))));
 if (stepLocal_0 < (*(WrapperStruct00_var_1_5_Pointer))) {
  if ((*(WrapperStruct00_var_1_5_Pointer)) > stepLocal_1) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = 4;
  }
 }
 unsigned long int stepLocal_3 = (*(WrapperStruct00_var_1_2_Pointer));
 unsigned char stepLocal_2 = (*(WrapperStruct00_var_1_2_Pointer)) > ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_3_Pointer)));
 if ((*(WrapperStruct00_var_1_8_Pointer)) || stepLocal_2) {
  (*(WrapperStruct00_var_1_7_Pointer)) = (((((*(WrapperStruct00_var_1_1_Pointer))) < (((((-200) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? (-200) : ((*(WrapperStruct00_var_1_6_Pointer))))))) ? ((*(WrapperStruct00_var_1_1_Pointer))) : (((((-200) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? (-200) : ((*(WrapperStruct00_var_1_6_Pointer))))))));
 } else {
  if (stepLocal_3 != 1u) {
   (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_1_Pointer));
  } else {
   (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  }
 }
 signed long int stepLocal_4 = (*(WrapperStruct00_var_1_12_Pointer)) >> (*(WrapperStruct00_var_1_13_Pointer));
 if (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))) >= stepLocal_4) {
  if ((- 999999.75f) > (*(WrapperStruct00_var_1_14_Pointer))) {
   (*(WrapperStruct00_var_1_9_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) + (((((*(WrapperStruct00_var_1_15_Pointer))) > ((*(WrapperStruct00_var_1_16_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_16_Pointer))))));
  }
 }
 (*(WrapperStruct00_var_1_17_Pointer)) = 4;
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 4294967295);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 4294967295);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 32766);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 32767);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 32767);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 30);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 63);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_2_Pointer)) * (((((*(WrapperStruct00_var_1_3_Pointer))) < ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))))) < (*(WrapperStruct00_var_1_5_Pointer))) ? (((*(WrapperStruct00_var_1_5_Pointer)) > (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) 4))) : 1) && (((*(WrapperStruct00_var_1_8_Pointer)) || ((*(WrapperStruct00_var_1_2_Pointer)) > ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_3_Pointer))))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) (((((*(WrapperStruct00_var_1_1_Pointer))) < (((((-200) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? (-200) : ((*(WrapperStruct00_var_1_6_Pointer))))))) ? ((*(WrapperStruct00_var_1_1_Pointer))) : (((((-200) < ((*(WrapperStruct00_var_1_6_Pointer)))) ? (-200) : ((*(WrapperStruct00_var_1_6_Pointer)))))))))) : (((*(WrapperStruct00_var_1_2_Pointer)) != 1u) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_1_Pointer)))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_6_Pointer))))))) && ((((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))) >= ((*(WrapperStruct00_var_1_12_Pointer)) >> (*(WrapperStruct00_var_1_13_Pointer)))) ? (((- 999999.75f) > (*(WrapperStruct00_var_1_14_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_13_Pointer)) + (((((*(WrapperStruct00_var_1_15_Pointer))) > ((*(WrapperStruct00_var_1_16_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_16_Pointer)))))))) : 1) : 1)) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((signed char) 4))
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
