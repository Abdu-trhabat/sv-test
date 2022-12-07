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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86Wrapper_A.c", 13, "reach_error"); }
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
float float_Array_0[2][2] = {
	{128.5, 499.3}, {127.8, 255.8}
};
signed short int signed_short_int_Array_0[5] = {
	2, -256, 256, 2, 0
};
unsigned long int unsigned_long_int_Array_0[1] = {
	64
};
unsigned short int unsigned_short_int_Array_0[2][3] = {
	{8, 16, 256}, {10, 57705, 1}
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch86Wrapper_A
	if (! BOOL_unsigned_char_Array_0[1]) {
		signed_short_int_Array_0[4] = (min ((signed_short_int_Array_0[3] + (signed_short_int_Array_0[2] + signed_short_int_Array_0[1])) , signed_short_int_Array_0[0]));
	} else {
		signed_short_int_Array_0[4] = signed_short_int_Array_0[1];
	}


	// From: Req2Batch86Wrapper_A
	signed short int stepLocal_0 = signed_short_int_Array_0[1];
	if (stepLocal_0 > 2) {
		float_Array_0[1][1] = ((float_Array_0[1][0] + float_Array_0[0][0]) - float_Array_0[0][1]);
	}


	// From: Req4Batch86Wrapper_A
	unsigned_long_int_Array_0[0] = unsigned_short_int_Array_0[1][1];


	// From: Req3Batch86Wrapper_A
	if (BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) {
		unsigned_short_int_Array_0[1][0] = (unsigned_short_int_Array_0[0][0] + (min ((max (unsigned_short_int_Array_0[0][2] , unsigned_short_int_Array_0[1][2])) , unsigned_short_int_Array_0[0][1])));
	} else {
		if (signed_short_int_Array_0[3] < (200 * (-25 << unsigned_long_int_Array_0[0]))) {
			unsigned_short_int_Array_0[1][0] = (abs (max ((unsigned_short_int_Array_0[1][1] - 10000) , (min (unsigned_short_int_Array_0[1][2] , unsigned_short_int_Array_0[0][2])))));
		} else {
			unsigned_short_int_Array_0[1][0] = (unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[1][2]);
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
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= 0.0F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 4611686.018427382800e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 4611686.018427382800e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= 0.0F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854765600e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -8191);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 8191);
	signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2] >= -8191);
	assume_abort_if_not(signed_short_int_Array_0[2] <= 8192);
	signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[3] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[3] <= 16383);
	unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 32767);
	unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
	unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 65534);
	unsigned_short_int_Array_0[0][2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][2] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][2] <= 32767);
	unsigned_short_int_Array_0[1][2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][2] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][2] <= 32767);
}



void updateLastVariables() {
}

int property() {
	return ((((! BOOL_unsigned_char_Array_0[1]) ? (signed_short_int_Array_0[4] == ((signed short int) (min ((signed_short_int_Array_0[3] + (signed_short_int_Array_0[2] + signed_short_int_Array_0[1])) , signed_short_int_Array_0[0])))) : (signed_short_int_Array_0[4] == ((signed short int) signed_short_int_Array_0[1]))) && ((signed_short_int_Array_0[1] > 2) ? (float_Array_0[1][1] == ((float) ((float_Array_0[1][0] + float_Array_0[0][0]) - float_Array_0[0][1]))) : 1)) && ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? (unsigned_short_int_Array_0[1][0] == ((unsigned short int) (unsigned_short_int_Array_0[0][0] + (min ((max (unsigned_short_int_Array_0[0][2] , unsigned_short_int_Array_0[1][2])) , unsigned_short_int_Array_0[0][1]))))) : ((signed_short_int_Array_0[3] < (200 * (-25 << unsigned_long_int_Array_0[0]))) ? (unsigned_short_int_Array_0[1][0] == ((unsigned short int) (abs (max ((unsigned_short_int_Array_0[1][1] - 10000) , (min (unsigned_short_int_Array_0[1][2] , unsigned_short_int_Array_0[0][2]))))))) : (unsigned_short_int_Array_0[1][0] == ((unsigned short int) (unsigned_short_int_Array_0[1][1] - unsigned_short_int_Array_0[1][2])))))) && (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_short_int_Array_0[1][1]))
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
