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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch5PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char var_1_1 = 10;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 1;
unsigned long int var_1_6 = 5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 64;
unsigned char var_1_11 = 64;
unsigned short int var_1_12 = 25;
unsigned short int var_1_14 = 31408;
double var_1_15 = 64.375;
double var_1_16 = 10.85;
double var_1_17 = 128.8;
double var_1_18 = 2.6;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = -64;
signed long int var_1_22 = -32;
unsigned short int var_1_23 = 10;
unsigned short int var_1_24 = 0;
unsigned short int var_1_25 = 32;
signed char var_1_26 = 25;
signed char var_1_27 = 4;
unsigned long int var_1_28 = 32;
double var_1_29 = 8.9;
signed short int var_1_30 = 5;
double var_1_31 = 63.7;
signed short int var_1_32 = 17580;
unsigned char var_1_33 = 200;
unsigned char var_1_34 = 1;
signed short int var_1_35 = -256;
unsigned short int var_1_36 = 32;
unsigned char var_1_37 = 64;
unsigned char var_1_38 = 1;
signed long int var_1_39 = -32;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
signed short int var_1_42 = -4;
double var_1_43 = 99.05;
signed short int var_1_44 = 25;
unsigned short int var_1_45 = 1;
signed short int var_1_46 = 25;
unsigned char var_1_47 = 0;
unsigned long int var_1_48 = 0;
signed short int var_1_49 = 4;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 1;
unsigned char var_1_54 = 0;
unsigned short int var_1_55 = 128;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 1;
unsigned char var_1_58 = 64;
unsigned char var_1_59 = 200;
unsigned char var_1_60 = 200;
unsigned short int var_1_61 = 128;
float var_1_62 = 9.3;
float var_1_63 = 4.225;
float var_1_64 = 16.7;
float var_1_65 = 999999999999.5;
float var_1_66 = 8.75;
float var_1_67 = 49.1;
signed char var_1_68 = 5;
signed char var_1_69 = 100;
signed char var_1_70 = 4;
unsigned char var_1_71 = 0;
signed long int var_1_72 = -1;
unsigned long int var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
double var_1_76 = 32.2;
unsigned char var_1_77 = 32;
signed char var_1_78 = 16;
double var_1_79 = 9.75;
unsigned char var_1_80 = 16;
unsigned char var_1_81 = 2;
unsigned short int var_1_82 = 100;
signed long int var_1_83 = -50;
unsigned char var_1_84 = 100;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_12 = 25;
double last_1_var_1_15 = 64.375;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_23 <= ((min (var_1_24 , var_1_25)) >> (var_1_26 - var_1_27))) {
		var_1_22 = (max (var_1_25 , var_1_24));
	} else {
		var_1_22 = var_1_25;
	}


	// From: CodeObject2
	if (8.4 <= var_1_29) {
		var_1_28 = (abs (min (var_1_23 , var_1_24)));
	} else {
		var_1_28 = (abs (var_1_23));
	}


	// From: CodeObject3
	if (var_1_29 == (min (32.5 , var_1_31))) {
		var_1_30 = var_1_27;
	} else {
		if (var_1_23 < var_1_22) {
			if (var_1_27 < var_1_25) {
				var_1_30 = var_1_27;
			} else {
				var_1_30 = ((var_1_32 - var_1_27) - (abs (var_1_26)));
			}
		}
	}


	// From: CodeObject4
	if (var_1_24 >= 4) {
		var_1_33 = (var_1_26 + (min ((abs (var_1_27)) , var_1_34)));
	} else {
		var_1_33 = (max (var_1_34 , (abs (var_1_27))));
	}


	// From: CodeObject5
	if (((var_1_28 >> var_1_34) + var_1_36) >= var_1_24) {
		if ((var_1_29 + var_1_31) == (- 31.1)) {
			var_1_35 = var_1_26;
		} else {
			var_1_35 = (min (-100 , var_1_32));
		}
	} else {
		var_1_35 = (abs (var_1_27));
	}


	// From: CodeObject6
	if ((abs (var_1_32)) > (var_1_34 * var_1_36)) {
		if (var_1_31 > var_1_29) {
			var_1_37 = (min (var_1_38 , (abs (128))));
		}
	}


	// From: CodeObject7
	if (((var_1_37 / var_1_26) * (var_1_25 * var_1_24)) >= ((var_1_35 & var_1_33) * var_1_28)) {
		var_1_39 = (var_1_35 + var_1_34);
	} else {
		if (var_1_40) {
			if ((4 == var_1_24) || var_1_41) {
				var_1_39 = ((max (var_1_25 , var_1_37)) - 128);
			}
		}
	}


	// From: CodeObject8
	if ((min (var_1_29 , (abs (var_1_31)))) > var_1_43) {
		var_1_42 = ((max (var_1_34 , var_1_33)) + var_1_26);
	}


	// From: CodeObject9
	if ((min (var_1_32 , var_1_38)) == var_1_39) {
		var_1_44 = var_1_33;
	} else {
		var_1_44 = var_1_32;
	}


	// From: CodeObject10
	if ((var_1_38 ^ (abs (var_1_32))) >= (var_1_44 | (var_1_30 >> var_1_33))) {
		if (var_1_24 > var_1_38) {
			var_1_45 = (max (var_1_37 , (max (var_1_33 , var_1_27))));
		}
	}


	// From: CodeObject11
	if (var_1_40 || (var_1_33 >= var_1_45)) {
		var_1_46 = (var_1_33 + (min ((abs (var_1_27)) , (abs (-200)))));
	} else {
		if (100u > (16u >> (var_1_26 - var_1_27))) {
			if (! var_1_47) {
				var_1_46 = (var_1_38 + var_1_34);
			}
		} else {
			var_1_46 = (max ((min (var_1_37 , var_1_26)) , 10));
		}
	}


	// From: CodeObject12
	if ((var_1_39 >= (var_1_32 + var_1_35)) || var_1_47) {
		var_1_48 = (abs (var_1_27));
	}


	// From: CodeObject13
	if ((var_1_33 - var_1_32) > var_1_34) {
		if (var_1_23 == var_1_38) {
			var_1_49 = (abs (var_1_32));
		}
	} else {
		var_1_49 = ((max (var_1_27 , var_1_34)) - var_1_26);
	}


	// From: CodeObject14
	var_1_50 = (! (var_1_51 || (var_1_41 && var_1_52)));


	// From: CodeObject15
	if (var_1_29 > (var_1_43 + var_1_31)) {
		if (((- 32) & var_1_45) > var_1_33) {
			var_1_53 = var_1_51;
		}
	}


	// From: CodeObject16
	if (var_1_48 < var_1_45) {
		if (var_1_49 <= var_1_48) {
			var_1_54 = var_1_51;
		}
	} else {
		if (var_1_55 > var_1_27) {
			var_1_54 = (var_1_56 && var_1_57);
		}
	}


	// From: CodeObject17
	if (var_1_48 < var_1_27) {
		if (var_1_48 >= var_1_38) {
			var_1_58 = (min (var_1_34 , ((max (var_1_59 , var_1_60)) - (abs (4)))));
		} else {
			var_1_58 = var_1_34;
		}
	}


	// From: CodeObject18
	if (var_1_60 >= var_1_55) {
		if (var_1_50) {
			if (var_1_47 && var_1_56) {
				var_1_61 = (abs (var_1_59));
			}
		} else {
			var_1_61 = (min (2 , (abs (var_1_60))));
		}
	}


	// From: CodeObject19
	if (var_1_56) {
		var_1_62 = (var_1_63 + ((max (var_1_64 , var_1_65)) + (max (31.95f , var_1_66))));
	} else {
		if ((min (var_1_30 , var_1_34)) > ((abs (var_1_44)) * var_1_39)) {
			if (var_1_60 >= (var_1_59 - (abs (var_1_26)))) {
				var_1_62 = (max ((abs (var_1_66)) , var_1_65));
			} else {
				var_1_62 = (abs (var_1_64 + (max (1.43f , var_1_63))));
			}
		} else {
			var_1_62 = (1.00000000005E10f - var_1_67);
		}
	}


	// From: CodeObject20
	if (var_1_49 < 8) {
		if (! var_1_54) {
			var_1_68 = (var_1_27 - ((var_1_69 - var_1_70) - var_1_26));
		}
	}


	// From: CodeObject21
	if ((var_1_42 >> var_1_34) == var_1_58) {
		var_1_71 = (var_1_56 && var_1_51);
	}


	// From: CodeObject22
	if ((abs (var_1_27)) > var_1_23) {
		var_1_72 = (abs (var_1_36));
	} else {
		var_1_72 = (min (((min (var_1_59 , var_1_69)) - var_1_32) , (max (var_1_27 , var_1_33))));
	}


	// From: CodeObject23
	if (var_1_74) {
		if (1 < var_1_27) {
			var_1_73 = (min ((abs (3691725327u - var_1_61)) , var_1_34));
		}
	}


	// From: CodeObject24
	if ((- 64u) > var_1_34) {
		var_1_75 = (var_1_56 && var_1_57);
	}


	// From: CodeObject25
	if (var_1_75) {
		var_1_76 = var_1_67;
	}


	// From: CodeObject26
	if (var_1_56) {
		var_1_77 = var_1_26;
	}


	// From: CodeObject27
	var_1_78 = var_1_70;


	// From: CodeObject28
	if (var_1_53) {
		var_1_79 = var_1_66;
	}


	// From: CodeObject29
	var_1_80 = var_1_69;


	// From: CodeObject30
	if (var_1_59 == 32) {
		var_1_81 = ((min (var_1_59 , var_1_60)) - var_1_69);
	} else {
		var_1_81 = var_1_26;
	}


	// From: CodeObject31
	var_1_82 = var_1_32;


	// From: CodeObject32
	var_1_83 = var_1_30;


	// From: CodeObject33
	var_1_84 = var_1_70;


	// From: Req2Batch5PS_CN_250
	if (last_1_var_1_12 > var_1_4) {
		if ((- last_1_var_1_15) < last_1_var_1_15) {
			var_1_6 = 10u;
		}
	}


	// From: Req1Batch5PS_CN_250
	if (((- 64) + var_1_6) == var_1_6) {
		var_1_1 = ((abs (var_1_4)) - var_1_5);
	} else {
		var_1_1 = ((min (128 , var_1_4)) - 64);
	}


	// From: Req3Batch5PS_CN_250
	if (var_1_5 == (var_1_6 / var_1_4)) {
		var_1_9 = (min (var_1_5 , (abs (var_1_4))));
	} else {
		var_1_9 = ((var_1_10 + var_1_11) - var_1_5);
	}


	// From: Req7Batch5PS_CN_250
	var_1_21 = var_1_10;


	// From: Req6Batch5PS_CN_250
	unsigned long int stepLocal_3 = var_1_6;
	unsigned char stepLocal_2 = var_1_4;
	if (stepLocal_2 < var_1_1) {
		if (stepLocal_3 > var_1_21) {
			var_1_19 = var_1_20;
		}
	}


	// From: Req4Batch5PS_CN_250
	unsigned long int stepLocal_0 = max (var_1_6 , var_1_4);
	if ((abs (var_1_21)) <= stepLocal_0) {
		var_1_12 = ((var_1_14 - var_1_5) + (abs (var_1_6)));
	} else {
		var_1_12 = var_1_6;
	}


	// From: Req5Batch5PS_CN_250
	signed long int stepLocal_1 = ~ (var_1_5 * var_1_1);
	if (stepLocal_1 <= var_1_12) {
		var_1_15 = (max ((5.25 - var_1_16) , var_1_17));
	} else {
		var_1_15 = (min ((min (var_1_17 , var_1_16)) , var_1_18));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 63);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 64);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854765600e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854765600e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854765600e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854765600e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854765600e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65535);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65535);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 16);
	assume_abort_if_not(var_1_26 <= 32);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= 16382);
	assume_abort_if_not(var_1_32 <= 32766);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 65535);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 65535);
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 1);
	assume_abort_if_not(var_1_56 <= 1);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 1);
	assume_abort_if_not(var_1_57 <= 1);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 127);
	assume_abort_if_not(var_1_59 <= 254);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 127);
	assume_abort_if_not(var_1_60 <= 254);
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= -461168.6018427382800e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427382800e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= -230584.3009213691390e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 2305843.009213691390e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= -230584.3009213691390e+13F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691390e+12F && var_1_65 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_66 >= -230584.3009213691390e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 2305843.009213691390e+12F && var_1_66 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854765600e+12F && var_1_67 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 94);
	assume_abort_if_not(var_1_69 <= 126);
	var_1_70 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 31);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 1);
}



void updateLastVariables() {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return (((((((((- 64) + var_1_6) == var_1_6) ? (var_1_1 == ((unsigned char) ((abs (var_1_4)) - var_1_5))) : (var_1_1 == ((unsigned char) ((min (128 , var_1_4)) - 64)))) && ((last_1_var_1_12 > var_1_4) ? (((- last_1_var_1_15) < last_1_var_1_15) ? (var_1_6 == ((unsigned long int) 10u)) : 1) : 1)) && ((var_1_5 == (var_1_6 / var_1_4)) ? (var_1_9 == ((unsigned char) (min (var_1_5 , (abs (var_1_4)))))) : (var_1_9 == ((unsigned char) ((var_1_10 + var_1_11) - var_1_5))))) && (((abs (var_1_21)) <= (max (var_1_6 , var_1_4))) ? (var_1_12 == ((unsigned short int) ((var_1_14 - var_1_5) + (abs (var_1_6))))) : (var_1_12 == ((unsigned short int) var_1_6)))) && (((~ (var_1_5 * var_1_1)) <= var_1_12) ? (var_1_15 == ((double) (max ((5.25 - var_1_16) , var_1_17)))) : (var_1_15 == ((double) (min ((min (var_1_17 , var_1_16)) , var_1_18)))))) && ((var_1_4 < var_1_1) ? ((var_1_6 > var_1_21) ? (var_1_19 == ((unsigned char) var_1_20)) : 1) : 1)) && (var_1_21 == ((signed short int) var_1_10))
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
