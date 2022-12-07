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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch46Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double var_1_1 = 8.25;
double var_1_2 = 4.6;
double var_1_3 = 1.25;
double var_1_4 = 0.0;
double var_1_5 = 2.8;
double var_1_6 = 7.8;
double var_1_7 = 100000000000000.72;
double var_1_8 = 10.3;
double var_1_9 = 64.875;
unsigned long int var_1_10 = 64;
unsigned long int var_1_11 = 3400562154;
unsigned short int var_1_13 = 5;
unsigned short int var_1_15 = 62040;
unsigned short int var_1_16 = 33955;
unsigned long int var_1_18 = 16;
signed short int var_1_19 = 2;
signed long int var_1_22 = 16;
signed long int var_1_23 = 2065264923;
signed long int var_1_24 = 2037605328;
signed short int var_1_25 = -64;
unsigned long int var_1_30 = 256;
unsigned short int var_1_33 = 2;
signed char var_1_34 = -4;
signed short int var_1_35 = -16;
signed char var_1_36 = 2;
signed char var_1_37 = 16;
signed char var_1_38 = 10;
signed char var_1_39 = 50;
double var_1_40 = 1.625;
unsigned char var_1_41 = 2;
unsigned char var_1_42 = 64;
unsigned char var_1_43 = 5;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
double var_1_47 = 4.95;
signed long int var_1_48 = 2;
signed long int var_1_49 = 1000000000;
float var_1_50 = 8.8;
signed char var_1_51 = 0;
float var_1_52 = 3.5;
signed short int var_1_53 = 10;
unsigned short int var_1_54 = 8;
unsigned short int var_1_55 = 27503;
unsigned short int var_1_56 = 26795;
unsigned char var_1_57 = 100;
unsigned char var_1_58 = 10;
unsigned long int var_1_59 = 64;
unsigned long int var_1_60 = 32;
unsigned char var_1_61 = 64;
unsigned char var_1_62 = 10;
unsigned char var_1_63 = 16;
unsigned char var_1_64 = 200;
unsigned char var_1_65 = 32;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
double var_1_68 = 50.25;
unsigned short int var_1_69 = 128;
unsigned short int var_1_71 = 56967;
unsigned char var_1_72 = 1;
unsigned char var_1_73 = 200;
unsigned char var_1_74 = 1;
float var_1_75 = 31.8;
signed long int var_1_76 = 2;
unsigned long int var_1_77 = 0;
unsigned long int var_1_78 = 4;
unsigned long int var_1_80 = 1710763047;
unsigned long int var_1_81 = 1535629873;
unsigned char var_1_82 = 0;
signed short int var_1_83 = 256;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 0;
unsigned char var_1_86 = 0;
unsigned char var_1_87 = 128;
signed long int var_1_89 = 100000000;
unsigned long int var_1_90 = 3632161203;
unsigned char var_1_92 = 1;
unsigned long int var_1_93 = 8;
signed char var_1_95 = 5;
float var_1_96 = 2.284;
float var_1_97 = 64.375;
signed short int var_1_98 = -16;
unsigned char var_1_99 = 1;
unsigned char var_1_100 = 5;
unsigned char var_1_101 = 50;
unsigned char var_1_102 = 1;
unsigned short int var_1_103 = 1;
unsigned short int var_1_104 = 8;
unsigned char var_1_105 = 100;
signed char var_1_106 = 50;
unsigned short int var_1_107 = 5;
double var_1_108 = -0.5;
unsigned long int var_1_109 = 10;
signed char var_1_110 = 1;
double var_1_111 = 63.5;
double var_1_112 = 2.8;
signed short int var_1_113 = -5;
double var_1_114 = 0.6;
double var_1_115 = 128.25;
signed char var_1_116 = 16;
unsigned long int var_1_117 = 5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_18 = 16;
unsigned long int last_1_var_1_30 = 256;
unsigned char last_1_var_1_44 = 0;
signed long int last_1_var_1_48 = 2;
float last_1_var_1_52 = 3.5;
unsigned char last_1_var_1_57 = 100;
unsigned long int last_1_var_1_59 = 64;
unsigned char last_1_var_1_61 = 64;
unsigned short int last_1_var_1_69 = 128;
unsigned long int last_1_var_1_77 = 0;
unsigned long int last_1_var_1_78 = 4;
unsigned char last_1_var_1_82 = 0;
unsigned char last_1_var_1_84 = 1;
unsigned char last_1_var_1_87 = 128;
signed long int last_1_var_1_89 = 100000000;
unsigned char last_1_var_1_92 = 1;
unsigned char last_1_var_1_100 = 5;
unsigned short int last_1_var_1_104 = 8;
unsigned long int last_1_var_1_109 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req27Batch46Amount500
	if (last_1_var_1_84) {
		if (((var_1_73 - var_1_62) - var_1_43) == ((max (8 , last_1_var_1_30)) - var_1_58)) {
			var_1_72 = (min (((200 - var_1_63) - (var_1_42 - var_1_58)) , (max (var_1_66 , (var_1_64 - var_1_37)))));
		}
	}


	// From: Req26Batch46Amount500
	unsigned long int stepLocal_15 = last_1_var_1_109;
	unsigned char stepLocal_14 = last_1_var_1_92;
	if (stepLocal_15 != last_1_var_1_59) {
		var_1_69 = (abs (min ((var_1_15 - last_1_var_1_18) , (abs (var_1_36)))));
	} else {
		if (var_1_5 == var_1_9) {
			var_1_69 = (var_1_15 - (28137 - last_1_var_1_77));
		} else {
			if (stepLocal_14 || last_1_var_1_82) {
				var_1_69 = ((abs (var_1_71 - var_1_64)) - last_1_var_1_61);
			}
		}
	}


	// From: Req24Batch46Amount500
	signed long int stepLocal_13 = min (2 , (var_1_56 + last_1_var_1_69));
	signed long int stepLocal_12 = last_1_var_1_57;
	if (stepLocal_13 >= var_1_35) {
		var_1_65 = (max ((abs (var_1_36)) , (max (var_1_63 , var_1_42))));
	} else {
		if (stepLocal_12 == (var_1_56 << (max (var_1_66 , var_1_67)))) {
			var_1_65 = (max ((abs (var_1_62)) , (var_1_64 - (var_1_63 + 10))));
		} else {
			var_1_65 = 5;
		}
	}


	// From: Req56Batch46Amount500
	if (var_1_85) {
		var_1_113 = var_1_65;
	}


	// From: Req44Batch46Amount500
	signed long int stepLocal_26 = var_1_23 | var_1_58;
	if (stepLocal_26 >= (min ((var_1_19 * last_1_var_1_87) , (last_1_var_1_78 * last_1_var_1_100)))) {
		if (last_1_var_1_44) {
			var_1_100 = (var_1_64 - var_1_36);
		} else {
			if (last_1_var_1_52 < var_1_5) {
				var_1_100 = (min ((var_1_64 - (abs (var_1_58))) , var_1_101));
			} else {
				var_1_100 = (var_1_63 + (min (var_1_66 , var_1_42)));
			}
		}
	} else {
		var_1_100 = var_1_64;
	}


	// From: Req35Batch46Amount500
	signed long int stepLocal_19 = last_1_var_1_104;
	unsigned char stepLocal_18 = var_1_73;
	if ((var_1_62 / var_1_73) >= stepLocal_19) {
		var_1_84 = (var_1_46 && var_1_85);
	} else {
		if ((0 ^ (max (last_1_var_1_18 , last_1_var_1_57))) > stepLocal_18) {
			var_1_84 = (var_1_45 || var_1_86);
		}
	}


	// From: Req28Batch46Amount500
	if (var_1_84) {
		var_1_74 = ((var_1_15 < var_1_49) && (! var_1_46));
	} else {
		var_1_74 = var_1_45;
	}


	// From: Req49Batch46Amount500
	if (var_1_84) {
		var_1_106 = var_1_38;
	} else {
		var_1_106 = var_1_38;
	}


	// From: Req11Batch46Amount500
	if (last_1_var_1_82) {
		var_1_41 = ((var_1_42 - var_1_43) + var_1_37);
	}


	// From: Req52Batch46Amount500
	var_1_109 = var_1_41;


	// From: Req21Batch46Amount500
	var_1_59 = var_1_41;


	// From: Req1Batch46Amount500
	if (16.75 > (var_1_2 - var_1_3)) {
		var_1_1 = ((var_1_4 - (max (var_1_5 , var_1_6))) - (max ((var_1_7 + var_1_8) , var_1_9)));
	} else {
		var_1_1 = (abs (var_1_4));
	}


	// From: Req8Batch46Amount500
	if (var_1_24 == var_1_15) {
		var_1_33 = var_1_72;
	}


	// From: Req13Batch46Amount500
	if (var_1_2 >= var_1_5) {
		var_1_47 = (max (((abs (var_1_6)) + var_1_8) , ((min (var_1_7 , var_1_9)) - (7.6240363585946644E18 - var_1_5))));
	}


	// From: Req22Batch46Amount500
	if (var_1_6 >= var_1_3) {
		var_1_60 = (3630807617u - (var_1_58 + (abs (var_1_49))));
	} else {
		var_1_60 = ((abs (var_1_11)) - var_1_43);
	}


	// From: Req25Batch46Amount500
	var_1_68 = var_1_6;


	// From: Req34Batch46Amount500
	var_1_83 = (var_1_63 + (-256 + var_1_36));


	// From: Req40Batch46Amount500
	if (var_1_46) {
		if (var_1_2 > (var_1_9 - var_1_5)) {
			var_1_95 = (var_1_58 - 32);
		} else {
			var_1_95 = var_1_58;
		}
	}


	// From: Req41Batch46Amount500
	if (var_1_1 >= 1.4) {
		var_1_96 = (abs (var_1_7));
	} else {
		var_1_96 = ((var_1_5 + (var_1_97 + 3.4f)) - ((max (var_1_8 , var_1_7)) + var_1_6));
	}


	// From: Req45Batch46Amount500
	var_1_102 = var_1_46;


	// From: Req47Batch46Amount500
	var_1_104 = var_1_73;


	// From: Req48Batch46Amount500
	if (var_1_86) {
		var_1_105 = var_1_62;
	} else {
		var_1_105 = var_1_42;
	}


	// From: Req50Batch46Amount500
	if (var_1_102) {
		var_1_107 = var_1_58;
	} else {
		var_1_107 = 4;
	}


	// From: Req54Batch46Amount500
	var_1_111 = var_1_5;


	// From: Req55Batch46Amount500
	if (var_1_45) {
		var_1_112 = var_1_4;
	} else {
		var_1_112 = var_1_6;
	}


	// From: Req57Batch46Amount500
	var_1_114 = var_1_97;


	// From: Req3Batch46Amount500
	unsigned char stepLocal_0 = (50u >> var_1_72) < var_1_11;
	if (var_1_84 && stepLocal_0) {
		var_1_13 = ((abs (max (var_1_15 , var_1_16))) - var_1_100);
	}


	// From: Req6Batch46Amount500
	var_1_25 = (max ((var_1_65 - (min (var_1_41 , var_1_100))) , var_1_106));


	// From: Req9Batch46Amount500
	if (((var_1_41 - var_1_105) % (min (var_1_19 , var_1_35))) > var_1_100) {
		var_1_34 = (abs (var_1_36 - var_1_37));
	} else {
		var_1_34 = (min (var_1_37 , (var_1_38 + var_1_39)));
	}


	// From: Req12Batch46Amount500
	unsigned char stepLocal_5 = var_1_74;
	if (var_1_74 || stepLocal_5) {
		var_1_44 = (! var_1_45);
	} else {
		var_1_44 = (! (var_1_102 || var_1_46));
	}


	// From: Req20Batch46Amount500
	unsigned long int stepLocal_11 = var_1_109;
	if (var_1_56 > stepLocal_11) {
		var_1_57 = (var_1_43 + var_1_36);
	} else {
		var_1_57 = ((var_1_43 + var_1_58) + (min (var_1_42 , var_1_36)));
	}


	// From: Req2Batch46Amount500
	var_1_10 = (var_1_11 - var_1_105);


	// From: Req10Batch46Amount500
	unsigned char stepLocal_4 = var_1_35 < var_1_107;
	if ((var_1_9 * var_1_5) >= (- (var_1_3 + var_1_6))) {
		var_1_40 = ((abs (var_1_8)) + 3.5);
	} else {
		if (var_1_102 && stepLocal_4) {
			var_1_40 = (var_1_6 - var_1_4);
		} else {
			var_1_40 = (max (0.5 , (min (var_1_5 , var_1_8))));
		}
	}


	// From: Req14Batch46Amount500
	if (last_1_var_1_48 != var_1_72) {
		var_1_48 = (min ((var_1_16 + var_1_39) , var_1_60));
	} else {
		if (var_1_44) {
			var_1_48 = (var_1_39 + var_1_19);
		} else {
			var_1_48 = ((max (var_1_60 , var_1_37)) + ((var_1_49 - var_1_15) - var_1_36));
		}
	}


	// From: Req18Batch46Amount500
	unsigned char stepLocal_10 = var_1_43;
	if ((max ((max (var_1_107 , var_1_109)) , (min (var_1_107 , var_1_37)))) >= stepLocal_10) {
		var_1_53 = (var_1_105 - var_1_107);
	} else {
		var_1_53 = (var_1_107 + (max ((var_1_65 - var_1_43) , var_1_33)));
	}


	// From: Req23Batch46Amount500
	if ((var_1_2 + var_1_114) >= var_1_47) {
		var_1_61 = ((min (var_1_43 , var_1_36)) + (var_1_58 + (var_1_62 + var_1_63)));
	} else {
		var_1_61 = ((var_1_64 - var_1_43) - var_1_62);
	}


	// From: Req36Batch46Amount500
	unsigned long int stepLocal_21 = var_1_11 ^ (var_1_71 - var_1_42);
	signed char stepLocal_20 = var_1_39;
	if (stepLocal_20 <= (var_1_61 / (abs (var_1_42)))) {
		if (stepLocal_21 < (max (var_1_81 , last_1_var_1_87))) {
			var_1_87 = (min (((min (var_1_43 , var_1_62)) + (var_1_42 - 2)) , (var_1_66 + var_1_37)));
		} else {
			var_1_87 = var_1_43;
		}
	}


	// From: Req59Batch46Amount500
	unsigned short int stepLocal_27 = var_1_71;
	if (var_1_87 > stepLocal_27) {
		var_1_116 = var_1_67;
	} else {
		var_1_116 = (min ((var_1_62 - 10) , var_1_67));
	}


	// From: Req60Batch46Amount500
	signed long int stepLocal_29 = max (var_1_55 , var_1_87);
	unsigned short int stepLocal_28 = var_1_16;
	if (stepLocal_28 == var_1_105) {
		if (stepLocal_29 <= var_1_53) {
			var_1_117 = 128u;
		}
	}


	// From: Req32Batch46Amount500
	if (var_1_46) {
		if (! var_1_74) {
			var_1_78 = (abs (var_1_13));
		} else {
			var_1_78 = (var_1_11 - (var_1_23 - var_1_63));
		}
	} else {
		if (var_1_100 > var_1_61) {
			var_1_78 = (min ((var_1_11 - var_1_13) , var_1_41));
		} else {
			var_1_78 = (((var_1_80 - var_1_69) + var_1_81) - var_1_61);
		}
	}


	// From: Req33Batch46Amount500
	unsigned char stepLocal_17 = var_1_87;
	if (var_1_13 >= stepLocal_17) {
		var_1_82 = ((var_1_2 > (var_1_6 / var_1_4)) && (! var_1_46));
	}


	// From: Req4Batch46Amount500
	unsigned char stepLocal_2 = var_1_102;
	signed long int stepLocal_1 = ~ (var_1_105 / var_1_19);
	if (stepLocal_1 >= var_1_15) {
		var_1_18 = (min (var_1_16 , var_1_69));
	} else {
		if (var_1_82) {
			if (stepLocal_2 && var_1_44) {
				var_1_18 = var_1_16;
			}
		} else {
			var_1_18 = (max (((1000u + var_1_16) + last_1_var_1_18) , var_1_11));
		}
	}


	// From: Req31Batch46Amount500
	signed long int stepLocal_16 = var_1_35 % var_1_73;
	if (var_1_72 >= stepLocal_16) {
		var_1_77 = (var_1_58 + var_1_25);
	}


	// From: Req38Batch46Amount500
	signed short int stepLocal_23 = var_1_113;
	unsigned char stepLocal_22 = var_1_8 < (- var_1_68);
	if (var_1_61 <= stepLocal_23) {
		var_1_92 = (var_1_46 && (! var_1_86));
	} else {
		if (stepLocal_22 || var_1_86) {
			if (! var_1_45) {
				var_1_92 = (var_1_46 && (! var_1_45));
			} else {
				var_1_92 = var_1_86;
			}
		}
	}


	// From: Req39Batch46Amount500
	if (var_1_44) {
		var_1_93 = (min (var_1_87 , (min (var_1_34 , (abs (var_1_41))))));
	} else {
		var_1_93 = (var_1_43 + var_1_24);
	}


	// From: Req42Batch46Amount500
	if (var_1_45) {
		var_1_98 = (var_1_87 - var_1_93);
	} else {
		var_1_98 = var_1_66;
	}


	// From: Req16Batch46Amount500
	unsigned short int stepLocal_7 = var_1_104;
	if (stepLocal_7 > (- (abs (var_1_87)))) {
		var_1_51 = (min ((abs (var_1_36)) , var_1_37));
	} else {
		var_1_51 = (var_1_43 - var_1_37);
	}


	// From: Req19Batch46Amount500
	if (4 <= var_1_37) {
		if (var_1_41 > (var_1_36 * var_1_83)) {
			var_1_54 = var_1_87;
		}
	} else {
		if (((var_1_24 - var_1_49) - (var_1_36 + var_1_87)) > var_1_39) {
			var_1_54 = (max (var_1_42 , var_1_87));
		} else {
			if (var_1_95 <= ((var_1_35 * var_1_61) ^ var_1_41)) {
				var_1_54 = (var_1_36 + 1);
			} else {
				var_1_54 = ((min ((25988 + var_1_55) , var_1_16)) - ((var_1_56 - var_1_37) - 32));
			}
		}
	}


	// From: Req46Batch46Amount500
	if (var_1_92) {
		var_1_103 = var_1_36;
	} else {
		var_1_103 = var_1_64;
	}


	// From: Req51Batch46Amount500
	if (var_1_82) {
		var_1_108 = var_1_5;
	} else {
		var_1_108 = var_1_4;
	}


	// From: Req53Batch46Amount500
	if (var_1_82) {
		var_1_110 = 25;
	} else {
		var_1_110 = var_1_37;
	}


	// From: Req58Batch46Amount500
	if (var_1_82) {
		var_1_115 = var_1_7;
	}


	// From: Req37Batch46Amount500
	if (((var_1_90 - var_1_78) - (var_1_81 - var_1_71)) != var_1_61) {
		if ((var_1_73 / var_1_16) <= var_1_19) {
			if (var_1_92 && var_1_86) {
				var_1_89 = 100000;
			} else {
				if (var_1_85) {
					var_1_89 = (max (var_1_113 , (max (var_1_78 , (abs (var_1_62))))));
				} else {
					var_1_89 = ((min (var_1_19 , (max (var_1_105 , last_1_var_1_89)))) + var_1_98);
				}
			}
		} else {
			var_1_89 = 100;
		}
	} else {
		if (var_1_74) {
			var_1_89 = (256 - var_1_61);
		}
	}


	// From: Req7Batch46Amount500
	signed long int stepLocal_3 = (min (var_1_65 , var_1_87)) - (var_1_65 + var_1_41);
	if (stepLocal_3 <= (var_1_89 ^ -2)) {
		var_1_30 = (var_1_87 + (var_1_15 + var_1_89));
	}


	// From: Req30Batch46Amount500
	if (((var_1_18 / var_1_16) / (max (var_1_56 , 256))) > (var_1_24 * var_1_72)) {
		if (((max (var_1_73 , var_1_64)) - var_1_62) <= var_1_39) {
			var_1_76 = (max ((var_1_18 - (var_1_23 - var_1_56)) , (min ((max (var_1_34 , var_1_89)) , (var_1_67 + var_1_61)))));
		} else {
			var_1_76 = ((var_1_23 - var_1_63) - var_1_61);
		}
	}


	// From: Req5Batch46Amount500
	if (var_1_9 == (min (var_1_7 , (var_1_3 / 100.2)))) {
		var_1_22 = (var_1_72 - ((max (var_1_23 , var_1_24)) - var_1_30));
	}


	// From: Req15Batch46Amount500
	unsigned char stepLocal_6 = var_1_65;
	if (var_1_76 <= stepLocal_6) {
		var_1_50 = (min ((var_1_4 - (var_1_5 + var_1_7)) , (var_1_6 + var_1_8)));
	}


	// From: Req29Batch46Amount500
	if (var_1_4 >= var_1_7) {
		if (! (var_1_11 >= var_1_30)) {
			var_1_75 = var_1_6;
		} else {
			var_1_75 = (min (var_1_8 , var_1_4));
		}
	} else {
		if (var_1_102) {
			if (! (var_1_1 >= var_1_9)) {
				var_1_75 = (-0.4f + var_1_5);
			} else {
				var_1_75 = (var_1_6 + var_1_7);
			}
		}
	}


	// From: Req43Batch46Amount500
	unsigned long int stepLocal_25 = var_1_78 + var_1_57;
	signed long int stepLocal_24 = var_1_89;
	if (var_1_30 >= stepLocal_25) {
		if ((abs (var_1_67)) >= stepLocal_24) {
			var_1_99 = (var_1_86 || var_1_45);
		}
	}


	// From: Req17Batch46Amount500
	signed long int stepLocal_9 = var_1_76;
	signed char stepLocal_8 = var_1_36;
	if (var_1_45) {
		if (stepLocal_9 < var_1_34) {
			var_1_52 = (var_1_4 - 8.25f);
		} else {
			var_1_52 = var_1_8;
		}
	} else {
		if ((abs (var_1_37 % var_1_15)) < stepLocal_8) {
			var_1_52 = (var_1_6 + (var_1_7 - var_1_8));
		}
	}
}



void updateVariables() {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 4611686.018427382800e+12F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854765600e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427382800e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427382800e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427382800e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427382800e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854765600e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 2147483647);
	assume_abort_if_not(var_1_11 <= 4294967294);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 32767);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -32768);
	assume_abort_if_not(var_1_19 <= 32767);
	assume_abort_if_not(var_1_19 != 0);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= 1073741823);
	assume_abort_if_not(var_1_23 <= 2147483646);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= 1073741823);
	assume_abort_if_not(var_1_24 <= 2147483646);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= -32768);
	assume_abort_if_not(var_1_35 <= 32767);
	assume_abort_if_not(var_1_35 != 0);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 126);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -63);
	assume_abort_if_not(var_1_38 <= 63);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -63);
	assume_abort_if_not(var_1_39 <= 63);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 63);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 63);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_49 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_49 >= 536870911);
	assume_abort_if_not(var_1_49 <= 1073741823);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 16384);
	assume_abort_if_not(var_1_55 <= 32767);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 24575);
	assume_abort_if_not(var_1_56 <= 32767);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 32);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 31);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 190);
	assume_abort_if_not(var_1_64 <= 254);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 1);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 1);
	var_1_71 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_71 >= 49150);
	assume_abort_if_not(var_1_71 <= 65534);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 191);
	assume_abort_if_not(var_1_73 <= 255);
	var_1_80 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_80 >= 1610612735);
	assume_abort_if_not(var_1_80 <= 2147483647);
	var_1_81 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_81 >= 1073741824);
	assume_abort_if_not(var_1_81 <= 2147483647);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 1);
	assume_abort_if_not(var_1_85 <= 1);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 0);
	var_1_90 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_90 >= 3221225471);
	assume_abort_if_not(var_1_90 <= 4294967295);
	var_1_97 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_97 >= 0.0F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 2305843.009213691390e+12F && var_1_97 >= 1.0e-20F ));
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 0);
	assume_abort_if_not(var_1_101 <= 254);
}



void updateLastVariables() {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_109 = var_1_109;
}

int property() {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((16.75 > (var_1_2 - var_1_3)) ? (var_1_1 == ((double) ((var_1_4 - (max (var_1_5 , var_1_6))) - (max ((var_1_7 + var_1_8) , var_1_9))))) : (var_1_1 == ((double) (abs (var_1_4))))) && (var_1_10 == ((unsigned long int) (var_1_11 - var_1_105)))) && ((var_1_84 && ((50u >> var_1_72) < var_1_11)) ? (var_1_13 == ((unsigned short int) ((abs (max (var_1_15 , var_1_16))) - var_1_100))) : 1)) && (((~ (var_1_105 / var_1_19)) >= var_1_15) ? (var_1_18 == ((unsigned long int) (min (var_1_16 , var_1_69)))) : (var_1_82 ? ((var_1_102 && var_1_44) ? (var_1_18 == ((unsigned long int) var_1_16)) : 1) : (var_1_18 == ((unsigned long int) (max (((1000u + var_1_16) + last_1_var_1_18) , var_1_11))))))) && ((var_1_9 == (min (var_1_7 , (var_1_3 / 100.2)))) ? (var_1_22 == ((signed long int) (var_1_72 - ((max (var_1_23 , var_1_24)) - var_1_30)))) : 1)) && (var_1_25 == ((signed short int) (max ((var_1_65 - (min (var_1_41 , var_1_100))) , var_1_106))))) && ((((min (var_1_65 , var_1_87)) - (var_1_65 + var_1_41)) <= (var_1_89 ^ -2)) ? (var_1_30 == ((unsigned long int) (var_1_87 + (var_1_15 + var_1_89)))) : 1)) && ((var_1_24 == var_1_15) ? (var_1_33 == ((unsigned short int) var_1_72)) : 1)) && ((((var_1_41 - var_1_105) % (min (var_1_19 , var_1_35))) > var_1_100) ? (var_1_34 == ((signed char) (abs (var_1_36 - var_1_37)))) : (var_1_34 == ((signed char) (min (var_1_37 , (var_1_38 + var_1_39))))))) && (((var_1_9 * var_1_5) >= (- (var_1_3 + var_1_6))) ? (var_1_40 == ((double) ((abs (var_1_8)) + 3.5))) : ((var_1_102 && (var_1_35 < var_1_107)) ? (var_1_40 == ((double) (var_1_6 - var_1_4))) : (var_1_40 == ((double) (max (0.5 , (min (var_1_5 , var_1_8))))))))) && (last_1_var_1_82 ? (var_1_41 == ((unsigned char) ((var_1_42 - var_1_43) + var_1_37))) : 1)) && ((var_1_74 || var_1_74) ? (var_1_44 == ((unsigned char) (! var_1_45))) : (var_1_44 == ((unsigned char) (! (var_1_102 || var_1_46)))))) && ((var_1_2 >= var_1_5) ? (var_1_47 == ((double) (max (((abs (var_1_6)) + var_1_8) , ((min (var_1_7 , var_1_9)) - (7.6240363585946644E18 - var_1_5)))))) : 1)) && ((last_1_var_1_48 != var_1_72) ? (var_1_48 == ((signed long int) (min ((var_1_16 + var_1_39) , var_1_60)))) : (var_1_44 ? (var_1_48 == ((signed long int) (var_1_39 + var_1_19))) : (var_1_48 == ((signed long int) ((max (var_1_60 , var_1_37)) + ((var_1_49 - var_1_15) - var_1_36))))))) && ((var_1_76 <= var_1_65) ? (var_1_50 == ((float) (min ((var_1_4 - (var_1_5 + var_1_7)) , (var_1_6 + var_1_8))))) : 1)) && ((var_1_104 > (- (abs (var_1_87)))) ? (var_1_51 == ((signed char) (min ((abs (var_1_36)) , var_1_37)))) : (var_1_51 == ((signed char) (var_1_43 - var_1_37))))) && (var_1_45 ? ((var_1_76 < var_1_34) ? (var_1_52 == ((float) (var_1_4 - 8.25f))) : (var_1_52 == ((float) var_1_8))) : (((abs (var_1_37 % var_1_15)) < var_1_36) ? (var_1_52 == ((float) (var_1_6 + (var_1_7 - var_1_8)))) : 1))) && (((max ((max (var_1_107 , var_1_109)) , (min (var_1_107 , var_1_37)))) >= var_1_43) ? (var_1_53 == ((signed short int) (var_1_105 - var_1_107))) : (var_1_53 == ((signed short int) (var_1_107 + (max ((var_1_65 - var_1_43) , var_1_33))))))) && ((4 <= var_1_37) ? ((var_1_41 > (var_1_36 * var_1_83)) ? (var_1_54 == ((unsigned short int) var_1_87)) : 1) : ((((var_1_24 - var_1_49) - (var_1_36 + var_1_87)) > var_1_39) ? (var_1_54 == ((unsigned short int) (max (var_1_42 , var_1_87)))) : ((var_1_95 <= ((var_1_35 * var_1_61) ^ var_1_41)) ? (var_1_54 == ((unsigned short int) (var_1_36 + 1))) : (var_1_54 == ((unsigned short int) ((min ((25988 + var_1_55) , var_1_16)) - ((var_1_56 - var_1_37) - 32)))))))) && ((var_1_56 > var_1_109) ? (var_1_57 == ((unsigned char) (var_1_43 + var_1_36))) : (var_1_57 == ((unsigned char) ((var_1_43 + var_1_58) + (min (var_1_42 , var_1_36))))))) && (var_1_59 == ((unsigned long int) var_1_41))) && ((var_1_6 >= var_1_3) ? (var_1_60 == ((unsigned long int) (3630807617u - (var_1_58 + (abs (var_1_49)))))) : (var_1_60 == ((unsigned long int) ((abs (var_1_11)) - var_1_43))))) && (((var_1_2 + var_1_114) >= var_1_47) ? (var_1_61 == ((unsigned char) ((min (var_1_43 , var_1_36)) + (var_1_58 + (var_1_62 + var_1_63))))) : (var_1_61 == ((unsigned char) ((var_1_64 - var_1_43) - var_1_62))))) && (((min (2 , (var_1_56 + last_1_var_1_69))) >= var_1_35) ? (var_1_65 == ((unsigned char) (max ((abs (var_1_36)) , (max (var_1_63 , var_1_42)))))) : ((last_1_var_1_57 == (var_1_56 << (max (var_1_66 , var_1_67)))) ? (var_1_65 == ((unsigned char) (max ((abs (var_1_62)) , (var_1_64 - (var_1_63 + 10)))))) : (var_1_65 == ((unsigned char) 5))))) && (var_1_68 == ((double) var_1_6))) && ((last_1_var_1_109 != last_1_var_1_59) ? (var_1_69 == ((unsigned short int) (abs (min ((var_1_15 - last_1_var_1_18) , (abs (var_1_36))))))) : ((var_1_5 == var_1_9) ? (var_1_69 == ((unsigned short int) (var_1_15 - (28137 - last_1_var_1_77)))) : ((last_1_var_1_92 || last_1_var_1_82) ? (var_1_69 == ((unsigned short int) ((abs (var_1_71 - var_1_64)) - last_1_var_1_61))) : 1)))) && (last_1_var_1_84 ? ((((var_1_73 - var_1_62) - var_1_43) == ((max (8 , last_1_var_1_30)) - var_1_58)) ? (var_1_72 == ((unsigned char) (min (((200 - var_1_63) - (var_1_42 - var_1_58)) , (max (var_1_66 , (var_1_64 - var_1_37))))))) : 1) : 1)) && (var_1_84 ? (var_1_74 == ((unsigned char) ((var_1_15 < var_1_49) && (! var_1_46)))) : (var_1_74 == ((unsigned char) var_1_45)))) && ((var_1_4 >= var_1_7) ? ((! (var_1_11 >= var_1_30)) ? (var_1_75 == ((float) var_1_6)) : (var_1_75 == ((float) (min (var_1_8 , var_1_4))))) : (var_1_102 ? ((! (var_1_1 >= var_1_9)) ? (var_1_75 == ((float) (-0.4f + var_1_5))) : (var_1_75 == ((float) (var_1_6 + var_1_7)))) : 1))) && ((((var_1_18 / var_1_16) / (max (var_1_56 , 256))) > (var_1_24 * var_1_72)) ? ((((max (var_1_73 , var_1_64)) - var_1_62) <= var_1_39) ? (var_1_76 == ((signed long int) (max ((var_1_18 - (var_1_23 - var_1_56)) , (min ((max (var_1_34 , var_1_89)) , (var_1_67 + var_1_61))))))) : (var_1_76 == ((signed long int) ((var_1_23 - var_1_63) - var_1_61)))) : 1)) && ((var_1_72 >= (var_1_35 % var_1_73)) ? (var_1_77 == ((unsigned long int) (var_1_58 + var_1_25))) : 1)) && (var_1_46 ? ((! var_1_74) ? (var_1_78 == ((unsigned long int) (abs (var_1_13)))) : (var_1_78 == ((unsigned long int) (var_1_11 - (var_1_23 - var_1_63))))) : ((var_1_100 > var_1_61) ? (var_1_78 == ((unsigned long int) (min ((var_1_11 - var_1_13) , var_1_41)))) : (var_1_78 == ((unsigned long int) (((var_1_80 - var_1_69) + var_1_81) - var_1_61)))))) && ((var_1_13 >= var_1_87) ? (var_1_82 == ((unsigned char) ((var_1_2 > (var_1_6 / var_1_4)) && (! var_1_46)))) : 1)) && (var_1_83 == ((signed short int) (var_1_63 + (-256 + var_1_36))))) && (((var_1_62 / var_1_73) >= last_1_var_1_104) ? (var_1_84 == ((unsigned char) (var_1_46 && var_1_85))) : (((0 ^ (max (last_1_var_1_18 , last_1_var_1_57))) > var_1_73) ? (var_1_84 == ((unsigned char) (var_1_45 || var_1_86))) : 1))) && ((var_1_39 <= (var_1_61 / (abs (var_1_42)))) ? (((var_1_11 ^ (var_1_71 - var_1_42)) < (max (var_1_81 , last_1_var_1_87))) ? (var_1_87 == ((unsigned char) (min (((min (var_1_43 , var_1_62)) + (var_1_42 - 2)) , (var_1_66 + var_1_37))))) : (var_1_87 == ((unsigned char) var_1_43))) : 1)) && ((((var_1_90 - var_1_78) - (var_1_81 - var_1_71)) != var_1_61) ? (((var_1_73 / var_1_16) <= var_1_19) ? ((var_1_92 && var_1_86) ? (var_1_89 == ((signed long int) 100000)) : (var_1_85 ? (var_1_89 == ((signed long int) (max (var_1_113 , (max (var_1_78 , (abs (var_1_62)))))))) : (var_1_89 == ((signed long int) ((min (var_1_19 , (max (var_1_105 , last_1_var_1_89)))) + var_1_98))))) : (var_1_89 == ((signed long int) 100))) : (var_1_74 ? (var_1_89 == ((signed long int) (256 - var_1_61))) : 1))) && ((var_1_61 <= var_1_113) ? (var_1_92 == ((unsigned char) (var_1_46 && (! var_1_86)))) : (((var_1_8 < (- var_1_68)) || var_1_86) ? ((! var_1_45) ? (var_1_92 == ((unsigned char) (var_1_46 && (! var_1_45)))) : (var_1_92 == ((unsigned char) var_1_86))) : 1))) && (var_1_44 ? (var_1_93 == ((unsigned long int) (min (var_1_87 , (min (var_1_34 , (abs (var_1_41)))))))) : (var_1_93 == ((unsigned long int) (var_1_43 + var_1_24))))) && (var_1_46 ? ((var_1_2 > (var_1_9 - var_1_5)) ? (var_1_95 == ((signed char) (var_1_58 - 32))) : (var_1_95 == ((signed char) var_1_58))) : 1)) && ((var_1_1 >= 1.4) ? (var_1_96 == ((float) (abs (var_1_7)))) : (var_1_96 == ((float) ((var_1_5 + (var_1_97 + 3.4f)) - ((max (var_1_8 , var_1_7)) + var_1_6)))))) && (var_1_45 ? (var_1_98 == ((signed short int) (var_1_87 - var_1_93))) : (var_1_98 == ((signed short int) var_1_66)))) && ((var_1_30 >= (var_1_78 + var_1_57)) ? (((abs (var_1_67)) >= var_1_89) ? (var_1_99 == ((unsigned char) (var_1_86 || var_1_45))) : 1) : 1)) && (((var_1_23 | var_1_58) >= (min ((var_1_19 * last_1_var_1_87) , (last_1_var_1_78 * last_1_var_1_100)))) ? (last_1_var_1_44 ? (var_1_100 == ((unsigned char) (var_1_64 - var_1_36))) : ((last_1_var_1_52 < var_1_5) ? (var_1_100 == ((unsigned char) (min ((var_1_64 - (abs (var_1_58))) , var_1_101)))) : (var_1_100 == ((unsigned char) (var_1_63 + (min (var_1_66 , var_1_42))))))) : (var_1_100 == ((unsigned char) var_1_64)))) && (var_1_102 == ((unsigned char) var_1_46))) && (var_1_92 ? (var_1_103 == ((unsigned short int) var_1_36)) : (var_1_103 == ((unsigned short int) var_1_64)))) && (var_1_104 == ((unsigned short int) var_1_73))) && (var_1_86 ? (var_1_105 == ((unsigned char) var_1_62)) : (var_1_105 == ((unsigned char) var_1_42)))) && (var_1_84 ? (var_1_106 == ((signed char) var_1_38)) : (var_1_106 == ((signed char) var_1_38)))) && (var_1_102 ? (var_1_107 == ((unsigned short int) var_1_58)) : (var_1_107 == ((unsigned short int) 4)))) && (var_1_82 ? (var_1_108 == ((double) var_1_5)) : (var_1_108 == ((double) var_1_4)))) && (var_1_109 == ((unsigned long int) var_1_41))) && (var_1_82 ? (var_1_110 == ((signed char) 25)) : (var_1_110 == ((signed char) var_1_37)))) && (var_1_111 == ((double) var_1_5))) && (var_1_45 ? (var_1_112 == ((double) var_1_4)) : (var_1_112 == ((double) var_1_6)))) && (var_1_85 ? (var_1_113 == ((signed short int) var_1_65)) : 1)) && (var_1_114 == ((double) var_1_97))) && (var_1_82 ? (var_1_115 == ((double) var_1_7)) : 1)) && ((var_1_87 > var_1_71) ? (var_1_116 == ((signed char) var_1_67)) : (var_1_116 == ((signed char) (min ((var_1_62 - 10) , var_1_67)))))) && ((var_1_16 == var_1_105) ? (((max (var_1_55 , var_1_87)) <= var_1_53) ? (var_1_117 == ((unsigned long int) 128u)) : 1) : 1)
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
