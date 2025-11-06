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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch170Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned long int var_1_1;
	unsigned char var_1_4;
	unsigned long int var_1_5;
	unsigned long int var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	signed char var_1_11;
	signed char var_1_12;
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
	1,
	1,
	256,
	8,
	32,
	128,
	2,
	200,
	10,
	16
};

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct00_var_1_1 = 1;
unsigned char last_1_WrapperStruct00_var_1_7 = 32;
unsigned char last_1_WrapperStruct00_var_1_10 = 200;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch170Wrapper_S
	signed long int stepLocal_5 = WrapperStruct00.var_1_8 | last_1_WrapperStruct00_var_1_7;
	if (last_1_WrapperStruct00_var_1_1 != stepLocal_5) {
		WrapperStruct00.var_1_10 = WrapperStruct00.var_1_8;
	}


	// From: Req2Batch170Wrapper_S
	signed long int stepLocal_4 = last_1_WrapperStruct00_var_1_10;
	unsigned long int stepLocal_3 = WrapperStruct00.var_1_6;
	unsigned char stepLocal_2 = WrapperStruct00.var_1_9;
	unsigned long int stepLocal_1 = WrapperStruct00.var_1_5;
	if (stepLocal_1 > WrapperStruct00.var_1_6) {
		if (stepLocal_4 > WrapperStruct00.var_1_5) {
			WrapperStruct00.var_1_7 = WrapperStruct00.var_1_8;
		} else {
			WrapperStruct00.var_1_7 = (max (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9));
		}
	} else {
		if (stepLocal_3 <= WrapperStruct00.var_1_5) {
			if (WrapperStruct00.var_1_8 <= stepLocal_2) {
				WrapperStruct00.var_1_7 = (max (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9));
			}
		}
	}


	// From: Req1Batch170Wrapper_S
	unsigned char stepLocal_0 = ! WrapperStruct00.var_1_4;
	if ((WrapperStruct00.var_1_10 != (min (WrapperStruct00.var_1_7 , 64))) || stepLocal_0) {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
	}


	// From: Req4Batch170Wrapper_S
	unsigned char stepLocal_7 = WrapperStruct00.var_1_10 == WrapperStruct00.var_1_5;
	unsigned long int stepLocal_6 = WrapperStruct00.var_1_6;
	if (WrapperStruct00.var_1_4 && stepLocal_7) {
		if (stepLocal_6 <= WrapperStruct00.var_1_9) {
			WrapperStruct00.var_1_11 = WrapperStruct00.var_1_12;
		} else {
			WrapperStruct00.var_1_11 = 16;
		}
	} else {
		WrapperStruct00.var_1_11 = WrapperStruct00.var_1_12;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 4294967294);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 4294967294);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 254);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
	last_1_WrapperStruct00_var_1_7 = WrapperStruct00.var_1_7;
	last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}

int property(void) {
	return (((((WrapperStruct00.var_1_10 != (min (WrapperStruct00.var_1_7 , 64))) || (! WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_5)) : (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_6))) && ((WrapperStruct00.var_1_5 > WrapperStruct00.var_1_6) ? ((last_1_WrapperStruct00_var_1_10 > WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_7 == ((unsigned char) WrapperStruct00.var_1_8)) : (WrapperStruct00.var_1_7 == ((unsigned char) (max (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9))))) : ((WrapperStruct00.var_1_6 <= WrapperStruct00.var_1_5) ? ((WrapperStruct00.var_1_8 <= WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_7 == ((unsigned char) (max (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9)))) : 1) : 1))) && ((last_1_WrapperStruct00_var_1_1 != (WrapperStruct00.var_1_8 | last_1_WrapperStruct00_var_1_7)) ? (WrapperStruct00.var_1_10 == ((unsigned char) WrapperStruct00.var_1_8)) : 1)) && ((WrapperStruct00.var_1_4 && (WrapperStruct00.var_1_10 == WrapperStruct00.var_1_5)) ? ((WrapperStruct00.var_1_6 <= WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_11 == ((signed char) WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_11 == ((signed char) 16))) : (WrapperStruct00.var_1_11 == ((signed char) WrapperStruct00.var_1_12)))
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
