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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8Wrapper_A.c", 13, "reach_error"); }
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
	0, 0, 0, 0, 0
};
float float_Array_0[2][3] = {
	{2.4, 256.75, 0.0}, {127.75, 256.6, 31.4}
};
signed long int signed_long_int_Array_0[2] = {
	64, 0
};
unsigned char unsigned_char_Array_0[2] = {
	100, 32
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch8Wrapper_A
	float_Array_0[1][1] = float_Array_0[0][2];


	// From: Req6Batch8Wrapper_A
	unsigned_char_Array_0[1] = unsigned_char_Array_0[0];


	// From: Req5Batch8Wrapper_A
	signed_long_int_Array_0[1] = unsigned_char_Array_0[1];


	// From: Req2Batch8Wrapper_A
	unsigned char stepLocal_1 = unsigned_char_Array_0[1];
	signed long int stepLocal_0 = (signed_long_int_Array_0[1] * signed_long_int_Array_0[1]) * (unsigned_char_Array_0[1] - unsigned_char_Array_0[1]);
	if (stepLocal_0 >= 1u) {
		if (signed_long_int_Array_0[1] <= stepLocal_1) {
			signed_long_int_Array_0[0] = unsigned_char_Array_0[1];
		} else {
			signed_long_int_Array_0[0] = unsigned_char_Array_0[1];
		}
	} else {
		signed_long_int_Array_0[0] = unsigned_char_Array_0[1];
	}


	// From: Req3Batch8Wrapper_A
	signed long int stepLocal_2 = signed_long_int_Array_0[0];
	if (unsigned_char_Array_0[1] > stepLocal_2) {
		float_Array_0[0][0] = (float_Array_0[1][0] + ((float_Array_0[0][2] - float_Array_0[1][2]) - float_Array_0[0][1]));
	} else {
		float_Array_0[0][0] = (float_Array_0[0][1] - (float_Array_0[0][2] + float_Array_0[1][2]));
	}


	// From: Req1Batch8Wrapper_A
	if (signed_long_int_Array_0[1] >= (8u * signed_long_int_Array_0[0])) {
		BOOL_unsigned_char_Array_0[4] = (! (BOOL_unsigned_char_Array_0[3] || (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1])));
	} else {
		BOOL_unsigned_char_Array_0[4] = BOOL_unsigned_char_Array_0[0];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 0);
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= -461168.6018427382800e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 4611686.018427382800e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= 0.0F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 4611686.018427382800e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[0][2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][2] >= 2305843.009213691390e+12F && float_Array_0[0][2] <= -1.0e-20F) || (float_Array_0[0][2] <= 4611686.018427382800e+12F && float_Array_0[0][2] >= 1.0e-20F ));
	float_Array_0[1][2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][2] >= 0.0F && float_Array_0[1][2] <= -1.0e-20F) || (float_Array_0[1][2] <= 2305843.009213691390e+12F && float_Array_0[1][2] >= 1.0e-20F ));
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}



void updateLastVariables() {
}

int property() {
	return ((((((signed_long_int_Array_0[1] >= (8u * signed_long_int_Array_0[0])) ? (BOOL_unsigned_char_Array_0[4] == ((unsigned char) (! (BOOL_unsigned_char_Array_0[3] || (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1]))))) : (BOOL_unsigned_char_Array_0[4] == ((unsigned char) BOOL_unsigned_char_Array_0[0]))) && ((((signed_long_int_Array_0[1] * signed_long_int_Array_0[1]) * (unsigned_char_Array_0[1] - unsigned_char_Array_0[1])) >= 1u) ? ((signed_long_int_Array_0[1] <= unsigned_char_Array_0[1]) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[1])) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[1]))) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[1])))) && ((unsigned_char_Array_0[1] > signed_long_int_Array_0[0]) ? (float_Array_0[0][0] == ((float) (float_Array_0[1][0] + ((float_Array_0[0][2] - float_Array_0[1][2]) - float_Array_0[0][1])))) : (float_Array_0[0][0] == ((float) (float_Array_0[0][1] - (float_Array_0[0][2] + float_Array_0[1][2])))))) && (float_Array_0[1][1] == ((float) float_Array_0[0][2]))) && (signed_long_int_Array_0[1] == ((signed long int) unsigned_char_Array_0[1]))) && (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0]))
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
