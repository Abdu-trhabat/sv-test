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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed long int var_1_4;
	signed long int var_1_5;
	signed long int var_1_6;
	signed short int var_1_7;
	float var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	signed long int var_1_11;
	signed long int var_1_12;
	signed long int var_1_13;
	signed long int var_1_14;
	signed long int var_1_15;
	signed long int var_1_16;
	signed long int var_1_17;
	unsigned short int var_1_18;
	unsigned short int var_1_19;
	signed char var_1_20;
	signed char var_1_21;
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
	5,
	-128,
	1,
	-128,
	0,
	25.6,
	0,
	1,
	-4,
	16,
	8,
	128,
	1867567405,
	32,
	5,
	4,
	64,
	-5,
	-64
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch116Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_19;


	// From: Req6Batch116Wrapper_S
	WrapperStruct00.var_1_20 = WrapperStruct00.var_1_21;


	// From: Req4Batch116Wrapper_S
	signed long int stepLocal_2 = WrapperStruct00.var_1_5;
	if (stepLocal_2 <= WrapperStruct00.var_1_18) {
		WrapperStruct00.var_1_11 = ((min ((max (WrapperStruct00.var_1_18 , WrapperStruct00.var_1_12)) , (min (WrapperStruct00.var_1_13 , WrapperStruct00.var_1_14)))) - ((WrapperStruct00.var_1_15 - WrapperStruct00.var_1_16) - WrapperStruct00.var_1_17));
	}


	// From: Req3Batch116Wrapper_S
	WrapperStruct00.var_1_9 = ((WrapperStruct00.var_1_11 >= (~ WrapperStruct00.var_1_11)) && (! WrapperStruct00.var_1_10));


	// From: Req1Batch116Wrapper_S
	signed long int stepLocal_0 = (WrapperStruct00.var_1_4 * WrapperStruct00.var_1_5) / WrapperStruct00.var_1_6;
	if ((~ WrapperStruct00.var_1_18) < stepLocal_0) {
		if (WrapperStruct00.var_1_9) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
		} else {
			WrapperStruct00.var_1_1 = 8;
		}
	} else {
		WrapperStruct00.var_1_1 = 5;
	}


	// From: Req2Batch116Wrapper_S
	signed long int stepLocal_1 = min (WrapperStruct00.var_1_1 , WrapperStruct00.var_1_11);
	if (WrapperStruct00.var_1_9) {
		if (stepLocal_1 >= WrapperStruct00.var_1_11) {
			WrapperStruct00.var_1_8 = 2.6f;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 32766);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483646);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483646);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 2147483646);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 1610612734);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 2147483646);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 536870911);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 1073741823);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 65534);
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_21 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_21 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((~ WrapperStruct00.var_1_18) < ((WrapperStruct00.var_1_4 * WrapperStruct00.var_1_5) / WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_9 ? (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_1 == ((signed short int) 8))) : (WrapperStruct00.var_1_1 == ((signed short int) 5))) && (WrapperStruct00.var_1_9 ? (((min (WrapperStruct00.var_1_1 , WrapperStruct00.var_1_11)) >= WrapperStruct00.var_1_11) ? (WrapperStruct00.var_1_8 == ((float) 2.6f)) : 1) : 1)) && (WrapperStruct00.var_1_9 == ((unsigned char) ((WrapperStruct00.var_1_11 >= (~ WrapperStruct00.var_1_11)) && (! WrapperStruct00.var_1_10))))) && ((WrapperStruct00.var_1_5 <= WrapperStruct00.var_1_18) ? (WrapperStruct00.var_1_11 == ((signed long int) ((min ((max (WrapperStruct00.var_1_18 , WrapperStruct00.var_1_12)) , (min (WrapperStruct00.var_1_13 , WrapperStruct00.var_1_14)))) - ((WrapperStruct00.var_1_15 - WrapperStruct00.var_1_16) - WrapperStruct00.var_1_17)))) : 1)) && (WrapperStruct00.var_1_18 == ((unsigned short int) WrapperStruct00.var_1_19))) && (WrapperStruct00.var_1_20 == ((signed char) WrapperStruct00.var_1_21))
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
