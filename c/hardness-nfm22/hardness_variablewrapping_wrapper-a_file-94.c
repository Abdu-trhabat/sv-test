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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch94Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[5] = {
	63.75, 3.7, 63.4, 0.0, 63.4
};
float float_Array_0[2] = {
	3.75, 25.2
};
signed char signed_char_Array_0[2][3] = {
	{-32, -64, -4}, {2, 5, -25}
};
signed long int signed_long_int_Array_0[1] = {
	-2
};
unsigned char unsigned_char_Array_0[2] = {
	2, 16
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch94Wrapper_A
	if (float_Array_0[1] != float_Array_0[0]) {
		double_Array_0[4] = ((double_Array_0[3] - double_Array_0[2]) - double_Array_0[1]);
	}


	// From: Req2Batch94Wrapper_A
	if (double_Array_0[2] > (double_Array_0[4] / double_Array_0[3])) {
		if (double_Array_0[2] > (double_Array_0[3] / double_Array_0[0])) {
			BOOL_unsigned_char_Array_0[2] = BOOL_unsigned_char_Array_0[0];
		} else {
			BOOL_unsigned_char_Array_0[2] = BOOL_unsigned_char_Array_0[1];
		}
	}


	// From: Req3Batch94Wrapper_A
	if (BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) {
		signed_char_Array_0[0][1] = signed_char_Array_0[0][0];
	} else {
		signed_char_Array_0[0][1] = ((max (signed_char_Array_0[1][0] , signed_char_Array_0[0][2])) + (signed_char_Array_0[1][2] + signed_char_Array_0[1][1]));
	}


	// From: Req4Batch94Wrapper_A
	signed char stepLocal_0 = signed_char_Array_0[1][2];
	if (double_Array_0[1] > double_Array_0[2]) {
		if (double_Array_0[4] != (double_Array_0[3] / double_Array_0[0])) {
			if ((signed_char_Array_0[0][1] % (unsigned_char_Array_0[0] + unsigned_char_Array_0[1])) > stepLocal_0) {
				signed_long_int_Array_0[0] = -64;
			}
		}
	} else {
		signed_long_int_Array_0[0] = signed_char_Array_0[1][0];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	assume_abort_if_not(double_Array_0[0] != 0.0F);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427382800e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= 4611686.018427382800e+12F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854765600e+12F && double_Array_0[3] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= -127);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 126);
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= -63);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 63);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= -31);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 31);
	signed_char_Array_0[0][2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][2] >= -63);
	assume_abort_if_not(signed_char_Array_0[0][2] <= 63);
	signed_char_Array_0[1][2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][2] >= -31);
	assume_abort_if_not(signed_char_Array_0[1][2] <= 32);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 1);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 128);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 1);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
}



void updateLastVariables() {
}

int property() {
	return ((((float_Array_0[1] != float_Array_0[0]) ? (double_Array_0[4] == ((double) ((double_Array_0[3] - double_Array_0[2]) - double_Array_0[1]))) : 1) && ((double_Array_0[2] > (double_Array_0[4] / double_Array_0[3])) ? ((double_Array_0[2] > (double_Array_0[3] / double_Array_0[0])) ? (BOOL_unsigned_char_Array_0[2] == ((unsigned char) BOOL_unsigned_char_Array_0[0])) : (BOOL_unsigned_char_Array_0[2] == ((unsigned char) BOOL_unsigned_char_Array_0[1]))) : 1)) && ((BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) ? (signed_char_Array_0[0][1] == ((signed char) signed_char_Array_0[0][0])) : (signed_char_Array_0[0][1] == ((signed char) ((max (signed_char_Array_0[1][0] , signed_char_Array_0[0][2])) + (signed_char_Array_0[1][2] + signed_char_Array_0[1][1])))))) && ((double_Array_0[1] > double_Array_0[2]) ? ((double_Array_0[4] != (double_Array_0[3] / double_Array_0[0])) ? (((signed_char_Array_0[0][1] % (unsigned_char_Array_0[0] + unsigned_char_Array_0[1])) > signed_char_Array_0[1][2]) ? (signed_long_int_Array_0[0] == ((signed long int) -64)) : 1) : 1) : (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[1][0])))
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
