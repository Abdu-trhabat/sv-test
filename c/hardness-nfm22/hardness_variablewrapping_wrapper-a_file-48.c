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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch48Wrapper_A.c", 13, "reach_error"); }
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
	1, 0
};
float float_Array_0[2][3] = {
	{9.25, 128.75, 255.675}, {4.5, 5.5, 32.8}
};
signed long int signed_long_int_Array_0[1] = {
	64
};
unsigned char unsigned_char_Array_0[3][3] = {
	{8, 5, 100}, {4, 200, 64}, {100, 200, 2}
};
unsigned long int unsigned_long_int_Array_0[1] = {
	1
};

// Calibration values

// Last'ed variables
unsigned char last_1_unsigned_char_Array_0_0__1_ = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch48Wrapper_A
	if (float_Array_0[0][2] <= float_Array_0[1][1]) {
		if (float_Array_0[1][1] < ((float_Array_0[0][1] - float_Array_0[1][0]) + 1.395f)) {
			float_Array_0[1][2] = float_Array_0[0][0];
		} else {
			float_Array_0[1][2] = float_Array_0[0][0];
		}
	} else {
		float_Array_0[1][2] = float_Array_0[0][0];
	}


	// From: Req4Batch48Wrapper_A
	unsigned_long_int_Array_0[0] = unsigned_char_Array_0[0][2];


	// From: Req5Batch48Wrapper_A
	signed_long_int_Array_0[0] = unsigned_char_Array_0[2][1];


	// From: Req6Batch48Wrapper_A
	unsigned_char_Array_0[2][0] = 4;


	// From: Req3Batch48Wrapper_A
	signed long int stepLocal_0 = signed_long_int_Array_0[0];
	if (((unsigned_char_Array_0[2][1] - unsigned_char_Array_0[0][0]) - (8 + unsigned_char_Array_0[2][2])) > stepLocal_0) {
		BOOL_unsigned_char_Array_0[0] = (! BOOL_unsigned_char_Array_0[1]);
	} else {
		BOOL_unsigned_char_Array_0[0] = BOOL_unsigned_char_Array_0[1];
	}


	// From: Req2Batch48Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		if (last_1_unsigned_char_Array_0_0__1_ != last_1_unsigned_char_Array_0_0__1_) {
			unsigned_char_Array_0[0][1] = ((unsigned_char_Array_0[1][1] - unsigned_char_Array_0[0][0]) - unsigned_char_Array_0[1][0]);
		} else {
			unsigned_char_Array_0[0][1] = (unsigned_char_Array_0[1][1] - ((max (unsigned_char_Array_0[0][2] , unsigned_char_Array_0[1][2])) - unsigned_char_Array_0[0][0]));
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854765600e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854765600e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= 0.0F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[1][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
	float_Array_0[0][2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][2] >= -922337.2036854776000e+13F && float_Array_0[0][2] <= -1.0e-20F) || (float_Array_0[0][2] <= 9223372.036854776000e+12F && float_Array_0[0][2] >= 1.0e-20F ));
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 63);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
	unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][1] >= 190);
	assume_abort_if_not(unsigned_char_Array_0[1][1] <= 254);
	unsigned_char_Array_0[2][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[2][1] >= 191);
	assume_abort_if_not(unsigned_char_Array_0[2][1] <= 255);
	unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][2] >= 63);
	assume_abort_if_not(unsigned_char_Array_0[0][2] <= 127);
	unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][2] >= 63);
	assume_abort_if_not(unsigned_char_Array_0[1][2] <= 127);
	unsigned_char_Array_0[2][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[2][2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[2][2] <= 63);
}



void updateLastVariables() {
	last_1_unsigned_char_Array_0_0__1_ = unsigned_char_Array_0[0][1];
}

int property() {
	return ((((((float_Array_0[0][2] <= float_Array_0[1][1]) ? ((float_Array_0[1][1] < ((float_Array_0[0][1] - float_Array_0[1][0]) + 1.395f)) ? (float_Array_0[1][2] == ((float) float_Array_0[0][0])) : (float_Array_0[1][2] == ((float) float_Array_0[0][0]))) : (float_Array_0[1][2] == ((float) float_Array_0[0][0]))) && (BOOL_unsigned_char_Array_0[0] ? ((last_1_unsigned_char_Array_0_0__1_ != last_1_unsigned_char_Array_0_0__1_) ? (unsigned_char_Array_0[0][1] == ((unsigned char) ((unsigned_char_Array_0[1][1] - unsigned_char_Array_0[0][0]) - unsigned_char_Array_0[1][0]))) : (unsigned_char_Array_0[0][1] == ((unsigned char) (unsigned_char_Array_0[1][1] - ((max (unsigned_char_Array_0[0][2] , unsigned_char_Array_0[1][2])) - unsigned_char_Array_0[0][0]))))) : 1)) && ((((unsigned_char_Array_0[2][1] - unsigned_char_Array_0[0][0]) - (8 + unsigned_char_Array_0[2][2])) > signed_long_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (! BOOL_unsigned_char_Array_0[1]))) : (BOOL_unsigned_char_Array_0[0] == ((unsigned char) BOOL_unsigned_char_Array_0[1])))) && (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[0][2]))) && (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[2][1]))) && (unsigned_char_Array_0[2][0] == ((unsigned char) 4))
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
