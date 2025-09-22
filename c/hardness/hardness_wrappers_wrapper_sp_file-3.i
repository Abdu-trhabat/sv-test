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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_4;
 unsigned char var_1_5;
 signed long int var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 signed long int var_1_9;
 signed long int var_1_10;
 unsigned char var_1_11;
 double var_1_12;
 double var_1_13;
 double var_1_14;
 double var_1_15;
 double var_1_16;
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
 1,
 0,
 0,
 -64,
 -5,
 500,
 -5,
 -100,
 1,
 127.5,
 15.75,
 -0.5,
 5.25,
 8.5
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
double* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
double* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char last_1_WrapperStruct00_var_1_1 = 0;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer));
 if (! (*(WrapperStruct00_var_1_2_Pointer))) {
  if (stepLocal_0 && last_1_WrapperStruct00_var_1_1) {
   (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer)));
  }
 }
 signed long int stepLocal_2 = (*(WrapperStruct00_var_1_8_Pointer));
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_9_Pointer));
 if (stepLocal_2 <= (*(WrapperStruct00_var_1_7_Pointer))) {
  if ((*(WrapperStruct00_var_1_10_Pointer)) >= stepLocal_1) {
   (*(WrapperStruct00_var_1_11_Pointer)) = (! (*(WrapperStruct00_var_1_5_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_11_Pointer)) = ((*(WrapperStruct00_var_1_1_Pointer)) || (! (*(WrapperStruct00_var_1_5_Pointer))));
  }
 }
 if ((*(WrapperStruct00_var_1_4_Pointer))) {
  (*(WrapperStruct00_var_1_12_Pointer)) = ((((((((((*(WrapperStruct00_var_1_13_Pointer))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))) + (*(WrapperStruct00_var_1_15_Pointer)))) < ((((((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))) < 0 ) ? -((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))) : ((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))))))) ? (((((((*(WrapperStruct00_var_1_13_Pointer))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))) + (*(WrapperStruct00_var_1_15_Pointer)))) : ((((((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))) < 0 ) ? -((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))) : ((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))))))));
 } else {
  (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
 }
 if (! (*(WrapperStruct00_var_1_11_Pointer))) {
  (*(WrapperStruct00_var_1_6_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_6_Pointer)) = (((((((*(WrapperStruct00_var_1_9_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer))))) + (*(WrapperStruct00_var_1_10_Pointer))) + (*(WrapperStruct00_var_1_7_Pointer)));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 0);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1073741823);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 1073741823);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -536870912);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 536870912);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -536870911);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 536870911);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
}
int property(void) {
 return ((((! (*(WrapperStruct00_var_1_2_Pointer))) ? (((*(WrapperStruct00_var_1_2_Pointer)) && last_1_WrapperStruct00_var_1_1) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_4_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer))))) : 1) : 1) && ((! (*(WrapperStruct00_var_1_11_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (((((((*(WrapperStruct00_var_1_9_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer))))) + (*(WrapperStruct00_var_1_10_Pointer))) + (*(WrapperStruct00_var_1_7_Pointer))))))) && (((*(WrapperStruct00_var_1_8_Pointer)) <= (*(WrapperStruct00_var_1_7_Pointer))) ? (((*(WrapperStruct00_var_1_10_Pointer)) >= (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_1_Pointer)) || (! (*(WrapperStruct00_var_1_5_Pointer))))))) : 1)) && ((*(WrapperStruct00_var_1_4_Pointer)) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((double) ((((((((((*(WrapperStruct00_var_1_13_Pointer))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))) + (*(WrapperStruct00_var_1_15_Pointer)))) < ((((((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))) < 0 ) ? -((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))) : ((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))))))) ? (((((((*(WrapperStruct00_var_1_13_Pointer))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer))) : ((*(WrapperStruct00_var_1_14_Pointer))))) + (*(WrapperStruct00_var_1_15_Pointer)))) : ((((((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))) < 0 ) ? -((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer))))) : ((((3.5) < ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.5) : ((*(WrapperStruct00_var_1_16_Pointer)))))))))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((double) (*(WrapperStruct00_var_1_15_Pointer)))))
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
