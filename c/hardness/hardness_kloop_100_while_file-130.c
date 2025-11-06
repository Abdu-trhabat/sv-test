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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch130100_while.c", 13, "reach_error"); }
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
signed long int var_1_1 = -4;
signed long int var_1_5 = 1788365988;
signed long int var_1_6 = 25;
signed long int var_1_7 = -16;
unsigned char var_1_8 = 1;
unsigned long int var_1_9 = 10;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed short int var_1_15 = 1;
signed short int var_1_16 = 10;
float var_1_17 = 1.4;
float var_1_18 = 9999999.125;
float var_1_19 = 999.6;
unsigned short int var_1_20 = 4;
unsigned long int var_1_21 = 5;
unsigned short int var_1_22 = 29471;
unsigned short int var_1_23 = 50;
unsigned short int var_1_24 = 64;
unsigned short int var_1_25 = 0;
unsigned short int var_1_26 = 54520;
unsigned short int var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
float var_1_31 = 0.75;
float var_1_32 = 3.91;
float var_1_33 = 0.75;
float var_1_34 = 127.5;
float var_1_35 = 64.75;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_8 = 1;
signed short int last_1_var_1_15 = 1;
unsigned short int last_1_var_1_25 = 0;
unsigned char last_1_var_1_28 = 0;
unsigned char last_1_var_1_30 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch130100_while
	signed long int stepLocal_3 = (max (var_1_5 , 0)) >> var_1_9;
	unsigned long int stepLocal_2 = var_1_9;
	if (var_1_6 > stepLocal_3) {
		if (var_1_7 >= stepLocal_2) {
			if (last_1_var_1_30) {
				var_1_8 = ((last_1_var_1_28 || (var_1_11 && var_1_12)) && var_1_13);
			} else {
				var_1_8 = (! var_1_14);
			}
		}
	}


	// From: Req1Batch130100_while
	signed long int stepLocal_1 = last_1_var_1_25;
	signed long int stepLocal_0 = last_1_var_1_15;
	if (last_1_var_1_8) {
		if (stepLocal_0 != last_1_var_1_25) {
			if (last_1_var_1_15 < stepLocal_1) {
				var_1_1 = ((var_1_5 - (max (2 , var_1_6))) - 64);
			} else {
				var_1_1 = var_1_7;
			}
		} else {
			var_1_1 = last_1_var_1_25;
		}
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req5Batch130100_while
	if ((min (var_1_6 , var_1_9)) > (var_1_5 + (var_1_1 & var_1_21))) {
		var_1_20 = (((28361 + var_1_22) - var_1_9) - var_1_23);
	}


	// From: Req6Batch130100_while
	unsigned long int stepLocal_6 = max (var_1_9 , var_1_1);
	if (stepLocal_6 > var_1_5) {
		var_1_24 = (min (var_1_22 , var_1_23));
	}


	// From: Req7Batch130100_while
	if (var_1_6 > var_1_7) {
		var_1_25 = 16;
	} else {
		var_1_25 = ((var_1_26 - var_1_9) - var_1_23);
	}


	// From: Req11Batch130100_while
	signed long int stepLocal_10 = var_1_1;
	signed long int stepLocal_9 = var_1_1;
	if (var_1_18 == var_1_19) {
		if (stepLocal_10 < var_1_21) {
			var_1_31 = ((max (var_1_19 , var_1_32)) + var_1_33);
		} else {
			var_1_31 = (var_1_34 - var_1_35);
		}
	} else {
		if (var_1_8) {
			if (stepLocal_9 < 10) {
				var_1_31 = var_1_35;
			} else {
				var_1_31 = var_1_32;
			}
		}
	}


	// From: Req8Batch130100_while
	if (var_1_9 < var_1_25) {
		if (var_1_31 > var_1_19) {
			if ((- var_1_5) <= var_1_6) {
				var_1_27 = var_1_22;
			} else {
				var_1_27 = 5;
			}
		} else {
			var_1_27 = var_1_26;
		}
	}


	// From: Req4Batch130100_while
	signed long int stepLocal_5 = var_1_25 & (max (var_1_27 , -5));
	if (var_1_6 >= stepLocal_5) {
		var_1_17 = var_1_18;
	} else {
		var_1_17 = (16.375f + var_1_19);
	}


	// From: Req9Batch130100_while
	if (var_1_18 != var_1_17) {
		if (var_1_11) {
			var_1_28 = ((var_1_12 && var_1_14) || var_1_29);
		}
	}


	// From: Req10Batch130100_while
	unsigned long int stepLocal_8 = (abs (var_1_20)) / var_1_9;
	unsigned long int stepLocal_7 = max (var_1_9 , (var_1_22 + var_1_6));
	if (var_1_7 < stepLocal_8) {
		if (var_1_24 >= stepLocal_7) {
			var_1_30 = var_1_29;
		} else {
			var_1_30 = var_1_13;
		}
	} else {
		var_1_30 = var_1_29;
	}


	// From: Req3Batch130100_while
	signed long int stepLocal_4 = 128;
	if (var_1_30) {
		if (var_1_25 > stepLocal_4) {
			var_1_15 = (1000 - (25806 - var_1_9));
		} else {
			var_1_15 = var_1_9;
		}
	} else {
		var_1_15 = var_1_16;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 1073741822);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 30);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= -16383);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 4294967295);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 24575);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 49150);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_25 = var_1_25;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_30 = var_1_30;
}

int property(void) {
	return ((((((((((last_1_var_1_8 ? ((last_1_var_1_15 != last_1_var_1_25) ? ((last_1_var_1_15 < last_1_var_1_25) ? (var_1_1 == ((signed long int) ((var_1_5 - (max (2 , var_1_6))) - 64))) : (var_1_1 == ((signed long int) var_1_7))) : (var_1_1 == ((signed long int) last_1_var_1_25))) : (var_1_1 == ((signed long int) var_1_6))) && ((var_1_6 > ((max (var_1_5 , 0)) >> var_1_9)) ? ((var_1_7 >= var_1_9) ? (last_1_var_1_30 ? (var_1_8 == ((unsigned char) ((last_1_var_1_28 || (var_1_11 && var_1_12)) && var_1_13))) : (var_1_8 == ((unsigned char) (! var_1_14)))) : 1) : 1)) && (var_1_30 ? ((var_1_25 > 128) ? (var_1_15 == ((signed short int) (1000 - (25806 - var_1_9)))) : (var_1_15 == ((signed short int) var_1_9))) : (var_1_15 == ((signed short int) var_1_16)))) && ((var_1_6 >= (var_1_25 & (max (var_1_27 , -5)))) ? (var_1_17 == ((float) var_1_18)) : (var_1_17 == ((float) (16.375f + var_1_19))))) && (((min (var_1_6 , var_1_9)) > (var_1_5 + (var_1_1 & var_1_21))) ? (var_1_20 == ((unsigned short int) (((28361 + var_1_22) - var_1_9) - var_1_23))) : 1)) && (((max (var_1_9 , var_1_1)) > var_1_5) ? (var_1_24 == ((unsigned short int) (min (var_1_22 , var_1_23)))) : 1)) && ((var_1_6 > var_1_7) ? (var_1_25 == ((unsigned short int) 16)) : (var_1_25 == ((unsigned short int) ((var_1_26 - var_1_9) - var_1_23))))) && ((var_1_9 < var_1_25) ? ((var_1_31 > var_1_19) ? (((- var_1_5) <= var_1_6) ? (var_1_27 == ((unsigned short int) var_1_22)) : (var_1_27 == ((unsigned short int) 5))) : (var_1_27 == ((unsigned short int) var_1_26))) : 1)) && ((var_1_18 != var_1_17) ? (var_1_11 ? (var_1_28 == ((unsigned char) ((var_1_12 && var_1_14) || var_1_29))) : 1) : 1)) && ((var_1_7 < ((abs (var_1_20)) / var_1_9)) ? ((var_1_24 >= (max (var_1_9 , (var_1_22 + var_1_6)))) ? (var_1_30 == ((unsigned char) var_1_29)) : (var_1_30 == ((unsigned char) var_1_13))) : (var_1_30 == ((unsigned char) var_1_29)))) && ((var_1_18 == var_1_19) ? ((var_1_1 < var_1_21) ? (var_1_31 == ((float) ((max (var_1_19 , var_1_32)) + var_1_33))) : (var_1_31 == ((float) (var_1_34 - var_1_35)))) : (var_1_8 ? ((var_1_1 < 10) ? (var_1_31 == ((float) var_1_35)) : (var_1_31 == ((float) var_1_32))) : 1))
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
