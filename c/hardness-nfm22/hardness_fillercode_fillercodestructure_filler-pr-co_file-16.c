// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch16Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = -50;
unsigned char var_1_4 = 0;
signed short int var_1_5 = 8;
signed short int var_1_6 = 64;
unsigned short int var_1_7 = 8;
unsigned short int var_1_8 = 256;
signed long int var_1_9 = 2;
signed long int var_1_10 = 1441729073;
unsigned short int var_1_11 = 32;
double var_1_12 = 7.6;
double var_1_13 = 127.8;
signed char var_1_14 = 32;
signed char var_1_15 = 50;
signed char var_1_16 = 0;
signed char var_1_17 = 16;
float var_1_18 = 0.4;
unsigned char var_1_19 = 0;
float var_1_20 = 24.4;
float var_1_21 = 500.5;
float var_1_22 = 99.324;
unsigned short int var_1_23 = 128;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 100;
double var_1_26 = 10.4;
signed char var_1_27 = 8;
signed char var_1_28 = -8;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
unsigned long int var_1_35 = 25;
unsigned short int var_1_36 = 10;
unsigned long int var_1_37 = 4179266779;
unsigned char var_1_38 = 64;
signed char var_1_42 = 32;
signed char var_1_43 = 8;
signed char var_1_44 = 8;
signed char var_1_46 = -10;
signed char var_1_47 = -32;
unsigned short int var_1_48 = 41179;
signed long int var_1_49 = 2019307118;
signed long int var_1_50 = 1355662084;
signed char var_1_51 = -25;
signed short int var_1_52 = 10;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_7 = 8;
unsigned short int last_1_var_1_11 = 32;
signed char last_1_var_1_14 = 32;
unsigned short int last_1_var_1_23 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch16Filler_PR_CO
	signed long int stepLocal_0 = last_1_var_1_11;
	if ((last_1_var_1_23 / -50) >= stepLocal_0) {
		if (var_1_4) {
			var_1_1 = (var_1_5 - var_1_6);
		} else {
			var_1_1 = var_1_5;
		}
	} else {
		var_1_1 = var_1_5;
	}


	// From: CodeObject10
	var_1_52 = 5;


	// From: Req8Batch16Filler_PR_CO
	if (var_1_4 && ((abs (var_1_1)) > var_1_5)) {
		var_1_23 = var_1_6;
	}


	// From: CodeObject8
	if (var_1_28 == ((var_1_36 / var_1_46) % var_1_47)) {
		var_1_44 = (abs (-10));
	} else {
		if ((var_1_48 - var_1_14) <= ((var_1_49 - var_1_1) - (var_1_50 - var_1_25))) {
			var_1_44 = var_1_28;
		} else {
			var_1_44 = var_1_43;
		}
	}


	// From: Req3Batch16Filler_PR_CO
	if (var_1_6 > 128) {
		var_1_9 = (var_1_8 - (var_1_10 - var_1_1));
	}


	// From: CodeObject7
	var_1_42 = (abs (var_1_43));


	// From: Req4Batch16Filler_PR_CO
	signed long int stepLocal_2 = var_1_5 | var_1_6;
	if (((var_1_9 + var_1_23) * var_1_9) < stepLocal_2) {
		if (var_1_4) {
			var_1_11 = var_1_8;
		}
	} else {
		var_1_11 = var_1_8;
	}


	// From: CodeObject5
	if (((var_1_25 / var_1_36) ^ var_1_1) > var_1_14) {
		if (var_1_34) {
			var_1_35 = (var_1_37 - (abs (var_1_36)));
		} else {
			var_1_35 = var_1_36;
		}
	}


	// From: Req2Batch16Filler_PR_CO
	signed short int stepLocal_1 = var_1_6;
	if (last_1_var_1_7 < stepLocal_1) {
		var_1_7 = (var_1_6 + var_1_8);
	}


	// From: CodeObject1
	var_1_24 = var_1_25;


	// From: Req5Batch16Filler_PR_CO
	unsigned short int stepLocal_4 = var_1_8;
	signed long int stepLocal_3 = var_1_9;
	if (stepLocal_3 < (- var_1_10)) {
		if (stepLocal_4 <= var_1_9) {
			var_1_12 = (var_1_13 - 63.75);
		}
	} else {
		var_1_12 = var_1_13;
	}


	// From: CodeObject4
	if ((abs (max (var_1_18 , 3.1))) < (abs (255.5))) {
		var_1_29 = (var_1_30 && ((var_1_31 && var_1_32) && var_1_33));
	} else {
		var_1_29 = var_1_34;
	}


	// From: Req6Batch16Filler_PR_CO
	unsigned short int stepLocal_5 = var_1_8;
	if (last_1_var_1_14 <= stepLocal_5) {
		var_1_14 = (((max (var_1_15 , var_1_16)) - var_1_17) + -2);
	}


	// From: CodeObject3
	var_1_27 = var_1_28;


	// From: CodeObject9
	var_1_51 = var_1_28;


	// From: Req7Batch16Filler_PR_CO
	if (var_1_4 || var_1_19) {
		var_1_18 = (abs (var_1_20 + (var_1_21 + var_1_22)));
	}


	// From: CodeObject2
	var_1_26 = 0.1;


	// From: CodeObject6
	if ((abs (var_1_14)) < var_1_7) {
		if (((var_1_12 + var_1_12) / 1.000000000002E11) > var_1_18) {
			var_1_38 = (abs (abs (var_1_25)));
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854765600e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427382800e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691390e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691390e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691390e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691390e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -127);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 65535);
	assume_abort_if_not(var_1_36 != 0);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 2147483647);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= -126);
	assume_abort_if_not(var_1_43 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= -128);
	assume_abort_if_not(var_1_46 <= 127);
	assume_abort_if_not(var_1_46 != 0);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -128);
	assume_abort_if_not(var_1_47 <= 127);
	assume_abort_if_not(var_1_47 != 0);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 32767);
	assume_abort_if_not(var_1_48 <= 65535);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 1073741823);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_50 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_50 >= 1073741823);
	assume_abort_if_not(var_1_50 <= 2147483647);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_23 = var_1_23;
}

int property() {
	return (((((((((last_1_var_1_23 / -50) >= last_1_var_1_11) ? (var_1_4 ? (var_1_1 == ((signed short int) (var_1_5 - var_1_6))) : (var_1_1 == ((signed short int) var_1_5))) : (var_1_1 == ((signed short int) var_1_5))) && ((last_1_var_1_7 < var_1_6) ? (var_1_7 == ((unsigned short int) (var_1_6 + var_1_8))) : 1)) && ((var_1_6 > 128) ? (var_1_9 == ((signed long int) (var_1_8 - (var_1_10 - var_1_1)))) : 1)) && ((((var_1_9 + var_1_23) * var_1_9) < (var_1_5 | var_1_6)) ? (var_1_4 ? (var_1_11 == ((unsigned short int) var_1_8)) : 1) : (var_1_11 == ((unsigned short int) var_1_8)))) && ((var_1_9 < (- var_1_10)) ? ((var_1_8 <= var_1_9) ? (var_1_12 == ((double) (var_1_13 - 63.75))) : 1) : (var_1_12 == ((double) var_1_13)))) && ((last_1_var_1_14 <= var_1_8) ? (var_1_14 == ((signed char) (((max (var_1_15 , var_1_16)) - var_1_17) + -2))) : 1)) && ((var_1_4 || var_1_19) ? (var_1_18 == ((float) (abs (var_1_20 + (var_1_21 + var_1_22))))) : 1)) && ((var_1_4 && ((abs (var_1_1)) > var_1_5)) ? (var_1_23 == ((unsigned short int) var_1_6)) : 1)
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
