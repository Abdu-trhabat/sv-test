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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch108Amount250.c", 13, "reach_error"); }
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
float var_1_1 = 1.95;
float var_1_2 = 99.6;
float var_1_3 = 64.25;
signed short int var_1_4 = 50;
unsigned char var_1_9 = 1;
signed short int var_1_10 = -1;
signed short int var_1_11 = -5;
signed short int var_1_12 = 1;
signed short int var_1_13 = 1;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned short int var_1_18 = 100;
unsigned short int var_1_19 = 42303;
unsigned short int var_1_20 = 20776;
unsigned short int var_1_21 = 1;
signed char var_1_22 = 32;
float var_1_23 = 8.5;
float var_1_24 = 10.8;
signed char var_1_25 = 2;
signed char var_1_26 = 1;
signed char var_1_27 = 1;
signed char var_1_28 = 16;
float var_1_29 = 0.25;
signed short int var_1_30 = 200;
double var_1_31 = 127.9;
float var_1_32 = 49.6;
signed char var_1_33 = 10;
float var_1_34 = 8.2;
float var_1_35 = 499.5;
float var_1_36 = 25.5;
signed long int var_1_37 = 1;
signed long int var_1_38 = -2;
float var_1_39 = 31.1;
signed char var_1_41 = -64;
signed char var_1_42 = 10;
signed char var_1_43 = 10;
signed char var_1_44 = -25;
signed char var_1_45 = 10;
unsigned char var_1_46 = 128;
unsigned char var_1_48 = 128;
float var_1_49 = 1.2;
signed long int var_1_50 = -16;
signed long int var_1_51 = 1507316027;
unsigned long int var_1_52 = 4;
signed long int var_1_53 = -64;
signed long int var_1_54 = 1404155736;
signed short int var_1_55 = 10;
double var_1_56 = 63.9;
unsigned long int var_1_57 = 16;
unsigned long int var_1_58 = 1673812695;
unsigned long int var_1_59 = 2296978118;
unsigned long int var_1_60 = 64;
signed long int var_1_61 = -8;
unsigned char var_1_62 = 10;
float var_1_63 = 127.5;
double var_1_64 = 128.25;

// Calibration values

// Last'ed variables
float last_1_var_1_1 = 1.95;
signed long int last_1_var_1_38 = -2;
signed char last_1_var_1_41 = -64;
unsigned long int last_1_var_1_52 = 4;
signed long int last_1_var_1_53 = -64;
double last_1_var_1_56 = 63.9;
unsigned long int last_1_var_1_57 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch108Amount250
	if ((last_1_var_1_52 / -1) == ((var_1_54 - var_1_12) - var_1_13)) {
		var_1_53 = ((max (var_1_12 , var_1_19)) - ((var_1_43 + var_1_28) + (max (last_1_var_1_57 , 4))));
	}


	// From: Req17Batch108Amount250
	if (var_1_32 < (max (last_1_var_1_1 , last_1_var_1_56))) {
		if (var_1_26 <= (abs (-5))) {
			if (var_1_21 < (var_1_43 + (64 + var_1_20))) {
				var_1_50 = ((var_1_48 + (max (var_1_43 , last_1_var_1_53))) - var_1_19);
			} else {
				var_1_50 = (var_1_26 - var_1_12);
			}
		} else {
			var_1_50 = (max ((5 + (last_1_var_1_52 - 4)) , last_1_var_1_41));
		}
	} else {
		var_1_50 = ((var_1_51 - var_1_48) - (max (var_1_43 , last_1_var_1_53)));
	}


	// From: Req18Batch108Amount250
	signed long int stepLocal_12 = abs (var_1_25);
	if (last_1_var_1_38 <= stepLocal_12) {
		var_1_52 = (min ((64u + 10u) , last_1_var_1_38));
	}


	// From: Req1Batch108Amount250
	var_1_1 = (var_1_2 - var_1_3);


	// From: Req5Batch108Amount250
	unsigned short int stepLocal_6 = var_1_21;
	if ((var_1_2 / (max (var_1_23 , var_1_24))) >= var_1_1) {
		if (stepLocal_6 <= var_1_20) {
			var_1_22 = (var_1_25 - (min (var_1_26 , 100)));
		}
	} else {
		var_1_22 = ((var_1_27 + var_1_28) - var_1_26);
	}


	// From: Req7Batch108Amount250
	if ((var_1_10 + var_1_13) <= var_1_19) {
		var_1_30 = (var_1_27 + var_1_26);
	} else {
		var_1_30 = (max (var_1_28 , var_1_11));
	}


	// From: Req9Batch108Amount250
	if (var_1_3 < var_1_23) {
		var_1_34 = ((var_1_35 + var_1_36) - var_1_3);
	}


	// From: Req14Batch108Amount250
	var_1_44 = ((max ((var_1_45 + var_1_28) , var_1_26)) - (var_1_27 + var_1_42));


	// From: Req20Batch108Amount250
	var_1_55 = ((var_1_52 + var_1_25) + var_1_26);


	// From: Req21Batch108Amount250
	var_1_56 = var_1_36;


	// From: Req23Batch108Amount250
	var_1_61 = var_1_43;


	// From: Req24Batch108Amount250
	if (var_1_17) {
		var_1_62 = var_1_26;
	} else {
		var_1_62 = var_1_48;
	}


	// From: Req26Batch108Amount250
	var_1_64 = var_1_2;


	// From: Req11Batch108Amount250
	signed long int stepLocal_9 = var_1_12 + (var_1_50 | var_1_20);
	signed long int stepLocal_8 = min ((var_1_21 - var_1_12) , var_1_61);
	if (stepLocal_9 <= var_1_50) {
		if (stepLocal_8 > (var_1_50 * var_1_30)) {
			var_1_38 = (min (var_1_33 , var_1_25));
		} else {
			var_1_38 = ((32 + var_1_61) + var_1_20);
		}
	} else {
		var_1_38 = var_1_26;
	}


	// From: Req3Batch108Amount250
	unsigned char stepLocal_5 = var_1_9;
	signed long int stepLocal_4 = var_1_61;
	signed long int stepLocal_3 = var_1_38;
	signed long int stepLocal_2 = -10;
	if (-4 >= stepLocal_4) {
		if (var_1_61 > stepLocal_3) {
			if (stepLocal_5 && (var_1_2 >= var_1_3)) {
				var_1_14 = (var_1_9 || var_1_15);
			} else {
				if (stepLocal_2 >= var_1_11) {
					var_1_14 = (var_1_16 || var_1_17);
				} else {
					var_1_14 = var_1_15;
				}
			}
		} else {
			var_1_14 = var_1_15;
		}
	}


	// From: Req12Batch108Amount250
	if (! (var_1_23 > var_1_64)) {
		var_1_39 = 9.375f;
	} else {
		if (var_1_36 < var_1_34) {
			var_1_39 = (max (127.5f , var_1_36));
		}
	}


	// From: Req16Batch108Amount250
	if (var_1_35 != var_1_56) {
		var_1_49 = (abs (var_1_35));
	} else {
		var_1_49 = (var_1_35 - var_1_2);
	}


	// From: Req2Batch108Amount250
	unsigned char stepLocal_1 = ! var_1_14;
	signed long int stepLocal_0 = var_1_53 ^ var_1_61;
	if (stepLocal_0 >= (64 * (var_1_50 + var_1_61))) {
		if ((var_1_3 - var_1_2) < var_1_49) {
			if ((var_1_61 > var_1_53) || stepLocal_1) {
				var_1_4 = (abs (var_1_10));
			} else {
				var_1_4 = (min (var_1_10 , var_1_11));
			}
		}
	} else {
		var_1_4 = (abs (var_1_12 - var_1_13));
	}


	// From: Req10Batch108Amount250
	if (var_1_17) {
		if (! var_1_16) {
			var_1_37 = (min (var_1_19 , var_1_4));
		} else {
			var_1_37 = var_1_50;
		}
	}


	// From: Req4Batch108Amount250
	if (var_1_61 >= (var_1_61 - var_1_12)) {
		var_1_18 = (var_1_19 - (max (var_1_13 , var_1_12)));
	} else {
		if (var_1_2 == var_1_39) {
			var_1_18 = (var_1_12 + var_1_13);
		} else {
			var_1_18 = ((var_1_20 - (10000 - var_1_21)) + var_1_13);
		}
	}


	// From: Req25Batch108Amount250
	if (! (var_1_50 <= var_1_38)) {
		if (var_1_37 >= var_1_52) {
			var_1_63 = (0.5f - var_1_36);
		}
	}


	// From: Req22Batch108Amount250
	signed long int stepLocal_17 = 128 * var_1_37;
	unsigned char stepLocal_16 = var_1_14;
	unsigned char stepLocal_15 = (var_1_51 + var_1_20) <= (var_1_52 ^ var_1_61);
	signed long int stepLocal_14 = var_1_13 - 4;
	signed long int stepLocal_13 = var_1_53;
	if ((var_1_36 / var_1_23) > (- var_1_64)) {
		if (stepLocal_15 && var_1_14) {
			if ((-2 / var_1_33) >= stepLocal_14) {
				var_1_57 = (var_1_51 + (max ((var_1_54 - 25u) , (var_1_58 - var_1_61))));
			} else {
				if (var_1_19 <= stepLocal_17) {
					var_1_57 = var_1_43;
				} else {
					var_1_57 = (var_1_59 - (max (0u , var_1_60)));
				}
			}
		} else {
			if (stepLocal_13 >= (min ((var_1_18 * var_1_13) , var_1_48))) {
				var_1_57 = (max ((abs (var_1_43)) , var_1_13));
			} else {
				if (stepLocal_16 && var_1_16) {
					var_1_57 = var_1_58;
				}
			}
		}
	} else {
		var_1_57 = 4u;
	}


	// From: Req13Batch108Amount250
	unsigned long int stepLocal_11 = var_1_52 * var_1_38;
	unsigned short int stepLocal_10 = var_1_18;
	if ((abs (var_1_20 / var_1_19)) >= stepLocal_11) {
		if (stepLocal_10 >= (var_1_28 + var_1_61)) {
			var_1_41 = var_1_27;
		} else {
			var_1_41 = (max (((var_1_28 - var_1_27) + (var_1_42 - var_1_43)) , var_1_26));
		}
	}


	// From: Req6Batch108Amount250
	unsigned long int stepLocal_7 = min (var_1_13 , var_1_57);
	if (stepLocal_7 == (4 & var_1_27)) {
		var_1_29 = (var_1_3 - (min (var_1_2 , 4.9f)));
	}


	// From: Req8Batch108Amount250
	if (var_1_3 > (var_1_2 - var_1_32)) {
		if (var_1_32 <= 1.5f) {
			if ((var_1_25 / var_1_33) < var_1_50) {
				var_1_31 = (min (var_1_3 , (abs (var_1_2))));
			} else {
				if (var_1_14) {
					if (var_1_29 != var_1_1) {
						var_1_31 = var_1_3;
					} else {
						var_1_31 = 32.62;
					}
				} else {
					var_1_31 = 256.125;
				}
			}
		}
	} else {
		var_1_31 = var_1_3;
	}


	// From: Req15Batch108Amount250
	if (var_1_31 >= var_1_34) {
		var_1_46 = (var_1_48 - var_1_26);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32766);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= -32767);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 16383);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 8191);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	assume_abort_if_not(var_1_23 != 0.0F);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	assume_abort_if_not(var_1_24 != 0.0F);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -128);
	assume_abort_if_not(var_1_33 <= 127);
	assume_abort_if_not(var_1_33 != 0);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_43 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 63);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 127);
	assume_abort_if_not(var_1_48 <= 254);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= 1073741822);
	assume_abort_if_not(var_1_51 <= 2147483646);
	var_1_54 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_54 >= 1073741823);
	assume_abort_if_not(var_1_54 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 1073741823);
	assume_abort_if_not(var_1_58 <= 2147483647);
	var_1_59 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_59 >= 2147483647);
	assume_abort_if_not(var_1_59 <= 4294967294);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_57 = var_1_57;
}

int property(void) {
	return (((((((((((((((((((((((((var_1_1 == ((float) (var_1_2 - var_1_3))) && (((var_1_53 ^ var_1_61) >= (64 * (var_1_50 + var_1_61))) ? (((var_1_3 - var_1_2) < var_1_49) ? (((var_1_61 > var_1_53) || (! var_1_14)) ? (var_1_4 == ((signed short int) (abs (var_1_10)))) : (var_1_4 == ((signed short int) (min (var_1_10 , var_1_11))))) : 1) : (var_1_4 == ((signed short int) (abs (var_1_12 - var_1_13)))))) && ((-4 >= var_1_61) ? ((var_1_61 > var_1_38) ? ((var_1_9 && (var_1_2 >= var_1_3)) ? (var_1_14 == ((unsigned char) (var_1_9 || var_1_15))) : ((-10 >= var_1_11) ? (var_1_14 == ((unsigned char) (var_1_16 || var_1_17))) : (var_1_14 == ((unsigned char) var_1_15)))) : (var_1_14 == ((unsigned char) var_1_15))) : 1)) && ((var_1_61 >= (var_1_61 - var_1_12)) ? (var_1_18 == ((unsigned short int) (var_1_19 - (max (var_1_13 , var_1_12))))) : ((var_1_2 == var_1_39) ? (var_1_18 == ((unsigned short int) (var_1_12 + var_1_13))) : (var_1_18 == ((unsigned short int) ((var_1_20 - (10000 - var_1_21)) + var_1_13)))))) && (((var_1_2 / (max (var_1_23 , var_1_24))) >= var_1_1) ? ((var_1_21 <= var_1_20) ? (var_1_22 == ((signed char) (var_1_25 - (min (var_1_26 , 100))))) : 1) : (var_1_22 == ((signed char) ((var_1_27 + var_1_28) - var_1_26))))) && (((min (var_1_13 , var_1_57)) == (4 & var_1_27)) ? (var_1_29 == ((float) (var_1_3 - (min (var_1_2 , 4.9f))))) : 1)) && (((var_1_10 + var_1_13) <= var_1_19) ? (var_1_30 == ((signed short int) (var_1_27 + var_1_26))) : (var_1_30 == ((signed short int) (max (var_1_28 , var_1_11)))))) && ((var_1_3 > (var_1_2 - var_1_32)) ? ((var_1_32 <= 1.5f) ? (((var_1_25 / var_1_33) < var_1_50) ? (var_1_31 == ((double) (min (var_1_3 , (abs (var_1_2)))))) : (var_1_14 ? ((var_1_29 != var_1_1) ? (var_1_31 == ((double) var_1_3)) : (var_1_31 == ((double) 32.62))) : (var_1_31 == ((double) 256.125)))) : 1) : (var_1_31 == ((double) var_1_3)))) && ((var_1_3 < var_1_23) ? (var_1_34 == ((float) ((var_1_35 + var_1_36) - var_1_3))) : 1)) && (var_1_17 ? ((! var_1_16) ? (var_1_37 == ((signed long int) (min (var_1_19 , var_1_4)))) : (var_1_37 == ((signed long int) var_1_50))) : 1)) && (((var_1_12 + (var_1_50 | var_1_20)) <= var_1_50) ? (((min ((var_1_21 - var_1_12) , var_1_61)) > (var_1_50 * var_1_30)) ? (var_1_38 == ((signed long int) (min (var_1_33 , var_1_25)))) : (var_1_38 == ((signed long int) ((32 + var_1_61) + var_1_20)))) : (var_1_38 == ((signed long int) var_1_26)))) && ((! (var_1_23 > var_1_64)) ? (var_1_39 == ((float) 9.375f)) : ((var_1_36 < var_1_34) ? (var_1_39 == ((float) (max (127.5f , var_1_36)))) : 1))) && (((abs (var_1_20 / var_1_19)) >= (var_1_52 * var_1_38)) ? ((var_1_18 >= (var_1_28 + var_1_61)) ? (var_1_41 == ((signed char) var_1_27)) : (var_1_41 == ((signed char) (max (((var_1_28 - var_1_27) + (var_1_42 - var_1_43)) , var_1_26))))) : 1)) && (var_1_44 == ((signed char) ((max ((var_1_45 + var_1_28) , var_1_26)) - (var_1_27 + var_1_42))))) && ((var_1_31 >= var_1_34) ? (var_1_46 == ((unsigned char) (var_1_48 - var_1_26))) : 1)) && ((var_1_35 != var_1_56) ? (var_1_49 == ((float) (abs (var_1_35)))) : (var_1_49 == ((float) (var_1_35 - var_1_2))))) && ((var_1_32 < (max (last_1_var_1_1 , last_1_var_1_56))) ? ((var_1_26 <= (abs (-5))) ? ((var_1_21 < (var_1_43 + (64 + var_1_20))) ? (var_1_50 == ((signed long int) ((var_1_48 + (max (var_1_43 , last_1_var_1_53))) - var_1_19))) : (var_1_50 == ((signed long int) (var_1_26 - var_1_12)))) : (var_1_50 == ((signed long int) (max ((5 + (last_1_var_1_52 - 4)) , last_1_var_1_41))))) : (var_1_50 == ((signed long int) ((var_1_51 - var_1_48) - (max (var_1_43 , last_1_var_1_53))))))) && ((last_1_var_1_38 <= (abs (var_1_25))) ? (var_1_52 == ((unsigned long int) (min ((64u + 10u) , last_1_var_1_38)))) : 1)) && (((last_1_var_1_52 / -1) == ((var_1_54 - var_1_12) - var_1_13)) ? (var_1_53 == ((signed long int) ((max (var_1_12 , var_1_19)) - ((var_1_43 + var_1_28) + (max (last_1_var_1_57 , 4)))))) : 1)) && (var_1_55 == ((signed short int) ((var_1_52 + var_1_25) + var_1_26)))) && (var_1_56 == ((double) var_1_36))) && (((var_1_36 / var_1_23) > (- var_1_64)) ? ((((var_1_51 + var_1_20) <= (var_1_52 ^ var_1_61)) && var_1_14) ? (((-2 / var_1_33) >= (var_1_13 - 4)) ? (var_1_57 == ((unsigned long int) (var_1_51 + (max ((var_1_54 - 25u) , (var_1_58 - var_1_61)))))) : ((var_1_19 <= (128 * var_1_37)) ? (var_1_57 == ((unsigned long int) var_1_43)) : (var_1_57 == ((unsigned long int) (var_1_59 - (max (0u , var_1_60))))))) : ((var_1_53 >= (min ((var_1_18 * var_1_13) , var_1_48))) ? (var_1_57 == ((unsigned long int) (max ((abs (var_1_43)) , var_1_13)))) : ((var_1_14 && var_1_16) ? (var_1_57 == ((unsigned long int) var_1_58)) : 1))) : (var_1_57 == ((unsigned long int) 4u)))) && (var_1_61 == ((signed long int) var_1_43))) && (var_1_17 ? (var_1_62 == ((unsigned char) var_1_26)) : (var_1_62 == ((unsigned char) var_1_48)))) && ((! (var_1_50 <= var_1_38)) ? ((var_1_37 >= var_1_52) ? (var_1_63 == ((float) (0.5f - var_1_36))) : 1) : 1)) && (var_1_64 == ((double) var_1_2))
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
