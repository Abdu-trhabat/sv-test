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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 unsigned long int var_1_4;
 unsigned long int var_1_5;
 unsigned long int var_1_6;
 float var_1_7;
 signed char var_1_8;
 signed char var_1_9;
 signed char var_1_10;
 float var_1_11;
 float var_1_12;
 signed long int var_1_13;
 unsigned char var_1_14;
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
 0,
 0,
 10,
 10,
 4016566698,
 99999999999999.6,
 4,
 16,
 2,
 50.625,
 32.5,
 2,
 0
};
unsigned long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
float* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
float* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  if ((*(WrapperStruct00_var_1_3_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = ((((((*(WrapperStruct00_var_1_6_Pointer))) < (3757035609u)) ? ((*(WrapperStruct00_var_1_6_Pointer))) : (3757035609u))) - (*(WrapperStruct00_var_1_4_Pointer)));
  }
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
 }
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer));
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer));
 if (stepLocal_0 == (*(WrapperStruct00_var_1_4_Pointer))) {
  if ((*(WrapperStruct00_var_1_8_Pointer)) < stepLocal_1) {
   (*(WrapperStruct00_var_1_7_Pointer)) = (((((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer)))));
  } else {
   if ((*(WrapperStruct00_var_1_2_Pointer))) {
    (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
   } else {
    (*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
   }
  }
 }
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  if ((*(WrapperStruct00_var_1_3_Pointer)) || (*(WrapperStruct00_var_1_14_Pointer))) {
   (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
  } else {
   (*(WrapperStruct00_var_1_13_Pointer)) = ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)));
  }
 } else {
  if ((*(WrapperStruct00_var_1_14_Pointer))) {
   if ((*(WrapperStruct00_var_1_9_Pointer)) <= (*(WrapperStruct00_var_1_6_Pointer))) {
    (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
   } else {
    (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_13_Pointer)) = 32;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 4294967294);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 127);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 127);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_3_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) ((((((*(WrapperStruct00_var_1_6_Pointer))) < (3757035609u)) ? ((*(WrapperStruct00_var_1_6_Pointer))) : (3757035609u))) - (*(WrapperStruct00_var_1_4_Pointer)))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_4_Pointer))))) && ((((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))) == (*(WrapperStruct00_var_1_4_Pointer))) ? (((*(WrapperStruct00_var_1_8_Pointer)) < ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((float) (((((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))))))) : ((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((float) (*(WrapperStruct00_var_1_11_Pointer)))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((float) (*(WrapperStruct00_var_1_12_Pointer)))))) : 1)) && ((*(WrapperStruct00_var_1_2_Pointer)) ? (((*(WrapperStruct00_var_1_3_Pointer)) || (*(WrapperStruct00_var_1_14_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_8_Pointer)))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)))))) : ((*(WrapperStruct00_var_1_14_Pointer)) ? (((*(WrapperStruct00_var_1_9_Pointer)) <= (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_9_Pointer)))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_10_Pointer))))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) 32))))
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
