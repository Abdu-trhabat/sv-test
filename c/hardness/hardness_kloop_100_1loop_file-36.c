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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch36100_1loop.c", 13, "reach_error"); }
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
float var_1_1 = -0.5;
unsigned char var_1_2 = 0;
float var_1_4 = 32.5;
float var_1_5 = 10.25;
float var_1_6 = 15.2;
unsigned short int var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned short int var_1_9 = 10;
unsigned short int var_1_10 = 1;
unsigned short int var_1_11 = 16;
signed short int var_1_12 = 8;
signed short int var_1_13 = -16;
unsigned char var_1_14 = 1;
signed short int var_1_15 = 1000;
unsigned long int var_1_16 = 0;
unsigned long int var_1_17 = 1790089366;
unsigned long int var_1_18 = 1816612959;
unsigned long int var_1_19 = 2;
unsigned char var_1_20 = 32;
signed short int var_1_21 = -8;
double var_1_22 = 3.3;
double var_1_23 = 4.95;
double var_1_24 = 10.875;
signed long int var_1_25 = 10;
unsigned long int var_1_26 = 0;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 50;
unsigned short int var_1_30 = 200;
unsigned short int var_1_32 = 45111;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_16 = 0;
unsigned long int last_1_var_1_19 = 2;
unsigned long int last_1_var_1_26 = 0;
unsigned char last_1_var_1_27 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch36100_1loop
	if (last_1_var_1_27) {
		if (last_1_var_1_27) {
			var_1_7 = (max ((var_1_9 + var_1_10) , var_1_11));
		} else {
			if (((var_1_10 + last_1_var_1_16) / var_1_12) <= var_1_11) {
				var_1_7 = var_1_11;
			}
		}
	}


	// From: Req8Batch36100_1loop
	if (var_1_4 != var_1_22) {
		var_1_25 = ((min (last_1_var_1_26 , (max (var_1_10 , 8)))) + (abs (var_1_15 + last_1_var_1_19)));
	} else {
		var_1_25 = (var_1_12 + var_1_10);
	}


	// From: Req3Batch36100_1loop
	if ((var_1_9 - var_1_10) == (min (var_1_11 , (var_1_25 >> var_1_14)))) {
		var_1_13 = 8;
	} else {
		var_1_13 = (max (var_1_14 , var_1_15));
	}


	// From: Req7Batch36100_1loop
	unsigned char stepLocal_4 = var_1_2;
	if (var_1_8 && stepLocal_4) {
		if ((var_1_5 - (var_1_22 + var_1_23)) <= ((max (var_1_4 , var_1_6)) - var_1_24)) {
			var_1_21 = 100;
		}
	} else {
		var_1_21 = var_1_15;
	}


	// From: Req10Batch36100_1loop
	var_1_27 = (! var_1_28);


	// From: Req5Batch36100_1loop
	if (var_1_21 >= var_1_18) {
		var_1_19 = (min (var_1_9 , var_1_10));
	}


	// From: Req4Batch36100_1loop
	unsigned short int stepLocal_2 = var_1_7;
	unsigned char stepLocal_1 = var_1_14;
	if (stepLocal_1 <= var_1_11) {
		var_1_16 = ((abs (abs (3808567585u))) - var_1_9);
	} else {
		if (stepLocal_2 == var_1_25) {
			var_1_16 = (((var_1_17 + var_1_18) - var_1_9) - var_1_10);
		}
	}


	// From: Req9Batch36100_1loop
	if (! var_1_27) {
		var_1_26 = (max ((max (last_1_var_1_26 , var_1_11)) , var_1_10));
	} else {
		var_1_26 = (min (var_1_25 , 8u));
	}


	// From: Req1Batch36100_1loop
	signed long int stepLocal_0 = -5 + 64;
	if (var_1_27) {
		if (stepLocal_0 < var_1_26) {
			var_1_1 = (max ((var_1_4 - var_1_5) , (var_1_6 - 5.4f)));
		} else {
			var_1_1 = var_1_6;
		}
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req6Batch36100_1loop
	signed long int stepLocal_3 = var_1_25;
	if (var_1_27) {
		if ((var_1_26 * (var_1_10 & var_1_14)) > stepLocal_3) {
			if (var_1_27) {
				var_1_20 = var_1_14;
			} else {
				var_1_20 = 100;
			}
		}
	} else {
		var_1_20 = 50;
	}


	// From: Req11Batch36100_1loop
	unsigned long int stepLocal_8 = abs (25u);
	unsigned long int stepLocal_7 = var_1_19;
	unsigned long int stepLocal_6 = var_1_19 / (abs (var_1_14));
	unsigned long int stepLocal_5 = var_1_26;
	if (var_1_16 < stepLocal_7) {
		var_1_29 = (var_1_14 + var_1_30);
	} else {
		if (stepLocal_6 != var_1_26) {
			if ((var_1_30 - (min (var_1_14 , var_1_16))) >= stepLocal_5) {
				var_1_29 = (var_1_32 - var_1_16);
			}
		} else {
			if (var_1_19 <= stepLocal_8) {
				var_1_29 = var_1_9;
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -32768);
	assume_abort_if_not(var_1_12 <= 32767);
	assume_abort_if_not(var_1_12 != 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 15);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32767);
	assume_abort_if_not(var_1_15 <= 32766);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 1610612735);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 1610612735);
	assume_abort_if_not(var_1_18 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427388000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427388000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 32767);
	assume_abort_if_not(var_1_32 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	return ((((((((((var_1_27 ? (((-5 + 64) < var_1_26) ? (var_1_1 == ((float) (max ((var_1_4 - var_1_5) , (var_1_6 - 5.4f))))) : (var_1_1 == ((float) var_1_6))) : (var_1_1 == ((float) var_1_6))) && (last_1_var_1_27 ? (last_1_var_1_27 ? (var_1_7 == ((unsigned short int) (max ((var_1_9 + var_1_10) , var_1_11)))) : ((((var_1_10 + last_1_var_1_16) / var_1_12) <= var_1_11) ? (var_1_7 == ((unsigned short int) var_1_11)) : 1)) : 1)) && (((var_1_9 - var_1_10) == (min (var_1_11 , (var_1_25 >> var_1_14)))) ? (var_1_13 == ((signed short int) 8)) : (var_1_13 == ((signed short int) (max (var_1_14 , var_1_15)))))) && ((var_1_14 <= var_1_11) ? (var_1_16 == ((unsigned long int) ((abs (abs (3808567585u))) - var_1_9))) : ((var_1_7 == var_1_25) ? (var_1_16 == ((unsigned long int) (((var_1_17 + var_1_18) - var_1_9) - var_1_10))) : 1))) && ((var_1_21 >= var_1_18) ? (var_1_19 == ((unsigned long int) (min (var_1_9 , var_1_10)))) : 1)) && (var_1_27 ? (((var_1_26 * (var_1_10 & var_1_14)) > var_1_25) ? (var_1_27 ? (var_1_20 == ((unsigned char) var_1_14)) : (var_1_20 == ((unsigned char) 100))) : 1) : (var_1_20 == ((unsigned char) 50)))) && ((var_1_8 && var_1_2) ? (((var_1_5 - (var_1_22 + var_1_23)) <= ((max (var_1_4 , var_1_6)) - var_1_24)) ? (var_1_21 == ((signed short int) 100)) : 1) : (var_1_21 == ((signed short int) var_1_15)))) && ((var_1_4 != var_1_22) ? (var_1_25 == ((signed long int) ((min (last_1_var_1_26 , (max (var_1_10 , 8)))) + (abs (var_1_15 + last_1_var_1_19))))) : (var_1_25 == ((signed long int) (var_1_12 + var_1_10))))) && ((! var_1_27) ? (var_1_26 == ((unsigned long int) (max ((max (last_1_var_1_26 , var_1_11)) , var_1_10)))) : (var_1_26 == ((unsigned long int) (min (var_1_25 , 8u)))))) && (var_1_27 == ((unsigned char) (! var_1_28)))) && ((var_1_16 < var_1_19) ? (var_1_29 == ((unsigned short int) (var_1_14 + var_1_30))) : (((var_1_19 / (abs (var_1_14))) != var_1_26) ? (((var_1_30 - (min (var_1_14 , var_1_16))) >= var_1_26) ? (var_1_29 == ((unsigned short int) (var_1_32 - var_1_16))) : 1) : ((var_1_19 <= (abs (25u))) ? (var_1_29 == ((unsigned short int) var_1_9)) : 1)))
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
