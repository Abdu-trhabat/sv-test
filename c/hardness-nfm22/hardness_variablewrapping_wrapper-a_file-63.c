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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch63Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[3] = {
	0, 0, 0
};
float float_Array_0[2][2] = {
	{9.8, 2.25}, {10.3, 8.3}
};
signed char signed_char_Array_0[7] = {
	32, 16, 16, 25, -10, 1, 0
};
signed long int signed_long_int_Array_0[1] = {
	128
};
signed short int signed_short_int_Array_0[1] = {
	256
};
unsigned long int unsigned_long_int_Array_0[2] = {
	1, 32
};

// Calibration values

// Last'ed variables
signed short int last_1_signed_short_int_Array_0_0_ = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch63Wrapper_A
	unsigned_long_int_Array_0[0] = unsigned_long_int_Array_0[1];


	// From: Req5Batch63Wrapper_A
	signed_short_int_Array_0[0] = last_1_signed_short_int_Array_0_0_;


	// From: Req6Batch63Wrapper_A
	signed_char_Array_0[1] = signed_char_Array_0[2];


	// From: Req7Batch63Wrapper_A
	BOOL_unsigned_char_Array_0[0] = BOOL_unsigned_char_Array_0[1];


	// From: Req1Batch63Wrapper_A
	if ((min (1.1f , float_Array_0[1][1])) > (float_Array_0[0][1] * float_Array_0[1][0])) {
		BOOL_unsigned_char_Array_0[2] = (BOOL_unsigned_char_Array_0[0] && BOOL_unsigned_char_Array_0[1]);
	}


	// From: Req4Batch63Wrapper_A
	signed char stepLocal_0 = signed_char_Array_0[1];
	if (stepLocal_0 != (min (signed_char_Array_0[1] , signed_short_int_Array_0[0]))) {
		signed_char_Array_0[4] = ((min ((10 + signed_char_Array_0[2]) , signed_char_Array_0[3])) - ((32 - signed_char_Array_0[5]) + (max (signed_char_Array_0[6] , signed_char_Array_0[0]))));
	}


	// From: Req2Batch63Wrapper_A
	if (float_Array_0[1][0] <= ((min (float_Array_0[1][1] , float_Array_0[0][1])) * float_Array_0[0][0])) {
		signed_long_int_Array_0[0] = (max ((max ((signed_char_Array_0[1] + signed_char_Array_0[4]) , signed_char_Array_0[4])) , (abs (signed_char_Array_0[4]))));
	} else {
		signed_long_int_Array_0[0] = signed_char_Array_0[1];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854776000e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854776000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= -922337.2036854776000e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[1][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= 0);
	assume_abort_if_not(signed_char_Array_0[0] <= 63);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= 0);
	assume_abort_if_not(signed_char_Array_0[2] <= 63);
	signed_char_Array_0[3] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[3] >= -1);
	assume_abort_if_not(signed_char_Array_0[3] <= 126);
	signed_char_Array_0[5] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[5] >= 0);
	assume_abort_if_not(signed_char_Array_0[5] <= 31);
	signed_char_Array_0[6] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[6] >= 0);
	assume_abort_if_not(signed_char_Array_0[6] <= 63);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
}



void updateLastVariables() {
	last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
}

int property() {
	return ((((((((min (1.1f , float_Array_0[1][1])) > (float_Array_0[0][1] * float_Array_0[1][0])) ? (BOOL_unsigned_char_Array_0[2] == ((unsigned char) (BOOL_unsigned_char_Array_0[0] && BOOL_unsigned_char_Array_0[1]))) : 1) && ((float_Array_0[1][0] <= ((min (float_Array_0[1][1] , float_Array_0[0][1])) * float_Array_0[0][0])) ? (signed_long_int_Array_0[0] == ((signed long int) (max ((max ((signed_char_Array_0[1] + signed_char_Array_0[4]) , signed_char_Array_0[4])) , (abs (signed_char_Array_0[4])))))) : (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[1])))) && (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_long_int_Array_0[1]))) && ((signed_char_Array_0[1] != (min (signed_char_Array_0[1] , signed_short_int_Array_0[0]))) ? (signed_char_Array_0[4] == ((signed char) ((min ((10 + signed_char_Array_0[2]) , signed_char_Array_0[3])) - ((32 - signed_char_Array_0[5]) + (max (signed_char_Array_0[6] , signed_char_Array_0[0])))))) : 1)) && (signed_short_int_Array_0[0] == ((signed short int) last_1_signed_short_int_Array_0_0_))) && (signed_char_Array_0[1] == ((signed char) signed_char_Array_0[2]))) && (BOOL_unsigned_char_Array_0[0] == ((unsigned char) BOOL_unsigned_char_Array_0[1]))
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
