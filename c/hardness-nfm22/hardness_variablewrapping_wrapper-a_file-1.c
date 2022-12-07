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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch1Wrapper_A.c", 13, "reach_error"); }
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
float float_Array_0[2][2] = {
	{256.2, 10.375}, {127.5, 5.5}
};
signed long int signed_long_int_Array_0[2][2] = {
	{32, 100000000}, {2, 5}
};
signed short int signed_short_int_Array_0[1] = {
	2
};
unsigned char unsigned_char_Array_0[1] = {
	50
};
unsigned long int unsigned_long_int_Array_0[1] = {
	16
};

// Calibration values

// Last'ed variables
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch1Wrapper_A
	if (float_Array_0[0][1] <= (- float_Array_0[1][0])) {
		float_Array_0[1][1] = (abs (float_Array_0[0][0]));
	} else {
		if (BOOL_unsigned_char_Array_0[1]) {
			float_Array_0[1][1] = float_Array_0[0][0];
		} else {
			float_Array_0[1][1] = float_Array_0[0][0];
		}
	}


	// From: Req5Batch1Wrapper_A
	signed_short_int_Array_0[0] = unsigned_char_Array_0[0];


	// From: Req2Batch1Wrapper_A
	unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[0];
	if (BOOL_unsigned_char_Array_0[1] || stepLocal_0) {
		signed_long_int_Array_0[1][1] = (max (signed_short_int_Array_0[0] , signed_short_int_Array_0[0]));
	} else {
		signed_long_int_Array_0[1][1] = ((signed_long_int_Array_0[0][0] + signed_long_int_Array_0[1][0]) - 4);
	}


	// From: Req3Batch1Wrapper_A
	signed long int stepLocal_3 = signed_long_int_Array_0[1][0];
	signed long int stepLocal_2 = signed_short_int_Array_0[0] + signed_long_int_Array_0[1][0];
	signed long int stepLocal_1 = signed_long_int_Array_0[1][0] << signed_short_int_Array_0[0];
	if (stepLocal_1 != (abs (signed_long_int_Array_0[0][0]))) {
		if ((signed_short_int_Array_0[0] % unsigned_char_Array_0[0]) >= stepLocal_3) {
			if (stepLocal_2 > (last_1_unsigned_long_int_Array_0_0_ * signed_short_int_Array_0[0])) {
				unsigned_long_int_Array_0[0] = unsigned_char_Array_0[0];
			} else {
				unsigned_long_int_Array_0[0] = signed_long_int_Array_0[0][0];
			}
		}
	}


	// From: Req4Batch1Wrapper_A
	signed_long_int_Array_0[0][1] = signed_short_int_Array_0[0];
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854765600e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854765600e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= -922337.2036854776000e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 1073741823);
	signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1][0] <= 1073741823);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	assume_abort_if_not(unsigned_char_Array_0[0] != 0);
}



void updateLastVariables() {
	last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}

int property() {
	return (((((float_Array_0[0][1] <= (- float_Array_0[1][0])) ? (float_Array_0[1][1] == ((float) (abs (float_Array_0[0][0])))) : (BOOL_unsigned_char_Array_0[1] ? (float_Array_0[1][1] == ((float) float_Array_0[0][0])) : (float_Array_0[1][1] == ((float) float_Array_0[0][0])))) && ((BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) ? (signed_long_int_Array_0[1][1] == ((signed long int) (max (signed_short_int_Array_0[0] , signed_short_int_Array_0[0])))) : (signed_long_int_Array_0[1][1] == ((signed long int) ((signed_long_int_Array_0[0][0] + signed_long_int_Array_0[1][0]) - 4))))) && (((signed_long_int_Array_0[1][0] << signed_short_int_Array_0[0]) != (abs (signed_long_int_Array_0[0][0]))) ? (((signed_short_int_Array_0[0] % unsigned_char_Array_0[0]) >= signed_long_int_Array_0[1][0]) ? (((signed_short_int_Array_0[0] + signed_long_int_Array_0[1][0]) > (last_1_unsigned_long_int_Array_0_0_ * signed_short_int_Array_0[0])) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[0])) : (unsigned_long_int_Array_0[0] == ((unsigned long int) signed_long_int_Array_0[0][0]))) : 1) : 1)) && (signed_long_int_Array_0[0][1] == ((signed long int) signed_short_int_Array_0[0]))) && (signed_short_int_Array_0[0] == ((signed short int) unsigned_char_Array_0[0]))
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
