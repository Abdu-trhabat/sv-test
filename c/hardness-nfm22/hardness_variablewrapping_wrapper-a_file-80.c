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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch80Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[1] = {
	1
};
double double_Array_0[2][2][2] = {
	{{127.5, 5.5}, {99.84, 4.3}}, {{1.5, 1.8}, {25.8, 500.7}}
};
signed char signed_char_Array_0[3] = {
	0, -64, 2
};
signed long int signed_long_int_Array_0[1] = {
	128
};
signed short int signed_short_int_Array_0[3] = {
	-1, 1, 256
};
unsigned short int unsigned_short_int_Array_0[1] = {
	4
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch80Wrapper_A
	double_Array_0[0][1][0] = double_Array_0[1][1][1];


	// From: Req5Batch80Wrapper_A
	unsigned_short_int_Array_0[0] = signed_short_int_Array_0[1];


	// From: Req6Batch80Wrapper_A
	signed_char_Array_0[1] = signed_char_Array_0[2];


	// From: Req2Batch80Wrapper_A
	unsigned char stepLocal_0 = unsigned_short_int_Array_0[0] <= signed_char_Array_0[1];
	if (BOOL_unsigned_char_Array_0[0] || stepLocal_0) {
		signed_char_Array_0[0] = (abs (1 - signed_char_Array_0[2]));
	} else {
		signed_char_Array_0[0] = signed_char_Array_0[2];
	}


	// From: Req3Batch80Wrapper_A
	signed short int stepLocal_1 = signed_short_int_Array_0[1];
	if (stepLocal_1 <= (unsigned_short_int_Array_0[0] / signed_long_int_Array_0[0])) {
		double_Array_0[1][0][1] = (min ((max ((min (double_Array_0[1][1][0] , double_Array_0[0][0][1])) , double_Array_0[0][1][1])) , (max (3.6 , double_Array_0[1][1][1]))));
	} else {
		double_Array_0[1][0][1] = (double_Array_0[0][0][0] - double_Array_0[1][0][0]);
	}


	// From: Req1Batch80Wrapper_A
	if ((max ((unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[0]) , signed_char_Array_0[0])) <= (min ((unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[0]) , (signed_char_Array_0[1] % signed_long_int_Array_0[0])))) {
		signed_short_int_Array_0[2] = (min ((signed_short_int_Array_0[0] - signed_short_int_Array_0[1]) , signed_char_Array_0[0]));
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0][0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0][0] >= 0.0F && double_Array_0[0][0][0] <= -1.0e-20F) || (double_Array_0[0][0][0] <= 9223372.036854765600e+12F && double_Array_0[0][0][0] >= 1.0e-20F ));
	double_Array_0[1][0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0][0] >= 0.0F && double_Array_0[1][0][0] <= -1.0e-20F) || (double_Array_0[1][0][0] <= 9223372.036854765600e+12F && double_Array_0[1][0][0] >= 1.0e-20F ));
	double_Array_0[1][1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1][0] >= -922337.2036854765600e+13F && double_Array_0[1][1][0] <= -1.0e-20F) || (double_Array_0[1][1][0] <= 9223372.036854765600e+12F && double_Array_0[1][1][0] >= 1.0e-20F ));
	double_Array_0[0][0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0][1] >= -922337.2036854765600e+13F && double_Array_0[0][0][1] <= -1.0e-20F) || (double_Array_0[0][0][1] <= 9223372.036854765600e+12F && double_Array_0[0][0][1] >= 1.0e-20F ));
	double_Array_0[0][1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1][1] >= -922337.2036854765600e+13F && double_Array_0[0][1][1] <= -1.0e-20F) || (double_Array_0[0][1][1] <= 9223372.036854765600e+12F && double_Array_0[0][1][1] >= 1.0e-20F ));
	double_Array_0[1][1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1][1] >= -922337.2036854765600e+13F && double_Array_0[1][1][1] <= -1.0e-20F) || (double_Array_0[1][1][1] <= 9223372.036854765600e+12F && double_Array_0[1][1][1] >= 1.0e-20F ));
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= 0);
	assume_abort_if_not(signed_char_Array_0[2] <= 126);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[0] != 0);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
}



void updateLastVariables() {
}

int property() {
	return (((((((max ((unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[0]) , signed_char_Array_0[0])) <= (min ((unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[0]) , (signed_char_Array_0[1] % signed_long_int_Array_0[0])))) ? (signed_short_int_Array_0[2] == ((signed short int) (min ((signed_short_int_Array_0[0] - signed_short_int_Array_0[1]) , signed_char_Array_0[0])))) : 1) && ((BOOL_unsigned_char_Array_0[0] || (unsigned_short_int_Array_0[0] <= signed_char_Array_0[1])) ? (signed_char_Array_0[0] == ((signed char) (abs (1 - signed_char_Array_0[2])))) : (signed_char_Array_0[0] == ((signed char) signed_char_Array_0[2])))) && ((signed_short_int_Array_0[1] <= (unsigned_short_int_Array_0[0] / signed_long_int_Array_0[0])) ? (double_Array_0[1][0][1] == ((double) (min ((max ((min (double_Array_0[1][1][0] , double_Array_0[0][0][1])) , double_Array_0[0][1][1])) , (max (3.6 , double_Array_0[1][1][1])))))) : (double_Array_0[1][0][1] == ((double) (double_Array_0[0][0][0] - double_Array_0[1][0][0]))))) && (double_Array_0[0][1][0] == ((double) double_Array_0[1][1][1]))) && (unsigned_short_int_Array_0[0] == ((unsigned short int) signed_short_int_Array_0[1]))) && (signed_char_Array_0[1] == ((signed char) signed_char_Array_0[2]))
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
