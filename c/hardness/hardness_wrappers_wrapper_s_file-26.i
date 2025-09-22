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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch26Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 double var_1_2;
 double var_1_3;
 signed short int var_1_4;
 signed short int var_1_5;
 signed short int var_1_6;
 signed short int var_1_7;
 signed short int var_1_8;
 signed short int var_1_9;
 signed short int var_1_10;
 signed short int var_1_11;
 float var_1_12;
 float var_1_13;
 float var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 unsigned long int var_1_17;
 signed long int var_1_19;
 float var_1_20;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -1,
 255.5,
 1.25,
 1,
 -10,
 -1,
 5,
 4,
 0,
 -32,
 1,
 1.125,
 199.5,
 100000000000000.3,
 64,
 2,
 50,
 -32,
 8.75
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2 > WrapperStruct00.var_1_3) {
  WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_4) > (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5)));
 } else {
  WrapperStruct00.var_1_1 = (((((WrapperStruct00.var_1_6 - ((((WrapperStruct00.var_1_7) > (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_8))))) < ((WrapperStruct00.var_1_9 + ((((WrapperStruct00.var_1_10) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11)))))) ? ((WrapperStruct00.var_1_6 - ((((WrapperStruct00.var_1_7) > (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_8))))) : ((WrapperStruct00.var_1_9 + ((((WrapperStruct00.var_1_10) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11)))))));
 }
 WrapperStruct00.var_1_12 = ((0.85f - WrapperStruct00.var_1_13) + WrapperStruct00.var_1_14);
 if ((- WrapperStruct00.var_1_8) >= (WrapperStruct00.var_1_4 / ((((-4) < 0 ) ? -(-4) : (-4))))) {
  WrapperStruct00.var_1_15 = WrapperStruct00.var_1_16;
 }
 signed long int stepLocal_0 = WrapperStruct00.var_1_7 * (WrapperStruct00.var_1_1 / WrapperStruct00.var_1_19);
 if ((WrapperStruct00.var_1_5 + (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_15)) != stepLocal_0) {
  WrapperStruct00.var_1_17 = (((((10u) < ((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_8))) ? (10u) : ((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_8)))) + WrapperStruct00.var_1_7);
 }
 WrapperStruct00.var_1_20 = WrapperStruct00.var_1_13;
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 32766);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 32766);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 32766);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 32766);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 32766);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 16383);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 16383);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -16383);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 16383);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 254);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_19 != 0);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((WrapperStruct00.var_1_2 > WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((signed short int) ((((WrapperStruct00.var_1_4) > (WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_5))))) : (WrapperStruct00.var_1_1 == ((signed short int) (((((WrapperStruct00.var_1_6 - ((((WrapperStruct00.var_1_7) > (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_8))))) < ((WrapperStruct00.var_1_9 + ((((WrapperStruct00.var_1_10) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11)))))) ? ((WrapperStruct00.var_1_6 - ((((WrapperStruct00.var_1_7) > (WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_8))))) : ((WrapperStruct00.var_1_9 + ((((WrapperStruct00.var_1_10) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11)))))))))) && (WrapperStruct00.var_1_12 == ((float) ((0.85f - WrapperStruct00.var_1_13) + WrapperStruct00.var_1_14)))) && (((- WrapperStruct00.var_1_8) >= (WrapperStruct00.var_1_4 / ((((-4) < 0 ) ? -(-4) : (-4))))) ? (WrapperStruct00.var_1_15 == ((unsigned char) WrapperStruct00.var_1_16)) : 1)) && (((WrapperStruct00.var_1_5 + (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_15)) != (WrapperStruct00.var_1_7 * (WrapperStruct00.var_1_1 / WrapperStruct00.var_1_19))) ? (WrapperStruct00.var_1_17 == ((unsigned long int) (((((10u) < ((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_8))) ? (10u) : ((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_8)))) + WrapperStruct00.var_1_7))) : 1)) && (WrapperStruct00.var_1_20 == ((float) WrapperStruct00.var_1_13))
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
