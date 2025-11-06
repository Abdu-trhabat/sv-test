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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch25Amount100.c", 13, "reach_error"); }
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
signed long int var_1_1 = -64;
signed long int var_1_4 = -256;
unsigned short int var_1_5 = 50;
unsigned short int var_1_7 = 64852;
unsigned short int var_1_8 = 5;
unsigned short int var_1_9 = 2;
unsigned short int var_1_10 = 5;
unsigned char var_1_11 = 16;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
double var_1_17 = 16.75;
unsigned char var_1_18 = 128;
unsigned short int var_1_20 = 16;
double var_1_21 = 9.75;
double var_1_22 = 63.2;
double var_1_23 = 16.85;
double var_1_24 = 31.25;
double var_1_25 = 5.5;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned short int var_1_28 = 64;
unsigned short int var_1_29 = 20938;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
float var_1_33 = 127.13;
signed short int var_1_34 = -1000;
signed short int var_1_35 = -4;
unsigned long int var_1_36 = 1;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -64;
unsigned short int last_1_var_1_28 = 64;
signed short int last_1_var_1_35 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch25Amount100
	if (var_1_4 != (last_1_var_1_1 | last_1_var_1_35)) {
		var_1_5 = (min ((var_1_7 - (max (last_1_var_1_28 , last_1_var_1_35))) , var_1_8));
	} else {
		var_1_5 = ((min ((max (last_1_var_1_28 , 50)) , last_1_var_1_35)) + ((min (var_1_9 , 5)) + var_1_10));
	}


	// From: Req10Batch25Amount100
	if (var_1_23 != 9.999999999998E11) {
		var_1_34 = (max ((abs (var_1_13 + var_1_5)) , var_1_18));
	}


	// From: Req5Batch25Amount100
	var_1_21 = (var_1_22 + ((max (var_1_23 , var_1_24)) - var_1_25));


	// From: Req6Batch25Amount100
	var_1_26 = var_1_27;


	// From: Req1Batch25Amount100
	signed long int stepLocal_0 = var_1_5 + var_1_34;
	if (! (var_1_34 >= var_1_5)) {
		if (256 != stepLocal_0) {
			var_1_1 = (max ((var_1_4 + -25) , var_1_5));
		}
	} else {
		var_1_1 = -100;
	}


	// From: Req11Batch25Amount100
	if ((var_1_36 | var_1_7) < (max ((var_1_14 ^ var_1_5) , var_1_1))) {
		if (((var_1_21 * var_1_23) * (var_1_17 + var_1_25)) <= (var_1_24 - 4.8)) {
			var_1_35 = (var_1_14 + var_1_13);
		}
	} else {
		if (var_1_5 > var_1_7) {
			var_1_35 = (abs (var_1_34));
		} else {
			var_1_35 = var_1_10;
		}
	}


	// From: Req8Batch25Amount100
	signed long int stepLocal_2 = min (var_1_35 , var_1_5);
	if (var_1_27) {
		if (! var_1_26) {
			if (stepLocal_2 <= var_1_18) {
				var_1_30 = var_1_31;
			} else {
				var_1_30 = var_1_32;
			}
		} else {
			var_1_30 = var_1_32;
		}
	}


	// From: Req4Batch25Amount100
	if (var_1_26) {
		if (var_1_30) {
			var_1_20 = (var_1_7 - var_1_18);
		}
	} else {
		var_1_20 = (var_1_7 - var_1_15);
	}


	// From: Req9Batch25Amount100
	if ((var_1_35 != var_1_5) || var_1_32) {
		var_1_33 = (var_1_25 - var_1_24);
	}


	// From: Req3Batch25Amount100
	signed long int stepLocal_1 = var_1_1 / var_1_18;
	if (var_1_26) {
		var_1_11 = ((var_1_13 + var_1_14) + var_1_15);
	} else {
		if (32.4 < (- (var_1_21 / var_1_17))) {
			var_1_11 = (var_1_18 - var_1_15);
		} else {
			if (var_1_1 < stepLocal_1) {
				if (var_1_30) {
					var_1_11 = var_1_13;
				}
			} else {
				var_1_11 = var_1_15;
			}
		}
	}


	// From: Req7Batch25Amount100
	if ((abs (var_1_15)) < (var_1_1 * var_1_5)) {
		if (var_1_1 < var_1_14) {
			var_1_28 = ((var_1_29 + 24036) - (max (var_1_9 , var_1_11)));
		} else {
			var_1_28 = var_1_14;
		}
	} else {
		var_1_28 = var_1_18;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1073741823);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 16384);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 64);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_29 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_29 >= 16383);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 4294967295);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_35 = var_1_35;
}

int property(void) {
	return (((((((((((! (var_1_34 >= var_1_5)) ? ((256 != (var_1_5 + var_1_34)) ? (var_1_1 == ((signed long int) (max ((var_1_4 + -25) , var_1_5)))) : 1) : (var_1_1 == ((signed long int) -100))) && ((var_1_4 != (last_1_var_1_1 | last_1_var_1_35)) ? (var_1_5 == ((unsigned short int) (min ((var_1_7 - (max (last_1_var_1_28 , last_1_var_1_35))) , var_1_8)))) : (var_1_5 == ((unsigned short int) ((min ((max (last_1_var_1_28 , 50)) , last_1_var_1_35)) + ((min (var_1_9 , 5)) + var_1_10)))))) && (var_1_26 ? (var_1_11 == ((unsigned char) ((var_1_13 + var_1_14) + var_1_15))) : ((32.4 < (- (var_1_21 / var_1_17))) ? (var_1_11 == ((unsigned char) (var_1_18 - var_1_15))) : ((var_1_1 < (var_1_1 / var_1_18)) ? (var_1_30 ? (var_1_11 == ((unsigned char) var_1_13)) : 1) : (var_1_11 == ((unsigned char) var_1_15)))))) && (var_1_26 ? (var_1_30 ? (var_1_20 == ((unsigned short int) (var_1_7 - var_1_18))) : 1) : (var_1_20 == ((unsigned short int) (var_1_7 - var_1_15))))) && (var_1_21 == ((double) (var_1_22 + ((max (var_1_23 , var_1_24)) - var_1_25))))) && (var_1_26 == ((unsigned char) var_1_27))) && (((abs (var_1_15)) < (var_1_1 * var_1_5)) ? ((var_1_1 < var_1_14) ? (var_1_28 == ((unsigned short int) ((var_1_29 + 24036) - (max (var_1_9 , var_1_11))))) : (var_1_28 == ((unsigned short int) var_1_14))) : (var_1_28 == ((unsigned short int) var_1_18)))) && (var_1_27 ? ((! var_1_26) ? (((min (var_1_35 , var_1_5)) <= var_1_18) ? (var_1_30 == ((unsigned char) var_1_31)) : (var_1_30 == ((unsigned char) var_1_32))) : (var_1_30 == ((unsigned char) var_1_32))) : 1)) && (((var_1_35 != var_1_5) || var_1_32) ? (var_1_33 == ((float) (var_1_25 - var_1_24))) : 1)) && ((var_1_23 != 9.999999999998E11) ? (var_1_34 == ((signed short int) (max ((abs (var_1_13 + var_1_5)) , var_1_18)))) : 1)) && (((var_1_36 | var_1_7) < (max ((var_1_14 ^ var_1_5) , var_1_1))) ? ((((var_1_21 * var_1_23) * (var_1_17 + var_1_25)) <= (var_1_24 - 4.8)) ? (var_1_35 == ((signed short int) (var_1_14 + var_1_13))) : 1) : ((var_1_5 > var_1_7) ? (var_1_35 == ((signed short int) (abs (var_1_34)))) : (var_1_35 == ((signed short int) var_1_10))))
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
