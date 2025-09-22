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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch5Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 0
};
signed long int signed_long_int_Array_0[2][2] = {
 {1, 64}, {10000000, 256}
};
signed short int signed_short_int_Array_0[2][2] = {
 {2, 0}, {4, 10000}
};
unsigned char unsigned_char_Array_0[3] = {
 100, 128, 10
};
unsigned long int unsigned_long_int_Array_0[1] = {
 2
};
signed short int last_1_signed_short_int_Array_0_1__1_ = 10000;
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 2;
void initially(void) {
}
void step(void) {
 signed short int stepLocal_5 = signed_short_int_Array_0[0][0];
 signed long int stepLocal_4 = 200;
 signed long int stepLocal_3 = signed_long_int_Array_0[0][1];
 if (last_1_signed_short_int_Array_0_1__1_ == stepLocal_5) {
  if (stepLocal_3 <= (last_1_unsigned_long_int_Array_0_0_ / 500)) {
   if (signed_short_int_Array_0[0][1] <= stepLocal_4) {
    unsigned_char_Array_0[1] = (((((((unsigned_char_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0]))) < 0 ) ? -((((unsigned_char_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0]))) : ((((unsigned_char_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0])))));
   }
  } else {
   unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
  }
 }
 unsigned_long_int_Array_0[0] = unsigned_char_Array_0[1];
 signed long int stepLocal_0 = signed_long_int_Array_0[1][1] - signed_long_int_Array_0[0][1];
 if (stepLocal_0 >= (signed_long_int_Array_0[1][0] - signed_long_int_Array_0[0][0])) {
  signed_short_int_Array_0[1][1] = ((((signed_short_int_Array_0[0][1] - signed_short_int_Array_0[1][0]) < 0 ) ? -(signed_short_int_Array_0[0][1] - signed_short_int_Array_0[1][0]) : (signed_short_int_Array_0[0][1] - signed_short_int_Array_0[1][0])));
 }
 unsigned long int stepLocal_2 = ~ unsigned_long_int_Array_0[0];
 signed long int stepLocal_1 = signed_long_int_Array_0[1][0] + (signed_short_int_Array_0[0][1] - signed_short_int_Array_0[0][0]);
 if (BOOL_unsigned_char_Array_0[0]) {
  if (signed_short_int_Array_0[1][0] > stepLocal_1) {
   if (signed_long_int_Array_0[0][0] < stepLocal_2) {
    unsigned_char_Array_0[2] = unsigned_char_Array_0[0];
   } else {
    unsigned_char_Array_0[2] = 10;
   }
  } else {
   unsigned_char_Array_0[2] = 1;
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483647);
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= -1);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483647);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483647);
 signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][1] >= -1);
 assume_abort_if_not(signed_long_int_Array_0[1][1] <= 2147483647);
 signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0][0] <= 32767);
 signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1][0] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[1][0] <= 32766);
 signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
 unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}
void updateLastVariables(void) {
 last_1_signed_short_int_Array_0_1__1_ = signed_short_int_Array_0[1][1];
 last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}
int property(void) {
 return (((((signed_long_int_Array_0[1][1] - signed_long_int_Array_0[0][1]) >= (signed_long_int_Array_0[1][0] - signed_long_int_Array_0[0][0])) ? (signed_short_int_Array_0[1][1] == ((signed short int) ((((signed_short_int_Array_0[0][1] - signed_short_int_Array_0[1][0]) < 0 ) ? -(signed_short_int_Array_0[0][1] - signed_short_int_Array_0[1][0]) : (signed_short_int_Array_0[0][1] - signed_short_int_Array_0[1][0]))))) : 1) && (BOOL_unsigned_char_Array_0[0] ? ((signed_short_int_Array_0[1][0] > (signed_long_int_Array_0[1][0] + (signed_short_int_Array_0[0][1] - signed_short_int_Array_0[0][0]))) ? ((signed_long_int_Array_0[0][0] < (~ unsigned_long_int_Array_0[0])) ? (unsigned_char_Array_0[2] == ((unsigned char) unsigned_char_Array_0[0])) : (unsigned_char_Array_0[2] == ((unsigned char) 10))) : (unsigned_char_Array_0[2] == ((unsigned char) 1))) : 1)) && ((last_1_signed_short_int_Array_0_1__1_ == signed_short_int_Array_0[0][0]) ? ((signed_long_int_Array_0[0][1] <= (last_1_unsigned_long_int_Array_0_0_ / 500)) ? ((signed_short_int_Array_0[0][1] <= 200) ? (unsigned_char_Array_0[1] == ((unsigned char) (((((((unsigned_char_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0]))) < 0 ) ? -((((unsigned_char_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0]))) : ((((unsigned_char_Array_0[0]) < 0 ) ? -(unsigned_char_Array_0[0]) : (unsigned_char_Array_0[0]))))))) : 1) : (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0]))) : 1)) && (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[1]))
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
