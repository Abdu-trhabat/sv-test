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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch70100_1loop.c", 13, "reach_error"); }
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
double var_1_1 = 31.7;
double var_1_3 = 1.0350000000000001;
unsigned short int var_1_4 = 8;
unsigned short int var_1_8 = 128;
unsigned short int var_1_9 = 4;
unsigned short int var_1_10 = 1;
unsigned short int var_1_11 = 16;
signed short int var_1_12 = -128;
signed short int var_1_13 = 8;
float var_1_14 = 9.6;
signed long int var_1_15 = -5;
float var_1_16 = 128.6;
double var_1_17 = 5.75;
double var_1_18 = 1.25;
float var_1_19 = 100.4;
float var_1_20 = 64.5;
double var_1_21 = 5.4;
unsigned short int var_1_22 = 256;
signed short int var_1_23 = 16;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 10;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 8;
unsigned char var_1_31 = 128;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 64;
signed long int var_1_37 = 10;
unsigned short int var_1_38 = 25;
unsigned short int var_1_39 = 59136;
unsigned short int var_1_40 = 43689;
unsigned short int var_1_41 = 128;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_12 = -128;
signed long int last_1_var_1_15 = -5;
unsigned short int last_1_var_1_22 = 256;
unsigned char last_1_var_1_26 = 1;
signed long int last_1_var_1_37 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch70100_1loop
	signed long int stepLocal_0 = max ((32 * last_1_var_1_22) , last_1_var_1_12);
	if (! last_1_var_1_26) {
		if (stepLocal_0 <= last_1_var_1_15) {
			var_1_4 = ((last_1_var_1_22 + (last_1_var_1_12 + var_1_8)) + (max (var_1_9 , var_1_10)));
		} else {
			var_1_4 = var_1_11;
		}
	} else {
		var_1_4 = last_1_var_1_12;
	}


	// From: Req13Batch70100_1loop
	if (var_1_18 < var_1_19) {
		var_1_38 = (max (((var_1_39 - last_1_var_1_37) - var_1_35) , (var_1_40 - (abs (var_1_10)))));
	} else {
		if (var_1_29) {
			if (! last_1_var_1_26) {
				var_1_38 = var_1_11;
			} else {
				var_1_38 = last_1_var_1_37;
			}
		} else {
			var_1_38 = var_1_36;
		}
	}


	// From: Req12Batch70100_1loop
	signed long int stepLocal_4 = (var_1_24 + var_1_36) - var_1_10;
	if (var_1_38 > stepLocal_4) {
		var_1_37 = var_1_24;
	}


	// From: Req3Batch70100_1loop
	if (var_1_8 >= var_1_37) {
		var_1_12 = (abs (var_1_13));
	}


	// From: Req7Batch70100_1loop
	var_1_21 = (abs (var_1_3));


	// From: Req14Batch70100_1loop
	var_1_41 = var_1_8;


	// From: Req5Batch70100_1loop
	unsigned short int stepLocal_1 = var_1_41;
	if (var_1_8 < stepLocal_1) {
		var_1_15 = (var_1_41 + 1);
	} else {
		var_1_15 = (abs (var_1_41));
	}


	// From: Req9Batch70100_1loop
	signed long int stepLocal_2 = var_1_4 >> 2;
	if ((var_1_24 - var_1_25) > stepLocal_2) {
		var_1_23 = (max ((var_1_25 - var_1_8) , var_1_41));
	}


	// From: Req10Batch70100_1loop
	signed long int stepLocal_3 = 8;
	if (((~ var_1_15) | (var_1_38 * var_1_9)) > stepLocal_3) {
		if (var_1_27) {
			var_1_26 = (var_1_28 && var_1_29);
		}
	}


	// From: Req1Batch70100_1loop
	if (var_1_26) {
		var_1_1 = (4.2 - (max (9.5 , (abs (var_1_3)))));
	} else {
		var_1_1 = (abs (var_1_3));
	}


	// From: Req4Batch70100_1loop
	if (var_1_26) {
		var_1_14 = var_1_3;
	}


	// From: Req6Batch70100_1loop
	if ((var_1_17 - var_1_18) > var_1_14) {
		var_1_16 = (var_1_19 + var_1_20);
	}


	// From: Req11Batch70100_1loop
	if (var_1_26 && (var_1_12 > var_1_13)) {
		var_1_30 = ((min (var_1_31 , (max (var_1_32 , var_1_33)))) - (max (var_1_25 , (var_1_34 + var_1_35))));
	} else {
		if (var_1_26) {
			if (var_1_3 >= (abs (- var_1_18))) {
				var_1_30 = (var_1_31 - (var_1_36 - var_1_35));
			} else {
				var_1_30 = ((abs (8)) + var_1_36);
			}
		}
	}


	// From: Req8Batch70100_1loop
	if (0 <= (var_1_8 << var_1_4)) {
		if (var_1_20 > var_1_14) {
			var_1_22 = var_1_10;
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 8191);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 65534);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32766);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 255);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 127);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 127);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 64);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 63);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 49150);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_22 = var_1_22;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_37 = var_1_37;
}

int property(void) {
	return (((((((((((((var_1_26 ? (var_1_1 == ((double) (4.2 - (max (9.5 , (abs (var_1_3))))))) : (var_1_1 == ((double) (abs (var_1_3))))) && ((! last_1_var_1_26) ? (((max ((32 * last_1_var_1_22) , last_1_var_1_12)) <= last_1_var_1_15) ? (var_1_4 == ((unsigned short int) ((last_1_var_1_22 + (last_1_var_1_12 + var_1_8)) + (max (var_1_9 , var_1_10))))) : (var_1_4 == ((unsigned short int) var_1_11))) : (var_1_4 == ((unsigned short int) last_1_var_1_12)))) && ((var_1_8 >= var_1_37) ? (var_1_12 == ((signed short int) (abs (var_1_13)))) : 1)) && (var_1_26 ? (var_1_14 == ((float) var_1_3)) : 1)) && ((var_1_8 < var_1_41) ? (var_1_15 == ((signed long int) (var_1_41 + 1))) : (var_1_15 == ((signed long int) (abs (var_1_41)))))) && (((var_1_17 - var_1_18) > var_1_14) ? (var_1_16 == ((float) (var_1_19 + var_1_20))) : 1)) && (var_1_21 == ((double) (abs (var_1_3))))) && ((0 <= (var_1_8 << var_1_4)) ? ((var_1_20 > var_1_14) ? (var_1_22 == ((unsigned short int) var_1_10)) : 1) : 1)) && (((var_1_24 - var_1_25) > (var_1_4 >> 2)) ? (var_1_23 == ((signed short int) (max ((var_1_25 - var_1_8) , var_1_41)))) : 1)) && ((((~ var_1_15) | (var_1_38 * var_1_9)) > 8) ? (var_1_27 ? (var_1_26 == ((unsigned char) (var_1_28 && var_1_29))) : 1) : 1)) && ((var_1_26 && (var_1_12 > var_1_13)) ? (var_1_30 == ((unsigned char) ((min (var_1_31 , (max (var_1_32 , var_1_33)))) - (max (var_1_25 , (var_1_34 + var_1_35)))))) : (var_1_26 ? ((var_1_3 >= (abs (- var_1_18))) ? (var_1_30 == ((unsigned char) (var_1_31 - (var_1_36 - var_1_35)))) : (var_1_30 == ((unsigned char) ((abs (8)) + var_1_36)))) : 1))) && ((var_1_38 > ((var_1_24 + var_1_36) - var_1_10)) ? (var_1_37 == ((signed long int) var_1_24)) : 1)) && ((var_1_18 < var_1_19) ? (var_1_38 == ((unsigned short int) (max (((var_1_39 - last_1_var_1_37) - var_1_35) , (var_1_40 - (abs (var_1_10))))))) : (var_1_29 ? ((! last_1_var_1_26) ? (var_1_38 == ((unsigned short int) var_1_11)) : (var_1_38 == ((unsigned short int) last_1_var_1_37))) : (var_1_38 == ((unsigned short int) var_1_36))))) && (var_1_41 == ((unsigned short int) var_1_8))
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
