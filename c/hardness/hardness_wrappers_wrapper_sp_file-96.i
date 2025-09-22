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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch96Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned char var_1_2;
 unsigned short int var_1_3;
 unsigned short int var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned short int var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
 double var_1_11;
 signed long int var_1_12;
 double var_1_13;
 double var_1_14;
 signed long int var_1_15;
 float var_1_16;
 signed char var_1_17;
 signed char var_1_18;
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
 0,
 8,
 1000,
 1,
 0,
 1,
 100,
 0,
 0,
 4.575,
 128,
 2.75,
 128.5,
 -1000000000,
 99999.25,
 1,
 50
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
float* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned char last_1_WrapperStruct00_var_1_5 = 1;
void initially(void) {
}
void step(void) {
 if (! last_1_WrapperStruct00_var_1_5) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_3_Pointer))) < ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer)))));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
 }
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_6_Pointer));
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  if (stepLocal_0 && (((*(WrapperStruct00_var_1_3_Pointer)) >= 16) || (*(WrapperStruct00_var_1_7_Pointer)))) {
   if ((*(WrapperStruct00_var_1_6_Pointer))) {
    (*(WrapperStruct00_var_1_5_Pointer)) = (((*(WrapperStruct00_var_1_1_Pointer)) < (*(WrapperStruct00_var_1_8_Pointer))) && (*(WrapperStruct00_var_1_9_Pointer)));
   } else {
    (*(WrapperStruct00_var_1_5_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
   }
  }
 }
 (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_1_Pointer));
 (*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
 (*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
 if ((((((*(WrapperStruct00_var_1_15_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_15_Pointer))))) > (*(WrapperStruct00_var_1_1_Pointer))) {
  if (((*(WrapperStruct00_var_1_15_Pointer)) / -5) >= (((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer))) - (((((*(WrapperStruct00_var_1_12_Pointer))) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))))) {
   (*(WrapperStruct00_var_1_11_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 65534);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 65534);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 65535);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 0);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 126);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_5 = WrapperStruct00.var_1_5;
}
int property(void) {
 return ((((((! last_1_WrapperStruct00_var_1_5) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (((((*(WrapperStruct00_var_1_3_Pointer))) < ((*(WrapperStruct00_var_1_4_Pointer)))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_4_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_4_Pointer))))) && ((*(WrapperStruct00_var_1_2_Pointer)) ? (((*(WrapperStruct00_var_1_6_Pointer)) && (((*(WrapperStruct00_var_1_3_Pointer)) >= 16) || (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_6_Pointer)) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) (((*(WrapperStruct00_var_1_1_Pointer)) < (*(WrapperStruct00_var_1_8_Pointer))) && (*(WrapperStruct00_var_1_9_Pointer))))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_10_Pointer))))) : 1) : 1)) && (((((((*(WrapperStruct00_var_1_15_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_15_Pointer))) : ((*(WrapperStruct00_var_1_15_Pointer))))) > (*(WrapperStruct00_var_1_1_Pointer))) ? ((((*(WrapperStruct00_var_1_15_Pointer)) / -5) >= (((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer))) - (((((*(WrapperStruct00_var_1_12_Pointer))) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((double) ((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((double) (*(WrapperStruct00_var_1_14_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_1_Pointer))))) && ((*(WrapperStruct00_var_1_16_Pointer)) == ((float) (*(WrapperStruct00_var_1_13_Pointer))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_18_Pointer))))
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
