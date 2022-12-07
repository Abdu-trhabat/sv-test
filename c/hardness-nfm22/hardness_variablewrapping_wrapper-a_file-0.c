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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch0Wrapper_A.c", 13, "reach_error"); }
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
	1, 1
};
double double_Array_0[2][2] = {
	{5.25, 128.2}, {15.4, 25.8}
};
unsigned char unsigned_char_Array_0[2] = {
	1, 100
};
unsigned short int unsigned_short_int_Array_0[1] = {
	5
};

// Calibration values

// Last'ed variables
double last_1_double_Array_0_0__0_ = 5.25;
unsigned char last_1_unsigned_char_Array_0_1_ = 100;
unsigned short int last_1_unsigned_short_int_Array_0_0_ = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch0Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		if ((double_Array_0[1][0] * (double_Array_0[0][1] - 5.3)) <= last_1_double_Array_0_0__0_) {
			unsigned_short_int_Array_0[0] = last_1_unsigned_char_Array_0_1_;
		}
	}


	// From: Req3Batch0Wrapper_A
	if ((last_1_unsigned_short_int_Array_0_0_ + last_1_unsigned_short_int_Array_0_0_) < last_1_unsigned_short_int_Array_0_0_) {
		if (last_1_unsigned_short_int_Array_0_0_ > last_1_unsigned_short_int_Array_0_0_) {
			unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
		}
	}


	// From: Req1Batch0Wrapper_A
	if (! BOOL_unsigned_char_Array_0[1]) {
		double_Array_0[1][1] = (double_Array_0[0][1] - double_Array_0[1][0]);
	} else {
		double_Array_0[1][1] = (min (16.2 , double_Array_0[0][1]));
	}


	// From: Req2Batch0Wrapper_A
	if ((double_Array_0[0][1] + (double_Array_0[1][0] + double_Array_0[1][1])) != double_Array_0[1][1]) {
		if (BOOL_unsigned_char_Array_0[1]) {
			if ((- unsigned_short_int_Array_0[0]) <= unsigned_char_Array_0[1]) {
				if (BOOL_unsigned_char_Array_0[0]) {
					double_Array_0[0][0] = double_Array_0[1][0];
				}
			} else {
				double_Array_0[0][0] = double_Array_0[0][1];
			}
		} else {
			double_Array_0[0][0] = double_Array_0[0][1];
		}
	} else {
		double_Array_0[0][0] = double_Array_0[0][1];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854765600e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854765600e+12F && double_Array_0[0][1] >= 1.0e-20F ));
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}



void updateLastVariables() {
	last_1_double_Array_0_0__0_ = double_Array_0[0][0];
	last_1_unsigned_char_Array_0_1_ = unsigned_char_Array_0[1];
	last_1_unsigned_short_int_Array_0_0_ = unsigned_short_int_Array_0[0];
}

int property() {
	return ((((! BOOL_unsigned_char_Array_0[1]) ? (double_Array_0[1][1] == ((double) (double_Array_0[0][1] - double_Array_0[1][0]))) : (double_Array_0[1][1] == ((double) (min (16.2 , double_Array_0[0][1]))))) && (((double_Array_0[0][1] + (double_Array_0[1][0] + double_Array_0[1][1])) != double_Array_0[1][1]) ? (BOOL_unsigned_char_Array_0[1] ? (((- unsigned_short_int_Array_0[0]) <= unsigned_char_Array_0[1]) ? (BOOL_unsigned_char_Array_0[0] ? (double_Array_0[0][0] == ((double) double_Array_0[1][0])) : 1) : (double_Array_0[0][0] == ((double) double_Array_0[0][1]))) : (double_Array_0[0][0] == ((double) double_Array_0[0][1]))) : (double_Array_0[0][0] == ((double) double_Array_0[0][1])))) && (((last_1_unsigned_short_int_Array_0_0_ + last_1_unsigned_short_int_Array_0_0_) < last_1_unsigned_short_int_Array_0_0_) ? ((last_1_unsigned_short_int_Array_0_0_ > last_1_unsigned_short_int_Array_0_0_) ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : 1) : 1)) && (BOOL_unsigned_char_Array_0[0] ? (((double_Array_0[1][0] * (double_Array_0[0][1] - 5.3)) <= last_1_double_Array_0_0__0_) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) last_1_unsigned_char_Array_0_1_)) : 1) : 1)
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
