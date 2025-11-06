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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	float var_1_2;
	float var_1_3;
	float var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	double var_1_8;
	unsigned char var_1_9;
	unsigned short int var_1_10;
	unsigned short int var_1_11;
	signed long int var_1_12;
	unsigned char var_1_13;
	float var_1_14;
	float var_1_15;
	signed char var_1_16;
	signed char var_1_17;
	signed char var_1_18;
	unsigned short int var_1_19;
	signed char var_1_20;
	unsigned short int var_1_21;
	unsigned short int var_1_22;
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
	7.25,
	1.8199999999999998,
	0.0,
	99999999999.35,
	0,
	1,
	0,
	100.5,
	1,
	56793,
	8,
	-50,
	0,
	9.25,
	49.6,
	32,
	8,
	32,
	64,
	100,
	58395,
	32
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch125Wrapper_S
	WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_2 - (WrapperStruct00.var_1_4 + 32.4f));


	// From: Req2Batch125Wrapper_S
	WrapperStruct00.var_1_5 = (WrapperStruct00.var_1_6 && (! WrapperStruct00.var_1_7));


	// From: Req3Batch125Wrapper_S
	WrapperStruct00.var_1_8 = WrapperStruct00.var_1_3;


	// From: Req4Batch125Wrapper_S
	signed long int stepLocal_0 = WrapperStruct00.var_1_12;
	if ((WrapperStruct00.var_1_10 - WrapperStruct00.var_1_11) < stepLocal_0) {
		WrapperStruct00.var_1_9 = WrapperStruct00.var_1_13;
	}


	// From: Req5Batch125Wrapper_S
	WrapperStruct00.var_1_14 = (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_15);


	// From: Req6Batch125Wrapper_S
	if ((WrapperStruct00.var_1_14 * WrapperStruct00.var_1_2) >= WrapperStruct00.var_1_3) {
		WrapperStruct00.var_1_16 = ((WrapperStruct00.var_1_17 + WrapperStruct00.var_1_18) - 32);
	}


	// From: Req7Batch125Wrapper_S
	if (WrapperStruct00.var_1_2 > WrapperStruct00.var_1_8) {
		if (! (WrapperStruct00.var_1_16 < WrapperStruct00.var_1_20)) {
			WrapperStruct00.var_1_19 = (max ((min (8 , (WrapperStruct00.var_1_21 - 8))) , WrapperStruct00.var_1_17));
		}
	} else {
		WrapperStruct00.var_1_19 = 50;
	}


	// From: Req8Batch125Wrapper_S
	WrapperStruct00.var_1_22 = WrapperStruct00.var_1_11;
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= 0.0F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= 6917529.027641074000e+12F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 65535);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 32767);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 0);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 63);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 63);
	WrapperStruct00.var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_20 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_20 <= 127);
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_21 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_21 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((WrapperStruct00.var_1_1 == ((float) (WrapperStruct00.var_1_2 - (WrapperStruct00.var_1_4 + 32.4f)))) && (WrapperStruct00.var_1_5 == ((unsigned char) (WrapperStruct00.var_1_6 && (! WrapperStruct00.var_1_7))))) && (WrapperStruct00.var_1_8 == ((double) WrapperStruct00.var_1_3))) && (((WrapperStruct00.var_1_10 - WrapperStruct00.var_1_11) < WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_9 == ((unsigned char) WrapperStruct00.var_1_13)) : 1)) && (WrapperStruct00.var_1_14 == ((float) (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_15)))) && (((WrapperStruct00.var_1_14 * WrapperStruct00.var_1_2) >= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_16 == ((signed char) ((WrapperStruct00.var_1_17 + WrapperStruct00.var_1_18) - 32))) : 1)) && ((WrapperStruct00.var_1_2 > WrapperStruct00.var_1_8) ? ((! (WrapperStruct00.var_1_16 < WrapperStruct00.var_1_20)) ? (WrapperStruct00.var_1_19 == ((unsigned short int) (max ((min (8 , (WrapperStruct00.var_1_21 - 8))) , WrapperStruct00.var_1_17)))) : 1) : (WrapperStruct00.var_1_19 == ((unsigned short int) 50)))) && (WrapperStruct00.var_1_22 == ((unsigned short int) WrapperStruct00.var_1_11))
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
