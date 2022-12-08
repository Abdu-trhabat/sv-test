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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch46Amount100.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.25;
double var_1_2 = 4.6;
double var_1_3 = 1.25;
double var_1_4 = 0.0;
double var_1_5 = 2.8;
double var_1_6 = 7.8;
double var_1_7 = 100000000000000.72;
double var_1_8 = 10.3;
double var_1_9 = 64.875;
unsigned short int var_1_10 = 10;
unsigned char var_1_11 = 1;
signed long int var_1_14 = -8;
signed long int var_1_15 = 500;
unsigned short int var_1_18 = 62040;
unsigned short int var_1_19 = 33955;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 2;
signed short int var_1_24 = -10;
unsigned long int var_1_27 = 50;
unsigned long int var_1_28 = 3866296796;
unsigned long int var_1_29 = 2;
signed char var_1_30 = 64;
signed char var_1_31 = 10;
signed char var_1_32 = 2;
signed char var_1_33 = 32;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 16;
float var_1_37 = 4.55;
signed char var_1_38 = 4;
signed char var_1_40 = 50;
signed char var_1_41 = 50;
signed short int var_1_42 = -32;
unsigned short int var_1_43 = 2;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_10 = 10;
signed short int last_1_var_1_24 = -10;
unsigned char last_1_var_1_34 = 64;
signed char last_1_var_1_38 = 4;
unsigned short int last_1_var_1_43 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch46Amount100
	if (var_1_5 != var_1_2) {
		if ((last_1_var_1_10 / 5u) >= 0u) {
			var_1_24 = last_1_var_1_34;
		} else {
			var_1_24 = (min (last_1_var_1_34 , last_1_var_1_38));
		}
	}


	// From: Req2Batch46Amount100
	signed long int stepLocal_0 = (last_1_var_1_43 - last_1_var_1_43) % (min (var_1_14 , var_1_15));
	if (var_1_11) {
		if (stepLocal_0 != ((~ last_1_var_1_34) + last_1_var_1_24)) {
			var_1_10 = ((abs (max (var_1_18 , var_1_19))) - last_1_var_1_34);
		}
	} else {
		if (var_1_21) {
			var_1_10 = last_1_var_1_34;
		} else {
			var_1_10 = var_1_19;
		}
	}


	// From: Req8Batch46Amount100
	if (var_1_10 < var_1_14) {
		var_1_34 = (max ((max ((abs (var_1_35)) , 128)) , var_1_36));
	}


	// From: Req1Batch46Amount100
	if (16.75 > (var_1_2 - var_1_3)) {
		var_1_1 = ((var_1_4 - (max (var_1_5 , var_1_6))) - (max ((var_1_7 + var_1_8) , var_1_9)));
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req7Batch46Amount100
	if (var_1_34 <= var_1_14) {
		var_1_30 = ((var_1_31 + var_1_32) + var_1_33);
	}


	// From: Req9Batch46Amount100
	var_1_37 = (max (var_1_8 , var_1_6));


	// From: Req11Batch46Amount100
	if (var_1_11) {
		var_1_42 = (var_1_36 - var_1_35);
	} else {
		if (var_1_21) {
			var_1_42 = (max (var_1_35 , var_1_24));
		} else {
			var_1_42 = var_1_24;
		}
	}


	// From: Req12Batch46Amount100
	if (((min (var_1_24 , var_1_34)) | (~ var_1_31)) >= var_1_10) {
		if (var_1_28 < var_1_15) {
			var_1_43 = 128;
		}
	}


	// From: Req3Batch46Amount100
	if (var_1_19 < (var_1_18 - var_1_34)) {
		var_1_22 = (max ((var_1_18 + 32u) , var_1_43));
	} else {
		if (var_1_21) {
			var_1_22 = 16u;
		} else {
			var_1_22 = var_1_10;
		}
	}


	// From: Req6Batch46Amount100
	unsigned char stepLocal_2 = var_1_21;
	if (((var_1_34 / var_1_15) <= var_1_22) && stepLocal_2) {
		if ((- (var_1_2 / var_1_4)) > var_1_9) {
			var_1_29 = var_1_10;
		} else {
			var_1_29 = var_1_34;
		}
	} else {
		var_1_29 = var_1_10;
	}


	// From: Req10Batch46Amount100
	if (var_1_6 > var_1_37) {
		if (! (var_1_29 <= var_1_36)) {
			var_1_38 = (var_1_40 - var_1_41);
		} else {
			var_1_38 = (abs (var_1_33));
		}
	}


	// From: Req5Batch46Amount100
	unsigned long int stepLocal_1 = var_1_22;
	if (var_1_11) {
		if (var_1_21) {
			if (stepLocal_1 > (max (var_1_14 , var_1_19))) {
				var_1_27 = (var_1_28 - var_1_34);
			} else {
				var_1_27 = (var_1_28 - var_1_34);
			}
		} else {
			var_1_27 = var_1_34;
		}
	} else {
		var_1_27 = var_1_18;
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 4611686.018427382800e+12F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483648);
	assume_abort_if_not(var_1_15 <= 2147483647);
	assume_abort_if_not(var_1_15 != 0);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 32767);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 2147483647);
	assume_abort_if_not(var_1_28 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -31);
	assume_abort_if_not(var_1_31 <= 32);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -31);
	assume_abort_if_not(var_1_32 <= 31);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -63);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -1);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 126);
}



void updateLastVariables() {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_43 = var_1_43;
}

int property() {
	return ((((((((((((16.75 > (var_1_2 - var_1_3)) ? (var_1_1 == ((double) ((var_1_4 - (max (var_1_5 , var_1_6))) - (max ((var_1_7 + var_1_8) , var_1_9))))) : (var_1_1 == ((double) var_1_6))) && (var_1_11 ? ((((last_1_var_1_43 - last_1_var_1_43) % (min (var_1_14 , var_1_15))) != ((~ last_1_var_1_34) + last_1_var_1_24)) ? (var_1_10 == ((unsigned short int) ((abs (max (var_1_18 , var_1_19))) - last_1_var_1_34))) : 1) : (var_1_21 ? (var_1_10 == ((unsigned short int) last_1_var_1_34)) : (var_1_10 == ((unsigned short int) var_1_19))))) && ((var_1_19 < (var_1_18 - var_1_34)) ? (var_1_22 == ((unsigned long int) (max ((var_1_18 + 32u) , var_1_43)))) : (var_1_21 ? (var_1_22 == ((unsigned long int) 16u)) : (var_1_22 == ((unsigned long int) var_1_10))))) && ((var_1_5 != var_1_2) ? (((last_1_var_1_10 / 5u) >= 0u) ? (var_1_24 == ((signed short int) last_1_var_1_34)) : (var_1_24 == ((signed short int) (min (last_1_var_1_34 , last_1_var_1_38))))) : 1)) && (var_1_11 ? (var_1_21 ? ((var_1_22 > (max (var_1_14 , var_1_19))) ? (var_1_27 == ((unsigned long int) (var_1_28 - var_1_34))) : (var_1_27 == ((unsigned long int) (var_1_28 - var_1_34)))) : (var_1_27 == ((unsigned long int) var_1_34))) : (var_1_27 == ((unsigned long int) var_1_18)))) && ((((var_1_34 / var_1_15) <= var_1_22) && var_1_21) ? (((- (var_1_2 / var_1_4)) > var_1_9) ? (var_1_29 == ((unsigned long int) var_1_10)) : (var_1_29 == ((unsigned long int) var_1_34))) : (var_1_29 == ((unsigned long int) var_1_10)))) && ((var_1_34 <= var_1_14) ? (var_1_30 == ((signed char) ((var_1_31 + var_1_32) + var_1_33))) : 1)) && ((var_1_10 < var_1_14) ? (var_1_34 == ((unsigned char) (max ((max ((abs (var_1_35)) , 128)) , var_1_36)))) : 1)) && (var_1_37 == ((float) (max (var_1_8 , var_1_6))))) && ((var_1_6 > var_1_37) ? ((! (var_1_29 <= var_1_36)) ? (var_1_38 == ((signed char) (var_1_40 - var_1_41))) : (var_1_38 == ((signed char) (abs (var_1_33))))) : 1)) && (var_1_11 ? (var_1_42 == ((signed short int) (var_1_36 - var_1_35))) : (var_1_21 ? (var_1_42 == ((signed short int) (max (var_1_35 , var_1_24)))) : (var_1_42 == ((signed short int) var_1_24))))) && ((((min (var_1_24 , var_1_34)) | (~ var_1_31)) >= var_1_10) ? ((var_1_28 < var_1_15) ? (var_1_43 == ((unsigned short int) 128)) : 1) : 1)
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
