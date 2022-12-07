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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch58Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned short int var_1_1 = 1;
unsigned char var_1_4 = 64;
signed long int var_1_6 = -1;
unsigned short int var_1_7 = 45218;
double var_1_9 = 128.4;
unsigned short int var_1_10 = 40875;
double var_1_14 = 7.125;
double var_1_15 = 10.6;
double var_1_16 = 0.6;
double var_1_17 = -0.8;
double var_1_18 = 15.75;
double var_1_19 = 255.25;
double var_1_20 = 63.942;
double var_1_21 = 64.5;
double var_1_22 = 50.75;
double var_1_23 = 1.8;
double var_1_24 = 0.175;
unsigned char var_1_25 = 1;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned long int var_1_32 = 32;
unsigned long int var_1_34 = 1469948749;
double var_1_35 = 49.175;
double var_1_36 = 127.6;
unsigned short int var_1_37 = 64;
unsigned long int var_1_38 = 5;
unsigned long int var_1_39 = 1000000000;
unsigned long int var_1_40 = 1000000000;
unsigned long int var_1_41 = 1581617635;
float var_1_42 = 16.25;
signed char var_1_43 = -4;
signed char var_1_44 = 0;
signed char var_1_45 = 2;
signed char var_1_46 = 10;
signed char var_1_47 = 2;
signed char var_1_48 = -4;
signed char var_1_49 = 1;
double var_1_50 = 63.4;
float var_1_51 = 3.75;
signed long int var_1_52 = 100;
unsigned long int var_1_53 = 2;
unsigned long int var_1_54 = 3582328097;
unsigned short int var_1_55 = 16;
double var_1_56 = 31.4;
signed char var_1_57 = 64;
signed char var_1_58 = 32;
signed char var_1_59 = 100;
signed short int var_1_60 = 200;
signed short int var_1_61 = -500;
signed char var_1_62 = 2;
unsigned char var_1_63 = 128;
signed char var_1_64 = -64;
signed char var_1_65 = 16;
signed char var_1_66 = 4;
signed long int var_1_67 = -2;
signed long int var_1_68 = 1396682933;
unsigned char var_1_69 = 0;
float var_1_70 = 7.5;
unsigned char var_1_71 = 1;
unsigned short int var_1_72 = 500;
signed char var_1_73 = 2;
signed long int var_1_74 = -200;
unsigned char var_1_75 = 0;
signed long int var_1_76 = -2;
unsigned char var_1_78 = 1;
unsigned long int var_1_79 = 500;
signed char var_1_80 = -4;
signed char var_1_81 = 1;
unsigned char var_1_82 = 1;
unsigned char var_1_83 = 0;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 128;
unsigned char var_1_87 = 32;
unsigned char var_1_88 = 32;
signed char var_1_89 = 64;
unsigned short int var_1_90 = 32;
unsigned short int var_1_91 = 20540;
signed long int var_1_92 = 1;
signed long int var_1_93 = -5;
signed long int var_1_94 = 1976681352;
unsigned char var_1_95 = 0;
unsigned char var_1_96 = 0;
signed long int var_1_97 = 10;
unsigned char var_1_98 = 10;
unsigned char var_1_99 = 200;
unsigned char var_1_100 = 2;
float var_1_101 = -0.75;
float var_1_102 = 2.7;
unsigned long int var_1_103 = 25;
float var_1_104 = 4.6;
unsigned short int var_1_105 = 16;
signed char var_1_106 = -2;
signed short int var_1_107 = -8;
unsigned long int var_1_108 = 25;
signed char var_1_109 = -128;
unsigned long int var_1_110 = 16;
unsigned long int var_1_111 = 64;
unsigned char var_1_112 = 32;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 1;
float last_1_var_1_42 = 16.25;
double last_1_var_1_56 = 31.4;
signed char last_1_var_1_73 = 2;
signed char last_1_var_1_80 = -4;
unsigned char last_1_var_1_85 = 0;
signed long int last_1_var_1_97 = 10;
unsigned char last_1_var_1_98 = 10;
unsigned long int last_1_var_1_103 = 25;
unsigned long int last_1_var_1_111 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req35Batch58Amount500
	if (var_1_24 >= last_1_var_1_56) {
		var_1_85 = (var_1_86 - ((var_1_87 + var_1_88) - var_1_46));
	} else {
		if (var_1_29) {
			var_1_85 = (min (var_1_81 , var_1_66));
		}
	}


	// From: Req7Batch58Amount500
	if ((5.8 * var_1_21) < var_1_36) {
		var_1_38 = (min (last_1_var_1_111 , (var_1_10 + last_1_var_1_85)));
	} else {
		var_1_38 = ((var_1_34 + (var_1_39 + var_1_40)) - (var_1_41 - last_1_var_1_111));
	}


	// From: Req3Batch58Amount500
	signed long int stepLocal_2 = (last_1_var_1_98 * last_1_var_1_80) + (last_1_var_1_1 * var_1_6);
	if (last_1_var_1_103 <= stepLocal_2) {
		var_1_25 = (! var_1_27);
	} else {
		if ((last_1_var_1_42 * (var_1_24 - var_1_23)) >= (max (var_1_20 , var_1_22))) {
			if (var_1_27) {
				var_1_25 = ((var_1_28 || var_1_29) || var_1_30);
			} else {
				var_1_25 = ((! var_1_29) || var_1_31);
			}
		} else {
			var_1_25 = var_1_31;
		}
	}


	// From: Req46Batch58Amount500
	if (var_1_25) {
		var_1_104 = 15.5f;
	} else {
		var_1_104 = var_1_22;
	}


	// From: Req9Batch58Amount500
	unsigned long int stepLocal_5 = var_1_40;
	if (stepLocal_5 == (var_1_4 * 32u)) {
		var_1_43 = (abs (var_1_44 - 8));
	} else {
		var_1_43 = ((var_1_45 + (var_1_46 - var_1_47)) + var_1_48);
	}


	// From: Req10Batch58Amount500
	if (var_1_29) {
		var_1_49 = (max (var_1_47 , var_1_46));
	} else {
		var_1_49 = (var_1_47 + var_1_46);
	}


	// From: Req11Batch58Amount500
	var_1_50 = var_1_20;


	// From: Req13Batch58Amount500
	var_1_52 = var_1_10;


	// From: Req19Batch58Amount500
	if (var_1_29) {
		var_1_61 = var_1_44;
	}


	// From: Req21Batch58Amount500
	if (var_1_24 == var_1_17) {
		var_1_67 = (max ((var_1_39 - var_1_7) , -64));
	} else {
		var_1_67 = ((var_1_68 - 200) - var_1_59);
	}


	// From: Req23Batch58Amount500
	unsigned long int stepLocal_12 = 2u + var_1_52;
	if (((var_1_59 / var_1_4) / var_1_41) >= stepLocal_12) {
		var_1_70 = (min (199.6f , 0.4f));
	}


	// From: Req24Batch58Amount500
	var_1_71 = var_1_31;


	// From: Req30Batch58Amount500
	var_1_78 = (! var_1_31);


	// From: Req31Batch58Amount500
	signed char stepLocal_23 = var_1_46;
	unsigned short int stepLocal_22 = var_1_10;
	if (var_1_52 < stepLocal_23) {
		if (stepLocal_22 != var_1_47) {
			var_1_79 = (max ((var_1_54 - var_1_47) , (abs (var_1_59))));
		} else {
			var_1_79 = (var_1_54 - (var_1_4 + var_1_46));
		}
	}


	// From: Req34Batch58Amount500
	if (((var_1_46 + -25) % var_1_59) <= -5) {
		if (var_1_31 || (! var_1_30)) {
			var_1_84 = (! 1);
		}
	}


	// From: Req36Batch58Amount500
	if (var_1_6 < (var_1_43 - 500)) {
		if (var_1_71) {
			var_1_89 = (min (((var_1_81 - var_1_47) + var_1_46) , (var_1_44 - (max (var_1_88 , var_1_87)))));
		} else {
			var_1_89 = var_1_58;
		}
	} else {
		var_1_89 = (var_1_47 - var_1_44);
	}


	// From: Req40Batch58Amount500
	if (var_1_68 < var_1_40) {
		var_1_95 = (((var_1_46 - var_1_91) != (var_1_41 / var_1_7)) || (! var_1_96));
	}


	// From: Req42Batch58Amount500
	unsigned char stepLocal_28 = var_1_71;
	if (var_1_78 || stepLocal_28) {
		var_1_98 = (var_1_87 + 2);
	} else {
		var_1_98 = ((var_1_99 - (var_1_88 - var_1_100)) - var_1_66);
	}


	// From: Req43Batch58Amount500
	var_1_101 = var_1_19;


	// From: Req44Batch58Amount500
	if (var_1_84) {
		var_1_102 = var_1_24;
	} else {
		var_1_102 = var_1_17;
	}


	// From: Req48Batch58Amount500
	if (var_1_30) {
		var_1_106 = var_1_46;
	}


	// From: Req49Batch58Amount500
	if (var_1_71) {
		var_1_107 = var_1_81;
	}


	// From: Req50Batch58Amount500
	var_1_108 = var_1_87;


	// From: Req51Batch58Amount500
	var_1_109 = 4;


	// From: Req52Batch58Amount500
	if (var_1_71) {
		var_1_110 = var_1_68;
	} else {
		var_1_110 = var_1_54;
	}


	// From: Req8Batch58Amount500
	if (1u > var_1_98) {
		var_1_42 = (min (var_1_21 , (63.4f + (max (var_1_24 , var_1_17)))));
	}


	// From: Req14Batch58Amount500
	if (((var_1_21 - var_1_23) + var_1_24) > var_1_16) {
		if (var_1_101 < (var_1_22 + (49.25 * var_1_24))) {
			var_1_53 = (var_1_34 + var_1_39);
		}
	} else {
		var_1_53 = (abs (var_1_54 - var_1_34));
	}


	// From: Req32Batch58Amount500
	if (var_1_84) {
		var_1_80 = (var_1_46 + (var_1_47 - var_1_81));
	} else {
		var_1_80 = var_1_81;
	}


	// From: Req33Batch58Amount500
	if (var_1_29) {
		if (var_1_63 < (var_1_38 + var_1_10)) {
			var_1_82 = 0;
		} else {
			var_1_82 = (((var_1_84 || var_1_31) && var_1_27) && var_1_83);
		}
	}


	// From: Req37Batch58Amount500
	var_1_90 = ((max ((var_1_91 - var_1_4) , (abs (var_1_98)))) + var_1_88);


	// From: Req53Batch58Amount500
	if (var_1_30) {
		var_1_111 = var_1_99;
	} else {
		var_1_111 = var_1_53;
	}


	// From: Req38Batch58Amount500
	unsigned long int stepLocal_25 = var_1_41;
	unsigned char stepLocal_24 = var_1_90 > (abs (var_1_45));
	if ((var_1_98 > (var_1_65 & var_1_38)) || stepLocal_24) {
		if (stepLocal_25 < var_1_46) {
			var_1_92 = (abs (var_1_7 - var_1_98));
		}
	} else {
		var_1_92 = (4 + var_1_85);
	}


	// From: Req15Batch58Amount500
	unsigned char stepLocal_7 = var_1_53 == 1;
	if (var_1_29 || stepLocal_7) {
		if (((var_1_22 + var_1_20) - var_1_24) != var_1_104) {
			var_1_55 = (abs ((abs (var_1_47)) + var_1_46));
		} else {
			var_1_55 = (var_1_7 - var_1_47);
		}
	} else {
		var_1_55 = (var_1_47 + var_1_4);
	}


	// From: Req20Batch58Amount500
	if ((var_1_63 - (var_1_46 + var_1_47)) > var_1_7) {
		if ((- (var_1_101 / var_1_36)) != var_1_104) {
			if (var_1_44 < var_1_90) {
				var_1_62 = (min ((max (var_1_59 , var_1_45)) , var_1_46));
			} else {
				var_1_62 = (max ((var_1_44 - var_1_46) , var_1_64));
			}
		}
	} else {
		if ((var_1_45 / (min (var_1_59 , var_1_6))) < (var_1_111 * var_1_46)) {
			var_1_62 = (((var_1_65 + 10) + var_1_46) + (5 + var_1_47));
		} else {
			var_1_62 = (min (var_1_64 , (var_1_58 - var_1_66)));
		}
	}


	// From: Req5Batch58Amount500
	signed long int stepLocal_4 = var_1_6;
	unsigned char stepLocal_3 = var_1_106 < var_1_10;
	if (var_1_21 >= (var_1_42 / var_1_36)) {
		var_1_35 = ((var_1_24 - var_1_20) + var_1_19);
	} else {
		if (stepLocal_3 && var_1_25) {
			var_1_35 = (var_1_20 - 999.3);
		} else {
			if (var_1_52 < stepLocal_4) {
				if (var_1_27) {
					var_1_35 = (max (var_1_17 , var_1_15));
				} else {
					if (var_1_101 > var_1_21) {
						if (var_1_14 == var_1_42) {
							var_1_35 = (var_1_17 + (max ((var_1_19 + var_1_23) , var_1_16)));
						}
					} else {
						var_1_35 = ((abs (var_1_17)) + var_1_19);
					}
				}
			} else {
				var_1_35 = (min (var_1_23 , (var_1_19 + var_1_22)));
			}
		}
	}


	// From: Req17Batch58Amount500
	unsigned short int stepLocal_9 = var_1_90;
	if ((max (var_1_34 , var_1_85)) != stepLocal_9) {
		var_1_57 = (var_1_58 - var_1_46);
	} else {
		if (var_1_21 <= var_1_70) {
			var_1_57 = (abs (var_1_58));
		} else {
			var_1_57 = ((var_1_59 - var_1_46) - var_1_44);
		}
	}


	// From: Req22Batch58Amount500
	unsigned char stepLocal_11 = var_1_28;
	if (var_1_27) {
		if (stepLocal_11 || var_1_95) {
			if (var_1_20 != var_1_23) {
				var_1_69 = (var_1_28 || (var_1_30 || var_1_29));
			} else {
				var_1_69 = (((var_1_68 / var_1_4) != var_1_90) || (var_1_28 || var_1_31));
			}
		}
	} else {
		var_1_69 = (var_1_30 && var_1_28);
	}


	// From: Req28Batch58Amount500
	unsigned char stepLocal_19 = 2.5 <= var_1_18;
	if (stepLocal_19 || var_1_69) {
		var_1_75 = ((var_1_30 || (! var_1_29)) && (var_1_27 && var_1_31));
	}


	// From: Req45Batch58Amount500
	if (var_1_75) {
		var_1_103 = var_1_87;
	} else {
		var_1_103 = var_1_41;
	}


	// From: Req47Batch58Amount500
	if (var_1_75) {
		var_1_105 = var_1_7;
	} else {
		var_1_105 = var_1_59;
	}


	// From: Req54Batch58Amount500
	if ((abs (var_1_86)) <= var_1_92) {
		var_1_112 = (abs (var_1_81));
	} else {
		if (var_1_31) {
			if (var_1_100 >= (var_1_55 / var_1_87)) {
				var_1_112 = var_1_99;
			} else {
				var_1_112 = 2;
			}
		} else {
			var_1_112 = 5;
		}
	}


	// From: Req41Batch58Amount500
	unsigned long int stepLocal_27 = var_1_34;
	if (stepLocal_27 <= last_1_var_1_97) {
		var_1_97 = ((var_1_112 - (var_1_59 + var_1_81)) + var_1_62);
	}


	// From: Req1Batch58Amount500
	signed long int stepLocal_1 = max (-256 , (var_1_49 / var_1_6));
	signed char stepLocal_0 = var_1_49;
	if ((var_1_89 / (8 + var_1_4)) > stepLocal_1) {
		if (var_1_4 != stepLocal_0) {
			var_1_1 = (min (var_1_4 , (var_1_7 - (min (var_1_89 , var_1_112)))));
		} else {
			var_1_1 = (min (var_1_7 , (var_1_4 + var_1_89)));
		}
	} else {
		var_1_1 = (abs (var_1_4));
	}


	// From: Req2Batch58Amount500
	if (var_1_7 < (var_1_10 - var_1_112)) {
		if (var_1_85 > var_1_112) {
			if ((min (var_1_43 , var_1_10)) < ((max (10000 , var_1_110)) - var_1_112)) {
				if ((max (var_1_42 , var_1_102)) != var_1_104) {
					if (var_1_112 >= (var_1_7 * var_1_4)) {
						var_1_9 = (min ((max (var_1_14 , (abs (var_1_15)))) , ((var_1_16 + var_1_17) + (var_1_18 + var_1_19))));
					}
				} else {
					var_1_9 = ((7.2043630626503014E18 - var_1_20) - (min (var_1_21 , (7.8120422756997018E18 - var_1_22))));
				}
			} else {
				var_1_9 = ((abs (var_1_19)) + ((var_1_23 + var_1_24) - var_1_20));
			}
		} else {
			var_1_9 = (max (var_1_16 , var_1_24));
		}
	}


	// From: Req4Batch58Amount500
	if (var_1_111 >= var_1_103) {
		if (var_1_27) {
			var_1_32 = ((var_1_55 + var_1_7) + (var_1_34 - var_1_85));
		}
	}


	// From: Req6Batch58Amount500
	if (var_1_78) {
		if (var_1_30) {
			var_1_37 = var_1_112;
		} else {
			var_1_37 = var_1_112;
		}
	}


	// From: Req12Batch58Amount500
	unsigned short int stepLocal_6 = var_1_10;
	if (! var_1_27) {
		if (var_1_18 < (min (var_1_16 , var_1_21))) {
			var_1_51 = (max ((max (10.625f , (max (var_1_16 , var_1_23)))) , var_1_21));
		} else {
			if (var_1_112 >= stepLocal_6) {
				var_1_51 = 2.275f;
			}
		}
	} else {
		var_1_51 = var_1_24;
	}


	// From: Req27Batch58Amount500
	if ((min (var_1_9 , (var_1_18 * var_1_14))) <= var_1_70) {
		if (var_1_39 < (max ((var_1_112 * var_1_111) , 32u))) {
			var_1_74 = (max ((var_1_59 + (-2 + var_1_45)) , var_1_46));
		} else {
			var_1_74 = var_1_112;
		}
	} else {
		var_1_74 = var_1_58;
	}


	// From: Req29Batch58Amount500
	unsigned long int stepLocal_21 = var_1_53;
	unsigned char stepLocal_20 = var_1_34 < var_1_53;
	if (stepLocal_21 < var_1_103) {
		if (var_1_42 < var_1_17) {
			if (var_1_71 && stepLocal_20) {
				var_1_76 = (var_1_63 - var_1_90);
			}
		}
	} else {
		var_1_76 = 32;
	}


	// From: Req39Batch58Amount500
	unsigned char stepLocal_26 = var_1_28;
	if (var_1_24 <= var_1_70) {
		if (var_1_95) {
			if (! (var_1_14 <= var_1_16)) {
				var_1_93 = (min ((abs (var_1_32)) , var_1_79));
			}
		} else {
			if (var_1_75 && stepLocal_26) {
				var_1_93 = (var_1_105 + var_1_103);
			} else {
				var_1_93 = ((abs (abs (var_1_92))) - (var_1_94 - 128));
			}
		}
	} else {
		var_1_93 = (min ((min ((var_1_85 - var_1_7) , var_1_48)) , -100000));
	}


	// From: Req26Batch58Amount500
	signed long int stepLocal_18 = var_1_97;
	signed long int stepLocal_17 = -4;
	unsigned char stepLocal_16 = var_1_25;
	unsigned char stepLocal_15 = var_1_29;
	if (var_1_31 && stepLocal_16) {
		if (stepLocal_18 == (var_1_39 | (var_1_7 - var_1_44))) {
			var_1_73 = (abs (var_1_44));
		} else {
			if (stepLocal_15 || (var_1_22 == var_1_42)) {
				var_1_73 = ((max ((max (var_1_47 , var_1_46)) , var_1_65)) + var_1_48);
			} else {
				var_1_73 = (16 - (var_1_46 + var_1_47));
			}
		}
	} else {
		if (last_1_var_1_73 < stepLocal_17) {
			var_1_73 = (abs (var_1_45));
		} else {
			var_1_73 = var_1_64;
		}
	}


	// From: Req25Batch58Amount500
	unsigned char stepLocal_14 = var_1_28;
	unsigned char stepLocal_13 = var_1_22 <= var_1_16;
	if ((var_1_74 >= var_1_48) && stepLocal_14) {
		var_1_72 = (abs (var_1_59));
	} else {
		if (var_1_82 && stepLocal_13) {
			var_1_72 = (var_1_79 + (max ((max (var_1_44 , var_1_4)) , var_1_59)));
		}
	}


	// From: Req18Batch58Amount500
	unsigned long int stepLocal_10 = (max (var_1_4 , var_1_40)) / var_1_7;
	if (((var_1_38 >> var_1_48) + var_1_10) >= stepLocal_10) {
		var_1_60 = (var_1_58 + (var_1_4 - var_1_47));
	} else {
		var_1_60 = (var_1_73 + 5);
	}


	// From: Req16Batch58Amount500
	signed short int stepLocal_8 = var_1_60;
	if (8 <= stepLocal_8) {
		var_1_56 = ((7.146383286658302E18 - (max (var_1_22 , var_1_20))) - var_1_23);
	}
}



void updateVariables() {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 127);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 32767);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65535);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854765600e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854765600e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -922337.2036854765600e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854765600e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -230584.3009213691390e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691390e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -230584.3009213691390e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691390e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -230584.3009213691390e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691390e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -230584.3009213691390e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691390e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427382800e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854765600e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427382800e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691390e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 2305843.009213691390e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 1073741823);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 536870912);
	assume_abort_if_not(var_1_39 <= 1073741824);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 536870912);
	assume_abort_if_not(var_1_40 <= 1073741823);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 1073741823);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_44 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 126);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -31);
	assume_abort_if_not(var_1_45 <= 32);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 31);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 31);
	var_1_48 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_48 >= -63);
	assume_abort_if_not(var_1_48 <= 63);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 2147483647);
	assume_abort_if_not(var_1_54 <= 4294967294);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= -1);
	assume_abort_if_not(var_1_58 <= 126);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= 62);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 127);
	assume_abort_if_not(var_1_63 <= 255);
	var_1_64 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_64 >= -127);
	assume_abort_if_not(var_1_64 <= 126);
	var_1_65 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_65 >= -15);
	assume_abort_if_not(var_1_65 <= 16);
	var_1_66 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 126);
	var_1_68 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_68 >= 1073741822);
	assume_abort_if_not(var_1_68 <= 2147483646);
	var_1_81 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 63);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 1);
	assume_abort_if_not(var_1_83 <= 1);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 127);
	assume_abort_if_not(var_1_86 <= 254);
	var_1_87 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_87 >= 31);
	assume_abort_if_not(var_1_87 <= 64);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 32);
	assume_abort_if_not(var_1_88 <= 63);
	var_1_91 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_91 >= 16383);
	assume_abort_if_not(var_1_91 <= 32767);
	var_1_94 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_94 >= 1073741823);
	assume_abort_if_not(var_1_94 <= 2147483646);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 0);
	var_1_99 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_99 >= 190);
	assume_abort_if_not(var_1_99 <= 254);
	var_1_100 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_100 >= 0);
	assume_abort_if_not(var_1_100 <= 31);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_111 = var_1_111;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_89 / (8 + var_1_4)) > (max (-256 , (var_1_49 / var_1_6)))) ? ((var_1_4 != var_1_49) ? (var_1_1 == ((unsigned short int) (min (var_1_4 , (var_1_7 - (min (var_1_89 , var_1_112))))))) : (var_1_1 == ((unsigned short int) (min (var_1_7 , (var_1_4 + var_1_89)))))) : (var_1_1 == ((unsigned short int) (abs (var_1_4))))) && ((var_1_7 < (var_1_10 - var_1_112)) ? ((var_1_85 > var_1_112) ? (((min (var_1_43 , var_1_10)) < ((max (10000 , var_1_110)) - var_1_112)) ? (((max (var_1_42 , var_1_102)) != var_1_104) ? ((var_1_112 >= (var_1_7 * var_1_4)) ? (var_1_9 == ((double) (min ((max (var_1_14 , (abs (var_1_15)))) , ((var_1_16 + var_1_17) + (var_1_18 + var_1_19)))))) : 1) : (var_1_9 == ((double) ((7.2043630626503014E18 - var_1_20) - (min (var_1_21 , (7.8120422756997018E18 - var_1_22))))))) : (var_1_9 == ((double) ((abs (var_1_19)) + ((var_1_23 + var_1_24) - var_1_20))))) : (var_1_9 == ((double) (max (var_1_16 , var_1_24))))) : 1)) && ((last_1_var_1_103 <= ((last_1_var_1_98 * last_1_var_1_80) + (last_1_var_1_1 * var_1_6))) ? (var_1_25 == ((unsigned char) (! var_1_27))) : (((last_1_var_1_42 * (var_1_24 - var_1_23)) >= (max (var_1_20 , var_1_22))) ? (var_1_27 ? (var_1_25 == ((unsigned char) ((var_1_28 || var_1_29) || var_1_30))) : (var_1_25 == ((unsigned char) ((! var_1_29) || var_1_31)))) : (var_1_25 == ((unsigned char) var_1_31))))) && ((var_1_111 >= var_1_103) ? (var_1_27 ? (var_1_32 == ((unsigned long int) ((var_1_55 + var_1_7) + (var_1_34 - var_1_85)))) : 1) : 1)) && ((var_1_21 >= (var_1_42 / var_1_36)) ? (var_1_35 == ((double) ((var_1_24 - var_1_20) + var_1_19))) : (((var_1_106 < var_1_10) && var_1_25) ? (var_1_35 == ((double) (var_1_20 - 999.3))) : ((var_1_52 < var_1_6) ? (var_1_27 ? (var_1_35 == ((double) (max (var_1_17 , var_1_15)))) : ((var_1_101 > var_1_21) ? ((var_1_14 == var_1_42) ? (var_1_35 == ((double) (var_1_17 + (max ((var_1_19 + var_1_23) , var_1_16))))) : 1) : (var_1_35 == ((double) ((abs (var_1_17)) + var_1_19))))) : (var_1_35 == ((double) (min (var_1_23 , (var_1_19 + var_1_22))))))))) && (var_1_78 ? (var_1_30 ? (var_1_37 == ((unsigned short int) var_1_112)) : (var_1_37 == ((unsigned short int) var_1_112))) : 1)) && (((5.8 * var_1_21) < var_1_36) ? (var_1_38 == ((unsigned long int) (min (last_1_var_1_111 , (var_1_10 + last_1_var_1_85))))) : (var_1_38 == ((unsigned long int) ((var_1_34 + (var_1_39 + var_1_40)) - (var_1_41 - last_1_var_1_111)))))) && ((1u > var_1_98) ? (var_1_42 == ((float) (min (var_1_21 , (63.4f + (max (var_1_24 , var_1_17))))))) : 1)) && ((var_1_40 == (var_1_4 * 32u)) ? (var_1_43 == ((signed char) (abs (var_1_44 - 8)))) : (var_1_43 == ((signed char) ((var_1_45 + (var_1_46 - var_1_47)) + var_1_48))))) && (var_1_29 ? (var_1_49 == ((signed char) (max (var_1_47 , var_1_46)))) : (var_1_49 == ((signed char) (var_1_47 + var_1_46))))) && (var_1_50 == ((double) var_1_20))) && ((! var_1_27) ? ((var_1_18 < (min (var_1_16 , var_1_21))) ? (var_1_51 == ((float) (max ((max (10.625f , (max (var_1_16 , var_1_23)))) , var_1_21)))) : ((var_1_112 >= var_1_10) ? (var_1_51 == ((float) 2.275f)) : 1)) : (var_1_51 == ((float) var_1_24)))) && (var_1_52 == ((signed long int) var_1_10))) && ((((var_1_21 - var_1_23) + var_1_24) > var_1_16) ? ((var_1_101 < (var_1_22 + (49.25 * var_1_24))) ? (var_1_53 == ((unsigned long int) (var_1_34 + var_1_39))) : 1) : (var_1_53 == ((unsigned long int) (abs (var_1_54 - var_1_34)))))) && ((var_1_29 || (var_1_53 == 1)) ? ((((var_1_22 + var_1_20) - var_1_24) != var_1_104) ? (var_1_55 == ((unsigned short int) (abs ((abs (var_1_47)) + var_1_46)))) : (var_1_55 == ((unsigned short int) (var_1_7 - var_1_47)))) : (var_1_55 == ((unsigned short int) (var_1_47 + var_1_4))))) && ((8 <= var_1_60) ? (var_1_56 == ((double) ((7.146383286658302E18 - (max (var_1_22 , var_1_20))) - var_1_23))) : 1)) && (((max (var_1_34 , var_1_85)) != var_1_90) ? (var_1_57 == ((signed char) (var_1_58 - var_1_46))) : ((var_1_21 <= var_1_70) ? (var_1_57 == ((signed char) (abs (var_1_58)))) : (var_1_57 == ((signed char) ((var_1_59 - var_1_46) - var_1_44)))))) && ((((var_1_38 >> var_1_48) + var_1_10) >= ((max (var_1_4 , var_1_40)) / var_1_7)) ? (var_1_60 == ((signed short int) (var_1_58 + (var_1_4 - var_1_47)))) : (var_1_60 == ((signed short int) (var_1_73 + 5))))) && (var_1_29 ? (var_1_61 == ((signed short int) var_1_44)) : 1)) && (((var_1_63 - (var_1_46 + var_1_47)) > var_1_7) ? (((- (var_1_101 / var_1_36)) != var_1_104) ? ((var_1_44 < var_1_90) ? (var_1_62 == ((signed char) (min ((max (var_1_59 , var_1_45)) , var_1_46)))) : (var_1_62 == ((signed char) (max ((var_1_44 - var_1_46) , var_1_64))))) : 1) : (((var_1_45 / (min (var_1_59 , var_1_6))) < (var_1_111 * var_1_46)) ? (var_1_62 == ((signed char) (((var_1_65 + 10) + var_1_46) + (5 + var_1_47)))) : (var_1_62 == ((signed char) (min (var_1_64 , (var_1_58 - var_1_66)))))))) && ((var_1_24 == var_1_17) ? (var_1_67 == ((signed long int) (max ((var_1_39 - var_1_7) , -64)))) : (var_1_67 == ((signed long int) ((var_1_68 - 200) - var_1_59))))) && (var_1_27 ? ((var_1_28 || var_1_95) ? ((var_1_20 != var_1_23) ? (var_1_69 == ((unsigned char) (var_1_28 || (var_1_30 || var_1_29)))) : (var_1_69 == ((unsigned char) (((var_1_68 / var_1_4) != var_1_90) || (var_1_28 || var_1_31))))) : 1) : (var_1_69 == ((unsigned char) (var_1_30 && var_1_28))))) && ((((var_1_59 / var_1_4) / var_1_41) >= (2u + var_1_52)) ? (var_1_70 == ((float) (min (199.6f , 0.4f)))) : 1)) && (var_1_71 == ((unsigned char) var_1_31))) && (((var_1_74 >= var_1_48) && var_1_28) ? (var_1_72 == ((unsigned short int) (abs (var_1_59)))) : ((var_1_82 && (var_1_22 <= var_1_16)) ? (var_1_72 == ((unsigned short int) (var_1_79 + (max ((max (var_1_44 , var_1_4)) , var_1_59))))) : 1))) && ((var_1_31 && var_1_25) ? ((var_1_97 == (var_1_39 | (var_1_7 - var_1_44))) ? (var_1_73 == ((signed char) (abs (var_1_44)))) : ((var_1_29 || (var_1_22 == var_1_42)) ? (var_1_73 == ((signed char) ((max ((max (var_1_47 , var_1_46)) , var_1_65)) + var_1_48))) : (var_1_73 == ((signed char) (16 - (var_1_46 + var_1_47)))))) : ((last_1_var_1_73 < -4) ? (var_1_73 == ((signed char) (abs (var_1_45)))) : (var_1_73 == ((signed char) var_1_64))))) && (((min (var_1_9 , (var_1_18 * var_1_14))) <= var_1_70) ? ((var_1_39 < (max ((var_1_112 * var_1_111) , 32u))) ? (var_1_74 == ((signed long int) (max ((var_1_59 + (-2 + var_1_45)) , var_1_46)))) : (var_1_74 == ((signed long int) var_1_112))) : (var_1_74 == ((signed long int) var_1_58)))) && (((2.5 <= var_1_18) || var_1_69) ? (var_1_75 == ((unsigned char) ((var_1_30 || (! var_1_29)) && (var_1_27 && var_1_31)))) : 1)) && ((var_1_53 < var_1_103) ? ((var_1_42 < var_1_17) ? ((var_1_71 && (var_1_34 < var_1_53)) ? (var_1_76 == ((signed long int) (var_1_63 - var_1_90))) : 1) : 1) : (var_1_76 == ((signed long int) 32)))) && (var_1_78 == ((unsigned char) (! var_1_31)))) && ((var_1_52 < var_1_46) ? ((var_1_10 != var_1_47) ? (var_1_79 == ((unsigned long int) (max ((var_1_54 - var_1_47) , (abs (var_1_59)))))) : (var_1_79 == ((unsigned long int) (var_1_54 - (var_1_4 + var_1_46))))) : 1)) && (var_1_84 ? (var_1_80 == ((signed char) (var_1_46 + (var_1_47 - var_1_81)))) : (var_1_80 == ((signed char) var_1_81)))) && (var_1_29 ? ((var_1_63 < (var_1_38 + var_1_10)) ? (var_1_82 == ((unsigned char) 0)) : (var_1_82 == ((unsigned char) (((var_1_84 || var_1_31) && var_1_27) && var_1_83)))) : 1)) && ((((var_1_46 + -25) % var_1_59) <= -5) ? ((var_1_31 || (! var_1_30)) ? (var_1_84 == ((unsigned char) (! 1))) : 1) : 1)) && ((var_1_24 >= last_1_var_1_56) ? (var_1_85 == ((unsigned char) (var_1_86 - ((var_1_87 + var_1_88) - var_1_46)))) : (var_1_29 ? (var_1_85 == ((unsigned char) (min (var_1_81 , var_1_66)))) : 1))) && ((var_1_6 < (var_1_43 - 500)) ? (var_1_71 ? (var_1_89 == ((signed char) (min (((var_1_81 - var_1_47) + var_1_46) , (var_1_44 - (max (var_1_88 , var_1_87))))))) : (var_1_89 == ((signed char) var_1_58))) : (var_1_89 == ((signed char) (var_1_47 - var_1_44))))) && (var_1_90 == ((unsigned short int) ((max ((var_1_91 - var_1_4) , (abs (var_1_98)))) + var_1_88)))) && (((var_1_98 > (var_1_65 & var_1_38)) || (var_1_90 > (abs (var_1_45)))) ? ((var_1_41 < var_1_46) ? (var_1_92 == ((signed long int) (abs (var_1_7 - var_1_98)))) : 1) : (var_1_92 == ((signed long int) (4 + var_1_85))))) && ((var_1_24 <= var_1_70) ? (var_1_95 ? ((! (var_1_14 <= var_1_16)) ? (var_1_93 == ((signed long int) (min ((abs (var_1_32)) , var_1_79)))) : 1) : ((var_1_75 && var_1_28) ? (var_1_93 == ((signed long int) (var_1_105 + var_1_103))) : (var_1_93 == ((signed long int) ((abs (abs (var_1_92))) - (var_1_94 - 128)))))) : (var_1_93 == ((signed long int) (min ((min ((var_1_85 - var_1_7) , var_1_48)) , -100000)))))) && ((var_1_68 < var_1_40) ? (var_1_95 == ((unsigned char) (((var_1_46 - var_1_91) != (var_1_41 / var_1_7)) || (! var_1_96)))) : 1)) && ((var_1_34 <= last_1_var_1_97) ? (var_1_97 == ((signed long int) ((var_1_112 - (var_1_59 + var_1_81)) + var_1_62))) : 1)) && ((var_1_78 || var_1_71) ? (var_1_98 == ((unsigned char) (var_1_87 + 2))) : (var_1_98 == ((unsigned char) ((var_1_99 - (var_1_88 - var_1_100)) - var_1_66))))) && (var_1_101 == ((float) var_1_19))) && (var_1_84 ? (var_1_102 == ((float) var_1_24)) : (var_1_102 == ((float) var_1_17)))) && (var_1_75 ? (var_1_103 == ((unsigned long int) var_1_87)) : (var_1_103 == ((unsigned long int) var_1_41)))) && (var_1_25 ? (var_1_104 == ((float) 15.5f)) : (var_1_104 == ((float) var_1_22)))) && (var_1_75 ? (var_1_105 == ((unsigned short int) var_1_7)) : (var_1_105 == ((unsigned short int) var_1_59)))) && (var_1_30 ? (var_1_106 == ((signed char) var_1_46)) : 1)) && (var_1_71 ? (var_1_107 == ((signed short int) var_1_81)) : 1)) && (var_1_108 == ((unsigned long int) var_1_87))) && (var_1_109 == ((signed char) 4))) && (var_1_71 ? (var_1_110 == ((unsigned long int) var_1_68)) : (var_1_110 == ((unsigned long int) var_1_54)))) && (var_1_30 ? (var_1_111 == ((unsigned long int) var_1_99)) : (var_1_111 == ((unsigned long int) var_1_53)))) && (((abs (var_1_86)) <= var_1_92) ? (var_1_112 == ((unsigned char) (abs (var_1_81)))) : (var_1_31 ? ((var_1_100 >= (var_1_55 / var_1_87)) ? (var_1_112 == ((unsigned char) var_1_99)) : (var_1_112 == ((unsigned char) 2))) : (var_1_112 == ((unsigned char) 5))))
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
