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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	unsigned short int var_1_2;
	unsigned char var_1_4;
	signed short int var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned long int var_1_12;
	unsigned char var_1_13;
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
	-8,
	0,
	1,
	100,
	10,
	0,
	4,
	64,
	1,
	0,
	8,
	0
};

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct00_var_1_12 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch143Wrapper_S
	unsigned long int stepLocal_0 = - last_1_WrapperStruct00_var_1_12;
	if (stepLocal_0 <= last_1_WrapperStruct00_var_1_12) {
		if (! WrapperStruct00.var_1_4) {
			WrapperStruct00.var_1_1 = (abs (1 - WrapperStruct00.var_1_5));
		}
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
	}


	// From: Req2Batch143Wrapper_S
	signed short int stepLocal_2 = WrapperStruct00.var_1_1;
	unsigned char stepLocal_1 = WrapperStruct00.var_1_4;
	if (stepLocal_1 && (! WrapperStruct00.var_1_7)) {
		WrapperStruct00.var_1_6 = WrapperStruct00.var_1_8;
	} else {
		if (stepLocal_2 != WrapperStruct00.var_1_2) {
			WrapperStruct00.var_1_6 = (min (WrapperStruct00.var_1_8 , ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) + WrapperStruct00.var_1_11)));
		} else {
			WrapperStruct00.var_1_6 = WrapperStruct00.var_1_11;
		}
	}


	// From: Req3Batch143Wrapper_S
	unsigned char stepLocal_4 = WrapperStruct00.var_1_13;
	signed short int stepLocal_3 = WrapperStruct00.var_1_5;
	if (WrapperStruct00.var_1_4) {
		if (WrapperStruct00.var_1_7 && stepLocal_4) {
			WrapperStruct00.var_1_12 = (abs (abs (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_2)));
		}
	} else {
		if (stepLocal_3 > WrapperStruct00.var_1_9) {
			WrapperStruct00.var_1_12 = WrapperStruct00.var_1_6;
		} else {
			WrapperStruct00.var_1_12 = WrapperStruct00.var_1_10;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 65535);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 32766);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 254);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 63);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 63);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
}

int property(void) {
	return ((((- last_1_WrapperStruct00_var_1_12) <= last_1_WrapperStruct00_var_1_12) ? ((! WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_1 == ((signed short int) (abs (1 - WrapperStruct00.var_1_5)))) : 1) : (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_5))) && ((WrapperStruct00.var_1_4 && (! WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_6 == ((unsigned char) WrapperStruct00.var_1_8)) : ((WrapperStruct00.var_1_1 != WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_6 == ((unsigned char) (min (WrapperStruct00.var_1_8 , ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) + WrapperStruct00.var_1_11))))) : (WrapperStruct00.var_1_6 == ((unsigned char) WrapperStruct00.var_1_11))))) && (WrapperStruct00.var_1_4 ? ((WrapperStruct00.var_1_7 && WrapperStruct00.var_1_13) ? (WrapperStruct00.var_1_12 == ((unsigned long int) (abs (abs (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_2))))) : 1) : ((WrapperStruct00.var_1_5 > WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_12 == ((unsigned long int) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_12 == ((unsigned long int) WrapperStruct00.var_1_10))))
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
