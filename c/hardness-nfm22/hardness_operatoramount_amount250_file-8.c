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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
float var_1_1 = 256.8;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
signed long int var_1_8 = 1227169815;
signed long int var_1_9 = 1000000000;
signed long int var_1_10 = 1203685913;
unsigned short int var_1_12 = 256;
unsigned short int var_1_14 = 21930;
unsigned short int var_1_15 = 28235;
unsigned short int var_1_18 = 10000;
float var_1_20 = 255.2;
float var_1_22 = 4.125;
float var_1_23 = 15.5;
unsigned char var_1_24 = 0;
signed char var_1_25 = 8;
signed char var_1_26 = 16;
signed char var_1_27 = 16;
signed char var_1_28 = 50;
signed char var_1_29 = 1;
unsigned long int var_1_30 = 128;
unsigned long int var_1_31 = 1143482783;
signed short int var_1_32 = 2;
signed short int var_1_33 = 18620;
signed short int var_1_34 = 0;
unsigned short int var_1_35 = 5;
float var_1_36 = 0.6;
unsigned long int var_1_37 = 64;
unsigned short int var_1_38 = 500;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 32;
unsigned char var_1_41 = 64;
unsigned char var_1_42 = 128;
unsigned long int var_1_43 = 256;
signed char var_1_44 = -64;
signed char var_1_45 = 2;
unsigned char var_1_46 = 64;
unsigned char var_1_47 = 50;
unsigned char var_1_48 = 0;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 0;
unsigned short int var_1_51 = 4;
unsigned short int var_1_53 = 43574;
unsigned long int var_1_54 = 16;
signed short int var_1_56 = 2;
float var_1_57 = 3.5;
float var_1_58 = 0.5;
signed char var_1_59 = -50;
double var_1_60 = 25.8;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_30 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req17Batch8Amount250
	signed long int stepLocal_14 = - var_1_33;
	if (stepLocal_14 <= last_1_var_1_30) {
		if (var_1_24) {
			var_1_48 = ((! var_1_49) || var_1_50);
		}
	}


	// From: Req16Batch8Amount250
	unsigned char stepLocal_13 = var_1_48;
	if (var_1_48 && stepLocal_13) {
		if (var_1_48) {
			var_1_46 = (min (var_1_29 , (var_1_41 + var_1_40)));
		} else {
			if (var_1_48) {
				var_1_46 = ((var_1_26 + var_1_47) + var_1_28);
			} else {
				var_1_46 = (min (var_1_47 , var_1_42));
			}
		}
	}


	// From: Req11Batch8Amount250
	if (var_1_27 <= var_1_29) {
		var_1_37 = 2u;
	} else {
		var_1_37 = var_1_31;
	}


	// From: Req15Batch8Amount250
	var_1_44 = ((var_1_29 + var_1_28) - (var_1_26 + var_1_45));


	// From: Req19Batch8Amount250
	if (var_1_48) {
		var_1_54 = ((3224838634u - (var_1_46 + var_1_18)) - ((abs (1294470353u)) - var_1_26));
	} else {
		var_1_54 = (100u + (max (4u , var_1_41)));
	}


	// From: Req22Batch8Amount250
	if (var_1_48) {
		var_1_59 = var_1_47;
	} else {
		var_1_59 = var_1_45;
	}


	// From: Req13Batch8Amount250
	if (var_1_48) {
		if ((~ var_1_46) <= var_1_31) {
			var_1_39 = (var_1_40 + var_1_41);
		} else {
			var_1_39 = (min ((var_1_42 - var_1_26) , ((64 - var_1_28) + var_1_41)));
		}
	} else {
		if ((256 - (var_1_15 - var_1_46)) >= (var_1_42 / var_1_18)) {
			if (var_1_48) {
				var_1_39 = ((max (var_1_41 , var_1_28)) + var_1_40);
			} else {
				var_1_39 = (abs (var_1_29));
			}
		}
	}


	// From: Req5Batch8Amount250
	unsigned char stepLocal_5 = var_1_46;
	signed long int stepLocal_4 = abs (var_1_18 - var_1_15);
	if (var_1_48) {
		if (var_1_59 > stepLocal_4) {
			var_1_25 = (((10 - var_1_26) + var_1_27) + (abs (var_1_28 - var_1_29)));
		} else {
			if (stepLocal_5 >= var_1_26) {
				if (var_1_48) {
					var_1_25 = (max ((var_1_28 + var_1_29) , var_1_27));
				} else {
					var_1_25 = var_1_26;
				}
			}
		}
	} else {
		var_1_25 = var_1_27;
	}


	// From: Req7Batch8Amount250
	if (var_1_26 == var_1_9) {
		if (var_1_46 < var_1_14) {
			if (var_1_48) {
				var_1_32 = ((min (var_1_26 , (var_1_33 - var_1_39))) - var_1_18);
			} else {
				var_1_32 = ((max ((var_1_39 + 1) , 100)) - var_1_28);
			}
		} else {
			var_1_32 = (var_1_46 - var_1_29);
		}
	}


	// From: Req8Batch8Amount250
	unsigned long int stepLocal_6 = var_1_37 / (max (var_1_9 , var_1_15));
	if ((var_1_54 ^ var_1_28) > stepLocal_6) {
		var_1_34 = var_1_26;
	} else {
		var_1_34 = var_1_39;
	}


	// From: Req9Batch8Amount250
	unsigned long int stepLocal_8 = var_1_37;
	unsigned char stepLocal_7 = var_1_46;
	if (var_1_48) {
		if (stepLocal_8 < var_1_39) {
			if (var_1_8 <= stepLocal_7) {
				var_1_35 = (var_1_46 + 200);
			}
		}
	} else {
		var_1_35 = (abs (25));
	}


	// From: Req10Batch8Amount250
	if ((99.125f - var_1_6) < (max (var_1_23 , var_1_5))) {
		if ((var_1_15 - (var_1_14 - var_1_28)) > (~ (var_1_39 + var_1_39))) {
			var_1_36 = (var_1_6 - var_1_5);
		} else {
			var_1_36 = var_1_23;
		}
	} else {
		var_1_36 = var_1_23;
	}


	// From: Req12Batch8Amount250
	signed long int stepLocal_11 = abs (var_1_39);
	signed long int stepLocal_10 = (var_1_26 + var_1_46) * -100;
	unsigned char stepLocal_9 = var_1_46;
	if (var_1_34 > stepLocal_10) {
		if (((var_1_46 / 25) << var_1_46) > stepLocal_11) {
			var_1_38 = (max (var_1_33 , var_1_39));
		} else {
			if (stepLocal_9 < var_1_4) {
				var_1_38 = var_1_15;
			}
		}
	} else {
		var_1_38 = ((min (var_1_26 , var_1_46)) + (max ((var_1_14 - var_1_39) , (min (var_1_29 , var_1_33)))));
	}


	// From: Req18Batch8Amount250
	if (var_1_42 < var_1_39) {
		var_1_51 = (var_1_53 - var_1_40);
	}


	// From: Req20Batch8Amount250
	unsigned char stepLocal_17 = var_1_50;
	unsigned short int stepLocal_16 = var_1_35;
	unsigned char stepLocal_15 = -50 != var_1_40;
	if (var_1_48 && stepLocal_15) {
		if (stepLocal_16 >= var_1_38) {
			var_1_56 = ((var_1_41 - (var_1_40 + var_1_45)) + ((var_1_28 + var_1_26) - var_1_42));
		} else {
			if (var_1_48 && stepLocal_17) {
				var_1_56 = (var_1_29 + -10);
			} else {
				var_1_56 = var_1_46;
			}
		}
	} else {
		var_1_56 = (var_1_28 - var_1_32);
	}


	// From: Req6Batch8Amount250
	if ((var_1_39 * var_1_10) >= var_1_15) {
		var_1_30 = ((var_1_10 + var_1_31) - var_1_39);
	} else {
		var_1_30 = var_1_31;
	}


	// From: Req1Batch8Amount250
	signed long int stepLocal_0 = var_1_51 % var_1_4;
	if (var_1_34 == stepLocal_0) {
		var_1_1 = (var_1_5 - var_1_6);
	}


	// From: Req4Batch8Amount250
	if (var_1_39 <= ((var_1_56 * var_1_9) + 128)) {
		if (var_1_48) {
			var_1_20 = (max ((var_1_22 + var_1_23) , var_1_5));
		}
	} else {
		if (! var_1_48) {
			var_1_20 = (max (var_1_22 , var_1_6));
		}
	}


	// From: Req21Batch8Amount250
	if (var_1_5 > (- var_1_1)) {
		if (var_1_48) {
			var_1_57 = (max ((max (var_1_6 , var_1_22)) , (max (var_1_23 , (min (var_1_5 , var_1_58))))));
		} else {
			var_1_57 = (min (var_1_5 , var_1_58));
		}
	} else {
		var_1_57 = var_1_23;
	}


	// From: Req2Batch8Amount250
	unsigned char stepLocal_1 = var_1_4 >= var_1_32;
	if (((var_1_6 - var_1_5) < var_1_57) || stepLocal_1) {
		var_1_7 = ((var_1_8 - (var_1_9 - 1000000)) - (var_1_10 - (1000000000 - var_1_35)));
	} else {
		var_1_7 = var_1_35;
	}


	// From: Req3Batch8Amount250
	signed long int stepLocal_3 = var_1_4;
	signed short int stepLocal_2 = var_1_56;
	if (stepLocal_3 <= (max ((var_1_9 - var_1_10) , var_1_8))) {
		if (stepLocal_2 >= var_1_4) {
			var_1_12 = (abs (var_1_39));
		} else {
			var_1_12 = ((var_1_14 + var_1_15) - (var_1_39 + var_1_46));
		}
	} else {
		if ((abs (var_1_5)) > var_1_20) {
			var_1_12 = ((var_1_46 + (var_1_18 - var_1_46)) + var_1_14);
		}
	}


	// From: Req14Batch8Amount250
	signed short int stepLocal_12 = var_1_33;
	if (stepLocal_12 == var_1_12) {
		if (var_1_48) {
			var_1_43 = (var_1_30 + 1u);
		}
	}


	// From: Req23Batch8Amount250
	if (var_1_56 >= ((max (var_1_47 , var_1_39)) - (var_1_31 - 25))) {
		if (var_1_7 < var_1_43) {
			var_1_60 = (var_1_5 - var_1_6);
		} else {
			var_1_60 = 7.2;
		}
	} else {
		var_1_60 = var_1_23;
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854765600e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 1073741822);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 536870911);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16384);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 8191);
	assume_abort_if_not(var_1_18 <= 16383);
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 31);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -31);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 1073741824);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 16382);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 63);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 63);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_53 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_53 >= 32767);
	assume_abort_if_not(var_1_53 <= 65534);
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= -922337.2036854765600e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854765600e+12F && var_1_58 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_30 = var_1_30;
}

int property() {
	return (((((((((((((((((((((((var_1_34 == (var_1_51 % var_1_4)) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : 1) && ((((var_1_6 - var_1_5) < var_1_57) || (var_1_4 >= var_1_32)) ? (var_1_7 == ((signed long int) ((var_1_8 - (var_1_9 - 1000000)) - (var_1_10 - (1000000000 - var_1_35))))) : (var_1_7 == ((signed long int) var_1_35)))) && ((var_1_4 <= (max ((var_1_9 - var_1_10) , var_1_8))) ? ((var_1_56 >= var_1_4) ? (var_1_12 == ((unsigned short int) (abs (var_1_39)))) : (var_1_12 == ((unsigned short int) ((var_1_14 + var_1_15) - (var_1_39 + var_1_46))))) : (((abs (var_1_5)) > var_1_20) ? (var_1_12 == ((unsigned short int) ((var_1_46 + (var_1_18 - var_1_46)) + var_1_14))) : 1))) && ((var_1_39 <= ((var_1_56 * var_1_9) + 128)) ? (var_1_48 ? (var_1_20 == ((float) (max ((var_1_22 + var_1_23) , var_1_5)))) : 1) : ((! var_1_48) ? (var_1_20 == ((float) (max (var_1_22 , var_1_6)))) : 1))) && (var_1_48 ? ((var_1_59 > (abs (var_1_18 - var_1_15))) ? (var_1_25 == ((signed char) (((10 - var_1_26) + var_1_27) + (abs (var_1_28 - var_1_29))))) : ((var_1_46 >= var_1_26) ? (var_1_48 ? (var_1_25 == ((signed char) (max ((var_1_28 + var_1_29) , var_1_27)))) : (var_1_25 == ((signed char) var_1_26))) : 1)) : (var_1_25 == ((signed char) var_1_27)))) && (((var_1_39 * var_1_10) >= var_1_15) ? (var_1_30 == ((unsigned long int) ((var_1_10 + var_1_31) - var_1_39))) : (var_1_30 == ((unsigned long int) var_1_31)))) && ((var_1_26 == var_1_9) ? ((var_1_46 < var_1_14) ? (var_1_48 ? (var_1_32 == ((signed short int) ((min (var_1_26 , (var_1_33 - var_1_39))) - var_1_18))) : (var_1_32 == ((signed short int) ((max ((var_1_39 + 1) , 100)) - var_1_28)))) : (var_1_32 == ((signed short int) (var_1_46 - var_1_29)))) : 1)) && (((var_1_54 ^ var_1_28) > (var_1_37 / (max (var_1_9 , var_1_15)))) ? (var_1_34 == ((signed short int) var_1_26)) : (var_1_34 == ((signed short int) var_1_39)))) && (var_1_48 ? ((var_1_37 < var_1_39) ? ((var_1_8 <= var_1_46) ? (var_1_35 == ((unsigned short int) (var_1_46 + 200))) : 1) : 1) : (var_1_35 == ((unsigned short int) (abs (25)))))) && (((99.125f - var_1_6) < (max (var_1_23 , var_1_5))) ? (((var_1_15 - (var_1_14 - var_1_28)) > (~ (var_1_39 + var_1_39))) ? (var_1_36 == ((float) (var_1_6 - var_1_5))) : (var_1_36 == ((float) var_1_23))) : (var_1_36 == ((float) var_1_23)))) && ((var_1_27 <= var_1_29) ? (var_1_37 == ((unsigned long int) 2u)) : (var_1_37 == ((unsigned long int) var_1_31)))) && ((var_1_34 > ((var_1_26 + var_1_46) * -100)) ? ((((var_1_46 / 25) << var_1_46) > (abs (var_1_39))) ? (var_1_38 == ((unsigned short int) (max (var_1_33 , var_1_39)))) : ((var_1_46 < var_1_4) ? (var_1_38 == ((unsigned short int) var_1_15)) : 1)) : (var_1_38 == ((unsigned short int) ((min (var_1_26 , var_1_46)) + (max ((var_1_14 - var_1_39) , (min (var_1_29 , var_1_33))))))))) && (var_1_48 ? (((~ var_1_46) <= var_1_31) ? (var_1_39 == ((unsigned char) (var_1_40 + var_1_41))) : (var_1_39 == ((unsigned char) (min ((var_1_42 - var_1_26) , ((64 - var_1_28) + var_1_41)))))) : (((256 - (var_1_15 - var_1_46)) >= (var_1_42 / var_1_18)) ? (var_1_48 ? (var_1_39 == ((unsigned char) ((max (var_1_41 , var_1_28)) + var_1_40))) : (var_1_39 == ((unsigned char) (abs (var_1_29))))) : 1))) && ((var_1_33 == var_1_12) ? (var_1_48 ? (var_1_43 == ((unsigned long int) (var_1_30 + 1u))) : 1) : 1)) && (var_1_44 == ((signed char) ((var_1_29 + var_1_28) - (var_1_26 + var_1_45))))) && ((var_1_48 && var_1_48) ? (var_1_48 ? (var_1_46 == ((unsigned char) (min (var_1_29 , (var_1_41 + var_1_40))))) : (var_1_48 ? (var_1_46 == ((unsigned char) ((var_1_26 + var_1_47) + var_1_28))) : (var_1_46 == ((unsigned char) (min (var_1_47 , var_1_42)))))) : 1)) && (((- var_1_33) <= last_1_var_1_30) ? (var_1_24 ? (var_1_48 == ((unsigned char) ((! var_1_49) || var_1_50))) : 1) : 1)) && ((var_1_42 < var_1_39) ? (var_1_51 == ((unsigned short int) (var_1_53 - var_1_40))) : 1)) && (var_1_48 ? (var_1_54 == ((unsigned long int) ((3224838634u - (var_1_46 + var_1_18)) - ((abs (1294470353u)) - var_1_26)))) : (var_1_54 == ((unsigned long int) (100u + (max (4u , var_1_41))))))) && ((var_1_48 && (-50 != var_1_40)) ? ((var_1_35 >= var_1_38) ? (var_1_56 == ((signed short int) ((var_1_41 - (var_1_40 + var_1_45)) + ((var_1_28 + var_1_26) - var_1_42)))) : ((var_1_48 && var_1_50) ? (var_1_56 == ((signed short int) (var_1_29 + -10))) : (var_1_56 == ((signed short int) var_1_46)))) : (var_1_56 == ((signed short int) (var_1_28 - var_1_32))))) && ((var_1_5 > (- var_1_1)) ? (var_1_48 ? (var_1_57 == ((float) (max ((max (var_1_6 , var_1_22)) , (max (var_1_23 , (min (var_1_5 , var_1_58)))))))) : (var_1_57 == ((float) (min (var_1_5 , var_1_58))))) : (var_1_57 == ((float) var_1_23)))) && (var_1_48 ? (var_1_59 == ((signed char) var_1_47)) : (var_1_59 == ((signed char) var_1_45)))) && ((var_1_56 >= ((max (var_1_47 , var_1_39)) - (var_1_31 - 25))) ? ((var_1_7 < var_1_43) ? (var_1_60 == ((double) (var_1_5 - var_1_6))) : (var_1_60 == ((double) 7.2))) : (var_1_60 == ((double) var_1_23)))
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
