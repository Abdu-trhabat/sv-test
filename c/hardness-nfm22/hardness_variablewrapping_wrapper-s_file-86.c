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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch86Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	unsigned char var_1_2;
	signed short int var_1_3;
	signed short int var_1_4;
	signed short int var_1_5;
	signed short int var_1_6;
	float var_1_7;
	float var_1_8;
	float var_1_9;
	float var_1_10;
	unsigned short int var_1_11;
	unsigned char var_1_12;
	unsigned short int var_1_13;
	unsigned short int var_1_14;
	unsigned short int var_1_15;
	unsigned short int var_1_16;
	unsigned short int var_1_17;
	unsigned long int var_1_18;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	0,
	0,
	2,
	256,
	-256,
	2,
	255.8,
	127.8,
	128.5,
	499.3,
	10,
	1,
	8,
	256,
	1,
	16,
	57705,
	64
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch86Wrapper_S
	if (! WrapperStruct00.var_1_2) {
		WrapperStruct00.var_1_1 = (min ((WrapperStruct00.var_1_3 + (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5)) , WrapperStruct00.var_1_6));
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
	}


	// From: Req2Batch86Wrapper_S
	signed short int stepLocal_0 = WrapperStruct00.var_1_5;
	if (stepLocal_0 > 2) {
		WrapperStruct00.var_1_7 = ((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9) - WrapperStruct00.var_1_10);
	}


	// From: Req4Batch86Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_17;


	// From: Req3Batch86Wrapper_S
	if (WrapperStruct00.var_1_2 && WrapperStruct00.var_1_12) {
		WrapperStruct00.var_1_11 = (WrapperStruct00.var_1_13 + (min ((max (WrapperStruct00.var_1_14 , WrapperStruct00.var_1_15)) , WrapperStruct00.var_1_16)));
	} else {
		if (WrapperStruct00.var_1_3 < (200 * (-25 << WrapperStruct00.var_1_18))) {
			WrapperStruct00.var_1_11 = (abs (max ((WrapperStruct00.var_1_17 - 10000) , (min (WrapperStruct00.var_1_15 , WrapperStruct00.var_1_14)))));
		} else {
			WrapperStruct00.var_1_11 = (WrapperStruct00.var_1_17 - WrapperStruct00.var_1_15);
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 16383);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -8191);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 8192);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -8191);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 8191);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 32766);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 32767);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 32767);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 32767);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 32767);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 65534);
}



void updateLastVariables() {
}

int property() {
	return ((((! WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_1 == ((signed short int) (min ((WrapperStruct00.var_1_3 + (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5)) , WrapperStruct00.var_1_6)))) : (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_5))) && ((WrapperStruct00.var_1_5 > 2) ? (WrapperStruct00.var_1_7 == ((float) ((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9) - WrapperStruct00.var_1_10))) : 1)) && ((WrapperStruct00.var_1_2 && WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_11 == ((unsigned short int) (WrapperStruct00.var_1_13 + (min ((max (WrapperStruct00.var_1_14 , WrapperStruct00.var_1_15)) , WrapperStruct00.var_1_16))))) : ((WrapperStruct00.var_1_3 < (200 * (-25 << WrapperStruct00.var_1_18))) ? (WrapperStruct00.var_1_11 == ((unsigned short int) (abs (max ((WrapperStruct00.var_1_17 - 10000) , (min (WrapperStruct00.var_1_15 , WrapperStruct00.var_1_14))))))) : (WrapperStruct00.var_1_11 == ((unsigned short int) (WrapperStruct00.var_1_17 - WrapperStruct00.var_1_15)))))) && (WrapperStruct00.var_1_18 == ((unsigned long int) WrapperStruct00.var_1_17))
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
