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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch90Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 0.6;
double var_1_5 = 49.1;
double var_1_6 = 1.25;
double var_1_7 = 99.5;
double var_1_8 = 63.4;
unsigned short int var_1_9 = 64;
unsigned short int var_1_12 = 4;
unsigned short int var_1_14 = 48284;
float var_1_16 = 255.75;
float var_1_17 = 5.25;
float var_1_18 = 16.5;
float var_1_19 = 99.5;
float var_1_20 = 2.5;
signed char var_1_21 = 64;
signed char var_1_24 = -5;
signed char var_1_25 = 50;
signed char var_1_26 = -10;
signed char var_1_27 = 10;
signed char var_1_28 = -1;
signed char var_1_29 = 1;
signed long int var_1_30 = -2;
double var_1_33 = 49.35;
unsigned long int var_1_34 = 50;
signed char var_1_35 = 0;
unsigned short int var_1_36 = 38001;
unsigned short int var_1_37 = 200;
unsigned short int var_1_38 = 32;
float var_1_39 = 4.25;
double var_1_40 = 4.775;
double var_1_41 = 3.4;
double var_1_42 = 0.0;
unsigned short int var_1_43 = 128;
signed char var_1_44 = -25;
signed char var_1_45 = 5;
double var_1_46 = 24.75;
unsigned short int var_1_47 = 25557;
unsigned short int var_1_48 = 10000;
unsigned short int var_1_49 = 55360;
unsigned short int var_1_50 = 8;
signed char var_1_51 = 64;
signed char var_1_52 = 50;
signed char var_1_53 = 64;
signed char var_1_54 = 8;
unsigned long int var_1_55 = 256;
unsigned long int var_1_56 = 2917297254;
unsigned char var_1_57 = 10;
unsigned char var_1_59 = 32;
unsigned char var_1_60 = 64;
unsigned char var_1_61 = 100;
signed short int var_1_62 = 4;
double var_1_63 = 31.5;
double var_1_64 = 128.6;
double var_1_65 = 0.0;
double var_1_66 = 16.125;
signed long int var_1_67 = 1;
signed long int var_1_69 = -2;
unsigned short int var_1_70 = 1;
unsigned short int var_1_71 = 24228;
unsigned char var_1_72 = 4;
signed char var_1_73 = -10;
signed char var_1_74 = 5;
unsigned char var_1_75 = 4;
unsigned char var_1_76 = 100;
unsigned char var_1_77 = 1;
unsigned char var_1_78 = 128;
unsigned char var_1_79 = 0;
unsigned char var_1_80 = 0;
unsigned char var_1_81 = 0;
unsigned char var_1_82 = 0;
unsigned char var_1_84 = 1;
unsigned long int var_1_85 = 8;
signed short int var_1_86 = -100;
unsigned char var_1_87 = 1;
unsigned char var_1_88 = 0;
float var_1_89 = 5.5;
float var_1_91 = 9.25;
signed short int var_1_92 = 10;
unsigned char var_1_94 = 64;
unsigned char var_1_95 = 200;
unsigned char var_1_96 = 128;
signed char var_1_97 = -2;
unsigned char var_1_98 = 0;
unsigned char var_1_99 = 1;
unsigned short int var_1_101 = 10;
unsigned short int var_1_102 = 2;
double var_1_103 = 2.1;
signed short int var_1_104 = -5;
unsigned char var_1_105 = 0;
float var_1_106 = 10.75;
unsigned long int var_1_107 = 0;
unsigned char var_1_109 = 5;
float var_1_110 = 10.4;
signed short int var_1_111 = 100;
signed short int var_1_112 = 32;
double var_1_114 = 1.875;
unsigned char var_1_115 = 10;
unsigned char var_1_116 = 1;
unsigned char var_1_117 = 0;
float var_1_118 = 63.25;
unsigned short int var_1_119 = 256;
double var_1_120 = 4.25;
float var_1_121 = 25.75;
double var_1_122 = 255.5;
double var_1_123 = 199.5;
unsigned short int var_1_124 = 4;
signed long int var_1_125 = 256;
signed long int var_1_126 = -10;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 0.6;
signed char last_1_var_1_21 = 64;
signed char last_1_var_1_35 = 0;
unsigned short int last_1_var_1_50 = 8;
signed char last_1_var_1_52 = 50;
unsigned long int last_1_var_1_55 = 256;
unsigned short int last_1_var_1_70 = 1;
signed char last_1_var_1_73 = -10;
unsigned char last_1_var_1_75 = 4;
unsigned char last_1_var_1_79 = 0;
unsigned char last_1_var_1_87 = 1;
float last_1_var_1_89 = 5.5;
unsigned char last_1_var_1_98 = 0;
unsigned short int last_1_var_1_102 = 2;
unsigned char last_1_var_1_109 = 5;
double last_1_var_1_114 = 1.875;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req20Batch90Amount500
	signed long int stepLocal_14 = last_1_var_1_102;
	if ((- var_1_7) > (var_1_39 - 100.2)) {
		if (stepLocal_14 >= var_1_61) {
			var_1_66 = var_1_19;
		}
	}


	// From: Req27Batch90Amount500
	if (last_1_var_1_75 <= last_1_var_1_73) {
		if ((last_1_var_1_1 > var_1_5) || last_1_var_1_87) {
			if (last_1_var_1_87) {
				var_1_75 = (abs (5));
			} else {
				var_1_75 = ((var_1_53 + (var_1_76 - var_1_77)) - var_1_61);
			}
		}
	} else {
		var_1_75 = (max (var_1_53 , (var_1_78 - var_1_77)));
	}


	// From: Req16Batch90Amount500
	signed long int stepLocal_12 = last_1_var_1_50;
	if ((max (last_1_var_1_21 , var_1_26)) >= stepLocal_12) {
		var_1_57 = (max ((max (var_1_54 , var_1_59)) , (var_1_51 + var_1_29)));
	} else {
		var_1_57 = ((64 + (min (var_1_60 , var_1_61))) - (var_1_53 - var_1_54));
	}


	// From: Req37Batch90Amount500
	signed long int stepLocal_25 = abs (last_1_var_1_35);
	unsigned short int stepLocal_24 = var_1_47;
	signed long int stepLocal_23 = last_1_var_1_35;
	if (! (last_1_var_1_50 <= last_1_var_1_70)) {
		if (var_1_77 <= stepLocal_24) {
			if (var_1_77 <= stepLocal_25) {
				if ((var_1_71 * last_1_var_1_109) != stepLocal_23) {
					if (var_1_81) {
						var_1_98 = (var_1_88 && (var_1_84 && var_1_99));
					} else {
						var_1_98 = (! (var_1_99 && var_1_84));
					}
				} else {
					var_1_98 = (! var_1_88);
				}
			} else {
				var_1_98 = ((var_1_88 && var_1_84) && var_1_99);
			}
		} else {
			var_1_98 = (((4 <= last_1_var_1_55) || var_1_99) && (var_1_84 && var_1_88));
		}
	}


	// From: Req35Batch90Amount500
	unsigned char stepLocal_21 = last_1_var_1_98;
	if (stepLocal_21 && var_1_80) {
		if (! last_1_var_1_79) {
			var_1_94 = (var_1_78 - ((min (var_1_61 , var_1_76)) - var_1_54));
		}
	} else {
		var_1_94 = ((min (var_1_78 , (min (var_1_95 , var_1_96)))) - (max (var_1_29 , var_1_77)));
	}


	// From: Req31Batch90Amount500
	if (var_1_65 < (min (var_1_39 , (last_1_var_1_114 / var_1_46)))) {
		if ((min (last_1_var_1_114 , last_1_var_1_89)) >= var_1_65) {
			var_1_87 = (! var_1_82);
		}
	} else {
		var_1_87 = (var_1_84 && var_1_88);
	}


	// From: Req45Batch90Amount500
	if (var_1_87) {
		var_1_109 = var_1_51;
	}


	// From: Req51Batch90Amount500
	if (var_1_87) {
		var_1_116 = 0;
	} else {
		var_1_116 = var_1_117;
	}


	// From: Req56Batch90Amount500
	if (var_1_87) {
		var_1_122 = var_1_123;
	} else {
		var_1_122 = var_1_19;
	}


	// From: Req26Batch90Amount500
	if ((- var_1_8) <= var_1_122) {
		var_1_74 = ((var_1_26 + var_1_27) + var_1_24);
	} else {
		var_1_74 = (max (((abs (var_1_54)) - var_1_29) , (var_1_28 - var_1_53)));
	}


	// From: Req38Batch90Amount500
	if (var_1_82) {
		var_1_101 = (max (var_1_94 , var_1_53));
	}


	// From: Req41Batch90Amount500
	if (64.5 < (abs (- var_1_122))) {
		var_1_104 = ((max (var_1_26 , var_1_45)) + (max (var_1_77 , var_1_53)));
	} else {
		var_1_104 = 5;
	}


	// From: Req17Batch90Amount500
	if (var_1_7 <= var_1_19) {
		var_1_62 = ((var_1_48 + (abs (var_1_29))) - var_1_60);
	}


	// From: Req24Batch90Amount500
	var_1_72 = var_1_53;


	// From: Req40Batch90Amount500
	var_1_103 = (var_1_41 - var_1_42);


	// From: Req42Batch90Amount500
	var_1_105 = var_1_99;


	// From: Req43Batch90Amount500
	if (var_1_82) {
		var_1_106 = var_1_65;
	}


	// From: Req46Batch90Amount500
	if (var_1_99) {
		var_1_110 = 16.75f;
	} else {
		var_1_110 = var_1_17;
	}


	// From: Req47Batch90Amount500
	var_1_111 = 1;


	// From: Req49Batch90Amount500
	var_1_114 = var_1_41;


	// From: Req50Batch90Amount500
	var_1_115 = var_1_51;


	// From: Req52Batch90Amount500
	var_1_118 = var_1_42;


	// From: Req53Batch90Amount500
	if (var_1_105) {
		var_1_119 = var_1_48;
	} else {
		var_1_119 = var_1_95;
	}


	// From: Req54Batch90Amount500
	var_1_120 = 256.9;


	// From: Req55Batch90Amount500
	if (var_1_81) {
		var_1_121 = var_1_17;
	}


	// From: Req58Batch90Amount500
	if (var_1_82) {
		var_1_125 = (var_1_109 - var_1_109);
	}


	// From: Req59Batch90Amount500
	if (var_1_116) {
		var_1_126 = (((1000000000 - var_1_75) + var_1_77) - 5);
	}


	// From: Req5Batch90Amount500
	unsigned char stepLocal_2 = var_1_98;
	unsigned long int stepLocal_1 = 5u;
	if (stepLocal_1 <= var_1_57) {
		if (stepLocal_2 && (var_1_109 <= var_1_109)) {
			var_1_21 = ((abs (min (var_1_24 , var_1_25))) + (var_1_26 + var_1_27));
		} else {
			var_1_21 = (var_1_28 - var_1_29);
		}
	} else {
		var_1_21 = (-5 + var_1_25);
	}


	// From: Req4Batch90Amount500
	unsigned char stepLocal_0 = var_1_94;
	if (var_1_5 >= 1.75) {
		if (stepLocal_0 < var_1_115) {
			var_1_16 = ((var_1_17 + var_1_18) - (abs (var_1_7)));
		} else {
			var_1_16 = (var_1_18 - (var_1_17 + (var_1_19 + var_1_20)));
		}
	}


	// From: Req15Batch90Amount500
	signed long int stepLocal_11 = 10 - (var_1_54 + 200);
	unsigned char stepLocal_10 = var_1_72;
	signed char stepLocal_9 = var_1_53;
	if ((min (var_1_72 , var_1_51)) == stepLocal_9) {
		if (var_1_87) {
			if (stepLocal_11 >= var_1_94) {
				var_1_55 = var_1_37;
			} else {
				var_1_55 = var_1_37;
			}
		}
	} else {
		if (var_1_19 != ((min (var_1_17 , var_1_20)) - 8.875f)) {
			if (var_1_51 != stepLocal_10) {
				if (var_1_87) {
					var_1_55 = (var_1_48 + (abs (min (var_1_51 , var_1_94))));
				}
			}
		} else {
			var_1_55 = (var_1_56 - var_1_72);
		}
	}


	// From: Req48Batch90Amount500
	var_1_112 = var_1_74;


	// From: Req18Batch90Amount500
	if ((max (var_1_56 , var_1_60)) > var_1_75) {
		if ((var_1_36 - var_1_51) > var_1_119) {
			var_1_63 = (max (((var_1_20 + var_1_19) + (max (var_1_7 , var_1_18))) , var_1_41));
		}
	} else {
		if (var_1_24 > var_1_94) {
			if (var_1_105 || (var_1_48 == var_1_53)) {
				if (var_1_94 <= var_1_119) {
					if (var_1_87 && var_1_105) {
						var_1_63 = 128.4;
					} else {
						var_1_63 = (var_1_7 + var_1_8);
					}
				}
			}
		} else {
			var_1_63 = (abs (var_1_19));
		}
	}


	// From: Req2Batch90Amount500
	var_1_9 = (abs (max (var_1_109 , var_1_115)));


	// From: Req8Batch90Amount500
	var_1_34 = var_1_72;


	// From: Req11Batch90Amount500
	if (var_1_19 <= var_1_110) {
		if (var_1_63 < 1000000.2f) {
			var_1_40 = ((max (var_1_41 , var_1_20)) - (var_1_42 - var_1_18));
		}
	}


	// From: Req14Batch90Amount500
	signed long int stepLocal_8 = ~ var_1_36;
	if (((var_1_72 % var_1_44) * (var_1_49 + last_1_var_1_52)) == stepLocal_8) {
		var_1_52 = (var_1_28 - (var_1_53 - var_1_54));
	}


	// From: Req36Batch90Amount500
	unsigned char stepLocal_22 = var_1_78;
	if ((max ((abs (var_1_37)) , var_1_115)) > stepLocal_22) {
		var_1_97 = (abs (var_1_26));
	}


	// From: Req44Batch90Amount500
	if (var_1_105) {
		var_1_107 = var_1_115;
	} else {
		var_1_107 = var_1_56;
	}


	// From: Req57Batch90Amount500
	if (var_1_105) {
		var_1_124 = var_1_14;
	} else {
		var_1_124 = var_1_107;
	}


	// From: Req19Batch90Amount500
	signed short int stepLocal_13 = var_1_112;
	if (stepLocal_13 > var_1_126) {
		var_1_64 = (var_1_20 - ((max (var_1_42 , var_1_65)) - var_1_19));
	} else {
		var_1_64 = (max (var_1_5 , (var_1_18 + (var_1_20 + var_1_19))));
	}


	// From: Req25Batch90Amount500
	unsigned short int stepLocal_17 = var_1_49;
	unsigned char stepLocal_16 = var_1_98;
	signed long int stepLocal_15 = var_1_26 / 64;
	if (stepLocal_16 && var_1_87) {
		var_1_73 = (var_1_29 - var_1_54);
	} else {
		if ((max (-8 , var_1_34)) < stepLocal_15) {
			if (stepLocal_17 < var_1_94) {
				var_1_73 = (max (var_1_28 , -50));
			} else {
				var_1_73 = (var_1_53 - 5);
			}
		} else {
			var_1_73 = (var_1_54 + var_1_27);
		}
	}


	// From: Req10Batch90Amount500
	if ((var_1_39 - var_1_18) < (- (var_1_16 * var_1_17))) {
		var_1_38 = (max (var_1_37 , (var_1_14 - var_1_29)));
	} else {
		var_1_38 = (max (var_1_14 , var_1_57));
	}


	// From: Req23Batch90Amount500
	if ((var_1_37 + var_1_62) >= var_1_104) {
		var_1_70 = ((var_1_47 - var_1_29) + (var_1_71 - (var_1_54 + var_1_38)));
	} else {
		var_1_70 = ((min ((var_1_71 - var_1_29) , var_1_51)) + var_1_37);
	}


	// From: Req28Batch90Amount500
	unsigned long int stepLocal_18 = max (var_1_34 , var_1_76);
	if (stepLocal_18 != var_1_78) {
		if (var_1_87) {
			var_1_79 = var_1_80;
		} else {
			var_1_79 = ((var_1_80 || var_1_81) || (! (! var_1_82)));
		}
	} else {
		var_1_79 = ((0 >= (var_1_72 ^ 8)) || var_1_84);
	}


	// From: Req7Batch90Amount500
	signed char stepLocal_4 = var_1_27;
	unsigned char stepLocal_3 = var_1_79;
	if ((var_1_62 * 32) < stepLocal_4) {
		if ((var_1_8 <= var_1_5) && stepLocal_3) {
			var_1_33 = ((max (var_1_20 , (abs (var_1_17)))) + var_1_7);
		} else {
			var_1_33 = (abs (var_1_6));
		}
	}


	// From: Req12Batch90Amount500
	if (var_1_97 > ((var_1_29 / 64) / (max (var_1_44 , var_1_45)))) {
		if ((var_1_39 * var_1_7) < var_1_20) {
			if (var_1_17 > (- (var_1_121 * var_1_8))) {
				var_1_43 = var_1_14;
			} else {
				var_1_43 = (var_1_14 - var_1_37);
			}
		} else {
			if ((var_1_33 / (min (var_1_42 , var_1_46))) == (64.5 + (var_1_39 - var_1_41))) {
				var_1_43 = (var_1_14 - var_1_29);
			} else {
				var_1_43 = (var_1_14 - ((var_1_47 - var_1_29) - (var_1_48 - 10)));
			}
		}
	} else {
		var_1_43 = ((var_1_49 - var_1_48) - var_1_47);
	}


	// From: Req21Batch90Amount500
	if (var_1_79) {
		var_1_67 = (var_1_27 + var_1_54);
	}


	// From: Req30Batch90Amount500
	if (var_1_87) {
		var_1_86 = (var_1_67 + (max (var_1_78 , var_1_51)));
	} else {
		var_1_86 = 100;
	}


	// From: Req1Batch90Amount500
	if ((- var_1_64) >= var_1_16) {
		if (var_1_16 < ((var_1_64 * var_1_121) * 0.5f)) {
			var_1_1 = (max (var_1_5 , ((max (var_1_6 , var_1_7)) + var_1_8)));
		} else {
			var_1_1 = var_1_8;
		}
	}


	// From: Req13Batch90Amount500
	signed long int stepLocal_7 = max (var_1_28 , (var_1_29 - var_1_51));
	if (stepLocal_7 >= (var_1_36 - (var_1_43 + var_1_75))) {
		var_1_50 = (var_1_14 - var_1_29);
	}


	// From: Req6Batch90Amount500
	if (var_1_24 > var_1_107) {
		var_1_30 = (min (var_1_107 , var_1_26));
	} else {
		if (var_1_116 || (var_1_79 || (var_1_107 > var_1_109))) {
			var_1_30 = (max ((min (var_1_27 , var_1_26)) , var_1_57));
		} else {
			var_1_30 = (var_1_94 + var_1_43);
		}
	}


	// From: Req34Batch90Amount500
	signed char stepLocal_20 = var_1_54;
	if (stepLocal_20 <= ((max (var_1_51 , var_1_61)) - var_1_77)) {
		var_1_92 = var_1_29;
	} else {
		var_1_92 = (((max (var_1_73 , var_1_28)) + (abs (var_1_26))) + var_1_30);
	}


	// From: Req3Batch90Amount500
	if (var_1_67 >= var_1_115) {
		var_1_12 = (min ((max ((min (var_1_115 , var_1_94)) , 1)) , (abs (var_1_94))));
	} else {
		var_1_12 = (var_1_14 - var_1_57);
	}


	// From: Req33Batch90Amount500
	unsigned long int stepLocal_19 = var_1_107 % var_1_61;
	if (stepLocal_19 < var_1_30) {
		var_1_91 = (var_1_18 - var_1_17);
	}


	// From: Req39Batch90Amount500
	if (var_1_115 <= (abs (var_1_112 * var_1_56))) {
		if ((max ((max (var_1_66 , var_1_5)) , var_1_63)) > (var_1_19 + var_1_65)) {
			var_1_102 = (min (var_1_77 , (51824 - var_1_61)));
		}
	} else {
		if (var_1_12 >= var_1_94) {
			var_1_102 = (min ((var_1_49 - var_1_54) , var_1_48));
		} else {
			if ((var_1_34 | var_1_60) == var_1_12) {
				var_1_102 = (var_1_14 - (var_1_60 + var_1_115));
			} else {
				if (-16 >= var_1_45) {
					var_1_102 = (min (var_1_115 , (min (var_1_14 , var_1_78))));
				}
			}
		}
	}


	// From: Req9Batch90Amount500
	unsigned char stepLocal_6 = var_1_98;
	signed long int stepLocal_5 = var_1_14 % (var_1_36 - var_1_37);
	if (stepLocal_6 || var_1_98) {
		if (var_1_5 >= var_1_33) {
			var_1_35 = (max (var_1_24 , var_1_25));
		}
	} else {
		if (var_1_92 > stepLocal_5) {
			var_1_35 = (max (var_1_24 , var_1_28));
		} else {
			var_1_35 = var_1_24;
		}
	}


	// From: Req32Batch90Amount500
	if (var_1_20 <= 10.5f) {
		if (var_1_101 < var_1_37) {
			if (var_1_91 <= var_1_66) {
				var_1_89 = var_1_42;
			} else {
				var_1_89 = (min (256.75f , (min ((max (var_1_6 , var_1_18)) , var_1_42))));
			}
		}
	}


	// From: Req22Batch90Amount500
	var_1_69 = ((max ((max (var_1_51 , var_1_102)) , var_1_57)) + var_1_38);


	// From: Req29Batch90Amount500
	if (! (var_1_27 > (min (var_1_55 , 1)))) {
		var_1_85 = (var_1_47 + var_1_57);
	} else {
		if ((var_1_76 * var_1_102) == 25u) {
			var_1_85 = (max ((var_1_56 - var_1_75) , var_1_101));
		} else {
			var_1_85 = (max (var_1_119 , (var_1_56 - (min (var_1_50 , var_1_125)))));
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854765600e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854765600e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427382800e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427382800e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427382800e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427382800e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427382800e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691390e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691390e+12F && var_1_20 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -63);
	assume_abort_if_not(var_1_24 <= 63);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -63);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -31);
	assume_abort_if_not(var_1_26 <= 32);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -31);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -1);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 32767);
	assume_abort_if_not(var_1_36 <= 65535);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 32766);
	assume_abort_if_not(var_1_37 != 32767);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 4611686.018427382800e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= -128);
	assume_abort_if_not(var_1_44 <= 127);
	assume_abort_if_not(var_1_44 != 0);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -128);
	assume_abort_if_not(var_1_45 <= 127);
	assume_abort_if_not(var_1_45 != 0);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	assume_abort_if_not(var_1_46 != 0.0F);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 24575);
	assume_abort_if_not(var_1_47 <= 32767);
	var_1_48 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_48 >= 8191);
	assume_abort_if_not(var_1_48 <= 16383);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 49150);
	assume_abort_if_not(var_1_49 <= 65534);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 127);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 63);
	assume_abort_if_not(var_1_53 <= 126);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 63);
	var_1_56 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_56 >= 2147483647);
	assume_abort_if_not(var_1_56 <= 4294967294);
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 254);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 64);
	assume_abort_if_not(var_1_60 <= 127);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 64);
	assume_abort_if_not(var_1_61 <= 127);
	var_1_65 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_65 >= 4611686.018427382800e+12F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854765600e+12F && var_1_65 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 16383);
	assume_abort_if_not(var_1_71 <= 32767);
	var_1_76 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_76 >= 95);
	assume_abort_if_not(var_1_76 <= 127);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 31);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 127);
	assume_abort_if_not(var_1_78 <= 254);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 0);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 0);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 0);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 1);
	assume_abort_if_not(var_1_84 <= 1);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 1);
	assume_abort_if_not(var_1_88 <= 1);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 127);
	assume_abort_if_not(var_1_95 <= 254);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 127);
	assume_abort_if_not(var_1_96 <= 254);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 1);
	assume_abort_if_not(var_1_99 <= 1);
	var_1_117 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_117 >= 0);
	assume_abort_if_not(var_1_117 <= 0);
	var_1_123 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_123 >= -922337.2036854765600e+13F && var_1_123 <= -1.0e-20F) || (var_1_123 <= 9223372.036854765600e+12F && var_1_123 >= 1.0e-20F ));
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_114 = var_1_114;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((- var_1_64) >= var_1_16) ? ((var_1_16 < ((var_1_64 * var_1_121) * 0.5f)) ? (var_1_1 == ((double) (max (var_1_5 , ((max (var_1_6 , var_1_7)) + var_1_8))))) : (var_1_1 == ((double) var_1_8))) : 1) && (var_1_9 == ((unsigned short int) (abs (max (var_1_109 , var_1_115)))))) && ((var_1_67 >= var_1_115) ? (var_1_12 == ((unsigned short int) (min ((max ((min (var_1_115 , var_1_94)) , 1)) , (abs (var_1_94)))))) : (var_1_12 == ((unsigned short int) (var_1_14 - var_1_57))))) && ((var_1_5 >= 1.75) ? ((var_1_94 < var_1_115) ? (var_1_16 == ((float) ((var_1_17 + var_1_18) - (abs (var_1_7))))) : (var_1_16 == ((float) (var_1_18 - (var_1_17 + (var_1_19 + var_1_20)))))) : 1)) && ((5u <= var_1_57) ? ((var_1_98 && (var_1_109 <= var_1_109)) ? (var_1_21 == ((signed char) ((abs (min (var_1_24 , var_1_25))) + (var_1_26 + var_1_27)))) : (var_1_21 == ((signed char) (var_1_28 - var_1_29)))) : (var_1_21 == ((signed char) (-5 + var_1_25))))) && ((var_1_24 > var_1_107) ? (var_1_30 == ((signed long int) (min (var_1_107 , var_1_26)))) : ((var_1_116 || (var_1_79 || (var_1_107 > var_1_109))) ? (var_1_30 == ((signed long int) (max ((min (var_1_27 , var_1_26)) , var_1_57)))) : (var_1_30 == ((signed long int) (var_1_94 + var_1_43)))))) && (((var_1_62 * 32) < var_1_27) ? (((var_1_8 <= var_1_5) && var_1_79) ? (var_1_33 == ((double) ((max (var_1_20 , (abs (var_1_17)))) + var_1_7))) : (var_1_33 == ((double) (abs (var_1_6))))) : 1)) && (var_1_34 == ((unsigned long int) var_1_72))) && ((var_1_98 || var_1_98) ? ((var_1_5 >= var_1_33) ? (var_1_35 == ((signed char) (max (var_1_24 , var_1_25)))) : 1) : ((var_1_92 > (var_1_14 % (var_1_36 - var_1_37))) ? (var_1_35 == ((signed char) (max (var_1_24 , var_1_28)))) : (var_1_35 == ((signed char) var_1_24))))) && (((var_1_39 - var_1_18) < (- (var_1_16 * var_1_17))) ? (var_1_38 == ((unsigned short int) (max (var_1_37 , (var_1_14 - var_1_29))))) : (var_1_38 == ((unsigned short int) (max (var_1_14 , var_1_57)))))) && ((var_1_19 <= var_1_110) ? ((var_1_63 < 1000000.2f) ? (var_1_40 == ((double) ((max (var_1_41 , var_1_20)) - (var_1_42 - var_1_18)))) : 1) : 1)) && ((var_1_97 > ((var_1_29 / 64) / (max (var_1_44 , var_1_45)))) ? (((var_1_39 * var_1_7) < var_1_20) ? ((var_1_17 > (- (var_1_121 * var_1_8))) ? (var_1_43 == ((unsigned short int) var_1_14)) : (var_1_43 == ((unsigned short int) (var_1_14 - var_1_37)))) : (((var_1_33 / (min (var_1_42 , var_1_46))) == (64.5 + (var_1_39 - var_1_41))) ? (var_1_43 == ((unsigned short int) (var_1_14 - var_1_29))) : (var_1_43 == ((unsigned short int) (var_1_14 - ((var_1_47 - var_1_29) - (var_1_48 - 10))))))) : (var_1_43 == ((unsigned short int) ((var_1_49 - var_1_48) - var_1_47))))) && (((max (var_1_28 , (var_1_29 - var_1_51))) >= (var_1_36 - (var_1_43 + var_1_75))) ? (var_1_50 == ((unsigned short int) (var_1_14 - var_1_29))) : 1)) && ((((var_1_72 % var_1_44) * (var_1_49 + last_1_var_1_52)) == (~ var_1_36)) ? (var_1_52 == ((signed char) (var_1_28 - (var_1_53 - var_1_54)))) : 1)) && (((min (var_1_72 , var_1_51)) == var_1_53) ? (var_1_87 ? (((10 - (var_1_54 + 200)) >= var_1_94) ? (var_1_55 == ((unsigned long int) var_1_37)) : (var_1_55 == ((unsigned long int) var_1_37))) : 1) : ((var_1_19 != ((min (var_1_17 , var_1_20)) - 8.875f)) ? ((var_1_51 != var_1_72) ? (var_1_87 ? (var_1_55 == ((unsigned long int) (var_1_48 + (abs (min (var_1_51 , var_1_94)))))) : 1) : 1) : (var_1_55 == ((unsigned long int) (var_1_56 - var_1_72)))))) && (((max (last_1_var_1_21 , var_1_26)) >= last_1_var_1_50) ? (var_1_57 == ((unsigned char) (max ((max (var_1_54 , var_1_59)) , (var_1_51 + var_1_29))))) : (var_1_57 == ((unsigned char) ((64 + (min (var_1_60 , var_1_61))) - (var_1_53 - var_1_54)))))) && ((var_1_7 <= var_1_19) ? (var_1_62 == ((signed short int) ((var_1_48 + (abs (var_1_29))) - var_1_60))) : 1)) && (((max (var_1_56 , var_1_60)) > var_1_75) ? (((var_1_36 - var_1_51) > var_1_119) ? (var_1_63 == ((double) (max (((var_1_20 + var_1_19) + (max (var_1_7 , var_1_18))) , var_1_41)))) : 1) : ((var_1_24 > var_1_94) ? ((var_1_105 || (var_1_48 == var_1_53)) ? ((var_1_94 <= var_1_119) ? ((var_1_87 && var_1_105) ? (var_1_63 == ((double) 128.4)) : (var_1_63 == ((double) (var_1_7 + var_1_8)))) : 1) : 1) : (var_1_63 == ((double) (abs (var_1_19))))))) && ((var_1_112 > var_1_126) ? (var_1_64 == ((double) (var_1_20 - ((max (var_1_42 , var_1_65)) - var_1_19)))) : (var_1_64 == ((double) (max (var_1_5 , (var_1_18 + (var_1_20 + var_1_19)))))))) && (((- var_1_7) > (var_1_39 - 100.2)) ? ((last_1_var_1_102 >= var_1_61) ? (var_1_66 == ((double) var_1_19)) : 1) : 1)) && (var_1_79 ? (var_1_67 == ((signed long int) (var_1_27 + var_1_54))) : 1)) && (var_1_69 == ((signed long int) ((max ((max (var_1_51 , var_1_102)) , var_1_57)) + var_1_38)))) && (((var_1_37 + var_1_62) >= var_1_104) ? (var_1_70 == ((unsigned short int) ((var_1_47 - var_1_29) + (var_1_71 - (var_1_54 + var_1_38))))) : (var_1_70 == ((unsigned short int) ((min ((var_1_71 - var_1_29) , var_1_51)) + var_1_37))))) && (var_1_72 == ((unsigned char) var_1_53))) && ((var_1_98 && var_1_87) ? (var_1_73 == ((signed char) (var_1_29 - var_1_54))) : (((max (-8 , var_1_34)) < (var_1_26 / 64)) ? ((var_1_49 < var_1_94) ? (var_1_73 == ((signed char) (max (var_1_28 , -50)))) : (var_1_73 == ((signed char) (var_1_53 - 5)))) : (var_1_73 == ((signed char) (var_1_54 + var_1_27)))))) && (((- var_1_8) <= var_1_122) ? (var_1_74 == ((signed char) ((var_1_26 + var_1_27) + var_1_24))) : (var_1_74 == ((signed char) (max (((abs (var_1_54)) - var_1_29) , (var_1_28 - var_1_53))))))) && ((last_1_var_1_75 <= last_1_var_1_73) ? (((last_1_var_1_1 > var_1_5) || last_1_var_1_87) ? (last_1_var_1_87 ? (var_1_75 == ((unsigned char) (abs (5)))) : (var_1_75 == ((unsigned char) ((var_1_53 + (var_1_76 - var_1_77)) - var_1_61)))) : 1) : (var_1_75 == ((unsigned char) (max (var_1_53 , (var_1_78 - var_1_77))))))) && (((max (var_1_34 , var_1_76)) != var_1_78) ? (var_1_87 ? (var_1_79 == ((unsigned char) var_1_80)) : (var_1_79 == ((unsigned char) ((var_1_80 || var_1_81) || (! (! var_1_82)))))) : (var_1_79 == ((unsigned char) ((0 >= (var_1_72 ^ 8)) || var_1_84))))) && ((! (var_1_27 > (min (var_1_55 , 1)))) ? (var_1_85 == ((unsigned long int) (var_1_47 + var_1_57))) : (((var_1_76 * var_1_102) == 25u) ? (var_1_85 == ((unsigned long int) (max ((var_1_56 - var_1_75) , var_1_101)))) : (var_1_85 == ((unsigned long int) (max (var_1_119 , (var_1_56 - (min (var_1_50 , var_1_125)))))))))) && (var_1_87 ? (var_1_86 == ((signed short int) (var_1_67 + (max (var_1_78 , var_1_51))))) : (var_1_86 == ((signed short int) 100)))) && ((var_1_65 < (min (var_1_39 , (last_1_var_1_114 / var_1_46)))) ? (((min (last_1_var_1_114 , last_1_var_1_89)) >= var_1_65) ? (var_1_87 == ((unsigned char) (! var_1_82))) : 1) : (var_1_87 == ((unsigned char) (var_1_84 && var_1_88))))) && ((var_1_20 <= 10.5f) ? ((var_1_101 < var_1_37) ? ((var_1_91 <= var_1_66) ? (var_1_89 == ((float) var_1_42)) : (var_1_89 == ((float) (min (256.75f , (min ((max (var_1_6 , var_1_18)) , var_1_42))))))) : 1) : 1)) && (((var_1_107 % var_1_61) < var_1_30) ? (var_1_91 == ((float) (var_1_18 - var_1_17))) : 1)) && ((var_1_54 <= ((max (var_1_51 , var_1_61)) - var_1_77)) ? (var_1_92 == ((signed short int) var_1_29)) : (var_1_92 == ((signed short int) (((max (var_1_73 , var_1_28)) + (abs (var_1_26))) + var_1_30))))) && ((last_1_var_1_98 && var_1_80) ? ((! last_1_var_1_79) ? (var_1_94 == ((unsigned char) (var_1_78 - ((min (var_1_61 , var_1_76)) - var_1_54)))) : 1) : (var_1_94 == ((unsigned char) ((min (var_1_78 , (min (var_1_95 , var_1_96)))) - (max (var_1_29 , var_1_77))))))) && (((max ((abs (var_1_37)) , var_1_115)) > var_1_78) ? (var_1_97 == ((signed char) (abs (var_1_26)))) : 1)) && ((! (last_1_var_1_50 <= last_1_var_1_70)) ? ((var_1_77 <= var_1_47) ? ((var_1_77 <= (abs (last_1_var_1_35))) ? (((var_1_71 * last_1_var_1_109) != last_1_var_1_35) ? (var_1_81 ? (var_1_98 == ((unsigned char) (var_1_88 && (var_1_84 && var_1_99)))) : (var_1_98 == ((unsigned char) (! (var_1_99 && var_1_84))))) : (var_1_98 == ((unsigned char) (! var_1_88)))) : (var_1_98 == ((unsigned char) ((var_1_88 && var_1_84) && var_1_99)))) : (var_1_98 == ((unsigned char) (((4 <= last_1_var_1_55) || var_1_99) && (var_1_84 && var_1_88))))) : 1)) && (var_1_82 ? (var_1_101 == ((unsigned short int) (max (var_1_94 , var_1_53)))) : 1)) && ((var_1_115 <= (abs (var_1_112 * var_1_56))) ? (((max ((max (var_1_66 , var_1_5)) , var_1_63)) > (var_1_19 + var_1_65)) ? (var_1_102 == ((unsigned short int) (min (var_1_77 , (51824 - var_1_61))))) : 1) : ((var_1_12 >= var_1_94) ? (var_1_102 == ((unsigned short int) (min ((var_1_49 - var_1_54) , var_1_48)))) : (((var_1_34 | var_1_60) == var_1_12) ? (var_1_102 == ((unsigned short int) (var_1_14 - (var_1_60 + var_1_115)))) : ((-16 >= var_1_45) ? (var_1_102 == ((unsigned short int) (min (var_1_115 , (min (var_1_14 , var_1_78)))))) : 1))))) && (var_1_103 == ((double) (var_1_41 - var_1_42)))) && ((64.5 < (abs (- var_1_122))) ? (var_1_104 == ((signed short int) ((max (var_1_26 , var_1_45)) + (max (var_1_77 , var_1_53))))) : (var_1_104 == ((signed short int) 5)))) && (var_1_105 == ((unsigned char) var_1_99))) && (var_1_82 ? (var_1_106 == ((float) var_1_65)) : 1)) && (var_1_105 ? (var_1_107 == ((unsigned long int) var_1_115)) : (var_1_107 == ((unsigned long int) var_1_56)))) && (var_1_87 ? (var_1_109 == ((unsigned char) var_1_51)) : 1)) && (var_1_99 ? (var_1_110 == ((float) 16.75f)) : (var_1_110 == ((float) var_1_17)))) && (var_1_111 == ((signed short int) 1))) && (var_1_112 == ((signed short int) var_1_74))) && (var_1_114 == ((double) var_1_41))) && (var_1_115 == ((unsigned char) var_1_51))) && (var_1_87 ? (var_1_116 == ((unsigned char) 0)) : (var_1_116 == ((unsigned char) var_1_117)))) && (var_1_118 == ((float) var_1_42))) && (var_1_105 ? (var_1_119 == ((unsigned short int) var_1_48)) : (var_1_119 == ((unsigned short int) var_1_95)))) && (var_1_120 == ((double) 256.9))) && (var_1_81 ? (var_1_121 == ((float) var_1_17)) : 1)) && (var_1_87 ? (var_1_122 == ((double) var_1_123)) : (var_1_122 == ((double) var_1_19)))) && (var_1_105 ? (var_1_124 == ((unsigned short int) var_1_14)) : (var_1_124 == ((unsigned short int) var_1_107)))) && (var_1_82 ? (var_1_125 == ((signed long int) (var_1_109 - var_1_109))) : 1)) && (var_1_116 ? (var_1_126 == ((signed long int) (((1000000000 - var_1_75) + var_1_77) - 5))) : 1)
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
