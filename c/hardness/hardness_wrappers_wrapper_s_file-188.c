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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch188Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed char var_1_1;
	signed long int var_1_4;
	signed long int var_1_5;
	signed char var_1_6;
	signed long int var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	signed long int var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	unsigned char var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
	signed short int var_1_19;
	signed char var_1_20;
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
	-16,
	10,
	10000000,
	-2,
	-2,
	1,
	1,
	2,
	4,
	243,
	32,
	10,
	64,
	1,
	0,
	-25,
	-4
};

// Calibration values

// Last'ed variables
signed long int last_1_WrapperStruct00_var_1_7 = -2;
unsigned char last_1_WrapperStruct00_var_1_11 = 4;
signed short int last_1_WrapperStruct00_var_1_19 = -25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch188Wrapper_S
	signed long int stepLocal_1 = last_1_WrapperStruct00_var_1_11;
	unsigned char stepLocal_0 = last_1_WrapperStruct00_var_1_11 != last_1_WrapperStruct00_var_1_19;
	if (last_1_WrapperStruct00_var_1_19 != stepLocal_1) {
		if (stepLocal_0 && (WrapperStruct00.var_1_4 < WrapperStruct00.var_1_5)) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
		}
	}


	// From: Req2Batch188Wrapper_S
	unsigned char stepLocal_2 = WrapperStruct00.var_1_8;
	if (stepLocal_2 && WrapperStruct00.var_1_9) {
		WrapperStruct00.var_1_7 = ((256 - WrapperStruct00.var_1_10) + last_1_WrapperStruct00_var_1_7);
	}


	// From: Req4Batch188Wrapper_S
	WrapperStruct00.var_1_19 = WrapperStruct00.var_1_18;


	// From: Req5Batch188Wrapper_S
	WrapperStruct00.var_1_20 = WrapperStruct00.var_1_13;


	// From: Req3Batch188Wrapper_S
	if ((abs (WrapperStruct00.var_1_7)) <= WrapperStruct00.var_1_7) {
		if (WrapperStruct00.var_1_1 <= WrapperStruct00.var_1_7) {
			WrapperStruct00.var_1_11 = (((WrapperStruct00.var_1_13 - 4) - (max (WrapperStruct00.var_1_14 , WrapperStruct00.var_1_15))) - (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_17));
		} else {
			WrapperStruct00.var_1_11 = ((min (WrapperStruct00.var_1_18 , WrapperStruct00.var_1_14)) + (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_17));
		}
	} else {
		WrapperStruct00.var_1_11 = 64;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 126);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1073741823);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 222);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 254);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 63);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 63);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 127);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 63);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 127);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_7 = WrapperStruct00.var_1_7;
	last_1_WrapperStruct00_var_1_11 = WrapperStruct00.var_1_11;
	last_1_WrapperStruct00_var_1_19 = WrapperStruct00.var_1_19;
}

int property(void) {
	return (((((last_1_WrapperStruct00_var_1_19 != last_1_WrapperStruct00_var_1_11) ? (((last_1_WrapperStruct00_var_1_11 != last_1_WrapperStruct00_var_1_19) && (WrapperStruct00.var_1_4 < WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_6)) : 1) : 1) && ((WrapperStruct00.var_1_8 && WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_7 == ((signed long int) ((256 - WrapperStruct00.var_1_10) + last_1_WrapperStruct00_var_1_7))) : 1)) && (((abs (WrapperStruct00.var_1_7)) <= WrapperStruct00.var_1_7) ? ((WrapperStruct00.var_1_1 <= WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_11 == ((unsigned char) (((WrapperStruct00.var_1_13 - 4) - (max (WrapperStruct00.var_1_14 , WrapperStruct00.var_1_15))) - (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_17)))) : (WrapperStruct00.var_1_11 == ((unsigned char) ((min (WrapperStruct00.var_1_18 , WrapperStruct00.var_1_14)) + (WrapperStruct00.var_1_15 + WrapperStruct00.var_1_17))))) : (WrapperStruct00.var_1_11 == ((unsigned char) 64)))) && (WrapperStruct00.var_1_19 == ((signed short int) WrapperStruct00.var_1_18))) && (WrapperStruct00.var_1_20 == ((signed char) WrapperStruct00.var_1_13))
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
