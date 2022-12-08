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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch78PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
signed long int var_1_1 = -4;
unsigned char var_1_3 = 64;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 2;
unsigned short int var_1_6 = 10;
double var_1_8 = 1.875;
signed long int var_1_9 = -4;
double var_1_10 = 63.5;
double var_1_11 = 255.375;
double var_1_12 = 999999999.525;
double var_1_13 = 63.75;
double var_1_14 = 0.625;
unsigned short int var_1_15 = 5;
signed char var_1_16 = 4;
signed char var_1_17 = 0;
signed char var_1_18 = -2;
signed char var_1_19 = 1;
unsigned short int var_1_20 = 50;
unsigned short int var_1_21 = 0;
unsigned char var_1_22 = 2;
float var_1_23 = 0.933;
float var_1_24 = 4.25;
float var_1_25 = 200.7;
unsigned char var_1_26 = 100;
unsigned char var_1_27 = 64;
unsigned char var_1_28 = 25;
unsigned char var_1_29 = 8;
signed long int var_1_30 = -1000000;
unsigned char var_1_31 = 2;
signed long int var_1_32 = -100;
unsigned char var_1_33 = 0;
signed long int var_1_34 = -128;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 10;
unsigned char var_1_37 = 5;
signed long int var_1_38 = 10;
unsigned long int var_1_39 = 64;
unsigned long int var_1_40 = 3967768577;
signed short int var_1_41 = -500;
signed short int var_1_42 = 64;
signed short int var_1_43 = -16;
float var_1_44 = -0.65;
float var_1_45 = 50.8;
float var_1_46 = 7.25;
float var_1_47 = 15.1;
float var_1_48 = 256.6;
float var_1_49 = 24.8;
unsigned short int var_1_50 = 1;
unsigned short int var_1_51 = 54377;
unsigned short int var_1_52 = 2;
unsigned long int var_1_53 = 4;
signed short int var_1_54 = 64;
signed long int var_1_55 = 200;
unsigned char var_1_56 = 1;
unsigned char var_1_57 = 0;
unsigned char var_1_58 = 0;
unsigned char var_1_59 = 0;
signed char var_1_60 = -1;
unsigned char var_1_61 = 10;
unsigned long int var_1_62 = 10;
signed short int var_1_63 = -5;
double var_1_64 = 1.75;
double var_1_65 = 7.5;
double var_1_66 = 128.25;
unsigned short int var_1_67 = 128;
signed long int var_1_68 = 1000000000;
unsigned char var_1_69 = 1;
float var_1_70 = 64.5;
unsigned short int var_1_71 = 256;
unsigned long int var_1_72 = 1;
signed char var_1_73 = -4;
unsigned short int var_1_74 = 10;
signed char var_1_75 = 5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_3 = 64;
unsigned short int last_1_var_1_6 = 10;
unsigned short int last_1_var_1_15 = 5;
unsigned short int last_1_var_1_20 = 50;
unsigned short int last_1_var_1_21 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_23 / var_1_24) > var_1_25) {
		var_1_22 = ((var_1_26 + var_1_27) - (abs (max (var_1_28 , var_1_29))));
	}


	// From: CodeObject2
	if (var_1_29 > ((var_1_26 % 200) / (var_1_27 + var_1_31))) {
		var_1_30 = ((max (var_1_26 , (abs (var_1_29)))) - var_1_28);
	}


	// From: CodeObject3
	if ((var_1_23 >= var_1_25) || var_1_33) {
		var_1_32 = (abs (var_1_34));
	}


	// From: CodeObject4
	if ((var_1_24 * var_1_25) < var_1_23) {
		if ((var_1_34 > var_1_28) && var_1_33) {
			if (-2 > var_1_30) {
				var_1_35 = ((var_1_36 + var_1_37) + var_1_29);
			}
		}
	}


	// From: CodeObject5
	if ((var_1_22 / var_1_27) <= ((var_1_28 + var_1_26) & (var_1_30 & var_1_32))) {
		if (var_1_33) {
			var_1_38 = (min ((abs (var_1_22)) , var_1_35));
		} else {
			if (var_1_30 <= var_1_32) {
				var_1_38 = -5;
			}
		}
	} else {
		var_1_38 = var_1_36;
	}


	// From: CodeObject6
	if (var_1_33) {
		var_1_39 = (abs (var_1_40 - var_1_35));
	} else {
		if (var_1_22 <= var_1_30) {
			var_1_39 = (abs (var_1_40));
		} else {
			var_1_39 = (min (var_1_29 , var_1_37));
		}
	}


	// From: CodeObject7
	if (2 < var_1_38) {
		if ((-32 == var_1_35) || (var_1_24 >= (var_1_25 + var_1_23))) {
			if ((abs (var_1_29)) >= (var_1_34 | var_1_28)) {
				if (var_1_29 <= ((var_1_32 + 1) >> (abs (10)))) {
					var_1_41 = (min (var_1_37 , var_1_28));
				}
			} else {
				if (var_1_34 > var_1_39) {
					var_1_41 = var_1_27;
				} else {
					var_1_41 = var_1_31;
				}
			}
		}
	}


	// From: CodeObject8
	if ((var_1_27 - (var_1_37 + var_1_28)) <= var_1_38) {
		var_1_42 = (var_1_36 - var_1_28);
	}


	// From: CodeObject9
	if ((var_1_22 ^ var_1_37) >= (~ var_1_36)) {
		var_1_43 = (min ((abs (var_1_37)) , var_1_26));
	}


	// From: CodeObject10
	if ((128 - var_1_26) > var_1_36) {
		var_1_44 = (abs (2.5f));
	} else {
		if (! var_1_33) {
			var_1_44 = (min (var_1_45 , var_1_46));
		} else {
			if (var_1_38 <= (abs (var_1_26))) {
				var_1_44 = (max ((var_1_47 - var_1_48) , (max (var_1_46 , var_1_45))));
			} else {
				if (var_1_31 > ((var_1_28 % 32) | var_1_30)) {
					if ((abs (var_1_25)) >= var_1_24) {
						var_1_44 = (abs (abs (var_1_47)));
					} else {
						var_1_44 = (var_1_49 + 7.425f);
					}
				} else {
					var_1_44 = (min (var_1_47 , var_1_45));
				}
			}
		}
	}


	// From: CodeObject11
	if ((-4 % var_1_26) <= (var_1_41 + var_1_32)) {
		var_1_50 = (max (var_1_29 , (abs (var_1_27))));
	} else {
		if (! (var_1_33 || (var_1_48 <= var_1_24))) {
			var_1_50 = (max ((var_1_51 - var_1_31) , (max ((abs (var_1_22)) , var_1_35))));
		}
	}


	// From: CodeObject12
	if (var_1_46 <= (max (var_1_44 , (var_1_45 / var_1_24)))) {
		var_1_52 = ((abs (max (var_1_27 , var_1_36))) + var_1_28);
	} else {
		if (var_1_42 <= (var_1_37 ^ var_1_41)) {
			var_1_52 = ((max (var_1_26 , var_1_27)) + var_1_28);
		}
	}


	// From: CodeObject13
	if (var_1_33 && (var_1_31 == (var_1_28 | var_1_32))) {
		if (var_1_49 <= var_1_44) {
			if (((abs (var_1_40)) - var_1_37) > var_1_22) {
				var_1_53 = var_1_35;
			}
		} else {
			var_1_53 = (abs (abs (abs (var_1_28))));
		}
	}


	// From: CodeObject14
	if (var_1_24 >= 64.5f) {
		var_1_54 = var_1_28;
	}


	// From: CodeObject15
	if (((var_1_40 - var_1_37) * var_1_51) < var_1_35) {
		if (var_1_48 < 2.8f) {
			var_1_55 = (var_1_27 - var_1_29);
		}
	}


	// From: CodeObject16
	if (var_1_38 >= (~ var_1_34)) {
		if (var_1_36 >= (abs (~ var_1_52))) {
			var_1_56 = (! var_1_57);
		}
	}


	// From: CodeObject17
	if (var_1_30 <= var_1_26) {
		var_1_58 = var_1_59;
	} else {
		var_1_58 = var_1_59;
	}


	// From: CodeObject18
	if (var_1_40 < (32u >> var_1_26)) {
		var_1_60 = (abs (var_1_37));
	}


	// From: CodeObject19
	if (var_1_59) {
		if (var_1_50 > (var_1_40 / var_1_31)) {
			if (var_1_49 >= (abs (var_1_48))) {
				var_1_61 = (abs (var_1_29));
			}
		}
	}


	// From: CodeObject20
	if (var_1_57 || var_1_33) {
		var_1_62 = ((max ((max (var_1_52 , 128u)) , (abs (var_1_50)))) + var_1_28);
	}


	// From: CodeObject21
	if (var_1_58 && (var_1_50 != var_1_53)) {
		var_1_63 = (abs (abs (var_1_37)));
	}


	// From: CodeObject22
	if ((var_1_26 + var_1_40) >= var_1_28) {
		var_1_64 = (abs (var_1_46));
	}


	// From: CodeObject23
	if (var_1_57) {
		var_1_65 = (abs (var_1_46));
	} else {
		var_1_65 = ((abs (var_1_49)) + var_1_66);
	}


	// From: CodeObject24
	if (var_1_58) {
		var_1_67 = var_1_51;
	}


	// From: CodeObject25
	var_1_68 = var_1_63;


	// From: CodeObject26
	if (var_1_56) {
		var_1_69 = var_1_59;
	}


	// From: CodeObject27
	var_1_70 = var_1_45;


	// From: CodeObject28
	if (var_1_33) {
		var_1_71 = var_1_36;
	} else {
		var_1_71 = var_1_61;
	}


	// From: CodeObject29
	if (var_1_33) {
		var_1_72 = var_1_22;
	}


	// From: CodeObject30
	var_1_73 = var_1_37;


	// From: CodeObject31
	if ((min (var_1_39 , (min (16u , var_1_55)))) <= var_1_62) {
		var_1_74 = (max (var_1_29 , var_1_35));
	} else {
		var_1_74 = (abs (256));
	}


	// From: CodeObject32
	var_1_75 = var_1_37;


	// From: Req2Batch78PS_CN_250
	signed long int stepLocal_0 = last_1_var_1_21;
	if (last_1_var_1_6 < stepLocal_0) {
		var_1_3 = (max (var_1_4 , var_1_5));
	}


	// From: Req3Batch78PS_CN_250
	signed long int stepLocal_2 = last_1_var_1_20 ^ last_1_var_1_15;
	unsigned char stepLocal_1 = var_1_5;
	if (stepLocal_2 < -256) {
		var_1_6 = (abs (max ((max (var_1_5 , var_1_4)) , (last_1_var_1_20 + last_1_var_1_3))));
	} else {
		if (stepLocal_1 <= 50) {
			var_1_6 = last_1_var_1_20;
		}
	}


	// From: Req7Batch78PS_CN_250
	var_1_20 = (max ((var_1_5 + var_1_6) , var_1_4));


	// From: Req4Batch78PS_CN_250
	if (var_1_3 < (var_1_5 % (max (32 , var_1_9)))) {
		var_1_8 = (((max (var_1_10 , var_1_11)) - var_1_12) + (var_1_13 - var_1_14));
	} else {
		if (var_1_13 <= (var_1_14 + var_1_11)) {
			var_1_8 = var_1_12;
		}
	}


	// From: Req6Batch78PS_CN_250
	var_1_16 = (var_1_17 + (var_1_18 + (abs (var_1_19))));


	// From: Req1Batch78PS_CN_250
	var_1_1 = (abs (var_1_16));


	// From: Req8Batch78PS_CN_250
	unsigned short int stepLocal_3 = var_1_6;
	if (stepLocal_3 == ((var_1_3 * var_1_17) & (var_1_1 * var_1_18))) {
		var_1_21 = (var_1_4 + 128);
	}


	// From: Req5Batch78PS_CN_250
	if ((abs (var_1_4)) > var_1_21) {
		var_1_15 = (max (var_1_3 , (var_1_5 + var_1_4)));
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427382800e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427382800e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427382800e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427382800e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427382800e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -31);
	assume_abort_if_not(var_1_18 <= 32);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -31);
	assume_abort_if_not(var_1_19 <= 31);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	assume_abort_if_not(var_1_24 != 0.0F);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 63);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 64);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483646);
	assume_abort_if_not(var_1_34 <= 2147483646);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 64);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854765600e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854765600e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -922337.2036854765600e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854765600e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854765600e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854765600e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -461168.6018427382800e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_51 >= 32767);
	assume_abort_if_not(var_1_51 <= 65534);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 1);
	assume_abort_if_not(var_1_57 <= 1);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 0);
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= -461168.6018427382800e+13F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427382800e+12F && var_1_66 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_3 = var_1_3;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_21 = var_1_21;
}

int property() {
	return (((((((var_1_1 == ((signed long int) (abs (var_1_16)))) && ((last_1_var_1_6 < last_1_var_1_21) ? (var_1_3 == ((unsigned char) (max (var_1_4 , var_1_5)))) : 1)) && (((last_1_var_1_20 ^ last_1_var_1_15) < -256) ? (var_1_6 == ((unsigned short int) (abs (max ((max (var_1_5 , var_1_4)) , (last_1_var_1_20 + last_1_var_1_3)))))) : ((var_1_5 <= 50) ? (var_1_6 == ((unsigned short int) last_1_var_1_20)) : 1))) && ((var_1_3 < (var_1_5 % (max (32 , var_1_9)))) ? (var_1_8 == ((double) (((max (var_1_10 , var_1_11)) - var_1_12) + (var_1_13 - var_1_14)))) : ((var_1_13 <= (var_1_14 + var_1_11)) ? (var_1_8 == ((double) var_1_12)) : 1))) && (((abs (var_1_4)) > var_1_21) ? (var_1_15 == ((unsigned short int) (max (var_1_3 , (var_1_5 + var_1_4))))) : 1)) && (var_1_16 == ((signed char) (var_1_17 + (var_1_18 + (abs (var_1_19))))))) && (var_1_20 == ((unsigned short int) (max ((var_1_5 + var_1_6) , var_1_4))))) && ((var_1_6 == ((var_1_3 * var_1_17) & (var_1_1 * var_1_18))) ? (var_1_21 == ((unsigned short int) (var_1_4 + 128))) : 1)
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
