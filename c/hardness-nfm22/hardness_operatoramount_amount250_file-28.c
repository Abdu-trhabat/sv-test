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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch28Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 64.4;
float var_1_4 = 5.5;
float var_1_5 = 64.6;
float var_1_6 = 4.4;
unsigned short int var_1_7 = 32;
signed long int var_1_9 = 5;
unsigned char var_1_10 = 1;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 5;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 100;
unsigned char var_1_16 = 16;
float var_1_17 = 255.6;
signed short int var_1_18 = 32;
signed char var_1_19 = -4;
signed char var_1_20 = 0;
signed short int var_1_21 = 5;
float var_1_22 = 127.3;
float var_1_25 = 0.0;
float var_1_26 = 100.375;
unsigned long int var_1_27 = 4;
signed short int var_1_28 = 2;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 128;
unsigned char var_1_31 = 1;
double var_1_32 = 16.125;
unsigned char var_1_34 = 16;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 32;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 64;
unsigned char var_1_39 = 4;
signed short int var_1_40 = -256;
signed short int var_1_41 = 2;
unsigned long int var_1_43 = 16;
signed short int var_1_44 = -16;
signed short int var_1_45 = 18917;
unsigned char var_1_46 = 1;
signed short int var_1_47 = -50;
signed short int var_1_48 = -5;
signed long int var_1_50 = 200;
signed long int var_1_51 = 1806532065;
signed long int var_1_52 = 1000000000;
signed char var_1_53 = -64;
unsigned long int var_1_54 = 128;
unsigned char var_1_55 = 16;
unsigned char var_1_56 = 200;
signed long int var_1_57 = -32;
signed long int var_1_59 = -10000;
unsigned long int var_1_60 = 0;

// Calibration values

// Last'ed variables
float last_1_var_1_1 = 64.4;
unsigned char last_1_var_1_10 = 1;
float last_1_var_1_17 = 255.6;
signed short int last_1_var_1_18 = 32;
signed short int last_1_var_1_28 = 2;
unsigned char last_1_var_1_46 = 1;
signed char last_1_var_1_53 = -64;
unsigned long int last_1_var_1_54 = 128;
unsigned char last_1_var_1_55 = 16;
signed long int last_1_var_1_57 = -32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch28Amount250
	if ((last_1_var_1_53 / var_1_30) < last_1_var_1_55) {
		if (! var_1_31) {
			if (var_1_35 >= (min ((var_1_30 - var_1_15) , var_1_14))) {
				var_1_46 = (! var_1_12);
			} else {
				var_1_46 = (last_1_var_1_10 && var_1_12);
			}
		} else {
			if (100 < last_1_var_1_57) {
				var_1_46 = (! var_1_12);
			}
		}
	}


	// From: Req27Batch28Amount250
	if (! (var_1_5 < last_1_var_1_1)) {
		var_1_60 = (2306743485u - (min ((min (var_1_15 , last_1_var_1_28)) , var_1_52)));
	} else {
		if (var_1_31 && last_1_var_1_46) {
			var_1_60 = var_1_45;
		} else {
			var_1_60 = last_1_var_1_28;
		}
	}


	// From: Req19Batch28Amount250
	unsigned char stepLocal_13 = var_1_39;
	if (stepLocal_13 < last_1_var_1_55) {
		var_1_47 = (max ((min (last_1_var_1_54 , (var_1_35 - var_1_15))) , -100));
	}


	// From: Req11Batch28Amount250
	if ((- (var_1_30 - var_1_15)) > var_1_47) {
		var_1_29 = (var_1_12 || var_1_31);
	} else {
		var_1_29 = var_1_12;
	}


	// From: Req2Batch28Amount250
	var_1_10 = (last_1_var_1_46 && var_1_12);


	// From: Req24Batch28Amount250
	if (var_1_10) {
		var_1_55 = ((var_1_56 - var_1_36) - var_1_38);
	} else {
		var_1_55 = (min (25 , (var_1_56 - var_1_39)));
	}


	// From: Req22Batch28Amount250
	if (var_1_7 < (var_1_45 + var_1_55)) {
		var_1_53 = (var_1_39 - 64);
	} else {
		var_1_53 = (var_1_39 - var_1_36);
	}


	// From: Req7Batch28Amount250
	if (! ((min (var_1_16 , var_1_20)) < (var_1_14 - var_1_15))) {
		var_1_21 = (min (var_1_16 , var_1_20));
	}


	// From: Req13Batch28Amount250
	signed long int stepLocal_10 = var_1_21 / var_1_9;
	if (stepLocal_10 >= var_1_15) {
		var_1_34 = ((var_1_35 + (abs (5))) + var_1_16);
	} else {
		var_1_34 = (((232 - var_1_36) - var_1_37) - (min (var_1_15 , (var_1_38 - var_1_39))));
	}


	// From: Req16Batch28Amount250
	if (var_1_31) {
		var_1_43 = var_1_37;
	}


	// From: Req21Batch28Amount250
	if ((- var_1_26) <= var_1_25) {
		var_1_50 = (var_1_39 - (var_1_51 - (var_1_38 + var_1_30)));
	} else {
		var_1_50 = (256 - (var_1_51 - (var_1_52 - var_1_43)));
	}


	// From: Req25Batch28Amount250
	unsigned char stepLocal_17 = var_1_46;
	if (stepLocal_17 || var_1_10) {
		var_1_57 = ((var_1_50 + var_1_34) + var_1_21);
	}


	// From: Req3Batch28Amount250
	if (var_1_57 <= var_1_43) {
		var_1_13 = (min (var_1_14 , 8));
	} else {
		var_1_13 = ((var_1_15 - 32) + var_1_16);
	}


	// From: Req6Batch28Amount250
	if ((- 25u) >= (var_1_7 & var_1_34)) {
		var_1_19 = var_1_20;
	}


	// From: Req10Batch28Amount250
	if (var_1_12) {
		var_1_28 = (var_1_19 - var_1_15);
	} else {
		var_1_28 = 4;
	}


	// From: Req12Batch28Amount250
	unsigned char stepLocal_9 = var_1_34;
	if (var_1_43 >= stepLocal_9) {
		var_1_32 = (var_1_6 + var_1_4);
	}


	// From: Req14Batch28Amount250
	if (var_1_12) {
		var_1_40 = (max ((var_1_16 + var_1_19) , var_1_35));
	} else {
		if (var_1_15 >= var_1_36) {
			var_1_40 = (max (var_1_35 , var_1_36));
		} else {
			var_1_40 = var_1_36;
		}
	}


	// From: Req15Batch28Amount250
	unsigned long int stepLocal_12 = var_1_43 + (abs (var_1_57));
	unsigned char stepLocal_11 = var_1_37;
	if (var_1_31) {
		if ((10 + var_1_15) < stepLocal_11) {
			if (stepLocal_12 <= var_1_50) {
				var_1_41 = var_1_14;
			} else {
				var_1_41 = 256;
			}
		} else {
			var_1_41 = var_1_15;
		}
	}


	// From: Req17Batch28Amount250
	if (var_1_10) {
		var_1_44 = ((var_1_45 - (min (var_1_41 , var_1_36))) - var_1_37);
	} else {
		var_1_44 = (var_1_39 - var_1_16);
	}


	// From: Req20Batch28Amount250
	unsigned short int stepLocal_14 = var_1_7;
	if (stepLocal_14 < var_1_35) {
		var_1_48 = (min ((1 - (max (var_1_19 , var_1_13))) , var_1_53));
	} else {
		var_1_48 = ((var_1_45 - var_1_19) - var_1_30);
	}


	// From: Req26Batch28Amount250
	if ((256 >> var_1_13) < (max (var_1_28 , var_1_48))) {
		if (var_1_10) {
			if (var_1_37 < var_1_43) {
				var_1_59 = (var_1_53 - var_1_16);
			} else {
				if (! ((var_1_55 / -50) > (var_1_7 - var_1_15))) {
					var_1_59 = var_1_51;
				} else {
					var_1_59 = (min (var_1_7 , var_1_28));
				}
			}
		}
	} else {
		var_1_59 = var_1_39;
	}


	// From: Req1Batch28Amount250
	signed long int stepLocal_3 = var_1_40 / var_1_9;
	unsigned long int stepLocal_2 = (var_1_60 + var_1_7) | var_1_40;
	unsigned long int stepLocal_1 = var_1_60;
	unsigned long int stepLocal_0 = var_1_60;
	if (var_1_47 <= stepLocal_0) {
		if (var_1_47 > stepLocal_1) {
			var_1_1 = (((var_1_4 + 25.2f) - var_1_5) + var_1_6);
		}
	} else {
		if (((var_1_60 * var_1_47) / var_1_7) >= stepLocal_3) {
			if (-32 > stepLocal_2) {
				var_1_1 = var_1_4;
			} else {
				var_1_1 = var_1_5;
			}
		} else {
			var_1_1 = 256.5f;
		}
	}


	// From: Req4Batch28Amount250
	unsigned char stepLocal_4 = var_1_15;
	if (var_1_6 > (- last_1_var_1_17)) {
		var_1_17 = (abs (var_1_5));
	} else {
		if (stepLocal_4 <= (var_1_60 + (16 + var_1_41))) {
			var_1_17 = var_1_5;
		}
	}


	// From: Req23Batch28Amount250
	signed long int stepLocal_16 = min ((var_1_52 - var_1_36) , var_1_35);
	unsigned char stepLocal_15 = var_1_29;
	if (stepLocal_16 > -2) {
		if (var_1_26 >= var_1_17) {
			if (var_1_12 || stepLocal_15) {
				var_1_54 = var_1_51;
			}
		}
	} else {
		var_1_54 = (max (var_1_7 , (max (var_1_37 , var_1_13))));
	}


	// From: Req5Batch28Amount250
	signed long int stepLocal_5 = var_1_28 * var_1_15;
	if (var_1_53 < stepLocal_5) {
		var_1_18 = (max (2 , (min ((min (var_1_15 , var_1_16)) , last_1_var_1_18))));
	} else {
		var_1_18 = (min (var_1_15 , ((var_1_16 - var_1_14) + last_1_var_1_18)));
	}


	// From: Req8Batch28Amount250
	signed short int stepLocal_7 = var_1_48;
	signed long int stepLocal_6 = var_1_18 % (min (var_1_7 , var_1_15));
	if (stepLocal_6 <= var_1_48) {
		var_1_22 = (var_1_5 - (min (var_1_4 , var_1_26)));
	} else {
		if (! (var_1_46 || var_1_29)) {
			if (var_1_25 > var_1_5) {
				var_1_22 = (var_1_25 - (min (var_1_5 , var_1_4)));
			}
		} else {
			if (var_1_18 <= stepLocal_7) {
				var_1_22 = ((10.2f + var_1_4) - 5.25f);
			}
		}
	}


	// From: Req9Batch28Amount250
	signed long int stepLocal_8 = var_1_53 / var_1_7;
	if (stepLocal_8 == var_1_40) {
		if ((var_1_5 * var_1_1) < var_1_6) {
			var_1_27 = var_1_7;
		} else {
			var_1_27 = var_1_14;
		}
	} else {
		var_1_27 = var_1_14;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691390e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65535);
	assume_abort_if_not(var_1_7 != 0);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 63);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -127);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 6917529.027641073700e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854765600e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854765600e+12F && var_1_26 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 127);
	assume_abort_if_not(var_1_30 <= 255);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 64);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 63);
	assume_abort_if_not(var_1_38 <= 127);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= 16382);
	assume_abort_if_not(var_1_45 <= 32766);
	var_1_51 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_51 >= 1073741823);
	assume_abort_if_not(var_1_51 <= 2147483646);
	var_1_52 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_52 >= 536870911);
	assume_abort_if_not(var_1_52 <= 1073741823);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 190);
	assume_abort_if_not(var_1_56 <= 254);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_57 = var_1_57;
}

int property() {
	return (((((((((((((((((((((((((((var_1_47 <= var_1_60) ? ((var_1_47 > var_1_60) ? (var_1_1 == ((float) (((var_1_4 + 25.2f) - var_1_5) + var_1_6))) : 1) : ((((var_1_60 * var_1_47) / var_1_7) >= (var_1_40 / var_1_9)) ? ((-32 > ((var_1_60 + var_1_7) | var_1_40)) ? (var_1_1 == ((float) var_1_4)) : (var_1_1 == ((float) var_1_5))) : (var_1_1 == ((float) 256.5f)))) && (var_1_10 == ((unsigned char) (last_1_var_1_46 && var_1_12)))) && ((var_1_57 <= var_1_43) ? (var_1_13 == ((unsigned char) (min (var_1_14 , 8)))) : (var_1_13 == ((unsigned char) ((var_1_15 - 32) + var_1_16))))) && ((var_1_6 > (- last_1_var_1_17)) ? (var_1_17 == ((float) (abs (var_1_5)))) : ((var_1_15 <= (var_1_60 + (16 + var_1_41))) ? (var_1_17 == ((float) var_1_5)) : 1))) && ((var_1_53 < (var_1_28 * var_1_15)) ? (var_1_18 == ((signed short int) (max (2 , (min ((min (var_1_15 , var_1_16)) , last_1_var_1_18)))))) : (var_1_18 == ((signed short int) (min (var_1_15 , ((var_1_16 - var_1_14) + last_1_var_1_18))))))) && (((- 25u) >= (var_1_7 & var_1_34)) ? (var_1_19 == ((signed char) var_1_20)) : 1)) && ((! ((min (var_1_16 , var_1_20)) < (var_1_14 - var_1_15))) ? (var_1_21 == ((signed short int) (min (var_1_16 , var_1_20)))) : 1)) && (((var_1_18 % (min (var_1_7 , var_1_15))) <= var_1_48) ? (var_1_22 == ((float) (var_1_5 - (min (var_1_4 , var_1_26))))) : ((! (var_1_46 || var_1_29)) ? ((var_1_25 > var_1_5) ? (var_1_22 == ((float) (var_1_25 - (min (var_1_5 , var_1_4))))) : 1) : ((var_1_18 <= var_1_48) ? (var_1_22 == ((float) ((10.2f + var_1_4) - 5.25f))) : 1)))) && (((var_1_53 / var_1_7) == var_1_40) ? (((var_1_5 * var_1_1) < var_1_6) ? (var_1_27 == ((unsigned long int) var_1_7)) : (var_1_27 == ((unsigned long int) var_1_14))) : (var_1_27 == ((unsigned long int) var_1_14)))) && (var_1_12 ? (var_1_28 == ((signed short int) (var_1_19 - var_1_15))) : (var_1_28 == ((signed short int) 4)))) && (((- (var_1_30 - var_1_15)) > var_1_47) ? (var_1_29 == ((unsigned char) (var_1_12 || var_1_31))) : (var_1_29 == ((unsigned char) var_1_12)))) && ((var_1_43 >= var_1_34) ? (var_1_32 == ((double) (var_1_6 + var_1_4))) : 1)) && (((var_1_21 / var_1_9) >= var_1_15) ? (var_1_34 == ((unsigned char) ((var_1_35 + (abs (5))) + var_1_16))) : (var_1_34 == ((unsigned char) (((232 - var_1_36) - var_1_37) - (min (var_1_15 , (var_1_38 - var_1_39)))))))) && (var_1_12 ? (var_1_40 == ((signed short int) (max ((var_1_16 + var_1_19) , var_1_35)))) : ((var_1_15 >= var_1_36) ? (var_1_40 == ((signed short int) (max (var_1_35 , var_1_36)))) : (var_1_40 == ((signed short int) var_1_36))))) && (var_1_31 ? (((10 + var_1_15) < var_1_37) ? (((var_1_43 + (abs (var_1_57))) <= var_1_50) ? (var_1_41 == ((signed short int) var_1_14)) : (var_1_41 == ((signed short int) 256))) : (var_1_41 == ((signed short int) var_1_15))) : 1)) && (var_1_31 ? (var_1_43 == ((unsigned long int) var_1_37)) : 1)) && (var_1_10 ? (var_1_44 == ((signed short int) ((var_1_45 - (min (var_1_41 , var_1_36))) - var_1_37))) : (var_1_44 == ((signed short int) (var_1_39 - var_1_16))))) && (((last_1_var_1_53 / var_1_30) < last_1_var_1_55) ? ((! var_1_31) ? ((var_1_35 >= (min ((var_1_30 - var_1_15) , var_1_14))) ? (var_1_46 == ((unsigned char) (! var_1_12))) : (var_1_46 == ((unsigned char) (last_1_var_1_10 && var_1_12)))) : ((100 < last_1_var_1_57) ? (var_1_46 == ((unsigned char) (! var_1_12))) : 1)) : 1)) && ((var_1_39 < last_1_var_1_55) ? (var_1_47 == ((signed short int) (max ((min (last_1_var_1_54 , (var_1_35 - var_1_15))) , -100)))) : 1)) && ((var_1_7 < var_1_35) ? (var_1_48 == ((signed short int) (min ((1 - (max (var_1_19 , var_1_13))) , var_1_53)))) : (var_1_48 == ((signed short int) ((var_1_45 - var_1_19) - var_1_30))))) && (((- var_1_26) <= var_1_25) ? (var_1_50 == ((signed long int) (var_1_39 - (var_1_51 - (var_1_38 + var_1_30))))) : (var_1_50 == ((signed long int) (256 - (var_1_51 - (var_1_52 - var_1_43))))))) && ((var_1_7 < (var_1_45 + var_1_55)) ? (var_1_53 == ((signed char) (var_1_39 - 64))) : (var_1_53 == ((signed char) (var_1_39 - var_1_36))))) && (((min ((var_1_52 - var_1_36) , var_1_35)) > -2) ? ((var_1_26 >= var_1_17) ? ((var_1_12 || var_1_29) ? (var_1_54 == ((unsigned long int) var_1_51)) : 1) : 1) : (var_1_54 == ((unsigned long int) (max (var_1_7 , (max (var_1_37 , var_1_13)))))))) && (var_1_10 ? (var_1_55 == ((unsigned char) ((var_1_56 - var_1_36) - var_1_38))) : (var_1_55 == ((unsigned char) (min (25 , (var_1_56 - var_1_39))))))) && ((var_1_46 || var_1_10) ? (var_1_57 == ((signed long int) ((var_1_50 + var_1_34) + var_1_21))) : 1)) && (((256 >> var_1_13) < (max (var_1_28 , var_1_48))) ? (var_1_10 ? ((var_1_37 < var_1_43) ? (var_1_59 == ((signed long int) (var_1_53 - var_1_16))) : ((! ((var_1_55 / -50) > (var_1_7 - var_1_15))) ? (var_1_59 == ((signed long int) var_1_51)) : (var_1_59 == ((signed long int) (min (var_1_7 , var_1_28)))))) : 1) : (var_1_59 == ((signed long int) var_1_39)))) && ((! (var_1_5 < last_1_var_1_1)) ? (var_1_60 == ((unsigned long int) (2306743485u - (min ((min (var_1_15 , last_1_var_1_28)) , var_1_52))))) : ((var_1_31 && last_1_var_1_46) ? (var_1_60 == ((unsigned long int) var_1_45)) : (var_1_60 == ((unsigned long int) last_1_var_1_28))))
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
