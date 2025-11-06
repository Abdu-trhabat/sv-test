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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch64100_while.c", 13, "reach_error"); }
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
float var_1_1 = 128.25;
float var_1_4 = 63.4;
float var_1_5 = 15.5;
float var_1_6 = 100.75;
signed long int var_1_8 = -16;
double var_1_11 = 1.625;
double var_1_12 = 16.4;
double var_1_13 = 7.38;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
signed short int var_1_16 = 256;
unsigned long int var_1_17 = 8;
unsigned long int var_1_18 = 2670311060;
signed char var_1_19 = -32;
signed char var_1_20 = 50;
signed char var_1_21 = 64;
signed char var_1_22 = 0;
unsigned long int var_1_23 = 1;
signed short int var_1_24 = 21669;
double var_1_25 = 63.6;
double var_1_26 = 2.5;
double var_1_27 = 999999999999999.1;
unsigned char var_1_28 = 64;
signed long int var_1_29 = 8;
signed short int var_1_30 = 200;
signed long int var_1_32 = 4;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_8 = -16;
double last_1_var_1_11 = 1.625;
signed short int last_1_var_1_16 = 256;
unsigned long int last_1_var_1_17 = 8;
unsigned long int last_1_var_1_23 = 1;
unsigned char last_1_var_1_28 = 64;
signed long int last_1_var_1_29 = 8;
signed long int last_1_var_1_32 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch64100_while
	signed long int stepLocal_5 = var_1_22 ^ var_1_21;
	if (stepLocal_5 < last_1_var_1_23) {
		var_1_29 = (last_1_var_1_28 + var_1_21);
	} else {
		var_1_29 = (last_1_var_1_8 + (last_1_var_1_28 + (16 - last_1_var_1_32)));
	}


	// From: Req2Batch64100_while
	signed long int stepLocal_0 = last_1_var_1_32;
	if (last_1_var_1_11 <= (max (49.4f , var_1_5))) {
		if (var_1_6 <= last_1_var_1_11) {
			if (((max (last_1_var_1_29 , last_1_var_1_16)) * last_1_var_1_17) <= stepLocal_0) {
				var_1_8 = last_1_var_1_29;
			} else {
				var_1_8 = last_1_var_1_16;
			}
		} else {
			var_1_8 = last_1_var_1_29;
		}
	} else {
		var_1_8 = last_1_var_1_17;
	}


	// From: Req5Batch64100_while
	if (var_1_5 <= var_1_13) {
		var_1_16 = last_1_var_1_28;
	} else {
		var_1_16 = (last_1_var_1_28 - 4);
	}


	// From: Req6Batch64100_while
	var_1_17 = (var_1_18 - var_1_16);


	// From: Req3Batch64100_while
	if (var_1_5 > var_1_4) {
		var_1_11 = (var_1_5 - (var_1_6 + (max (var_1_12 , var_1_13))));
	}


	// From: Req7Batch64100_while
	var_1_19 = (var_1_20 - (var_1_21 - var_1_22));


	// From: Req13Batch64100_while
	var_1_32 = last_1_var_1_32;


	// From: Req12Batch64100_while
	if ((var_1_20 - (max (var_1_21 , var_1_24))) <= (var_1_32 + -25)) {
		if (var_1_18 > var_1_22) {
			var_1_30 = var_1_21;
		} else {
			var_1_30 = (abs (var_1_22));
		}
	} else {
		if (var_1_26 >= 9.5) {
			var_1_30 = var_1_29;
		}
	}


	// From: Req8Batch64100_while
	if ((max (7.2 , 10.86)) >= (var_1_12 - var_1_5)) {
		var_1_23 = (min (var_1_21 , var_1_22));
	} else {
		if (var_1_8 >= ((var_1_24 - last_1_var_1_23) - (abs (var_1_17)))) {
			var_1_23 = var_1_22;
		} else {
			var_1_23 = var_1_16;
		}
	}


	// From: Req4Batch64100_while
	unsigned long int stepLocal_1 = var_1_23;
	if ((min (var_1_16 , (var_1_16 - var_1_17))) >= stepLocal_1) {
		var_1_14 = var_1_15;
	}


	// From: Req1Batch64100_while
	if (var_1_32 <= var_1_16) {
		var_1_1 = (abs (var_1_4 + (var_1_5 - var_1_6)));
	} else {
		if (var_1_14) {
			var_1_1 = (max (var_1_6 , var_1_5));
		}
	}


	// From: Req9Batch64100_while
	unsigned long int stepLocal_2 = var_1_17;
	if (var_1_32 >= stepLocal_2) {
		var_1_25 = ((var_1_26 + var_1_27) + var_1_13);
	} else {
		if (var_1_1 >= var_1_11) {
			var_1_25 = var_1_4;
		}
	}


	// From: Req10Batch64100_while
	signed long int stepLocal_4 = var_1_8;
	unsigned long int stepLocal_3 = 128u;
	if ((var_1_30 * (max (var_1_21 , last_1_var_1_28))) >= stepLocal_4) {
		if (var_1_18 <= stepLocal_3) {
			if (var_1_4 == (min (var_1_5 , var_1_25))) {
				var_1_28 = var_1_22;
			} else {
				var_1_28 = var_1_21;
			}
		} else {
			var_1_28 = var_1_22;
		}
	} else {
		var_1_28 = var_1_22;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 63);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= 16383);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -230584.3009213691400e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_32 = var_1_32;
}

int property(void) {
	return (((((((((((((var_1_32 <= var_1_16) ? (var_1_1 == ((float) (abs (var_1_4 + (var_1_5 - var_1_6))))) : (var_1_14 ? (var_1_1 == ((float) (max (var_1_6 , var_1_5)))) : 1)) && ((last_1_var_1_11 <= (max (49.4f , var_1_5))) ? ((var_1_6 <= last_1_var_1_11) ? ((((max (last_1_var_1_29 , last_1_var_1_16)) * last_1_var_1_17) <= last_1_var_1_32) ? (var_1_8 == ((signed long int) last_1_var_1_29)) : (var_1_8 == ((signed long int) last_1_var_1_16))) : (var_1_8 == ((signed long int) last_1_var_1_29))) : (var_1_8 == ((signed long int) last_1_var_1_17)))) && ((var_1_5 > var_1_4) ? (var_1_11 == ((double) (var_1_5 - (var_1_6 + (max (var_1_12 , var_1_13)))))) : 1)) && (((min (var_1_16 , (var_1_16 - var_1_17))) >= var_1_23) ? (var_1_14 == ((unsigned char) var_1_15)) : 1)) && ((var_1_5 <= var_1_13) ? (var_1_16 == ((signed short int) last_1_var_1_28)) : (var_1_16 == ((signed short int) (last_1_var_1_28 - 4))))) && (var_1_17 == ((unsigned long int) (var_1_18 - var_1_16)))) && (var_1_19 == ((signed char) (var_1_20 - (var_1_21 - var_1_22))))) && (((max (7.2 , 10.86)) >= (var_1_12 - var_1_5)) ? (var_1_23 == ((unsigned long int) (min (var_1_21 , var_1_22)))) : ((var_1_8 >= ((var_1_24 - last_1_var_1_23) - (abs (var_1_17)))) ? (var_1_23 == ((unsigned long int) var_1_22)) : (var_1_23 == ((unsigned long int) var_1_16))))) && ((var_1_32 >= var_1_17) ? (var_1_25 == ((double) ((var_1_26 + var_1_27) + var_1_13))) : ((var_1_1 >= var_1_11) ? (var_1_25 == ((double) var_1_4)) : 1))) && (((var_1_30 * (max (var_1_21 , last_1_var_1_28))) >= var_1_8) ? ((var_1_18 <= 128u) ? ((var_1_4 == (min (var_1_5 , var_1_25))) ? (var_1_28 == ((unsigned char) var_1_22)) : (var_1_28 == ((unsigned char) var_1_21))) : (var_1_28 == ((unsigned char) var_1_22))) : (var_1_28 == ((unsigned char) var_1_22)))) && (((var_1_22 ^ var_1_21) < last_1_var_1_23) ? (var_1_29 == ((signed long int) (last_1_var_1_28 + var_1_21))) : (var_1_29 == ((signed long int) (last_1_var_1_8 + (last_1_var_1_28 + (16 - last_1_var_1_32))))))) && (((var_1_20 - (max (var_1_21 , var_1_24))) <= (var_1_32 + -25)) ? ((var_1_18 > var_1_22) ? (var_1_30 == ((signed short int) var_1_21)) : (var_1_30 == ((signed short int) (abs (var_1_22))))) : ((var_1_26 >= 9.5) ? (var_1_30 == ((signed short int) var_1_29)) : 1))) && (var_1_32 == ((signed long int) last_1_var_1_32))
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
