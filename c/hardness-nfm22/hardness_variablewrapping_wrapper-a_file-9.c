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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch9Wrapper_A.c", 13, "reach_error"); }
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
	0
};
double double_Array_0[2] = {
	9.2, 0.975
};
signed long int signed_long_int_Array_0[1] = {
	-16
};
signed short int signed_short_int_Array_0[2] = {
	1, 100
};
unsigned char unsigned_char_Array_0[3] = {
	32, 4, 10
};

// Calibration values

// Last'ed variables
double last_1_double_Array_0_0_ = 9.2;
signed long int last_1_signed_long_int_Array_0_0_ = -16;
signed short int last_1_signed_short_int_Array_0_0_ = 1;
unsigned char last_1_unsigned_char_Array_0_2_ = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch9Wrapper_A
	unsigned char stepLocal_0 = last_1_double_Array_0_0_ > last_1_double_Array_0_0_;
	if (((last_1_signed_short_int_Array_0_0_ + last_1_unsigned_char_Array_0_2_) < 10) || stepLocal_0) {
		signed_short_int_Array_0[0] = (max (((unsigned_char_Array_0[1] + last_1_signed_short_int_Array_0_0_) - (max (last_1_signed_long_int_Array_0_0_ , last_1_signed_short_int_Array_0_0_))) , last_1_unsigned_char_Array_0_2_));
	} else {
		signed_short_int_Array_0[0] = last_1_signed_short_int_Array_0_0_;
	}


	// From: Req6Batch9Wrapper_A
	signed_long_int_Array_0[0] = signed_short_int_Array_0[0];


	// From: Req2Batch9Wrapper_A
	if ((10 << signed_short_int_Array_0[0]) < (unsigned_char_Array_0[1] * signed_long_int_Array_0[0])) {
		signed_short_int_Array_0[1] = (signed_short_int_Array_0[0] + signed_long_int_Array_0[0]);
	}


	// From: Req3Batch9Wrapper_A
	unsigned_char_Array_0[0] = 64;


	// From: Req4Batch9Wrapper_A
	double_Array_0[0] = double_Array_0[1];


	// From: Req1Batch9Wrapper_A
	if (signed_short_int_Array_0[0] <= 16) {
		unsigned_char_Array_0[2] = unsigned_char_Array_0[1];
	} else {
		if ((max (double_Array_0[0] , double_Array_0[0])) < double_Array_0[0]) {
			if (BOOL_unsigned_char_Array_0[0]) {
				unsigned_char_Array_0[2] = unsigned_char_Array_0[1];
			} else {
				unsigned_char_Array_0[2] = unsigned_char_Array_0[1];
			}
		} else {
			unsigned_char_Array_0[2] = unsigned_char_Array_0[1];
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854765600e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
}



void updateLastVariables() {
	last_1_double_Array_0_0_ = double_Array_0[0];
	last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
	last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
	last_1_unsigned_char_Array_0_2_ = unsigned_char_Array_0[2];
}

int property() {
	return ((((((signed_short_int_Array_0[0] <= 16) ? (unsigned_char_Array_0[2] == ((unsigned char) unsigned_char_Array_0[1])) : (((max (double_Array_0[0] , double_Array_0[0])) < double_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] ? (unsigned_char_Array_0[2] == ((unsigned char) unsigned_char_Array_0[1])) : (unsigned_char_Array_0[2] == ((unsigned char) unsigned_char_Array_0[1]))) : (unsigned_char_Array_0[2] == ((unsigned char) unsigned_char_Array_0[1])))) && (((10 << signed_short_int_Array_0[0]) < (unsigned_char_Array_0[1] * signed_long_int_Array_0[0])) ? (signed_short_int_Array_0[1] == ((signed short int) (signed_short_int_Array_0[0] + signed_long_int_Array_0[0]))) : 1)) && (unsigned_char_Array_0[0] == ((unsigned char) 64))) && (double_Array_0[0] == ((double) double_Array_0[1]))) && ((((last_1_signed_short_int_Array_0_0_ + last_1_unsigned_char_Array_0_2_) < 10) || (last_1_double_Array_0_0_ > last_1_double_Array_0_0_)) ? (signed_short_int_Array_0[0] == ((signed short int) (max (((unsigned_char_Array_0[1] + last_1_signed_short_int_Array_0_0_) - (max (last_1_signed_long_int_Array_0_0_ , last_1_signed_short_int_Array_0_0_))) , last_1_unsigned_char_Array_0_2_)))) : (signed_short_int_Array_0[0] == ((signed short int) last_1_signed_short_int_Array_0_0_)))) && (signed_long_int_Array_0[0] == ((signed long int) signed_short_int_Array_0[0]))
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
