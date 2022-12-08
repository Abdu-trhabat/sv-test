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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch49Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{0, 0}, {1, 0}
};
float float_Array_0[2] = {
	1000.2, 1000000000000000.4
};
signed short int signed_short_int_Array_0[2] = {
	-2, 128
};
unsigned short int unsigned_short_int_Array_0[2][2] = {
	{10, 256}, {4, 4}
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch49Wrapper_A
	signed_short_int_Array_0[1] = (abs (signed_short_int_Array_0[0]));


	// From: Req3Batch49Wrapper_A
	if ((50 >> unsigned_short_int_Array_0[0][1]) <= signed_short_int_Array_0[1]) {
		BOOL_unsigned_char_Array_0[0][1] = ((! (! BOOL_unsigned_char_Array_0[1][1])) || BOOL_unsigned_char_Array_0[0][0]);
	} else {
		BOOL_unsigned_char_Array_0[0][1] = (! BOOL_unsigned_char_Array_0[1][1]);
	}


	// From: Req4Batch49Wrapper_A
	if (! BOOL_unsigned_char_Array_0[0][0]) {
		if (unsigned_short_int_Array_0[0][1] >= (min (unsigned_short_int_Array_0[0][0] , signed_short_int_Array_0[1]))) {
			BOOL_unsigned_char_Array_0[1][0] = (BOOL_unsigned_char_Array_0[0][1] && BOOL_unsigned_char_Array_0[1][1]);
		} else {
			BOOL_unsigned_char_Array_0[1][0] = BOOL_unsigned_char_Array_0[1][1];
		}
	}


	// From: Req1Batch49Wrapper_A
	if (float_Array_0[1] >= 64.5f) {
		if (float_Array_0[1] >= float_Array_0[0]) {
			unsigned_short_int_Array_0[1][1] = (abs (max (unsigned_short_int_Array_0[0][1] , (max (unsigned_short_int_Array_0[1][0] , unsigned_short_int_Array_0[0][0])))));
		} else {
			if (BOOL_unsigned_char_Array_0[1][0]) {
				unsigned_short_int_Array_0[1][1] = unsigned_short_int_Array_0[1][0];
			} else {
				unsigned_short_int_Array_0[1][1] = unsigned_short_int_Array_0[0][0];
			}
		}
	} else {
		unsigned_short_int_Array_0[1][1] = 50;
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 0);
	BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 0);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32766);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
	unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65534);
	unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65534);
	unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 65534);
}



void updateLastVariables() {
}

int property() {
	return ((((float_Array_0[1] >= 64.5f) ? ((float_Array_0[1] >= float_Array_0[0]) ? (unsigned_short_int_Array_0[1][1] == ((unsigned short int) (abs (max (unsigned_short_int_Array_0[0][1] , (max (unsigned_short_int_Array_0[1][0] , unsigned_short_int_Array_0[0][0]))))))) : (BOOL_unsigned_char_Array_0[1][0] ? (unsigned_short_int_Array_0[1][1] == ((unsigned short int) unsigned_short_int_Array_0[1][0])) : (unsigned_short_int_Array_0[1][1] == ((unsigned short int) unsigned_short_int_Array_0[0][0])))) : (unsigned_short_int_Array_0[1][1] == ((unsigned short int) 50))) && (signed_short_int_Array_0[1] == ((signed short int) (abs (signed_short_int_Array_0[0]))))) && (((50 >> unsigned_short_int_Array_0[0][1]) <= signed_short_int_Array_0[1]) ? (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) ((! (! BOOL_unsigned_char_Array_0[1][1])) || BOOL_unsigned_char_Array_0[0][0]))) : (BOOL_unsigned_char_Array_0[0][1] == ((unsigned char) (! BOOL_unsigned_char_Array_0[1][1]))))) && ((! BOOL_unsigned_char_Array_0[0][0]) ? ((unsigned_short_int_Array_0[0][1] >= (min (unsigned_short_int_Array_0[0][0] , signed_short_int_Array_0[1]))) ? (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) (BOOL_unsigned_char_Array_0[0][1] && BOOL_unsigned_char_Array_0[1][1]))) : (BOOL_unsigned_char_Array_0[1][0] == ((unsigned char) BOOL_unsigned_char_Array_0[1][1]))) : 1)
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
