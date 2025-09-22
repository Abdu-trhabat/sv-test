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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch178Wrapper_A.c", 13, "reach_error"); }
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
 {0, 0}, {1, 1}
};
signed long int signed_long_int_Array_0[2] = {
 2, -1
};
signed short int signed_short_int_Array_0[2][2] = {
 {-25, 128}, {256, 256}
};
unsigned char unsigned_char_Array_0[2][2] = {
 {25, 0}, {4, 64}
};
unsigned long int unsigned_long_int_Array_0[1] = {
 1
};
unsigned short int unsigned_short_int_Array_0[3] = {
 24832, 8, 24891
};
void initially(void) {
}
void step(void) {
 unsigned_char_Array_0[1][0] = (unsigned_char_Array_0[0][1] + unsigned_char_Array_0[1][1]);
 signed_short_int_Array_0[1][1] = unsigned_char_Array_0[0][1];
 signed_short_int_Array_0[0][0] = unsigned_char_Array_0[1][1];
 unsigned_char_Array_0[0][0] = unsigned_char_Array_0[0][1];
 unsigned long int stepLocal_1 = unsigned_long_int_Array_0[0];
 unsigned long int stepLocal_0 = ((((signed_long_int_Array_0[1] * unsigned_long_int_Array_0[0])) > (signed_short_int_Array_0[0][0])) ? ((signed_long_int_Array_0[1] * unsigned_long_int_Array_0[0])) : (signed_short_int_Array_0[0][0]));
 if (256u <= stepLocal_0) {
  if (signed_short_int_Array_0[1][1] < stepLocal_1) {
   unsigned_short_int_Array_0[1] = ((unsigned_short_int_Array_0[0] + unsigned_short_int_Array_0[2]) - signed_short_int_Array_0[0][0]);
  } else {
   unsigned_short_int_Array_0[1] = unsigned_short_int_Array_0[0];
  }
 }
 if (BOOL_unsigned_char_Array_0[0][0]) {
  signed_short_int_Array_0[1][0] = unsigned_char_Array_0[0][0];
 } else {
  signed_short_int_Array_0[1][0] = ((((unsigned_char_Array_0[1][0]) < ((unsigned_char_Array_0[0][0] - signed_short_int_Array_0[0][1]))) ? (unsigned_char_Array_0[1][0]) : ((unsigned_char_Array_0[0][0] - signed_short_int_Array_0[0][1]))));
 }
 if (! BOOL_unsigned_char_Array_0[0][1]) {
  if (! BOOL_unsigned_char_Array_0[0][1]) {
   BOOL_unsigned_char_Array_0[1][1] = (((unsigned_char_Array_0[0][0] + unsigned_short_int_Array_0[1]) > (signed_long_int_Array_0[1] * signed_long_int_Array_0[0])) || BOOL_unsigned_char_Array_0[1][0]);
  } else {
   BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[0][0];
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 127);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 127);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 16383);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
 unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[2] >= 16384);
 assume_abort_if_not(unsigned_short_int_Array_0[2] <= 32767);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((! BOOL_unsigned_char_Array_0[0][1]) ? ((! BOOL_unsigned_char_Array_0[0][1]) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) (((unsigned_char_Array_0[0][0] + unsigned_short_int_Array_0[1]) > (signed_long_int_Array_0[1] * signed_long_int_Array_0[0])) || BOOL_unsigned_char_Array_0[1][0]))) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[0][0]))) : 1) && ((256u <= (((((signed_long_int_Array_0[1] * unsigned_long_int_Array_0[0])) > (signed_short_int_Array_0[0][0])) ? ((signed_long_int_Array_0[1] * unsigned_long_int_Array_0[0])) : (signed_short_int_Array_0[0][0])))) ? ((signed_short_int_Array_0[1][1] < unsigned_long_int_Array_0[0]) ? (unsigned_short_int_Array_0[1] == ((unsigned short int) ((unsigned_short_int_Array_0[0] + unsigned_short_int_Array_0[2]) - signed_short_int_Array_0[0][0]))) : (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_short_int_Array_0[0]))) : 1)) && (BOOL_unsigned_char_Array_0[0][0] ? (signed_short_int_Array_0[1][0] == ((signed short int) unsigned_char_Array_0[0][0])) : (signed_short_int_Array_0[1][0] == ((signed short int) ((((unsigned_char_Array_0[1][0]) < ((unsigned_char_Array_0[0][0] - signed_short_int_Array_0[0][1]))) ? (unsigned_char_Array_0[1][0]) : ((unsigned_char_Array_0[0][0] - signed_short_int_Array_0[0][1])))))))) && (unsigned_char_Array_0[1][0] == ((unsigned char) (unsigned_char_Array_0[0][1] + unsigned_char_Array_0[1][1])))) && (signed_short_int_Array_0[1][1] == ((signed short int) unsigned_char_Array_0[0][1]))) && (signed_short_int_Array_0[0][0] == ((signed short int) unsigned_char_Array_0[1][1]))) && (unsigned_char_Array_0[0][0] == ((unsigned char) unsigned_char_Array_0[0][1]))
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
