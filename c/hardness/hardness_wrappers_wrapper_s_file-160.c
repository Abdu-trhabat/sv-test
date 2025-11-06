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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch160Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed char var_1_1;
	signed long int var_1_2;
	signed long int var_1_3;
	signed long int var_1_4;
	signed char var_1_5;
	signed char var_1_6;
	signed char var_1_7;
	signed char var_1_8;
	signed char var_1_9;
	double var_1_10;
	signed char var_1_11;
	signed char var_1_12;
	double var_1_13;
	double var_1_14;
	signed long int var_1_15;
	signed long int var_1_16;
	signed long int var_1_17;
	float var_1_18;
	unsigned char var_1_19;
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
	-128,
	8,
	1,
	2,
	16,
	1,
	10,
	5,
	4,
	200.75,
	-5,
	1,
	1.5,
	127.5,
	-128,
	1350008661,
	1785639034,
	16.2,
	1
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch160Wrapper_S
	signed long int stepLocal_0 = WrapperStruct00.var_1_2;
	if (stepLocal_0 >= (WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) {
		WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_5 - ((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7) + (max (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9))));
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
	}


	// From: Req2Batch160Wrapper_S
	signed char stepLocal_1 = WrapperStruct00.var_1_6;
	if (stepLocal_1 >= (WrapperStruct00.var_1_9 / (min (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_12)))) {
		WrapperStruct00.var_1_10 = (max (WrapperStruct00.var_1_13 , 5.8));
	} else {
		WrapperStruct00.var_1_10 = WrapperStruct00.var_1_14;
	}


	// From: Req3Batch160Wrapper_S
	signed long int stepLocal_2 = WrapperStruct00.var_1_12 * WrapperStruct00.var_1_11;
	if (stepLocal_2 == WrapperStruct00.var_1_9) {
		WrapperStruct00.var_1_15 = (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_11);
	} else {
		WrapperStruct00.var_1_15 = (WrapperStruct00.var_1_8 - ((min (WrapperStruct00.var_1_16 , WrapperStruct00.var_1_17)) - WrapperStruct00.var_1_6));
	}


	// From: Req4Batch160Wrapper_S
	signed long int stepLocal_3 = WrapperStruct00.var_1_17 ^ WrapperStruct00.var_1_9;
	if ((WrapperStruct00.var_1_7 << WrapperStruct00.var_1_16) != stepLocal_3) {
		if (WrapperStruct00.var_1_19) {
			WrapperStruct00.var_1_18 = WrapperStruct00.var_1_14;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 126);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 32);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 31);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 63);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 63);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
	assume_abort_if_not(WrapperStruct00.var_1_11 != 0);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 127);
	assume_abort_if_not(WrapperStruct00.var_1_12 != 0);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 2147483646);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 2147483646);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_2 >= (WrapperStruct00.var_1_3 + WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_1 == ((signed char) (WrapperStruct00.var_1_5 - ((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7) + (max (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9)))))) : (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_8))) && ((WrapperStruct00.var_1_6 >= (WrapperStruct00.var_1_9 / (min (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_12)))) ? (WrapperStruct00.var_1_10 == ((double) (max (WrapperStruct00.var_1_13 , 5.8)))) : (WrapperStruct00.var_1_10 == ((double) WrapperStruct00.var_1_14)))) && (((WrapperStruct00.var_1_12 * WrapperStruct00.var_1_11) == WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_15 == ((signed long int) (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_11))) : (WrapperStruct00.var_1_15 == ((signed long int) (WrapperStruct00.var_1_8 - ((min (WrapperStruct00.var_1_16 , WrapperStruct00.var_1_17)) - WrapperStruct00.var_1_6)))))) && (((WrapperStruct00.var_1_7 << WrapperStruct00.var_1_16) != (WrapperStruct00.var_1_17 ^ WrapperStruct00.var_1_9)) ? (WrapperStruct00.var_1_19 ? (WrapperStruct00.var_1_18 == ((float) WrapperStruct00.var_1_14)) : 1) : 1)
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
