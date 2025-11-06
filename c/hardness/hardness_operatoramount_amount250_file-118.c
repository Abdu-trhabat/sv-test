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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch118Amount250.c", 13, "reach_error"); }
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
double var_1_1 = 15.175;
double var_1_8 = 99.5;
double var_1_9 = 256.25;
double var_1_10 = 255.875;
double var_1_11 = 127.3;
signed char var_1_12 = 1;
signed char var_1_13 = -5;
signed char var_1_14 = -8;
signed char var_1_15 = 8;
signed char var_1_16 = 0;
signed char var_1_17 = 32;
signed char var_1_18 = 2;
signed long int var_1_19 = 16;
signed long int var_1_20 = 1372610676;
signed long int var_1_21 = 32;
signed long int var_1_22 = 1653671342;
signed long int var_1_23 = 25;
signed long int var_1_24 = 128;
unsigned short int var_1_25 = 128;
float var_1_26 = 32.6;
float var_1_27 = 16.75;
unsigned short int var_1_28 = 2;
signed long int var_1_29 = 0;
unsigned long int var_1_30 = 10;
unsigned long int var_1_31 = 1522051026;
signed char var_1_32 = -128;
signed long int var_1_33 = 500;
unsigned short int var_1_34 = 0;
unsigned short int var_1_35 = 40617;
signed char var_1_36 = 2;
signed char var_1_37 = 25;
signed char var_1_38 = 64;
signed char var_1_39 = 100;
signed char var_1_40 = 0;
signed short int var_1_41 = -5;
signed char var_1_42 = -1;
unsigned long int var_1_43 = 256;
unsigned long int var_1_44 = 5;
unsigned long int var_1_45 = 1478408228;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
double var_1_49 = 128.5;
double var_1_50 = 99.25;
unsigned char var_1_51 = 200;
signed char var_1_52 = 32;
signed short int var_1_53 = -1;
unsigned long int var_1_54 = 5;
unsigned long int var_1_55 = 3812919171;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 0;
signed short int var_1_58 = -500;
double var_1_59 = 1000000000.5;
unsigned long int var_1_60 = 64;
double var_1_61 = 4.75;
float var_1_62 = 0.9;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 15.175;
unsigned long int last_1_var_1_44 = 5;
signed short int last_1_var_1_58 = -500;
float last_1_var_1_62 = 0.9;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch118Amount250
	signed long int stepLocal_1 = var_1_23;
	signed char stepLocal_0 = var_1_14;
	if ((max (var_1_15 , var_1_18)) <= stepLocal_1) {
		if (last_1_var_1_62 >= (min (var_1_11 , last_1_var_1_1))) {
			var_1_24 = (max (var_1_15 , var_1_22));
		}
	} else {
		if (stepLocal_0 > (min (last_1_var_1_44 , var_1_20))) {
			var_1_24 = (min (var_1_16 , var_1_14));
		} else {
			var_1_24 = var_1_17;
		}
	}


	// From: Req2Batch118Amount250
	if (! (0.25 > var_1_8)) {
		var_1_12 = (max ((max (var_1_13 , var_1_14)) , ((var_1_15 + var_1_16) - (max (var_1_17 , var_1_18)))));
	} else {
		var_1_12 = (var_1_16 + var_1_15);
	}


	// From: Req8Batch118Amount250
	if ((~ (var_1_13 * var_1_18)) < var_1_15) {
		var_1_32 = (min (var_1_17 , ((min (var_1_18 , 25)) - var_1_15)));
	}


	// From: Req10Batch118Amount250
	var_1_34 = (abs (max ((var_1_35 - var_1_18) , var_1_16)));


	// From: Req11Batch118Amount250
	if (var_1_20 > (var_1_13 * (var_1_14 / var_1_22))) {
		var_1_36 = (((10 + var_1_37) + var_1_15) - (max (var_1_17 , var_1_18)));
	} else {
		var_1_36 = ((min ((var_1_38 - var_1_15) , var_1_37)) - ((var_1_39 - var_1_40) - var_1_16));
	}


	// From: Req16Batch118Amount250
	var_1_46 = (var_1_47 && var_1_48);


	// From: Req21Batch118Amount250
	var_1_56 = (! var_1_57);


	// From: Req24Batch118Amount250
	if (var_1_46) {
		var_1_60 = var_1_21;
	} else {
		var_1_60 = var_1_39;
	}


	// From: Req25Batch118Amount250
	if (var_1_48) {
		var_1_61 = (abs (var_1_10));
	} else {
		if (var_1_46) {
			var_1_61 = (min ((abs (var_1_11)) , var_1_8));
		} else {
			var_1_61 = (var_1_10 + var_1_50);
		}
	}


	// From: Req26Batch118Amount250
	var_1_62 = var_1_9;


	// From: Req5Batch118Amount250
	if ((var_1_62 / (max (var_1_26 , var_1_27))) < (var_1_9 - var_1_8)) {
		var_1_25 = (var_1_18 + (var_1_28 + (max (var_1_15 , var_1_16))));
	} else {
		if (var_1_46) {
			var_1_25 = var_1_16;
		}
	}


	// From: Req6Batch118Amount250
	if (var_1_56) {
		var_1_29 = var_1_20;
	} else {
		if (var_1_56) {
			var_1_29 = (var_1_21 - var_1_17);
		} else {
			var_1_29 = var_1_23;
		}
	}


	// From: Req12Batch118Amount250
	if (var_1_56) {
		var_1_41 = (var_1_37 - var_1_39);
	} else {
		var_1_41 = (min (var_1_18 , (abs (var_1_16))));
	}


	// From: Req13Batch118Amount250
	if (var_1_46) {
		if (var_1_56) {
			if (var_1_25 > var_1_35) {
				var_1_42 = (max (var_1_14 , -25));
			} else {
				var_1_42 = (var_1_15 - 1);
			}
		}
	} else {
		var_1_42 = ((var_1_37 + var_1_40) + -32);
	}


	// From: Req14Batch118Amount250
	unsigned char stepLocal_2 = ! var_1_46;
	if ((var_1_14 < var_1_22) && stepLocal_2) {
		var_1_43 = (min (var_1_16 , (var_1_39 + (var_1_23 + var_1_28))));
	}


	// From: Req15Batch118Amount250
	if (var_1_46) {
		if (var_1_46) {
			var_1_44 = (min (var_1_18 , (abs (var_1_28))));
		} else {
			var_1_44 = (max (((var_1_22 + var_1_45) - (var_1_23 + var_1_16)) , (min ((min (var_1_37 , 50u)) , var_1_17))));
		}
	} else {
		var_1_44 = (abs ((var_1_39 + 32u) + 4u));
	}


	// From: Req9Batch118Amount250
	var_1_33 = (var_1_44 + var_1_24);


	// From: Req19Batch118Amount250
	signed long int stepLocal_9 = var_1_23;
	if (var_1_50 <= var_1_26) {
		var_1_53 = (var_1_40 + (max (var_1_32 , var_1_17)));
	} else {
		if (stepLocal_9 > var_1_42) {
			var_1_53 = (max (var_1_40 , (max ((var_1_37 - var_1_51) , var_1_16))));
		} else {
			var_1_53 = (var_1_24 + var_1_15);
		}
	}


	// From: Req20Batch118Amount250
	unsigned char stepLocal_10 = var_1_46;
	if (stepLocal_10 && (var_1_60 >= (var_1_53 * var_1_17))) {
		var_1_54 = (var_1_55 - var_1_21);
	}


	// From: Req23Batch118Amount250
	if (var_1_33 >= var_1_54) {
		var_1_59 = (abs (var_1_11));
	} else {
		var_1_59 = var_1_50;
	}


	// From: Req7Batch118Amount250
	if ((var_1_44 & var_1_28) <= var_1_17) {
		var_1_30 = ((min ((var_1_22 - var_1_60) , var_1_21)) + (var_1_31 - var_1_15));
	}


	// From: Req17Batch118Amount250
	signed long int stepLocal_8 = var_1_51 - (max (var_1_16 , var_1_15));
	unsigned char stepLocal_7 = var_1_47;
	unsigned char stepLocal_6 = (var_1_54 * var_1_45) > (var_1_22 + var_1_28);
	unsigned char stepLocal_5 = var_1_61 >= var_1_50;
	signed char stepLocal_4 = var_1_15;
	signed long int stepLocal_3 = var_1_21;
	if (2 <= stepLocal_3) {
		if (var_1_46) {
			if (stepLocal_7 || var_1_48) {
				var_1_49 = ((5.4 + var_1_50) - var_1_9);
			}
		} else {
			if (stepLocal_4 >= ((8 % var_1_39) / var_1_38)) {
				var_1_49 = (max (var_1_11 , var_1_8));
			} else {
				if ((var_1_14 <= var_1_24) || stepLocal_6) {
					if (stepLocal_8 >= ((var_1_18 + var_1_39) - var_1_35)) {
						if (stepLocal_5 || ((var_1_32 != var_1_37) && var_1_56)) {
							var_1_49 = (var_1_50 - 64.375);
						} else {
							var_1_49 = (max (((max (var_1_10 , var_1_11)) + var_1_50) , var_1_9));
						}
					} else {
						var_1_49 = var_1_11;
					}
				}
			}
		}
	}


	// From: Req18Batch118Amount250
	if ((var_1_31 * var_1_35) > var_1_54) {
		if (var_1_59 < var_1_62) {
			var_1_52 = var_1_15;
		} else {
			var_1_52 = (min (var_1_18 , (min ((min (var_1_14 , var_1_39)) , (var_1_40 - var_1_16)))));
		}
	} else {
		var_1_52 = var_1_39;
	}


	// From: Req22Batch118Amount250
	signed long int stepLocal_11 = var_1_23 - (var_1_16 + var_1_37);
	if (var_1_47) {
		if (var_1_20 >= stepLocal_11) {
			var_1_58 = (var_1_52 + var_1_13);
		} else {
			var_1_58 = (var_1_28 - var_1_37);
		}
	} else {
		var_1_58 = (last_1_var_1_58 + (max (var_1_43 , (abs (var_1_25)))));
	}


	// From: Req1Batch118Amount250
	if ((min (var_1_62 , (last_1_var_1_1 * var_1_59))) >= var_1_59) {
		if (var_1_56) {
			if (! var_1_56) {
				var_1_1 = (min (8.125 , (var_1_8 - var_1_9)));
			}
		}
	} else {
		var_1_1 = (abs (abs (var_1_10 + var_1_11)));
	}


	// From: Req3Batch118Amount250
	if (var_1_11 < var_1_1) {
		var_1_19 = ((var_1_20 - var_1_18) - var_1_21);
	} else {
		var_1_19 = (((var_1_17 + var_1_18) + var_1_16) - ((max (1340289486 , var_1_22)) - (var_1_15 + var_1_23)));
	}
}



void updateVariables(void) {
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 1073741822);
	assume_abort_if_not(var_1_20 <= 2147483646);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483646);
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= 1073741823);
	assume_abort_if_not(var_1_22 <= 2147483646);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 536870911);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	assume_abort_if_not(var_1_26 != 0.0F);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	assume_abort_if_not(var_1_27 != 0.0F);
	var_1_28 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 16384);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 1073741823);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 32767);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 31);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 62);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= 94);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 31);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1073741824);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 127);
	assume_abort_if_not(var_1_51 <= 255);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 2147483647);
	assume_abort_if_not(var_1_55 <= 4294967294);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_62 = var_1_62;
}

int property(void) {
	return (((((((((((((((((((((((((((min (var_1_62 , (last_1_var_1_1 * var_1_59))) >= var_1_59) ? (var_1_56 ? ((! var_1_56) ? (var_1_1 == ((double) (min (8.125 , (var_1_8 - var_1_9))))) : 1) : 1) : (var_1_1 == ((double) (abs (abs (var_1_10 + var_1_11)))))) && ((! (0.25 > var_1_8)) ? (var_1_12 == ((signed char) (max ((max (var_1_13 , var_1_14)) , ((var_1_15 + var_1_16) - (max (var_1_17 , var_1_18))))))) : (var_1_12 == ((signed char) (var_1_16 + var_1_15))))) && ((var_1_11 < var_1_1) ? (var_1_19 == ((signed long int) ((var_1_20 - var_1_18) - var_1_21))) : (var_1_19 == ((signed long int) (((var_1_17 + var_1_18) + var_1_16) - ((max (1340289486 , var_1_22)) - (var_1_15 + var_1_23))))))) && (((max (var_1_15 , var_1_18)) <= var_1_23) ? ((last_1_var_1_62 >= (min (var_1_11 , last_1_var_1_1))) ? (var_1_24 == ((signed long int) (max (var_1_15 , var_1_22)))) : 1) : ((var_1_14 > (min (last_1_var_1_44 , var_1_20))) ? (var_1_24 == ((signed long int) (min (var_1_16 , var_1_14)))) : (var_1_24 == ((signed long int) var_1_17))))) && (((var_1_62 / (max (var_1_26 , var_1_27))) < (var_1_9 - var_1_8)) ? (var_1_25 == ((unsigned short int) (var_1_18 + (var_1_28 + (max (var_1_15 , var_1_16)))))) : (var_1_46 ? (var_1_25 == ((unsigned short int) var_1_16)) : 1))) && (var_1_56 ? (var_1_29 == ((signed long int) var_1_20)) : (var_1_56 ? (var_1_29 == ((signed long int) (var_1_21 - var_1_17))) : (var_1_29 == ((signed long int) var_1_23))))) && (((var_1_44 & var_1_28) <= var_1_17) ? (var_1_30 == ((unsigned long int) ((min ((var_1_22 - var_1_60) , var_1_21)) + (var_1_31 - var_1_15)))) : 1)) && (((~ (var_1_13 * var_1_18)) < var_1_15) ? (var_1_32 == ((signed char) (min (var_1_17 , ((min (var_1_18 , 25)) - var_1_15))))) : 1)) && (var_1_33 == ((signed long int) (var_1_44 + var_1_24)))) && (var_1_34 == ((unsigned short int) (abs (max ((var_1_35 - var_1_18) , var_1_16)))))) && ((var_1_20 > (var_1_13 * (var_1_14 / var_1_22))) ? (var_1_36 == ((signed char) (((10 + var_1_37) + var_1_15) - (max (var_1_17 , var_1_18))))) : (var_1_36 == ((signed char) ((min ((var_1_38 - var_1_15) , var_1_37)) - ((var_1_39 - var_1_40) - var_1_16)))))) && (var_1_56 ? (var_1_41 == ((signed short int) (var_1_37 - var_1_39))) : (var_1_41 == ((signed short int) (min (var_1_18 , (abs (var_1_16)))))))) && (var_1_46 ? (var_1_56 ? ((var_1_25 > var_1_35) ? (var_1_42 == ((signed char) (max (var_1_14 , -25)))) : (var_1_42 == ((signed char) (var_1_15 - 1)))) : 1) : (var_1_42 == ((signed char) ((var_1_37 + var_1_40) + -32))))) && (((var_1_14 < var_1_22) && (! var_1_46)) ? (var_1_43 == ((unsigned long int) (min (var_1_16 , (var_1_39 + (var_1_23 + var_1_28)))))) : 1)) && (var_1_46 ? (var_1_46 ? (var_1_44 == ((unsigned long int) (min (var_1_18 , (abs (var_1_28)))))) : (var_1_44 == ((unsigned long int) (max (((var_1_22 + var_1_45) - (var_1_23 + var_1_16)) , (min ((min (var_1_37 , 50u)) , var_1_17))))))) : (var_1_44 == ((unsigned long int) (abs ((var_1_39 + 32u) + 4u)))))) && (var_1_46 == ((unsigned char) (var_1_47 && var_1_48)))) && ((2 <= var_1_21) ? (var_1_46 ? ((var_1_47 || var_1_48) ? (var_1_49 == ((double) ((5.4 + var_1_50) - var_1_9))) : 1) : ((var_1_15 >= ((8 % var_1_39) / var_1_38)) ? (var_1_49 == ((double) (max (var_1_11 , var_1_8)))) : (((var_1_14 <= var_1_24) || ((var_1_54 * var_1_45) > (var_1_22 + var_1_28))) ? (((var_1_51 - (max (var_1_16 , var_1_15))) >= ((var_1_18 + var_1_39) - var_1_35)) ? (((var_1_61 >= var_1_50) || ((var_1_32 != var_1_37) && var_1_56)) ? (var_1_49 == ((double) (var_1_50 - 64.375))) : (var_1_49 == ((double) (max (((max (var_1_10 , var_1_11)) + var_1_50) , var_1_9))))) : (var_1_49 == ((double) var_1_11))) : 1))) : 1)) && (((var_1_31 * var_1_35) > var_1_54) ? ((var_1_59 < var_1_62) ? (var_1_52 == ((signed char) var_1_15)) : (var_1_52 == ((signed char) (min (var_1_18 , (min ((min (var_1_14 , var_1_39)) , (var_1_40 - var_1_16)))))))) : (var_1_52 == ((signed char) var_1_39)))) && ((var_1_50 <= var_1_26) ? (var_1_53 == ((signed short int) (var_1_40 + (max (var_1_32 , var_1_17))))) : ((var_1_23 > var_1_42) ? (var_1_53 == ((signed short int) (max (var_1_40 , (max ((var_1_37 - var_1_51) , var_1_16)))))) : (var_1_53 == ((signed short int) (var_1_24 + var_1_15)))))) && ((var_1_46 && (var_1_60 >= (var_1_53 * var_1_17))) ? (var_1_54 == ((unsigned long int) (var_1_55 - var_1_21))) : 1)) && (var_1_56 == ((unsigned char) (! var_1_57)))) && (var_1_47 ? ((var_1_20 >= (var_1_23 - (var_1_16 + var_1_37))) ? (var_1_58 == ((signed short int) (var_1_52 + var_1_13))) : (var_1_58 == ((signed short int) (var_1_28 - var_1_37)))) : (var_1_58 == ((signed short int) (last_1_var_1_58 + (max (var_1_43 , (abs (var_1_25))))))))) && ((var_1_33 >= var_1_54) ? (var_1_59 == ((double) (abs (var_1_11)))) : (var_1_59 == ((double) var_1_50)))) && (var_1_46 ? (var_1_60 == ((unsigned long int) var_1_21)) : (var_1_60 == ((unsigned long int) var_1_39)))) && (var_1_48 ? (var_1_61 == ((double) (abs (var_1_10)))) : (var_1_46 ? (var_1_61 == ((double) (min ((abs (var_1_11)) , var_1_8)))) : (var_1_61 == ((double) (var_1_10 + var_1_50)))))) && (var_1_62 == ((float) var_1_9))
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
