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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 float var_1_4;
 unsigned char var_1_5;
 float var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 signed long int var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 signed char var_1_15;
 unsigned long int var_1_16;
 double var_1_17;
 double var_1_18;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 5.5,
 256.2,
 1,
 -0.25,
 -8,
 1000000,
 128,
 0,
 100,
 50,
 50,
 5,
 -100,
 128,
 -0.4,
 128.5
};
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9);
 if (WrapperStruct00.var_1_5) {
  WrapperStruct00.var_1_10 = ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) + (((((WrapperStruct00.var_1_13) < (8)) ? (WrapperStruct00.var_1_13) : (8))) + ((((WrapperStruct00.var_1_14) < 0 ) ? -(WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_14)))));
 }
 signed long int stepLocal_0 = WrapperStruct00.var_1_7;
 if (((((WrapperStruct00.var_1_8) < (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_7))) > stepLocal_0) {
  WrapperStruct00.var_1_16 = ((((((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_7)))) < (WrapperStruct00.var_1_12)) ? (((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_7)))) : (WrapperStruct00.var_1_12)));
 } else {
  WrapperStruct00.var_1_16 = ((((WrapperStruct00.var_1_11) < (WrapperStruct00.var_1_13)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_13)));
 }
 WrapperStruct00.var_1_17 = WrapperStruct00.var_1_4;
 WrapperStruct00.var_1_18 = WrapperStruct00.var_1_6;
 if (WrapperStruct00.var_1_18 <= (- WrapperStruct00.var_1_17)) {
  WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_4) < 0 ) ? -(WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_4)));
 } else {
  if (WrapperStruct00.var_1_5) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
  } else {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
  }
 }
 if (WrapperStruct00.var_1_17 < 1.25f) {
  WrapperStruct00.var_1_15 = WrapperStruct00.var_1_13;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 1073741823);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1073741823);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 63);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 64);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((WrapperStruct00.var_1_18 <= (- WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_1 == ((float) ((((WrapperStruct00.var_1_4) < 0 ) ? -(WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_4))))) : (WrapperStruct00.var_1_5 ? (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_4)) : (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_6)))) && (WrapperStruct00.var_1_7 == ((signed long int) (WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9)))) && (WrapperStruct00.var_1_5 ? (WrapperStruct00.var_1_10 == ((unsigned char) ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) + (((((WrapperStruct00.var_1_13) < (8)) ? (WrapperStruct00.var_1_13) : (8))) + ((((WrapperStruct00.var_1_14) < 0 ) ? -(WrapperStruct00.var_1_14) : (WrapperStruct00.var_1_14))))))) : 1)) && ((WrapperStruct00.var_1_17 < 1.25f) ? (WrapperStruct00.var_1_15 == ((signed char) WrapperStruct00.var_1_13)) : 1)) && ((((((WrapperStruct00.var_1_8) < (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_7))) > WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_16 == ((unsigned long int) ((((((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_7)))) < (WrapperStruct00.var_1_12)) ? (((((WrapperStruct00.var_1_13) > (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_7)))) : (WrapperStruct00.var_1_12))))) : (WrapperStruct00.var_1_16 == ((unsigned long int) ((((WrapperStruct00.var_1_11) < (WrapperStruct00.var_1_13)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_13))))))) && (WrapperStruct00.var_1_17 == ((double) WrapperStruct00.var_1_4))) && (WrapperStruct00.var_1_18 == ((double) WrapperStruct00.var_1_6))
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
