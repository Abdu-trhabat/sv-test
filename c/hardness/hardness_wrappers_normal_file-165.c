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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch165normal.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





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
float var_1_1 = 10.5;
float var_1_2 = 255.6;
float var_1_3 = 128.75;
float var_1_4 = 2.7;
float var_1_5 = 7.5;
float var_1_6 = 0.25;
float var_1_7 = 15.25;
float var_1_8 = 31.2;
signed short int var_1_9 = 25;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
signed short int var_1_12 = -32;
signed short int var_1_13 = -64;
signed short int var_1_14 = -256;
signed short int var_1_15 = -10;
signed short int var_1_16 = 10;
signed short int var_1_17 = 128;
signed short int var_1_18 = 16;
signed short int var_1_19 = 100;
unsigned short int var_1_20 = 100;
unsigned short int var_1_21 = 33508;
unsigned short int var_1_22 = 21271;
unsigned short int var_1_23 = 58974;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch165normal
	if (var_1_2 >= (var_1_3 + var_1_4)) {
		var_1_1 = (max (var_1_5 , ((var_1_6 - var_1_7) + (var_1_8 - 200.2f))));
	} else {
		var_1_1 = var_1_7;
	}


	// From: Req2Batch165normal
	if (var_1_10 && var_1_11) {
		var_1_9 = (var_1_12 + var_1_13);
	} else {
		var_1_9 = (min (var_1_13 , (var_1_12 + var_1_14)));
	}


	// From: Req3Batch165normal
	if (var_1_10) {
		var_1_15 = ((max (var_1_16 , (var_1_17 - var_1_18))) + (var_1_19 - 100));
	}


	// From: Req4Batch165normal
	if (var_1_10) {
		var_1_20 = (var_1_21 - (var_1_22 - (max (var_1_19 , var_1_18))));
	} else {
		var_1_20 = ((var_1_23 - var_1_18) - var_1_17);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -16383);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -16383);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -16383);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -16383);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 16383);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 16383);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 49150);
	assume_abort_if_not(var_1_23 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((var_1_2 >= (var_1_3 + var_1_4)) ? (var_1_1 == ((float) (max (var_1_5 , ((var_1_6 - var_1_7) + (var_1_8 - 200.2f)))))) : (var_1_1 == ((float) var_1_7))) && ((var_1_10 && var_1_11) ? (var_1_9 == ((signed short int) (var_1_12 + var_1_13))) : (var_1_9 == ((signed short int) (min (var_1_13 , (var_1_12 + var_1_14))))))) && (var_1_10 ? (var_1_15 == ((signed short int) ((max (var_1_16 , (var_1_17 - var_1_18))) + (var_1_19 - 100)))) : 1)) && (var_1_10 ? (var_1_20 == ((unsigned short int) (var_1_21 - (var_1_22 - (max (var_1_19 , var_1_18)))))) : (var_1_20 == ((unsigned short int) ((var_1_23 - var_1_18) - var_1_17))))
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
