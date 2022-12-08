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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch31Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2] = {
	0, 0
};
double double_Array_0[2] = {
	0.97, 32.6
};
signed long int signed_long_int_Array_0[2][2] = {
	{-32, 1107940323}, {4, 200}
};
unsigned char unsigned_char_Array_0[2] = {
	4, 64
};

// Calibration values

// Last'ed variables
double last_1_double_Array_0_0_ = 0.97;
signed long int last_1_signed_long_int_Array_0_1__0_ = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch31Wrapper_A
	if (! (signed_long_int_Array_0[0][1] < (signed_long_int_Array_0[0][0] * last_1_signed_long_int_Array_0_1__0_))) {
		if ((abs (last_1_double_Array_0_0_)) < last_1_double_Array_0_0_) {
			if (BOOL_unsigned_char_Array_0[0]) {
				unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
			}
		}
	} else {
		unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
	}


	// From: Req2Batch31Wrapper_A
	if (unsigned_char_Array_0[1] < unsigned_char_Array_0[1]) {
		signed_long_int_Array_0[1][0] = (unsigned_char_Array_0[1] + unsigned_char_Array_0[1]);
	} else {
		signed_long_int_Array_0[1][0] = (unsigned_char_Array_0[1] - signed_long_int_Array_0[0][1]);
	}


	// From: Req4Batch31Wrapper_A
	if ((unsigned_char_Array_0[1] + signed_long_int_Array_0[0][1]) < unsigned_char_Array_0[1]) {
		if (BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) {
			if (BOOL_unsigned_char_Array_0[0]) {
				double_Array_0[0] = 0.8;
			} else {
				double_Array_0[0] = double_Array_0[1];
			}
		} else {
			double_Array_0[0] = double_Array_0[1];
		}
	} else {
		double_Array_0[0] = double_Array_0[1];
	}


	// From: Req1Batch31Wrapper_A
	if (BOOL_unsigned_char_Array_0[1]) {
		signed_long_int_Array_0[1][1] = ((signed_long_int_Array_0[0][1] - unsigned_char_Array_0[1]) - unsigned_char_Array_0[1]);
	} else {
		if (BOOL_unsigned_char_Array_0[0] && (signed_long_int_Array_0[0][1] < unsigned_char_Array_0[1])) {
			signed_long_int_Array_0[1][1] = signed_long_int_Array_0[0][1];
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854765600e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= -1073741823);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 1073741823);
	signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][1] >= 1073741822);
	assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483646);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}



void updateLastVariables() {
	last_1_double_Array_0_0_ = double_Array_0[0];
	last_1_signed_long_int_Array_0_1__0_ = signed_long_int_Array_0[1][0];
}

int property() {
	return (((BOOL_unsigned_char_Array_0[1] ? (signed_long_int_Array_0[1][1] == ((signed long int) ((signed_long_int_Array_0[0][1] - unsigned_char_Array_0[1]) - unsigned_char_Array_0[1]))) : ((BOOL_unsigned_char_Array_0[0] && (signed_long_int_Array_0[0][1] < unsigned_char_Array_0[1])) ? (signed_long_int_Array_0[1][1] == ((signed long int) signed_long_int_Array_0[0][1])) : 1)) && ((unsigned_char_Array_0[1] < unsigned_char_Array_0[1]) ? (signed_long_int_Array_0[1][0] == ((signed long int) (unsigned_char_Array_0[1] + unsigned_char_Array_0[1]))) : (signed_long_int_Array_0[1][0] == ((signed long int) (unsigned_char_Array_0[1] - signed_long_int_Array_0[0][1]))))) && ((! (signed_long_int_Array_0[0][1] < (signed_long_int_Array_0[0][0] * last_1_signed_long_int_Array_0_1__0_))) ? (((abs (last_1_double_Array_0_0_)) < last_1_double_Array_0_0_) ? (BOOL_unsigned_char_Array_0[0] ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : 1) : 1) : (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])))) && (((unsigned_char_Array_0[1] + signed_long_int_Array_0[0][1]) < unsigned_char_Array_0[1]) ? ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] ? (double_Array_0[0] == ((double) 0.8)) : (double_Array_0[0] == ((double) double_Array_0[1]))) : (double_Array_0[0] == ((double) double_Array_0[1]))) : (double_Array_0[0] == ((double) double_Array_0[1])))
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
