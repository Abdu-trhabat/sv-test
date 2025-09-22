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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 unsigned long int var_1_3;
 signed short int var_1_4;
 unsigned short int var_1_6;
 unsigned short int var_1_7;
 unsigned short int var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 double var_1_13;
 signed char var_1_15;
 double var_1_17;
 double var_1_18;
 signed short int var_1_19;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 50,
 256,
 -50,
 32,
 1,
 32,
 0,
 0,
 1,
 1,
 256.2,
 10,
 100000000000000.5,
 24.75,
 -32
};
unsigned long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
double* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
double* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
signed short int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
signed short int last_1_WrapperStruct00_var_1_4 = -50;
void initially(void) {
}
void step(void) {
 if (last_1_WrapperStruct00_var_1_4 <= (((((-32) < 0 ) ? -(-32) : (-32))) + 16)) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_3_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer)))));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
 }
 (*(WrapperStruct00_var_1_6_Pointer)) = ((((((*(WrapperStruct00_var_1_7_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer))))) + (*(WrapperStruct00_var_1_8_Pointer)));
 (*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
 (*(WrapperStruct00_var_1_19_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
 signed short int stepLocal_0 = (*(WrapperStruct00_var_1_19_Pointer));
 if ((*(WrapperStruct00_var_1_6_Pointer)) <= stepLocal_0) {
  (*(WrapperStruct00_var_1_9_Pointer)) = (! (*(WrapperStruct00_var_1_10_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_9_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) && (*(WrapperStruct00_var_1_12_Pointer)));
 }
 if ((*(WrapperStruct00_var_1_19_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) {
  if ((*(WrapperStruct00_var_1_19_Pointer)) <= (*(WrapperStruct00_var_1_1_Pointer))) {
   if ((*(WrapperStruct00_var_1_9_Pointer))) {
    (*(WrapperStruct00_var_1_4_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));
   }
  }
 }
 unsigned long int stepLocal_1 = (*(WrapperStruct00_var_1_1_Pointer));
 if (((*(WrapperStruct00_var_1_4_Pointer)) / (*(WrapperStruct00_var_1_15_Pointer))) == stepLocal_1) {
  if ((*(WrapperStruct00_var_1_10_Pointer))) {
   (*(WrapperStruct00_var_1_13_Pointer)) = (((((*(WrapperStruct00_var_1_17_Pointer))) < (1000000.5)) ? ((*(WrapperStruct00_var_1_17_Pointer))) : (1000000.5)));
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967294);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 32767);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 32767);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 0);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= -128);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
 assume_abort_if_not(WrapperStruct00.var_1_15 != 0);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_17 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_4 = WrapperStruct00.var_1_4;
}
int property(void) {
 return (((((((last_1_WrapperStruct00_var_1_4 <= (((((-32) < 0 ) ? -(-32) : (-32))) + 16)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) (((((*(WrapperStruct00_var_1_3_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_3_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_3_Pointer))))) && (((*(WrapperStruct00_var_1_19_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) ? (((*(WrapperStruct00_var_1_19_Pointer)) <= (*(WrapperStruct00_var_1_1_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) ? ((*(WrapperStruct00_var_1_4_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_19_Pointer)))) : 1) : 1) : 1)) && ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned short int) ((((((*(WrapperStruct00_var_1_7_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer))))) + (*(WrapperStruct00_var_1_8_Pointer)))))) && (((*(WrapperStruct00_var_1_6_Pointer)) <= (*(WrapperStruct00_var_1_19_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_10_Pointer))))) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_11_Pointer)) && (*(WrapperStruct00_var_1_12_Pointer))))))) && ((((*(WrapperStruct00_var_1_4_Pointer)) / (*(WrapperStruct00_var_1_15_Pointer))) == (*(WrapperStruct00_var_1_1_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((double) (((((*(WrapperStruct00_var_1_17_Pointer))) < (1000000.5)) ? ((*(WrapperStruct00_var_1_17_Pointer))) : (1000000.5))))) : 1) : 1)) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((double) (*(WrapperStruct00_var_1_17_Pointer))))) && ((*(WrapperStruct00_var_1_19_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_6_Pointer))))
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
