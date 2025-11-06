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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch100Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned long int var_1_1;
	unsigned long int var_1_2;
	unsigned long int var_1_3;
	unsigned long int var_1_5;
	unsigned long int var_1_6;
	unsigned long int var_1_7;
	unsigned long int var_1_8;
	unsigned long int var_1_9;
	signed short int var_1_10;
	signed short int var_1_11;
	signed short int var_1_12;
	signed short int var_1_13;
	signed short int var_1_14;
	signed short int var_1_15;
	unsigned char var_1_16;
	unsigned char var_1_18;
	unsigned char var_1_19;
	unsigned char var_1_20;
	unsigned char var_1_21;
	unsigned char var_1_22;
	unsigned char var_1_23;
	unsigned char var_1_24;
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
	8,
	16,
	10000,
	50,
	1438530836,
	1401937267,
	1707018182,
	25,
	-128,
	1,
	10000,
	200,
	50,
	100,
	128,
	128,
	64,
	0,
	1,
	1,
	0,
	0
};

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_20 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch100Wrapper_S
	unsigned char stepLocal_0 = last_1_WrapperStruct00_var_1_20;
	if ((WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_3) || stepLocal_0) {
		WrapperStruct00.var_1_1 = (min ((min (WrapperStruct00.var_1_5 , 32u)) , ((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7) - (WrapperStruct00.var_1_8 - WrapperStruct00.var_1_9))));
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_9;
	}


	// From: Req4Batch100Wrapper_S
	signed long int stepLocal_2 = 1000;
	if (WrapperStruct00.var_1_13 < stepLocal_2) {
		WrapperStruct00.var_1_20 = (WrapperStruct00.var_1_21 && ((WrapperStruct00.var_1_1 > 64u) || WrapperStruct00.var_1_22));
	} else {
		WrapperStruct00.var_1_20 = (! (WrapperStruct00.var_1_23 || WrapperStruct00.var_1_24));
	}


	// From: Req2Batch100Wrapper_S
	WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_11 - ((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) + (min (WrapperStruct00.var_1_14 , WrapperStruct00.var_1_15))));


	// From: Req3Batch100Wrapper_S
	signed long int stepLocal_1 = WrapperStruct00.var_1_14 % WrapperStruct00.var_1_12;
	if (stepLocal_1 <= WrapperStruct00.var_1_1) {
		WrapperStruct00.var_1_16 = (min ((max (WrapperStruct00.var_1_18 , 128)) , WrapperStruct00.var_1_19));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 4294967294);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 1073741824);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1073741823);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 32766);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 8191);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 16383);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 8191);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 16383);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 16383);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 254);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 254);
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_21 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_21 <= 1);
	WrapperStruct00.var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_22 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_22 <= 1);
	WrapperStruct00.var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_23 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_23 <= 0);
	WrapperStruct00.var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_24 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_24 <= 0);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_20 = WrapperStruct00.var_1_20;
}

int property(void) {
	return (((((WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_3) || last_1_WrapperStruct00_var_1_20) ? (WrapperStruct00.var_1_1 == ((unsigned long int) (min ((min (WrapperStruct00.var_1_5 , 32u)) , ((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7) - (WrapperStruct00.var_1_8 - WrapperStruct00.var_1_9)))))) : (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_9))) && (WrapperStruct00.var_1_10 == ((signed short int) (WrapperStruct00.var_1_11 - ((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) + (min (WrapperStruct00.var_1_14 , WrapperStruct00.var_1_15))))))) && (((WrapperStruct00.var_1_14 % WrapperStruct00.var_1_12) <= WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_16 == ((unsigned char) (min ((max (WrapperStruct00.var_1_18 , 128)) , WrapperStruct00.var_1_19)))) : 1)) && ((WrapperStruct00.var_1_13 < 1000) ? (WrapperStruct00.var_1_20 == ((unsigned char) (WrapperStruct00.var_1_21 && ((WrapperStruct00.var_1_1 > 64u) || WrapperStruct00.var_1_22)))) : (WrapperStruct00.var_1_20 == ((unsigned char) (! (WrapperStruct00.var_1_23 || WrapperStruct00.var_1_24)))))
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
