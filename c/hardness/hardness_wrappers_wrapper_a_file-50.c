// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch50Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{1, 0}, {0, 1}
};
double double_Array_0[2][3] = {
	{1.125, 127.8, 63.5}, {256.4, 16.6, 8.875}
};
unsigned long int unsigned_long_int_Array_0[5] = {
	5, 1000, 3315050863, 1923971610, 32
};
unsigned short int unsigned_short_int_Array_0[2][2] = {
	{4, 10}, {55587, 32}
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch50Wrapper_A
	if (double_Array_0[1][1] <= double_Array_0[0][1]) {
		unsigned_short_int_Array_0[0][0] = ((unsigned_short_int_Array_0[1][0] - unsigned_short_int_Array_0[0][1]) - unsigned_short_int_Array_0[1][1]);
	}


	// From: Req4Batch50Wrapper_A
	unsigned_long_int_Array_0[0] = unsigned_long_int_Array_0[3];


	// From: Req5Batch50Wrapper_A
	double_Array_0[0][0] = double_Array_0[1][0];


	// From: Req2Batch50Wrapper_A
	if (double_Array_0[0][0] > double_Array_0[0][1]) {
		if (double_Array_0[0][0] > (double_Array_0[0][1] * (double_Array_0[1][1] - 4.5))) {
			unsigned_long_int_Array_0[1] = (unsigned_long_int_Array_0[2] - (unsigned_long_int_Array_0[3] - unsigned_long_int_Array_0[4]));
		}
	} else {
		unsigned_long_int_Array_0[1] = unsigned_long_int_Array_0[3];
	}


	// From: Req1Batch50Wrapper_A
	unsigned long int stepLocal_0 = max (unsigned_long_int_Array_0[1] , unsigned_long_int_Array_0[0]);
	if ((min ((double_Array_0[1][2] + double_Array_0[0][2]) , (double_Array_0[1][1] - double_Array_0[0][1]))) != 31.9) {
		if (stepLocal_0 < unsigned_long_int_Array_0[0]) {
			if (BOOL_unsigned_char_Array_0[0][0]) {
				BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[1][0];
			} else {
				BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[0][1];
			}
		} else {
			BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[1][0];
		}
	} else {
		BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[0][1];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= -922337.2036854766000e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854766000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
	double_Array_0[1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1] >= 0.0F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
	double_Array_0[0][2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][2] >= -922337.2036854776000e+13F && double_Array_0[0][2] <= -1.0e-20F) || (double_Array_0[0][2] <= 9223372.036854776000e+12F && double_Array_0[0][2] >= 1.0e-20F ));
	double_Array_0[1][2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][2] >= -922337.2036854776000e+13F && double_Array_0[1][2] <= -1.0e-20F) || (double_Array_0[1][2] <= 9223372.036854776000e+12F && double_Array_0[1][2] >= 1.0e-20F ));
	unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[2] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[2] <= 4294967294);
	unsigned_long_int_Array_0[3] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[3] >= 1073741823);
	assume_abort_if_not(unsigned_long_int_Array_0[3] <= 2147483647);
	unsigned_long_int_Array_0[4] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[4] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[4] <= 1073741823);
	unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 49150);
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65534);
	unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 16383);
	unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((min ((double_Array_0[1][2] + double_Array_0[0][2]) , (double_Array_0[1][1] - double_Array_0[0][1]))) != 31.9) ? (((max (unsigned_long_int_Array_0[1] , unsigned_long_int_Array_0[0])) < unsigned_long_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0][0] ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0])) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[0][1]))) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0]))) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[0][1]))) && ((double_Array_0[0][0] > double_Array_0[0][1]) ? ((double_Array_0[0][0] > (double_Array_0[0][1] * (double_Array_0[1][1] - 4.5))) ? (unsigned_long_int_Array_0[1] == ((unsigned long int) (unsigned_long_int_Array_0[2] - (unsigned_long_int_Array_0[3] - unsigned_long_int_Array_0[4])))) : 1) : (unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_long_int_Array_0[3])))) && ((double_Array_0[1][1] <= double_Array_0[0][1]) ? (unsigned_short_int_Array_0[0][0] == ((unsigned short int) ((unsigned_short_int_Array_0[1][0] - unsigned_short_int_Array_0[0][1]) - unsigned_short_int_Array_0[1][1]))) : 1)) && (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_long_int_Array_0[3]))) && (double_Array_0[0][0] == ((double) double_Array_0[1][0]))
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
