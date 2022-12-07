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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch77Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[1] = {
	10000000000000.375
};
float float_Array_0[5] = {
	0.0, 49.5, 63.8, 31.875, 255.25
};
signed short int signed_short_int_Array_0[1] = {
	-8
};
unsigned short int unsigned_short_int_Array_0[2][3] = {
	{5, 28896, 60871}, {4, 1, 50}
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch77Wrapper_A
	if (unsigned_short_int_Array_0[0][0] > unsigned_short_int_Array_0[1][1]) {
		float_Array_0[2] = (abs (float_Array_0[1]));
	} else {
		float_Array_0[2] = ((max (float_Array_0[3] , float_Array_0[4])) - (float_Array_0[0] - 3.4f));
	}


	// From: Req3Batch77Wrapper_A
	unsigned short int stepLocal_0 = unsigned_short_int_Array_0[0][1];
	if (stepLocal_0 <= unsigned_short_int_Array_0[1][1]) {
		if ((max (float_Array_0[2] , (float_Array_0[0] / double_Array_0[0]))) > (min (float_Array_0[3] , float_Array_0[2]))) {
			signed_short_int_Array_0[0] = unsigned_short_int_Array_0[0][0];
		}
	} else {
		signed_short_int_Array_0[0] = unsigned_short_int_Array_0[0][0];
	}


	// From: Req4Batch77Wrapper_A
	if (unsigned_short_int_Array_0[0][1] > (signed_short_int_Array_0[0] * (max (unsigned_short_int_Array_0[1][1] , unsigned_short_int_Array_0[0][0])))) {
		if (BOOL_unsigned_char_Array_0[0] || BOOL_unsigned_char_Array_0[1]) {
			unsigned_short_int_Array_0[1][0] = unsigned_short_int_Array_0[0][2];
		} else {
			unsigned_short_int_Array_0[1][0] = unsigned_short_int_Array_0[0][0];
		}
	} else {
		unsigned_short_int_Array_0[1][0] = unsigned_short_int_Array_0[0][1];
	}


	// From: Req1Batch77Wrapper_A
	if (float_Array_0[2] != float_Array_0[2]) {
		unsigned_short_int_Array_0[1][2] = (unsigned_short_int_Array_0[0][2] - (min (unsigned_short_int_Array_0[1][1] , (unsigned_short_int_Array_0[0][1] - unsigned_short_int_Array_0[0][0]))));
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
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	assume_abort_if_not(double_Array_0[0] != 0.0F);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= 4611686.018427382800e+12F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854765600e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[3] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[3] >= 0.0F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 9223372.036854765600e+12F && float_Array_0[3] >= 1.0e-20F ));
	float_Array_0[4] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[4] >= 0.0F && float_Array_0[4] <= -1.0e-20F) || (float_Array_0[4] <= 9223372.036854765600e+12F && float_Array_0[4] >= 1.0e-20F ));
	unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 16383);
	unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 16383);
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
	unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 32767);
	unsigned_short_int_Array_0[0][2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][2] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[0][2] <= 65534);
}



void updateLastVariables() {
}

int property() {
	return ((((float_Array_0[2] != float_Array_0[2]) ? (unsigned_short_int_Array_0[1][2] == ((unsigned short int) (unsigned_short_int_Array_0[0][2] - (min (unsigned_short_int_Array_0[1][1] , (unsigned_short_int_Array_0[0][1] - unsigned_short_int_Array_0[0][0])))))) : 1) && ((unsigned_short_int_Array_0[0][0] > unsigned_short_int_Array_0[1][1]) ? (float_Array_0[2] == ((float) (abs (float_Array_0[1])))) : (float_Array_0[2] == ((float) ((max (float_Array_0[3] , float_Array_0[4])) - (float_Array_0[0] - 3.4f)))))) && ((unsigned_short_int_Array_0[0][1] <= unsigned_short_int_Array_0[1][1]) ? (((max (float_Array_0[2] , (float_Array_0[0] / double_Array_0[0]))) > (min (float_Array_0[3] , float_Array_0[2]))) ? (signed_short_int_Array_0[0] == ((signed short int) unsigned_short_int_Array_0[0][0])) : 1) : (signed_short_int_Array_0[0] == ((signed short int) unsigned_short_int_Array_0[0][0])))) && ((unsigned_short_int_Array_0[0][1] > (signed_short_int_Array_0[0] * (max (unsigned_short_int_Array_0[1][1] , unsigned_short_int_Array_0[0][0])))) ? ((BOOL_unsigned_char_Array_0[0] || BOOL_unsigned_char_Array_0[1]) ? (unsigned_short_int_Array_0[1][0] == ((unsigned short int) unsigned_short_int_Array_0[0][2])) : (unsigned_short_int_Array_0[1][0] == ((unsigned short int) unsigned_short_int_Array_0[0][0]))) : (unsigned_short_int_Array_0[1][0] == ((unsigned short int) unsigned_short_int_Array_0[0][1])))
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
