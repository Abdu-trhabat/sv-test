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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch46100_1loop.c", 13, "reach_error"); }
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
signed long int var_1_12 = 16;
signed long int var_1_13 = 10;
signed long int var_1_14 = -8;
signed long int var_1_15 = 500;
unsigned short int var_1_18 = 62040;
unsigned short int var_1_19 = 33955;
unsigned short int var_1_20 = 4;
unsigned char var_1_21 = 0;
unsigned long int var_1_22 = 2;
unsigned long int var_1_23 = 5;
signed short int var_1_24 = -10;
signed short int var_1_25 = -1;
signed short int var_1_26 = -128;
unsigned long int var_1_27 = 50;
unsigned long int var_1_28 = 3866296796;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 64;
signed short int var_1_31 = 256;
signed short int var_1_32 = -32;
unsigned char var_1_33 = 128;
unsigned long int var_1_34 = 256;
signed char var_1_35 = -128;
signed char var_1_36 = -1;
signed char var_1_37 = 64;
signed char var_1_38 = 25;
signed char var_1_39 = 2;
float var_1_40 = 1.2;
unsigned short int var_1_41 = 25;
signed long int var_1_42 = 1405695737;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_10 = 10;
unsigned long int last_1_var_1_34 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch46100_1loop
	unsigned long int stepLocal_1 = last_1_var_1_34;
	if (var_1_11) {
		if (var_1_21) {
			if (stepLocal_1 > (max (var_1_14 , var_1_19))) {
				var_1_27 = (var_1_28 - last_1_var_1_10);
			} else {
				var_1_27 = var_1_20;
			}
		} else {
			var_1_27 = var_1_18;
		}
	} else {
		var_1_27 = var_1_28;
	}


	// From: Req1Batch46100_1loop
	if (16.75 > (var_1_2 - var_1_3)) {
		var_1_1 = ((var_1_4 - (max (var_1_5 , var_1_6))) - (max ((var_1_7 + var_1_8) , var_1_9)));
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req3Batch46100_1loop
	if (var_1_19 < (var_1_18 - var_1_20)) {
		var_1_22 = (max ((var_1_18 + 32u) , var_1_13));
	} else {
		if (var_1_21) {
			var_1_22 = 16u;
		} else {
			var_1_22 = var_1_23;
		}
	}


	// From: Req4Batch46100_1loop
	if (var_1_5 != var_1_2) {
		if ((var_1_22 / 5u) >= 0u) {
			var_1_24 = var_1_25;
		} else {
			var_1_24 = (min (var_1_25 , var_1_26));
		}
	}


	// From: Req8Batch46100_1loop
	if (var_1_30 > (- var_1_13)) {
		if (var_1_30 <= ((var_1_18 + var_1_27) * (var_1_33 - 2))) {
			var_1_32 = -10;
		} else {
			var_1_32 = var_1_33;
		}
	}


	// From: Req10Batch46100_1loop
	var_1_35 = (var_1_36 - (min ((var_1_37 - var_1_38) , var_1_39)));


	// From: Req11Batch46100_1loop
	if (! (var_1_32 >= var_1_22)) {
		if (! var_1_21) {
			var_1_40 = (max (var_1_6 , var_1_4));
		}
	}


	// From: Req12Batch46100_1loop
	unsigned long int stepLocal_4 = (var_1_42 - var_1_38) - var_1_22;
	if ((var_1_13 * var_1_14) > stepLocal_4) {
		var_1_41 = var_1_20;
	}


	// From: Req9Batch46100_1loop
	unsigned long int stepLocal_3 = var_1_27 / var_1_33;
	if (stepLocal_3 != var_1_41) {
		if (var_1_21) {
			var_1_34 = (2165862071u - (min (var_1_13 , var_1_30)));
		} else {
			var_1_34 = var_1_18;
		}
	} else {
		var_1_34 = var_1_30;
	}


	// From: Req2Batch46100_1loop
	unsigned long int stepLocal_0 = (~ var_1_27) + var_1_34;
	if (var_1_11) {
		if (((var_1_12 - var_1_13) % (min (var_1_14 , var_1_15))) != stepLocal_0) {
			var_1_10 = ((abs (max (var_1_18 , var_1_19))) - var_1_20);
		}
	} else {
		if (var_1_21) {
			var_1_10 = var_1_20;
		} else {
			var_1_10 = var_1_19;
		}
	}


	// From: Req6Batch46100_1loop
	unsigned long int stepLocal_2 = var_1_28;
	if (stepLocal_2 > (var_1_22 ^ var_1_10)) {
		if ((- (var_1_2 / var_1_4)) > var_1_9) {
			var_1_29 = var_1_30;
		} else {
			var_1_29 = 128;
		}
	}


	// From: Req7Batch46100_1loop
	if (var_1_11) {
		var_1_31 = (min (var_1_25 , (var_1_34 + var_1_30)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 4611686.018427383000e+12F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
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
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 4294967294);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32767);
	assume_abort_if_not(var_1_25 <= 32766);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32767);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 2147483647);
	assume_abort_if_not(var_1_28 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 255);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -1);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 63);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 1073741823);
	assume_abort_if_not(var_1_42 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_34 = var_1_34;
}

int property(void) {
	return ((((((((((((16.75 > (var_1_2 - var_1_3)) ? (var_1_1 == ((double) ((var_1_4 - (max (var_1_5 , var_1_6))) - (max ((var_1_7 + var_1_8) , var_1_9))))) : (var_1_1 == ((double) var_1_6))) && (var_1_11 ? ((((var_1_12 - var_1_13) % (min (var_1_14 , var_1_15))) != ((~ var_1_27) + var_1_34)) ? (var_1_10 == ((unsigned short int) ((abs (max (var_1_18 , var_1_19))) - var_1_20))) : 1) : (var_1_21 ? (var_1_10 == ((unsigned short int) var_1_20)) : (var_1_10 == ((unsigned short int) var_1_19))))) && ((var_1_19 < (var_1_18 - var_1_20)) ? (var_1_22 == ((unsigned long int) (max ((var_1_18 + 32u) , var_1_13)))) : (var_1_21 ? (var_1_22 == ((unsigned long int) 16u)) : (var_1_22 == ((unsigned long int) var_1_23))))) && ((var_1_5 != var_1_2) ? (((var_1_22 / 5u) >= 0u) ? (var_1_24 == ((signed short int) var_1_25)) : (var_1_24 == ((signed short int) (min (var_1_25 , var_1_26))))) : 1)) && (var_1_11 ? (var_1_21 ? ((last_1_var_1_34 > (max (var_1_14 , var_1_19))) ? (var_1_27 == ((unsigned long int) (var_1_28 - last_1_var_1_10))) : (var_1_27 == ((unsigned long int) var_1_20))) : (var_1_27 == ((unsigned long int) var_1_18))) : (var_1_27 == ((unsigned long int) var_1_28)))) && ((var_1_28 > (var_1_22 ^ var_1_10)) ? (((- (var_1_2 / var_1_4)) > var_1_9) ? (var_1_29 == ((unsigned char) var_1_30)) : (var_1_29 == ((unsigned char) 128))) : 1)) && (var_1_11 ? (var_1_31 == ((signed short int) (min (var_1_25 , (var_1_34 + var_1_30))))) : 1)) && ((var_1_30 > (- var_1_13)) ? ((var_1_30 <= ((var_1_18 + var_1_27) * (var_1_33 - 2))) ? (var_1_32 == ((signed short int) -10)) : (var_1_32 == ((signed short int) var_1_33))) : 1)) && (((var_1_27 / var_1_33) != var_1_41) ? (var_1_21 ? (var_1_34 == ((unsigned long int) (2165862071u - (min (var_1_13 , var_1_30))))) : (var_1_34 == ((unsigned long int) var_1_18))) : (var_1_34 == ((unsigned long int) var_1_30)))) && (var_1_35 == ((signed char) (var_1_36 - (min ((var_1_37 - var_1_38) , var_1_39)))))) && ((! (var_1_32 >= var_1_22)) ? ((! var_1_21) ? (var_1_40 == ((float) (max (var_1_6 , var_1_4)))) : 1) : 1)) && (((var_1_13 * var_1_14) > ((var_1_42 - var_1_38) - var_1_22)) ? (var_1_41 == ((unsigned short int) var_1_20)) : 1)
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
