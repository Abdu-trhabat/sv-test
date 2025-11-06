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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch71100_1loop.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 4;
double var_1_2 = 31.1;
double var_1_3 = 128.25;
double var_1_4 = 100000.8;
unsigned char var_1_5 = 4;
float var_1_6 = 63.375;
float var_1_7 = 2.875;
float var_1_8 = 128.6;
float var_1_9 = 128.75;
signed char var_1_10 = 1;
signed char var_1_12 = 4;
signed char var_1_13 = 32;
signed char var_1_14 = 32;
signed char var_1_15 = 4;
unsigned char var_1_16 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 8;
signed short int var_1_22 = 23448;
signed short int var_1_23 = 0;
signed short int var_1_24 = -64;
signed long int var_1_25 = -2;
unsigned long int var_1_26 = 64;
signed long int var_1_28 = -2;
unsigned char var_1_29 = 0;
unsigned long int var_1_30 = 4;
unsigned long int var_1_31 = 4033452388;
signed char var_1_32 = 0;
signed char var_1_33 = -25;
signed char var_1_34 = 10;
signed char var_1_35 = -8;
signed char var_1_36 = -10;
unsigned char var_1_37 = 0;
float var_1_38 = 99999.2;
unsigned long int var_1_39 = 64;
signed short int var_1_40 = -64;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_16 = 0;
unsigned long int last_1_var_1_26 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch71100_1loop
	if (last_1_var_1_16) {
		var_1_10 = var_1_12;
	} else {
		var_1_10 = (((min (2 , var_1_13)) + (var_1_14 - var_1_15)) - 4);
	}


	// From: Req1Batch71100_1loop
	if (var_1_2 == var_1_4) {
		var_1_1 = (min (var_1_5 , 0));
	}


	// From: Req2Batch71100_1loop
	var_1_6 = (min (((var_1_7 - 31.5f) + (max (var_1_8 , 100.5f))) , var_1_9));


	// From: Req6Batch71100_1loop
	if (var_1_2 == var_1_7) {
		var_1_21 = ((var_1_22 - var_1_23) - var_1_14);
	} else {
		var_1_21 = (max (var_1_5 , var_1_24));
	}


	// From: Req10Batch71100_1loop
	if (var_1_2 != var_1_9) {
		var_1_29 = var_1_18;
	} else {
		var_1_29 = (! var_1_18);
	}


	// From: Req12Batch71100_1loop
	if (! var_1_29) {
		var_1_32 = ((2 + (max (var_1_15 , var_1_33))) + ((var_1_34 + var_1_35) + var_1_36));
	} else {
		var_1_32 = ((var_1_15 + var_1_13) - (abs (var_1_14)));
	}


	// From: Req13Batch71100_1loop
	if ((31.75 + var_1_3) >= var_1_6) {
		var_1_37 = ((! var_1_18) && var_1_19);
	} else {
		if (var_1_8 >= var_1_9) {
			var_1_37 = var_1_19;
		} else {
			var_1_37 = var_1_18;
		}
	}


	// From: Req14Batch71100_1loop
	var_1_38 = var_1_8;


	// From: Req15Batch71100_1loop
	var_1_39 = var_1_15;


	// From: Req16Batch71100_1loop
	var_1_40 = var_1_35;


	// From: Req5Batch71100_1loop
	signed long int stepLocal_2 = var_1_14 * var_1_13;
	if (((var_1_39 / 2u) & var_1_15) > stepLocal_2) {
		var_1_20 = 0;
	}


	// From: Req7Batch71100_1loop
	var_1_25 = (var_1_23 + (min ((var_1_13 - var_1_5) , (var_1_40 - var_1_15))));


	// From: Req8Batch71100_1loop
	unsigned long int stepLocal_3 = var_1_39;
	if (last_1_var_1_26 > stepLocal_3) {
		var_1_26 = (var_1_15 + var_1_22);
	}


	// From: Req9Batch71100_1loop
	if (var_1_1 >= var_1_40) {
		if (var_1_29) {
			if (var_1_19 && var_1_37) {
				var_1_28 = (max (var_1_5 , var_1_39));
			}
		} else {
			if (var_1_19) {
				var_1_28 = var_1_15;
			}
		}
	}


	// From: Req11Batch71100_1loop
	if (var_1_39 < (var_1_31 - var_1_23)) {
		var_1_30 = (max ((var_1_13 + (var_1_14 + var_1_15)) , (var_1_22 + var_1_5)));
	} else {
		var_1_30 = ((abs (abs (var_1_23))) + var_1_22);
	}


	// From: Req4Batch71100_1loop
	signed char stepLocal_1 = var_1_10;
	signed char stepLocal_0 = var_1_15;
	if (stepLocal_0 > var_1_40) {
		if (var_1_21 > stepLocal_1) {
			if (var_1_2 > (var_1_8 + 50.5)) {
				var_1_16 = var_1_18;
			} else {
				var_1_16 = var_1_19;
			}
		} else {
			var_1_16 = var_1_18;
		}
	} else {
		var_1_16 = var_1_18;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 31);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 31);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 16382);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32767);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 2147483647);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -31);
	assume_abort_if_not(var_1_33 <= 31);
	var_1_34 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_34 >= -15);
	assume_abort_if_not(var_1_34 <= 16);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -15);
	assume_abort_if_not(var_1_35 <= 16);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -31);
	assume_abort_if_not(var_1_36 <= 31);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_26 = var_1_26;
}

int property(void) {
	return ((((((((((((((((var_1_2 == var_1_4) ? (var_1_1 == ((unsigned char) (min (var_1_5 , 0)))) : 1) && (var_1_6 == ((float) (min (((var_1_7 - 31.5f) + (max (var_1_8 , 100.5f))) , var_1_9))))) && (last_1_var_1_16 ? (var_1_10 == ((signed char) var_1_12)) : (var_1_10 == ((signed char) (((min (2 , var_1_13)) + (var_1_14 - var_1_15)) - 4))))) && ((var_1_15 > var_1_40) ? ((var_1_21 > var_1_10) ? ((var_1_2 > (var_1_8 + 50.5)) ? (var_1_16 == ((unsigned char) var_1_18)) : (var_1_16 == ((unsigned char) var_1_19))) : (var_1_16 == ((unsigned char) var_1_18))) : (var_1_16 == ((unsigned char) var_1_18)))) && ((((var_1_39 / 2u) & var_1_15) > (var_1_14 * var_1_13)) ? (var_1_20 == ((unsigned char) 0)) : 1)) && ((var_1_2 == var_1_7) ? (var_1_21 == ((signed short int) ((var_1_22 - var_1_23) - var_1_14))) : (var_1_21 == ((signed short int) (max (var_1_5 , var_1_24)))))) && (var_1_25 == ((signed long int) (var_1_23 + (min ((var_1_13 - var_1_5) , (var_1_40 - var_1_15))))))) && ((last_1_var_1_26 > var_1_39) ? (var_1_26 == ((unsigned long int) (var_1_15 + var_1_22))) : 1)) && ((var_1_1 >= var_1_40) ? (var_1_29 ? ((var_1_19 && var_1_37) ? (var_1_28 == ((signed long int) (max (var_1_5 , var_1_39)))) : 1) : (var_1_19 ? (var_1_28 == ((signed long int) var_1_15)) : 1)) : 1)) && ((var_1_2 != var_1_9) ? (var_1_29 == ((unsigned char) var_1_18)) : (var_1_29 == ((unsigned char) (! var_1_18))))) && ((var_1_39 < (var_1_31 - var_1_23)) ? (var_1_30 == ((unsigned long int) (max ((var_1_13 + (var_1_14 + var_1_15)) , (var_1_22 + var_1_5))))) : (var_1_30 == ((unsigned long int) ((abs (abs (var_1_23))) + var_1_22))))) && ((! var_1_29) ? (var_1_32 == ((signed char) ((2 + (max (var_1_15 , var_1_33))) + ((var_1_34 + var_1_35) + var_1_36)))) : (var_1_32 == ((signed char) ((var_1_15 + var_1_13) - (abs (var_1_14))))))) && (((31.75 + var_1_3) >= var_1_6) ? (var_1_37 == ((unsigned char) ((! var_1_18) && var_1_19))) : ((var_1_8 >= var_1_9) ? (var_1_37 == ((unsigned char) var_1_19)) : (var_1_37 == ((unsigned char) var_1_18))))) && (var_1_38 == ((float) var_1_8))) && (var_1_39 == ((unsigned long int) var_1_15))) && (var_1_40 == ((signed short int) var_1_35))
;
}
int main(void) {
	isInitial = 1;
	initially();

	int k_loop;
	for (k_loop = 0; k_loop < 1; k_loop++) {
		updateLastVariables();

		updateVariables();
		step();
		__VERIFIER_assert(property());
		isInitial = 0;
	}

	return 0;
}
