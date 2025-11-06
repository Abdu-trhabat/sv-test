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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch126Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed char var_1_1;
	signed char var_1_2;
	signed char var_1_3;
	signed char var_1_4;
	signed long int var_1_5;
	signed char var_1_6;
	signed char var_1_7;
	signed char var_1_8;
	float var_1_9;
	unsigned char var_1_10;
	float var_1_11;
	float var_1_12;
	float var_1_13;
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
	100,
	-16,
	-8,
	8,
	8,
	32,
	-8,
	9.75,
	1,
	5.876,
	10.2,
	16.5
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch126Wrapper_S
	signed char stepLocal_1 = WrapperStruct00.var_1_4;
	signed long int stepLocal_0 = WrapperStruct00.var_1_5;
	if (((WrapperStruct00.var_1_2 / WrapperStruct00.var_1_3) + WrapperStruct00.var_1_4) != stepLocal_0) {
		if (WrapperStruct00.var_1_2 <= stepLocal_1) {
			WrapperStruct00.var_1_1 = (min ((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7) , WrapperStruct00.var_1_8));
		}
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
	}


	// From: Req2Batch126Wrapper_S
	signed char stepLocal_3 = WrapperStruct00.var_1_1;
	signed char stepLocal_2 = WrapperStruct00.var_1_1;
	if (stepLocal_3 <= WrapperStruct00.var_1_3) {
		if (WrapperStruct00.var_1_10) {
			if (stepLocal_2 <= (max ((-128 % WrapperStruct00.var_1_3) , WrapperStruct00.var_1_1))) {
				WrapperStruct00.var_1_9 = WrapperStruct00.var_1_11;
			} else {
				WrapperStruct00.var_1_9 = WrapperStruct00.var_1_12;
			}
		}
	} else {
		WrapperStruct00.var_1_9 = WrapperStruct00.var_1_11;
	}


	// From: Req3Batch126Wrapper_S
	signed long int stepLocal_5 = 50;
	unsigned char stepLocal_4 = WrapperStruct00.var_1_11 < WrapperStruct00.var_1_9;
	if (! (5 < WrapperStruct00.var_1_1)) {
		if (stepLocal_4 && WrapperStruct00.var_1_10) {
			if (stepLocal_5 < WrapperStruct00.var_1_6) {
				WrapperStruct00.var_1_13 = WrapperStruct00.var_1_12;
			}
		} else {
			WrapperStruct00.var_1_13 = 16.2f;
		}
	} else {
		WrapperStruct00.var_1_13 = WrapperStruct00.var_1_12;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 127);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 127);
	assume_abort_if_not(WrapperStruct00.var_1_3 != 0);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 63);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 126);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((WrapperStruct00.var_1_2 / WrapperStruct00.var_1_3) + WrapperStruct00.var_1_4) != WrapperStruct00.var_1_5) ? ((WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_1 == ((signed char) (min ((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7) , WrapperStruct00.var_1_8)))) : 1) : (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_8))) && ((WrapperStruct00.var_1_1 <= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_10 ? ((WrapperStruct00.var_1_1 <= (max ((-128 % WrapperStruct00.var_1_3) , WrapperStruct00.var_1_1))) ? (WrapperStruct00.var_1_9 == ((float) WrapperStruct00.var_1_11)) : (WrapperStruct00.var_1_9 == ((float) WrapperStruct00.var_1_12))) : 1) : (WrapperStruct00.var_1_9 == ((float) WrapperStruct00.var_1_11)))) && ((! (5 < WrapperStruct00.var_1_1)) ? (((WrapperStruct00.var_1_11 < WrapperStruct00.var_1_9) && WrapperStruct00.var_1_10) ? ((50 < WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_13 == ((float) WrapperStruct00.var_1_12)) : 1) : (WrapperStruct00.var_1_13 == ((float) 16.2f))) : (WrapperStruct00.var_1_13 == ((float) WrapperStruct00.var_1_12)))
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
