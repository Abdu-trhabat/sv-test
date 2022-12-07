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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch30Amount500.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned long int var_1_1 = 256;
unsigned long int var_1_8 = 3645380125;
signed char var_1_12 = -5;
signed char var_1_13 = 16;
signed char var_1_14 = -32;
signed char var_1_17 = 0;
signed char var_1_18 = 4;
signed char var_1_19 = 0;
signed char var_1_20 = 16;
signed char var_1_21 = 16;
signed short int var_1_22 = -128;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 1;
signed long int var_1_26 = 8;
unsigned char var_1_27 = 0;
signed char var_1_31 = -8;
signed char var_1_32 = -50;
unsigned char var_1_33 = 200;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 100;
unsigned char var_1_36 = 10;
unsigned char var_1_37 = 1;
float var_1_38 = 99.9;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
signed long int var_1_41 = -25;
unsigned long int var_1_42 = 1;
signed char var_1_43 = 25;
unsigned char var_1_44 = 4;
unsigned short int var_1_45 = 256;
unsigned char var_1_46 = 0;
unsigned short int var_1_47 = 42707;
unsigned char var_1_48 = 0;
signed char var_1_49 = 8;
float var_1_51 = 5.8;
unsigned char var_1_52 = 1;
unsigned short int var_1_54 = 8;
unsigned long int var_1_55 = 4146717403;
unsigned char var_1_56 = 32;
unsigned char var_1_57 = 16;
signed long int var_1_58 = 0;
unsigned long int var_1_59 = 0;
unsigned long int var_1_61 = 3397554030;
unsigned char var_1_62 = 1;
unsigned short int var_1_63 = 10;
unsigned short int var_1_64 = 10000;
unsigned short int var_1_65 = 10000;
unsigned short int var_1_66 = 29374;
signed short int var_1_68 = 16;
double var_1_69 = 5.75;
double var_1_70 = 15.5;
double var_1_71 = 63.4;
double var_1_72 = 7.25;
double var_1_73 = 127.4;
unsigned char var_1_74 = 1;
signed long int var_1_75 = -5;
unsigned char var_1_76 = 0;
double var_1_77 = 4.625;
double var_1_78 = 0.0;
double var_1_79 = 25.375;
double var_1_80 = 999999999999999.8;
double var_1_81 = 0.0;
unsigned long int var_1_82 = 2;
unsigned long int var_1_83 = 1844332296;
unsigned long int var_1_84 = 1450699269;
unsigned char var_1_85 = 1;
unsigned char var_1_86 = 200;
float var_1_87 = 0.5;
signed char var_1_89 = 25;
unsigned long int var_1_90 = 128;
unsigned long int var_1_92 = 1000000000;
unsigned long int var_1_93 = 1000000000;
unsigned short int var_1_94 = 50;
signed short int var_1_95 = 10;
unsigned short int var_1_96 = 35286;
unsigned short int var_1_97 = 35970;
unsigned char var_1_98 = 0;
unsigned char var_1_100 = 0;
unsigned char var_1_101 = 1;
unsigned char var_1_102 = 0;
double var_1_103 = 24.125;
double var_1_104 = 24.2;
signed char var_1_105 = 10;
unsigned long int var_1_106 = 10000000;
unsigned char var_1_107 = 4;
signed long int var_1_108 = 100;
unsigned char var_1_109 = 64;
unsigned char var_1_110 = 0;
signed char var_1_111 = 64;
unsigned char var_1_112 = 0;
double var_1_113 = 500.75;
float var_1_114 = 7.6;
unsigned char var_1_115 = 16;
signed long int var_1_116 = -128;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 256;
signed char last_1_var_1_12 = -5;
unsigned char last_1_var_1_33 = 200;
unsigned char last_1_var_1_37 = 1;
signed long int last_1_var_1_41 = -25;
unsigned long int last_1_var_1_42 = 1;
unsigned short int last_1_var_1_45 = 256;
signed char last_1_var_1_49 = 8;
unsigned char last_1_var_1_56 = 32;
signed long int last_1_var_1_58 = 0;
unsigned long int last_1_var_1_59 = 0;
unsigned char last_1_var_1_62 = 1;
unsigned short int last_1_var_1_63 = 10;
signed short int last_1_var_1_68 = 16;
double last_1_var_1_77 = 4.625;
unsigned char last_1_var_1_85 = 1;
float last_1_var_1_87 = 0.5;
unsigned long int last_1_var_1_90 = 128;
unsigned short int last_1_var_1_94 = 50;
double last_1_var_1_103 = 24.125;
double last_1_var_1_104 = 24.2;
unsigned char last_1_var_1_107 = 4;
signed long int last_1_var_1_108 = 100;
unsigned char last_1_var_1_109 = 64;
double last_1_var_1_113 = 500.75;
float last_1_var_1_114 = 7.6;
unsigned char last_1_var_1_115 = 16;
signed long int last_1_var_1_116 = -128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req38Batch30Amount500
	unsigned short int stepLocal_38 = var_1_96;
	signed long int stepLocal_37 = var_1_64 * (- last_1_var_1_109);
	if ((var_1_17 - var_1_21) > stepLocal_38) {
		if (last_1_var_1_85 < stepLocal_37) {
			var_1_105 = (abs (var_1_57));
		}
	} else {
		var_1_105 = (max (var_1_57 , (max (var_1_86 , (var_1_20 - var_1_17)))));
	}


	// From: Req21Batch30Amount500
	if (last_1_var_1_77 >= (- (- last_1_var_1_104))) {
		var_1_62 = (var_1_39 && var_1_25);
	}


	// From: Req22Batch30Amount500
	unsigned char stepLocal_24 = var_1_24;
	if ((last_1_var_1_45 >= (last_1_var_1_94 / var_1_34)) || stepLocal_24) {
		var_1_63 = (((var_1_64 + var_1_65) + (var_1_66 - var_1_57)) - var_1_20);
	} else {
		var_1_63 = (abs (last_1_var_1_33));
	}


	// From: Req6Batch30Amount500
	unsigned short int stepLocal_8 = var_1_63;
	unsigned long int stepLocal_7 = var_1_8;
	if (stepLocal_8 <= (8u * var_1_8)) {
		if (stepLocal_7 >= var_1_26) {
			var_1_31 = ((max (var_1_19 , var_1_32)) + var_1_20);
		} else {
			var_1_31 = (abs (max ((max (var_1_32 , var_1_17)) , var_1_21)));
		}
	} else {
		var_1_31 = (var_1_18 + var_1_17);
	}


	// From: Req36Batch30Amount500
	if (last_1_var_1_41 != var_1_8) {
		var_1_103 = (max (((min (var_1_72 , var_1_79)) + var_1_71) , var_1_73));
	} else {
		var_1_103 = (max ((abs (var_1_80)) , ((max (var_1_70 , var_1_81)) - (min (var_1_78 , var_1_79)))));
	}


	// From: Req35Batch30Amount500
	unsigned char stepLocal_34 = (last_1_var_1_49 + last_1_var_1_56) <= last_1_var_1_12;
	signed long int stepLocal_33 = last_1_var_1_68;
	signed long int stepLocal_32 = last_1_var_1_107;
	if ((last_1_var_1_113 * (last_1_var_1_77 + var_1_80)) >= ((last_1_var_1_103 + var_1_79) + (last_1_var_1_113 + last_1_var_1_114))) {
		if (stepLocal_33 <= var_1_17) {
			var_1_98 = 1;
		} else {
			if (((max (last_1_var_1_59 , var_1_20)) < last_1_var_1_58) || stepLocal_34) {
				if (stepLocal_32 < var_1_84) {
					var_1_98 = (var_1_39 && var_1_100);
				} else {
					var_1_98 = (var_1_100 && (var_1_101 && var_1_102));
				}
			}
		}
	} else {
		var_1_98 = (var_1_101 && (! var_1_24));
	}


	// From: Req49Batch30Amount500
	var_1_116 = var_1_105;


	// From: Req15Batch30Amount500
	if ((abs (var_1_38)) < (var_1_103 / var_1_51)) {
		var_1_49 = (abs (abs (var_1_32 + var_1_46)));
	}


	// From: Req45Batch30Amount500
	if (var_1_98) {
		var_1_112 = var_1_101;
	} else {
		var_1_112 = var_1_25;
	}


	// From: Req18Batch30Amount500
	if (last_1_var_1_1 > (var_1_13 & var_1_46)) {
		if ((! var_1_39) || (var_1_20 >= last_1_var_1_116)) {
			var_1_56 = (var_1_21 + (min ((var_1_46 + var_1_36) , (var_1_35 - var_1_57))));
		}
	} else {
		if (last_1_var_1_1 > last_1_var_1_56) {
			var_1_56 = (var_1_36 + (var_1_35 - var_1_20));
		} else {
			var_1_56 = (((var_1_35 - var_1_36) - 16) + var_1_18);
		}
	}


	// From: Req13Batch30Amount500
	signed long int stepLocal_17 = var_1_18 << (1 + var_1_46);
	signed long int stepLocal_16 = last_1_var_1_33;
	if (((max (last_1_var_1_114 , var_1_38)) + 10.45f) < last_1_var_1_87) {
		if (stepLocal_17 >= last_1_var_1_45) {
			var_1_45 = last_1_var_1_108;
		} else {
			var_1_45 = ((last_1_var_1_85 + var_1_20) + 1);
		}
	} else {
		if (stepLocal_16 == last_1_var_1_90) {
			if (var_1_39) {
				var_1_45 = (var_1_47 - var_1_35);
			}
		} else {
			var_1_45 = var_1_18;
		}
	}


	// From: Req7Batch30Amount500
	if (last_1_var_1_62) {
		var_1_33 = (((min (var_1_18 , var_1_17)) + var_1_20) + 50);
	} else {
		if (((last_1_var_1_63 + last_1_var_1_115) << last_1_var_1_45) <= (last_1_var_1_33 / var_1_26)) {
			var_1_33 = (var_1_34 - var_1_18);
		} else {
			var_1_33 = (var_1_21 + ((var_1_35 - var_1_36) - var_1_17));
		}
	}


	// From: Req2Batch30Amount500
	var_1_12 = (max (var_1_13 , 2));


	// From: Req4Batch30Amount500
	if (1000000000 < var_1_19) {
		var_1_22 = var_1_18;
	} else {
		var_1_22 = (5 - ((min (var_1_17 , var_1_20)) + (var_1_21 + var_1_18)));
	}


	// From: Req12Batch30Amount500
	if (var_1_27) {
		var_1_44 = (max (var_1_17 , var_1_35));
	}


	// From: Req19Batch30Amount500
	var_1_58 = (-1 - var_1_46);


	// From: Req24Batch30Amount500
	var_1_69 = (min (((abs (99.2)) - var_1_70) , (min ((var_1_71 + var_1_72) , var_1_73))));


	// From: Req25Batch30Amount500
	if (var_1_46 == var_1_17) {
		var_1_74 = (var_1_36 + var_1_35);
	} else {
		var_1_74 = (max (var_1_20 , (var_1_34 - var_1_17)));
	}


	// From: Req40Batch30Amount500
	var_1_107 = var_1_17;


	// From: Req41Batch30Amount500
	if (var_1_101) {
		var_1_108 = var_1_46;
	} else {
		var_1_108 = var_1_34;
	}


	// From: Req42Batch30Amount500
	if (var_1_102) {
		var_1_109 = var_1_21;
	}


	// From: Req43Batch30Amount500
	var_1_110 = var_1_24;


	// From: Req44Batch30Amount500
	if (var_1_101) {
		var_1_111 = var_1_57;
	}


	// From: Req46Batch30Amount500
	if (var_1_110) {
		var_1_113 = var_1_73;
	}


	// From: Req47Batch30Amount500
	var_1_114 = var_1_70;


	// From: Req30Batch30Amount500
	signed char stepLocal_27 = var_1_105;
	if (((var_1_108 / var_1_66) + (var_1_31 - var_1_46)) != stepLocal_27) {
		var_1_85 = ((var_1_86 - var_1_18) - (var_1_35 - var_1_36));
	} else {
		var_1_85 = (var_1_34 - var_1_36);
	}


	// From: Req27Batch30Amount500
	if (var_1_62 && var_1_27) {
		if ((var_1_26 <= var_1_46) && var_1_98) {
			var_1_76 = var_1_27;
		} else {
			var_1_76 = (! var_1_40);
		}
	} else {
		var_1_76 = (var_1_24 || (var_1_39 && var_1_27));
	}


	// From: Req37Batch30Amount500
	unsigned char stepLocal_36 = var_1_39 || (var_1_100 && var_1_40);
	unsigned char stepLocal_35 = var_1_98;
	if (((var_1_70 + var_1_72) >= var_1_103) && stepLocal_35) {
		var_1_104 = ((max (var_1_79 , var_1_71)) + var_1_81);
	} else {
		if (var_1_76 || stepLocal_36) {
			var_1_104 = (min (1.4 , var_1_78));
		} else {
			var_1_104 = (var_1_71 + (min (var_1_79 , (abs (var_1_81)))));
		}
	}


	// From: Req3Batch30Amount500
	signed char stepLocal_3 = var_1_13;
	unsigned char stepLocal_2 = var_1_76;
	unsigned long int stepLocal_1 = (var_1_18 / var_1_8) / 32u;
	unsigned char stepLocal_0 = (var_1_109 / 128) >= var_1_45;
	if ((var_1_76 || var_1_62) || stepLocal_0) {
		var_1_14 = ((var_1_17 - var_1_18) + var_1_19);
	} else {
		if ((abs (var_1_63)) < stepLocal_1) {
			if (stepLocal_2 || ((32 << var_1_45) >= var_1_18)) {
				if (-1 == stepLocal_3) {
					var_1_14 = (((max (var_1_20 , var_1_18)) + var_1_17) - var_1_21);
				}
			} else {
				var_1_14 = (min (var_1_18 , var_1_17));
			}
		} else {
			var_1_14 = var_1_21;
		}
	}


	// From: Req17Batch30Amount500
	if (100u <= ((var_1_55 - var_1_36) & var_1_35)) {
		var_1_54 = (var_1_45 + (var_1_44 + (10000 - var_1_18)));
	}


	// From: Req11Batch30Amount500
	if (var_1_109 <= var_1_20) {
		var_1_43 = var_1_32;
	} else {
		var_1_43 = var_1_13;
	}


	// From: Req34Batch30Amount500
	signed long int stepLocal_31 = (var_1_57 - var_1_54) / (max (var_1_64 , var_1_95));
	if (var_1_98) {
		if (stepLocal_31 > var_1_31) {
			var_1_94 = (var_1_47 - var_1_35);
		} else {
			var_1_94 = (var_1_47 - (max (32 , var_1_63)));
		}
	} else {
		var_1_94 = ((max ((min (var_1_47 , var_1_96)) , var_1_97)) - var_1_17);
	}


	// From: Req48Batch30Amount500
	if ((- var_1_86) > (max ((var_1_95 + var_1_14) , var_1_17))) {
		var_1_115 = ((max (var_1_35 , (min (var_1_57 , var_1_46)))) + 2);
	}


	// From: Req39Batch30Amount500
	if (var_1_24) {
		var_1_106 = var_1_94;
	} else {
		var_1_106 = var_1_115;
	}


	// From: Req20Batch30Amount500
	if (var_1_34 >= var_1_56) {
		if ((var_1_26 * 8) == var_1_85) {
			var_1_59 = (min ((var_1_8 - var_1_116) , var_1_74));
		}
	} else {
		var_1_59 = (min (var_1_74 , ((var_1_61 - var_1_54) - var_1_107)));
	}


	// From: Req28Batch30Amount500
	if ((var_1_59 + var_1_44) > (abs (50))) {
		var_1_77 = ((min ((abs (var_1_71)) , var_1_70)) - (max ((var_1_78 - var_1_79) , var_1_80)));
	} else {
		var_1_77 = ((var_1_79 + (var_1_81 - 49.8)) - (abs (var_1_70)));
	}


	// From: Req5Batch30Amount500
	unsigned long int stepLocal_6 = max ((var_1_107 * var_1_54) , (var_1_8 - var_1_17));
	signed long int stepLocal_5 = 1 - 25;
	signed char stepLocal_4 = var_1_18;
	if (var_1_56 > stepLocal_6) {
		var_1_23 = (! (! var_1_24));
	} else {
		if (stepLocal_4 > var_1_56) {
			var_1_23 = (var_1_25 && (! var_1_24));
		} else {
			if (stepLocal_5 < (max ((max (var_1_54 , var_1_59)) , (var_1_19 / var_1_26)))) {
				var_1_23 = (((! var_1_25) || var_1_24) || var_1_27);
			} else {
				var_1_23 = (((min (var_1_114 , var_1_113)) >= var_1_103) || var_1_25);
			}
		}
	}


	// From: Req16Batch30Amount500
	unsigned char stepLocal_23 = var_1_44;
	unsigned char stepLocal_22 = var_1_112;
	unsigned char stepLocal_21 = var_1_44;
	unsigned char stepLocal_20 = var_1_40;
	unsigned long int stepLocal_19 = var_1_106;
	if (stepLocal_19 < ((var_1_46 + var_1_8) % var_1_35)) {
		if (stepLocal_20 || (var_1_74 < var_1_46)) {
			var_1_52 = (min ((max (var_1_18 , 128)) , var_1_36));
		} else {
			if (stepLocal_22 || var_1_27) {
				if (stepLocal_23 < (8u % var_1_26)) {
					var_1_52 = (abs (var_1_21 + var_1_18));
				}
			}
		}
	} else {
		if (var_1_33 >= stepLocal_21) {
			if (var_1_40) {
				var_1_52 = var_1_36;
			} else {
				var_1_52 = (min ((var_1_34 - var_1_35) , var_1_17));
			}
		}
	}


	// From: Req29Batch30Amount500
	if (var_1_79 == ((min (256.375 , 1.8)) / var_1_78)) {
		if (var_1_57 != var_1_52) {
			var_1_82 = var_1_33;
		} else {
			var_1_82 = (((abs (var_1_83)) + var_1_84) - ((var_1_105 + var_1_116) + var_1_31));
		}
	} else {
		var_1_82 = var_1_47;
	}


	// From: Req1Batch30Amount500
	if (var_1_106 == var_1_107) {
		var_1_1 = (max (var_1_107 , (max ((min (var_1_44 , var_1_56)) , var_1_33))));
	} else {
		var_1_1 = (var_1_8 - (max ((max (var_1_52 , var_1_52)) , var_1_94)));
	}


	// From: Req31Batch30Amount500
	unsigned char stepLocal_29 = var_1_86;
	unsigned long int stepLocal_28 = max (var_1_46 , var_1_82);
	if (var_1_82 >= stepLocal_29) {
		if (1.5f != var_1_38) {
			if (stepLocal_28 != (var_1_33 * var_1_107)) {
				var_1_87 = (var_1_79 + var_1_71);
			}
		} else {
			var_1_87 = ((max (var_1_79 , var_1_71)) + var_1_81);
		}
	}


	// From: Req33Batch30Amount500
	if (32.25 > var_1_87) {
		var_1_90 = ((var_1_61 - var_1_63) - var_1_45);
	} else {
		var_1_90 = (((var_1_92 + var_1_93) + var_1_84) - (abs (max (var_1_36 , var_1_64))));
	}


	// From: Req32Batch30Amount500
	unsigned long int stepLocal_30 = var_1_82;
	if ((- var_1_17) == stepLocal_30) {
		var_1_89 = ((var_1_36 - var_1_18) + var_1_19);
	}


	// From: Req23Batch30Amount500
	signed char stepLocal_25 = var_1_19;
	if (stepLocal_25 >= (max (var_1_82 , var_1_74))) {
		var_1_68 = (min ((var_1_107 + var_1_74) , var_1_59));
	}


	// From: Req8Batch30Amount500
	signed long int stepLocal_11 = var_1_108;
	signed long int stepLocal_10 = var_1_34 - (max (var_1_21 , var_1_36));
	unsigned char stepLocal_9 = ! (var_1_12 > var_1_68);
	if (stepLocal_9 && var_1_27) {
		if (var_1_35 < stepLocal_10) {
			if ((var_1_38 - (abs (var_1_103))) != (var_1_77 * 50.75)) {
				if (stepLocal_11 < var_1_107) {
					var_1_37 = (var_1_25 && (var_1_39 && var_1_40));
				}
			}
		} else {
			var_1_37 = (! (last_1_var_1_37 && var_1_27));
		}
	} else {
		var_1_37 = 0;
	}


	// From: Req9Batch30Amount500
	signed long int stepLocal_13 = var_1_56 + var_1_26;
	unsigned long int stepLocal_12 = max (var_1_74 , (var_1_8 + var_1_109));
	if (var_1_69 < var_1_38) {
		if (var_1_45 < stepLocal_12) {
			var_1_41 = ((max ((min (var_1_115 , var_1_116)) , 5)) + var_1_21);
		} else {
			if (var_1_94 > stepLocal_13) {
				if (var_1_37) {
					var_1_41 = ((var_1_36 + var_1_20) - var_1_34);
				} else {
					var_1_41 = var_1_115;
				}
			} else {
				var_1_41 = var_1_34;
			}
		}
	} else {
		var_1_41 = var_1_115;
	}


	// From: Req10Batch30Amount500
	unsigned char stepLocal_15 = var_1_27;
	unsigned char stepLocal_14 = var_1_44 <= var_1_36;
	if (var_1_62 || stepLocal_14) {
		if (((var_1_33 >> var_1_26) < last_1_var_1_42) || stepLocal_15) {
			var_1_42 = var_1_33;
		}
	} else {
		var_1_42 = (max ((var_1_8 - var_1_36) , (min (var_1_17 , (var_1_68 + var_1_18)))));
	}


	// From: Req14Batch30Amount500
	unsigned long int stepLocal_18 = var_1_42;
	if (((var_1_111 + var_1_106) + (var_1_19 % var_1_34)) <= stepLocal_18) {
		var_1_48 = (! var_1_24);
	}


	// From: Req26Batch30Amount500
	unsigned char stepLocal_26 = var_1_42 == var_1_34;
	if (var_1_27 && stepLocal_26) {
		var_1_75 = ((2036840506 - var_1_42) - var_1_65);
	}
}



void updateVariables() {
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 2147483647);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483648);
	assume_abort_if_not(var_1_26 <= 2147483647);
	assume_abort_if_not(var_1_26 != 0);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -63);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 95);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 32);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 32767);
	assume_abort_if_not(var_1_47 <= 65534);
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= -922337.2036854776000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	assume_abort_if_not(var_1_51 != 0.0F);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 2147483647);
	assume_abort_if_not(var_1_55 <= 4294967295);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 0);
	assume_abort_if_not(var_1_57 <= 63);
	var_1_61 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_61 >= 3221225470);
	assume_abort_if_not(var_1_61 <= 4294967294);
	var_1_64 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_64 >= 8191);
	assume_abort_if_not(var_1_64 <= 16384);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 8192);
	assume_abort_if_not(var_1_65 <= 16383);
	var_1_66 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_66 >= 24575);
	assume_abort_if_not(var_1_66 <= 32767);
	var_1_70 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_70 >= 0.0F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854765600e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= -461168.6018427382800e+13F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427382800e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= -461168.6018427382800e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427382800e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= -922337.2036854765600e+13F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 9223372.036854765600e+12F && var_1_73 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_78 >= 4611686.018427382800e+12F && var_1_78 <= -1.0e-20F) || (var_1_78 <= 9223372.036854765600e+12F && var_1_78 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_79 >= 0.0F && var_1_79 <= -1.0e-20F) || (var_1_79 <= 4611686.018427382800e+12F && var_1_79 >= 1.0e-20F ));
	var_1_80 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 9223372.036854765600e+12F && var_1_80 >= 1.0e-20F ));
	var_1_81 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_81 >= 2305843.009213691390e+12F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 4611686.018427382800e+12F && var_1_81 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_83 >= 1073741823);
	assume_abort_if_not(var_1_83 <= 2147483647);
	var_1_84 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_84 >= 1073741824);
	assume_abort_if_not(var_1_84 <= 2147483647);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 190);
	assume_abort_if_not(var_1_86 <= 254);
	var_1_92 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_92 >= 536870911);
	assume_abort_if_not(var_1_92 <= 1073741824);
	var_1_93 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_93 >= 536870912);
	assume_abort_if_not(var_1_93 <= 1073741823);
	var_1_95 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_95 >= -32768);
	assume_abort_if_not(var_1_95 <= 32767);
	assume_abort_if_not(var_1_95 != 0);
	var_1_96 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_96 >= 32767);
	assume_abort_if_not(var_1_96 <= 65534);
	var_1_97 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_97 >= 32767);
	assume_abort_if_not(var_1_97 <= 65534);
	var_1_100 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_100 >= 1);
	assume_abort_if_not(var_1_100 <= 1);
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 1);
	assume_abort_if_not(var_1_101 <= 1);
	var_1_102 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_102 >= 1);
	assume_abort_if_not(var_1_102 <= 1);
}



void updateLastVariables() {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_113 = var_1_113;
	last_1_var_1_114 = var_1_114;
	last_1_var_1_115 = var_1_115;
	last_1_var_1_116 = var_1_116;
}

int property() {
	return (((((((((((((((((((((((((((((((((((((((((((((((((var_1_106 == var_1_107) ? (var_1_1 == ((unsigned long int) (max (var_1_107 , (max ((min (var_1_44 , var_1_56)) , var_1_33)))))) : (var_1_1 == ((unsigned long int) (var_1_8 - (max ((max (var_1_52 , var_1_52)) , var_1_94)))))) && (var_1_12 == ((signed char) (max (var_1_13 , 2))))) && (((var_1_76 || var_1_62) || ((var_1_109 / 128) >= var_1_45)) ? (var_1_14 == ((signed char) ((var_1_17 - var_1_18) + var_1_19))) : (((abs (var_1_63)) < ((var_1_18 / var_1_8) / 32u)) ? ((var_1_76 || ((32 << var_1_45) >= var_1_18)) ? ((-1 == var_1_13) ? (var_1_14 == ((signed char) (((max (var_1_20 , var_1_18)) + var_1_17) - var_1_21))) : 1) : (var_1_14 == ((signed char) (min (var_1_18 , var_1_17))))) : (var_1_14 == ((signed char) var_1_21))))) && ((1000000000 < var_1_19) ? (var_1_22 == ((signed short int) var_1_18)) : (var_1_22 == ((signed short int) (5 - ((min (var_1_17 , var_1_20)) + (var_1_21 + var_1_18))))))) && ((var_1_56 > (max ((var_1_107 * var_1_54) , (var_1_8 - var_1_17)))) ? (var_1_23 == ((unsigned char) (! (! var_1_24)))) : ((var_1_18 > var_1_56) ? (var_1_23 == ((unsigned char) (var_1_25 && (! var_1_24)))) : (((1 - 25) < (max ((max (var_1_54 , var_1_59)) , (var_1_19 / var_1_26)))) ? (var_1_23 == ((unsigned char) (((! var_1_25) || var_1_24) || var_1_27))) : (var_1_23 == ((unsigned char) (((min (var_1_114 , var_1_113)) >= var_1_103) || var_1_25))))))) && ((var_1_63 <= (8u * var_1_8)) ? ((var_1_8 >= var_1_26) ? (var_1_31 == ((signed char) ((max (var_1_19 , var_1_32)) + var_1_20))) : (var_1_31 == ((signed char) (abs (max ((max (var_1_32 , var_1_17)) , var_1_21)))))) : (var_1_31 == ((signed char) (var_1_18 + var_1_17))))) && (last_1_var_1_62 ? (var_1_33 == ((unsigned char) (((min (var_1_18 , var_1_17)) + var_1_20) + 50))) : ((((last_1_var_1_63 + last_1_var_1_115) << last_1_var_1_45) <= (last_1_var_1_33 / var_1_26)) ? (var_1_33 == ((unsigned char) (var_1_34 - var_1_18))) : (var_1_33 == ((unsigned char) (var_1_21 + ((var_1_35 - var_1_36) - var_1_17))))))) && (((! (var_1_12 > var_1_68)) && var_1_27) ? ((var_1_35 < (var_1_34 - (max (var_1_21 , var_1_36)))) ? (((var_1_38 - (abs (var_1_103))) != (var_1_77 * 50.75)) ? ((var_1_108 < var_1_107) ? (var_1_37 == ((unsigned char) (var_1_25 && (var_1_39 && var_1_40)))) : 1) : 1) : (var_1_37 == ((unsigned char) (! (last_1_var_1_37 && var_1_27))))) : (var_1_37 == ((unsigned char) 0)))) && ((var_1_69 < var_1_38) ? ((var_1_45 < (max (var_1_74 , (var_1_8 + var_1_109)))) ? (var_1_41 == ((signed long int) ((max ((min (var_1_115 , var_1_116)) , 5)) + var_1_21))) : ((var_1_94 > (var_1_56 + var_1_26)) ? (var_1_37 ? (var_1_41 == ((signed long int) ((var_1_36 + var_1_20) - var_1_34))) : (var_1_41 == ((signed long int) var_1_115))) : (var_1_41 == ((signed long int) var_1_34)))) : (var_1_41 == ((signed long int) var_1_115)))) && ((var_1_62 || (var_1_44 <= var_1_36)) ? ((((var_1_33 >> var_1_26) < last_1_var_1_42) || var_1_27) ? (var_1_42 == ((unsigned long int) var_1_33)) : 1) : (var_1_42 == ((unsigned long int) (max ((var_1_8 - var_1_36) , (min (var_1_17 , (var_1_68 + var_1_18))))))))) && ((var_1_109 <= var_1_20) ? (var_1_43 == ((signed char) var_1_32)) : (var_1_43 == ((signed char) var_1_13)))) && (var_1_27 ? (var_1_44 == ((unsigned char) (max (var_1_17 , var_1_35)))) : 1)) && ((((max (last_1_var_1_114 , var_1_38)) + 10.45f) < last_1_var_1_87) ? (((var_1_18 << (1 + var_1_46)) >= last_1_var_1_45) ? (var_1_45 == ((unsigned short int) last_1_var_1_108)) : (var_1_45 == ((unsigned short int) ((last_1_var_1_85 + var_1_20) + 1)))) : ((last_1_var_1_33 == last_1_var_1_90) ? (var_1_39 ? (var_1_45 == ((unsigned short int) (var_1_47 - var_1_35))) : 1) : (var_1_45 == ((unsigned short int) var_1_18))))) && ((((var_1_111 + var_1_106) + (var_1_19 % var_1_34)) <= var_1_42) ? (var_1_48 == ((unsigned char) (! var_1_24))) : 1)) && (((abs (var_1_38)) < (var_1_103 / var_1_51)) ? (var_1_49 == ((signed char) (abs (abs (var_1_32 + var_1_46))))) : 1)) && ((var_1_106 < ((var_1_46 + var_1_8) % var_1_35)) ? ((var_1_40 || (var_1_74 < var_1_46)) ? (var_1_52 == ((unsigned char) (min ((max (var_1_18 , 128)) , var_1_36)))) : ((var_1_112 || var_1_27) ? ((var_1_44 < (8u % var_1_26)) ? (var_1_52 == ((unsigned char) (abs (var_1_21 + var_1_18)))) : 1) : 1)) : ((var_1_33 >= var_1_44) ? (var_1_40 ? (var_1_52 == ((unsigned char) var_1_36)) : (var_1_52 == ((unsigned char) (min ((var_1_34 - var_1_35) , var_1_17))))) : 1))) && ((100u <= ((var_1_55 - var_1_36) & var_1_35)) ? (var_1_54 == ((unsigned short int) (var_1_45 + (var_1_44 + (10000 - var_1_18))))) : 1)) && ((last_1_var_1_1 > (var_1_13 & var_1_46)) ? (((! var_1_39) || (var_1_20 >= last_1_var_1_116)) ? (var_1_56 == ((unsigned char) (var_1_21 + (min ((var_1_46 + var_1_36) , (var_1_35 - var_1_57)))))) : 1) : ((last_1_var_1_1 > last_1_var_1_56) ? (var_1_56 == ((unsigned char) (var_1_36 + (var_1_35 - var_1_20)))) : (var_1_56 == ((unsigned char) (((var_1_35 - var_1_36) - 16) + var_1_18)))))) && (var_1_58 == ((signed long int) (-1 - var_1_46)))) && ((var_1_34 >= var_1_56) ? (((var_1_26 * 8) == var_1_85) ? (var_1_59 == ((unsigned long int) (min ((var_1_8 - var_1_116) , var_1_74)))) : 1) : (var_1_59 == ((unsigned long int) (min (var_1_74 , ((var_1_61 - var_1_54) - var_1_107))))))) && ((last_1_var_1_77 >= (- (- last_1_var_1_104))) ? (var_1_62 == ((unsigned char) (var_1_39 && var_1_25))) : 1)) && (((last_1_var_1_45 >= (last_1_var_1_94 / var_1_34)) || var_1_24) ? (var_1_63 == ((unsigned short int) (((var_1_64 + var_1_65) + (var_1_66 - var_1_57)) - var_1_20))) : (var_1_63 == ((unsigned short int) (abs (last_1_var_1_33)))))) && ((var_1_19 >= (max (var_1_82 , var_1_74))) ? (var_1_68 == ((signed short int) (min ((var_1_107 + var_1_74) , var_1_59)))) : 1)) && (var_1_69 == ((double) (min (((abs (99.2)) - var_1_70) , (min ((var_1_71 + var_1_72) , var_1_73))))))) && ((var_1_46 == var_1_17) ? (var_1_74 == ((unsigned char) (var_1_36 + var_1_35))) : (var_1_74 == ((unsigned char) (max (var_1_20 , (var_1_34 - var_1_17))))))) && ((var_1_27 && (var_1_42 == var_1_34)) ? (var_1_75 == ((signed long int) ((2036840506 - var_1_42) - var_1_65))) : 1)) && ((var_1_62 && var_1_27) ? (((var_1_26 <= var_1_46) && var_1_98) ? (var_1_76 == ((unsigned char) var_1_27)) : (var_1_76 == ((unsigned char) (! var_1_40)))) : (var_1_76 == ((unsigned char) (var_1_24 || (var_1_39 && var_1_27)))))) && (((var_1_59 + var_1_44) > (abs (50))) ? (var_1_77 == ((double) ((min ((abs (var_1_71)) , var_1_70)) - (max ((var_1_78 - var_1_79) , var_1_80))))) : (var_1_77 == ((double) ((var_1_79 + (var_1_81 - 49.8)) - (abs (var_1_70))))))) && ((var_1_79 == ((min (256.375 , 1.8)) / var_1_78)) ? ((var_1_57 != var_1_52) ? (var_1_82 == ((unsigned long int) var_1_33)) : (var_1_82 == ((unsigned long int) (((abs (var_1_83)) + var_1_84) - ((var_1_105 + var_1_116) + var_1_31))))) : (var_1_82 == ((unsigned long int) var_1_47)))) && ((((var_1_108 / var_1_66) + (var_1_31 - var_1_46)) != var_1_105) ? (var_1_85 == ((unsigned char) ((var_1_86 - var_1_18) - (var_1_35 - var_1_36)))) : (var_1_85 == ((unsigned char) (var_1_34 - var_1_36))))) && ((var_1_82 >= var_1_86) ? ((1.5f != var_1_38) ? (((max (var_1_46 , var_1_82)) != (var_1_33 * var_1_107)) ? (var_1_87 == ((float) (var_1_79 + var_1_71))) : 1) : (var_1_87 == ((float) ((max (var_1_79 , var_1_71)) + var_1_81)))) : 1)) && (((- var_1_17) == var_1_82) ? (var_1_89 == ((signed char) ((var_1_36 - var_1_18) + var_1_19))) : 1)) && ((32.25 > var_1_87) ? (var_1_90 == ((unsigned long int) ((var_1_61 - var_1_63) - var_1_45))) : (var_1_90 == ((unsigned long int) (((var_1_92 + var_1_93) + var_1_84) - (abs (max (var_1_36 , var_1_64)))))))) && (var_1_98 ? ((((var_1_57 - var_1_54) / (max (var_1_64 , var_1_95))) > var_1_31) ? (var_1_94 == ((unsigned short int) (var_1_47 - var_1_35))) : (var_1_94 == ((unsigned short int) (var_1_47 - (max (32 , var_1_63)))))) : (var_1_94 == ((unsigned short int) ((max ((min (var_1_47 , var_1_96)) , var_1_97)) - var_1_17))))) && (((last_1_var_1_113 * (last_1_var_1_77 + var_1_80)) >= ((last_1_var_1_103 + var_1_79) + (last_1_var_1_113 + last_1_var_1_114))) ? ((last_1_var_1_68 <= var_1_17) ? (var_1_98 == ((unsigned char) 1)) : ((((max (last_1_var_1_59 , var_1_20)) < last_1_var_1_58) || ((last_1_var_1_49 + last_1_var_1_56) <= last_1_var_1_12)) ? ((last_1_var_1_107 < var_1_84) ? (var_1_98 == ((unsigned char) (var_1_39 && var_1_100))) : (var_1_98 == ((unsigned char) (var_1_100 && (var_1_101 && var_1_102))))) : 1)) : (var_1_98 == ((unsigned char) (var_1_101 && (! var_1_24)))))) && ((last_1_var_1_41 != var_1_8) ? (var_1_103 == ((double) (max (((min (var_1_72 , var_1_79)) + var_1_71) , var_1_73)))) : (var_1_103 == ((double) (max ((abs (var_1_80)) , ((max (var_1_70 , var_1_81)) - (min (var_1_78 , var_1_79))))))))) && ((((var_1_70 + var_1_72) >= var_1_103) && var_1_98) ? (var_1_104 == ((double) ((max (var_1_79 , var_1_71)) + var_1_81))) : ((var_1_76 || (var_1_39 || (var_1_100 && var_1_40))) ? (var_1_104 == ((double) (min (1.4 , var_1_78)))) : (var_1_104 == ((double) (var_1_71 + (min (var_1_79 , (abs (var_1_81)))))))))) && (((var_1_17 - var_1_21) > var_1_96) ? ((last_1_var_1_85 < (var_1_64 * (- last_1_var_1_109))) ? (var_1_105 == ((signed char) (abs (var_1_57)))) : 1) : (var_1_105 == ((signed char) (max (var_1_57 , (max (var_1_86 , (var_1_20 - var_1_17))))))))) && (var_1_24 ? (var_1_106 == ((unsigned long int) var_1_94)) : (var_1_106 == ((unsigned long int) var_1_115)))) && (var_1_107 == ((unsigned char) var_1_17))) && (var_1_101 ? (var_1_108 == ((signed long int) var_1_46)) : (var_1_108 == ((signed long int) var_1_34)))) && (var_1_102 ? (var_1_109 == ((unsigned char) var_1_21)) : 1)) && (var_1_110 == ((unsigned char) var_1_24))) && (var_1_101 ? (var_1_111 == ((signed char) var_1_57)) : 1)) && (var_1_98 ? (var_1_112 == ((unsigned char) var_1_101)) : (var_1_112 == ((unsigned char) var_1_25)))) && (var_1_110 ? (var_1_113 == ((double) var_1_73)) : 1)) && (var_1_114 == ((float) var_1_70))) && (((- var_1_86) > (max ((var_1_95 + var_1_14) , var_1_17))) ? (var_1_115 == ((unsigned char) ((max (var_1_35 , (min (var_1_57 , var_1_46)))) + 2))) : 1)) && (var_1_116 == ((signed long int) var_1_105))
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
