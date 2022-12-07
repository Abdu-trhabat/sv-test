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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch55Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[5] = {
	1.8, 63.5, 0.25, 256.75, 16.5
};
float float_Array_0[1] = {
	4.6
};
signed long int signed_long_int_Array_0[1] = {
	-5
};
unsigned char unsigned_char_Array_0[3] = {
	2, 128, 100
};
unsigned long int unsigned_long_int_Array_0[1] = {
	500
};
unsigned short int unsigned_short_int_Array_0[1] = {
	10
};

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_0_ = -5;
unsigned char last_1_unsigned_char_Array_0_0_ = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch55Wrapper_A
	unsigned char stepLocal_1 = last_1_signed_long_int_Array_0_0_ >= last_1_unsigned_char_Array_0_0_;
	signed long int stepLocal_0 = last_1_unsigned_char_Array_0_0_;
	if (BOOL_unsigned_char_Array_0[1]) {
		if (stepLocal_1 && BOOL_unsigned_char_Array_0[0]) {
			if (last_1_signed_long_int_Array_0_0_ >= stepLocal_0) {
				unsigned_short_int_Array_0[0] = 5;
			} else {
				unsigned_short_int_Array_0[0] = (min (25 , last_1_unsigned_char_Array_0_0_));
			}
		}
	} else {
		unsigned_short_int_Array_0[0] = last_1_unsigned_char_Array_0_0_;
	}


	// From: Req2Batch55Wrapper_A
	if (BOOL_unsigned_char_Array_0[1]) {
		double_Array_0[3] = (((double_Array_0[1] + double_Array_0[0]) + double_Array_0[2]) - double_Array_0[4]);
	}


	// From: Req4Batch55Wrapper_A
	float_Array_0[0] = double_Array_0[1];


	// From: Req5Batch55Wrapper_A
	unsigned_long_int_Array_0[0] = unsigned_char_Array_0[1];


	// From: Req6Batch55Wrapper_A
	unsigned_char_Array_0[0] = unsigned_char_Array_0[2];


	// From: Req3Batch55Wrapper_A
	signed long int stepLocal_3 = min ((-4 >> unsigned_short_int_Array_0[0]) , unsigned_short_int_Array_0[0]);
	signed long int stepLocal_2 = unsigned_short_int_Array_0[0] / -8;
	if ((~ unsigned_char_Array_0[0]) <= stepLocal_3) {
		if ((unsigned_char_Array_0[1] - 64) < stepLocal_2) {
			signed_long_int_Array_0[0] = unsigned_short_int_Array_0[0];
		}
	} else {
		signed_long_int_Array_0[0] = (unsigned_char_Array_0[0] - unsigned_char_Array_0[1]);
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 2305843.009213691390e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 2305843.009213691390e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427382800e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= 0.0F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854765600e+12F && double_Array_0[4] >= 1.0e-20F ));
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
	unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[2] <= 254);
}



void updateLastVariables() {
	last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
	last_1_unsigned_char_Array_0_0_ = unsigned_char_Array_0[0];
}

int property() {
	return (((((BOOL_unsigned_char_Array_0[1] ? (((last_1_signed_long_int_Array_0_0_ >= last_1_unsigned_char_Array_0_0_) && BOOL_unsigned_char_Array_0[0]) ? ((last_1_signed_long_int_Array_0_0_ >= last_1_unsigned_char_Array_0_0_) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) 5)) : (unsigned_short_int_Array_0[0] == ((unsigned short int) (min (25 , last_1_unsigned_char_Array_0_0_))))) : 1) : (unsigned_short_int_Array_0[0] == ((unsigned short int) last_1_unsigned_char_Array_0_0_))) && (BOOL_unsigned_char_Array_0[1] ? (double_Array_0[3] == ((double) (((double_Array_0[1] + double_Array_0[0]) + double_Array_0[2]) - double_Array_0[4]))) : 1)) && (((~ unsigned_char_Array_0[0]) <= (min ((-4 >> unsigned_short_int_Array_0[0]) , unsigned_short_int_Array_0[0]))) ? (((unsigned_char_Array_0[1] - 64) < (unsigned_short_int_Array_0[0] / -8)) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[0])) : 1) : (signed_long_int_Array_0[0] == ((signed long int) (unsigned_char_Array_0[0] - unsigned_char_Array_0[1]))))) && (float_Array_0[0] == ((float) double_Array_0[1]))) && (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[1]))) && (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[2]))
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
