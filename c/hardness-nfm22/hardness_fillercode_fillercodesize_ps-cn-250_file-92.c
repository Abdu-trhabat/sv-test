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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch92PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 100;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 53946;
unsigned short int var_1_11 = 1;
unsigned long int var_1_12 = 8;
double var_1_13 = 8.25;
signed long int var_1_14 = -256;
double var_1_15 = 0.19999999999999996;
signed long int var_1_16 = -16;
signed char var_1_17 = 1;
signed char var_1_18 = 4;
signed char var_1_19 = 64;
signed long int var_1_20 = 1;
signed long int var_1_21 = 1000000000;
unsigned char var_1_23 = 4;
signed short int var_1_24 = 128;
signed short int var_1_25 = 128;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 5;
unsigned char var_1_28 = 1;
signed char var_1_29 = -4;
signed char var_1_30 = -2;
unsigned char var_1_31 = 16;
unsigned char var_1_32 = 128;
float var_1_33 = 2.5;
float var_1_34 = 99.75;
float var_1_35 = -0.375;
unsigned char var_1_36 = 8;
signed short int var_1_37 = 10;
float var_1_38 = 255.5;
float var_1_39 = 63.25;
float var_1_40 = 25.2;
float var_1_41 = 64.75;
unsigned char var_1_42 = 2;
unsigned short int var_1_43 = 62847;
signed char var_1_44 = 5;
unsigned char var_1_45 = 128;
unsigned short int var_1_46 = 5;
unsigned short int var_1_47 = 2;
float var_1_48 = 127.4;
unsigned char var_1_49 = 0;
float var_1_50 = 4.6;
float var_1_51 = 4.7;
float var_1_52 = 1.25;
float var_1_53 = 5.75;
float var_1_54 = 5.5;
float var_1_55 = 2.4;
float var_1_56 = 255.625;
float var_1_57 = 128.2;
signed short int var_1_58 = -500;
signed short int var_1_59 = -10;
signed long int var_1_60 = -64;
float var_1_61 = 0.125;
float var_1_62 = 2.8;
signed long int var_1_63 = 64;
signed char var_1_64 = 2;
unsigned short int var_1_65 = 8;
unsigned short int var_1_66 = 60231;
unsigned short int var_1_67 = 5;
unsigned char var_1_68 = 2;
unsigned long int var_1_69 = 25;
unsigned short int var_1_70 = 1000;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 100;
unsigned long int last_1_var_1_12 = 8;
double last_1_var_1_13 = 8.25;
signed long int last_1_var_1_16 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if ((var_1_24 + var_1_25) > 16) {
		var_1_23 = ((var_1_26 + 2) + var_1_27);
	} else {
		if ((~ var_1_25) <= var_1_27) {
			if (var_1_24 <= var_1_27) {
				var_1_23 = (min (0 , (min (var_1_26 , (abs (var_1_27))))));
			}
		} else {
			if (var_1_28) {
				var_1_23 = var_1_26;
			}
		}
	}


	// From: CodeObject2
	if (var_1_28) {
		var_1_29 = var_1_26;
	} else {
		var_1_29 = (abs (var_1_26));
	}


	// From: CodeObject3
	if (var_1_28) {
		if (((var_1_31 ^ var_1_23) & var_1_32) < (~ var_1_25)) {
			var_1_30 = (abs (var_1_26));
		} else {
			var_1_30 = (abs (var_1_26));
		}
	}


	// From: CodeObject4
	if (var_1_28) {
		if (var_1_29 <= var_1_25) {
			var_1_33 = (abs (var_1_34 + var_1_35));
		}
	}


	// From: CodeObject5
	if (var_1_32 >= (var_1_26 * var_1_25)) {
		if (var_1_25 <= (var_1_29 & var_1_32)) {
			var_1_36 = (abs (var_1_26));
		} else {
			var_1_36 = (16 + var_1_26);
		}
	} else {
		var_1_36 = (abs (max (var_1_26 , var_1_27)));
	}


	// From: CodeObject6
	if (! var_1_28) {
		var_1_37 = (abs (var_1_29 + var_1_26));
	} else {
		if (var_1_33 > (abs (var_1_35))) {
			var_1_37 = (abs (var_1_23));
		}
	}


	// From: CodeObject7
	if ((abs (10)) > var_1_29) {
		var_1_38 = (abs ((max (var_1_39 , 7.25f)) - var_1_40));
	}


	// From: CodeObject8
	if (var_1_36 != var_1_24) {
		if (var_1_29 <= ((min (var_1_37 , var_1_36)) << var_1_23)) {
			var_1_41 = (max (((abs (var_1_35)) - var_1_39) , var_1_34));
		} else {
			var_1_41 = (var_1_34 + var_1_35);
		}
	}


	// From: CodeObject9
	if ((var_1_43 - var_1_23) < (var_1_31 ^ (var_1_26 - var_1_27))) {
		var_1_42 = ((abs (var_1_27)) + var_1_26);
	}


	// From: CodeObject10
	if (! (var_1_26 != (var_1_25 % var_1_45))) {
		if (var_1_31 <= var_1_24) {
			var_1_44 = (abs (var_1_26));
		}
	}


	// From: CodeObject11
	if (var_1_45 <= var_1_26) {
		var_1_46 = (abs (var_1_32));
	}


	// From: CodeObject12
	var_1_47 = var_1_42;


	// From: CodeObject13
	if (var_1_28) {
		if (var_1_49) {
			var_1_48 = var_1_35;
		}
	} else {
		if (var_1_46 > var_1_37) {
			if (var_1_24 >= (var_1_36 & (var_1_37 + var_1_25))) {
				var_1_48 = (var_1_34 + var_1_35);
			} else {
				var_1_48 = (min (((abs (var_1_35)) - var_1_40) , (var_1_34 + var_1_50)));
			}
		} else {
			var_1_48 = ((var_1_51 + (abs (var_1_52))) - (abs (abs (var_1_34))));
		}
	}


	// From: CodeObject14
	if (var_1_50 >= var_1_51) {
		if (var_1_49) {
			var_1_53 = (max ((var_1_54 + 9.999999996E8f) , var_1_50));
		}
	}


	// From: CodeObject15
	if (var_1_28 && var_1_49) {
		var_1_55 = (var_1_50 + var_1_51);
	} else {
		var_1_55 = ((abs (var_1_50)) + ((min (var_1_56 , 50.625f)) + 255.5f));
	}


	// From: CodeObject16
	if (((abs (var_1_43)) ^ var_1_37) <= 8) {
		if ((var_1_42 / (abs (var_1_45))) <= var_1_32) {
			var_1_57 = var_1_50;
		}
	}


	// From: CodeObject17
	if (var_1_53 > var_1_38) {
		var_1_58 = (min ((min ((var_1_36 + -64) , var_1_27)) , 32));
	}


	// From: CodeObject18
	if (var_1_43 <= var_1_47) {
		if (var_1_25 <= (abs (var_1_36))) {
			if (var_1_30 >= var_1_27) {
				var_1_59 = (max (var_1_26 , var_1_36));
			}
		}
	} else {
		var_1_59 = ((max (8 , var_1_23)) - (var_1_31 + var_1_27));
	}


	// From: CodeObject19
	if (var_1_47 > var_1_46) {
		if ((abs (min (100.6 , var_1_54))) <= (abs (var_1_48))) {
			var_1_60 = ((abs (min (var_1_23 , var_1_29))) - (abs (var_1_44)));
		} else {
			var_1_60 = (max ((abs (min (var_1_36 , var_1_31))) , (var_1_27 - var_1_47)));
		}
	} else {
		if (((var_1_36 * var_1_42) << var_1_59) == var_1_44) {
			if (var_1_42 <= (max (var_1_37 , var_1_58))) {
				if (((var_1_51 - var_1_40) / (min (var_1_61 , var_1_62))) <= (abs (var_1_38))) {
					var_1_60 = ((max (var_1_26 , 500)) - var_1_46);
				}
			} else {
				var_1_60 = ((max (var_1_26 , var_1_43)) - var_1_46);
			}
		}
	}


	// From: CodeObject20
	if (var_1_51 >= var_1_53) {
		if (((min (var_1_27 , var_1_42)) << var_1_46) > var_1_29) {
			var_1_63 = (max ((var_1_37 + (abs (var_1_27))) , var_1_24));
		} else {
			if (((var_1_57 / var_1_61) / 31.2f) <= var_1_33) {
				var_1_63 = var_1_47;
			} else {
				var_1_63 = var_1_42;
			}
		}
	} else {
		var_1_63 = (min ((abs (var_1_31)) , var_1_29));
	}


	// From: CodeObject21
	if (var_1_28) {
		var_1_64 = 1;
	}


	// From: CodeObject22
	if (((var_1_37 * var_1_29) * (var_1_58 ^ var_1_47)) > (min (var_1_23 , var_1_45))) {
		if ((min (4.8 , (var_1_51 + var_1_41))) <= var_1_40) {
			var_1_65 = (abs (var_1_66 - var_1_32));
		} else {
			var_1_65 = var_1_45;
		}
	} else {
		var_1_65 = var_1_32;
	}


	// From: CodeObject23
	if (var_1_28) {
		var_1_67 = var_1_31;
	}


	// From: CodeObject24
	var_1_68 = var_1_27;


	// From: CodeObject25
	if (var_1_49) {
		var_1_69 = ((4065475955u - var_1_26) - var_1_31);
	}


	// From: CodeObject26
	if ((abs (abs (var_1_48))) < var_1_41) {
		if (var_1_54 == var_1_41) {
			var_1_70 = var_1_42;
		}
	} else {
		var_1_70 = var_1_68;
	}


	// From: Req1Batch92PS_CN_250
	unsigned char stepLocal_0 = last_1_var_1_13 >= last_1_var_1_13;
	if ((last_1_var_1_12 == last_1_var_1_1) && stepLocal_0) {
		if (var_1_6) {
			if (var_1_7) {
				var_1_1 = (min (var_1_8 , var_1_9));
			} else {
				var_1_1 = (max (var_1_9 , var_1_8));
			}
		} else {
			var_1_1 = ((max (46167 , var_1_10)) - var_1_11);
		}
	} else {
		var_1_1 = var_1_10;
	}


	// From: Req2Batch92PS_CN_250
	if (((min (var_1_11 , 16)) >> var_1_10) >= last_1_var_1_16) {
		if (var_1_7) {
			var_1_12 = var_1_10;
		}
	}


	// From: Req5Batch92PS_CN_250
	var_1_17 = (4 - (min (var_1_18 , (var_1_19 - 1))));


	// From: Req6Batch92PS_CN_250
	unsigned long int stepLocal_4 = var_1_12;
	if (var_1_6) {
		var_1_20 = ((var_1_8 - (var_1_21 - var_1_11)) + var_1_10);
	} else {
		if ((~ var_1_19) == stepLocal_4) {
			var_1_20 = var_1_1;
		} else {
			var_1_20 = var_1_10;
		}
	}


	// From: Req4Batch92PS_CN_250
	unsigned char stepLocal_3 = var_1_6;
	unsigned char stepLocal_2 = var_1_6;
	if (stepLocal_2 && (var_1_9 < (var_1_10 + var_1_20))) {
		if (var_1_7 && stepLocal_3) {
			var_1_16 = var_1_10;
		}
	} else {
		var_1_16 = var_1_8;
	}


	// From: Req3Batch92PS_CN_250
	signed long int stepLocal_1 = (min (var_1_10 , var_1_1)) + (var_1_9 % var_1_14);
	if (stepLocal_1 >= (min (var_1_16 , var_1_8))) {
		var_1_13 = var_1_15;
	} else {
		var_1_13 = var_1_15;
	}
}



void updateVariables() {
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= -2147483648);
	assume_abort_if_not(var_1_14 <= 2147483647);
	assume_abort_if_not(var_1_14 != 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 63);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 536870911);
	assume_abort_if_not(var_1_21 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32768);
	assume_abort_if_not(var_1_24 <= 32767);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= -32768);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 64);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 255);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 255);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427382800e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427382800e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -461168.6018427382800e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427382800e+12F && var_1_35 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854765600e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854765600e+12F && var_1_40 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 32767);
	assume_abort_if_not(var_1_43 <= 65535);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 255);
	assume_abort_if_not(var_1_45 != 0);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 1);
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= -461168.6018427382800e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427382800e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427382800e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -461168.6018427382800e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427382800e+12F && var_1_52 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -461168.6018427382800e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427382800e+12F && var_1_54 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_56 >= -230584.3009213691390e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691390e+12F && var_1_56 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= -922337.2036854776000e+13F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 9223372.036854776000e+12F && var_1_61 >= 1.0e-20F ));
	assume_abort_if_not(var_1_61 != 0.0F);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= -922337.2036854776000e+13F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854776000e+12F && var_1_62 >= 1.0e-20F ));
	assume_abort_if_not(var_1_62 != 0.0F);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 32767);
	assume_abort_if_not(var_1_66 <= 65534);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_16 = var_1_16;
}

int property() {
	return (((((((last_1_var_1_12 == last_1_var_1_1) && (last_1_var_1_13 >= last_1_var_1_13)) ? (var_1_6 ? (var_1_7 ? (var_1_1 == ((unsigned short int) (min (var_1_8 , var_1_9)))) : (var_1_1 == ((unsigned short int) (max (var_1_9 , var_1_8))))) : (var_1_1 == ((unsigned short int) ((max (46167 , var_1_10)) - var_1_11)))) : (var_1_1 == ((unsigned short int) var_1_10))) && ((((min (var_1_11 , 16)) >> var_1_10) >= last_1_var_1_16) ? (var_1_7 ? (var_1_12 == ((unsigned long int) var_1_10)) : 1) : 1)) && ((((min (var_1_10 , var_1_1)) + (var_1_9 % var_1_14)) >= (min (var_1_16 , var_1_8))) ? (var_1_13 == ((double) var_1_15)) : (var_1_13 == ((double) var_1_15)))) && ((var_1_6 && (var_1_9 < (var_1_10 + var_1_20))) ? ((var_1_7 && var_1_6) ? (var_1_16 == ((signed long int) var_1_10)) : 1) : (var_1_16 == ((signed long int) var_1_8)))) && (var_1_17 == ((signed char) (4 - (min (var_1_18 , (var_1_19 - 1))))))) && (var_1_6 ? (var_1_20 == ((signed long int) ((var_1_8 - (var_1_21 - var_1_11)) + var_1_10))) : (((~ var_1_19) == var_1_12) ? (var_1_20 == ((signed long int) var_1_1)) : (var_1_20 == ((signed long int) var_1_10))))
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
