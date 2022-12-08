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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned long int var_1_1;
	unsigned long int var_1_2;
	double var_1_3;
	double var_1_6;
	double var_1_7;
	double var_1_8;
	signed char var_1_9;
	unsigned short int var_1_10;
	unsigned short int var_1_11;
	signed char var_1_12;
	signed char var_1_13;
	signed char var_1_14;
	signed long int var_1_15;
	signed long int var_1_17;
	float var_1_18;
	signed char var_1_19;
	unsigned char var_1_20;
	unsigned char var_1_21;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	5,
	8,
	9.15,
	1000000.875,
	49.25,
	-0.8,
	-10,
	58996,
	32,
	32,
	16,
	2,
	32,
	1000000000,
	-0.5,
	2,
	0,
	0
};

// Calibration values

// Last'ed variables
double last_1_WrapperStruct00_var_1_3 = 9.15;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch10Wrapper_S
	WrapperStruct00.var_1_1 = WrapperStruct00.var_1_2;


	// From: Req5Batch10Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_8;


	// From: Req6Batch10Wrapper_S
	WrapperStruct00.var_1_19 = WrapperStruct00.var_1_12;


	// From: Req7Batch10Wrapper_S
	WrapperStruct00.var_1_20 = WrapperStruct00.var_1_21;


	// From: Req3Batch10Wrapper_S
	signed char stepLocal_1 = WrapperStruct00.var_1_19;
	if ((- (WrapperStruct00.var_1_10 - WrapperStruct00.var_1_11)) >= stepLocal_1) {
		WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_12 - (max (WrapperStruct00.var_1_13 , WrapperStruct00.var_1_14)));
	} else {
		WrapperStruct00.var_1_9 = (min (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_14));
	}


	// From: Req4Batch10Wrapper_S
	if (WrapperStruct00.var_1_20) {
		WrapperStruct00.var_1_15 = (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_14);
	} else {
		WrapperStruct00.var_1_15 = (WrapperStruct00.var_1_13 - ((WrapperStruct00.var_1_17 - 4) + (abs (WrapperStruct00.var_1_11))));
	}


	// From: Req2Batch10Wrapper_S
	signed long int stepLocal_0 = WrapperStruct00.var_1_15;
	if (stepLocal_0 < WrapperStruct00.var_1_1) {
		WrapperStruct00.var_1_3 = -0.5;
	} else {
		if ((- last_1_WrapperStruct00_var_1_3) == (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7)) {
			WrapperStruct00.var_1_3 = WrapperStruct00.var_1_8;
		} else {
			WrapperStruct00.var_1_3 = WrapperStruct00.var_1_8;
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967294);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 65535);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 32767);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 126);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 126);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 536870911);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 1073741823);
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_21 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_21 <= 1);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_3 = WrapperStruct00.var_1_3;
}

int property() {
	return ((((((WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_2)) && ((WrapperStruct00.var_1_15 < WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_3 == ((double) -0.5)) : (((- last_1_WrapperStruct00_var_1_3) == (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_3 == ((double) WrapperStruct00.var_1_8)) : (WrapperStruct00.var_1_3 == ((double) WrapperStruct00.var_1_8))))) && (((- (WrapperStruct00.var_1_10 - WrapperStruct00.var_1_11)) >= WrapperStruct00.var_1_19) ? (WrapperStruct00.var_1_9 == ((signed char) (WrapperStruct00.var_1_12 - (max (WrapperStruct00.var_1_13 , WrapperStruct00.var_1_14))))) : (WrapperStruct00.var_1_9 == ((signed char) (min (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_14)))))) && (WrapperStruct00.var_1_20 ? (WrapperStruct00.var_1_15 == ((signed long int) (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_14))) : (WrapperStruct00.var_1_15 == ((signed long int) (WrapperStruct00.var_1_13 - ((WrapperStruct00.var_1_17 - 4) + (abs (WrapperStruct00.var_1_11)))))))) && (WrapperStruct00.var_1_18 == ((float) WrapperStruct00.var_1_8))) && (WrapperStruct00.var_1_19 == ((signed char) WrapperStruct00.var_1_12))) && (WrapperStruct00.var_1_20 == ((unsigned char) WrapperStruct00.var_1_21))
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
