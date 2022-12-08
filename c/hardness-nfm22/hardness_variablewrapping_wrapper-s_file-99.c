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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch99Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	unsigned char var_1_2;
	float var_1_4;
	float var_1_5;
	float var_1_6;
	unsigned char var_1_7;
	float var_1_8;
	float var_1_9;
	float var_1_10;
	signed long int var_1_11;
	signed long int var_1_12;
	signed long int var_1_13;
	signed long int var_1_14;
	signed short int var_1_15;
	signed long int var_1_16;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	255.5,
	16,
	1000000000000000.6,
	500.5,
	99999999999.5,
	1,
	127.25,
	4.8,
	0.4,
	0,
	256,
	25,
	-5,
	2,
	-50
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch99Wrapper_S
	signed long int stepLocal_0 = abs (8);
	if (((min (200 , 128)) - WrapperStruct00.var_1_2) > stepLocal_0) {
		WrapperStruct00.var_1_1 = ((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) - WrapperStruct00.var_1_6);
	} else {
		if (WrapperStruct00.var_1_7) {
			WrapperStruct00.var_1_1 = ((min (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9)) + WrapperStruct00.var_1_10);
		}
	}


	// From: Req2Batch99Wrapper_S
	if ((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6) == WrapperStruct00.var_1_1) {
		WrapperStruct00.var_1_11 = ((min (WrapperStruct00.var_1_2 , WrapperStruct00.var_1_12)) - WrapperStruct00.var_1_13);
	} else {
		WrapperStruct00.var_1_11 = WrapperStruct00.var_1_13;
	}


	// From: Req3Batch99Wrapper_S
	signed long int stepLocal_1 = WrapperStruct00.var_1_12 % WrapperStruct00.var_1_15;
	if (WrapperStruct00.var_1_9 == WrapperStruct00.var_1_4) {
		WrapperStruct00.var_1_14 = WrapperStruct00.var_1_13;
	} else {
		if (stepLocal_1 != WrapperStruct00.var_1_13) {
			WrapperStruct00.var_1_14 = (max (((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_2) + WrapperStruct00.var_1_16) , WrapperStruct00.var_1_13));
		} else {
			WrapperStruct00.var_1_14 = WrapperStruct00.var_1_16;
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 127);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483646);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483646);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_15 != 0);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= -1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 1073741823);
}



void updateLastVariables() {
}

int property() {
	return (((((min (200 , 128)) - WrapperStruct00.var_1_2) > (abs (8))) ? (WrapperStruct00.var_1_1 == ((float) ((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) - WrapperStruct00.var_1_6))) : (WrapperStruct00.var_1_7 ? (WrapperStruct00.var_1_1 == ((float) ((min (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9)) + WrapperStruct00.var_1_10))) : 1)) && (((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6) == WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_11 == ((signed long int) ((min (WrapperStruct00.var_1_2 , WrapperStruct00.var_1_12)) - WrapperStruct00.var_1_13))) : (WrapperStruct00.var_1_11 == ((signed long int) WrapperStruct00.var_1_13)))) && ((WrapperStruct00.var_1_9 == WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_14 == ((signed long int) WrapperStruct00.var_1_13)) : (((WrapperStruct00.var_1_12 % WrapperStruct00.var_1_15) != WrapperStruct00.var_1_13) ? (WrapperStruct00.var_1_14 == ((signed long int) (max (((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_2) + WrapperStruct00.var_1_16) , WrapperStruct00.var_1_13)))) : (WrapperStruct00.var_1_14 == ((signed long int) WrapperStruct00.var_1_16))))
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
