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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch68100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 10.875;
float var_1_4 = 64.75;
float var_1_5 = 4.75;
float var_1_6 = 63.95;
unsigned long int var_1_7 = 32;
unsigned long int var_1_8 = 4162005566;
float var_1_11 = 0.5;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
float var_1_16 = 32.375;
unsigned short int var_1_17 = 32;
unsigned short int var_1_18 = 18423;
unsigned short int var_1_19 = 19325;
unsigned short int var_1_20 = 10000;
unsigned short int var_1_21 = 5;
unsigned long int var_1_22 = 128;
unsigned short int var_1_23 = 1;
signed char var_1_24 = 5;
signed char var_1_25 = 32;
signed char var_1_26 = -10;
signed long int var_1_27 = 1081977464;
unsigned short int var_1_28 = 1;
unsigned char var_1_29 = 128;
unsigned char var_1_30 = 100;
unsigned short int var_1_31 = 37977;
unsigned short int var_1_32 = 1;
float var_1_34 = 49.4;
float var_1_35 = 2.5;
float var_1_36 = 7.7;
float var_1_37 = 4.8;
signed short int var_1_38 = -10;
signed short int var_1_39 = 10000;
signed long int var_1_40 = -2;
signed short int var_1_42 = -1;

// Calibration values

// Last'ed variables
float last_1_var_1_11 = 0.5;
unsigned short int last_1_var_1_23 = 1;
unsigned short int last_1_var_1_28 = 1;
signed short int last_1_var_1_38 = -10;
signed long int last_1_var_1_40 = -2;
signed short int last_1_var_1_42 = -1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch68100_while
	if ((min (last_1_var_1_42 , var_1_24)) != (last_1_var_1_38 + (min (last_1_var_1_28 , last_1_var_1_23)))) {
		var_1_32 = var_1_30;
	} else {
		if (16.8f <= last_1_var_1_11) {
			var_1_32 = var_1_21;
		} else {
			var_1_32 = var_1_30;
		}
	}


	// From: Req12Batch68100_while
	unsigned short int stepLocal_5 = var_1_19;
	if (stepLocal_5 > var_1_32) {
		var_1_38 = (var_1_29 + ((min (var_1_21 , var_1_30)) - (var_1_39 - 16)));
	}


	// From: Req9Batch68100_while
	if ((last_1_var_1_40 / (var_1_29 - var_1_30)) > (var_1_19 << var_1_20)) {
		var_1_28 = (var_1_31 - var_1_21);
	} else {
		var_1_28 = 50;
	}


	// From: Req6Batch68100_while
	signed long int stepLocal_3 = -1;
	if (stepLocal_3 > (abs (var_1_28))) {
		var_1_17 = ((var_1_18 + var_1_19) - ((var_1_20 - var_1_21) + 5));
	}


	// From: Req2Batch68100_while
	if (var_1_5 < var_1_4) {
		var_1_7 = (min ((var_1_8 - var_1_28) , var_1_17));
	} else {
		var_1_7 = var_1_28;
	}


	// From: Req7Batch68100_while
	if ((var_1_18 << var_1_32) <= (var_1_19 + var_1_20)) {
		if (var_1_17 >= var_1_19) {
			var_1_22 = var_1_18;
		} else {
			var_1_22 = var_1_20;
		}
	} else {
		var_1_22 = var_1_18;
	}


	// From: Req8Batch68100_while
	signed long int stepLocal_4 = (var_1_24 - var_1_25) / var_1_26;
	if (stepLocal_4 == (var_1_19 - (var_1_27 - var_1_18))) {
		var_1_23 = (var_1_20 + var_1_18);
	}


	// From: Req11Batch68100_while
	if ((var_1_29 & (var_1_8 ^ var_1_38)) < var_1_17) {
		var_1_34 = ((255.5f - var_1_35) + (min ((var_1_36 - var_1_37) , var_1_5)));
	}


	// From: Req14Batch68100_while
	var_1_42 = var_1_25;


	// From: Req5Batch68100_while
	unsigned long int stepLocal_2 = (var_1_28 ^ var_1_8) & var_1_23;
	if (var_1_28 <= stepLocal_2) {
		var_1_16 = var_1_4;
	}


	// From: Req13Batch68100_while
	unsigned short int stepLocal_6 = var_1_32;
	if (var_1_14) {
		var_1_40 = (min ((var_1_30 + var_1_32) , var_1_23));
	} else {
		if ((var_1_32 / var_1_31) < stepLocal_6) {
			var_1_40 = (var_1_39 + var_1_30);
		} else {
			var_1_40 = var_1_25;
		}
	}


	// From: Req4Batch68100_while
	unsigned long int stepLocal_1 = var_1_8 + var_1_17;
	if (var_1_12) {
		if ((var_1_28 + var_1_40) > stepLocal_1) {
			var_1_13 = var_1_14;
		}
	} else {
		var_1_13 = var_1_15;
	}


	// From: Req3Batch68100_while
	if (((var_1_7 | var_1_8) > var_1_17) && var_1_13) {
		var_1_11 = var_1_5;
	}


	// From: Req1Batch68100_while
	signed long int stepLocal_0 = var_1_40;
	if (stepLocal_0 >= var_1_7) {
		var_1_1 = (max (var_1_4 , 9.999999996E8f));
	} else {
		var_1_1 = (max ((var_1_5 + var_1_6) , var_1_4));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854765600e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427382800e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 16383);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 16384);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 8192);
	assume_abort_if_not(var_1_20 <= 16384);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 8192);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -1);
	assume_abort_if_not(var_1_24 <= 127);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= 1073741823);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 127);
	assume_abort_if_not(var_1_29 <= 255);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 126);
	assume_abort_if_not(var_1_30 != 127);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 32767);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427382800e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427382800e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_39 >= 8191);
	assume_abort_if_not(var_1_39 <= 16383);
}



void updateLastVariables() {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_42 = var_1_42;
}

int property() {
	return ((((((((((((((var_1_40 >= var_1_7) ? (var_1_1 == ((float) (max (var_1_4 , 9.999999996E8f)))) : (var_1_1 == ((float) (max ((var_1_5 + var_1_6) , var_1_4))))) && ((var_1_5 < var_1_4) ? (var_1_7 == ((unsigned long int) (min ((var_1_8 - var_1_28) , var_1_17)))) : (var_1_7 == ((unsigned long int) var_1_28)))) && ((((var_1_7 | var_1_8) > var_1_17) && var_1_13) ? (var_1_11 == ((float) var_1_5)) : 1)) && (var_1_12 ? (((var_1_28 + var_1_40) > (var_1_8 + var_1_17)) ? (var_1_13 == ((unsigned char) var_1_14)) : 1) : (var_1_13 == ((unsigned char) var_1_15)))) && ((var_1_28 <= ((var_1_28 ^ var_1_8) & var_1_23)) ? (var_1_16 == ((float) var_1_4)) : 1)) && ((-1 > (abs (var_1_28))) ? (var_1_17 == ((unsigned short int) ((var_1_18 + var_1_19) - ((var_1_20 - var_1_21) + 5)))) : 1)) && (((var_1_18 << var_1_32) <= (var_1_19 + var_1_20)) ? ((var_1_17 >= var_1_19) ? (var_1_22 == ((unsigned long int) var_1_18)) : (var_1_22 == ((unsigned long int) var_1_20))) : (var_1_22 == ((unsigned long int) var_1_18)))) && ((((var_1_24 - var_1_25) / var_1_26) == (var_1_19 - (var_1_27 - var_1_18))) ? (var_1_23 == ((unsigned short int) (var_1_20 + var_1_18))) : 1)) && (((last_1_var_1_40 / (var_1_29 - var_1_30)) > (var_1_19 << var_1_20)) ? (var_1_28 == ((unsigned short int) (var_1_31 - var_1_21))) : (var_1_28 == ((unsigned short int) 50)))) && (((min (last_1_var_1_42 , var_1_24)) != (last_1_var_1_38 + (min (last_1_var_1_28 , last_1_var_1_23)))) ? (var_1_32 == ((unsigned short int) var_1_30)) : ((16.8f <= last_1_var_1_11) ? (var_1_32 == ((unsigned short int) var_1_21)) : (var_1_32 == ((unsigned short int) var_1_30))))) && (((var_1_29 & (var_1_8 ^ var_1_38)) < var_1_17) ? (var_1_34 == ((float) ((255.5f - var_1_35) + (min ((var_1_36 - var_1_37) , var_1_5))))) : 1)) && ((var_1_19 > var_1_32) ? (var_1_38 == ((signed short int) (var_1_29 + ((min (var_1_21 , var_1_30)) - (var_1_39 - 16))))) : 1)) && (var_1_14 ? (var_1_40 == ((signed long int) (min ((var_1_30 + var_1_32) , var_1_23)))) : (((var_1_32 / var_1_31) < var_1_32) ? (var_1_40 == ((signed long int) (var_1_39 + var_1_30))) : (var_1_40 == ((signed long int) var_1_25))))) && (var_1_42 == ((signed short int) var_1_25))
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
