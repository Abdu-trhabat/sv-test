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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch72100_while.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = -16;
signed long int var_1_12 = -10;
double var_1_14 = 127.8;
double var_1_15 = 1.375;
unsigned char var_1_19 = 1;
float var_1_20 = 10.4;
float var_1_21 = 3.075;
double var_1_22 = 64.375;
signed char var_1_23 = 16;
signed char var_1_24 = 64;
signed char var_1_25 = 0;
double var_1_26 = 255.125;
unsigned short int var_1_27 = 128;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 128;
unsigned short int var_1_30 = 49567;
unsigned short int var_1_31 = 100;
unsigned short int var_1_32 = 0;
unsigned short int var_1_33 = 1;
unsigned short int var_1_34 = 4;
unsigned short int var_1_35 = 0;
unsigned long int var_1_36 = 16;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_8 = -16;
signed long int last_1_var_1_12 = -10;
float last_1_var_1_20 = 10.4;
signed char last_1_var_1_23 = 16;
unsigned char last_1_var_1_28 = 1;
unsigned short int last_1_var_1_29 = 128;
unsigned long int last_1_var_1_36 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch72100_while
	signed long int stepLocal_7 = last_1_var_1_23 + var_1_24;
	signed long int stepLocal_6 = last_1_var_1_23;
	if (var_1_7) {
		if (stepLocal_7 < (last_1_var_1_36 ^ last_1_var_1_29)) {
			if (last_1_var_1_36 <= stepLocal_6) {
				var_1_28 = var_1_4;
			} else {
				var_1_28 = var_1_6;
			}
		}
	} else {
		var_1_28 = 0;
	}


	// From: Req7Batch72100_while
	unsigned char stepLocal_5 = var_1_21 != last_1_var_1_20;
	if ((var_1_6 || last_1_var_1_28) && stepLocal_5) {
		var_1_23 = (-1 - (var_1_24 - var_1_25));
	} else {
		var_1_23 = (var_1_25 - var_1_24);
	}


	// From: Req8Batch72100_while
	if (var_1_5) {
		var_1_26 = (abs (var_1_21));
	} else {
		var_1_26 = var_1_21;
	}


	// From: Req9Batch72100_while
	var_1_27 = var_1_24;


	// From: Req2Batch72100_while
	if (var_1_28) {
		var_1_8 = (min ((-10000 + var_1_23) , ((var_1_23 + 64) + var_1_23)));
	} else {
		var_1_8 = var_1_23;
	}


	// From: Req4Batch72100_while
	unsigned char stepLocal_3 = var_1_27 < (var_1_23 >> 25);
	unsigned short int stepLocal_2 = var_1_27;
	if (stepLocal_3 && var_1_6) {
		if (stepLocal_2 < (var_1_23 | var_1_23)) {
			var_1_19 = var_1_5;
		} else {
			var_1_19 = var_1_4;
		}
	} else {
		var_1_19 = var_1_7;
	}


	// From: Req5Batch72100_while
	signed long int stepLocal_4 = last_1_var_1_8;
	if (last_1_var_1_23 <= stepLocal_4) {
		var_1_20 = (var_1_21 + 10.4f);
	} else {
		var_1_20 = var_1_21;
	}


	// From: Req6Batch72100_while
	if (var_1_20 > var_1_15) {
		var_1_22 = var_1_21;
	}


	// From: Req11Batch72100_while
	if (var_1_20 < var_1_14) {
		var_1_29 = (min ((max (var_1_24 , (var_1_30 - var_1_25))) , (max ((min (var_1_31 , var_1_32)) , var_1_33))));
	} else {
		var_1_29 = (max (var_1_24 , ((max (var_1_25 , var_1_34)) + var_1_35)));
	}


	// From: Req3Batch72100_while
	signed long int stepLocal_1 = (var_1_23 * var_1_23) & var_1_8;
	if ((var_1_22 / (min (var_1_14 , var_1_15))) >= (var_1_20 * var_1_26)) {
		if (var_1_14 >= (var_1_15 * var_1_22)) {
			var_1_12 = (var_1_23 + var_1_23);
		} else {
			var_1_12 = (last_1_var_1_12 + var_1_23);
		}
	} else {
		if ((var_1_23 >> last_1_var_1_12) > stepLocal_1) {
			var_1_12 = var_1_23;
		} else {
			var_1_12 = var_1_23;
		}
	}


	// From: Req1Batch72100_while
	unsigned char stepLocal_0 = var_1_28;
	if (stepLocal_0 || var_1_19) {
		var_1_1 = (var_1_19 && var_1_4);
	} else {
		var_1_1 = (var_1_4 && ((var_1_5 || var_1_6) || var_1_7));
	}


	// From: Req12Batch72100_while
	if ((var_1_12 < (var_1_33 + var_1_30)) || (256 > last_1_var_1_36)) {
		var_1_36 = var_1_30;
	} else {
		if (((var_1_28 || var_1_19) || var_1_7) && var_1_1) {
			var_1_36 = var_1_31;
		} else {
			var_1_36 = var_1_34;
		}
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	assume_abort_if_not(var_1_14 != 0.0F);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= 63);
	assume_abort_if_not(var_1_24 <= 126);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 32767);
	assume_abort_if_not(var_1_30 <= 65534);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 32767);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_36 = var_1_36;
}

int property() {
	return ((((((((((((var_1_28 || var_1_19) ? (var_1_1 == ((unsigned char) (var_1_19 && var_1_4))) : (var_1_1 == ((unsigned char) (var_1_4 && ((var_1_5 || var_1_6) || var_1_7))))) && (var_1_28 ? (var_1_8 == ((signed short int) (min ((-10000 + var_1_23) , ((var_1_23 + 64) + var_1_23))))) : (var_1_8 == ((signed short int) var_1_23)))) && (((var_1_22 / (min (var_1_14 , var_1_15))) >= (var_1_20 * var_1_26)) ? ((var_1_14 >= (var_1_15 * var_1_22)) ? (var_1_12 == ((signed long int) (var_1_23 + var_1_23))) : (var_1_12 == ((signed long int) (last_1_var_1_12 + var_1_23)))) : (((var_1_23 >> last_1_var_1_12) > ((var_1_23 * var_1_23) & var_1_8)) ? (var_1_12 == ((signed long int) var_1_23)) : (var_1_12 == ((signed long int) var_1_23))))) && (((var_1_27 < (var_1_23 >> 25)) && var_1_6) ? ((var_1_27 < (var_1_23 | var_1_23)) ? (var_1_19 == ((unsigned char) var_1_5)) : (var_1_19 == ((unsigned char) var_1_4))) : (var_1_19 == ((unsigned char) var_1_7)))) && ((last_1_var_1_23 <= last_1_var_1_8) ? (var_1_20 == ((float) (var_1_21 + 10.4f))) : (var_1_20 == ((float) var_1_21)))) && ((var_1_20 > var_1_15) ? (var_1_22 == ((double) var_1_21)) : 1)) && (((var_1_6 || last_1_var_1_28) && (var_1_21 != last_1_var_1_20)) ? (var_1_23 == ((signed char) (-1 - (var_1_24 - var_1_25)))) : (var_1_23 == ((signed char) (var_1_25 - var_1_24))))) && (var_1_5 ? (var_1_26 == ((double) (abs (var_1_21)))) : (var_1_26 == ((double) var_1_21)))) && (var_1_27 == ((unsigned short int) var_1_24))) && (var_1_7 ? (((last_1_var_1_23 + var_1_24) < (last_1_var_1_36 ^ last_1_var_1_29)) ? ((last_1_var_1_36 <= last_1_var_1_23) ? (var_1_28 == ((unsigned char) var_1_4)) : (var_1_28 == ((unsigned char) var_1_6))) : 1) : (var_1_28 == ((unsigned char) 0)))) && ((var_1_20 < var_1_14) ? (var_1_29 == ((unsigned short int) (min ((max (var_1_24 , (var_1_30 - var_1_25))) , (max ((min (var_1_31 , var_1_32)) , var_1_33)))))) : (var_1_29 == ((unsigned short int) (max (var_1_24 , ((max (var_1_25 , var_1_34)) + var_1_35))))))) && (((var_1_12 < (var_1_33 + var_1_30)) || (256 > last_1_var_1_36)) ? (var_1_36 == ((unsigned long int) var_1_30)) : ((((var_1_28 || var_1_19) || var_1_7) && var_1_1) ? (var_1_36 == ((unsigned long int) var_1_31)) : (var_1_36 == ((unsigned long int) var_1_34))))
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
