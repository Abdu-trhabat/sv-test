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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56100_1loop.c", 13, "reach_error"); }
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
float var_1_1 = 256.8;
float var_1_4 = 3.5;
float var_1_5 = 99999.8;
float var_1_6 = 0.2;
float var_1_7 = 31.7;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 64;
unsigned char var_1_12 = 10;
unsigned char var_1_15 = 8;
unsigned char var_1_16 = 0;
float var_1_17 = 7.5;
float var_1_18 = 127.2;
signed long int var_1_19 = -100;
float var_1_20 = 9.84;
float var_1_21 = 99999999999999.5;
float var_1_22 = 63.1;
unsigned long int var_1_23 = 4;
unsigned long int var_1_24 = 32;
unsigned long int var_1_25 = 3750114559;
double var_1_26 = 32.4;
signed char var_1_27 = 8;
unsigned short int var_1_28 = 62996;
signed char var_1_29 = 2;
signed char var_1_30 = 32;
signed char var_1_31 = 1;
signed char var_1_32 = 2;
signed long int var_1_33 = 4;
unsigned long int var_1_34 = 2;
signed long int var_1_35 = -4;
signed long int var_1_36 = -2;
unsigned char var_1_37 = 128;
unsigned short int var_1_38 = 128;
signed long int var_1_39 = -4;
signed char var_1_40 = 2;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_23 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch56100_1loop
	signed long int stepLocal_3 = 128;
	if (stepLocal_3 < (var_1_15 / var_1_19)) {
		var_1_18 = ((max (var_1_20 , (min (var_1_21 , var_1_22)))) - 15.5f);
	} else {
		var_1_18 = (var_1_21 - var_1_20);
	}


	// From: Req10Batch56100_1loop
	if (var_1_10) {
		if (var_1_20 > ((abs (var_1_22)) - var_1_4)) {
			var_1_34 = var_1_15;
		}
	}


	// From: Req12Batch56100_1loop
	var_1_38 = var_1_15;


	// From: Req13Batch56100_1loop
	var_1_39 = var_1_15;


	// From: Req14Batch56100_1loop
	var_1_40 = var_1_32;


	// From: Req5Batch56100_1loop
	if (var_1_22 == var_1_21) {
		var_1_23 = ((min (var_1_34 , last_1_var_1_23)) + var_1_12);
	}


	// From: Req6Batch56100_1loop
	if (var_1_34 <= ((var_1_34 ^ var_1_12) * var_1_34)) {
		var_1_24 = (var_1_25 - var_1_15);
	}


	// From: Req7Batch56100_1loop
	signed long int stepLocal_4 = var_1_39;
	if (var_1_7 == (var_1_6 / var_1_17)) {
		if (var_1_12 >= stepLocal_4) {
			var_1_26 = 1.0000000000000003E14;
		}
	}


	// From: Req9Batch56100_1loop
	if (var_1_24 > var_1_34) {
		var_1_33 = (max ((var_1_31 - var_1_12) , var_1_29));
	}


	// From: Req11Batch56100_1loop
	signed char stepLocal_9 = var_1_29;
	unsigned char stepLocal_8 = var_1_8;
	signed long int stepLocal_7 = var_1_37 - 16;
	unsigned long int stepLocal_6 = var_1_34;
	if (var_1_10) {
		var_1_35 = (max (var_1_12 , var_1_36));
	} else {
		if (16 != stepLocal_6) {
			if (var_1_23 != stepLocal_7) {
				if (stepLocal_9 < var_1_19) {
					if (stepLocal_8 || var_1_9) {
						var_1_35 = 16;
					} else {
						var_1_35 = var_1_31;
					}
				} else {
					var_1_35 = 8;
				}
			}
		} else {
			var_1_35 = var_1_30;
		}
	}


	// From: Req1Batch56100_1loop
	if (var_1_18 != var_1_26) {
		if (var_1_26 < (var_1_4 - 2.5f)) {
			var_1_1 = (min (9.5f , ((min (var_1_5 , var_1_6)) + var_1_7)));
		} else {
			var_1_1 = (var_1_7 + (max ((abs (var_1_5)) , 1.487f)));
		}
	} else {
		if ((var_1_8 && var_1_9) || var_1_10) {
			var_1_1 = var_1_5;
		}
	}


	// From: Req2Batch56100_1loop
	unsigned long int stepLocal_1 = var_1_24;
	unsigned char stepLocal_0 = var_1_8;
	if (stepLocal_0 || var_1_9) {
		var_1_11 = var_1_12;
	} else {
		if ((max (var_1_12 , var_1_23)) < stepLocal_1) {
			var_1_11 = (min (var_1_12 , var_1_15));
		} else {
			var_1_11 = var_1_12;
		}
	}


	// From: Req3Batch56100_1loop
	unsigned char stepLocal_2 = var_1_12;
	if (var_1_26 != ((var_1_4 / var_1_17) * var_1_18)) {
		if (var_1_38 > stepLocal_2) {
			var_1_16 = var_1_15;
		}
	} else {
		var_1_16 = var_1_12;
	}


	// From: Req8Batch56100_1loop
	signed long int stepLocal_5 = min ((var_1_28 - 8) , var_1_19);
	if (stepLocal_5 > (var_1_11 - var_1_15)) {
		var_1_27 = (var_1_29 + var_1_30);
	} else {
		var_1_27 = ((var_1_31 - var_1_32) + var_1_30);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	assume_abort_if_not(var_1_17 != 0.0F);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	assume_abort_if_not(var_1_19 != 0);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 2147483647);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 32767);
	assume_abort_if_not(var_1_28 <= 65535);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -63);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483647);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 127);
	assume_abort_if_not(var_1_37 <= 255);
}



void updateLastVariables(void) {
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	return ((((((((((((((var_1_18 != var_1_26) ? ((var_1_26 < (var_1_4 - 2.5f)) ? (var_1_1 == ((float) (min (9.5f , ((min (var_1_5 , var_1_6)) + var_1_7))))) : (var_1_1 == ((float) (var_1_7 + (max ((abs (var_1_5)) , 1.487f)))))) : (((var_1_8 && var_1_9) || var_1_10) ? (var_1_1 == ((float) var_1_5)) : 1)) && ((var_1_8 || var_1_9) ? (var_1_11 == ((unsigned char) var_1_12)) : (((max (var_1_12 , var_1_23)) < var_1_24) ? (var_1_11 == ((unsigned char) (min (var_1_12 , var_1_15)))) : (var_1_11 == ((unsigned char) var_1_12))))) && ((var_1_26 != ((var_1_4 / var_1_17) * var_1_18)) ? ((var_1_38 > var_1_12) ? (var_1_16 == ((unsigned char) var_1_15)) : 1) : (var_1_16 == ((unsigned char) var_1_12)))) && ((128 < (var_1_15 / var_1_19)) ? (var_1_18 == ((float) ((max (var_1_20 , (min (var_1_21 , var_1_22)))) - 15.5f))) : (var_1_18 == ((float) (var_1_21 - var_1_20))))) && ((var_1_22 == var_1_21) ? (var_1_23 == ((unsigned long int) ((min (var_1_34 , last_1_var_1_23)) + var_1_12))) : 1)) && ((var_1_34 <= ((var_1_34 ^ var_1_12) * var_1_34)) ? (var_1_24 == ((unsigned long int) (var_1_25 - var_1_15))) : 1)) && ((var_1_7 == (var_1_6 / var_1_17)) ? ((var_1_12 >= var_1_39) ? (var_1_26 == ((double) 1.0000000000000003E14)) : 1) : 1)) && (((min ((var_1_28 - 8) , var_1_19)) > (var_1_11 - var_1_15)) ? (var_1_27 == ((signed char) (var_1_29 + var_1_30))) : (var_1_27 == ((signed char) ((var_1_31 - var_1_32) + var_1_30))))) && ((var_1_24 > var_1_34) ? (var_1_33 == ((signed long int) (max ((var_1_31 - var_1_12) , var_1_29)))) : 1)) && (var_1_10 ? ((var_1_20 > ((abs (var_1_22)) - var_1_4)) ? (var_1_34 == ((unsigned long int) var_1_15)) : 1) : 1)) && (var_1_10 ? (var_1_35 == ((signed long int) (max (var_1_12 , var_1_36)))) : ((16 != var_1_34) ? ((var_1_23 != (var_1_37 - 16)) ? ((var_1_29 < var_1_19) ? ((var_1_8 || var_1_9) ? (var_1_35 == ((signed long int) 16)) : (var_1_35 == ((signed long int) var_1_31))) : (var_1_35 == ((signed long int) 8))) : 1) : (var_1_35 == ((signed long int) var_1_30))))) && (var_1_38 == ((unsigned short int) var_1_15))) && (var_1_39 == ((signed long int) var_1_15))) && (var_1_40 == ((signed char) var_1_32))
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
