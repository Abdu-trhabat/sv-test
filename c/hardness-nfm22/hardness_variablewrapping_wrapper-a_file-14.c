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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch14Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[5] = {
	0, 1, 0, 1, 0
};
double double_Array_0[1] = {
	8.6
};
float float_Array_0[3] = {
	32.25, 15.5, 256.25
};
signed long int signed_long_int_Array_0[1] = {
	1000000
};
signed short int signed_short_int_Array_0[2][2] = {
	{8, -64}, {10, -64}
};
unsigned short int unsigned_short_int_Array_0[2] = {
	2, 57581
};

// Calibration values

// Last'ed variables
unsigned char last_1_BOOL_unsigned_char_Array_0_0_ = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch14Wrapper_A
	if (last_1_BOOL_unsigned_char_Array_0_0_) {
		signed_short_int_Array_0[1][1] = signed_short_int_Array_0[0][1];
	} else {
		signed_short_int_Array_0[1][1] = ((signed_short_int_Array_0[1][0] + 16) - signed_short_int_Array_0[0][0]);
	}


	// From: Req4Batch14Wrapper_A
	if ((float_Array_0[0] / float_Array_0[1]) <= float_Array_0[2]) {
		if ((double_Array_0[0] - 2.3) > float_Array_0[1]) {
			unsigned_short_int_Array_0[0] = (unsigned_short_int_Array_0[1] - signed_short_int_Array_0[1][0]);
		} else {
			unsigned_short_int_Array_0[0] = (max (signed_short_int_Array_0[1][0] , (abs (unsigned_short_int_Array_0[1] - signed_short_int_Array_0[0][0]))));
		}
	} else {
		unsigned_short_int_Array_0[0] = signed_short_int_Array_0[0][0];
	}


	// From: Req3Batch14Wrapper_A
	if (((signed_short_int_Array_0[1][1] >= unsigned_short_int_Array_0[0]) && BOOL_unsigned_char_Array_0[4]) && BOOL_unsigned_char_Array_0[3]) {
		BOOL_unsigned_char_Array_0[0] = (! BOOL_unsigned_char_Array_0[1]);
	} else {
		BOOL_unsigned_char_Array_0[0] = (! (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1]));
	}


	// From: Req1Batch14Wrapper_A
	unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[0];
	if (stepLocal_0 && BOOL_unsigned_char_Array_0[0]) {
		signed_long_int_Array_0[0] = signed_short_int_Array_0[1][1];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
	BOOL_unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[4] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[4] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	assume_abort_if_not(float_Array_0[1] != 0.0F);
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
	signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[0][0] <= 32766);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 16383);
	signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][1] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}



void updateLastVariables() {
	last_1_BOOL_unsigned_char_Array_0_0_ = BOOL_unsigned_char_Array_0[0];
}

int property() {
	return ((((BOOL_unsigned_char_Array_0[0] && BOOL_unsigned_char_Array_0[0]) ? (signed_long_int_Array_0[0] == ((signed long int) signed_short_int_Array_0[1][1])) : 1) && (last_1_BOOL_unsigned_char_Array_0_0_ ? (signed_short_int_Array_0[1][1] == ((signed short int) signed_short_int_Array_0[0][1])) : (signed_short_int_Array_0[1][1] == ((signed short int) ((signed_short_int_Array_0[1][0] + 16) - signed_short_int_Array_0[0][0]))))) && ((((signed_short_int_Array_0[1][1] >= unsigned_short_int_Array_0[0]) && BOOL_unsigned_char_Array_0[4]) && BOOL_unsigned_char_Array_0[3]) ? (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (! BOOL_unsigned_char_Array_0[1]))) : (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (! (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1])))))) && (((float_Array_0[0] / float_Array_0[1]) <= float_Array_0[2]) ? (((double_Array_0[0] - 2.3) > float_Array_0[1]) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) (unsigned_short_int_Array_0[1] - signed_short_int_Array_0[1][0]))) : (unsigned_short_int_Array_0[0] == ((unsigned short int) (max (signed_short_int_Array_0[1][0] , (abs (unsigned_short_int_Array_0[1] - signed_short_int_Array_0[0][0]))))))) : (unsigned_short_int_Array_0[0] == ((unsigned short int) signed_short_int_Array_0[0][0])))
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
