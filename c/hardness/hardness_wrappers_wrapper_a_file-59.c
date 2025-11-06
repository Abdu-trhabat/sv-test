// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch59Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2] = {
	0, 0
};
signed char signed_char_Array_0[2][2] = {
	{32, -1}, {-4, -4}
};
signed long int signed_long_int_Array_0[7] = {
	32, 0, 10000, 0, -1, 50, -128
};
signed short int signed_short_int_Array_0[3] = {
	-32, 128, 1000
};

// Calibration values

// Last'ed variables
signed short int last_1_signed_short_int_Array_0_0_ = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch59Wrapper_A
	if ((max (signed_long_int_Array_0[5] , 1)) <= (256 + signed_long_int_Array_0[4])) {
		signed_long_int_Array_0[6] = (((signed_long_int_Array_0[3] - 128) + signed_long_int_Array_0[2]) + signed_long_int_Array_0[1]);
	} else {
		signed_long_int_Array_0[6] = (signed_long_int_Array_0[3] + signed_long_int_Array_0[2]);
	}


	// From: Req2Batch59Wrapper_A
	if (signed_long_int_Array_0[1] > (signed_long_int_Array_0[5] * (signed_long_int_Array_0[3] - signed_long_int_Array_0[0]))) {
		if (signed_long_int_Array_0[0] > signed_long_int_Array_0[5]) {
			signed_char_Array_0[0][1] = ((signed_char_Array_0[0][0] + signed_char_Array_0[1][0]) + signed_char_Array_0[1][1]);
		} else {
			signed_char_Array_0[0][1] = signed_char_Array_0[1][0];
		}
	} else {
		signed_char_Array_0[0][1] = signed_char_Array_0[1][1];
	}


	// From: Req3Batch59Wrapper_A
	if (signed_long_int_Array_0[6] > (abs (signed_long_int_Array_0[3]))) {
		signed_short_int_Array_0[0] = (signed_short_int_Array_0[1] - signed_short_int_Array_0[2]);
	} else {
		if (BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) {
			if (2 < signed_long_int_Array_0[2]) {
				signed_short_int_Array_0[0] = last_1_signed_short_int_Array_0_0_;
			}
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= -31);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 32);
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= -31);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 31);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= -63);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 63);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -1073741823);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 1073741823);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= -536870911);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 536870911);
	signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[3] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[3] <= 536870912);
	signed_long_int_Array_0[4] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[4] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[4] <= 2147483647);
	signed_long_int_Array_0[5] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[5] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[5] <= 2147483647);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
	signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[2] <= 32766);
}



void updateLastVariables(void) {
	last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
}

int property(void) {
	return ((((max (signed_long_int_Array_0[5] , 1)) <= (256 + signed_long_int_Array_0[4])) ? (signed_long_int_Array_0[6] == ((signed long int) (((signed_long_int_Array_0[3] - 128) + signed_long_int_Array_0[2]) + signed_long_int_Array_0[1]))) : (signed_long_int_Array_0[6] == ((signed long int) (signed_long_int_Array_0[3] + signed_long_int_Array_0[2])))) && ((signed_long_int_Array_0[1] > (signed_long_int_Array_0[5] * (signed_long_int_Array_0[3] - signed_long_int_Array_0[0]))) ? ((signed_long_int_Array_0[0] > signed_long_int_Array_0[5]) ? (signed_char_Array_0[0][1] == ((signed char) ((signed_char_Array_0[0][0] + signed_char_Array_0[1][0]) + signed_char_Array_0[1][1]))) : (signed_char_Array_0[0][1] == ((signed char) signed_char_Array_0[1][0]))) : (signed_char_Array_0[0][1] == ((signed char) signed_char_Array_0[1][1])))) && ((signed_long_int_Array_0[6] > (abs (signed_long_int_Array_0[3]))) ? (signed_short_int_Array_0[0] == ((signed short int) (signed_short_int_Array_0[1] - signed_short_int_Array_0[2]))) : ((BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) ? ((2 < signed_long_int_Array_0[2]) ? (signed_short_int_Array_0[0] == ((signed short int) last_1_signed_short_int_Array_0_0_)) : 1) : 1))
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
