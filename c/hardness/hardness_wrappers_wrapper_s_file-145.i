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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 signed long int var_1_2;
 signed long int var_1_3;
 signed long int var_1_4;
 unsigned short int var_1_5;
 unsigned short int var_1_6;
 unsigned short int var_1_7;
 unsigned short int var_1_8;
 signed long int var_1_9;
 signed long int var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 double var_1_13;
 double var_1_14;
 signed short int var_1_15;
 double var_1_16;
 signed short int var_1_17;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 25,
 32,
 1,
 32,
 30958,
 10000,
 10000,
 10,
 2,
 -25,
 0,
 1,
 255.5,
 499.77,
 256,
 64.7,
 -256
};
void initially(void) {
}
void step(void) {
 if ((WrapperStruct00.var_1_2 + WrapperStruct00.var_1_3) <= WrapperStruct00.var_1_4) {
  WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_5 + (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)) - WrapperStruct00.var_1_8);
 }
 unsigned char stepLocal_1 = (10 > WrapperStruct00.var_1_10) && WrapperStruct00.var_1_11;
 unsigned short int stepLocal_0 = WrapperStruct00.var_1_5;
 if (stepLocal_1 || WrapperStruct00.var_1_12) {
  if (stepLocal_0 >= WrapperStruct00.var_1_10) {
   WrapperStruct00.var_1_9 = WrapperStruct00.var_1_8;
  }
 } else {
  WrapperStruct00.var_1_9 = WrapperStruct00.var_1_1;
 }
 unsigned short int stepLocal_2 = WrapperStruct00.var_1_8;
 if (WrapperStruct00.var_1_9 != stepLocal_2) {
  WrapperStruct00.var_1_13 = WrapperStruct00.var_1_14;
 }
 unsigned short int stepLocal_3 = WrapperStruct00.var_1_8;
 if (WrapperStruct00.var_1_14 <= ((((WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_16)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_16)))) {
  if (((((WrapperStruct00.var_1_9) < ((WrapperStruct00.var_1_9 & WrapperStruct00.var_1_5))) ? (WrapperStruct00.var_1_9) : ((WrapperStruct00.var_1_9 & WrapperStruct00.var_1_5)))) < stepLocal_3) {
   WrapperStruct00.var_1_15 = WrapperStruct00.var_1_6;
  } else {
   WrapperStruct00.var_1_15 = ((((((((WrapperStruct00.var_1_7) < (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_6)))) < (WrapperStruct00.var_1_17)) ? (((((WrapperStruct00.var_1_7) < (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_6)))) : (WrapperStruct00.var_1_17)));
  }
 } else {
  WrapperStruct00.var_1_15 = WrapperStruct00.var_1_6;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 32767);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 8192);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 16384);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 8192);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 16383);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 32767);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((WrapperStruct00.var_1_2 + WrapperStruct00.var_1_3) <= WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_1 == ((unsigned short int) ((WrapperStruct00.var_1_5 + (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)) - WrapperStruct00.var_1_8))) : 1) && ((((10 > WrapperStruct00.var_1_10) && WrapperStruct00.var_1_11) || WrapperStruct00.var_1_12) ? ((WrapperStruct00.var_1_5 >= WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_9 == ((signed long int) WrapperStruct00.var_1_8)) : 1) : (WrapperStruct00.var_1_9 == ((signed long int) WrapperStruct00.var_1_1)))) && ((WrapperStruct00.var_1_9 != WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_13 == ((double) WrapperStruct00.var_1_14)) : 1)) && ((WrapperStruct00.var_1_14 <= ((((WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_16)) ? (WrapperStruct00.var_1_13) : (WrapperStruct00.var_1_16)))) ? ((((((WrapperStruct00.var_1_9) < ((WrapperStruct00.var_1_9 & WrapperStruct00.var_1_5))) ? (WrapperStruct00.var_1_9) : ((WrapperStruct00.var_1_9 & WrapperStruct00.var_1_5)))) < WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_15 == ((signed short int) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_15 == ((signed short int) ((((((((WrapperStruct00.var_1_7) < (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_6)))) < (WrapperStruct00.var_1_17)) ? (((((WrapperStruct00.var_1_7) < (WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_6)))) : (WrapperStruct00.var_1_17)))))) : (WrapperStruct00.var_1_15 == ((signed short int) WrapperStruct00.var_1_6)))
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
