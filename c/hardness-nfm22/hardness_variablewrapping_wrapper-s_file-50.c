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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch50Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	double var_1_2;
	double var_1_3;
	double var_1_4;
	double var_1_5;
	unsigned char var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	signed short int var_1_12;
	signed short int var_1_13;
	signed short int var_1_14;
	signed short int var_1_15;
	signed short int var_1_16;
	signed short int var_1_17;
	signed long int var_1_18;
	signed long int var_1_19;
	signed long int var_1_20;
	signed long int var_1_21;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	1,
	8.875,
	63.5,
	16.6,
	127.8,
	1,
	0,
	0,
	-2,
	64,
	2,
	4,
	26204,
	5,
	-5,
	100,
	0,
	128
};

// Calibration values

// Last'ed variables
signed long int last_1_WrapperStruct00_var_1_18 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch50Wrapper_S
	signed long int stepLocal_1 = last_1_WrapperStruct00_var_1_18;
	if (stepLocal_1 >= 0) {
		WrapperStruct00.var_1_12 = (max (WrapperStruct00.var_1_13 , WrapperStruct00.var_1_14));
	} else {
		WrapperStruct00.var_1_12 = (max (WrapperStruct00.var_1_13 , (WrapperStruct00.var_1_15 - (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_17))));
	}


	// From: Req3Batch50Wrapper_S
	signed long int stepLocal_3 = WrapperStruct00.var_1_15 - WrapperStruct00.var_1_19;
	signed short int stepLocal_2 = WrapperStruct00.var_1_12;
	if (WrapperStruct00.var_1_12 > stepLocal_3) {
		if (WrapperStruct00.var_1_13 < stepLocal_2) {
			WrapperStruct00.var_1_18 = ((WrapperStruct00.var_1_17 + (WrapperStruct00.var_1_16 + WrapperStruct00.var_1_20)) - WrapperStruct00.var_1_21);
		}
	} else {
		WrapperStruct00.var_1_18 = WrapperStruct00.var_1_14;
	}


	// From: Req1Batch50Wrapper_S
	signed long int stepLocal_0 = max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_18);
	if ((min ((WrapperStruct00.var_1_2 + WrapperStruct00.var_1_3) , (WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5))) != 31.9) {
		if (stepLocal_0 < WrapperStruct00.var_1_18) {
			if (WrapperStruct00.var_1_9) {
				WrapperStruct00.var_1_1 = WrapperStruct00.var_1_10;
			} else {
				WrapperStruct00.var_1_1 = WrapperStruct00.var_1_10;
			}
		} else {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_10;
		}
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_11;
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 0);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 32766);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 32766);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 32766);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 16383);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 32766);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 16383);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 2147483647);
	WrapperStruct00.var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_20 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_20 <= 536870911);
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_21 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_21 <= 2147483646);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_18 = WrapperStruct00.var_1_18;
}

int property() {
	return ((((min ((WrapperStruct00.var_1_2 + WrapperStruct00.var_1_3) , (WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5))) != 31.9) ? (((max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_18)) < WrapperStruct00.var_1_18) ? (WrapperStruct00.var_1_9 ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_10)) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_11))) && ((last_1_WrapperStruct00_var_1_18 >= 0) ? (WrapperStruct00.var_1_12 == ((signed short int) (max (WrapperStruct00.var_1_13 , WrapperStruct00.var_1_14)))) : (WrapperStruct00.var_1_12 == ((signed short int) (max (WrapperStruct00.var_1_13 , (WrapperStruct00.var_1_15 - (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_17)))))))) && ((WrapperStruct00.var_1_12 > (WrapperStruct00.var_1_15 - WrapperStruct00.var_1_19)) ? ((WrapperStruct00.var_1_13 < WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_18 == ((signed long int) ((WrapperStruct00.var_1_17 + (WrapperStruct00.var_1_16 + WrapperStruct00.var_1_20)) - WrapperStruct00.var_1_21))) : 1) : (WrapperStruct00.var_1_18 == ((signed long int) WrapperStruct00.var_1_14)))
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
