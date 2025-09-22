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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch121Wrapper_A.c", 13, "reach_error"); }
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
 {0, 0}, {0, 1}
};
signed long int signed_long_int_Array_0[1] = {
 -100000000
};
signed short int signed_short_int_Array_0[3] = {
 -4, -32, -100
};
unsigned char unsigned_char_Array_0[2] = {
 10, 4
};
unsigned long int unsigned_long_int_Array_0[2][3] = {
 {32, 4, 1443780595}, {8, 1, 2032620576}
};
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_1 = (unsigned_long_int_Array_0[1][2] + unsigned_long_int_Array_0[0][2]) - (unsigned_long_int_Array_0[1][1] + unsigned_long_int_Array_0[0][1]);
 unsigned long int stepLocal_0 = unsigned_long_int_Array_0[1][2];
 if (stepLocal_1 == (- (- unsigned_long_int_Array_0[1][0]))) {
  if (unsigned_long_int_Array_0[0][2] != stepLocal_0) {
   signed_long_int_Array_0[0] = unsigned_long_int_Array_0[1][1];
  }
 } else {
  signed_long_int_Array_0[0] = unsigned_long_int_Array_0[0][1];
 }
 unsigned long int stepLocal_2 = ((((unsigned_long_int_Array_0[1][1] / unsigned_long_int_Array_0[0][0])) > (unsigned_long_int_Array_0[1][0])) ? ((unsigned_long_int_Array_0[1][1] / unsigned_long_int_Array_0[0][0])) : (unsigned_long_int_Array_0[1][0]));
 if (unsigned_long_int_Array_0[0][2] <= stepLocal_2) {
  BOOL_unsigned_char_Array_0[1][0] = (! BOOL_unsigned_char_Array_0[0][0]);
 } else {
  BOOL_unsigned_char_Array_0[1][0] = 0;
 }
 unsigned_char_Array_0[0] = unsigned_char_Array_0[1];
 BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[0][1];
 if (unsigned_long_int_Array_0[1][2] <= unsigned_long_int_Array_0[0][1]) {
  if (! BOOL_unsigned_char_Array_0[1][1]) {
   signed_short_int_Array_0[1] = ((((signed_short_int_Array_0[2]) < ((signed_short_int_Array_0[0] + 2))) ? (signed_short_int_Array_0[2]) : ((signed_short_int_Array_0[0] + 2))));
  } else {
   signed_short_int_Array_0[1] = ((((((((signed_short_int_Array_0[0]) < 0 ) ? -(signed_short_int_Array_0[0]) : (signed_short_int_Array_0[0])))) < (signed_short_int_Array_0[2])) ? (((((signed_short_int_Array_0[0]) < 0 ) ? -(signed_short_int_Array_0[0]) : (signed_short_int_Array_0[0])))) : (signed_short_int_Array_0[2])));
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -16383);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
 signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[2] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[2] <= 32766);
 unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 4294967295);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] != 0);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 4294967295);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 1073741823);
 unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 1073741824);
 unsigned_long_int_Array_0[0][2] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][2] >= 1073741824);
 assume_abort_if_not(unsigned_long_int_Array_0[0][2] <= 2147483647);
 unsigned_long_int_Array_0[1][2] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][2] >= 1073741823);
 assume_abort_if_not(unsigned_long_int_Array_0[1][2] <= 2147483648);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((unsigned_long_int_Array_0[1][2] + unsigned_long_int_Array_0[0][2]) - (unsigned_long_int_Array_0[1][1] + unsigned_long_int_Array_0[0][1])) == (- (- unsigned_long_int_Array_0[1][0]))) ? ((unsigned_long_int_Array_0[0][2] != unsigned_long_int_Array_0[1][2]) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_long_int_Array_0[1][1])) : 1) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_long_int_Array_0[0][1]))) && ((unsigned_long_int_Array_0[0][2] <= (((((unsigned_long_int_Array_0[1][1] / unsigned_long_int_Array_0[0][0])) > (unsigned_long_int_Array_0[1][0])) ? ((unsigned_long_int_Array_0[1][1] / unsigned_long_int_Array_0[0][0])) : (unsigned_long_int_Array_0[1][0])))) ? (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) (! BOOL_unsigned_char_Array_0[0][0]))) : (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) 0)))) && ((unsigned_long_int_Array_0[1][2] <= unsigned_long_int_Array_0[0][1]) ? ((! BOOL_unsigned_char_Array_0[1][1]) ? (signed_short_int_Array_0[1] == ((signed short int) ((((signed_short_int_Array_0[2]) < ((signed_short_int_Array_0[0] + 2))) ? (signed_short_int_Array_0[2]) : ((signed_short_int_Array_0[0] + 2)))))) : (signed_short_int_Array_0[1] == ((signed short int) ((((((((signed_short_int_Array_0[0]) < 0 ) ? -(signed_short_int_Array_0[0]) : (signed_short_int_Array_0[0])))) < (signed_short_int_Array_0[2])) ? (((((signed_short_int_Array_0[0]) < 0 ) ? -(signed_short_int_Array_0[0]) : (signed_short_int_Array_0[0])))) : (signed_short_int_Array_0[2])))))) : 1)) && (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[1]))) && (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[0][1]))
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
