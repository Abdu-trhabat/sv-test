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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 float var_1_1;
 float var_1_3;
 float var_1_4;
 float var_1_5;
 float var_1_6;
 unsigned char var_1_7;
 float var_1_8;
 float var_1_9;
 float var_1_10;
 unsigned long int var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 signed long int var_1_15;
 signed long int var_1_16;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 3.8,
 3.7,
 32.375,
 1.9,
 63.25,
 1,
 3.25,
 8.75,
 127.62,
 5,
 1,
 0,
 0,
 -5,
 32
};
unsigned long int last_1_WrapperStruct00_var_1_11 = 5;
unsigned char last_1_WrapperStruct00_var_1_12 = 1;
signed long int last_1_WrapperStruct00_var_1_15 = -5;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_15;
 if (stepLocal_0 <= 32) {
  if ((WrapperStruct00.var_1_3 - WrapperStruct00.var_1_4) < WrapperStruct00.var_1_5) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
  } else {
   if (WrapperStruct00.var_1_6 < WrapperStruct00.var_1_4) {
    if (last_1_WrapperStruct00_var_1_12) {
     WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_8 - (WrapperStruct00.var_1_9 + WrapperStruct00.var_1_10));
    } else {
     WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
    }
   } else {
    WrapperStruct00.var_1_1 = WrapperStruct00.var_1_9;
   }
  }
 }
 if (WrapperStruct00.var_1_3 < ((WrapperStruct00.var_1_1 * WrapperStruct00.var_1_8) + WrapperStruct00.var_1_9)) {
  WrapperStruct00.var_1_11 = ((((last_1_WrapperStruct00_var_1_11) < 0 ) ? -(last_1_WrapperStruct00_var_1_11) : (last_1_WrapperStruct00_var_1_11)));
 }
 if (WrapperStruct00.var_1_7) {
  WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_13 || WrapperStruct00.var_1_14);
 }
 unsigned char stepLocal_1 = WrapperStruct00.var_1_12;
 if (WrapperStruct00.var_1_14) {
  if (WrapperStruct00.var_1_12) {
   if (stepLocal_1 || (WrapperStruct00.var_1_9 <= WrapperStruct00.var_1_3)) {
    WrapperStruct00.var_1_15 = (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_16);
   }
  } else {
   WrapperStruct00.var_1_15 = WrapperStruct00.var_1_16;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 0);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 0);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 2147483646);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_11 = WrapperStruct00.var_1_11;
 last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
 last_1_WrapperStruct00_var_1_15 = WrapperStruct00.var_1_15;
}
int property(void) {
 return ((((last_1_WrapperStruct00_var_1_15 <= 32) ? (((WrapperStruct00.var_1_3 - WrapperStruct00.var_1_4) < WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_6)) : ((WrapperStruct00.var_1_6 < WrapperStruct00.var_1_4) ? (last_1_WrapperStruct00_var_1_12 ? (WrapperStruct00.var_1_1 == ((float) (WrapperStruct00.var_1_8 - (WrapperStruct00.var_1_9 + WrapperStruct00.var_1_10)))) : (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_6))) : (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_9)))) : 1) && ((WrapperStruct00.var_1_3 < ((WrapperStruct00.var_1_1 * WrapperStruct00.var_1_8) + WrapperStruct00.var_1_9)) ? (WrapperStruct00.var_1_11 == ((unsigned long int) ((((last_1_WrapperStruct00_var_1_11) < 0 ) ? -(last_1_WrapperStruct00_var_1_11) : (last_1_WrapperStruct00_var_1_11))))) : 1)) && (WrapperStruct00.var_1_7 ? (WrapperStruct00.var_1_12 == ((unsigned char) (WrapperStruct00.var_1_13 || WrapperStruct00.var_1_14))) : 1)) && (WrapperStruct00.var_1_14 ? (WrapperStruct00.var_1_12 ? ((WrapperStruct00.var_1_12 || (WrapperStruct00.var_1_9 <= WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_15 == ((signed long int) (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_16))) : 1) : (WrapperStruct00.var_1_15 == ((signed long int) WrapperStruct00.var_1_16))) : 1)
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
