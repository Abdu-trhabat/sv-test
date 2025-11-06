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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch184Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = 32;
unsigned char var_1_3 = 100;
unsigned char var_1_4 = 4;
signed long int var_1_5 = 5;
signed long int var_1_6 = 128;
signed char var_1_7 = 4;
signed char var_1_8 = 32;
signed char var_1_9 = 10;
signed char var_1_10 = -8;
signed char var_1_11 = 8;
signed char var_1_12 = -10;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 1;
signed char var_1_16 = -128;
unsigned short int var_1_17 = 64;
unsigned short int var_1_21 = 57905;
unsigned short int var_1_22 = 19486;
unsigned short int var_1_23 = 200;
signed long int var_1_24 = -256;
unsigned char var_1_25 = 128;
signed short int var_1_26 = 64;
unsigned short int var_1_27 = 100;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 64;
unsigned char var_1_30 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 0;
float var_1_36 = 63.09;
float var_1_37 = 0.5;
unsigned char var_1_38 = 5;
unsigned char var_1_39 = 4;
double var_1_40 = 32.25;
double var_1_41 = 3.75;
double var_1_42 = 24.5;
double var_1_43 = 7.5;
unsigned char var_1_44 = 2;
unsigned char var_1_45 = 64;
unsigned char var_1_46 = 64;
unsigned char var_1_47 = 64;
signed short int var_1_48 = -256;
signed short int var_1_49 = 0;
signed long int var_1_50 = 1;
unsigned long int var_1_51 = 10;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 1;
signed long int var_1_54 = -5;
double var_1_55 = 4.625;
double var_1_57 = 63.2;
double var_1_58 = 2.25;
double var_1_59 = 127.875;
unsigned char var_1_60 = 1;
float var_1_61 = 49.5;
float var_1_62 = 15.75;
signed long int var_1_63 = -2;
signed long int var_1_65 = 1744103714;
float var_1_66 = 32.5;
float var_1_67 = 0.0;
float var_1_68 = 15.6;
float var_1_69 = 8.5;
double var_1_70 = 0.6;
signed long int var_1_71 = 50;
unsigned long int var_1_72 = 1;
signed char var_1_73 = -5;
signed char var_1_74 = 64;
unsigned long int var_1_75 = 0;
unsigned short int var_1_76 = 2;
float var_1_79 = 100.4;
unsigned short int var_1_80 = 32;
unsigned short int var_1_81 = 29368;
unsigned char var_1_82 = 128;
signed long int var_1_83 = 256;
unsigned short int var_1_84 = 64;
double var_1_85 = 24.4;
double var_1_86 = 100.5;
signed short int var_1_87 = 10;
unsigned short int var_1_88 = 4;
signed char var_1_89 = 0;
signed char var_1_90 = -16;
signed short int var_1_91 = -1;
double var_1_92 = 8.125;
unsigned char var_1_93 = 1;
signed long int var_1_94 = -4;
signed long int var_1_95 = 25;
unsigned char var_1_96 = 1;
unsigned char var_1_97 = 1;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_25 = 128;
unsigned char last_1_var_1_33 = 64;
unsigned char last_1_var_1_35 = 0;
signed short int last_1_var_1_48 = -256;
signed long int last_1_var_1_50 = 1;
unsigned long int last_1_var_1_51 = 10;
signed long int last_1_var_1_54 = -5;
double last_1_var_1_55 = 4.625;
unsigned char last_1_var_1_60 = 1;
float last_1_var_1_66 = 32.5;
signed long int last_1_var_1_71 = 50;
unsigned short int last_1_var_1_76 = 2;
unsigned short int last_1_var_1_80 = 32;
unsigned char last_1_var_1_82 = 128;
unsigned short int last_1_var_1_84 = 64;
double last_1_var_1_92 = 8.125;
unsigned char last_1_var_1_93 = 1;
signed long int last_1_var_1_94 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req8Batch184Amount500
	signed long int stepLocal_4 = 32 * (var_1_7 - var_1_9);
	if ((- last_1_var_1_66) > last_1_var_1_92) {
		if (var_1_10 == stepLocal_4) {
			var_1_27 = (max ((var_1_21 - var_1_3) , var_1_8));
		}
	}


	// From: Req20Batch184Amount500
	unsigned long int stepLocal_17 = last_1_var_1_33 + last_1_var_1_51;
	signed long int stepLocal_16 = (var_1_6 / var_1_21) * var_1_8;
	signed long int stepLocal_15 = -4;
	if (stepLocal_17 >= var_1_7) {
		if (! ((last_1_var_1_54 * last_1_var_1_71) == var_1_10)) {
			var_1_54 = ((last_1_var_1_33 + (min (1 , last_1_var_1_25))) + (max (var_1_9 , var_1_21)));
		} else {
			var_1_54 = (-256 + last_1_var_1_33);
		}
	} else {
		if (var_1_49 <= stepLocal_15) {
			if ((last_1_var_1_33 / var_1_3) <= stepLocal_16) {
				var_1_54 = (abs (var_1_39));
			} else {
				var_1_54 = last_1_var_1_25;
			}
		} else {
			var_1_54 = (last_1_var_1_80 + last_1_var_1_48);
		}
	}


	// From: Req33Batch184Amount500
	var_1_83 = var_1_54;


	// From: Req15Batch184Amount500
	unsigned char stepLocal_12 = var_1_45;
	signed char stepLocal_11 = var_1_7;
	if (stepLocal_11 > last_1_var_1_35) {
		var_1_44 = (((max (var_1_45 , var_1_46)) + (var_1_47 + 32)) - var_1_38);
	} else {
		if ((var_1_8 * last_1_var_1_48) > stepLocal_12) {
			var_1_44 = ((var_1_45 - var_1_39) + var_1_46);
		} else {
			var_1_44 = (((min (2 , var_1_47)) + var_1_8) + var_1_45);
		}
	}


	// From: Req7Batch184Amount500
	var_1_26 = (var_1_8 - var_1_44);


	// From: Req16Batch184Amount500
	if (last_1_var_1_60 || ((max (last_1_var_1_84 , last_1_var_1_54)) < var_1_47)) {
		if (last_1_var_1_60 || ((last_1_var_1_55 != var_1_36) && last_1_var_1_60)) {
			var_1_48 = (min (var_1_11 , var_1_38));
		} else {
			var_1_48 = (last_1_var_1_35 - 1);
		}
	} else {
		var_1_48 = (max ((last_1_var_1_94 - var_1_39) , (max ((abs (var_1_49)) , (var_1_46 + last_1_var_1_76)))));
	}


	// From: Req38Batch184Amount500
	if (var_1_53) {
		var_1_88 = var_1_21;
	} else {
		var_1_88 = var_1_48;
	}


	// From: Req3Batch184Amount500
	var_1_16 = (var_1_8 + var_1_10);


	// From: Req10Batch184Amount500
	unsigned char stepLocal_5 = var_1_7 >= var_1_4;
	if ((5 >= var_1_9) || stepLocal_5) {
		var_1_29 = var_1_9;
	}


	// From: Req11Batch184Amount500
	signed long int stepLocal_6 = 64;
	if (var_1_54 > stepLocal_6) {
		var_1_30 = ((! var_1_15) || (var_1_14 && var_1_32));
	} else {
		var_1_30 = var_1_32;
	}


	// From: Req18Batch184Amount500
	var_1_51 = ((min (var_1_34 , var_1_22)) + 256u);


	// From: Req22Batch184Amount500
	if (last_1_var_1_60) {
		if ((var_1_7 - 2) >= var_1_6) {
			var_1_60 = (var_1_15 && var_1_53);
		} else {
			var_1_60 = var_1_14;
		}
	} else {
		var_1_60 = var_1_15;
	}


	// From: Req26Batch184Amount500
	if (var_1_65 < (var_1_46 - 1)) {
		if (! var_1_53) {
			if ((var_1_21 * var_1_12) >= var_1_51) {
				var_1_70 = ((min (var_1_58 , var_1_59)) - (min ((min (var_1_62 , var_1_67)) , var_1_43)));
			} else {
				var_1_70 = ((8.5 + var_1_68) + var_1_58);
			}
		} else {
			var_1_70 = (abs ((max (var_1_42 , var_1_41)) + var_1_58));
		}
	}


	// From: Req35Batch184Amount500
	if (var_1_32) {
		var_1_85 = var_1_41;
	}


	// From: Req36Batch184Amount500
	var_1_86 = var_1_62;


	// From: Req37Batch184Amount500
	var_1_87 = 1;


	// From: Req39Batch184Amount500
	var_1_89 = var_1_7;


	// From: Req40Batch184Amount500
	if (var_1_32) {
		var_1_90 = var_1_74;
	}


	// From: Req41Batch184Amount500
	var_1_91 = var_1_3;


	// From: Req42Batch184Amount500
	if (var_1_14) {
		var_1_92 = var_1_67;
	} else {
		var_1_92 = var_1_41;
	}


	// From: Req43Batch184Amount500
	if (last_1_var_1_93) {
		var_1_93 = 0;
	} else {
		var_1_93 = var_1_32;
	}


	// From: Req46Batch184Amount500
	if (var_1_85 > var_1_67) {
		var_1_96 = (var_1_15 && var_1_53);
	} else {
		var_1_96 = (! var_1_14);
	}


	// From: Req47Batch184Amount500
	signed long int stepLocal_32 = 10000;
	unsigned long int stepLocal_31 = 8u;
	if (stepLocal_31 == var_1_51) {
		if (var_1_22 < stepLocal_32) {
			var_1_97 = var_1_15;
		}
	}


	// From: Req5Batch184Amount500
	signed long int stepLocal_3 = var_1_29 + var_1_3;
	if (var_1_15) {
		if (stepLocal_3 > ((max (var_1_7 , var_1_4)) - 100)) {
			var_1_24 = (max (var_1_23 , var_1_11));
		} else {
			var_1_24 = var_1_4;
		}
	} else {
		var_1_24 = (min (var_1_27 , var_1_11));
	}


	// From: Req12Batch184Amount500
	signed char stepLocal_9 = var_1_10;
	signed char stepLocal_8 = var_1_11;
	signed char stepLocal_7 = var_1_11;
	if (var_1_8 == stepLocal_9) {
		if (var_1_83 >= stepLocal_7) {
			if (stepLocal_8 < var_1_24) {
				var_1_33 = (min ((var_1_34 - var_1_9) , var_1_8));
			} else {
				var_1_33 = var_1_8;
			}
		} else {
			var_1_33 = var_1_9;
		}
	}


	// From: Req30Batch184Amount500
	signed short int stepLocal_24 = var_1_91;
	if (stepLocal_24 <= ((var_1_48 + var_1_88) | var_1_51)) {
		if (var_1_42 > (var_1_86 / var_1_67)) {
			if (var_1_85 < (var_1_69 / (max (var_1_67 , var_1_79)))) {
				var_1_76 = (var_1_21 - ((var_1_46 + 16) + 4));
			}
		} else {
			var_1_76 = (var_1_83 + (var_1_47 + var_1_88));
		}
	} else {
		if (var_1_15) {
			if ((- (max (var_1_86 , var_1_36))) != var_1_85) {
				var_1_76 = (var_1_39 + var_1_23);
			} else {
				var_1_76 = (min ((abs (var_1_22)) , (max (last_1_var_1_76 , var_1_21))));
			}
		} else {
			var_1_76 = ((64753 - 500) - (abs (abs (var_1_4))));
		}
	}


	// From: Req28Batch184Amount500
	if (var_1_10 != var_1_24) {
		if (var_1_15) {
			var_1_73 = var_1_10;
		}
	} else {
		var_1_73 = (min (((var_1_74 - var_1_8) - (1 + var_1_39)) , (var_1_47 - var_1_38)));
	}


	// From: Req17Batch184Amount500
	signed long int stepLocal_14 = ~ var_1_8;
	unsigned char stepLocal_13 = var_1_29;
	if (stepLocal_13 == (~ last_1_var_1_50)) {
		if (var_1_46 <= stepLocal_14) {
			var_1_50 = (var_1_88 - (1336480870 - var_1_3));
		}
	}


	// From: Req34Batch184Amount500
	if (var_1_60) {
		var_1_84 = 256;
	} else {
		var_1_84 = var_1_50;
	}


	// From: Req45Batch184Amount500
	if (var_1_60) {
		var_1_95 = var_1_84;
	} else {
		var_1_95 = 10;
	}


	// From: Req9Batch184Amount500
	var_1_28 = ((var_1_3 >= (var_1_9 + var_1_50)) && var_1_14);


	// From: Req1Batch184Amount500
	if (((var_1_33 / var_1_3) / var_1_4) >= (var_1_5 - var_1_6)) {
		var_1_1 = (var_1_7 - (var_1_8 + var_1_9));
	} else {
		var_1_1 = (((var_1_10 + -2) + var_1_11) + (var_1_12 + -16));
	}


	// From: Req14Batch184Amount500
	signed char stepLocal_10 = var_1_12;
	if (-16 >= stepLocal_10) {
		if ((var_1_70 * 99.8f) < var_1_37) {
			var_1_40 = (var_1_41 + var_1_42);
		} else {
			var_1_40 = ((abs (var_1_41)) - var_1_43);
		}
	}


	// From: Req6Batch184Amount500
	if (! (var_1_23 == (var_1_95 * var_1_4))) {
		if (! (var_1_95 <= var_1_9)) {
			if (32 <= (min ((var_1_3 + var_1_88) , 4))) {
				var_1_25 = var_1_8;
			} else {
				if (((~ var_1_50) / var_1_3) <= var_1_11) {
					var_1_25 = var_1_9;
				} else {
					var_1_25 = var_1_8;
				}
			}
		} else {
			var_1_25 = var_1_8;
		}
	} else {
		var_1_25 = 128;
	}


	// From: Req4Batch184Amount500
	unsigned char stepLocal_2 = var_1_15;
	if (var_1_60) {
		if (stepLocal_2 || var_1_14) {
			if ((var_1_86 + var_1_40) > var_1_86) {
				var_1_17 = ((min (51604 , var_1_21)) - (abs (var_1_87)));
			} else {
				var_1_17 = (((max (26511 , var_1_22)) - (abs (var_1_23))) + var_1_8);
			}
		}
	} else {
		var_1_17 = var_1_8;
	}


	// From: Req24Batch184Amount500
	if ((var_1_47 > (var_1_34 - var_1_8)) || var_1_53) {
		if ((var_1_50 != var_1_45) || var_1_96) {
			if (0 > (var_1_27 / -1)) {
				if (var_1_86 < var_1_41) {
					var_1_63 = (var_1_9 + var_1_88);
				} else {
					var_1_63 = (((var_1_65 - var_1_22) - var_1_34) - var_1_25);
				}
			} else {
				if (var_1_51 <= var_1_47) {
					var_1_63 = (-2 + (max ((var_1_23 + var_1_45) , var_1_34)));
				} else {
					var_1_63 = ((var_1_88 + (32 - var_1_95)) + ((var_1_87 + var_1_27) - var_1_46));
				}
			}
		} else {
			if (-64 >= var_1_27) {
				if (var_1_62 >= -0.4f) {
					var_1_63 = (var_1_8 + var_1_38);
				} else {
					var_1_63 = ((var_1_4 + (var_1_49 + var_1_34)) + var_1_9);
				}
			} else {
				var_1_63 = (max (var_1_7 , ((var_1_84 + var_1_87) + var_1_50)));
			}
		}
	}


	// From: Req29Batch184Amount500
	if (var_1_15) {
		var_1_75 = (max ((max (var_1_54 , (min (64u , var_1_8)))) , (min (var_1_17 , 16u))));
	} else {
		var_1_75 = (abs (var_1_65));
	}


	// From: Req19Batch184Amount500
	if (var_1_87 == ((min (var_1_76 , var_1_27)) + var_1_25)) {
		if (var_1_48 < var_1_47) {
			var_1_52 = (! (var_1_14 && var_1_32));
		} else {
			var_1_52 = (var_1_15 && ((var_1_26 >= var_1_95) || (var_1_28 || var_1_53)));
		}
	}


	// From: Req31Batch184Amount500
	signed char stepLocal_27 = var_1_73;
	signed char stepLocal_26 = var_1_9;
	unsigned char stepLocal_25 = var_1_25;
	if (stepLocal_27 <= (max (var_1_50 , (-16 + var_1_22)))) {
		if (var_1_73 > stepLocal_26) {
			var_1_80 = (var_1_21 - 1);
		} else {
			var_1_80 = (((26151 + var_1_81) - var_1_84) - var_1_45);
		}
	} else {
		if (stepLocal_25 > var_1_17) {
			var_1_80 = (var_1_21 - var_1_84);
		} else {
			var_1_80 = (var_1_21 - ((var_1_81 - var_1_17) - var_1_8));
		}
	}


	// From: Req27Batch184Amount500
	unsigned char stepLocal_23 = var_1_45;
	unsigned short int stepLocal_22 = var_1_88;
	signed long int stepLocal_21 = var_1_45 >> (min (var_1_72 , 1u));
	if (stepLocal_23 < var_1_44) {
		if (var_1_33 > stepLocal_21) {
			if (stepLocal_22 > var_1_6) {
				var_1_71 = var_1_23;
			}
		} else {
			var_1_71 = (min (var_1_80 , (min (var_1_88 , var_1_54))));
		}
	}


	// From: Req21Batch184Amount500
	signed long int stepLocal_19 = min ((max (var_1_17 , var_1_11)) , -1);
	unsigned char stepLocal_18 = var_1_11 <= var_1_50;
	if (var_1_9 >= stepLocal_19) {
		var_1_55 = (var_1_43 - (abs (var_1_42)));
	} else {
		if ((var_1_96 && var_1_60) && stepLocal_18) {
			var_1_55 = var_1_42;
		} else {
			var_1_55 = (var_1_57 + (var_1_58 - var_1_59));
		}
	}


	// From: Req2Batch184Amount500
	signed char stepLocal_1 = var_1_10;
	unsigned char stepLocal_0 = var_1_4;
	if (stepLocal_0 > var_1_3) {
		var_1_13 = (((max (var_1_3 , var_1_8)) < (max (var_1_7 , var_1_11))) && var_1_14);
	} else {
		if (stepLocal_1 <= (var_1_12 * var_1_4)) {
			var_1_13 = ((var_1_10 != var_1_80) || var_1_15);
		}
	}


	// From: Req32Batch184Amount500
	unsigned char stepLocal_30 = var_1_97 || (var_1_30 && var_1_15);
	unsigned long int stepLocal_29 = var_1_51;
	unsigned char stepLocal_28 = var_1_13;
	if ((var_1_86 == var_1_85) && stepLocal_30) {
		if (var_1_97) {
			var_1_82 = var_1_72;
		} else {
			if (var_1_14) {
				var_1_82 = (min (var_1_9 , var_1_38));
			} else {
				var_1_82 = var_1_8;
			}
		}
	} else {
		if (stepLocal_29 <= last_1_var_1_82) {
			var_1_82 = (32 + (max (var_1_45 , var_1_38)));
		} else {
			if (var_1_28) {
				var_1_82 = (min (var_1_8 , 4));
			} else {
				if (stepLocal_28 && var_1_53) {
					var_1_82 = var_1_34;
				} else {
					var_1_82 = var_1_74;
				}
			}
		}
	}


	// From: Req44Batch184Amount500
	if (var_1_52) {
		var_1_94 = last_1_var_1_94;
	}


	// From: Req23Batch184Amount500
	if (var_1_39 >= var_1_34) {
		if (var_1_96) {
			if (var_1_49 > (abs (var_1_94))) {
				var_1_61 = (var_1_42 + var_1_59);
			} else {
				if (var_1_14 || var_1_97) {
					var_1_61 = ((var_1_58 + var_1_59) - (max (var_1_43 , var_1_62)));
				} else {
					var_1_61 = (var_1_57 + 3.45f);
				}
			}
		} else {
			if ((~ var_1_94) <= var_1_22) {
				if ((~ (var_1_3 & var_1_49)) >= var_1_94) {
					var_1_61 = ((min ((var_1_58 - var_1_59) , var_1_41)) + var_1_42);
				}
			}
		}
	}


	// From: Req25Batch184Amount500
	signed long int stepLocal_20 = var_1_26 * var_1_38;
	if (var_1_36 > var_1_61) {
		if (var_1_14) {
			var_1_66 = ((var_1_67 - var_1_58) - var_1_62);
		}
	} else {
		if (stepLocal_20 > (var_1_65 + var_1_44)) {
			if (last_1_var_1_66 > (min ((var_1_67 + var_1_61) , var_1_57))) {
				var_1_66 = ((1.3f + (min (var_1_68 , var_1_69))) + var_1_58);
			} else {
				var_1_66 = (var_1_57 + var_1_69);
			}
		}
	}


	// From: Req13Batch184Amount500
	if ((- (var_1_36 - var_1_37)) >= var_1_61) {
		var_1_35 = (min (var_1_9 , var_1_8));
	} else {
		if (! var_1_97) {
			var_1_35 = (var_1_8 + (max (var_1_9 , (var_1_38 + var_1_39))));
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 63);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -15);
	assume_abort_if_not(var_1_10 <= 16);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -31);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -31);
	assume_abort_if_not(var_1_12 <= 32);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 32767);
	assume_abort_if_not(var_1_21 <= 65534);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 16383);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 64);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 63);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 63);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 32);
	assume_abort_if_not(var_1_47 <= 64);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= -32766);
	assume_abort_if_not(var_1_49 <= 32766);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= -461168.6018427383000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_58 >= 0.0F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 4611686.018427383000e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 4611686.018427383000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854766000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_65 >= 1610612734);
	assume_abort_if_not(var_1_65 <= 2147483646);
	var_1_67 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_67 >= 4611686.018427383000e+12F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 9223372.036854766000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_68 >= -230584.3009213691400e+13F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 2305843.009213691400e+12F && var_1_68 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_69 >= -230584.3009213691400e+13F && var_1_69 <= -1.0e-20F) || (var_1_69 <= 2305843.009213691400e+12F && var_1_69 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 1);
	assume_abort_if_not(var_1_72 <= 7);
	var_1_74 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_74 >= 62);
	assume_abort_if_not(var_1_74 <= 126);
	var_1_79 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_79 >= -922337.2036854776000e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854776000e+12F && var_1_79 >= 1.0e-20F ));
	assume_abort_if_not(var_1_79 != 0.0F);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 24575);
	assume_abort_if_not(var_1_81 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_25 = var_1_25;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_94 = var_1_94;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_33 / var_1_3) / var_1_4) >= (var_1_5 - var_1_6)) ? (var_1_1 == ((signed char) (var_1_7 - (var_1_8 + var_1_9)))) : (var_1_1 == ((signed char) (((var_1_10 + -2) + var_1_11) + (var_1_12 + -16))))) && ((var_1_4 > var_1_3) ? (var_1_13 == ((unsigned char) (((max (var_1_3 , var_1_8)) < (max (var_1_7 , var_1_11))) && var_1_14))) : ((var_1_10 <= (var_1_12 * var_1_4)) ? (var_1_13 == ((unsigned char) ((var_1_10 != var_1_80) || var_1_15))) : 1))) && (var_1_16 == ((signed char) (var_1_8 + var_1_10)))) && (var_1_60 ? ((var_1_15 || var_1_14) ? (((var_1_86 + var_1_40) > var_1_86) ? (var_1_17 == ((unsigned short int) ((min (51604 , var_1_21)) - (abs (var_1_87))))) : (var_1_17 == ((unsigned short int) (((max (26511 , var_1_22)) - (abs (var_1_23))) + var_1_8)))) : 1) : (var_1_17 == ((unsigned short int) var_1_8)))) && (var_1_15 ? (((var_1_29 + var_1_3) > ((max (var_1_7 , var_1_4)) - 100)) ? (var_1_24 == ((signed long int) (max (var_1_23 , var_1_11)))) : (var_1_24 == ((signed long int) var_1_4))) : (var_1_24 == ((signed long int) (min (var_1_27 , var_1_11)))))) && ((! (var_1_23 == (var_1_95 * var_1_4))) ? ((! (var_1_95 <= var_1_9)) ? ((32 <= (min ((var_1_3 + var_1_88) , 4))) ? (var_1_25 == ((unsigned char) var_1_8)) : ((((~ var_1_50) / var_1_3) <= var_1_11) ? (var_1_25 == ((unsigned char) var_1_9)) : (var_1_25 == ((unsigned char) var_1_8)))) : (var_1_25 == ((unsigned char) var_1_8))) : (var_1_25 == ((unsigned char) 128)))) && (var_1_26 == ((signed short int) (var_1_8 - var_1_44)))) && (((- last_1_var_1_66) > last_1_var_1_92) ? ((var_1_10 == (32 * (var_1_7 - var_1_9))) ? (var_1_27 == ((unsigned short int) (max ((var_1_21 - var_1_3) , var_1_8)))) : 1) : 1)) && (var_1_28 == ((unsigned char) ((var_1_3 >= (var_1_9 + var_1_50)) && var_1_14)))) && (((5 >= var_1_9) || (var_1_7 >= var_1_4)) ? (var_1_29 == ((unsigned char) var_1_9)) : 1)) && ((var_1_54 > 64) ? (var_1_30 == ((unsigned char) ((! var_1_15) || (var_1_14 && var_1_32)))) : (var_1_30 == ((unsigned char) var_1_32)))) && ((var_1_8 == var_1_10) ? ((var_1_83 >= var_1_11) ? ((var_1_11 < var_1_24) ? (var_1_33 == ((unsigned char) (min ((var_1_34 - var_1_9) , var_1_8)))) : (var_1_33 == ((unsigned char) var_1_8))) : (var_1_33 == ((unsigned char) var_1_9))) : 1)) && (((- (var_1_36 - var_1_37)) >= var_1_61) ? (var_1_35 == ((unsigned char) (min (var_1_9 , var_1_8)))) : ((! var_1_97) ? (var_1_35 == ((unsigned char) (var_1_8 + (max (var_1_9 , (var_1_38 + var_1_39)))))) : 1))) && ((-16 >= var_1_12) ? (((var_1_70 * 99.8f) < var_1_37) ? (var_1_40 == ((double) (var_1_41 + var_1_42))) : (var_1_40 == ((double) ((abs (var_1_41)) - var_1_43)))) : 1)) && ((var_1_7 > last_1_var_1_35) ? (var_1_44 == ((unsigned char) (((max (var_1_45 , var_1_46)) + (var_1_47 + 32)) - var_1_38))) : (((var_1_8 * last_1_var_1_48) > var_1_45) ? (var_1_44 == ((unsigned char) ((var_1_45 - var_1_39) + var_1_46))) : (var_1_44 == ((unsigned char) (((min (2 , var_1_47)) + var_1_8) + var_1_45)))))) && ((last_1_var_1_60 || ((max (last_1_var_1_84 , last_1_var_1_54)) < var_1_47)) ? ((last_1_var_1_60 || ((last_1_var_1_55 != var_1_36) && last_1_var_1_60)) ? (var_1_48 == ((signed short int) (min (var_1_11 , var_1_38)))) : (var_1_48 == ((signed short int) (last_1_var_1_35 - 1)))) : (var_1_48 == ((signed short int) (max ((last_1_var_1_94 - var_1_39) , (max ((abs (var_1_49)) , (var_1_46 + last_1_var_1_76))))))))) && ((var_1_29 == (~ last_1_var_1_50)) ? ((var_1_46 <= (~ var_1_8)) ? (var_1_50 == ((signed long int) (var_1_88 - (1336480870 - var_1_3)))) : 1) : 1)) && (var_1_51 == ((unsigned long int) ((min (var_1_34 , var_1_22)) + 256u)))) && ((var_1_87 == ((min (var_1_76 , var_1_27)) + var_1_25)) ? ((var_1_48 < var_1_47) ? (var_1_52 == ((unsigned char) (! (var_1_14 && var_1_32)))) : (var_1_52 == ((unsigned char) (var_1_15 && ((var_1_26 >= var_1_95) || (var_1_28 || var_1_53)))))) : 1)) && (((last_1_var_1_33 + last_1_var_1_51) >= var_1_7) ? ((! ((last_1_var_1_54 * last_1_var_1_71) == var_1_10)) ? (var_1_54 == ((signed long int) ((last_1_var_1_33 + (min (1 , last_1_var_1_25))) + (max (var_1_9 , var_1_21))))) : (var_1_54 == ((signed long int) (-256 + last_1_var_1_33)))) : ((var_1_49 <= -4) ? (((last_1_var_1_33 / var_1_3) <= ((var_1_6 / var_1_21) * var_1_8)) ? (var_1_54 == ((signed long int) (abs (var_1_39)))) : (var_1_54 == ((signed long int) last_1_var_1_25))) : (var_1_54 == ((signed long int) (last_1_var_1_80 + last_1_var_1_48)))))) && ((var_1_9 >= (min ((max (var_1_17 , var_1_11)) , -1))) ? (var_1_55 == ((double) (var_1_43 - (abs (var_1_42))))) : (((var_1_96 && var_1_60) && (var_1_11 <= var_1_50)) ? (var_1_55 == ((double) var_1_42)) : (var_1_55 == ((double) (var_1_57 + (var_1_58 - var_1_59))))))) && (last_1_var_1_60 ? (((var_1_7 - 2) >= var_1_6) ? (var_1_60 == ((unsigned char) (var_1_15 && var_1_53))) : (var_1_60 == ((unsigned char) var_1_14))) : (var_1_60 == ((unsigned char) var_1_15)))) && ((var_1_39 >= var_1_34) ? (var_1_96 ? ((var_1_49 > (abs (var_1_94))) ? (var_1_61 == ((float) (var_1_42 + var_1_59))) : ((var_1_14 || var_1_97) ? (var_1_61 == ((float) ((var_1_58 + var_1_59) - (max (var_1_43 , var_1_62))))) : (var_1_61 == ((float) (var_1_57 + 3.45f))))) : (((~ var_1_94) <= var_1_22) ? (((~ (var_1_3 & var_1_49)) >= var_1_94) ? (var_1_61 == ((float) ((min ((var_1_58 - var_1_59) , var_1_41)) + var_1_42))) : 1) : 1)) : 1)) && (((var_1_47 > (var_1_34 - var_1_8)) || var_1_53) ? (((var_1_50 != var_1_45) || var_1_96) ? ((0 > (var_1_27 / -1)) ? ((var_1_86 < var_1_41) ? (var_1_63 == ((signed long int) (var_1_9 + var_1_88))) : (var_1_63 == ((signed long int) (((var_1_65 - var_1_22) - var_1_34) - var_1_25)))) : ((var_1_51 <= var_1_47) ? (var_1_63 == ((signed long int) (-2 + (max ((var_1_23 + var_1_45) , var_1_34))))) : (var_1_63 == ((signed long int) ((var_1_88 + (32 - var_1_95)) + ((var_1_87 + var_1_27) - var_1_46)))))) : ((-64 >= var_1_27) ? ((var_1_62 >= -0.4f) ? (var_1_63 == ((signed long int) (var_1_8 + var_1_38))) : (var_1_63 == ((signed long int) ((var_1_4 + (var_1_49 + var_1_34)) + var_1_9)))) : (var_1_63 == ((signed long int) (max (var_1_7 , ((var_1_84 + var_1_87) + var_1_50))))))) : 1)) && ((var_1_36 > var_1_61) ? (var_1_14 ? (var_1_66 == ((float) ((var_1_67 - var_1_58) - var_1_62))) : 1) : (((var_1_26 * var_1_38) > (var_1_65 + var_1_44)) ? ((last_1_var_1_66 > (min ((var_1_67 + var_1_61) , var_1_57))) ? (var_1_66 == ((float) ((1.3f + (min (var_1_68 , var_1_69))) + var_1_58))) : (var_1_66 == ((float) (var_1_57 + var_1_69)))) : 1))) && ((var_1_65 < (var_1_46 - 1)) ? ((! var_1_53) ? (((var_1_21 * var_1_12) >= var_1_51) ? (var_1_70 == ((double) ((min (var_1_58 , var_1_59)) - (min ((min (var_1_62 , var_1_67)) , var_1_43))))) : (var_1_70 == ((double) ((8.5 + var_1_68) + var_1_58)))) : (var_1_70 == ((double) (abs ((max (var_1_42 , var_1_41)) + var_1_58))))) : 1)) && ((var_1_45 < var_1_44) ? ((var_1_33 > (var_1_45 >> (min (var_1_72 , 1u)))) ? ((var_1_88 > var_1_6) ? (var_1_71 == ((signed long int) var_1_23)) : 1) : (var_1_71 == ((signed long int) (min (var_1_80 , (min (var_1_88 , var_1_54))))))) : 1)) && ((var_1_10 != var_1_24) ? (var_1_15 ? (var_1_73 == ((signed char) var_1_10)) : 1) : (var_1_73 == ((signed char) (min (((var_1_74 - var_1_8) - (1 + var_1_39)) , (var_1_47 - var_1_38))))))) && (var_1_15 ? (var_1_75 == ((unsigned long int) (max ((max (var_1_54 , (min (64u , var_1_8)))) , (min (var_1_17 , 16u)))))) : (var_1_75 == ((unsigned long int) (abs (var_1_65)))))) && ((var_1_91 <= ((var_1_48 + var_1_88) | var_1_51)) ? ((var_1_42 > (var_1_86 / var_1_67)) ? ((var_1_85 < (var_1_69 / (max (var_1_67 , var_1_79)))) ? (var_1_76 == ((unsigned short int) (var_1_21 - ((var_1_46 + 16) + 4)))) : 1) : (var_1_76 == ((unsigned short int) (var_1_83 + (var_1_47 + var_1_88))))) : (var_1_15 ? (((- (max (var_1_86 , var_1_36))) != var_1_85) ? (var_1_76 == ((unsigned short int) (var_1_39 + var_1_23))) : (var_1_76 == ((unsigned short int) (min ((abs (var_1_22)) , (max (last_1_var_1_76 , var_1_21))))))) : (var_1_76 == ((unsigned short int) ((64753 - 500) - (abs (abs (var_1_4))))))))) && ((var_1_73 <= (max (var_1_50 , (-16 + var_1_22)))) ? ((var_1_73 > var_1_9) ? (var_1_80 == ((unsigned short int) (var_1_21 - 1))) : (var_1_80 == ((unsigned short int) (((26151 + var_1_81) - var_1_84) - var_1_45)))) : ((var_1_25 > var_1_17) ? (var_1_80 == ((unsigned short int) (var_1_21 - var_1_84))) : (var_1_80 == ((unsigned short int) (var_1_21 - ((var_1_81 - var_1_17) - var_1_8))))))) && (((var_1_86 == var_1_85) && (var_1_97 || (var_1_30 && var_1_15))) ? (var_1_97 ? (var_1_82 == ((unsigned char) var_1_72)) : (var_1_14 ? (var_1_82 == ((unsigned char) (min (var_1_9 , var_1_38)))) : (var_1_82 == ((unsigned char) var_1_8)))) : ((var_1_51 <= last_1_var_1_82) ? (var_1_82 == ((unsigned char) (32 + (max (var_1_45 , var_1_38))))) : (var_1_28 ? (var_1_82 == ((unsigned char) (min (var_1_8 , 4)))) : ((var_1_13 && var_1_53) ? (var_1_82 == ((unsigned char) var_1_34)) : (var_1_82 == ((unsigned char) var_1_74))))))) && (var_1_83 == ((signed long int) var_1_54))) && (var_1_60 ? (var_1_84 == ((unsigned short int) 256)) : (var_1_84 == ((unsigned short int) var_1_50)))) && (var_1_32 ? (var_1_85 == ((double) var_1_41)) : 1)) && (var_1_86 == ((double) var_1_62))) && (var_1_87 == ((signed short int) 1))) && (var_1_53 ? (var_1_88 == ((unsigned short int) var_1_21)) : (var_1_88 == ((unsigned short int) var_1_48)))) && (var_1_89 == ((signed char) var_1_7))) && (var_1_32 ? (var_1_90 == ((signed char) var_1_74)) : 1)) && (var_1_91 == ((signed short int) var_1_3))) && (var_1_14 ? (var_1_92 == ((double) var_1_67)) : (var_1_92 == ((double) var_1_41)))) && (last_1_var_1_93 ? (var_1_93 == ((unsigned char) 0)) : (var_1_93 == ((unsigned char) var_1_32)))) && (var_1_52 ? (var_1_94 == ((signed long int) last_1_var_1_94)) : 1)) && (var_1_60 ? (var_1_95 == ((signed long int) var_1_84)) : (var_1_95 == ((signed long int) 10)))) && ((var_1_85 > var_1_67) ? (var_1_96 == ((unsigned char) (var_1_15 && var_1_53))) : (var_1_96 == ((unsigned char) (! var_1_14))))) && ((8u == var_1_51) ? ((var_1_22 < 10000) ? (var_1_97 == ((unsigned char) var_1_15)) : 1) : 1)
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
