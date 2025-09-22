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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch85Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][5] = {
 {0, 1, 0, 0, 0}, {0, 1, 0, 0, 0}
};
signed char signed_char_Array_0[3] = {
 50, 32, 4
};
signed long int signed_long_int_Array_0[3] = {
 -4, -64, 16
};
unsigned char unsigned_char_Array_0[2] = {
 2, 128
};
unsigned short int unsigned_short_int_Array_0[1] = {
 64
};
unsigned char last_1_BOOL_unsigned_char_Array_0_1__1_ = 1;
unsigned char last_1_BOOL_unsigned_char_Array_0_0__2_ = 0;
void initially(void) {
}
void step(void) {
 if (last_1_BOOL_unsigned_char_Array_0_1__1_) {
  signed_long_int_Array_0[2] = (((((signed_long_int_Array_0[1] + signed_long_int_Array_0[0])) < (-16)) ? ((signed_long_int_Array_0[1] + signed_long_int_Array_0[0])) : (-16)));
 } else {
  if (last_1_BOOL_unsigned_char_Array_0_0__2_) {
   signed_long_int_Array_0[2] = (signed_long_int_Array_0[0] + -4);
  } else {
   signed_long_int_Array_0[2] = signed_long_int_Array_0[0];
  }
 }
 signed long int stepLocal_0 = unsigned_char_Array_0[0] * (signed_long_int_Array_0[2] / unsigned_short_int_Array_0[0]);
 if (stepLocal_0 == signed_long_int_Array_0[0]) {
  if (! BOOL_unsigned_char_Array_0[1][2]) {
   BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[0][0];
  } else {
   BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[1][2];
  }
 } else {
  BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[1][0];
 }
 unsigned_char_Array_0[1] = ((((((((32) > (unsigned_char_Array_0[0])) ? (32) : (unsigned_char_Array_0[0])))) < (16)) ? (((((32) > (unsigned_char_Array_0[0])) ? (32) : (unsigned_char_Array_0[0])))) : (16)));
 BOOL_unsigned_char_Array_0[0][2] = ((BOOL_unsigned_char_Array_0[1][0] || (BOOL_unsigned_char_Array_0[1][2] || BOOL_unsigned_char_Array_0[0][3])) || BOOL_unsigned_char_Array_0[0][0]);
 BOOL_unsigned_char_Array_0[0][1] = ((BOOL_unsigned_char_Array_0[0][4] && BOOL_unsigned_char_Array_0[1][4]) && BOOL_unsigned_char_Array_0[1][3]);
 if (BOOL_unsigned_char_Array_0[0][2]) {
  signed_char_Array_0[1] = (((((signed_char_Array_0[2]) < (100)) ? (signed_char_Array_0[2]) : (100))) - 64);
 } else {
  signed_char_Array_0[1] = (signed_char_Array_0[2] - signed_char_Array_0[0]);
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] <= 0);
 BOOL_unsigned_char_Array_0[0][3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][3] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][3] <= 0);
 BOOL_unsigned_char_Array_0[1][3] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][3] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][3] <= 1);
 BOOL_unsigned_char_Array_0[0][4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][4] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][4] <= 1);
 BOOL_unsigned_char_Array_0[1][4] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][4] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][4] <= 1);
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 126);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -1);
 assume_abort_if_not(signed_char_Array_0[2] <= 126);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 1073741823);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -1073741823);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 1073741823);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
 assume_abort_if_not(unsigned_short_int_Array_0[0] != 0);
}
void updateLastVariables(void) {
 last_1_BOOL_unsigned_char_Array_0_1__1_ = BOOL_unsigned_char_Array_0[1][1];
 last_1_BOOL_unsigned_char_Array_0_0__2_ = BOOL_unsigned_char_Array_0[0][2];
}
int property(void) {
 return (((((last_1_BOOL_unsigned_char_Array_0_1__1_ ? (signed_long_int_Array_0[2] == ((signed long int) (((((signed_long_int_Array_0[1] + signed_long_int_Array_0[0])) < (-16)) ? ((signed_long_int_Array_0[1] + signed_long_int_Array_0[0])) : (-16))))) : (last_1_BOOL_unsigned_char_Array_0_0__2_ ? (signed_long_int_Array_0[2] == ((signed long int) (signed_long_int_Array_0[0] + -4))) : (signed_long_int_Array_0[2] == ((signed long int) signed_long_int_Array_0[0])))) && (unsigned_char_Array_0[1] == ((unsigned char) ((((((((32) > (unsigned_char_Array_0[0])) ? (32) : (unsigned_char_Array_0[0])))) < (16)) ? (((((32) > (unsigned_char_Array_0[0])) ? (32) : (unsigned_char_Array_0[0])))) : (16)))))) && (BOOL_unsigned_char_Array_0[0][2] == ((unsigned char) ((BOOL_unsigned_char_Array_0[1][0] || (BOOL_unsigned_char_Array_0[1][2] || BOOL_unsigned_char_Array_0[0][3])) || BOOL_unsigned_char_Array_0[0][0])))) && (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) ((BOOL_unsigned_char_Array_0[0][4] && BOOL_unsigned_char_Array_0[1][4]) && BOOL_unsigned_char_Array_0[1][3])))) && (BOOL_unsigned_char_Array_0[0][2] ? (signed_char_Array_0[1] == ((signed char) (((((signed_char_Array_0[2]) < (100)) ? (signed_char_Array_0[2]) : (100))) - 64))) : (signed_char_Array_0[1] == ((signed char) (signed_char_Array_0[2] - signed_char_Array_0[0]))))) && (((unsigned_char_Array_0[0] * (signed_long_int_Array_0[2] / unsigned_short_int_Array_0[0])) == signed_long_int_Array_0[0]) ? ((! BOOL_unsigned_char_Array_0[1][2]) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[0][0])) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[1][2]))) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0])))
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
