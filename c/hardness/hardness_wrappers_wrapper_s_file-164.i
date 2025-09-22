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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_3;
 signed long int var_1_4;
 signed long int var_1_5;
 double var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 double var_1_9;
 double var_1_10;
 unsigned short int var_1_11;
 signed long int var_1_12;
 signed long int var_1_13;
 unsigned short int var_1_14;
 unsigned short int var_1_15;
 signed short int var_1_16;
 unsigned short int var_1_17;
 unsigned short int var_1_18;
 unsigned short int var_1_19;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 2.5,
 1,
 0,
 8,
 -256,
 100000000000000.5,
 -1000,
 -100000,
 31.375,
 63.3,
 64,
 -1,
 100,
 2,
 1,
 32,
 10000,
 0,
 500
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2 || WrapperStruct00.var_1_3) {
  if ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5) <= -1) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
  } else {
   if (WrapperStruct00.var_1_5 > (((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_7))) * WrapperStruct00.var_1_8)) {
    WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10);
   } else {
    WrapperStruct00.var_1_1 = ((((99.5) < (WrapperStruct00.var_1_6)) ? (99.5) : (WrapperStruct00.var_1_6)));
   }
  }
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
 }
 signed long int stepLocal_0 = WrapperStruct00.var_1_8;
 if ((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) <= stepLocal_0) {
  WrapperStruct00.var_1_11 = ((((5) < (WrapperStruct00.var_1_14)) ? (5) : (WrapperStruct00.var_1_14)));
 }
 if (WrapperStruct00.var_1_2) {
  if (! ((WrapperStruct00.var_1_4 / WrapperStruct00.var_1_16) < WrapperStruct00.var_1_11)) {
   WrapperStruct00.var_1_15 = (10 + ((WrapperStruct00.var_1_17 - WrapperStruct00.var_1_18) + WrapperStruct00.var_1_19));
  }
 } else {
  WrapperStruct00.var_1_15 = WrapperStruct00.var_1_14;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483647);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 65534);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= -32768);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_16 != 0);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 8192);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 16384);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 8192);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((WrapperStruct00.var_1_2 || WrapperStruct00.var_1_3) ? (((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5) <= -1) ? (WrapperStruct00.var_1_1 == ((double) WrapperStruct00.var_1_6)) : ((WrapperStruct00.var_1_5 > (((((WrapperStruct00.var_1_4) < (WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_4) : (WrapperStruct00.var_1_7))) * WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_1 == ((double) (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_1 == ((double) ((((99.5) < (WrapperStruct00.var_1_6)) ? (99.5) : (WrapperStruct00.var_1_6))))))) : (WrapperStruct00.var_1_1 == ((double) WrapperStruct00.var_1_6))) && (((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) <= WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_11 == ((unsigned short int) ((((5) < (WrapperStruct00.var_1_14)) ? (5) : (WrapperStruct00.var_1_14))))) : 1)) && (WrapperStruct00.var_1_2 ? ((! ((WrapperStruct00.var_1_4 / WrapperStruct00.var_1_16) < WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_15 == ((unsigned short int) (10 + ((WrapperStruct00.var_1_17 - WrapperStruct00.var_1_18) + WrapperStruct00.var_1_19)))) : 1) : (WrapperStruct00.var_1_15 == ((unsigned short int) WrapperStruct00.var_1_14)))
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
