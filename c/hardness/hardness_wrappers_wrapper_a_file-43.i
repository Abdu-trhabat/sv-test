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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch43Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {1, 0}, {1, 0}
};
float float_Array_0[2][2] = {
 {0.2, 64.8}, {64.4, 4.5}
};
signed short int signed_short_int_Array_0[2][3] = {
 {5, 8, 10000}, {50, 1, 64}
};
unsigned char unsigned_char_Array_0[2][3] = {
 {2, 128, 100}, {2, 2, 100}
};
unsigned long int unsigned_long_int_Array_0[1] = {
 32
};
unsigned short int unsigned_short_int_Array_0[1] = {
 4
};
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = -25;
 signed long int stepLocal_0 = signed_short_int_Array_0[1][0] << signed_short_int_Array_0[0][1];
 if (signed_short_int_Array_0[0][0] > stepLocal_0) {
  if ((signed_short_int_Array_0[1][0] / signed_short_int_Array_0[0][2]) > stepLocal_1) {
   unsigned_char_Array_0[1][0] = unsigned_char_Array_0[0][2];
  } else {
   unsigned_char_Array_0[1][0] = 100;
  }
 }
 unsigned_char_Array_0[1][2] = ((((unsigned_char_Array_0[0][1] - unsigned_char_Array_0[1][1]) < 0 ) ? -(unsigned_char_Array_0[0][1] - unsigned_char_Array_0[1][1]) : (unsigned_char_Array_0[0][1] - unsigned_char_Array_0[1][1])));
 if (BOOL_unsigned_char_Array_0[1][1]) {
  BOOL_unsigned_char_Array_0[1][0] = (BOOL_unsigned_char_Array_0[0][0] && BOOL_unsigned_char_Array_0[0][1]);
 }
 unsigned_char_Array_0[0][0] = unsigned_char_Array_0[0][1];
 unsigned_long_int_Array_0[0] = signed_short_int_Array_0[1][0];
 unsigned_short_int_Array_0[0] = 10;
 if (float_Array_0[1][1] != ((((float_Array_0[0][1]) > ((float_Array_0[1][0] - float_Array_0[0][0]))) ? (float_Array_0[0][1]) : ((float_Array_0[1][0] - float_Array_0[0][0]))))) {
  if (BOOL_unsigned_char_Array_0[1][0]) {
   signed_short_int_Array_0[1][2] = (((signed_short_int_Array_0[0][2] - 32) + (signed_short_int_Array_0[1][1] + signed_short_int_Array_0[1][0])) - signed_short_int_Array_0[0][1]);
  }
 } else {
  if (BOOL_unsigned_char_Array_0[1][0]) {
   signed_short_int_Array_0[1][2] = signed_short_int_Array_0[0][0];
  } else {
   signed_short_int_Array_0[1][2] = signed_short_int_Array_0[1][1];
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= 0.0F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854776000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 float_Array_0[1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
 signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][0] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[0][0] <= 32766);
 signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[1][0] <= 8191);
 signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
 signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[1][1] <= 8192);
 signed_short_int_Array_0[0][2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][2] >= 8191);
 assume_abort_if_not(signed_short_int_Array_0[0][2] <= 16383);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 127);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 254);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 127);
 unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][2] <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((float_Array_0[1][1] != ((((float_Array_0[0][1]) > ((float_Array_0[1][0] - float_Array_0[0][0]))) ? (float_Array_0[0][1]) : ((float_Array_0[1][0] - float_Array_0[0][0]))))) ? (BOOL_unsigned_char_Array_0[1][0] ? (signed_short_int_Array_0[1][2] == ((signed short int) (((signed_short_int_Array_0[0][2] - 32) + (signed_short_int_Array_0[1][1] + signed_short_int_Array_0[1][0])) - signed_short_int_Array_0[0][1]))) : 1) : (BOOL_unsigned_char_Array_0[1][0] ? (signed_short_int_Array_0[1][2] == ((signed short int) signed_short_int_Array_0[0][0])) : (signed_short_int_Array_0[1][2] == ((signed short int) signed_short_int_Array_0[1][1])))) && ((signed_short_int_Array_0[0][0] > (signed_short_int_Array_0[1][0] << signed_short_int_Array_0[0][1])) ? (((signed_short_int_Array_0[1][0] / signed_short_int_Array_0[0][2]) > -25) ? (unsigned_char_Array_0[1][0] == ((unsigned char) unsigned_char_Array_0[0][2])) : (unsigned_char_Array_0[1][0] == ((unsigned char) 100))) : 1)) && (unsigned_char_Array_0[1][2] == ((unsigned char) ((((unsigned_char_Array_0[0][1] - unsigned_char_Array_0[1][1]) < 0 ) ? -(unsigned_char_Array_0[0][1] - unsigned_char_Array_0[1][1]) : (unsigned_char_Array_0[0][1] - unsigned_char_Array_0[1][1])))))) && (BOOL_unsigned_char_Array_0[1][1] ? (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) (BOOL_unsigned_char_Array_0[0][0] && BOOL_unsigned_char_Array_0[0][1]))) : 1)) && (unsigned_char_Array_0[0][0] == ((unsigned char) unsigned_char_Array_0[0][1]))) && (unsigned_long_int_Array_0[0] == ((unsigned long int) signed_short_int_Array_0[1][0]))) && (unsigned_short_int_Array_0[0] == ((unsigned short int) 10))
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
