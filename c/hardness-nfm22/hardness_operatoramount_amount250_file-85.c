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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch85Amount250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 5;
signed char var_1_3 = -128;
signed char var_1_5 = 16;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 32;
signed long int var_1_12 = 1710626147;
signed short int var_1_13 = 16;
unsigned long int var_1_16 = 128;
float var_1_17 = 0.8;
float var_1_18 = 99.35;
unsigned long int var_1_21 = 3613035197;
double var_1_22 = 1.2;
double var_1_23 = 10.25;
double var_1_24 = 99999.6;
double var_1_25 = 5.5;
double var_1_26 = 8.45;
double var_1_27 = 3.875;
float var_1_28 = 63.6;
signed long int var_1_29 = -100;
unsigned short int var_1_32 = 5;
unsigned short int var_1_33 = 41347;
unsigned short int var_1_34 = 40392;
signed char var_1_35 = -16;
signed char var_1_36 = 50;
double var_1_37 = 127.5;
double var_1_38 = 0.0;
double var_1_39 = 24.25;
double var_1_40 = 7.8;
double var_1_41 = 0.8;
unsigned short int var_1_42 = 256;
double var_1_43 = 64.2;
double var_1_45 = 0.0;
signed short int var_1_46 = 256;
unsigned long int var_1_47 = 128;
unsigned long int var_1_48 = 4;
signed short int var_1_49 = 16;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 1;
signed short int var_1_52 = 5;
double var_1_53 = 16.5;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
unsigned char var_1_56 = 0;
unsigned long int var_1_57 = 4;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 1;
double var_1_60 = 1000000000.5;
double var_1_61 = 15.75;
signed char var_1_62 = 8;
signed char var_1_63 = -5;
signed char var_1_64 = 16;
signed char var_1_65 = 5;
unsigned char var_1_66 = 64;
signed char var_1_67 = -32;
signed char var_1_68 = 0;
signed char var_1_69 = -10;
signed short int var_1_70 = -16;
signed long int var_1_71 = -16;
unsigned char var_1_72 = 1;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 5;
unsigned char last_1_var_1_7 = 64;
signed short int last_1_var_1_13 = 16;
unsigned long int last_1_var_1_16 = 128;
float last_1_var_1_28 = 63.6;
signed long int last_1_var_1_29 = -100;
unsigned short int last_1_var_1_32 = 5;
signed char last_1_var_1_35 = -16;
double last_1_var_1_37 = 127.5;
unsigned short int last_1_var_1_42 = 256;
double last_1_var_1_43 = 64.2;
unsigned long int last_1_var_1_47 = 128;
unsigned char last_1_var_1_50 = 1;
signed short int last_1_var_1_52 = 5;
double last_1_var_1_53 = 16.5;
unsigned char last_1_var_1_54 = 0;
unsigned long int last_1_var_1_57 = 4;
unsigned char last_1_var_1_58 = 1;
double last_1_var_1_60 = 1000000000.5;
unsigned char last_1_var_1_66 = 64;
signed long int last_1_var_1_71 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch85Amount250
	if (last_1_var_1_58) {
		var_1_42 = (min ((last_1_var_1_1 + var_1_8) , var_1_9));
	}


	// From: Req7Batch85Amount250
	if ((var_1_10 & last_1_var_1_13) > (last_1_var_1_29 / var_1_5)) {
		var_1_29 = ((last_1_var_1_42 + last_1_var_1_35) + (var_1_10 + var_1_9));
	} else {
		if (! last_1_var_1_50) {
			var_1_29 = last_1_var_1_71;
		}
	}


	// From: Req29Batch85Amount250
	var_1_71 = var_1_29;


	// From: Req4Batch85Amount250
	unsigned char stepLocal_3 = (last_1_var_1_47 * var_1_8) < last_1_var_1_1;
	if (! ((var_1_17 - var_1_18) <= (last_1_var_1_28 * last_1_var_1_60))) {
		if (stepLocal_3 || last_1_var_1_54) {
			if (last_1_var_1_54) {
				var_1_16 = (var_1_21 - var_1_8);
			} else {
				var_1_16 = (var_1_21 - last_1_var_1_7);
			}
		} else {
			var_1_16 = (var_1_10 + var_1_9);
		}
	} else {
		var_1_16 = (min (var_1_21 , (last_1_var_1_16 + (1u + last_1_var_1_7))));
	}


	// From: Req25Batch85Amount250
	if (last_1_var_1_37 > (- (abs (last_1_var_1_53)))) {
		var_1_62 = (var_1_9 + (var_1_63 + (abs (var_1_64))));
	} else {
		if (! var_1_51) {
			if (24.875f < last_1_var_1_28) {
				if (var_1_56) {
					var_1_62 = ((var_1_9 - var_1_65) + (var_1_63 + -16));
				}
			}
		}
	}


	// From: Req15Batch85Amount250
	signed long int stepLocal_7 = var_1_33 * var_1_62;
	if (var_1_71 != stepLocal_7) {
		var_1_48 = var_1_29;
	}


	// From: Req17Batch85Amount250
	signed long int stepLocal_9 = - var_1_34;
	if (last_1_var_1_53 >= last_1_var_1_43) {
		var_1_50 = var_1_51;
	} else {
		if (stepLocal_9 < last_1_var_1_42) {
			var_1_50 = (last_1_var_1_58 || var_1_51);
		}
	}


	// From: Req22Batch85Amount250
	if (var_1_50) {
		var_1_58 = (! (! var_1_55));
	} else {
		var_1_58 = (((var_1_56 && var_1_51) && var_1_59) && (! var_1_55));
	}


	// From: Req20Batch85Amount250
	if (var_1_58) {
		if (var_1_50) {
			var_1_54 = (! var_1_51);
		} else {
			var_1_54 = ((var_1_51 || (! var_1_55)) && var_1_56);
		}
	}


	// From: Req5Batch85Amount250
	if (var_1_50) {
		var_1_22 = var_1_23;
	} else {
		var_1_22 = (max (((abs (var_1_24)) + var_1_25) , ((var_1_26 + 32.5) - var_1_27)));
	}


	// From: Req23Batch85Amount250
	signed long int stepLocal_13 = var_1_10 * var_1_36;
	if (! var_1_59) {
		var_1_60 = (abs (var_1_45));
	} else {
		if (var_1_71 <= stepLocal_13) {
			if (var_1_54) {
				var_1_60 = 99.875;
			}
		} else {
			if (var_1_45 >= ((var_1_40 / var_1_38) / 8.7)) {
				var_1_60 = (var_1_40 + var_1_39);
			} else {
				var_1_60 = var_1_41;
			}
		}
	}


	// From: Req16Batch85Amount250
	signed long int stepLocal_8 = last_1_var_1_52;
	if (stepLocal_8 <= last_1_var_1_66) {
		var_1_49 = last_1_var_1_32;
	} else {
		var_1_49 = (abs (var_1_8));
	}


	// From: Req9Batch85Amount250
	var_1_35 = (var_1_9 - var_1_36);


	// From: Req26Batch85Amount250
	var_1_66 = var_1_10;


	// From: Req27Batch85Amount250
	unsigned char stepLocal_15 = var_1_10;
	if (stepLocal_15 == var_1_8) {
		var_1_67 = var_1_65;
	} else {
		var_1_67 = (((var_1_68 + var_1_69) + var_1_64) + var_1_9);
	}


	// From: Req28Batch85Amount250
	var_1_70 = var_1_10;


	// From: Req30Batch85Amount250
	var_1_72 = var_1_55;


	// From: Req1Batch85Amount250
	signed long int stepLocal_0 = -16;
	if ((max ((var_1_42 / var_1_3) , (var_1_49 % var_1_5))) != stepLocal_0) {
		var_1_1 = (abs (var_1_66));
	} else {
		var_1_1 = (max (var_1_66 , 32));
	}


	// From: Req19Batch85Amount250
	unsigned long int stepLocal_10 = var_1_10 ^ var_1_48;
	if ((~ (var_1_16 >> var_1_3)) != stepLocal_10) {
		var_1_53 = ((var_1_39 + var_1_41) + (255.7 - var_1_26));
	} else {
		var_1_53 = (2.425 - var_1_27);
	}


	// From: Req8Batch85Amount250
	signed long int stepLocal_4 = var_1_29;
	if (stepLocal_4 >= last_1_var_1_32) {
		var_1_32 = ((max (var_1_33 , var_1_34)) - var_1_10);
	} else {
		var_1_32 = (min (var_1_33 , var_1_49));
	}


	// From: Req13Batch85Amount250
	if (! (! var_1_58)) {
		var_1_46 = var_1_49;
	} else {
		if (64 != (var_1_33 - (var_1_32 + var_1_34))) {
			var_1_46 = (abs (var_1_5));
		} else {
			var_1_46 = var_1_9;
		}
	}


	// From: Req18Batch85Amount250
	if (var_1_72) {
		var_1_52 = (min (var_1_70 , var_1_9));
	}


	// From: Req24Batch85Amount250
	signed long int stepLocal_14 = var_1_35 / -5;
	if (var_1_66 <= stepLocal_14) {
		var_1_61 = (min ((128.36 + var_1_26) , 64.05));
	}


	// From: Req6Batch85Amount250
	if (var_1_50) {
		var_1_28 = (var_1_26 - 3.25f);
	} else {
		if (((var_1_16 + var_1_8) + var_1_35) == ((var_1_32 * var_1_10) / var_1_12)) {
			var_1_28 = (var_1_26 - 1.000000000000005E14f);
		} else {
			var_1_28 = var_1_27;
		}
	}


	// From: Req2Batch85Amount250
	signed long int stepLocal_2 = (var_1_12 - var_1_66) - (var_1_10 + var_1_49);
	signed long int stepLocal_1 = min (var_1_3 , var_1_5);
	if (var_1_52 > stepLocal_1) {
		var_1_7 = ((var_1_8 - var_1_9) - var_1_10);
	} else {
		if (((min (last_1_var_1_7 , var_1_8)) * var_1_9) < stepLocal_2) {
			var_1_7 = (min (var_1_9 , var_1_8));
		} else {
			var_1_7 = (abs (var_1_8));
		}
	}


	// From: Req3Batch85Amount250
	if (var_1_58) {
		var_1_13 = (max ((max (var_1_5 , var_1_7)) , (var_1_3 + var_1_10)));
	}


	// From: Req14Batch85Amount250
	if (var_1_72) {
		var_1_47 = ((min (var_1_67 , var_1_13)) + var_1_49);
	} else {
		var_1_47 = (max (var_1_13 , var_1_10));
	}


	// From: Req12Batch85Amount250
	signed short int stepLocal_6 = var_1_13;
	if (var_1_22 <= var_1_26) {
		var_1_43 = 256.661;
	} else {
		if ((min (var_1_16 , var_1_36)) <= stepLocal_6) {
			var_1_43 = (max (((var_1_45 - 25.5) - var_1_39) , (max ((var_1_26 - 10.25) , var_1_23))));
		}
	}


	// From: Req21Batch85Amount250
	unsigned long int stepLocal_12 = var_1_47 - var_1_66;
	signed long int stepLocal_11 = var_1_12;
	if (stepLocal_11 < (min (var_1_9 , last_1_var_1_57))) {
		var_1_57 = (var_1_21 - ((var_1_33 + var_1_66) + var_1_9));
	} else {
		if (((var_1_62 / var_1_3) / -1) <= stepLocal_12) {
			var_1_57 = (var_1_66 + 500u);
		}
	}


	// From: Req10Batch85Amount250
	signed long int stepLocal_5 = var_1_46 & var_1_49;
	if (var_1_50) {
		if (var_1_57 >= stepLocal_5) {
			var_1_37 = (var_1_25 + ((var_1_38 - var_1_39) - 8.25));
		} else {
			var_1_37 = (var_1_26 + var_1_24);
		}
	} else {
		var_1_37 = (var_1_26 + (max (var_1_40 , (var_1_39 + var_1_41))));
	}
}



void updateVariables() {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -128);
	assume_abort_if_not(var_1_3 <= 127);
	assume_abort_if_not(var_1_3 != 0);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -128);
	assume_abort_if_not(var_1_5 <= 127);
	assume_abort_if_not(var_1_5 != 0);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 190);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 1073741823);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 2147483647);
	assume_abort_if_not(var_1_21 <= 4294967294);
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= -922337.2036854765600e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854765600e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -461168.6018427382800e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427382800e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427382800e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427382800e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427382800e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854765600e+12F && var_1_27 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 32767);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 2305843.009213691390e+12F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427382800e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691390e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -461168.6018427382800e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427382800e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -230584.3009213691390e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691390e+12F && var_1_41 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 4611686.018427382800e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854765600e+12F && var_1_45 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 0);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 1);
	assume_abort_if_not(var_1_59 <= 1);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= -31);
	assume_abort_if_not(var_1_63 <= 32);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -31);
	assume_abort_if_not(var_1_64 <= 31);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 63);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= -15);
	assume_abort_if_not(var_1_68 <= 16);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= -15);
	assume_abort_if_not(var_1_69 <= 16);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_7 = var_1_7;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_71 = var_1_71;
}

int property() {
	return (((((((((((((((((((((((((((((((max ((var_1_42 / var_1_3) , (var_1_49 % var_1_5))) != -16) ? (var_1_1 == ((unsigned short int) (abs (var_1_66)))) : (var_1_1 == ((unsigned short int) (max (var_1_66 , 32))))) && ((var_1_52 > (min (var_1_3 , var_1_5))) ? (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - var_1_10))) : ((((min (last_1_var_1_7 , var_1_8)) * var_1_9) < ((var_1_12 - var_1_66) - (var_1_10 + var_1_49))) ? (var_1_7 == ((unsigned char) (min (var_1_9 , var_1_8)))) : (var_1_7 == ((unsigned char) (abs (var_1_8))))))) && (var_1_58 ? (var_1_13 == ((signed short int) (max ((max (var_1_5 , var_1_7)) , (var_1_3 + var_1_10))))) : 1)) && ((! ((var_1_17 - var_1_18) <= (last_1_var_1_28 * last_1_var_1_60))) ? ((((last_1_var_1_47 * var_1_8) < last_1_var_1_1) || last_1_var_1_54) ? (last_1_var_1_54 ? (var_1_16 == ((unsigned long int) (var_1_21 - var_1_8))) : (var_1_16 == ((unsigned long int) (var_1_21 - last_1_var_1_7)))) : (var_1_16 == ((unsigned long int) (var_1_10 + var_1_9)))) : (var_1_16 == ((unsigned long int) (min (var_1_21 , (last_1_var_1_16 + (1u + last_1_var_1_7)))))))) && (var_1_50 ? (var_1_22 == ((double) var_1_23)) : (var_1_22 == ((double) (max (((abs (var_1_24)) + var_1_25) , ((var_1_26 + 32.5) - var_1_27))))))) && (var_1_50 ? (var_1_28 == ((float) (var_1_26 - 3.25f))) : ((((var_1_16 + var_1_8) + var_1_35) == ((var_1_32 * var_1_10) / var_1_12)) ? (var_1_28 == ((float) (var_1_26 - 1.000000000000005E14f))) : (var_1_28 == ((float) var_1_27))))) && (((var_1_10 & last_1_var_1_13) > (last_1_var_1_29 / var_1_5)) ? (var_1_29 == ((signed long int) ((last_1_var_1_42 + last_1_var_1_35) + (var_1_10 + var_1_9)))) : ((! last_1_var_1_50) ? (var_1_29 == ((signed long int) last_1_var_1_71)) : 1))) && ((var_1_29 >= last_1_var_1_32) ? (var_1_32 == ((unsigned short int) ((max (var_1_33 , var_1_34)) - var_1_10))) : (var_1_32 == ((unsigned short int) (min (var_1_33 , var_1_49)))))) && (var_1_35 == ((signed char) (var_1_9 - var_1_36)))) && (var_1_50 ? ((var_1_57 >= (var_1_46 & var_1_49)) ? (var_1_37 == ((double) (var_1_25 + ((var_1_38 - var_1_39) - 8.25)))) : (var_1_37 == ((double) (var_1_26 + var_1_24)))) : (var_1_37 == ((double) (var_1_26 + (max (var_1_40 , (var_1_39 + var_1_41)))))))) && (last_1_var_1_58 ? (var_1_42 == ((unsigned short int) (min ((last_1_var_1_1 + var_1_8) , var_1_9)))) : 1)) && ((var_1_22 <= var_1_26) ? (var_1_43 == ((double) 256.661)) : (((min (var_1_16 , var_1_36)) <= var_1_13) ? (var_1_43 == ((double) (max (((var_1_45 - 25.5) - var_1_39) , (max ((var_1_26 - 10.25) , var_1_23)))))) : 1))) && ((! (! var_1_58)) ? (var_1_46 == ((signed short int) var_1_49)) : ((64 != (var_1_33 - (var_1_32 + var_1_34))) ? (var_1_46 == ((signed short int) (abs (var_1_5)))) : (var_1_46 == ((signed short int) var_1_9))))) && (var_1_72 ? (var_1_47 == ((unsigned long int) ((min (var_1_67 , var_1_13)) + var_1_49))) : (var_1_47 == ((unsigned long int) (max (var_1_13 , var_1_10)))))) && ((var_1_71 != (var_1_33 * var_1_62)) ? (var_1_48 == ((unsigned long int) var_1_29)) : 1)) && ((last_1_var_1_52 <= last_1_var_1_66) ? (var_1_49 == ((signed short int) last_1_var_1_32)) : (var_1_49 == ((signed short int) (abs (var_1_8)))))) && ((last_1_var_1_53 >= last_1_var_1_43) ? (var_1_50 == ((unsigned char) var_1_51)) : (((- var_1_34) < last_1_var_1_42) ? (var_1_50 == ((unsigned char) (last_1_var_1_58 || var_1_51))) : 1))) && (var_1_72 ? (var_1_52 == ((signed short int) (min (var_1_70 , var_1_9)))) : 1)) && (((~ (var_1_16 >> var_1_3)) != (var_1_10 ^ var_1_48)) ? (var_1_53 == ((double) ((var_1_39 + var_1_41) + (255.7 - var_1_26)))) : (var_1_53 == ((double) (2.425 - var_1_27))))) && (var_1_58 ? (var_1_50 ? (var_1_54 == ((unsigned char) (! var_1_51))) : (var_1_54 == ((unsigned char) ((var_1_51 || (! var_1_55)) && var_1_56)))) : 1)) && ((var_1_12 < (min (var_1_9 , last_1_var_1_57))) ? (var_1_57 == ((unsigned long int) (var_1_21 - ((var_1_33 + var_1_66) + var_1_9)))) : ((((var_1_62 / var_1_3) / -1) <= (var_1_47 - var_1_66)) ? (var_1_57 == ((unsigned long int) (var_1_66 + 500u))) : 1))) && (var_1_50 ? (var_1_58 == ((unsigned char) (! (! var_1_55)))) : (var_1_58 == ((unsigned char) (((var_1_56 && var_1_51) && var_1_59) && (! var_1_55)))))) && ((! var_1_59) ? (var_1_60 == ((double) (abs (var_1_45)))) : ((var_1_71 <= (var_1_10 * var_1_36)) ? (var_1_54 ? (var_1_60 == ((double) 99.875)) : 1) : ((var_1_45 >= ((var_1_40 / var_1_38) / 8.7)) ? (var_1_60 == ((double) (var_1_40 + var_1_39))) : (var_1_60 == ((double) var_1_41)))))) && ((var_1_66 <= (var_1_35 / -5)) ? (var_1_61 == ((double) (min ((128.36 + var_1_26) , 64.05)))) : 1)) && ((last_1_var_1_37 > (- (abs (last_1_var_1_53)))) ? (var_1_62 == ((signed char) (var_1_9 + (var_1_63 + (abs (var_1_64)))))) : ((! var_1_51) ? ((24.875f < last_1_var_1_28) ? (var_1_56 ? (var_1_62 == ((signed char) ((var_1_9 - var_1_65) + (var_1_63 + -16)))) : 1) : 1) : 1))) && (var_1_66 == ((unsigned char) var_1_10))) && ((var_1_10 == var_1_8) ? (var_1_67 == ((signed char) var_1_65)) : (var_1_67 == ((signed char) (((var_1_68 + var_1_69) + var_1_64) + var_1_9))))) && (var_1_70 == ((signed short int) var_1_10))) && (var_1_71 == ((signed long int) var_1_29))) && (var_1_72 == ((unsigned char) var_1_55))
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
