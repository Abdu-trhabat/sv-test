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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch190Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	unsigned char var_1_2;
	unsigned char var_1_3;
	unsigned char var_1_4;
	unsigned short int var_1_5;
	unsigned short int var_1_6;
	signed short int var_1_7;
	double var_1_8;
	double var_1_10;
	double var_1_11;
	signed long int var_1_12;
	signed char var_1_13;
	signed long int var_1_14;
	float var_1_15;
	unsigned long int var_1_16;
	signed short int var_1_17;
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
	64,
	0,
	0,
	1,
	256,
	2,
	16,
	24.5,
	64.75,
	9999.2,
	-64,
	100,
	256,
	-0.75,
	16,
	-4
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch190Wrapper_S
	unsigned char stepLocal_0 = WrapperStruct00.var_1_3 && (WrapperStruct00.var_1_5 <= WrapperStruct00.var_1_6);
	if (WrapperStruct00.var_1_2 || stepLocal_0) {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
	} else {
		if (WrapperStruct00.var_1_3) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
		} else {
			WrapperStruct00.var_1_1 = -32;
		}
	}


	// From: Req3Batch190Wrapper_S
	signed long int stepLocal_1 = -5 % WrapperStruct00.var_1_13;
	if (! WrapperStruct00.var_1_4) {
		if (stepLocal_1 == (max (10 , (WrapperStruct00.var_1_7 / WrapperStruct00.var_1_14)))) {
			WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_5);
		}
	}


	// From: Req4Batch190Wrapper_S
	WrapperStruct00.var_1_15 = WrapperStruct00.var_1_11;


	// From: Req5Batch190Wrapper_S
	WrapperStruct00.var_1_16 = WrapperStruct00.var_1_12;


	// From: Req6Batch190Wrapper_S
	WrapperStruct00.var_1_17 = WrapperStruct00.var_1_7;


	// From: Req2Batch190Wrapper_S
	if (! (WrapperStruct00.var_1_16 > (WrapperStruct00.var_1_12 + 1))) {
		if (8.5f <= WrapperStruct00.var_1_15) {
			WrapperStruct00.var_1_8 = (max (WrapperStruct00.var_1_10 , WrapperStruct00.var_1_11));
		} else {
			WrapperStruct00.var_1_8 = WrapperStruct00.var_1_10;
		}
	} else {
		WrapperStruct00.var_1_8 = WrapperStruct00.var_1_10;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 65535);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 65535);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 32766);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
	assume_abort_if_not(WrapperStruct00.var_1_13 != 0);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_14 != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((WrapperStruct00.var_1_2 || (WrapperStruct00.var_1_3 && (WrapperStruct00.var_1_5 <= WrapperStruct00.var_1_6))) ? (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_3 ? (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_1 == ((signed short int) -32)))) && ((! (WrapperStruct00.var_1_16 > (WrapperStruct00.var_1_12 + 1))) ? ((8.5f <= WrapperStruct00.var_1_15) ? (WrapperStruct00.var_1_8 == ((double) (max (WrapperStruct00.var_1_10 , WrapperStruct00.var_1_11)))) : (WrapperStruct00.var_1_8 == ((double) WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_8 == ((double) WrapperStruct00.var_1_10)))) && ((! WrapperStruct00.var_1_4) ? (((-5 % WrapperStruct00.var_1_13) == (max (10 , (WrapperStruct00.var_1_7 / WrapperStruct00.var_1_14)))) ? (WrapperStruct00.var_1_12 == ((signed long int) (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_5))) : 1) : 1)) && (WrapperStruct00.var_1_15 == ((float) WrapperStruct00.var_1_11))) && (WrapperStruct00.var_1_16 == ((unsigned long int) WrapperStruct00.var_1_12))) && (WrapperStruct00.var_1_17 == ((signed short int) WrapperStruct00.var_1_7))
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
