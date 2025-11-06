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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned long int var_1_1;
	unsigned short int var_1_3;
	unsigned short int var_1_4;
	signed long int var_1_5;
	unsigned short int var_1_6;
	signed char var_1_7;
	signed long int var_1_8;
	signed long int var_1_9;
	unsigned long int var_1_10;
	double var_1_11;
	double var_1_12;
	unsigned long int var_1_13;
	float var_1_14;
	float var_1_15;
};

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
struct WrapperStruct00 WrapperStruct00 = {
	0,
	2,
	32,
	256,
	10,
	2,
	1,
	2,
	32,
	4.25,
	1000000000000000.5,
	4054687923,
	100000000.5,
	4.8
};

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct00_var_1_1 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch6Wrapper_S
	if ((WrapperStruct00.var_1_7 >> (WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9)) >= (max ((last_1_WrapperStruct00_var_1_1 + WrapperStruct00.var_1_5) , WrapperStruct00.var_1_3))) {
		WrapperStruct00.var_1_6 = WrapperStruct00.var_1_8;
	} else {
		if (WrapperStruct00.var_1_4 < 64) {
			WrapperStruct00.var_1_6 = WrapperStruct00.var_1_7;
		}
	}


	// From: Req3Batch6Wrapper_S
	if ((- WrapperStruct00.var_1_11) != WrapperStruct00.var_1_12) {
		WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_13 - (WrapperStruct00.var_1_4 + (min (WrapperStruct00.var_1_6 , WrapperStruct00.var_1_3))));
	}


	// From: Req1Batch6Wrapper_S
	unsigned long int stepLocal_1 = (max (WrapperStruct00.var_1_10 , WrapperStruct00.var_1_6)) / WrapperStruct00.var_1_4;
	unsigned long int stepLocal_0 = WrapperStruct00.var_1_10;
	if (stepLocal_1 > WrapperStruct00.var_1_10) {
		if (stepLocal_0 == WrapperStruct00.var_1_6) {
			WrapperStruct00.var_1_1 = 1000000000u;
		} else {
			WrapperStruct00.var_1_1 = 128u;
		}
	}


	// From: Req4Batch6Wrapper_S
	signed long int stepLocal_2 = WrapperStruct00.var_1_9;
	if (stepLocal_2 == (WrapperStruct00.var_1_4 | -5)) {
		WrapperStruct00.var_1_14 = (max (1.5f , WrapperStruct00.var_1_15));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 65535);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 65535);
	assume_abort_if_not(WrapperStruct00.var_1_4 != 0);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 127);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 3);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 3);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 4294967294);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
}

int property(void) {
	return ((((((max (WrapperStruct00.var_1_10 , WrapperStruct00.var_1_6)) / WrapperStruct00.var_1_4) > WrapperStruct00.var_1_10) ? ((WrapperStruct00.var_1_10 == WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_1 == ((unsigned long int) 1000000000u)) : (WrapperStruct00.var_1_1 == ((unsigned long int) 128u))) : 1) && (((WrapperStruct00.var_1_7 >> (WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9)) >= (max ((last_1_WrapperStruct00_var_1_1 + WrapperStruct00.var_1_5) , WrapperStruct00.var_1_3))) ? (WrapperStruct00.var_1_6 == ((unsigned short int) WrapperStruct00.var_1_8)) : ((WrapperStruct00.var_1_4 < 64) ? (WrapperStruct00.var_1_6 == ((unsigned short int) WrapperStruct00.var_1_7)) : 1))) && (((- WrapperStruct00.var_1_11) != WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_10 == ((unsigned long int) (WrapperStruct00.var_1_13 - (WrapperStruct00.var_1_4 + (min (WrapperStruct00.var_1_6 , WrapperStruct00.var_1_3)))))) : 1)) && ((WrapperStruct00.var_1_9 == (WrapperStruct00.var_1_4 | -5)) ? (WrapperStruct00.var_1_14 == ((float) (max (1.5f , WrapperStruct00.var_1_15)))) : 1)
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
