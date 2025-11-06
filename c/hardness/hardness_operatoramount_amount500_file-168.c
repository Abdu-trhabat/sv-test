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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch168Amount500.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
signed char var_1_5 = -25;
signed char var_1_6 = 50;
signed char var_1_7 = -4;
signed char var_1_8 = 64;
signed char var_1_9 = 16;
unsigned char var_1_10 = 128;
signed char var_1_12 = 10;
signed char var_1_13 = -16;
unsigned short int var_1_14 = 0;
unsigned short int var_1_15 = 61745;
signed char var_1_16 = -32;
unsigned long int var_1_18 = 1;
float var_1_19 = 999999999999.25;
float var_1_20 = 16.45;
float var_1_21 = 256.2;
float var_1_22 = 10000000000000.7;
float var_1_23 = 16.625;
double var_1_24 = 16.875;
double var_1_25 = 10.4;
double var_1_26 = 10.375;
double var_1_27 = 31.4;
double var_1_28 = 64.8;
signed char var_1_29 = -8;
signed char var_1_30 = 10;
signed char var_1_31 = 5;
unsigned long int var_1_32 = 32;
unsigned long int var_1_35 = 4215450161;
unsigned long int var_1_36 = 128;
unsigned long int var_1_37 = 16;
unsigned long int var_1_38 = 3524953025;
signed short int var_1_39 = 128;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
signed long int var_1_44 = -32;
signed long int var_1_45 = 100;
unsigned long int var_1_46 = 1;
unsigned long int var_1_47 = 0;
double var_1_48 = 4.75;
unsigned char var_1_49 = 0;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
signed long int var_1_55 = 128;
unsigned char var_1_56 = 128;
unsigned char var_1_57 = 1;
double var_1_58 = 50.2;
unsigned char var_1_59 = 1;
unsigned long int var_1_60 = 2;
float var_1_61 = 100.6;
unsigned short int var_1_63 = 10;
signed short int var_1_64 = 32;
signed long int var_1_65 = 100;
signed long int var_1_67 = 10;
signed char var_1_68 = -128;
double var_1_69 = 32.6;
double var_1_70 = 0.7;
unsigned short int var_1_71 = 2;
unsigned short int var_1_72 = 0;
double var_1_73 = 63.3;
unsigned short int var_1_74 = 10;
float var_1_75 = 5.3;
unsigned long int var_1_76 = 4;
unsigned char var_1_77 = 0;
unsigned short int var_1_78 = 1;
double var_1_79 = 16.25;
unsigned short int var_1_80 = 29092;
unsigned short int var_1_81 = 36445;
unsigned short int var_1_82 = 64794;
unsigned char var_1_83 = 1;
unsigned char var_1_84 = 2;
unsigned char var_1_85 = 128;
unsigned long int var_1_86 = 5;
unsigned char var_1_87 = 1;
signed short int var_1_88 = 8;
signed short int var_1_90 = 10000;
unsigned short int var_1_91 = 4;
unsigned long int var_1_92 = 10;
float var_1_93 = 499.6;
unsigned char var_1_94 = 32;
signed short int var_1_95 = 4;
unsigned long int var_1_96 = 128;
unsigned long int var_1_97 = 1;
float var_1_98 = 16.75;
unsigned char var_1_99 = 5;
float var_1_100 = 10.275;
unsigned char var_1_102 = 0;
signed short int var_1_103 = 256;
unsigned char var_1_104 = 0;
unsigned long int var_1_105 = 16;
float var_1_106 = 8.25;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_18 = 1;
unsigned long int last_1_var_1_32 = 32;
double last_1_var_1_48 = 4.75;
unsigned char last_1_var_1_57 = 1;
double last_1_var_1_58 = 50.2;
signed long int last_1_var_1_65 = 100;
unsigned short int last_1_var_1_72 = 0;
unsigned short int last_1_var_1_78 = 1;
unsigned char last_1_var_1_87 = 1;
signed short int last_1_var_1_88 = 8;
unsigned short int last_1_var_1_91 = 4;
unsigned long int last_1_var_1_96 = 128;
unsigned long int last_1_var_1_97 = 1;
unsigned char last_1_var_1_102 = 0;
unsigned char last_1_var_1_104 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req47Batch168Amount500
	if (last_1_var_1_104) {
		var_1_102 = var_1_43;
	} else {
		var_1_102 = var_1_53;
	}


	// From: Req23Batch168Amount500
	signed long int stepLocal_21 = (min (200 , var_1_30)) - 64;
	unsigned char stepLocal_20 = var_1_53;
	unsigned long int stepLocal_19 = last_1_var_1_97;
	unsigned char stepLocal_18 = var_1_51;
	if (last_1_var_1_87 && stepLocal_20) {
		if (stepLocal_18 && (var_1_8 <= (abs (var_1_9)))) {
			if (stepLocal_21 <= last_1_var_1_18) {
				var_1_65 = var_1_35;
			} else {
				if (stepLocal_19 < var_1_60) {
					var_1_65 = ((min (last_1_var_1_97 , (last_1_var_1_88 + var_1_31))) + (var_1_12 + var_1_30));
				} else {
					var_1_65 = (32 - var_1_67);
				}
			}
		} else {
			var_1_65 = (last_1_var_1_88 + (var_1_15 - last_1_var_1_18));
		}
	} else {
		var_1_65 = (max ((min (last_1_var_1_72 , last_1_var_1_91)) , var_1_5));
	}


	// From: Req42Batch168Amount500
	if (last_1_var_1_102) {
		var_1_96 = last_1_var_1_65;
	} else {
		var_1_96 = last_1_var_1_96;
	}


	// From: Req43Batch168Amount500
	var_1_97 = var_1_96;


	// From: Req18Batch168Amount500
	if (last_1_var_1_57) {
		var_1_58 = (var_1_22 + var_1_21);
	} else {
		var_1_58 = (min ((var_1_25 - (256.4 + var_1_26)) , var_1_22));
	}


	// From: Req14Batch168Amount500
	if (var_1_45 == last_1_var_1_32) {
		var_1_49 = ((var_1_43 && (var_1_42 && var_1_41)) || (var_1_51 || var_1_52));
	} else {
		if (last_1_var_1_48 > last_1_var_1_58) {
			var_1_49 = (var_1_53 && (var_1_43 || var_1_54));
		} else {
			var_1_49 = (var_1_53 && var_1_54);
		}
	}


	// From: Req45Batch168Amount500
	if (var_1_49) {
		var_1_99 = var_1_85;
	} else {
		var_1_99 = 32;
	}


	// From: Req2Batch168Amount500
	if (var_1_96 > var_1_7) {
		var_1_14 = (var_1_15 - var_1_8);
	}


	// From: Req16Batch168Amount500
	var_1_56 = (var_1_47 + var_1_46);


	// From: Req26Batch168Amount500
	var_1_71 = (abs (abs (var_1_15)));


	// From: Req29Batch168Amount500
	if (var_1_51) {
		var_1_76 = (var_1_35 - (1520566709u - var_1_45));
	} else {
		var_1_76 = var_1_38;
	}


	// From: Req34Batch168Amount500
	if ((var_1_10 < var_1_15) || var_1_43) {
		var_1_86 = (var_1_80 + var_1_9);
	}


	// From: Req37Batch168Amount500
	var_1_91 = var_1_31;


	// From: Req38Batch168Amount500
	var_1_92 = var_1_74;


	// From: Req39Batch168Amount500
	var_1_93 = var_1_26;


	// From: Req44Batch168Amount500
	var_1_98 = 32.4f;


	// From: Req48Batch168Amount500
	var_1_103 = (min (var_1_86 , var_1_31));


	// From: Req50Batch168Amount500
	var_1_105 = var_1_60;


	// From: Req51Batch168Amount500
	var_1_106 = var_1_23;


	// From: Req32Batch168Amount500
	unsigned char stepLocal_26 = var_1_49;
	if (stepLocal_26 || (var_1_21 <= var_1_27)) {
		var_1_83 = ((var_1_49 || var_1_102) && var_1_43);
	}


	// From: Req4Batch168Amount500
	var_1_18 = (min (var_1_15 , (var_1_71 + (abs (var_1_8)))));


	// From: Req9Batch168Amount500
	unsigned long int stepLocal_10 = var_1_86;
	signed char stepLocal_9 = var_1_5;
	if (stepLocal_9 != var_1_30) {
		if (var_1_15 < stepLocal_10) {
			var_1_36 = ((max (var_1_37 , var_1_30)) + var_1_10);
		} else {
			var_1_36 = (var_1_35 - 500u);
		}
	} else {
		var_1_36 = (min (((min (var_1_35 , 3214920495u)) - 4u) , (var_1_38 - var_1_15)));
	}


	// From: Req11Batch168Amount500
	unsigned long int stepLocal_12 = var_1_86;
	unsigned long int stepLocal_11 = var_1_18;
	if (stepLocal_11 > var_1_30) {
		if (stepLocal_12 > var_1_12) {
			var_1_40 = ((var_1_41 || var_1_42) || var_1_43);
		}
	} else {
		var_1_40 = (! (var_1_41 && var_1_43));
	}


	// From: Req15Batch168Amount500
	signed long int stepLocal_13 = ~ (var_1_31 - var_1_30);
	if (stepLocal_13 > var_1_91) {
		var_1_55 = ((var_1_15 - (max (var_1_30 , 32))) + -25);
	}


	// From: Req22Batch168Amount500
	if (var_1_52) {
		var_1_64 = (abs (var_1_76));
	} else {
		var_1_64 = (var_1_46 + var_1_47);
	}


	// From: Req30Batch168Amount500
	signed long int stepLocal_25 = (var_1_67 ^ var_1_71) / var_1_15;
	if (5 > stepLocal_25) {
		var_1_77 = (var_1_40 || (var_1_41 || var_1_53));
	}


	// From: Req17Batch168Amount500
	if ((var_1_96 + (var_1_45 - var_1_46)) <= var_1_55) {
		var_1_57 = (var_1_53 && var_1_54);
	} else {
		var_1_57 = (! ((var_1_27 == var_1_26) || (var_1_53 && var_1_54)));
	}


	// From: Req46Batch168Amount500
	if (var_1_57) {
		var_1_100 = 0.7f;
	} else {
		var_1_100 = var_1_70;
	}


	// From: Req35Batch168Amount500
	unsigned char stepLocal_29 = var_1_53;
	unsigned char stepLocal_28 = var_1_49;
	signed long int stepLocal_27 = var_1_55;
	if ((abs (var_1_13)) >= stepLocal_27) {
		if ((var_1_92 < var_1_67) || stepLocal_29) {
			var_1_87 = (((! var_1_51) && (var_1_53 && var_1_54)) && (! var_1_42));
		} else {
			if (stepLocal_28 || var_1_40) {
				var_1_87 = ((! var_1_40) && var_1_52);
			} else {
				var_1_87 = (var_1_43 || var_1_52);
			}
		}
	} else {
		var_1_87 = ((! var_1_54) || var_1_41);
	}


	// From: Req13Batch168Amount500
	if ((var_1_41 || (! var_1_42)) && var_1_87) {
		var_1_48 = (min (var_1_20 , (max ((min (var_1_25 , var_1_26)) , var_1_23))));
	} else {
		if (var_1_43 && var_1_42) {
			var_1_48 = 4.8;
		} else {
			var_1_48 = var_1_23;
		}
	}


	// From: Req31Batch168Amount500
	if (var_1_41) {
		if ((min (var_1_21 , var_1_27)) > var_1_20) {
			var_1_78 = (var_1_46 + last_1_var_1_78);
		} else {
			if ((var_1_21 / var_1_73) > (var_1_48 / var_1_79)) {
				var_1_78 = ((var_1_80 - var_1_60) + last_1_var_1_78);
			} else {
				var_1_78 = ((min ((abs (var_1_15)) , var_1_81)) - var_1_31);
			}
		}
	} else {
		var_1_78 = ((min ((var_1_82 - var_1_10) , (max (var_1_15 , var_1_81)))) - (var_1_80 - var_1_9));
	}


	// From: Req1Batch168Amount500
	unsigned long int stepLocal_5 = min (var_1_105 , var_1_5);
	unsigned long int stepLocal_4 = var_1_105;
	unsigned long int stepLocal_3 = var_1_105;
	signed long int stepLocal_2 = var_1_55;
	signed long int stepLocal_1 = var_1_13 * (var_1_9 << var_1_6);
	unsigned long int stepLocal_0 = var_1_18;
	if (var_1_105 <= stepLocal_2) {
		if ((-1 / var_1_5) < stepLocal_0) {
			var_1_1 = (max ((abs (abs (-1))) , (max (var_1_6 , var_1_7))));
		} else {
			var_1_1 = ((var_1_8 - 2) - (var_1_9 + 10));
		}
	} else {
		if ((var_1_10 - (max (var_1_8 , 32))) != stepLocal_3) {
			if (50 <= stepLocal_5) {
				var_1_1 = (max (2 , (var_1_9 + var_1_12)));
			} else {
				if (var_1_7 != stepLocal_4) {
					var_1_1 = (var_1_9 + var_1_13);
				} else {
					if (var_1_8 > stepLocal_1) {
						var_1_1 = var_1_13;
					} else {
						var_1_1 = var_1_6;
					}
				}
			}
		} else {
			var_1_1 = var_1_7;
		}
	}


	// From: Req3Batch168Amount500
	unsigned char stepLocal_6 = var_1_15 > var_1_9;
	if (var_1_77 || stepLocal_6) {
		var_1_16 = (var_1_8 - var_1_9);
	} else {
		var_1_16 = (var_1_9 - var_1_8);
	}


	// From: Req20Batch168Amount500
	if (var_1_105 > var_1_71) {
		if ((var_1_57 || var_1_52) && var_1_102) {
			var_1_61 = ((min (var_1_20 , 0.4f)) + var_1_22);
		} else {
			var_1_61 = (abs (max (var_1_27 , var_1_25)));
		}
	} else {
		var_1_61 = ((abs (-0.4f + var_1_21)) - var_1_25);
	}


	// From: Req21Batch168Amount500
	unsigned char stepLocal_17 = var_1_77;
	if (stepLocal_17 && var_1_52) {
		var_1_63 = (min ((4 + var_1_30) , var_1_8));
	}


	// From: Req28Batch168Amount500
	if (var_1_28 == (max (var_1_22 , var_1_48))) {
		var_1_75 = (var_1_22 + var_1_21);
	} else {
		var_1_75 = (min (var_1_25 , var_1_27));
	}


	// From: Req40Batch168Amount500
	if (var_1_87) {
		var_1_94 = var_1_47;
	} else {
		var_1_94 = var_1_46;
	}


	// From: Req49Batch168Amount500
	unsigned long int stepLocal_35 = var_1_35 - 32u;
	if (var_1_87) {
		if (! var_1_83) {
			var_1_104 = (! var_1_54);
		} else {
			if (stepLocal_35 <= var_1_92) {
				var_1_104 = (last_1_var_1_104 || var_1_54);
			}
		}
	}


	// From: Req6Batch168Amount500
	unsigned long int stepLocal_8 = var_1_6 * var_1_97;
	unsigned long int stepLocal_7 = var_1_97;
	if (-5 > stepLocal_8) {
		var_1_24 = (var_1_25 - ((abs (var_1_21)) + (var_1_26 + 49.6)));
	} else {
		if ((var_1_100 * (var_1_26 - var_1_25)) > var_1_22) {
			if ((var_1_76 + var_1_6) >= stepLocal_7) {
				var_1_24 = 16.5;
			} else {
				var_1_24 = ((var_1_26 + var_1_27) + var_1_21);
			}
		} else {
			var_1_24 = ((max (var_1_26 , 31.5)) - (max ((min (var_1_25 , 8.625)) , var_1_28)));
		}
	}


	// From: Req19Batch168Amount500
	unsigned long int stepLocal_16 = (min (var_1_55 , var_1_36)) >> var_1_60;
	signed long int stepLocal_15 = (max (var_1_99 , var_1_45)) * (64 << var_1_78);
	unsigned long int stepLocal_14 = (var_1_30 << var_1_55) * var_1_96;
	if (var_1_46 < stepLocal_16) {
		if (stepLocal_15 < 64) {
			if (var_1_21 <= var_1_20) {
				var_1_59 = (((var_1_35 & 128) <= var_1_15) && var_1_41);
			} else {
				var_1_59 = ((var_1_26 < var_1_58) || var_1_53);
			}
		}
	} else {
		if (stepLocal_14 != var_1_9) {
			var_1_59 = (var_1_41 || (var_1_53 && var_1_51));
		}
	}


	// From: Req25Batch168Amount500
	if (var_1_102 && var_1_59) {
		var_1_69 = (9.99999999999975E12 + (max ((min (var_1_26 , var_1_22)) , var_1_70)));
	} else {
		if (var_1_42 || var_1_43) {
			var_1_69 = var_1_26;
		} else {
			if (var_1_31 <= (var_1_47 * var_1_86)) {
				var_1_69 = (abs (max (var_1_27 , var_1_22)));
			} else {
				var_1_69 = ((abs (var_1_21 + var_1_27)) - var_1_25);
			}
		}
	}


	// From: Req27Batch168Amount500
	if ((var_1_58 / var_1_73) == var_1_24) {
		var_1_72 = (16 + var_1_74);
	} else {
		var_1_72 = (var_1_15 - var_1_10);
	}


	// From: Req8Batch168Amount500
	if (var_1_104 && (var_1_57 || var_1_49)) {
		var_1_32 = ((var_1_35 - var_1_8) - var_1_10);
	}


	// From: Req7Batch168Amount500
	if ((abs (var_1_10)) < (var_1_8 - var_1_32)) {
		if (var_1_15 >= var_1_96) {
			var_1_29 = (var_1_9 - (var_1_30 + var_1_31));
		} else {
			var_1_29 = (var_1_9 + (var_1_31 - 4));
		}
	}


	// From: Req10Batch168Amount500
	if (var_1_104) {
		var_1_39 = (min ((max ((-4 + var_1_94) , var_1_12)) , var_1_10));
	}


	// From: Req41Batch168Amount500
	if (var_1_59) {
		var_1_95 = var_1_31;
	}


	// From: Req36Batch168Amount500
	unsigned short int stepLocal_34 = var_1_81;
	unsigned long int stepLocal_33 = var_1_76;
	unsigned char stepLocal_32 = var_1_58 > (var_1_69 / var_1_79);
	signed long int stepLocal_31 = var_1_65;
	unsigned long int stepLocal_30 = 5u;
	if (var_1_77) {
		var_1_88 = ((max (10 , var_1_60)) - (var_1_10 + var_1_46));
	} else {
		if (var_1_92 == stepLocal_30) {
			if (stepLocal_31 > ((64 * 16) / (min (var_1_5 , var_1_15)))) {
				if (stepLocal_34 > var_1_63) {
					var_1_88 = -128;
				} else {
					if (stepLocal_32 || var_1_49) {
						var_1_88 = (var_1_13 + (var_1_31 - (var_1_90 - var_1_10)));
					} else {
						var_1_88 = (16 + var_1_18);
					}
				}
			} else {
				if ((var_1_80 - var_1_74) >= stepLocal_33) {
					var_1_88 = var_1_31;
				} else {
					var_1_88 = var_1_6;
				}
			}
		} else {
			var_1_88 = var_1_12;
		}
	}


	// From: Req12Batch168Amount500
	if ((var_1_26 / 64.4f) <= var_1_20) {
		if (var_1_7 < -4) {
			var_1_44 = ((abs (var_1_13)) + (min (var_1_88 , (var_1_30 - var_1_45))));
		} else {
			var_1_44 = ((var_1_8 + (abs (var_1_9))) + var_1_45);
		}
	} else {
		if (var_1_43) {
			if ((var_1_9 << (var_1_46 - var_1_47)) != var_1_36) {
				if (var_1_77) {
					var_1_44 = ((min (var_1_7 , var_1_10)) + var_1_12);
				}
			}
		} else {
			if (! ((var_1_65 | var_1_76) > var_1_86)) {
				if (var_1_42) {
					var_1_44 = var_1_8;
				}
			}
		}
	}


	// From: Req33Batch168Amount500
	if (var_1_88 > var_1_80) {
		var_1_84 = (max (((100 - 2) + (min (var_1_60 , var_1_9))) , (var_1_85 - (max (var_1_31 , var_1_46)))));
	} else {
		var_1_84 = (var_1_30 + var_1_46);
	}


	// From: Req5Batch168Amount500
	if (var_1_84 == var_1_6) {
		if ((-16 & var_1_15) < (var_1_97 / (max (var_1_5 , var_1_10)))) {
			if (var_1_83 || (var_1_96 > var_1_13)) {
				var_1_19 = (var_1_20 + (max (var_1_21 , (max (var_1_22 , var_1_23)))));
			}
		}
	} else {
		var_1_19 = var_1_22;
	}


	// From: Req24Batch168Amount500
	signed long int stepLocal_24 = 5;
	unsigned char stepLocal_23 = var_1_87;
	unsigned long int stepLocal_22 = var_1_18;
	if (stepLocal_24 <= var_1_56) {
		if (((var_1_7 >= var_1_45) || (var_1_61 < var_1_21)) && stepLocal_23) {
			var_1_68 = (var_1_8 - 8);
		}
	} else {
		if (var_1_25 > (abs (var_1_19))) {
			var_1_68 = (min (var_1_46 , var_1_60));
		} else {
			if (stepLocal_22 > (var_1_9 / var_1_35)) {
				var_1_68 = ((var_1_30 + var_1_60) - (max ((abs (var_1_8)) , (var_1_46 + var_1_9))));
			}
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -128);
	assume_abort_if_not(var_1_5 <= 127);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= 62);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 255);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 3221225470);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 1073741823);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 1);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 1);
	var_1_60 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_60 >= 1);
	assume_abort_if_not(var_1_60 <= 31);
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 2147483646);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= -461168.6018427383000e+13F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 4611686.018427383000e+12F && var_1_70 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= -922337.2036854776000e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854776000e+12F && var_1_73 >= 1.0e-20F ));
	assume_abort_if_not(var_1_73 != 0.0F);
	var_1_74 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 32767);
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= -922337.2036854776000e+13F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 9223372.036854776000e+12F && var_1_79 >= 1.0e-20F ));
	assume_abort_if_not(var_1_79 != 0.0F);
	var_1_80 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_80 >= 16383);
	assume_abort_if_not(var_1_80 <= 32767);
	var_1_81 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_81 >= 32767);
	assume_abort_if_not(var_1_81 <= 65534);
	var_1_82 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_82 >= 49150);
	assume_abort_if_not(var_1_82 <= 65534);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 127);
	assume_abort_if_not(var_1_85 <= 254);
	var_1_90 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_90 >= 8191);
	assume_abort_if_not(var_1_90 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_104 = var_1_104;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((var_1_105 <= var_1_55) ? (((-1 / var_1_5) < var_1_18) ? (var_1_1 == ((signed char) (max ((abs (abs (-1))) , (max (var_1_6 , var_1_7)))))) : (var_1_1 == ((signed char) ((var_1_8 - 2) - (var_1_9 + 10))))) : (((var_1_10 - (max (var_1_8 , 32))) != var_1_105) ? ((50 <= (min (var_1_105 , var_1_5))) ? (var_1_1 == ((signed char) (max (2 , (var_1_9 + var_1_12))))) : ((var_1_7 != var_1_105) ? (var_1_1 == ((signed char) (var_1_9 + var_1_13))) : ((var_1_8 > (var_1_13 * (var_1_9 << var_1_6))) ? (var_1_1 == ((signed char) var_1_13)) : (var_1_1 == ((signed char) var_1_6))))) : (var_1_1 == ((signed char) var_1_7)))) && ((var_1_96 > var_1_7) ? (var_1_14 == ((unsigned short int) (var_1_15 - var_1_8))) : 1)) && ((var_1_77 || (var_1_15 > var_1_9)) ? (var_1_16 == ((signed char) (var_1_8 - var_1_9))) : (var_1_16 == ((signed char) (var_1_9 - var_1_8))))) && (var_1_18 == ((unsigned long int) (min (var_1_15 , (var_1_71 + (abs (var_1_8)))))))) && ((var_1_84 == var_1_6) ? (((-16 & var_1_15) < (var_1_97 / (max (var_1_5 , var_1_10)))) ? ((var_1_83 || (var_1_96 > var_1_13)) ? (var_1_19 == ((float) (var_1_20 + (max (var_1_21 , (max (var_1_22 , var_1_23))))))) : 1) : 1) : (var_1_19 == ((float) var_1_22)))) && ((-5 > (var_1_6 * var_1_97)) ? (var_1_24 == ((double) (var_1_25 - ((abs (var_1_21)) + (var_1_26 + 49.6))))) : (((var_1_100 * (var_1_26 - var_1_25)) > var_1_22) ? (((var_1_76 + var_1_6) >= var_1_97) ? (var_1_24 == ((double) 16.5)) : (var_1_24 == ((double) ((var_1_26 + var_1_27) + var_1_21)))) : (var_1_24 == ((double) ((max (var_1_26 , 31.5)) - (max ((min (var_1_25 , 8.625)) , var_1_28)))))))) && (((abs (var_1_10)) < (var_1_8 - var_1_32)) ? ((var_1_15 >= var_1_96) ? (var_1_29 == ((signed char) (var_1_9 - (var_1_30 + var_1_31)))) : (var_1_29 == ((signed char) (var_1_9 + (var_1_31 - 4))))) : 1)) && ((var_1_104 && (var_1_57 || var_1_49)) ? (var_1_32 == ((unsigned long int) ((var_1_35 - var_1_8) - var_1_10))) : 1)) && ((var_1_5 != var_1_30) ? ((var_1_15 < var_1_86) ? (var_1_36 == ((unsigned long int) ((max (var_1_37 , var_1_30)) + var_1_10))) : (var_1_36 == ((unsigned long int) (var_1_35 - 500u)))) : (var_1_36 == ((unsigned long int) (min (((min (var_1_35 , 3214920495u)) - 4u) , (var_1_38 - var_1_15))))))) && (var_1_104 ? (var_1_39 == ((signed short int) (min ((max ((-4 + var_1_94) , var_1_12)) , var_1_10)))) : 1)) && ((var_1_18 > var_1_30) ? ((var_1_86 > var_1_12) ? (var_1_40 == ((unsigned char) ((var_1_41 || var_1_42) || var_1_43))) : 1) : (var_1_40 == ((unsigned char) (! (var_1_41 && var_1_43)))))) && (((var_1_26 / 64.4f) <= var_1_20) ? ((var_1_7 < -4) ? (var_1_44 == ((signed long int) ((abs (var_1_13)) + (min (var_1_88 , (var_1_30 - var_1_45)))))) : (var_1_44 == ((signed long int) ((var_1_8 + (abs (var_1_9))) + var_1_45)))) : (var_1_43 ? (((var_1_9 << (var_1_46 - var_1_47)) != var_1_36) ? (var_1_77 ? (var_1_44 == ((signed long int) ((min (var_1_7 , var_1_10)) + var_1_12))) : 1) : 1) : ((! ((var_1_65 | var_1_76) > var_1_86)) ? (var_1_42 ? (var_1_44 == ((signed long int) var_1_8)) : 1) : 1)))) && (((var_1_41 || (! var_1_42)) && var_1_87) ? (var_1_48 == ((double) (min (var_1_20 , (max ((min (var_1_25 , var_1_26)) , var_1_23)))))) : ((var_1_43 && var_1_42) ? (var_1_48 == ((double) 4.8)) : (var_1_48 == ((double) var_1_23))))) && ((var_1_45 == last_1_var_1_32) ? (var_1_49 == ((unsigned char) ((var_1_43 && (var_1_42 && var_1_41)) || (var_1_51 || var_1_52)))) : ((last_1_var_1_48 > last_1_var_1_58) ? (var_1_49 == ((unsigned char) (var_1_53 && (var_1_43 || var_1_54)))) : (var_1_49 == ((unsigned char) (var_1_53 && var_1_54)))))) && (((~ (var_1_31 - var_1_30)) > var_1_91) ? (var_1_55 == ((signed long int) ((var_1_15 - (max (var_1_30 , 32))) + -25))) : 1)) && (var_1_56 == ((unsigned char) (var_1_47 + var_1_46)))) && (((var_1_96 + (var_1_45 - var_1_46)) <= var_1_55) ? (var_1_57 == ((unsigned char) (var_1_53 && var_1_54))) : (var_1_57 == ((unsigned char) (! ((var_1_27 == var_1_26) || (var_1_53 && var_1_54))))))) && (last_1_var_1_57 ? (var_1_58 == ((double) (var_1_22 + var_1_21))) : (var_1_58 == ((double) (min ((var_1_25 - (256.4 + var_1_26)) , var_1_22)))))) && ((var_1_46 < ((min (var_1_55 , var_1_36)) >> var_1_60)) ? ((((max (var_1_99 , var_1_45)) * (64 << var_1_78)) < 64) ? ((var_1_21 <= var_1_20) ? (var_1_59 == ((unsigned char) (((var_1_35 & 128) <= var_1_15) && var_1_41))) : (var_1_59 == ((unsigned char) ((var_1_26 < var_1_58) || var_1_53)))) : 1) : ((((var_1_30 << var_1_55) * var_1_96) != var_1_9) ? (var_1_59 == ((unsigned char) (var_1_41 || (var_1_53 && var_1_51)))) : 1))) && ((var_1_105 > var_1_71) ? (((var_1_57 || var_1_52) && var_1_102) ? (var_1_61 == ((float) ((min (var_1_20 , 0.4f)) + var_1_22))) : (var_1_61 == ((float) (abs (max (var_1_27 , var_1_25)))))) : (var_1_61 == ((float) ((abs (-0.4f + var_1_21)) - var_1_25))))) && ((var_1_77 && var_1_52) ? (var_1_63 == ((unsigned short int) (min ((4 + var_1_30) , var_1_8)))) : 1)) && (var_1_52 ? (var_1_64 == ((signed short int) (abs (var_1_76)))) : (var_1_64 == ((signed short int) (var_1_46 + var_1_47))))) && ((last_1_var_1_87 && var_1_53) ? ((var_1_51 && (var_1_8 <= (abs (var_1_9)))) ? ((((min (200 , var_1_30)) - 64) <= last_1_var_1_18) ? (var_1_65 == ((signed long int) var_1_35)) : ((last_1_var_1_97 < var_1_60) ? (var_1_65 == ((signed long int) ((min (last_1_var_1_97 , (last_1_var_1_88 + var_1_31))) + (var_1_12 + var_1_30)))) : (var_1_65 == ((signed long int) (32 - var_1_67))))) : (var_1_65 == ((signed long int) (last_1_var_1_88 + (var_1_15 - last_1_var_1_18))))) : (var_1_65 == ((signed long int) (max ((min (last_1_var_1_72 , last_1_var_1_91)) , var_1_5)))))) && ((5 <= var_1_56) ? ((((var_1_7 >= var_1_45) || (var_1_61 < var_1_21)) && var_1_87) ? (var_1_68 == ((signed char) (var_1_8 - 8))) : 1) : ((var_1_25 > (abs (var_1_19))) ? (var_1_68 == ((signed char) (min (var_1_46 , var_1_60)))) : ((var_1_18 > (var_1_9 / var_1_35)) ? (var_1_68 == ((signed char) ((var_1_30 + var_1_60) - (max ((abs (var_1_8)) , (var_1_46 + var_1_9)))))) : 1)))) && ((var_1_102 && var_1_59) ? (var_1_69 == ((double) (9.99999999999975E12 + (max ((min (var_1_26 , var_1_22)) , var_1_70))))) : ((var_1_42 || var_1_43) ? (var_1_69 == ((double) var_1_26)) : ((var_1_31 <= (var_1_47 * var_1_86)) ? (var_1_69 == ((double) (abs (max (var_1_27 , var_1_22))))) : (var_1_69 == ((double) ((abs (var_1_21 + var_1_27)) - var_1_25))))))) && (var_1_71 == ((unsigned short int) (abs (abs (var_1_15)))))) && (((var_1_58 / var_1_73) == var_1_24) ? (var_1_72 == ((unsigned short int) (16 + var_1_74))) : (var_1_72 == ((unsigned short int) (var_1_15 - var_1_10))))) && ((var_1_28 == (max (var_1_22 , var_1_48))) ? (var_1_75 == ((float) (var_1_22 + var_1_21))) : (var_1_75 == ((float) (min (var_1_25 , var_1_27)))))) && (var_1_51 ? (var_1_76 == ((unsigned long int) (var_1_35 - (1520566709u - var_1_45)))) : (var_1_76 == ((unsigned long int) var_1_38)))) && ((5 > ((var_1_67 ^ var_1_71) / var_1_15)) ? (var_1_77 == ((unsigned char) (var_1_40 || (var_1_41 || var_1_53)))) : 1)) && (var_1_41 ? (((min (var_1_21 , var_1_27)) > var_1_20) ? (var_1_78 == ((unsigned short int) (var_1_46 + last_1_var_1_78))) : (((var_1_21 / var_1_73) > (var_1_48 / var_1_79)) ? (var_1_78 == ((unsigned short int) ((var_1_80 - var_1_60) + last_1_var_1_78))) : (var_1_78 == ((unsigned short int) ((min ((abs (var_1_15)) , var_1_81)) - var_1_31))))) : (var_1_78 == ((unsigned short int) ((min ((var_1_82 - var_1_10) , (max (var_1_15 , var_1_81)))) - (var_1_80 - var_1_9)))))) && ((var_1_49 || (var_1_21 <= var_1_27)) ? (var_1_83 == ((unsigned char) ((var_1_49 || var_1_102) && var_1_43))) : 1)) && ((var_1_88 > var_1_80) ? (var_1_84 == ((unsigned char) (max (((100 - 2) + (min (var_1_60 , var_1_9))) , (var_1_85 - (max (var_1_31 , var_1_46))))))) : (var_1_84 == ((unsigned char) (var_1_30 + var_1_46))))) && (((var_1_10 < var_1_15) || var_1_43) ? (var_1_86 == ((unsigned long int) (var_1_80 + var_1_9))) : 1)) && (((abs (var_1_13)) >= var_1_55) ? (((var_1_92 < var_1_67) || var_1_53) ? (var_1_87 == ((unsigned char) (((! var_1_51) && (var_1_53 && var_1_54)) && (! var_1_42)))) : ((var_1_49 || var_1_40) ? (var_1_87 == ((unsigned char) ((! var_1_40) && var_1_52))) : (var_1_87 == ((unsigned char) (var_1_43 || var_1_52))))) : (var_1_87 == ((unsigned char) ((! var_1_54) || var_1_41))))) && (var_1_77 ? (var_1_88 == ((signed short int) ((max (10 , var_1_60)) - (var_1_10 + var_1_46)))) : ((var_1_92 == 5u) ? ((var_1_65 > ((64 * 16) / (min (var_1_5 , var_1_15)))) ? ((var_1_81 > var_1_63) ? (var_1_88 == ((signed short int) -128)) : (((var_1_58 > (var_1_69 / var_1_79)) || var_1_49) ? (var_1_88 == ((signed short int) (var_1_13 + (var_1_31 - (var_1_90 - var_1_10))))) : (var_1_88 == ((signed short int) (16 + var_1_18))))) : (((var_1_80 - var_1_74) >= var_1_76) ? (var_1_88 == ((signed short int) var_1_31)) : (var_1_88 == ((signed short int) var_1_6)))) : (var_1_88 == ((signed short int) var_1_12))))) && (var_1_91 == ((unsigned short int) var_1_31))) && (var_1_92 == ((unsigned long int) var_1_74))) && (var_1_93 == ((float) var_1_26))) && (var_1_87 ? (var_1_94 == ((unsigned char) var_1_47)) : (var_1_94 == ((unsigned char) var_1_46)))) && (var_1_59 ? (var_1_95 == ((signed short int) var_1_31)) : 1)) && (last_1_var_1_102 ? (var_1_96 == ((unsigned long int) last_1_var_1_65)) : (var_1_96 == ((unsigned long int) last_1_var_1_96)))) && (var_1_97 == ((unsigned long int) var_1_96))) && (var_1_98 == ((float) 32.4f))) && (var_1_49 ? (var_1_99 == ((unsigned char) var_1_85)) : (var_1_99 == ((unsigned char) 32)))) && (var_1_57 ? (var_1_100 == ((float) 0.7f)) : (var_1_100 == ((float) var_1_70)))) && (last_1_var_1_104 ? (var_1_102 == ((unsigned char) var_1_43)) : (var_1_102 == ((unsigned char) var_1_53)))) && (var_1_103 == ((signed short int) (min (var_1_86 , var_1_31))))) && (var_1_87 ? ((! var_1_83) ? (var_1_104 == ((unsigned char) (! var_1_54))) : (((var_1_35 - 32u) <= var_1_92) ? (var_1_104 == ((unsigned char) (last_1_var_1_104 || var_1_54))) : 1)) : 1)) && (var_1_105 == ((unsigned long int) var_1_60))) && (var_1_106 == ((float) var_1_23))
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
