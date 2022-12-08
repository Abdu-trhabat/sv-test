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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch36Wrapper_A.c", 13, "reach_error"); }
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
	1, 1, 0
};
double double_Array_0[2][2] = {
	{199.5, 64.2}, {3.5, 9.5}
};
float float_Array_0[2] = {
	4.25, 9999999999.875
};
unsigned char unsigned_char_Array_0[2] = {
	2, 1
};
unsigned long int unsigned_long_int_Array_0[1] = {
	1
};

// Calibration values

// Last'ed variables
unsigned char last_1_unsigned_char_Array_0_1_ = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch36Wrapper_A
	if ((last_1_unsigned_char_Array_0_1_ >> last_1_unsigned_char_Array_0_1_) < (- last_1_unsigned_char_Array_0_1_)) {
		BOOL_unsigned_char_Array_0[1] = (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[0]);
	}


	// From: Req4Batch36Wrapper_A
	if (double_Array_0[1][0] == (- double_Array_0[0][0])) {
		if (BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[1]) {
			unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
		} else {
			unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
		}
	} else {
		unsigned_char_Array_0[1] = 0;
	}


	// From: Req3Batch36Wrapper_A
	if (float_Array_0[0] > float_Array_0[1]) {
		double_Array_0[0][1] = 4.6;
	} else {
		double_Array_0[0][1] = (max (double_Array_0[1][1] , (max (double_Array_0[0][0] , double_Array_0[1][0]))));
	}


	// From: Req1Batch36Wrapper_A
	unsigned char stepLocal_0 = double_Array_0[0][1] > double_Array_0[0][1];
	if (stepLocal_0 && BOOL_unsigned_char_Array_0[1]) {
		if ((max (double_Array_0[0][1] , (- double_Array_0[0][1]))) != double_Array_0[0][1]) {
			if (BOOL_unsigned_char_Array_0[1]) {
				unsigned_long_int_Array_0[0] = 10u;
			} else {
				unsigned_long_int_Array_0[0] = unsigned_char_Array_0[1];
			}
		} else {
			unsigned_long_int_Array_0[0] = unsigned_char_Array_0[1];
		}
	} else {
		unsigned_long_int_Array_0[0] = unsigned_char_Array_0[1];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= -922337.2036854765600e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854765600e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= -922337.2036854765600e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854765600e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1] >= -922337.2036854765600e+13F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854765600e+12F && double_Array_0[1][1] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}



void updateLastVariables() {
	last_1_unsigned_char_Array_0_1_ = unsigned_char_Array_0[1];
}

int property() {
	return (((((double_Array_0[0][1] > double_Array_0[0][1]) && BOOL_unsigned_char_Array_0[1]) ? (((max (double_Array_0[0][1] , (- double_Array_0[0][1]))) != double_Array_0[0][1]) ? (BOOL_unsigned_char_Array_0[1] ? (unsigned_long_int_Array_0[0] == ((unsigned long int) 10u)) : (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[1]))) : (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[1]))) : (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[1]))) && (((last_1_unsigned_char_Array_0_1_ >> last_1_unsigned_char_Array_0_1_) < (- last_1_unsigned_char_Array_0_1_)) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[0]))) : 1)) && ((float_Array_0[0] > float_Array_0[1]) ? (double_Array_0[0][1] == ((double) 4.6)) : (double_Array_0[0][1] == ((double) (max (double_Array_0[1][1] , (max (double_Array_0[0][0] , double_Array_0[1][0])))))))) && ((double_Array_0[1][0] == (- double_Array_0[0][0])) ? ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[1]) ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0]))) : (unsigned_char_Array_0[1] == ((unsigned char) 0)))
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
