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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch38Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 200;
unsigned short int var_1_5 = 42139;
unsigned short int var_1_7 = 1;
double var_1_9 = 0.1;
unsigned short int var_1_14 = 23066;
unsigned short int var_1_15 = 28154;
unsigned short int var_1_16 = 57641;
unsigned short int var_1_20 = 256;
unsigned short int var_1_22 = 10000;
signed char var_1_23 = -16;
signed char var_1_25 = 8;
signed char var_1_26 = 8;
unsigned short int var_1_27 = 10;
unsigned char var_1_29 = 16;
unsigned char var_1_30 = 200;
unsigned char var_1_31 = 32;
unsigned char var_1_32 = 100;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 4;
float var_1_35 = 49.5;
unsigned char var_1_36 = 100;
unsigned long int var_1_37 = 2;
unsigned long int var_1_38 = 1651095723;
signed short int var_1_39 = 5;
double var_1_40 = 7.75;
double var_1_41 = 7.375;
double var_1_42 = 127.5;
double var_1_43 = 3.2;
double var_1_45 = 255.7;
double var_1_46 = 1.25;
double var_1_47 = 99.6;
double var_1_48 = 7.75;
double var_1_49 = 0.625;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
double var_1_52 = 5.85;
signed long int var_1_53 = -500;
signed long int var_1_54 = 1;
signed long int var_1_55 = -5;
signed long int var_1_56 = 1000000000;
double var_1_58 = 255.5;
double var_1_59 = 2.4;
double var_1_60 = 10.6;
signed long int var_1_61 = -32;
double var_1_62 = 64.5;
double var_1_64 = 127.5;
signed char var_1_65 = -32;
float var_1_66 = 0.0;
signed char var_1_67 = 50;
signed char var_1_68 = 32;
signed char var_1_69 = 5;
float var_1_70 = 1.8;
unsigned long int var_1_71 = 50;
unsigned long int var_1_72 = 1468971295;
unsigned long int var_1_73 = 1385592794;
unsigned long int var_1_74 = 3996460118;
signed char var_1_76 = -2;
signed char var_1_77 = -16;
double var_1_78 = 49.31;
float var_1_79 = 4.5;
float var_1_80 = 0.0;
float var_1_81 = 0.0;
float var_1_82 = 2.25;
float var_1_83 = 63.4;
float var_1_84 = 25.5;
signed short int var_1_85 = -1;
unsigned short int var_1_86 = 5;
unsigned short int var_1_87 = 50;
unsigned char var_1_88 = 2;
signed short int var_1_89 = -10;
signed short int var_1_90 = 29311;
signed char var_1_91 = 5;
signed long int var_1_92 = 8;
unsigned char var_1_93 = 10;
float var_1_94 = 32.5;
float var_1_95 = 0.0;
float var_1_96 = 0.0;
unsigned char var_1_97 = 4;
unsigned short int var_1_98 = 2;
double var_1_99 = 128.5;
signed short int var_1_100 = -50;
unsigned char var_1_101 = 0;
unsigned char var_1_102 = 0;
signed char var_1_103 = -16;
unsigned short int var_1_104 = 64;
double var_1_105 = 31.15;
unsigned short int var_1_106 = 64;
signed long int var_1_107 = 256;
unsigned char var_1_108 = 10;
signed short int var_1_109 = 10;
unsigned long int var_1_110 = 32;
unsigned char var_1_111 = 2;
unsigned char var_1_112 = 200;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_34 = 4;
unsigned long int last_1_var_1_37 = 2;
unsigned char last_1_var_1_50 = 0;
signed long int last_1_var_1_54 = 1;
signed long int last_1_var_1_61 = -32;
double last_1_var_1_78 = 49.31;
unsigned short int last_1_var_1_86 = 5;
unsigned short int last_1_var_1_87 = 50;
unsigned char last_1_var_1_88 = 2;
signed long int last_1_var_1_92 = 8;
unsigned char last_1_var_1_93 = 10;
float last_1_var_1_94 = 32.5;
signed long int last_1_var_1_107 = 256;
unsigned char last_1_var_1_108 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req17Batch38Amount500
	if (255.625f > (last_1_var_1_78 / var_1_35)) {
		if (last_1_var_1_86 < last_1_var_1_107) {
			var_1_61 = (var_1_56 + (min (last_1_var_1_92 , (last_1_var_1_93 - last_1_var_1_34))));
		}
	}


	// From: Req46Batch38Amount500
	var_1_110 = var_1_61;


	// From: Req38Batch38Amount500
	if (last_1_var_1_50) {
		var_1_101 = var_1_102;
	} else {
		var_1_101 = var_1_51;
	}


	// From: Req7Batch38Amount500
	signed long int stepLocal_4 = last_1_var_1_61;
	if (last_1_var_1_108 <= stepLocal_4) {
		if ((var_1_9 / var_1_35) > last_1_var_1_94) {
			var_1_34 = (max (((var_1_32 + 100) - var_1_33) , (var_1_30 - (var_1_36 - var_1_31))));
		}
	}


	// From: Req12Batch38Amount500
	if (var_1_101) {
		var_1_52 = (var_1_49 + var_1_48);
	} else {
		var_1_52 = ((var_1_49 + var_1_48) - (7.2 + (max (4.375 , var_1_47))));
	}


	// From: Req26Batch38Amount500
	var_1_86 = (var_1_5 - var_1_32);


	// From: Req28Batch38Amount500
	signed long int stepLocal_21 = 128 - var_1_33;
	if (var_1_101) {
		if (last_1_var_1_88 < stepLocal_21) {
			var_1_88 = (min (var_1_33 , var_1_67));
		}
	} else {
		var_1_88 = 25;
	}


	// From: Req30Batch38Amount500
	if ((var_1_32 >= 2) || var_1_51) {
		if (var_1_16 == var_1_88) {
			var_1_91 = (var_1_25 - (var_1_69 + var_1_67));
		} else {
			if (var_1_83 >= var_1_60) {
				if (! var_1_101) {
					var_1_91 = (var_1_77 + var_1_31);
				} else {
					var_1_91 = var_1_30;
				}
			} else {
				var_1_91 = (abs (min (var_1_67 , (var_1_26 - var_1_33))));
			}
		}
	} else {
		var_1_91 = (var_1_33 - var_1_26);
	}


	// From: Req33Batch38Amount500
	unsigned char stepLocal_24 = var_1_88;
	if (var_1_101) {
		if (var_1_90 < stepLocal_24) {
			var_1_94 = (var_1_47 + (var_1_60 + var_1_84));
		} else {
			var_1_94 = (var_1_80 - ((max (var_1_95 , var_1_96)) - var_1_49));
		}
	}


	// From: Req36Batch38Amount500
	if (var_1_101) {
		var_1_99 = var_1_42;
	} else {
		var_1_99 = var_1_59;
	}


	// From: Req39Batch38Amount500
	var_1_103 = var_1_77;


	// From: Req41Batch38Amount500
	if (var_1_51) {
		var_1_105 = var_1_81;
	}


	// From: Req42Batch38Amount500
	if (var_1_51) {
		var_1_106 = var_1_5;
	} else {
		var_1_106 = var_1_36;
	}


	// From: Req43Batch38Amount500
	var_1_107 = var_1_15;


	// From: Req44Batch38Amount500
	var_1_108 = var_1_31;


	// From: Req47Batch38Amount500
	var_1_111 = var_1_33;


	// From: Req15Batch38Amount500
	if ((- (var_1_42 + 24.75f)) >= (- 99.2)) {
		var_1_55 = var_1_16;
	} else {
		var_1_55 = (((var_1_56 - 50) - var_1_108) + var_1_25);
	}


	// From: Req32Batch38Amount500
	if (! (var_1_106 >= (var_1_15 & var_1_26))) {
		var_1_93 = (abs (128 - 8));
	} else {
		var_1_93 = (var_1_32 + var_1_31);
	}


	// From: Req34Batch38Amount500
	if (((var_1_33 * var_1_69) + var_1_108) > (var_1_31 + var_1_32)) {
		var_1_97 = ((var_1_32 - var_1_68) + (max (var_1_33 , var_1_26)));
	}


	// From: Req45Batch38Amount500
	var_1_109 = var_1_111;


	// From: Req48Batch38Amount500
	if ((var_1_74 == var_1_93) || var_1_101) {
		if (var_1_43 > var_1_80) {
			var_1_112 = (var_1_30 - var_1_33);
		} else {
			var_1_112 = (var_1_30 - var_1_36);
		}
	} else {
		var_1_112 = var_1_67;
	}


	// From: Req6Batch38Amount500
	if (var_1_111 > 8) {
		var_1_29 = (abs (var_1_26));
	} else {
		if (var_1_112 < (var_1_34 * (var_1_112 ^ 5))) {
			var_1_29 = (max (5 , var_1_26));
		} else {
			var_1_29 = ((var_1_30 - var_1_31) - (var_1_32 - (10 + var_1_33)));
		}
	}


	// From: Req23Batch38Amount500
	if (((var_1_30 ^ var_1_34) * var_1_107) < ((var_1_56 + var_1_29) - (var_1_73 - var_1_108))) {
		var_1_78 = (abs (var_1_47));
	} else {
		if (var_1_99 > (var_1_42 * var_1_9)) {
			var_1_78 = (max (var_1_49 , (var_1_46 + var_1_60)));
		} else {
			var_1_78 = (max ((var_1_64 + (var_1_60 + var_1_59)) , var_1_42));
		}
	}


	// From: Req1Batch38Amount500
	if (var_1_101) {
		var_1_1 = (min ((var_1_112 + var_1_88) , (var_1_5 - (abs (var_1_112)))));
	} else {
		var_1_1 = (min ((var_1_5 - var_1_112) , (var_1_112 + (256 + 1))));
	}


	// From: Req9Batch38Amount500
	unsigned char stepLocal_5 = var_1_32 == var_1_33;
	if (var_1_101 || stepLocal_5) {
		if (var_1_101) {
			var_1_39 = (-32 + var_1_55);
		} else {
			if (var_1_101) {
				var_1_39 = (abs (-128 + (max (var_1_26 , var_1_32))));
			} else {
				var_1_39 = var_1_112;
			}
		}
	} else {
		var_1_39 = var_1_55;
	}


	// From: Req16Batch38Amount500
	unsigned char stepLocal_11 = var_1_93;
	unsigned char stepLocal_10 = var_1_29;
	if (var_1_38 < stepLocal_11) {
		if (stepLocal_10 >= (var_1_16 - 8)) {
			var_1_58 = ((var_1_59 + (var_1_60 - 9999999.5)) + var_1_45);
		} else {
			var_1_58 = (var_1_43 - var_1_60);
		}
	}


	// From: Req18Batch38Amount500
	if (((var_1_32 - var_1_26) * (~ 5)) <= (var_1_93 + var_1_22)) {
		var_1_62 = (var_1_42 - var_1_49);
	} else {
		var_1_62 = (min (((4.55 + var_1_59) + var_1_64) , var_1_49));
	}


	// From: Req22Batch38Amount500
	if (var_1_101) {
		if (var_1_111 >= (var_1_73 + var_1_112)) {
			if (var_1_51 && (4 <= (var_1_33 * var_1_16))) {
				if (var_1_68 != var_1_108) {
					var_1_76 = var_1_25;
				} else {
					var_1_76 = ((var_1_33 + var_1_69) + var_1_31);
				}
			} else {
				var_1_76 = (abs (16));
			}
		} else {
			var_1_76 = (var_1_77 + var_1_68);
		}
	}


	// From: Req27Batch38Amount500
	if (var_1_58 > (abs (var_1_45))) {
		var_1_87 = (min (((max (var_1_22 , last_1_var_1_87)) + var_1_88) , var_1_88));
	} else {
		var_1_87 = (39162 - var_1_111);
	}


	// From: Req11Batch38Amount500
	unsigned char stepLocal_8 = var_1_30;
	if (var_1_112 == stepLocal_8) {
		var_1_50 = (! ((var_1_38 >= var_1_112) && (var_1_101 && var_1_51)));
	}


	// From: Req8Batch38Amount500
	if (var_1_62 > var_1_99) {
		if (var_1_30 == var_1_26) {
			if ((var_1_111 < (var_1_5 - 32)) && var_1_101) {
				var_1_37 = (abs (last_1_var_1_37));
			} else {
				var_1_37 = ((1592924859u + 1867977025u) - (max ((var_1_38 - last_1_var_1_37) , (max (var_1_16 , var_1_29)))));
			}
		}
	} else {
		if ((min ((var_1_97 / var_1_32) , 1u)) < var_1_5) {
			var_1_37 = var_1_16;
		} else {
			var_1_37 = ((min ((var_1_111 + var_1_93) , (var_1_38 - last_1_var_1_37))) + var_1_15);
		}
	}


	// From: Req4Batch38Amount500
	if (! (var_1_50 && var_1_50)) {
		var_1_23 = (var_1_25 - var_1_26);
	}


	// From: Req10Batch38Amount500
	unsigned short int stepLocal_7 = var_1_16;
	unsigned char stepLocal_6 = var_1_50;
	if (stepLocal_7 <= 1000) {
		if (var_1_101) {
			var_1_40 = (var_1_41 - (abs (var_1_42 - var_1_43)));
		} else {
			var_1_40 = var_1_41;
		}
	} else {
		if (stepLocal_6 || var_1_50) {
			var_1_40 = (var_1_45 + var_1_46);
		} else {
			var_1_40 = (var_1_45 + (var_1_47 - (max (var_1_48 , var_1_49))));
		}
	}


	// From: Req19Batch38Amount500
	unsigned char stepLocal_12 = var_1_50;
	if (var_1_51 || stepLocal_12) {
		if (((var_1_66 - var_1_49) - var_1_41) > var_1_60) {
			if (var_1_41 < (var_1_94 + var_1_35)) {
				var_1_65 = var_1_33;
			} else {
				var_1_65 = (((var_1_67 - var_1_33) + (var_1_68 + var_1_69)) - 1);
			}
		}
	} else {
		var_1_65 = (var_1_26 - var_1_69);
	}


	// From: Req20Batch38Amount500
	unsigned char stepLocal_14 = ! var_1_51;
	signed long int stepLocal_13 = abs (var_1_26);
	if (((min (var_1_93 , var_1_16)) - var_1_14) <= stepLocal_13) {
		var_1_70 = (var_1_46 + var_1_47);
	} else {
		if (stepLocal_14 && ((! var_1_101) || var_1_50)) {
			var_1_70 = var_1_41;
		} else {
			var_1_70 = (abs (var_1_60));
		}
	}


	// From: Req24Batch38Amount500
	signed long int stepLocal_18 = max (var_1_93 , var_1_26);
	if (stepLocal_18 > var_1_109) {
		if (var_1_35 > (abs (var_1_66))) {
			if (! var_1_50) {
				var_1_79 = (max (var_1_64 , 31.8f));
			} else {
				var_1_79 = ((var_1_80 - (var_1_81 - var_1_60)) - var_1_47);
			}
		} else {
			var_1_79 = ((max ((var_1_48 - var_1_60) , (var_1_59 + var_1_82))) + (var_1_83 + var_1_84));
		}
	} else {
		var_1_79 = var_1_45;
	}


	// From: Req25Batch38Amount500
	unsigned char stepLocal_20 = var_1_33;
	unsigned char stepLocal_19 = var_1_111;
	if (((var_1_79 * var_1_78) + var_1_62) >= (- (var_1_42 + var_1_35))) {
		if ((var_1_1 * var_1_55) <= stepLocal_19) {
			var_1_85 = (min (var_1_77 , var_1_67));
		} else {
			var_1_85 = (max (var_1_32 , -64));
		}
	} else {
		if (stepLocal_20 <= 128) {
			var_1_85 = (var_1_1 + var_1_32);
		} else {
			var_1_85 = (-25 + (abs (var_1_93)));
		}
	}


	// From: Req29Batch38Amount500
	signed short int stepLocal_23 = var_1_109;
	unsigned char stepLocal_22 = var_1_36 >= var_1_16;
	if ((var_1_74 - (min (10u , var_1_33))) > stepLocal_23) {
		if (var_1_50 && stepLocal_22) {
			var_1_89 = (abs (var_1_22));
		} else {
			var_1_89 = ((max ((abs (var_1_69)) , var_1_22)) - ((var_1_90 - var_1_39) - (min (var_1_67 , var_1_34))));
		}
	}


	// From: Req35Batch38Amount500
	if (var_1_50) {
		var_1_98 = var_1_93;
	}


	// From: Req37Batch38Amount500
	if (var_1_50) {
		var_1_100 = var_1_25;
	}


	// From: Req40Batch38Amount500
	var_1_104 = var_1_100;


	// From: Req31Batch38Amount500
	if (var_1_50) {
		var_1_92 = ((var_1_34 - var_1_110) + 64);
	} else {
		var_1_92 = (var_1_108 + (min (var_1_37 , var_1_22)));
	}


	// From: Req2Batch38Amount500
	unsigned short int stepLocal_1 = var_1_5;
	signed long int stepLocal_0 = (var_1_88 + var_1_85) + (var_1_87 / var_1_5);
	if ((var_1_94 / var_1_9) != var_1_94) {
		if (var_1_9 >= var_1_94) {
			var_1_7 = var_1_88;
		} else {
			if (stepLocal_1 <= var_1_88) {
				if (var_1_108 < stepLocal_0) {
					if (var_1_94 != var_1_9) {
						var_1_7 = (var_1_5 - var_1_111);
					} else {
						if (var_1_94 >= var_1_94) {
							var_1_7 = ((var_1_14 + var_1_15) - var_1_34);
						}
					}
				} else {
					var_1_7 = ((var_1_16 - (max (var_1_29 , 5))) - var_1_111);
				}
			} else {
				var_1_7 = ((max (var_1_29 , var_1_34)) + (var_1_14 - (var_1_97 + var_1_29)));
			}
		}
	} else {
		var_1_7 = var_1_34;
	}


	// From: Req3Batch38Amount500
	signed long int stepLocal_2 = (abs (var_1_5)) * var_1_93;
	if ((var_1_98 + 10) != stepLocal_2) {
		var_1_20 = (var_1_93 + (var_1_14 - (var_1_22 - var_1_97)));
	} else {
		var_1_20 = var_1_111;
	}


	// From: Req5Batch38Amount500
	unsigned char stepLocal_3 = var_1_29;
	if (var_1_9 < (var_1_70 / 0.125)) {
		if ((2 * (min (var_1_14 , var_1_93))) < stepLocal_3) {
			var_1_27 = (var_1_5 - var_1_15);
		} else {
			var_1_27 = (max (var_1_97 , 5));
		}
	} else {
		var_1_27 = ((var_1_14 + var_1_15) - (var_1_22 + (max (var_1_26 , var_1_97))));
	}


	// From: Req13Batch38Amount500
	if (var_1_50) {
		var_1_53 = (min (var_1_5 , (max (var_1_110 , var_1_112))));
	} else {
		if (var_1_50 && var_1_51) {
			var_1_53 = ((var_1_104 - var_1_20) + (abs (var_1_25 + var_1_36)));
		}
	}


	// From: Req14Batch38Amount500
	signed char stepLocal_9 = var_1_65;
	if (stepLocal_9 >= var_1_109) {
		var_1_54 = (min (last_1_var_1_54 , var_1_98));
	} else {
		var_1_54 = (max (last_1_var_1_54 , (var_1_22 - (var_1_39 + var_1_93))));
	}


	// From: Req21Batch38Amount500
	signed char stepLocal_17 = var_1_23;
	signed long int stepLocal_16 = var_1_109 + (min (var_1_93 , var_1_97));
	unsigned short int stepLocal_15 = var_1_104;
	if (200.2f >= ((var_1_41 - 7.6f) * var_1_94)) {
		if (stepLocal_17 <= var_1_22) {
			var_1_71 = (abs (var_1_26 + 2u));
		} else {
			var_1_71 = ((var_1_38 + (max (var_1_72 , var_1_73))) - var_1_39);
		}
	} else {
		if (var_1_97 > stepLocal_15) {
			if (var_1_51) {
				if (var_1_50) {
					if (128 >= stepLocal_16) {
						var_1_71 = (abs (2704285562u - var_1_67));
					}
				} else {
					var_1_71 = (var_1_74 - var_1_73);
				}
			} else {
				if (var_1_50) {
					var_1_71 = (min ((max ((var_1_74 - var_1_34) , (var_1_30 + 10u))) , var_1_110));
				} else {
					var_1_71 = (min ((var_1_74 - var_1_67) , (min (8u , (var_1_20 + var_1_110)))));
				}
			}
		}
	}
}



void updateVariables() {
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 16384);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 49150);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 8191);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -1);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 190);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 63);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 63);
	assume_abort_if_not(var_1_32 <= 127);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 31);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	assume_abort_if_not(var_1_35 != 0.0F);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 63);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 1073741823);
	assume_abort_if_not(var_1_38 <= 2147483647);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854765600e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854765600e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854765600e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -461168.6018427382800e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427382800e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -461168.6018427382800e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427382800e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427382800e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 4611686.018427382800e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427382800e+12F && var_1_49 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 0);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= 536870911);
	assume_abort_if_not(var_1_56 <= 1073741823);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= -230584.3009213691390e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 2305843.009213691390e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691390e+12F && var_1_60 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -461168.6018427382800e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427382800e+12F && var_1_64 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_66 >= 4611686.018427387900e+12F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 9223372.036854776000e+12F && var_1_66 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_67 >= 31);
	assume_abort_if_not(var_1_67 <= 63);
	var_1_68 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 32);
	var_1_69 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 31);
	var_1_72 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_72 >= 1073741824);
	assume_abort_if_not(var_1_72 <= 2147483647);
	var_1_73 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_73 >= 1073741824);
	assume_abort_if_not(var_1_73 <= 2147483647);
	var_1_74 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_74 >= 2147483647);
	assume_abort_if_not(var_1_74 <= 4294967294);
	var_1_77 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_77 >= -63);
	assume_abort_if_not(var_1_77 <= 63);
	var_1_80 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_80 >= 4611686.018427382800e+12F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854765600e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_81 >= 2305843.009213691390e+12F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427382800e+12F && var_1_81 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= -230584.3009213691390e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 2305843.009213691390e+12F && var_1_82 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= -230584.3009213691390e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 2305843.009213691390e+12F && var_1_83 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= -230584.3009213691390e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 2305843.009213691390e+12F && var_1_84 >= 1.0e-20F ));
	var_1_90 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_90 >= 24574);
	assume_abort_if_not(var_1_90 <= 32766);
	var_1_95 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_95 >= 6917529.027641073700e+12F && var_1_95 <= -1.0e-20F) || (var_1_95 <= 9223372.036854765600e+12F && var_1_95 >= 1.0e-20F ));
	var_1_96 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_96 >= 4611686.018427382800e+12F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 9223372.036854765600e+12F && var_1_96 >= 1.0e-20F ));
	var_1_102 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_102 >= 1);
	assume_abort_if_not(var_1_102 <= 1);
}



void updateLastVariables() {
	last_1_var_1_34 = var_1_34;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_108 = var_1_108;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((var_1_101 ? (var_1_1 == ((unsigned short int) (min ((var_1_112 + var_1_88) , (var_1_5 - (abs (var_1_112))))))) : (var_1_1 == ((unsigned short int) (min ((var_1_5 - var_1_112) , (var_1_112 + (256 + 1))))))) && (((var_1_94 / var_1_9) != var_1_94) ? ((var_1_9 >= var_1_94) ? (var_1_7 == ((unsigned short int) var_1_88)) : ((var_1_5 <= var_1_88) ? ((var_1_108 < ((var_1_88 + var_1_85) + (var_1_87 / var_1_5))) ? ((var_1_94 != var_1_9) ? (var_1_7 == ((unsigned short int) (var_1_5 - var_1_111))) : ((var_1_94 >= var_1_94) ? (var_1_7 == ((unsigned short int) ((var_1_14 + var_1_15) - var_1_34))) : 1)) : (var_1_7 == ((unsigned short int) ((var_1_16 - (max (var_1_29 , 5))) - var_1_111)))) : (var_1_7 == ((unsigned short int) ((max (var_1_29 , var_1_34)) + (var_1_14 - (var_1_97 + var_1_29))))))) : (var_1_7 == ((unsigned short int) var_1_34)))) && (((var_1_98 + 10) != ((abs (var_1_5)) * var_1_93)) ? (var_1_20 == ((unsigned short int) (var_1_93 + (var_1_14 - (var_1_22 - var_1_97))))) : (var_1_20 == ((unsigned short int) var_1_111)))) && ((! (var_1_50 && var_1_50)) ? (var_1_23 == ((signed char) (var_1_25 - var_1_26))) : 1)) && ((var_1_9 < (var_1_70 / 0.125)) ? (((2 * (min (var_1_14 , var_1_93))) < var_1_29) ? (var_1_27 == ((unsigned short int) (var_1_5 - var_1_15))) : (var_1_27 == ((unsigned short int) (max (var_1_97 , 5))))) : (var_1_27 == ((unsigned short int) ((var_1_14 + var_1_15) - (var_1_22 + (max (var_1_26 , var_1_97)))))))) && ((var_1_111 > 8) ? (var_1_29 == ((unsigned char) (abs (var_1_26)))) : ((var_1_112 < (var_1_34 * (var_1_112 ^ 5))) ? (var_1_29 == ((unsigned char) (max (5 , var_1_26)))) : (var_1_29 == ((unsigned char) ((var_1_30 - var_1_31) - (var_1_32 - (10 + var_1_33)))))))) && ((last_1_var_1_108 <= last_1_var_1_61) ? (((var_1_9 / var_1_35) > last_1_var_1_94) ? (var_1_34 == ((unsigned char) (max (((var_1_32 + 100) - var_1_33) , (var_1_30 - (var_1_36 - var_1_31)))))) : 1) : 1)) && ((var_1_62 > var_1_99) ? ((var_1_30 == var_1_26) ? (((var_1_111 < (var_1_5 - 32)) && var_1_101) ? (var_1_37 == ((unsigned long int) (abs (last_1_var_1_37)))) : (var_1_37 == ((unsigned long int) ((1592924859u + 1867977025u) - (max ((var_1_38 - last_1_var_1_37) , (max (var_1_16 , var_1_29)))))))) : 1) : (((min ((var_1_97 / var_1_32) , 1u)) < var_1_5) ? (var_1_37 == ((unsigned long int) var_1_16)) : (var_1_37 == ((unsigned long int) ((min ((var_1_111 + var_1_93) , (var_1_38 - last_1_var_1_37))) + var_1_15)))))) && ((var_1_101 || (var_1_32 == var_1_33)) ? (var_1_101 ? (var_1_39 == ((signed short int) (-32 + var_1_55))) : (var_1_101 ? (var_1_39 == ((signed short int) (abs (-128 + (max (var_1_26 , var_1_32)))))) : (var_1_39 == ((signed short int) var_1_112)))) : (var_1_39 == ((signed short int) var_1_55)))) && ((var_1_16 <= 1000) ? (var_1_101 ? (var_1_40 == ((double) (var_1_41 - (abs (var_1_42 - var_1_43))))) : (var_1_40 == ((double) var_1_41))) : ((var_1_50 || var_1_50) ? (var_1_40 == ((double) (var_1_45 + var_1_46))) : (var_1_40 == ((double) (var_1_45 + (var_1_47 - (max (var_1_48 , var_1_49))))))))) && ((var_1_112 == var_1_30) ? (var_1_50 == ((unsigned char) (! ((var_1_38 >= var_1_112) && (var_1_101 && var_1_51))))) : 1)) && (var_1_101 ? (var_1_52 == ((double) (var_1_49 + var_1_48))) : (var_1_52 == ((double) ((var_1_49 + var_1_48) - (7.2 + (max (4.375 , var_1_47)))))))) && (var_1_50 ? (var_1_53 == ((signed long int) (min (var_1_5 , (max (var_1_110 , var_1_112)))))) : ((var_1_50 && var_1_51) ? (var_1_53 == ((signed long int) ((var_1_104 - var_1_20) + (abs (var_1_25 + var_1_36))))) : 1))) && ((var_1_65 >= var_1_109) ? (var_1_54 == ((signed long int) (min (last_1_var_1_54 , var_1_98)))) : (var_1_54 == ((signed long int) (max (last_1_var_1_54 , (var_1_22 - (var_1_39 + var_1_93)))))))) && (((- (var_1_42 + 24.75f)) >= (- 99.2)) ? (var_1_55 == ((signed long int) var_1_16)) : (var_1_55 == ((signed long int) (((var_1_56 - 50) - var_1_108) + var_1_25))))) && ((var_1_38 < var_1_93) ? ((var_1_29 >= (var_1_16 - 8)) ? (var_1_58 == ((double) ((var_1_59 + (var_1_60 - 9999999.5)) + var_1_45))) : (var_1_58 == ((double) (var_1_43 - var_1_60)))) : 1)) && ((255.625f > (last_1_var_1_78 / var_1_35)) ? ((last_1_var_1_86 < last_1_var_1_107) ? (var_1_61 == ((signed long int) (var_1_56 + (min (last_1_var_1_92 , (last_1_var_1_93 - last_1_var_1_34)))))) : 1) : 1)) && ((((var_1_32 - var_1_26) * (~ 5)) <= (var_1_93 + var_1_22)) ? (var_1_62 == ((double) (var_1_42 - var_1_49))) : (var_1_62 == ((double) (min (((4.55 + var_1_59) + var_1_64) , var_1_49)))))) && ((var_1_51 || var_1_50) ? ((((var_1_66 - var_1_49) - var_1_41) > var_1_60) ? ((var_1_41 < (var_1_94 + var_1_35)) ? (var_1_65 == ((signed char) var_1_33)) : (var_1_65 == ((signed char) (((var_1_67 - var_1_33) + (var_1_68 + var_1_69)) - 1)))) : 1) : (var_1_65 == ((signed char) (var_1_26 - var_1_69))))) && ((((min (var_1_93 , var_1_16)) - var_1_14) <= (abs (var_1_26))) ? (var_1_70 == ((float) (var_1_46 + var_1_47))) : (((! var_1_51) && ((! var_1_101) || var_1_50)) ? (var_1_70 == ((float) var_1_41)) : (var_1_70 == ((float) (abs (var_1_60))))))) && ((200.2f >= ((var_1_41 - 7.6f) * var_1_94)) ? ((var_1_23 <= var_1_22) ? (var_1_71 == ((unsigned long int) (abs (var_1_26 + 2u)))) : (var_1_71 == ((unsigned long int) ((var_1_38 + (max (var_1_72 , var_1_73))) - var_1_39)))) : ((var_1_97 > var_1_104) ? (var_1_51 ? (var_1_50 ? ((128 >= (var_1_109 + (min (var_1_93 , var_1_97)))) ? (var_1_71 == ((unsigned long int) (abs (2704285562u - var_1_67)))) : 1) : (var_1_71 == ((unsigned long int) (var_1_74 - var_1_73)))) : (var_1_50 ? (var_1_71 == ((unsigned long int) (min ((max ((var_1_74 - var_1_34) , (var_1_30 + 10u))) , var_1_110)))) : (var_1_71 == ((unsigned long int) (min ((var_1_74 - var_1_67) , (min (8u , (var_1_20 + var_1_110))))))))) : 1))) && (var_1_101 ? ((var_1_111 >= (var_1_73 + var_1_112)) ? ((var_1_51 && (4 <= (var_1_33 * var_1_16))) ? ((var_1_68 != var_1_108) ? (var_1_76 == ((signed char) var_1_25)) : (var_1_76 == ((signed char) ((var_1_33 + var_1_69) + var_1_31)))) : (var_1_76 == ((signed char) (abs (16))))) : (var_1_76 == ((signed char) (var_1_77 + var_1_68)))) : 1)) && ((((var_1_30 ^ var_1_34) * var_1_107) < ((var_1_56 + var_1_29) - (var_1_73 - var_1_108))) ? (var_1_78 == ((double) (abs (var_1_47)))) : ((var_1_99 > (var_1_42 * var_1_9)) ? (var_1_78 == ((double) (max (var_1_49 , (var_1_46 + var_1_60))))) : (var_1_78 == ((double) (max ((var_1_64 + (var_1_60 + var_1_59)) , var_1_42))))))) && (((max (var_1_93 , var_1_26)) > var_1_109) ? ((var_1_35 > (abs (var_1_66))) ? ((! var_1_50) ? (var_1_79 == ((float) (max (var_1_64 , 31.8f)))) : (var_1_79 == ((float) ((var_1_80 - (var_1_81 - var_1_60)) - var_1_47)))) : (var_1_79 == ((float) ((max ((var_1_48 - var_1_60) , (var_1_59 + var_1_82))) + (var_1_83 + var_1_84))))) : (var_1_79 == ((float) var_1_45)))) && ((((var_1_79 * var_1_78) + var_1_62) >= (- (var_1_42 + var_1_35))) ? (((var_1_1 * var_1_55) <= var_1_111) ? (var_1_85 == ((signed short int) (min (var_1_77 , var_1_67)))) : (var_1_85 == ((signed short int) (max (var_1_32 , -64))))) : ((var_1_33 <= 128) ? (var_1_85 == ((signed short int) (var_1_1 + var_1_32))) : (var_1_85 == ((signed short int) (-25 + (abs (var_1_93)))))))) && (var_1_86 == ((unsigned short int) (var_1_5 - var_1_32)))) && ((var_1_58 > (abs (var_1_45))) ? (var_1_87 == ((unsigned short int) (min (((max (var_1_22 , last_1_var_1_87)) + var_1_88) , var_1_88)))) : (var_1_87 == ((unsigned short int) (39162 - var_1_111))))) && (var_1_101 ? ((last_1_var_1_88 < (128 - var_1_33)) ? (var_1_88 == ((unsigned char) (min (var_1_33 , var_1_67)))) : 1) : (var_1_88 == ((unsigned char) 25)))) && (((var_1_74 - (min (10u , var_1_33))) > var_1_109) ? ((var_1_50 && (var_1_36 >= var_1_16)) ? (var_1_89 == ((signed short int) (abs (var_1_22)))) : (var_1_89 == ((signed short int) ((max ((abs (var_1_69)) , var_1_22)) - ((var_1_90 - var_1_39) - (min (var_1_67 , var_1_34))))))) : 1)) && (((var_1_32 >= 2) || var_1_51) ? ((var_1_16 == var_1_88) ? (var_1_91 == ((signed char) (var_1_25 - (var_1_69 + var_1_67)))) : ((var_1_83 >= var_1_60) ? ((! var_1_101) ? (var_1_91 == ((signed char) (var_1_77 + var_1_31))) : (var_1_91 == ((signed char) var_1_30))) : (var_1_91 == ((signed char) (abs (min (var_1_67 , (var_1_26 - var_1_33)))))))) : (var_1_91 == ((signed char) (var_1_33 - var_1_26))))) && (var_1_50 ? (var_1_92 == ((signed long int) ((var_1_34 - var_1_110) + 64))) : (var_1_92 == ((signed long int) (var_1_108 + (min (var_1_37 , var_1_22))))))) && ((! (var_1_106 >= (var_1_15 & var_1_26))) ? (var_1_93 == ((unsigned char) (abs (128 - 8)))) : (var_1_93 == ((unsigned char) (var_1_32 + var_1_31))))) && (var_1_101 ? ((var_1_90 < var_1_88) ? (var_1_94 == ((float) (var_1_47 + (var_1_60 + var_1_84)))) : (var_1_94 == ((float) (var_1_80 - ((max (var_1_95 , var_1_96)) - var_1_49))))) : 1)) && ((((var_1_33 * var_1_69) + var_1_108) > (var_1_31 + var_1_32)) ? (var_1_97 == ((unsigned char) ((var_1_32 - var_1_68) + (max (var_1_33 , var_1_26))))) : 1)) && (var_1_50 ? (var_1_98 == ((unsigned short int) var_1_93)) : 1)) && (var_1_101 ? (var_1_99 == ((double) var_1_42)) : (var_1_99 == ((double) var_1_59)))) && (var_1_50 ? (var_1_100 == ((signed short int) var_1_25)) : 1)) && (last_1_var_1_50 ? (var_1_101 == ((unsigned char) var_1_102)) : (var_1_101 == ((unsigned char) var_1_51)))) && (var_1_103 == ((signed char) var_1_77))) && (var_1_104 == ((unsigned short int) var_1_100))) && (var_1_51 ? (var_1_105 == ((double) var_1_81)) : 1)) && (var_1_51 ? (var_1_106 == ((unsigned short int) var_1_5)) : (var_1_106 == ((unsigned short int) var_1_36)))) && (var_1_107 == ((signed long int) var_1_15))) && (var_1_108 == ((unsigned char) var_1_31))) && (var_1_109 == ((signed short int) var_1_111))) && (var_1_110 == ((unsigned long int) var_1_61))) && (var_1_111 == ((unsigned char) var_1_33))) && (((var_1_74 == var_1_93) || var_1_101) ? ((var_1_43 > var_1_80) ? (var_1_112 == ((unsigned char) (var_1_30 - var_1_33))) : (var_1_112 == ((unsigned char) (var_1_30 - var_1_36)))) : (var_1_112 == ((unsigned char) var_1_67)))
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
