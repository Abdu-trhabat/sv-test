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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch28Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float float_Array_0[2][3] = {
	{99.5, 255.9, 255.75}, {4.75, 24.85, 63.75}
};
signed char signed_char_Array_0[2][2] = {
	{-10, 10}, {4, 1}
};
signed long int signed_long_int_Array_0[3] = {
	-2, 1629954775, 1928642731
};
signed short int signed_short_int_Array_0[1] = {
	0
};
unsigned short int unsigned_short_int_Array_0[1] = {
	5
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch28Wrapper_A
	signed long int stepLocal_0 = -4;
	if (stepLocal_0 < signed_char_Array_0[1][0]) {
		float_Array_0[1][0] = (min (float_Array_0[0][0] , float_Array_0[0][1]));
	}


	// From: Req3Batch28Wrapper_A
	float_Array_0[1][1] = (max (float_Array_0[0][0] , float_Array_0[0][1]));


	// From: Req5Batch28Wrapper_A
	signed_short_int_Array_0[0] = signed_char_Array_0[0][1];


	// From: Req6Batch28Wrapper_A
	unsigned_short_int_Array_0[0] = signed_char_Array_0[1][0];


	// From: Req1Batch28Wrapper_A
	if ((float_Array_0[1][2] - float_Array_0[0][2]) <= (- float_Array_0[1][0])) {
		signed_char_Array_0[1][1] = (min ((signed_char_Array_0[0][1] - signed_char_Array_0[1][0]) , signed_char_Array_0[0][0]));
	} else {
		signed_char_Array_0[1][1] = signed_char_Array_0[0][1];
	}


	// From: Req4Batch28Wrapper_A
	signed long int stepLocal_1 = signed_char_Array_0[1][0] | 5;
	if (stepLocal_1 <= (max (signed_char_Array_0[0][1] , signed_char_Array_0[0][0]))) {
		signed_long_int_Array_0[0] = ((min (signed_char_Array_0[1][0] , (signed_long_int_Array_0[1] - unsigned_short_int_Array_0[0]))) - (signed_long_int_Array_0[2] - (abs (signed_char_Array_0[0][1]))));
	} else {
		signed_long_int_Array_0[0] = (signed_char_Array_0[1][0] + ((min (unsigned_short_int_Array_0[0] , unsigned_short_int_Array_0[0])) - unsigned_short_int_Array_0[0]));
	}
}



void updateVariables() {
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854765600e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854765600e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854765600e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854765600e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[0][2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][2] >= 0.0F && float_Array_0[0][2] <= -1.0e-20F) || (float_Array_0[0][2] <= 9223372.036854776000e+12F && float_Array_0[0][2] >= 1.0e-20F ));
	float_Array_0[1][2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][2] >= 0.0F && float_Array_0[1][2] <= -1.0e-20F) || (float_Array_0[1][2] <= 9223372.036854776000e+12F && float_Array_0[1][2] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= -127);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 126);
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 126);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= -1);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= 1073741822);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= 1073741823);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483646);
}



void updateLastVariables() {
}

int property() {
	return (((((((float_Array_0[1][2] - float_Array_0[0][2]) <= (- float_Array_0[1][0])) ? (signed_char_Array_0[1][1] == ((signed char) (min ((signed_char_Array_0[0][1] - signed_char_Array_0[1][0]) , signed_char_Array_0[0][0])))) : (signed_char_Array_0[1][1] == ((signed char) signed_char_Array_0[0][1]))) && ((-4 < signed_char_Array_0[1][0]) ? (float_Array_0[1][0] == ((float) (min (float_Array_0[0][0] , float_Array_0[0][1])))) : 1)) && (float_Array_0[1][1] == ((float) (max (float_Array_0[0][0] , float_Array_0[0][1]))))) && (((signed_char_Array_0[1][0] | 5) <= (max (signed_char_Array_0[0][1] , signed_char_Array_0[0][0]))) ? (signed_long_int_Array_0[0] == ((signed long int) ((min (signed_char_Array_0[1][0] , (signed_long_int_Array_0[1] - unsigned_short_int_Array_0[0]))) - (signed_long_int_Array_0[2] - (abs (signed_char_Array_0[0][1])))))) : (signed_long_int_Array_0[0] == ((signed long int) (signed_char_Array_0[1][0] + ((min (unsigned_short_int_Array_0[0] , unsigned_short_int_Array_0[0])) - unsigned_short_int_Array_0[0])))))) && (signed_short_int_Array_0[0] == ((signed short int) signed_char_Array_0[0][1]))) && (unsigned_short_int_Array_0[0] == ((unsigned short int) signed_char_Array_0[1][0]))
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
