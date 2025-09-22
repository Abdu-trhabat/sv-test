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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch85Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 signed long int var_1_3;
 signed long int var_1_4;
 unsigned char var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 signed char var_1_17;
 signed char var_1_19;
 signed char var_1_20;
 unsigned char var_1_21;
 unsigned short int var_1_23;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 16,
 -64,
 -4,
 128,
 2,
 0,
 0,
 0,
 0,
 0,
 1,
 0,
 0,
 0,
 32,
 4,
 50,
 1,
 64
};
unsigned char last_1_WrapperStruct00_var_1_8 = 0;
unsigned char last_1_WrapperStruct00_var_1_21 = 1;
void initially(void) {
}
void step(void) {
 if (last_1_WrapperStruct00_var_1_21) {
  WrapperStruct00.var_1_1 = (((((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) < (-16)) ? ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) : (-16)));
 } else {
  if (last_1_WrapperStruct00_var_1_8) {
   WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_4 + -4);
  } else {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
  }
 }
 signed long int stepLocal_0 = WrapperStruct00.var_1_7 * (WrapperStruct00.var_1_1 / WrapperStruct00.var_1_23);
 if (stepLocal_0 == WrapperStruct00.var_1_4) {
  if (! WrapperStruct00.var_1_10) {
   WrapperStruct00.var_1_21 = WrapperStruct00.var_1_12;
  } else {
   WrapperStruct00.var_1_21 = WrapperStruct00.var_1_10;
  }
 } else {
  WrapperStruct00.var_1_21 = WrapperStruct00.var_1_9;
 }
 WrapperStruct00.var_1_6 = ((((((((32) > (WrapperStruct00.var_1_7)) ? (32) : (WrapperStruct00.var_1_7)))) < (16)) ? (((((32) > (WrapperStruct00.var_1_7)) ? (32) : (WrapperStruct00.var_1_7)))) : (16)));
 WrapperStruct00.var_1_8 = ((WrapperStruct00.var_1_9 || (WrapperStruct00.var_1_10 || WrapperStruct00.var_1_11)) || WrapperStruct00.var_1_12);
 WrapperStruct00.var_1_13 = ((WrapperStruct00.var_1_14 && WrapperStruct00.var_1_15) && WrapperStruct00.var_1_16);
 if (WrapperStruct00.var_1_8) {
  WrapperStruct00.var_1_17 = (((((WrapperStruct00.var_1_19) < (100)) ? (WrapperStruct00.var_1_19) : (100))) - 64);
 } else {
  WrapperStruct00.var_1_17 = (WrapperStruct00.var_1_19 - WrapperStruct00.var_1_20);
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= -1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1073741823);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 1073741823);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 254);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 0);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 0);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 0);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 0);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 1);
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 126);
 WrapperStruct00.var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_20 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_20 <= 126);
 WrapperStruct00.var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_23 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_23 <= 65535);
 assume_abort_if_not(WrapperStruct00.var_1_23 != 0);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
 last_1_WrapperStruct00_var_1_21 = WrapperStruct00.var_1_21;
}
int property(void) {
 return (((((last_1_WrapperStruct00_var_1_21 ? (WrapperStruct00.var_1_1 == ((signed long int) (((((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) < (-16)) ? ((WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) : (-16))))) : (last_1_WrapperStruct00_var_1_8 ? (WrapperStruct00.var_1_1 == ((signed long int) (WrapperStruct00.var_1_4 + -4))) : (WrapperStruct00.var_1_1 == ((signed long int) WrapperStruct00.var_1_4)))) && (WrapperStruct00.var_1_6 == ((unsigned char) ((((((((32) > (WrapperStruct00.var_1_7)) ? (32) : (WrapperStruct00.var_1_7)))) < (16)) ? (((((32) > (WrapperStruct00.var_1_7)) ? (32) : (WrapperStruct00.var_1_7)))) : (16)))))) && (WrapperStruct00.var_1_8 == ((unsigned char) ((WrapperStruct00.var_1_9 || (WrapperStruct00.var_1_10 || WrapperStruct00.var_1_11)) || WrapperStruct00.var_1_12)))) && (WrapperStruct00.var_1_13 == ((unsigned char) ((WrapperStruct00.var_1_14 && WrapperStruct00.var_1_15) && WrapperStruct00.var_1_16)))) && (WrapperStruct00.var_1_8 ? (WrapperStruct00.var_1_17 == ((signed char) (((((WrapperStruct00.var_1_19) < (100)) ? (WrapperStruct00.var_1_19) : (100))) - 64))) : (WrapperStruct00.var_1_17 == ((signed char) (WrapperStruct00.var_1_19 - WrapperStruct00.var_1_20))))) && (((WrapperStruct00.var_1_7 * (WrapperStruct00.var_1_1 / WrapperStruct00.var_1_23)) == WrapperStruct00.var_1_4) ? ((! WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_21 == ((unsigned char) WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_21 == ((unsigned char) WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_21 == ((unsigned char) WrapperStruct00.var_1_9)))
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
