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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch82Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	unsigned char var_1_2;
	float var_1_3;
	float var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_14;
	unsigned char var_1_15;
	double var_1_16;
	unsigned char var_1_17;
	double var_1_18;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	128.75,
	1,
	63.5,
	255.5,
	32,
	25,
	128,
	16,
	2,
	5,
	10,
	3.75,
	0,
	255.5
};

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_5 = 32;
unsigned char last_1_WrapperStruct00_var_1_12 = 2;
unsigned char last_1_WrapperStruct00_var_1_17 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch82Wrapper_S
	signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_17 | last_1_WrapperStruct00_var_1_12;
	if ((last_1_WrapperStruct00_var_1_5 / -2) >= stepLocal_0) {
		WrapperStruct00.var_1_5 = (abs (WrapperStruct00.var_1_9));
	} else {
		WrapperStruct00.var_1_5 = (WrapperStruct00.var_1_10 - (abs (WrapperStruct00.var_1_11)));
	}


	// From: Req1Batch82Wrapper_S
	if (! WrapperStruct00.var_1_2) {
		if (WrapperStruct00.var_1_2) {
			WrapperStruct00.var_1_1 = (max (WrapperStruct00.var_1_3 , WrapperStruct00.var_1_4));
		}
	}


	// From: Req4Batch82Wrapper_S
	WrapperStruct00.var_1_16 = WrapperStruct00.var_1_4;


	// From: Req5Batch82Wrapper_S
	WrapperStruct00.var_1_17 = WrapperStruct00.var_1_9;


	// From: Req6Batch82Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_3;


	// From: Req3Batch82Wrapper_S
	unsigned char stepLocal_1 = WrapperStruct00.var_1_9;
	if ((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_11) >= stepLocal_1) {
		if ((max (WrapperStruct00.var_1_4 , (WrapperStruct00.var_1_1 * WrapperStruct00.var_1_3))) <= WrapperStruct00.var_1_1) {
			WrapperStruct00.var_1_12 = (max (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_14));
		} else {
			if (WrapperStruct00.var_1_2) {
				WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_15);
			}
		}
	} else {
		WrapperStruct00.var_1_12 = WrapperStruct00.var_1_9;
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 254);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 254);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_5 = WrapperStruct00.var_1_5;
	last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
	last_1_WrapperStruct00_var_1_17 = WrapperStruct00.var_1_17;
}

int property() {
	return ((((((! WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((float) (max (WrapperStruct00.var_1_3 , WrapperStruct00.var_1_4)))) : 1) : 1) && (((last_1_WrapperStruct00_var_1_5 / -2) >= (last_1_WrapperStruct00_var_1_17 | last_1_WrapperStruct00_var_1_12)) ? (WrapperStruct00.var_1_5 == ((unsigned char) (abs (WrapperStruct00.var_1_9)))) : (WrapperStruct00.var_1_5 == ((unsigned char) (WrapperStruct00.var_1_10 - (abs (WrapperStruct00.var_1_11))))))) && (((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_11) >= WrapperStruct00.var_1_9) ? (((max (WrapperStruct00.var_1_4 , (WrapperStruct00.var_1_1 * WrapperStruct00.var_1_3))) <= WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_12 == ((unsigned char) (max (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_14)))) : (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_12 == ((unsigned char) (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_15))) : 1)) : (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_9)))) && (WrapperStruct00.var_1_16 == ((double) WrapperStruct00.var_1_4))) && (WrapperStruct00.var_1_17 == ((unsigned char) WrapperStruct00.var_1_9))) && (WrapperStruct00.var_1_18 == ((double) WrapperStruct00.var_1_3))
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
