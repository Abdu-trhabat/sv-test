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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch61100_1loop.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 64;
unsigned long int var_1_2 = 3511246143;
unsigned char var_1_3 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 5;
unsigned long int var_1_8 = 2220610682;
unsigned long int var_1_9 = 3786407275;
unsigned char var_1_12 = 64;
unsigned long int var_1_13 = 100;
signed long int var_1_14 = 1;
unsigned long int var_1_15 = 3489174775;
signed char var_1_16 = 1;
signed char var_1_17 = -16;
signed short int var_1_18 = 0;
signed short int var_1_19 = 64;
signed short int var_1_20 = 2;
double var_1_21 = 7.5;
double var_1_22 = 99.5;
signed short int var_1_23 = 500;
unsigned short int var_1_24 = 5;
double var_1_25 = 127.5;
unsigned short int var_1_26 = 33797;
unsigned short int var_1_28 = 27913;
signed long int var_1_30 = 2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 5;
signed short int last_1_var_1_18 = 0;
unsigned short int last_1_var_1_24 = 5;
signed long int last_1_var_1_30 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch61100_1loop
	unsigned long int stepLocal_5 = var_1_9;
	unsigned long int stepLocal_4 = min (0u , (max (last_1_var_1_7 , last_1_var_1_24)));
	if (last_1_var_1_30 >= stepLocal_5) {
		if ((last_1_var_1_30 / var_1_8) > stepLocal_4) {
			if (var_1_6) {
				var_1_23 = var_1_12;
			} else {
				var_1_23 = last_1_var_1_24;
			}
		} else {
			var_1_23 = var_1_17;
		}
	} else {
		var_1_23 = var_1_12;
	}


	// From: Req10Batch61100_1loop
	signed long int stepLocal_6 = -1;
	if (var_1_22 <= (min (var_1_21 , var_1_25))) {
		var_1_24 = (max ((var_1_26 - (min (last_1_var_1_24 , var_1_12))) , last_1_var_1_7));
	} else {
		if ((last_1_var_1_24 + (last_1_var_1_18 / 16)) < stepLocal_6) {
			var_1_24 = ((min ((abs (var_1_12)) , last_1_var_1_24)) + ((abs (var_1_28)) - (last_1_var_1_7 + 2)));
		}
	}


	// From: Req3Batch61100_1loop
	if ((last_1_var_1_7 >> var_1_2) >= ((min (var_1_8 , var_1_9)) - (min (last_1_var_1_24 , last_1_var_1_24)))) {
		var_1_7 = var_1_12;
	} else {
		var_1_7 = var_1_12;
	}


	// From: Req8Batch61100_1loop
	if ((min (var_1_21 , var_1_22)) >= (- 9.5)) {
		var_1_20 = var_1_7;
	}


	// From: Req1Batch61100_1loop
	var_1_1 = (var_1_2 - 8u);


	// From: Req4Batch61100_1loop
	signed long int stepLocal_1 = var_1_12 ^ var_1_7;
	signed long int stepLocal_0 = var_1_24 % var_1_14;
	if (stepLocal_0 > 16u) {
		if (var_1_14 < stepLocal_1) {
			var_1_13 = (max ((max (var_1_7 , var_1_2)) , ((var_1_15 - var_1_23) - var_1_24)));
		}
	} else {
		var_1_13 = (min (var_1_24 , var_1_7));
	}


	// From: Req5Batch61100_1loop
	if (var_1_12 >= var_1_7) {
		var_1_16 = var_1_17;
	}


	// From: Req11Batch61100_1loop
	unsigned char stepLocal_9 = var_1_6;
	unsigned short int stepLocal_8 = var_1_24;
	signed char stepLocal_7 = var_1_16;
	if ((last_1_var_1_30 / var_1_26) != stepLocal_8) {
		if (var_1_23 <= stepLocal_7) {
			var_1_30 = (abs (var_1_28));
		} else {
			if ((var_1_25 != (- 50.7)) && stepLocal_9) {
				if (var_1_6) {
					var_1_30 = var_1_15;
				}
			} else {
				var_1_30 = var_1_7;
			}
		}
	} else {
		var_1_30 = var_1_7;
	}


	// From: Req2Batch61100_1loop
	if (((- var_1_2) + var_1_7) != var_1_24) {
		if (var_1_2 >= var_1_24) {
			var_1_3 = 1;
		} else {
			var_1_3 = var_1_5;
		}
	} else {
		var_1_3 = var_1_6;
	}


	// From: Req6Batch61100_1loop
	unsigned long int stepLocal_2 = var_1_2;
	if (var_1_8 > stepLocal_2) {
		var_1_18 = ((max (-32 , var_1_12)) + (min (var_1_20 , last_1_var_1_18)));
	} else {
		if (var_1_3) {
			var_1_18 = var_1_12;
		} else {
			var_1_18 = var_1_20;
		}
	}


	// From: Req7Batch61100_1loop
	unsigned char stepLocal_3 = var_1_12;
	if (var_1_3) {
		var_1_19 = var_1_17;
	} else {
		if (stepLocal_3 < 100) {
			var_1_19 = (abs (var_1_17));
		} else {
			if (var_1_5) {
				var_1_19 = var_1_13;
			}
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 2147483647);
	assume_abort_if_not(var_1_2 <= 4294967294);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967295);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 3221225470);
	assume_abort_if_not(var_1_15 <= 4294967294);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 16383);
	assume_abort_if_not(var_1_28 <= 32767);
}



void updateLastVariables() {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_30 = var_1_30;
}

int property() {
	return ((((((((((var_1_1 == ((unsigned long int) (var_1_2 - 8u))) && ((((- var_1_2) + var_1_7) != var_1_24) ? ((var_1_2 >= var_1_24) ? (var_1_3 == ((unsigned char) 1)) : (var_1_3 == ((unsigned char) var_1_5))) : (var_1_3 == ((unsigned char) var_1_6)))) && (((last_1_var_1_7 >> var_1_2) >= ((min (var_1_8 , var_1_9)) - (min (last_1_var_1_24 , last_1_var_1_24)))) ? (var_1_7 == ((unsigned char) var_1_12)) : (var_1_7 == ((unsigned char) var_1_12)))) && (((var_1_24 % var_1_14) > 16u) ? ((var_1_14 < (var_1_12 ^ var_1_7)) ? (var_1_13 == ((unsigned long int) (max ((max (var_1_7 , var_1_2)) , ((var_1_15 - var_1_23) - var_1_24))))) : 1) : (var_1_13 == ((unsigned long int) (min (var_1_24 , var_1_7)))))) && ((var_1_12 >= var_1_7) ? (var_1_16 == ((signed char) var_1_17)) : 1)) && ((var_1_8 > var_1_2) ? (var_1_18 == ((signed short int) ((max (-32 , var_1_12)) + (min (var_1_20 , last_1_var_1_18))))) : (var_1_3 ? (var_1_18 == ((signed short int) var_1_12)) : (var_1_18 == ((signed short int) var_1_20))))) && (var_1_3 ? (var_1_19 == ((signed short int) var_1_17)) : ((var_1_12 < 100) ? (var_1_19 == ((signed short int) (abs (var_1_17)))) : (var_1_5 ? (var_1_19 == ((signed short int) var_1_13)) : 1)))) && (((min (var_1_21 , var_1_22)) >= (- 9.5)) ? (var_1_20 == ((signed short int) var_1_7)) : 1)) && ((last_1_var_1_30 >= var_1_9) ? (((last_1_var_1_30 / var_1_8) > (min (0u , (max (last_1_var_1_7 , last_1_var_1_24))))) ? (var_1_6 ? (var_1_23 == ((signed short int) var_1_12)) : (var_1_23 == ((signed short int) last_1_var_1_24))) : (var_1_23 == ((signed short int) var_1_17))) : (var_1_23 == ((signed short int) var_1_12)))) && ((var_1_22 <= (min (var_1_21 , var_1_25))) ? (var_1_24 == ((unsigned short int) (max ((var_1_26 - (min (last_1_var_1_24 , var_1_12))) , last_1_var_1_7)))) : (((last_1_var_1_24 + (last_1_var_1_18 / 16)) < -1) ? (var_1_24 == ((unsigned short int) ((min ((abs (var_1_12)) , last_1_var_1_24)) + ((abs (var_1_28)) - (last_1_var_1_7 + 2))))) : 1))) && (((last_1_var_1_30 / var_1_26) != var_1_24) ? ((var_1_23 <= var_1_16) ? (var_1_30 == ((signed long int) (abs (var_1_28)))) : (((var_1_25 != (- 50.7)) && var_1_6) ? (var_1_6 ? (var_1_30 == ((signed long int) var_1_15)) : 1) : (var_1_30 == ((signed long int) var_1_7)))) : (var_1_30 == ((signed long int) var_1_7)))
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
