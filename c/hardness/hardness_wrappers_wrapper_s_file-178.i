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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch178Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_2;
 signed long int var_1_5;
 signed long int var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned short int var_1_9;
 unsigned long int var_1_10;
 unsigned short int var_1_12;
 unsigned short int var_1_13;
 signed short int var_1_14;
 signed short int var_1_15;
 unsigned char var_1_16;
 unsigned char var_1_17;
 unsigned char var_1_18;
 signed short int var_1_19;
 signed short int var_1_20;
 unsigned char var_1_21;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 1,
 0,
 -1,
 2,
 1,
 0,
 8,
 1,
 24832,
 24891,
 256,
 128,
 4,
 0,
 64,
 256,
 -25,
 25
};
void initially(void) {
}
void step(void) {
 WrapperStruct00.var_1_16 = (WrapperStruct00.var_1_17 + WrapperStruct00.var_1_18);
 WrapperStruct00.var_1_19 = WrapperStruct00.var_1_17;
 WrapperStruct00.var_1_20 = WrapperStruct00.var_1_18;
 WrapperStruct00.var_1_21 = WrapperStruct00.var_1_17;
 unsigned long int stepLocal_1 = WrapperStruct00.var_1_10;
 unsigned long int stepLocal_0 = ((((WrapperStruct00.var_1_5 * WrapperStruct00.var_1_10)) > (WrapperStruct00.var_1_20)) ? ((WrapperStruct00.var_1_5 * WrapperStruct00.var_1_10)) : (WrapperStruct00.var_1_20));
 if (256u <= stepLocal_0) {
  if (WrapperStruct00.var_1_19 < stepLocal_1) {
   WrapperStruct00.var_1_9 = ((WrapperStruct00.var_1_12 + WrapperStruct00.var_1_13) - WrapperStruct00.var_1_20);
  } else {
   WrapperStruct00.var_1_9 = WrapperStruct00.var_1_12;
  }
 }
 if (WrapperStruct00.var_1_8) {
  WrapperStruct00.var_1_14 = WrapperStruct00.var_1_21;
 } else {
  WrapperStruct00.var_1_14 = ((((WrapperStruct00.var_1_16) < ((WrapperStruct00.var_1_21 - WrapperStruct00.var_1_15))) ? (WrapperStruct00.var_1_16) : ((WrapperStruct00.var_1_21 - WrapperStruct00.var_1_15))));
 }
 if (! WrapperStruct00.var_1_2) {
  if (! WrapperStruct00.var_1_2) {
   WrapperStruct00.var_1_1 = (((WrapperStruct00.var_1_21 + WrapperStruct00.var_1_9) > (WrapperStruct00.var_1_5 * WrapperStruct00.var_1_6)) || WrapperStruct00.var_1_7);
  } else {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 0);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 4294967295);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 32767);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 16384);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 32767);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 32766);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 127);
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((! WrapperStruct00.var_1_2) ? ((! WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_1 == ((unsigned char) (((WrapperStruct00.var_1_21 + WrapperStruct00.var_1_9) > (WrapperStruct00.var_1_5 * WrapperStruct00.var_1_6)) || WrapperStruct00.var_1_7))) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_8))) : 1) && ((256u <= (((((WrapperStruct00.var_1_5 * WrapperStruct00.var_1_10)) > (WrapperStruct00.var_1_20)) ? ((WrapperStruct00.var_1_5 * WrapperStruct00.var_1_10)) : (WrapperStruct00.var_1_20)))) ? ((WrapperStruct00.var_1_19 < WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_9 == ((unsigned short int) ((WrapperStruct00.var_1_12 + WrapperStruct00.var_1_13) - WrapperStruct00.var_1_20))) : (WrapperStruct00.var_1_9 == ((unsigned short int) WrapperStruct00.var_1_12))) : 1)) && (WrapperStruct00.var_1_8 ? (WrapperStruct00.var_1_14 == ((signed short int) WrapperStruct00.var_1_21)) : (WrapperStruct00.var_1_14 == ((signed short int) ((((WrapperStruct00.var_1_16) < ((WrapperStruct00.var_1_21 - WrapperStruct00.var_1_15))) ? (WrapperStruct00.var_1_16) : ((WrapperStruct00.var_1_21 - WrapperStruct00.var_1_15)))))))) && (WrapperStruct00.var_1_16 == ((unsigned char) (WrapperStruct00.var_1_17 + WrapperStruct00.var_1_18)))) && (WrapperStruct00.var_1_19 == ((signed short int) WrapperStruct00.var_1_17))) && (WrapperStruct00.var_1_20 == ((signed short int) WrapperStruct00.var_1_18))) && (WrapperStruct00.var_1_21 == ((unsigned char) WrapperStruct00.var_1_17))
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
