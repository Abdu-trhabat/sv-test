// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{0, 0}, {1, 1}
};
double double_Array_0[5] = {
	100000000000.4, 100000000000.2, 256.4, 50.5, 9.5
};
float float_Array_0[1] = {
	0.25
};
signed char signed_char_Array_0[5] = {
	-2, -10, 4, -16, 4
};
unsigned long int unsigned_long_int_Array_0[1] = {
	2
};
unsigned short int unsigned_short_int_Array_0[1] = {
	10000
};

// Calibration values

// Last'ed variables
unsigned char last_1_BOOL_unsigned_char_Array_0_1__1_ = 1;
double last_1_double_Array_0_2_ = 256.4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch72Wrapper_A
	if (BOOL_unsigned_char_Array_0[0][0]) {
		unsigned_long_int_Array_0[0] = 2u;
	}


	// From: Req3Batch72Wrapper_A
	signed_char_Array_0[3] = (min ((signed_char_Array_0[0] + signed_char_Array_0[1]) , (10 - signed_char_Array_0[4])));


	// From: Req5Batch72Wrapper_A
	double_Array_0[0] = double_Array_0[4];


	// From: Req6Batch72Wrapper_A
	signed_char_Array_0[2] = 1;


	// From: Req7Batch72Wrapper_A
	unsigned_short_int_Array_0[0] = 10;


	// From: Req4Batch72Wrapper_A
	if ((double_Array_0[0] + (double_Array_0[0] / float_Array_0[0])) == double_Array_0[0]) {
		if (double_Array_0[0] >= last_1_double_Array_0_2_) {
			double_Array_0[2] = (double_Array_0[1] - (min ((double_Array_0[3] + double_Array_0[4]) , 9.9999999999995E12)));
		} else {
			double_Array_0[2] = (min (double_Array_0[1] , (5.75 + double_Array_0[4])));
		}
	}


	// From: Req1Batch72Wrapper_A
	if (double_Array_0[0] < ((min (double_Array_0[2] , double_Array_0[2])) * double_Array_0[2])) {
		BOOL_unsigned_char_Array_0[1][1] = (BOOL_unsigned_char_Array_0[0][1] && ((last_1_BOOL_unsigned_char_Array_0_1__1_ || BOOL_unsigned_char_Array_0[1][0]) && BOOL_unsigned_char_Array_0[0][0]));
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 4611686.018427382800e+12F && double_Array_0[3] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= 0.0F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 4611686.018427382800e+12F && double_Array_0[4] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	assume_abort_if_not(float_Array_0[0] != 0.0F);
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -63);
	assume_abort_if_not(signed_char_Array_0[0] <= 63);
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -63);
	assume_abort_if_not(signed_char_Array_0[1] <= 63);
	signed_char_Array_0[4] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[4] >= 0);
	assume_abort_if_not(signed_char_Array_0[4] <= 126);
}



void updateLastVariables() {
	last_1_BOOL_unsigned_char_Array_0_1__1_ = BOOL_unsigned_char_Array_0[1][1];
	last_1_double_Array_0_2_ = double_Array_0[2];
}

int property() {
	return (((((((double_Array_0[0] < ((min (double_Array_0[2] , double_Array_0[2])) * double_Array_0[2])) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) (BOOL_unsigned_char_Array_0[0][1] && ((last_1_BOOL_unsigned_char_Array_0_1__1_ || BOOL_unsigned_char_Array_0[1][0]) && BOOL_unsigned_char_Array_0[0][0])))) : 1) && (BOOL_unsigned_char_Array_0[0][0] ? (unsigned_long_int_Array_0[0] == ((unsigned long int) 2u)) : 1)) && (signed_char_Array_0[3] == ((signed char) (min ((signed_char_Array_0[0] + signed_char_Array_0[1]) , (10 - signed_char_Array_0[4])))))) && (((double_Array_0[0] + (double_Array_0[0] / float_Array_0[0])) == double_Array_0[0]) ? ((double_Array_0[0] >= last_1_double_Array_0_2_) ? (double_Array_0[2] == ((double) (double_Array_0[1] - (min ((double_Array_0[3] + double_Array_0[4]) , 9.9999999999995E12))))) : (double_Array_0[2] == ((double) (min (double_Array_0[1] , (5.75 + double_Array_0[4])))))) : 1)) && (double_Array_0[0] == ((double) double_Array_0[4]))) && (signed_char_Array_0[2] == ((signed char) 1))) && (unsigned_short_int_Array_0[0] == ((unsigned short int) 10))
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
