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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch173Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	float var_1_2;
	float var_1_3;
	signed char var_1_4;
	signed char var_1_5;
	unsigned char var_1_6;
	signed long int var_1_7;
	signed long int var_1_8;
	double var_1_9;
	double var_1_10;
	double var_1_11;
	double var_1_12;
	unsigned long int var_1_13;
	unsigned char var_1_14;
	unsigned long int var_1_15;
	unsigned long int var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
	unsigned char var_1_20;
	signed char var_1_21;
	float var_1_22;
	signed char var_1_23;
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
	4.5,
	100000000.75,
	0.29600000000000004,
	5,
	2,
	5,
	1,
	2,
	15.8,
	5.1,
	2.8,
	15.2,
	1000000000,
	1,
	2979358829,
	1244879080,
	1,
	0,
	0,
	0,
	-4,
	16.4,
	2
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch173Wrapper_S
	if (WrapperStruct00.var_1_2 < WrapperStruct00.var_1_3) {
		if (((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) << WrapperStruct00.var_1_6) < ((~ WrapperStruct00.var_1_7) / WrapperStruct00.var_1_8)) {
			WrapperStruct00.var_1_1 = (min ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) , (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12)));
		}
	}


	// From: Req3Batch173Wrapper_S
	if (WrapperStruct00.var_1_14) {
		WrapperStruct00.var_1_17 = (WrapperStruct00.var_1_18 || WrapperStruct00.var_1_19);
	} else {
		WrapperStruct00.var_1_17 = (WrapperStruct00.var_1_20 || WrapperStruct00.var_1_19);
	}


	// From: Req4Batch173Wrapper_S
	WrapperStruct00.var_1_21 = WrapperStruct00.var_1_6;


	// From: Req5Batch173Wrapper_S
	WrapperStruct00.var_1_22 = WrapperStruct00.var_1_10;


	// From: Req6Batch173Wrapper_S
	WrapperStruct00.var_1_23 = WrapperStruct00.var_1_6;


	// From: Req2Batch173Wrapper_S
	if ((WrapperStruct00.var_1_12 < WrapperStruct00.var_1_10) || WrapperStruct00.var_1_17) {
		if (WrapperStruct00.var_1_17 || (WrapperStruct00.var_1_9 <= WrapperStruct00.var_1_22)) {
			WrapperStruct00.var_1_13 = (WrapperStruct00.var_1_15 - (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_4));
		}
	} else {
		WrapperStruct00.var_1_13 = WrapperStruct00.var_1_15;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 127);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 24);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 4294967294);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 2147483647);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 1);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 1);
	WrapperStruct00.var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_20 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_20 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((WrapperStruct00.var_1_2 < WrapperStruct00.var_1_3) ? ((((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) << WrapperStruct00.var_1_6) < ((~ WrapperStruct00.var_1_7) / WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_1 == ((double) (min ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) , (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12))))) : 1) : 1) && (((WrapperStruct00.var_1_12 < WrapperStruct00.var_1_10) || WrapperStruct00.var_1_17) ? ((WrapperStruct00.var_1_17 || (WrapperStruct00.var_1_9 <= WrapperStruct00.var_1_22)) ? (WrapperStruct00.var_1_13 == ((unsigned long int) (WrapperStruct00.var_1_15 - (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_4)))) : 1) : (WrapperStruct00.var_1_13 == ((unsigned long int) WrapperStruct00.var_1_15)))) && (WrapperStruct00.var_1_14 ? (WrapperStruct00.var_1_17 == ((unsigned char) (WrapperStruct00.var_1_18 || WrapperStruct00.var_1_19))) : (WrapperStruct00.var_1_17 == ((unsigned char) (WrapperStruct00.var_1_20 || WrapperStruct00.var_1_19))))) && (WrapperStruct00.var_1_21 == ((signed char) WrapperStruct00.var_1_6))) && (WrapperStruct00.var_1_22 == ((float) WrapperStruct00.var_1_10))) && (WrapperStruct00.var_1_23 == ((signed char) WrapperStruct00.var_1_6))
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
