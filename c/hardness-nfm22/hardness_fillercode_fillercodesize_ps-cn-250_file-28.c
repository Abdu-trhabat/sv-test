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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch28PS_CN_250.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 4;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 2;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 100;
signed short int var_1_11 = 10;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
signed long int var_1_15 = 128;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 5;
double var_1_18 = 3.6;
double var_1_19 = 31.45;
float var_1_20 = 50.25;
float var_1_21 = 9.8;
float var_1_22 = 4.65;
float var_1_23 = 99.65;
unsigned long int var_1_25 = 128;
double var_1_26 = 31.875;
double var_1_27 = 256.5;
double var_1_28 = 24.375;
unsigned long int var_1_29 = 100;
unsigned long int var_1_30 = 4230676174;
unsigned long int var_1_31 = 1;
signed char var_1_32 = 0;
float var_1_33 = 256.5;
double var_1_34 = 99999999999.8;
signed char var_1_35 = 10;
signed char var_1_36 = -1;
signed char var_1_37 = -2;
signed long int var_1_38 = -1;
unsigned char var_1_39 = 0;
signed short int var_1_40 = 10;
signed short int var_1_41 = 128;
signed long int var_1_42 = 2;
signed long int var_1_43 = 200;
unsigned char var_1_44 = 0;
signed char var_1_45 = 0;
unsigned long int var_1_46 = 32;
unsigned long int var_1_47 = 3936087834;
signed short int var_1_48 = 200;
signed short int var_1_49 = 64;
signed short int var_1_50 = 1;
signed char var_1_51 = 2;
signed char var_1_52 = 100;
signed char var_1_53 = 1;
signed char var_1_54 = 16;
signed short int var_1_55 = 100;
signed long int var_1_56 = 10;
unsigned char var_1_57 = 32;
float var_1_58 = 2.02;
float var_1_59 = 15.5;
unsigned char var_1_60 = 1;
unsigned char var_1_61 = 1;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 0;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
unsigned char var_1_66 = 0;
signed long int var_1_67 = -2;
signed short int var_1_68 = 1;
float var_1_69 = 0.0;
float var_1_70 = 25.1;
float var_1_71 = 200.5;
float var_1_72 = 25.5;
signed short int var_1_73 = 29065;
unsigned long int var_1_74 = 128;
signed short int var_1_75 = 0;
signed short int var_1_76 = 25;
double var_1_77 = 63.25;
signed short int var_1_78 = 8;
signed short int var_1_79 = 0;
signed long int var_1_80 = 5;
signed long int var_1_81 = 1652149965;
signed long int var_1_82 = -64;
unsigned char var_1_83 = 0;
unsigned short int var_1_84 = 5;
unsigned short int var_1_85 = 16;
unsigned short int var_1_86 = 128;
signed short int var_1_87 = 0;
unsigned long int var_1_88 = 1;
unsigned char var_1_89 = 2;
unsigned char var_1_90 = 1;
unsigned char var_1_91 = 16;
unsigned char var_1_92 = 128;
double var_1_93 = 128.6;
double var_1_94 = 199.525;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 4;
unsigned char last_1_var_1_6 = 4;
signed short int last_1_var_1_11 = 10;
signed long int last_1_var_1_15 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	if (var_1_26 < (max (var_1_27 , var_1_28))) {
		var_1_25 = (max (var_1_29 , (var_1_30 - var_1_31)));
	}


	// From: CodeObject2
	if (((25.75f / var_1_33) * var_1_28) <= (0.5 / var_1_34)) {
		var_1_32 = (var_1_35 + (max (var_1_36 , var_1_37)));
	} else {
		var_1_32 = -1;
	}


	// From: CodeObject3
	if (var_1_27 == var_1_33) {
		if (var_1_39) {
			if ((abs (var_1_40 - var_1_41)) > (max (var_1_25 , (var_1_35 << var_1_32)))) {
				var_1_38 = (abs (abs (var_1_40 - var_1_41)));
			} else {
				if (var_1_40 <= var_1_35) {
					var_1_38 = ((var_1_41 + var_1_40) - var_1_42);
				} else {
					var_1_38 = (max (var_1_43 , var_1_41));
				}
			}
		} else {
			if (var_1_44 && (var_1_45 == var_1_42)) {
				var_1_38 = (abs (var_1_35));
			} else {
				var_1_38 = ((min (var_1_40 , var_1_36)) + var_1_35);
			}
		}
	} else {
		var_1_38 = (abs (var_1_42));
	}


	// From: CodeObject4
	if ((-2 * 5) > ((var_1_37 << var_1_38) ^ var_1_41)) {
		var_1_46 = (min (var_1_29 , ((max (var_1_30 , var_1_47)) - var_1_40)));
	}


	// From: CodeObject5
	if ((25u % 32u) < var_1_42) {
		var_1_48 = ((8 + var_1_49) - var_1_50);
	}


	// From: CodeObject6
	if ((var_1_37 + var_1_50) <= var_1_46) {
		var_1_51 = (var_1_52 - (min (var_1_53 , var_1_54)));
	}


	// From: CodeObject7
	if ((abs (var_1_52)) < ((var_1_49 / var_1_56) * 8)) {
		if (var_1_31 > var_1_41) {
			var_1_55 = var_1_52;
		}
	} else {
		var_1_55 = -128;
	}


	// From: CodeObject8
	if ((min ((var_1_58 - var_1_59) , var_1_26)) >= var_1_33) {
		var_1_57 = (abs (var_1_54));
	}


	// From: CodeObject9
	if (var_1_29 >= (var_1_31 / var_1_47)) {
		if (((var_1_42 * var_1_38) >= var_1_37) || (var_1_61 || var_1_44)) {
			if (var_1_62) {
				var_1_60 = (var_1_39 || var_1_63);
			}
		} else {
			var_1_60 = (var_1_63 && var_1_64);
		}
	} else {
		var_1_60 = (var_1_65 || var_1_66);
	}


	// From: CodeObject10
	var_1_67 = var_1_45;


	// From: CodeObject11
	if (var_1_32 >= var_1_46) {
		if (var_1_27 > (abs (var_1_59))) {
			var_1_68 = 16;
		} else {
			var_1_68 = (abs (max (var_1_57 , (min (var_1_36 , var_1_45)))));
		}
	} else {
		if (var_1_39) {
			if ((var_1_47 | var_1_41) <= ((var_1_30 - var_1_40) ^ var_1_42)) {
				var_1_68 = (abs (min (var_1_35 , var_1_50)));
			}
		} else {
			if (var_1_57 <= var_1_51) {
				if (((var_1_69 - var_1_70) - (var_1_71 + var_1_72)) > var_1_59) {
					var_1_68 = ((var_1_73 - var_1_57) - var_1_49);
				} else {
					var_1_68 = (max ((max (var_1_57 , (var_1_32 + var_1_52))) , var_1_73));
				}
			} else {
				var_1_68 = (abs (var_1_52));
			}
		}
	}


	// From: CodeObject12
	if (var_1_60) {
		var_1_74 = ((min (var_1_54 , var_1_50)) + var_1_42);
	} else {
		var_1_74 = (abs (var_1_41));
	}


	// From: CodeObject13
	if (var_1_35 >= (abs (var_1_54))) {
		if ((var_1_53 - var_1_54) > var_1_25) {
			var_1_75 = (var_1_57 + (var_1_53 + (max (var_1_35 , var_1_54))));
		}
	}


	// From: CodeObject14
	if (var_1_26 >= var_1_69) {
		var_1_76 = (var_1_36 + (max (var_1_54 , -10000)));
	}


	// From: CodeObject15
	if (var_1_48 < var_1_40) {
		var_1_77 = (abs (abs (var_1_72)));
	}


	// From: CodeObject16
	if (var_1_63) {
		if (var_1_41 > (10000 / var_1_73)) {
			var_1_78 = (((var_1_53 - var_1_57) + var_1_35) + var_1_54);
		} else {
			var_1_78 = var_1_53;
		}
	}


	// From: CodeObject17
	if (var_1_68 < var_1_53) {
		var_1_79 = (abs (var_1_57 - var_1_50));
	}


	// From: CodeObject18
	if (var_1_54 != (abs (-10))) {
		var_1_80 = (max (var_1_78 , (abs (16))));
	} else {
		if ((var_1_77 >= var_1_33) || var_1_60) {
			if (var_1_53 < -32) {
				var_1_80 = (abs (var_1_35));
			} else {
				if (var_1_43 <= ((min (var_1_75 , var_1_52)) ^ (var_1_53 >> var_1_36))) {
					var_1_80 = ((var_1_81 - (var_1_73 + var_1_54)) - ((abs (var_1_78)) + (abs (var_1_82))));
				} else {
					if ((var_1_37 + (max (4 , var_1_78))) <= var_1_41) {
						if (var_1_55 > (abs (var_1_49))) {
							var_1_80 = (var_1_51 + var_1_37);
						} else {
							if (var_1_46 <= var_1_57) {
								var_1_80 = (abs (var_1_54 - var_1_42));
							}
						}
					}
				}
			}
		} else {
			var_1_80 = (var_1_68 + (abs (var_1_51)));
		}
	}


	// From: CodeObject19
	if (var_1_45 < var_1_36) {
		var_1_83 = ((var_1_45 <= (-10 >> var_1_48)) || var_1_63);
	}


	// From: CodeObject20
	if (((var_1_72 - var_1_69) + 2.25f) <= var_1_58) {
		var_1_84 = (max (var_1_41 , (max (var_1_49 , var_1_73))));
	} else {
		var_1_84 = (abs (abs (25)));
	}


	// From: CodeObject21
	if (var_1_80 <= var_1_35) {
		var_1_85 = 25;
	}


	// From: CodeObject22
	if (var_1_63) {
		var_1_86 = var_1_40;
	}


	// From: CodeObject23
	if (var_1_83) {
		var_1_87 = 2;
	} else {
		var_1_87 = var_1_49;
	}


	// From: CodeObject24
	if (var_1_83) {
		var_1_88 = var_1_30;
	}


	// From: CodeObject25
	if (var_1_83 && var_1_61) {
		if (var_1_90) {
			var_1_89 = (max ((min (var_1_53 , var_1_54)) , (var_1_91 + 64)));
		} else {
			var_1_89 = (var_1_92 - var_1_91);
		}
	}


	// From: CodeObject26
	var_1_93 = var_1_94;


	// From: Req3Batch28PS_CN_250
	unsigned char stepLocal_2 = var_1_14;
	if (var_1_12) {
		if (var_1_13) {
			if ((last_1_var_1_6 > (~ var_1_10)) && stepLocal_2) {
				var_1_11 = (max (var_1_8 , (var_1_10 + last_1_var_1_15)));
			} else {
				var_1_11 = last_1_var_1_6;
			}
		} else {
			var_1_11 = var_1_8;
		}
	} else {
		var_1_11 = last_1_var_1_11;
	}


	// From: Req2Batch28PS_CN_250
	signed long int stepLocal_1 = last_1_var_1_1;
	if (stepLocal_1 < 5) {
		var_1_6 = (max ((min ((min (var_1_7 , var_1_8)) , var_1_9)) , var_1_10));
	} else {
		var_1_6 = var_1_10;
	}


	// From: Req1Batch28PS_CN_250
	unsigned char stepLocal_0 = var_1_6;
	if (var_1_11 <= stepLocal_0) {
		var_1_1 = (max ((min (var_1_11 , (max (var_1_6 , var_1_6)))) , var_1_6));
	}


	// From: Req6Batch28PS_CN_250
	signed long int stepLocal_5 = 0;
	if (var_1_13) {
		if (var_1_14) {
			if (var_1_12) {
				var_1_20 = (var_1_21 + (max (var_1_22 , var_1_23)));
			}
		} else {
			if (var_1_6 <= stepLocal_5) {
				var_1_20 = var_1_19;
			} else {
				var_1_20 = var_1_22;
			}
		}
	} else {
		var_1_20 = var_1_23;
	}


	// From: Req4Batch28PS_CN_250
	unsigned char stepLocal_3 = var_1_6;
	if (stepLocal_3 <= ((max (128 , var_1_16)) - var_1_17)) {
		var_1_15 = (max ((var_1_6 - var_1_6) , (min (var_1_8 , var_1_7))));
	} else {
		var_1_15 = var_1_11;
	}


	// From: Req5Batch28PS_CN_250
	unsigned short int stepLocal_4 = var_1_1;
	if (((200 << var_1_15) * (var_1_17 * var_1_7)) < stepLocal_4) {
		var_1_18 = var_1_19;
	}
}



void updateVariables() {
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854765600e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854765600e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427382800e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427382800e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427382800e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427382800e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427382800e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 2147483647);
	assume_abort_if_not(var_1_30 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	assume_abort_if_not(var_1_33 != 0.0F);
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	assume_abort_if_not(var_1_34 != 0.0F);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -63);
	assume_abort_if_not(var_1_35 <= 63);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -63);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -63);
	assume_abort_if_not(var_1_37 <= 63);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 32767);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 2147483646);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483647);
	assume_abort_if_not(var_1_43 <= 2147483646);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -128);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 2147483647);
	assume_abort_if_not(var_1_47 <= 4294967294);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 16383);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 32766);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= -1);
	assume_abort_if_not(var_1_52 <= 126);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 126);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 126);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= -2147483648);
	assume_abort_if_not(var_1_56 <= 2147483647);
	assume_abort_if_not(var_1_56 != 0);
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 9223372.036854776000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854776000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 1);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 1);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 1);
	assume_abort_if_not(var_1_64 <= 1);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 0);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 0);
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= 4611686.018427387900e+12F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 9223372.036854776000e+12F && var_1_69 >= 1.0e-20F ));
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427387900e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427387900e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427387900e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_73 >= 16382);
	assume_abort_if_not(var_1_73 <= 32766);
	var_1_81 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_81 >= 1073741822);
	assume_abort_if_not(var_1_81 <= 2147483646);
	var_1_82 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_82 >= -1073741823);
	assume_abort_if_not(var_1_82 <= 1073741823);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 1);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 127);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 127);
	assume_abort_if_not(var_1_92 <= 254);
	var_1_94 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_94 >= -922337.2036854765600e+13F && var_1_94 <= -1.0e-20F) || (var_1_94 <= 9223372.036854765600e+12F && var_1_94 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_15 = var_1_15;
}

int property() {
	return ((((((var_1_11 <= var_1_6) ? (var_1_1 == ((unsigned short int) (max ((min (var_1_11 , (max (var_1_6 , var_1_6)))) , var_1_6)))) : 1) && ((last_1_var_1_1 < 5) ? (var_1_6 == ((unsigned char) (max ((min ((min (var_1_7 , var_1_8)) , var_1_9)) , var_1_10)))) : (var_1_6 == ((unsigned char) var_1_10)))) && (var_1_12 ? (var_1_13 ? (((last_1_var_1_6 > (~ var_1_10)) && var_1_14) ? (var_1_11 == ((signed short int) (max (var_1_8 , (var_1_10 + last_1_var_1_15))))) : (var_1_11 == ((signed short int) last_1_var_1_6))) : (var_1_11 == ((signed short int) var_1_8))) : (var_1_11 == ((signed short int) last_1_var_1_11)))) && ((var_1_6 <= ((max (128 , var_1_16)) - var_1_17)) ? (var_1_15 == ((signed long int) (max ((var_1_6 - var_1_6) , (min (var_1_8 , var_1_7)))))) : (var_1_15 == ((signed long int) var_1_11)))) && ((((200 << var_1_15) * (var_1_17 * var_1_7)) < var_1_1) ? (var_1_18 == ((double) var_1_19)) : 1)) && (var_1_13 ? (var_1_14 ? (var_1_12 ? (var_1_20 == ((float) (var_1_21 + (max (var_1_22 , var_1_23))))) : 1) : ((var_1_6 <= 0) ? (var_1_20 == ((float) var_1_19)) : (var_1_20 == ((float) var_1_22)))) : (var_1_20 == ((float) var_1_23)))
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
