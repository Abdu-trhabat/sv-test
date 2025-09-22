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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 signed short int var_1_3;
 unsigned short int var_1_5;
 unsigned short int var_1_6;
 unsigned short int var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned long int var_1_12;
 float var_1_13;
 float var_1_14;
 float var_1_15;
 float var_1_16;
 unsigned long int var_1_17;
 unsigned char var_1_18;
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
 -25,
 256,
 25,
 4,
 4,
 4,
 8,
 10,
 99.6,
 127.5,
 16.5,
 256.5,
 4288034294,
 0
};
unsigned short int last_1_WrapperStruct00_var_1_1 = 5;
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_7 = WrapperStruct00.var_1_5;
 if ((- (WrapperStruct00.var_1_13 / 0.6f)) > ((WrapperStruct00.var_1_14 + 3.25f) / ((((WrapperStruct00.var_1_15) < (WrapperStruct00.var_1_16)) ? (WrapperStruct00.var_1_15) : (WrapperStruct00.var_1_16))))) {
  WrapperStruct00.var_1_12 = (500u + ((((WrapperStruct00.var_1_10) < (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_7))));
 } else {
  WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_17 - WrapperStruct00.var_1_10);
 }
 WrapperStruct00.var_1_18 = WrapperStruct00.var_1_11;
 signed long int stepLocal_1 = - WrapperStruct00.var_1_3;
 unsigned long int stepLocal_0 = WrapperStruct00.var_1_12;
 if ((last_1_WrapperStruct00_var_1_1 / WrapperStruct00.var_1_3) >= stepLocal_0) {
  if (stepLocal_1 > last_1_WrapperStruct00_var_1_1) {
   WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_5) < (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_6)));
  }
 }
 unsigned long int stepLocal_2 = WrapperStruct00.var_1_12 / WrapperStruct00.var_1_3;
 if (stepLocal_2 != (WrapperStruct00.var_1_5 - 64)) {
  WrapperStruct00.var_1_8 = ((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11)));
 } else {
  WrapperStruct00.var_1_8 = ((((WrapperStruct00.var_1_11) < (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_10)));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_3 != 0);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 65534);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 65534);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 254);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 254);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 assume_abort_if_not(WrapperStruct00.var_1_15 != 0.0F);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
 assume_abort_if_not(WrapperStruct00.var_1_16 != 0.0F);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
}
int property(void) {
 return ((((((last_1_WrapperStruct00_var_1_1 / WrapperStruct00.var_1_3) >= WrapperStruct00.var_1_12) ? (((- WrapperStruct00.var_1_3) > last_1_WrapperStruct00_var_1_1) ? (WrapperStruct00.var_1_1 == ((unsigned short int) ((((WrapperStruct00.var_1_5) < (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_5) : (WrapperStruct00.var_1_6))))) : 1) : 1) && (WrapperStruct00.var_1_7 == ((unsigned short int) WrapperStruct00.var_1_5))) && (((WrapperStruct00.var_1_12 / WrapperStruct00.var_1_3) != (WrapperStruct00.var_1_5 - 64)) ? (WrapperStruct00.var_1_8 == ((unsigned char) ((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_11))))) : (WrapperStruct00.var_1_8 == ((unsigned char) ((((WrapperStruct00.var_1_11) < (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_10))))))) && (((- (WrapperStruct00.var_1_13 / 0.6f)) > ((WrapperStruct00.var_1_14 + 3.25f) / ((((WrapperStruct00.var_1_15) < (WrapperStruct00.var_1_16)) ? (WrapperStruct00.var_1_15) : (WrapperStruct00.var_1_16))))) ? (WrapperStruct00.var_1_12 == ((unsigned long int) (500u + ((((WrapperStruct00.var_1_10) < (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_7)))))) : (WrapperStruct00.var_1_12 == ((unsigned long int) (WrapperStruct00.var_1_17 - WrapperStruct00.var_1_10))))) && (WrapperStruct00.var_1_18 == ((unsigned char) WrapperStruct00.var_1_11))
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
