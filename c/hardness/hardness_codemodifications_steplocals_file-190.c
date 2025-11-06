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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch190stepLocals.c", 13, "reach_error"); }
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
signed char var_1_1 = -8;
signed short int var_1_2 = -1;
signed short int var_1_3 = -10;
signed char var_1_4 = 16;
unsigned char var_1_5 = 0;
float var_1_6 = 24.5;
unsigned short int var_1_7 = 32;
unsigned char var_1_8 = 1;
unsigned short int var_1_9 = 38529;
unsigned short int var_1_10 = 16;
float var_1_11 = 5.5;
double var_1_12 = 2.8;
double var_1_13 = 64.525;
double var_1_14 = 16.75;
float var_1_15 = 15.875;
signed char var_1_16 = 1;
signed char var_1_17 = 25;
signed char var_1_18 = 64;
signed char var_1_19 = 16;
signed char var_1_20 = 1;
signed char var_1_21 = 1;
signed short int var_1_22 = -4;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 1;
unsigned long int var_1_26 = 1176567833;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch190stepLocals
	signed short int stepLocal_2 = var_1_3;
	signed short int stepLocal_1 = var_1_3;
	unsigned char stepLocal_0 = var_1_5;
	if (var_1_2 <= stepLocal_2) {
		if (stepLocal_1 <= var_1_2) {
			var_1_1 = var_1_4;
		} else {
			if (stepLocal_0 || ((- var_1_6) < 32.6f)) {
				var_1_1 = 64;
			} else {
				var_1_1 = var_1_4;
			}
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req2Batch190stepLocals
	unsigned char stepLocal_3 = ! var_1_8;
	if (var_1_5 || stepLocal_3) {
		if (! (var_1_3 == var_1_1)) {
			var_1_7 = (var_1_9 - (max (var_1_10 , 8)));
		} else {
			var_1_7 = var_1_9;
		}
	} else {
		if (var_1_8) {
			var_1_7 = var_1_10;
		} else {
			var_1_7 = var_1_9;
		}
	}


	// From: Req3Batch190stepLocals
	if (var_1_3 <= var_1_2) {
		if ((var_1_6 + var_1_12) <= (max (var_1_13 , var_1_14))) {
			var_1_11 = var_1_15;
		}
	}


	// From: Req4Batch190stepLocals
	signed long int stepLocal_4 = var_1_17 - var_1_18;
	if (var_1_4 >= stepLocal_4) {
		var_1_16 = (var_1_19 + (var_1_20 - var_1_21));
	}


	// From: Req5Batch190stepLocals
	var_1_22 = (min (var_1_19 , (min (var_1_20 , (var_1_21 - var_1_18)))));


	// From: Req6Batch190stepLocals
	var_1_23 = (var_1_8 || (var_1_5 || var_1_24));


	// From: Req7Batch190stepLocals
	if (var_1_12 == var_1_11) {
		var_1_25 = ((var_1_26 - var_1_10) + var_1_18);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -127);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 1073741823);
	assume_abort_if_not(var_1_26 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((var_1_2 <= var_1_3) ? ((var_1_3 <= var_1_2) ? (var_1_1 == ((signed char) var_1_4)) : ((var_1_5 || ((- var_1_6) < 32.6f)) ? (var_1_1 == ((signed char) 64)) : (var_1_1 == ((signed char) var_1_4)))) : (var_1_1 == ((signed char) var_1_4))) && ((var_1_5 || (! var_1_8)) ? ((! (var_1_3 == var_1_1)) ? (var_1_7 == ((unsigned short int) (var_1_9 - (max (var_1_10 , 8))))) : (var_1_7 == ((unsigned short int) var_1_9))) : (var_1_8 ? (var_1_7 == ((unsigned short int) var_1_10)) : (var_1_7 == ((unsigned short int) var_1_9))))) && ((var_1_3 <= var_1_2) ? (((var_1_6 + var_1_12) <= (max (var_1_13 , var_1_14))) ? (var_1_11 == ((float) var_1_15)) : 1) : 1)) && ((var_1_4 >= (var_1_17 - var_1_18)) ? (var_1_16 == ((signed char) (var_1_19 + (var_1_20 - var_1_21)))) : 1)) && (var_1_22 == ((signed short int) (min (var_1_19 , (min (var_1_20 , (var_1_21 - var_1_18)))))))) && (var_1_23 == ((unsigned char) (var_1_8 || (var_1_5 || var_1_24))))) && ((var_1_12 == var_1_11) ? (var_1_25 == ((unsigned long int) ((var_1_26 - var_1_10) + var_1_18))) : 1)
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
