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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch163Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	unsigned short int var_1_2;
	unsigned short int var_1_4;
	unsigned long int var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	signed long int var_1_8;
	unsigned short int var_1_9;
	double var_1_10;
	signed short int var_1_11;
	signed short int var_1_12;
	unsigned short int var_1_13;
	double var_1_14;
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
	-2,
	500,
	4,
	100000000,
	1,
	1,
	-16,
	2,
	8.5,
	100,
	64,
	55631,
	16.2
};

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct00_var_1_5 = 100000000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch163Wrapper_S
	unsigned long int stepLocal_0 = last_1_WrapperStruct00_var_1_5 / WrapperStruct00.var_1_4;
	if (last_1_WrapperStruct00_var_1_5 >= stepLocal_0) {
		WrapperStruct00.var_1_1 = last_1_WrapperStruct00_var_1_5;
	}


	// From: Req2Batch163Wrapper_S
	signed long int stepLocal_3 = (max (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_2)) * WrapperStruct00.var_1_8;
	unsigned short int stepLocal_2 = WrapperStruct00.var_1_9;
	unsigned char stepLocal_1 = WrapperStruct00.var_1_6;
	if (stepLocal_1 || WrapperStruct00.var_1_7) {
		if ((max (last_1_WrapperStruct00_var_1_5 , WrapperStruct00.var_1_1)) < stepLocal_3) {
			if (last_1_WrapperStruct00_var_1_5 >= stepLocal_2) {
				WrapperStruct00.var_1_5 = WrapperStruct00.var_1_4;
			}
		} else {
			WrapperStruct00.var_1_5 = WrapperStruct00.var_1_2;
		}
	} else {
		WrapperStruct00.var_1_5 = last_1_WrapperStruct00_var_1_5;
	}


	// From: Req3Batch163Wrapper_S
	signed long int stepLocal_6 = WrapperStruct00.var_1_13 - WrapperStruct00.var_1_12;
	unsigned short int stepLocal_5 = WrapperStruct00.var_1_9;
	signed long int stepLocal_4 = (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) + WrapperStruct00.var_1_4;
	if (stepLocal_4 == ((WrapperStruct00.var_1_9 + WrapperStruct00.var_1_2) * 16)) {
		if (WrapperStruct00.var_1_4 < stepLocal_6) {
			if (stepLocal_5 != WrapperStruct00.var_1_8) {
				WrapperStruct00.var_1_10 = WrapperStruct00.var_1_14;
			} else {
				WrapperStruct00.var_1_10 = 31.1;
			}
		} else {
			WrapperStruct00.var_1_10 = WrapperStruct00.var_1_14;
		}
	} else {
		WrapperStruct00.var_1_10 = WrapperStruct00.var_1_14;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 65535);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 65535);
	assume_abort_if_not(WrapperStruct00.var_1_4 != 0);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 65535);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 32767);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 32767);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 65535);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_5 = WrapperStruct00.var_1_5;
}

int property(void) {
	return (((last_1_WrapperStruct00_var_1_5 >= (last_1_WrapperStruct00_var_1_5 / WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_1 == ((signed long int) last_1_WrapperStruct00_var_1_5)) : 1) && ((WrapperStruct00.var_1_6 || WrapperStruct00.var_1_7) ? (((max (last_1_WrapperStruct00_var_1_5 , WrapperStruct00.var_1_1)) < ((max (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_2)) * WrapperStruct00.var_1_8)) ? ((last_1_WrapperStruct00_var_1_5 >= WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_5 == ((unsigned long int) WrapperStruct00.var_1_4)) : 1) : (WrapperStruct00.var_1_5 == ((unsigned long int) WrapperStruct00.var_1_2))) : (WrapperStruct00.var_1_5 == ((unsigned long int) last_1_WrapperStruct00_var_1_5)))) && ((((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) + WrapperStruct00.var_1_4) == ((WrapperStruct00.var_1_9 + WrapperStruct00.var_1_2) * 16)) ? ((WrapperStruct00.var_1_4 < (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_12)) ? ((WrapperStruct00.var_1_9 != WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_10 == ((double) WrapperStruct00.var_1_14)) : (WrapperStruct00.var_1_10 == ((double) 31.1))) : (WrapperStruct00.var_1_10 == ((double) WrapperStruct00.var_1_14))) : (WrapperStruct00.var_1_10 == ((double) WrapperStruct00.var_1_14)))
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
