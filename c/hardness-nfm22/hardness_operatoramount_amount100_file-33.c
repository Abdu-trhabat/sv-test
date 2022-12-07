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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch33Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = 128;
signed long int var_1_2 = 1420370654;
signed char var_1_4 = -2;
signed char var_1_5 = 25;
signed char var_1_6 = -16;
signed char var_1_7 = -50;
signed char var_1_8 = -16;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 32;
float var_1_11 = 256.5;
float var_1_12 = -0.25;
float var_1_13 = 0.30000000000000004;
float var_1_14 = 49.5;
signed long int var_1_15 = -8;
unsigned char var_1_18 = 0;
signed char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 32;
unsigned short int var_1_26 = 45018;
unsigned char var_1_27 = 10;
unsigned char var_1_28 = 128;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 50;
signed short int var_1_31 = 8;
unsigned long int var_1_32 = 10;
unsigned short int var_1_33 = 16;
float var_1_34 = 9.4;
float var_1_35 = 25.5;
float var_1_36 = 24.6;
float var_1_37 = 9999999.2;
float var_1_38 = 16.375;
float var_1_39 = 50.625;
unsigned char var_1_41 = 0;
float var_1_42 = 32.625;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_25 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch33Amount100
	signed char stepLocal_0 = var_1_7;
	if (last_1_var_1_25 < stepLocal_0) {
		var_1_9 = (var_1_10 + 1);
	}


	// From: Req2Batch33Amount100
	var_1_4 = (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8));


	// From: Req9Batch33Amount100
	if (var_1_21) {
		var_1_27 = (var_1_28 - ((var_1_29 + var_1_30) - 8));
	} else {
		var_1_27 = (var_1_28 - var_1_30);
	}


	// From: Req14Batch33Amount100
	var_1_41 = var_1_29;


	// From: Req15Batch33Amount100
	var_1_42 = var_1_35;


	// From: Req6Batch33Amount100
	signed long int stepLocal_2 = var_1_41 + var_1_7;
	signed char stepLocal_1 = var_1_6;
	if (stepLocal_2 <= var_1_6) {
		if (stepLocal_1 == (var_1_10 - var_1_19)) {
			var_1_18 = ((var_1_20 && var_1_21) && var_1_22);
		} else {
			var_1_18 = var_1_22;
		}
	} else {
		var_1_18 = var_1_22;
	}


	// From: Req7Batch33Amount100
	if (var_1_21) {
		var_1_23 = (var_1_18 && var_1_24);
	} else {
		var_1_23 = var_1_24;
	}


	// From: Req10Batch33Amount100
	unsigned char stepLocal_7 = var_1_23;
	unsigned short int stepLocal_6 = var_1_26;
	signed char stepLocal_5 = var_1_4;
	unsigned char stepLocal_4 = var_1_13 > var_1_12;
	if ((var_1_24 && var_1_20) && stepLocal_7) {
		if (stepLocal_4 && var_1_21) {
			if (stepLocal_6 > var_1_27) {
				var_1_31 = (max (var_1_19 , var_1_7));
			} else {
				if (stepLocal_5 < var_1_27) {
					var_1_31 = (min ((var_1_4 - var_1_29) , var_1_10));
				} else {
					var_1_31 = var_1_28;
				}
			}
		}
	} else {
		var_1_31 = var_1_10;
	}


	// From: Req5Batch33Amount100
	if (! var_1_23) {
		var_1_15 = var_1_5;
	} else {
		if (var_1_12 > (var_1_14 - var_1_13)) {
			var_1_15 = (var_1_9 + var_1_8);
		} else {
			var_1_15 = 64;
		}
	}


	// From: Req12Batch33Amount100
	unsigned char stepLocal_8 = var_1_15 > -1;
	if (stepLocal_8 && var_1_18) {
		var_1_33 = (var_1_26 - var_1_15);
	} else {
		var_1_33 = (53655 - var_1_10);
	}


	// From: Req1Batch33Amount100
	var_1_1 = ((var_1_2 - 256) - var_1_33);


	// From: Req4Batch33Amount100
	if (var_1_1 < (var_1_1 & (var_1_10 | var_1_7))) {
		var_1_11 = (abs (var_1_12 + (var_1_13 - var_1_14)));
	}


	// From: Req11Batch33Amount100
	var_1_32 = (abs (min (var_1_1 , var_1_29)));


	// From: Req13Batch33Amount100
	unsigned char stepLocal_9 = var_1_20;
	if ((var_1_19 > (var_1_32 + var_1_8)) && stepLocal_9) {
		var_1_34 = (((min (var_1_35 , var_1_36)) + (min (var_1_37 , var_1_38))) + (var_1_14 - var_1_39));
	} else {
		if (var_1_18) {
			var_1_34 = (var_1_12 + (var_1_14 - var_1_13));
		}
	}


	// From: Req8Batch33Amount100
	signed char stepLocal_3 = var_1_8;
	if (stepLocal_3 != (var_1_19 + var_1_33)) {
		var_1_25 = ((abs (var_1_26)) - var_1_19);
	} else {
		var_1_25 = var_1_26;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 1073741822);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -31);
	assume_abort_if_not(var_1_5 <= 32);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -31);
	assume_abort_if_not(var_1_6 <= 31);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427382800e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 32767);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 127);
	assume_abort_if_not(var_1_28 <= 254);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 31);
	assume_abort_if_not(var_1_29 <= 64);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 32);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -230584.3009213691390e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691390e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -230584.3009213691390e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691390e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -230584.3009213691390e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 2305843.009213691390e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -230584.3009213691390e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 2305843.009213691390e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427382800e+12F && var_1_39 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_25 = var_1_25;
}

int property() {
	return ((((((((((((((var_1_1 == ((signed long int) ((var_1_2 - 256) - var_1_33))) && (var_1_4 == ((signed char) (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8))))) && ((last_1_var_1_25 < var_1_7) ? (var_1_9 == ((unsigned char) (var_1_10 + 1))) : 1)) && ((var_1_1 < (var_1_1 & (var_1_10 | var_1_7))) ? (var_1_11 == ((float) (abs (var_1_12 + (var_1_13 - var_1_14))))) : 1)) && ((! var_1_23) ? (var_1_15 == ((signed long int) var_1_5)) : ((var_1_12 > (var_1_14 - var_1_13)) ? (var_1_15 == ((signed long int) (var_1_9 + var_1_8))) : (var_1_15 == ((signed long int) 64))))) && (((var_1_41 + var_1_7) <= var_1_6) ? ((var_1_6 == (var_1_10 - var_1_19)) ? (var_1_18 == ((unsigned char) ((var_1_20 && var_1_21) && var_1_22))) : (var_1_18 == ((unsigned char) var_1_22))) : (var_1_18 == ((unsigned char) var_1_22)))) && (var_1_21 ? (var_1_23 == ((unsigned char) (var_1_18 && var_1_24))) : (var_1_23 == ((unsigned char) var_1_24)))) && ((var_1_8 != (var_1_19 + var_1_33)) ? (var_1_25 == ((unsigned short int) ((abs (var_1_26)) - var_1_19))) : (var_1_25 == ((unsigned short int) var_1_26)))) && (var_1_21 ? (var_1_27 == ((unsigned char) (var_1_28 - ((var_1_29 + var_1_30) - 8)))) : (var_1_27 == ((unsigned char) (var_1_28 - var_1_30))))) && (((var_1_24 && var_1_20) && var_1_23) ? (((var_1_13 > var_1_12) && var_1_21) ? ((var_1_26 > var_1_27) ? (var_1_31 == ((signed short int) (max (var_1_19 , var_1_7)))) : ((var_1_4 < var_1_27) ? (var_1_31 == ((signed short int) (min ((var_1_4 - var_1_29) , var_1_10)))) : (var_1_31 == ((signed short int) var_1_28)))) : 1) : (var_1_31 == ((signed short int) var_1_10)))) && (var_1_32 == ((unsigned long int) (abs (min (var_1_1 , var_1_29)))))) && (((var_1_15 > -1) && var_1_18) ? (var_1_33 == ((unsigned short int) (var_1_26 - var_1_15))) : (var_1_33 == ((unsigned short int) (53655 - var_1_10))))) && (((var_1_19 > (var_1_32 + var_1_8)) && var_1_20) ? (var_1_34 == ((float) (((min (var_1_35 , var_1_36)) + (min (var_1_37 , var_1_38))) + (var_1_14 - var_1_39)))) : (var_1_18 ? (var_1_34 == ((float) (var_1_12 + (var_1_14 - var_1_13)))) : 1))) && (var_1_41 == ((unsigned char) var_1_29))) && (var_1_42 == ((float) var_1_35))
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
