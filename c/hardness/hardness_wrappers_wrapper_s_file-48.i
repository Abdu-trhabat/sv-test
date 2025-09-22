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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch48Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 float var_1_2;
 float var_1_3;
 float var_1_4;
 float var_1_5;
 float var_1_6;
 unsigned short int var_1_7;
 unsigned char var_1_8;
 unsigned short int var_1_9;
 signed long int var_1_10;
 unsigned short int var_1_11;
 unsigned short int var_1_12;
 float var_1_13;
 float var_1_14;
 float var_1_15;
 float var_1_16;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 32.8,
 255.675,
 5.5,
 128.75,
 4.5,
 9.25,
 4,
 0,
 0,
 -128,
 0,
 256,
 2.35,
 63.8,
 128.5,
 15.6
};
void initially(void) {
}
void step(void) {
 if (WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3) {
  if (WrapperStruct00.var_1_3 < ((WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5) + 1.395f)) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
  } else {
   WrapperStruct00.var_1_1 = 3.25f;
  }
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
 }
 if (WrapperStruct00.var_1_8) {
  if ((((((16) < 0 ) ? -(16) : (16))) + WrapperStruct00.var_1_9) <= WrapperStruct00.var_1_10) {
   WrapperStruct00.var_1_7 = ((((0) > (WrapperStruct00.var_1_11)) ? (0) : (WrapperStruct00.var_1_11)));
  } else {
   WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_12 + ((((5) < 0 ) ? -(5) : (5))));
  }
 }
 if ((WrapperStruct00.var_1_12 * WrapperStruct00.var_1_10) < WrapperStruct00.var_1_7) {
  WrapperStruct00.var_1_13 = ((((WrapperStruct00.var_1_6) > ((WrapperStruct00.var_1_14 + (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16)))) ? (WrapperStruct00.var_1_6) : ((WrapperStruct00.var_1_14 + (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16)))));
 } else {
  if (((((WrapperStruct00.var_1_7) > (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_10))) <= 50) {
   WrapperStruct00.var_1_13 = WrapperStruct00.var_1_16;
  } else {
   WrapperStruct00.var_1_13 = WrapperStruct00.var_1_15;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 65535);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 65534);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 32767);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return (((WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3) ? ((WrapperStruct00.var_1_3 < ((WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5) + 1.395f)) ? (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_1 == ((float) 3.25f))) : (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_6))) && (WrapperStruct00.var_1_8 ? (((((((16) < 0 ) ? -(16) : (16))) + WrapperStruct00.var_1_9) <= WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_7 == ((unsigned short int) ((((0) > (WrapperStruct00.var_1_11)) ? (0) : (WrapperStruct00.var_1_11))))) : (WrapperStruct00.var_1_7 == ((unsigned short int) (WrapperStruct00.var_1_12 + ((((5) < 0 ) ? -(5) : (5))))))) : 1)) && (((WrapperStruct00.var_1_12 * WrapperStruct00.var_1_10) < WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_13 == ((float) ((((WrapperStruct00.var_1_6) > ((WrapperStruct00.var_1_14 + (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16)))) ? (WrapperStruct00.var_1_6) : ((WrapperStruct00.var_1_14 + (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16))))))) : ((((((WrapperStruct00.var_1_7) > (WrapperStruct00.var_1_10)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_10))) <= 50) ? (WrapperStruct00.var_1_13 == ((float) WrapperStruct00.var_1_16)) : (WrapperStruct00.var_1_13 == ((float) WrapperStruct00.var_1_15))))
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
