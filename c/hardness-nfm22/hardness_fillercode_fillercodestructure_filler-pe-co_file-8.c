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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 999999999.675;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
unsigned long int var_1_9 = 1;
double var_1_10 = 63.25;
unsigned char var_1_11 = 0;
unsigned short int var_1_13 = 0;
unsigned short int var_1_15 = 17766;
unsigned short int var_1_16 = 28149;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 50;
unsigned char var_1_21 = 64;
unsigned char var_1_22 = 50;
unsigned char var_1_23 = 5;
unsigned char var_1_24 = 128;
signed long int var_1_25 = -16;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -4;
unsigned char var_1_31 = 1;
unsigned short int var_1_33 = 2;
signed long int var_1_36 = -1;
float var_1_38 = 256.7;
float var_1_39 = 2.2;
unsigned long int var_1_40 = 10;
double var_1_42 = 100.5;
double var_1_43 = 16.5;
double var_1_44 = 4.875;
signed char var_1_45 = 8;
signed long int var_1_46 = 25;
signed char var_1_47 = 5;
signed char var_1_48 = 10;
signed char var_1_49 = -50;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_13 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch8Filler_PE_CO
	if (last_1_var_1_13 == (last_1_var_1_13 % var_1_4)) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req5Batch8Filler_PE_CO
	if (var_1_10 == var_1_1) {
		if (var_1_11) {
			var_1_19 = (((32 + var_1_20) + var_1_21) - (var_1_22 + var_1_23));
		} else {
			var_1_19 = (var_1_24 - var_1_23);
		}
	} else {
		var_1_19 = var_1_24;
	}


	// From: Req7Batch8Filler_PE_CO
	if (var_1_19 < (var_1_21 / var_1_20)) {
		if (var_1_19 > var_1_19) {
			var_1_26 = (max ((min (var_1_22 , var_1_24)) , var_1_23));
		} else {
			var_1_26 = var_1_22;
		}
	}


	// From: Req2Batch8Filler_PE_CO
	if (var_1_1 >= var_1_6) {
		var_1_7 = var_1_19;
	}


	// From: Req3Batch8Filler_PE_CO
	if (((var_1_6 * var_1_5) / var_1_10) > var_1_1) {
		if (var_1_11) {
			var_1_9 = var_1_26;
		} else {
			var_1_9 = var_1_26;
		}
	}


	// From: Req4Batch8Filler_PE_CO
	if (var_1_7 < var_1_9) {
		var_1_13 = (var_1_26 + ((max (var_1_15 , var_1_16)) - (var_1_19 + var_1_19)));
	}


	// From: Req6Batch8Filler_PE_CO
	if ((25.3 * var_1_5) != var_1_1) {
		if (var_1_11) {
			if (var_1_15 <= var_1_13) {
				var_1_25 = var_1_26;
			}
		} else {
			var_1_25 = var_1_22;
		}
	} else {
		var_1_25 = var_1_20;
	}


	// From: CodeObject1
	if (var_1_9 != (var_1_26 + var_1_25)) {
		if (var_1_31) {
			var_1_27 = (abs (var_1_26));
		}
	} else {
		var_1_27 = var_1_26;
	}


	// From: CodeObject2
	if (var_1_31) {
		var_1_33 = (max (var_1_19 , var_1_19));
	}


	// From: CodeObject3
	if (16 < var_1_26) {
		if (var_1_19 <= var_1_13) {
			if (var_1_26 < (var_1_26 ^ var_1_26)) {
				var_1_36 = var_1_9;
			}
		}
	}


	// From: CodeObject4
	var_1_38 = var_1_39;


	// From: CodeObject5
	if (var_1_26 <= var_1_13) {
		if (var_1_39 < 255.2f) {
			if ((16 <= var_1_25) && (var_1_26 >= var_1_13)) {
				var_1_40 = (max (var_1_19 , var_1_13));
			}
		}
	}


	// From: CodeObject6
	if (var_1_26 < (max ((max (var_1_26 , var_1_7)) , var_1_26))) {
		var_1_42 = var_1_39;
	} else {
		if (var_1_1 <= var_1_39) {
			var_1_42 = (abs (abs (var_1_39)));
		} else {
			if (var_1_39 <= var_1_1) {
				var_1_42 = (max ((var_1_43 - var_1_44) , var_1_39));
			}
		}
	}


	// From: CodeObject7
	if ((var_1_19 % var_1_46) < var_1_26) {
		var_1_45 = ((var_1_47 - var_1_48) + var_1_49);
	} else {
		var_1_45 = var_1_49;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16383);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 32);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 64);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 64);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854765600e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854765600e+12F && var_1_44 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= -2147483648);
	assume_abort_if_not(var_1_46 <= 2147483647);
	assume_abort_if_not(var_1_46 != 0);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -63);
	assume_abort_if_not(var_1_49 <= 63);
}



void updateLastVariables() {
	last_1_var_1_13 = var_1_13;
}

int property() {
	return (((((((last_1_var_1_13 == (last_1_var_1_13 % var_1_4)) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((var_1_1 >= var_1_6) ? (var_1_7 == ((signed long int) var_1_19)) : 1)) && ((((var_1_6 * var_1_5) / var_1_10) > var_1_1) ? (var_1_11 ? (var_1_9 == ((unsigned long int) var_1_26)) : (var_1_9 == ((unsigned long int) var_1_26))) : 1)) && ((var_1_7 < var_1_9) ? (var_1_13 == ((unsigned short int) (var_1_26 + ((max (var_1_15 , var_1_16)) - (var_1_19 + var_1_19))))) : 1)) && ((var_1_10 == var_1_1) ? (var_1_11 ? (var_1_19 == ((unsigned char) (((32 + var_1_20) + var_1_21) - (var_1_22 + var_1_23)))) : (var_1_19 == ((unsigned char) (var_1_24 - var_1_23)))) : (var_1_19 == ((unsigned char) var_1_24)))) && (((25.3 * var_1_5) != var_1_1) ? (var_1_11 ? ((var_1_15 <= var_1_13) ? (var_1_25 == ((signed long int) var_1_26)) : 1) : (var_1_25 == ((signed long int) var_1_22))) : (var_1_25 == ((signed long int) var_1_20)))) && ((var_1_19 < (var_1_21 / var_1_20)) ? ((var_1_19 > var_1_19) ? (var_1_26 == ((unsigned char) (max ((min (var_1_22 , var_1_24)) , var_1_23)))) : (var_1_26 == ((unsigned char) var_1_22))) : 1)
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
