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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch147Wrapper_A.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{0, 1}, {0, 1}
};
signed char signed_char_Array_0[3] = {
	8, 5, 1
};
signed short int signed_short_int_Array_0[1] = {
	-256
};
unsigned short int unsigned_short_int_Array_0[2] = {
	4, 128
};

// Calibration values

// Last'ed variables
unsigned char last_1_BOOL_unsigned_char_Array_0_1__0_ = 0;
unsigned char last_1_BOOL_unsigned_char_Array_0_1__1_ = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch147Wrapper_A
	if (last_1_BOOL_unsigned_char_Array_0_1__0_ || last_1_BOOL_unsigned_char_Array_0_1__1_) {
		signed_char_Array_0[2] = ((signed_char_Array_0[1] - 50) + signed_char_Array_0[0]);
	}


	// From: Req3Batch147Wrapper_A
	if ((128 | signed_char_Array_0[1]) < (unsigned_short_int_Array_0[1] - unsigned_short_int_Array_0[0])) {
		if (((signed_char_Array_0[1] + unsigned_short_int_Array_0[0]) + (50 << signed_char_Array_0[0])) > -128) {
			signed_short_int_Array_0[0] = signed_char_Array_0[1];
		} else {
			signed_short_int_Array_0[0] = signed_char_Array_0[0];
		}
	} else {
		signed_short_int_Array_0[0] = signed_char_Array_0[2];
	}


	// From: Req4Batch147Wrapper_A
	if (unsigned_short_int_Array_0[0] > (unsigned_short_int_Array_0[1] + (signed_short_int_Array_0[0] & signed_char_Array_0[1]))) {
		if ((4 / unsigned_short_int_Array_0[1]) <= signed_char_Array_0[1]) {
			BOOL_unsigned_char_Array_0[1][0] = BOOL_unsigned_char_Array_0[0][1];
		} else {
			BOOL_unsigned_char_Array_0[1][0] = BOOL_unsigned_char_Array_0[0][0];
		}
	} else {
		BOOL_unsigned_char_Array_0[1][0] = BOOL_unsigned_char_Array_0[0][0];
	}


	// From: Req2Batch147Wrapper_A
	signed char stepLocal_0 = signed_char_Array_0[0];
	if (((10 / unsigned_short_int_Array_0[1]) / unsigned_short_int_Array_0[0]) >= stepLocal_0) {
		BOOL_unsigned_char_Array_0[1][1] = 1;
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -63);
	assume_abort_if_not(signed_char_Array_0[0] <= 63);
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= 0);
	assume_abort_if_not(signed_char_Array_0[1] <= 63);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
	assume_abort_if_not(unsigned_short_int_Array_0[0] != 0);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
	assume_abort_if_not(unsigned_short_int_Array_0[1] != 0);
}



void updateLastVariables(void) {
	last_1_BOOL_unsigned_char_Array_0_1__0_ = BOOL_unsigned_char_Array_0[1][0];
	last_1_BOOL_unsigned_char_Array_0_1__1_ = BOOL_unsigned_char_Array_0[1][1];
}

int property(void) {
	return ((((last_1_BOOL_unsigned_char_Array_0_1__0_ || last_1_BOOL_unsigned_char_Array_0_1__1_) ? (signed_char_Array_0[2] == ((signed char) ((signed_char_Array_0[1] - 50) + signed_char_Array_0[0]))) : 1) && ((((10 / unsigned_short_int_Array_0[1]) / unsigned_short_int_Array_0[0]) >= signed_char_Array_0[0]) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) 1)) : 1)) && (((128 | signed_char_Array_0[1]) < (unsigned_short_int_Array_0[1] - unsigned_short_int_Array_0[0])) ? ((((signed_char_Array_0[1] + unsigned_short_int_Array_0[0]) + (50 << signed_char_Array_0[0])) > -128) ? (signed_short_int_Array_0[0] == ((signed short int) signed_char_Array_0[1])) : (signed_short_int_Array_0[0] == ((signed short int) signed_char_Array_0[0]))) : (signed_short_int_Array_0[0] == ((signed short int) signed_char_Array_0[2])))) && ((unsigned_short_int_Array_0[0] > (unsigned_short_int_Array_0[1] + (signed_short_int_Array_0[0] & signed_char_Array_0[1]))) ? (((4 / unsigned_short_int_Array_0[1]) <= signed_char_Array_0[1]) ? (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) BOOL_unsigned_char_Array_0[0][1])) : (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) BOOL_unsigned_char_Array_0[0][0]))) : (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) BOOL_unsigned_char_Array_0[0][0])))
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
