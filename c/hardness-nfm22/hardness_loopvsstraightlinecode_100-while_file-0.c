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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch0100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed short int var_1_1 = 64;
double var_1_2 = 99999999999.3;
double var_1_3 = 1.7;
signed long int var_1_6 = 2;
signed long int var_1_8 = 1427256974;
signed short int var_1_11 = 0;
signed long int var_1_14 = 256;
unsigned short int var_1_15 = 2;
signed short int var_1_19 = 32;
double var_1_23 = 4.7;
double var_1_24 = 0.0;
double var_1_25 = 128.25;
float var_1_26 = -0.2;
float var_1_27 = 31.25;
float var_1_28 = 24.4;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 236;
unsigned char var_1_31 = 5;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 100;
unsigned char var_1_35 = 5;
double var_1_36 = 7.5;
signed short int var_1_37 = 16;
unsigned char var_1_38 = 64;
signed char var_1_39 = -1;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_15 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req12Batch0100_while
	var_1_38 = var_1_31;


	// From: Req13Batch0100_while
	var_1_39 = var_1_31;


	// From: Req14Batch0100_while
	var_1_40 = var_1_41;


	// From: Req9Batch0100_while
	unsigned char stepLocal_4 = var_1_40;
	if (stepLocal_4 && var_1_40) {
		var_1_29 = (((var_1_30 - var_1_31) - var_1_32) - ((max (var_1_33 , var_1_34)) - (abs (var_1_35))));
	}


	// From: Req10Batch0100_while
	if (var_1_40) {
		var_1_36 = (var_1_28 + var_1_27);
	} else {
		var_1_36 = ((var_1_27 + var_1_28) + (abs (var_1_25)));
	}


	// From: Req4Batch0100_while
	signed long int stepLocal_1 = ~ var_1_29;
	if (stepLocal_1 < var_1_8) {
		var_1_14 = (max (var_1_39 , var_1_29));
	}


	// From: Req5Batch0100_while
	unsigned char stepLocal_2 = var_1_29;
	if ((last_1_var_1_15 + var_1_39) > stepLocal_2) {
		if (var_1_40) {
			var_1_15 = ((min (var_1_38 , var_1_38)) + var_1_29);
		}
	} else {
		var_1_15 = (var_1_38 + var_1_38);
	}


	// From: Req6Batch0100_while
	unsigned char stepLocal_3 = var_1_40;
	if (var_1_40 && stepLocal_3) {
		var_1_19 = (var_1_29 + var_1_29);
	}


	// From: Req7Batch0100_while
	if ((min (var_1_19 , var_1_38)) > (var_1_38 - (max (var_1_15 , 5)))) {
		var_1_23 = (10.65 - (var_1_24 - var_1_25));
	}


	// From: Req8Batch0100_while
	if (var_1_38 > var_1_38) {
		if ((var_1_38 ^ var_1_29) < var_1_8) {
			var_1_26 = (((128.05f - var_1_27) + (abs (var_1_28))) + var_1_25);
		}
	}


	// From: Req1Batch0100_while
	if ((var_1_2 - var_1_3) == (- var_1_26)) {
		if (var_1_3 <= ((var_1_26 * 1.5) + 127.4)) {
			var_1_1 = var_1_29;
		} else {
			var_1_1 = var_1_29;
		}
	} else {
		var_1_1 = var_1_29;
	}


	// From: Req2Batch0100_while
	var_1_6 = (var_1_15 - (min ((var_1_8 - var_1_15) , var_1_38)));


	// From: Req3Batch0100_while
	signed long int stepLocal_0 = var_1_8;
	if (var_1_40) {
		var_1_11 = var_1_39;
	} else {
		if (stepLocal_0 <= (max (var_1_1 , var_1_39))) {
			var_1_11 = (max (var_1_39 , var_1_29));
		}
	}


	// From: Req11Batch0100_while
	unsigned char stepLocal_7 = var_1_40;
	signed char stepLocal_6 = var_1_39;
	unsigned char stepLocal_5 = var_1_29;
	if (((var_1_35 / var_1_34) % var_1_30) >= stepLocal_5) {
		if (var_1_40 || stepLocal_7) {
			if ((var_1_39 * (var_1_38 & 64)) < stepLocal_6) {
				if ((var_1_27 - var_1_24) <= var_1_3) {
					var_1_37 = (var_1_33 - var_1_11);
				} else {
					var_1_37 = (min (var_1_32 , ((min (var_1_33 , var_1_35)) + var_1_39)));
				}
			} else {
				var_1_37 = (min ((abs (var_1_34)) , var_1_11));
			}
		}
	} else {
		var_1_37 = var_1_32;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 1073741823);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 4611686.018427382800e+12F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854765600e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691390e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -230584.3009213691390e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691390e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 222);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 63);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 63);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
}



void updateLastVariables() {
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((((((((((((var_1_2 - var_1_3) == (- var_1_26)) ? ((var_1_3 <= ((var_1_26 * 1.5) + 127.4)) ? (var_1_1 == ((signed short int) var_1_29)) : (var_1_1 == ((signed short int) var_1_29))) : (var_1_1 == ((signed short int) var_1_29))) && (var_1_6 == ((signed long int) (var_1_15 - (min ((var_1_8 - var_1_15) , var_1_38)))))) && (var_1_40 ? (var_1_11 == ((signed short int) var_1_39)) : ((var_1_8 <= (max (var_1_1 , var_1_39))) ? (var_1_11 == ((signed short int) (max (var_1_39 , var_1_29)))) : 1))) && (((~ var_1_29) < var_1_8) ? (var_1_14 == ((signed long int) (max (var_1_39 , var_1_29)))) : 1)) && (((last_1_var_1_15 + var_1_39) > var_1_29) ? (var_1_40 ? (var_1_15 == ((unsigned short int) ((min (var_1_38 , var_1_38)) + var_1_29))) : 1) : (var_1_15 == ((unsigned short int) (var_1_38 + var_1_38))))) && ((var_1_40 && var_1_40) ? (var_1_19 == ((signed short int) (var_1_29 + var_1_29))) : 1)) && (((min (var_1_19 , var_1_38)) > (var_1_38 - (max (var_1_15 , 5)))) ? (var_1_23 == ((double) (10.65 - (var_1_24 - var_1_25)))) : 1)) && ((var_1_38 > var_1_38) ? (((var_1_38 ^ var_1_29) < var_1_8) ? (var_1_26 == ((float) (((128.05f - var_1_27) + (abs (var_1_28))) + var_1_25))) : 1) : 1)) && ((var_1_40 && var_1_40) ? (var_1_29 == ((unsigned char) (((var_1_30 - var_1_31) - var_1_32) - ((max (var_1_33 , var_1_34)) - (abs (var_1_35)))))) : 1)) && (var_1_40 ? (var_1_36 == ((double) (var_1_28 + var_1_27))) : (var_1_36 == ((double) ((var_1_27 + var_1_28) + (abs (var_1_25))))))) && ((((var_1_35 / var_1_34) % var_1_30) >= var_1_29) ? ((var_1_40 || var_1_40) ? (((var_1_39 * (var_1_38 & 64)) < var_1_39) ? (((var_1_27 - var_1_24) <= var_1_3) ? (var_1_37 == ((signed short int) (var_1_33 - var_1_11))) : (var_1_37 == ((signed short int) (min (var_1_32 , ((min (var_1_33 , var_1_35)) + var_1_39)))))) : (var_1_37 == ((signed short int) (min ((abs (var_1_34)) , var_1_11))))) : 1) : (var_1_37 == ((signed short int) var_1_32)))) && (var_1_38 == ((unsigned char) var_1_31))) && (var_1_39 == ((signed char) var_1_31))) && (var_1_40 == ((unsigned char) var_1_41))
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
