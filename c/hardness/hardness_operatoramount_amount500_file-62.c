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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch62Amount500.c", 13, "reach_error"); }
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
double var_1_1 = 32.2;
double var_1_4 = 10000000.9;
double var_1_5 = 32.46;
double var_1_6 = 10000.6;
unsigned long int var_1_7 = 128;
signed long int var_1_8 = 100000;
unsigned long int var_1_9 = 3574816166;
unsigned long int var_1_10 = 1286461316;
unsigned long int var_1_11 = 128;
double var_1_12 = -0.75;
double var_1_13 = 127.875;
double var_1_14 = 0.4;
double var_1_15 = 255.125;
double var_1_16 = 15.2;
double var_1_17 = 4.4;
double var_1_18 = 1.4;
signed long int var_1_20 = 4;
double var_1_21 = 0.0;
double var_1_22 = 64.4;
signed short int var_1_23 = 100;
signed short int var_1_24 = 1;
float var_1_25 = 256.5;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
double var_1_30 = 49.875;
double var_1_31 = 31.625;
unsigned long int var_1_32 = 1;
double var_1_33 = 4.3;
unsigned long int var_1_34 = 256;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 1;
signed char var_1_38 = 25;
signed char var_1_40 = 8;
signed char var_1_41 = -1;
signed char var_1_42 = -5;
signed long int var_1_43 = -1;
unsigned char var_1_44 = 200;
unsigned char var_1_45 = 4;
unsigned char var_1_46 = 8;
signed short int var_1_47 = 200;
double var_1_48 = 256.25;
double var_1_49 = 4.4;
double var_1_50 = 49.8;
signed long int var_1_51 = 5;
signed char var_1_52 = -32;
double var_1_53 = 0.75;
unsigned short int var_1_54 = 32;
unsigned short int var_1_55 = 49157;
unsigned short int var_1_56 = 256;
unsigned short int var_1_57 = 19530;
signed char var_1_58 = 4;
signed long int var_1_59 = -4;
signed char var_1_60 = 5;
signed char var_1_61 = 10;
signed char var_1_62 = 8;
signed char var_1_63 = 64;
unsigned long int var_1_64 = 5;
unsigned long int var_1_65 = 1000000000;
unsigned long int var_1_66 = 1000000000;
signed long int var_1_67 = 0;
signed long int var_1_68 = 32;
unsigned char var_1_69 = 1;
unsigned char var_1_70 = 100;
unsigned char var_1_71 = 8;
unsigned char var_1_72 = 16;
float var_1_73 = 63.5;
signed long int var_1_74 = 4;
unsigned char var_1_75 = 100;
unsigned long int var_1_77 = 16;
signed char var_1_78 = -5;
signed char var_1_79 = 8;
signed char var_1_80 = 0;
signed long int var_1_81 = 64;
signed short int var_1_82 = 4;
unsigned char var_1_83 = 0;
unsigned char var_1_84 = 0;
unsigned short int var_1_85 = 5;
double var_1_86 = 7.7;
unsigned char var_1_88 = 10;
unsigned char var_1_89 = 128;
unsigned char var_1_90 = 10;
unsigned char var_1_91 = 128;
unsigned long int var_1_92 = 1;
unsigned long int var_1_93 = 25;
unsigned long int var_1_94 = 25;
float var_1_95 = 100.4;
float var_1_96 = 9.25;
float var_1_97 = 4.15;
unsigned long int var_1_98 = 0;
unsigned long int var_1_99 = 1399997406;
unsigned long int var_1_100 = 100000000;
double var_1_101 = 4.8;
double var_1_102 = 50.75;
unsigned char var_1_103 = 1;
unsigned char var_1_105 = 1;
unsigned short int var_1_106 = 64;
unsigned short int var_1_107 = 32;
unsigned short int var_1_108 = 200;
unsigned short int var_1_109 = 4;
signed short int var_1_110 = 128;
signed short int var_1_111 = 32;
float var_1_112 = 49.5;
unsigned char var_1_113 = 1;
float var_1_114 = 1.4;
unsigned char var_1_115 = 1;
signed char var_1_116 = 2;
double var_1_117 = 24.8;
signed short int var_1_118 = -100;
signed long int var_1_119 = -8;
unsigned long int var_1_121 = 0;
signed short int var_1_122 = 256;
signed short int var_1_123 = 10;
unsigned short int var_1_124 = 256;
signed short int var_1_125 = 4;
unsigned char var_1_126 = 25;
unsigned short int var_1_127 = 0;
signed short int var_1_128 = -8;
signed short int var_1_129 = 2;
unsigned char var_1_130 = 5;
double var_1_131 = 100000000000000.6;
unsigned short int var_1_132 = 50;
unsigned short int var_1_133 = 256;
unsigned short int var_1_134 = 4;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_7 = 128;
unsigned char last_1_var_1_35 = 0;
double last_1_var_1_48 = 256.25;
unsigned short int last_1_var_1_54 = 32;
signed long int last_1_var_1_81 = 64;
unsigned short int last_1_var_1_85 = 5;
unsigned long int last_1_var_1_92 = 1;
unsigned long int last_1_var_1_98 = 0;
double last_1_var_1_102 = 50.75;
unsigned short int last_1_var_1_106 = 64;
double last_1_var_1_117 = 24.8;
unsigned long int last_1_var_1_121 = 0;
unsigned short int last_1_var_1_127 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req9Batch62Amount500
	if ((var_1_21 / var_1_33) >= var_1_17) {
		var_1_32 = ((min (last_1_var_1_127 , var_1_11)) + var_1_34);
	}


	// From: Req39Batch62Amount500
	signed long int stepLocal_22 = last_1_var_1_81;
	signed long int stepLocal_21 = -1;
	if (((last_1_var_1_54 + -5) + (last_1_var_1_7 + -50)) >= stepLocal_21) {
		if (stepLocal_22 >= last_1_var_1_98) {
			var_1_100 = (abs (last_1_var_1_85));
		}
	} else {
		var_1_100 = last_1_var_1_121;
	}


	// From: Req33Batch62Amount500
	if (((var_1_22 + var_1_86) - var_1_13) <= last_1_var_1_117) {
		if (last_1_var_1_106 != ((last_1_var_1_92 / 50) * var_1_45)) {
			var_1_85 = ((var_1_44 + (min (var_1_61 , last_1_var_1_106))) + var_1_79);
		} else {
			var_1_85 = (abs ((var_1_71 + var_1_70) + var_1_46));
		}
	} else {
		if (last_1_var_1_35 && var_1_84) {
			var_1_85 = (last_1_var_1_106 + var_1_61);
		} else {
			var_1_85 = (min ((min ((var_1_55 - var_1_80) , var_1_61)) , var_1_70));
		}
	}


	// From: Req3Batch62Amount500
	if ((min (var_1_4 , var_1_6)) <= (var_1_13 - var_1_14)) {
		var_1_12 = (var_1_15 - var_1_16);
	} else {
		var_1_12 = (max ((var_1_6 + var_1_5) , (var_1_4 + var_1_17)));
	}


	// From: Req7Batch62Amount500
	var_1_26 = ((var_1_27 || var_1_28) || var_1_29);


	// From: Req8Batch62Amount500
	if (var_1_13 < var_1_5) {
		var_1_30 = ((abs (var_1_31 + 256.6)) + var_1_22);
	}


	// From: Req10Batch62Amount500
	var_1_35 = (var_1_36 && var_1_37);


	// From: Req13Batch62Amount500
	var_1_47 = (min (-256 , (max (-64 , var_1_45))));


	// From: Req14Batch62Amount500
	unsigned long int stepLocal_5 = (var_1_34 & var_1_44) + var_1_10;
	if (last_1_var_1_48 >= (var_1_5 + var_1_17)) {
		var_1_48 = (var_1_31 + (max (var_1_5 , var_1_6)));
	} else {
		if (stepLocal_5 >= var_1_100) {
			var_1_48 = (var_1_31 + (var_1_49 + var_1_50));
		} else {
			var_1_48 = var_1_6;
		}
	}


	// From: Req15Batch62Amount500
	if (var_1_27) {
		var_1_51 = var_1_46;
	}


	// From: Req16Batch62Amount500
	var_1_52 = var_1_41;


	// From: Req18Batch62Amount500
	if (var_1_46 >= var_1_34) {
		var_1_54 = (max (((var_1_55 - var_1_46) - var_1_45) , (var_1_44 + var_1_56)));
	} else {
		var_1_54 = ((var_1_57 - var_1_45) + var_1_44);
	}


	// From: Req20Batch62Amount500
	var_1_59 = (var_1_55 + var_1_56);


	// From: Req21Batch62Amount500
	var_1_60 = (min ((var_1_45 - 100) , ((var_1_61 + var_1_62) - var_1_63)));


	// From: Req22Batch62Amount500
	var_1_64 = (((var_1_65 + var_1_66) - var_1_46) + var_1_62);


	// From: Req23Batch62Amount500
	if ((max (var_1_5 , (var_1_14 - var_1_15))) < var_1_49) {
		var_1_67 = (max (5 , 100000));
	}


	// From: Req26Batch62Amount500
	if (var_1_33 < var_1_13) {
		var_1_73 = (var_1_4 + var_1_50);
	} else {
		var_1_73 = (abs (var_1_5));
	}


	// From: Req28Batch62Amount500
	if (! (128 > var_1_62)) {
		var_1_77 = (min ((64u + (var_1_10 - var_1_63)) , var_1_8));
	}


	// From: Req29Batch62Amount500
	unsigned short int stepLocal_11 = var_1_57;
	if (var_1_28) {
		if (stepLocal_11 == (abs (var_1_20))) {
			var_1_78 = (var_1_71 - var_1_72);
		} else {
			var_1_78 = ((var_1_71 + var_1_62) - (var_1_72 + (var_1_79 + var_1_80)));
		}
	} else {
		if (var_1_37) {
			var_1_78 = var_1_45;
		} else {
			var_1_78 = (min (var_1_63 , ((max (var_1_71 , var_1_79)) - var_1_45)));
		}
	}


	// From: Req40Batch62Amount500
	if ((! var_1_26) && (var_1_89 <= var_1_77)) {
		if (var_1_5 > (var_1_30 + (var_1_13 - var_1_15))) {
			var_1_101 = (var_1_4 + var_1_49);
		} else {
			var_1_101 = (var_1_96 + var_1_31);
		}
	}


	// From: Req41Batch62Amount500
	if ((last_1_var_1_102 <= 7.75) && var_1_84) {
		var_1_102 = (max (var_1_17 , var_1_96));
	} else {
		var_1_102 = ((min (255.3 , var_1_96)) - 199.5);
	}


	// From: Req43Batch62Amount500
	if (var_1_86 < ((var_1_97 / 128.625) + var_1_12)) {
		var_1_106 = (max ((64 + var_1_44) , var_1_89));
	} else {
		var_1_106 = var_1_80;
	}


	// From: Req44Batch62Amount500
	unsigned long int stepLocal_25 = 1u;
	if (var_1_66 > stepLocal_25) {
		var_1_107 = (var_1_80 + 2);
	} else {
		var_1_107 = ((max (var_1_108 , var_1_109)) + var_1_61);
	}


	// From: Req46Batch62Amount500
	unsigned char stepLocal_26 = var_1_84;
	if (var_1_29 && stepLocal_26) {
		if (var_1_73 <= (- (max (var_1_31 , var_1_86)))) {
			var_1_112 = (min (((var_1_21 - var_1_22) - var_1_97) , var_1_4));
		} else {
			var_1_112 = var_1_4;
		}
	}


	// From: Req47Batch62Amount500
	var_1_113 = (var_1_29 || var_1_28);


	// From: Req48Batch62Amount500
	if (var_1_29) {
		var_1_114 = var_1_6;
	} else {
		var_1_114 = var_1_15;
	}


	// From: Req49Batch62Amount500
	if (var_1_26) {
		var_1_115 = var_1_29;
	} else {
		var_1_115 = var_1_84;
	}


	// From: Req50Batch62Amount500
	if (var_1_113) {
		var_1_116 = var_1_72;
	}


	// From: Req51Batch62Amount500
	if (var_1_35) {
		var_1_117 = var_1_49;
	}


	// From: Req52Batch62Amount500
	var_1_118 = var_1_46;


	// From: Req54Batch62Amount500
	var_1_121 = var_1_89;


	// From: Req55Batch62Amount500
	if (var_1_37) {
		var_1_122 = var_1_123;
	}


	// From: Req56Batch62Amount500
	var_1_124 = var_1_79;


	// From: Req57Batch62Amount500
	if (var_1_84) {
		var_1_125 = -1;
	} else {
		var_1_125 = var_1_72;
	}


	// From: Req58Batch62Amount500
	var_1_126 = var_1_45;


	// From: Req60Batch62Amount500
	var_1_128 = var_1_129;


	// From: Req61Batch62Amount500
	if (var_1_36) {
		var_1_130 = var_1_91;
	} else {
		var_1_130 = var_1_62;
	}


	// From: Req62Batch62Amount500
	var_1_131 = var_1_86;


	// From: Req65Batch62Amount500
	var_1_134 = var_1_93;


	// From: Req2Batch62Amount500
	unsigned long int stepLocal_2 = - var_1_100;
	signed long int stepLocal_1 = 32;
	if (stepLocal_1 > var_1_106) {
		if (stepLocal_2 != (var_1_106 - var_1_8)) {
			var_1_7 = (min ((min (5u , var_1_8)) , var_1_100));
		} else {
			var_1_7 = (var_1_9 - 32u);
		}
	} else {
		var_1_7 = (min ((max (var_1_8 , (var_1_100 + var_1_106))) , (var_1_9 - (var_1_10 - var_1_11))));
	}


	// From: Req1Batch62Amount500
	signed long int stepLocal_0 = var_1_51;
	if (var_1_124 >= stepLocal_0) {
		var_1_1 = (abs ((max (var_1_4 , var_1_5)) + var_1_6));
	} else {
		var_1_1 = (var_1_4 + var_1_5);
	}


	// From: Req5Batch62Amount500
	if (var_1_8 != (var_1_20 * var_1_11)) {
		if (var_1_64 > var_1_9) {
			var_1_23 = (var_1_24 - 4);
		}
	}


	// From: Req6Batch62Amount500
	if (((25u * var_1_11) * 5u) > (var_1_64 + var_1_20)) {
		var_1_25 = var_1_17;
	}


	// From: Req27Batch62Amount500
	unsigned long int stepLocal_10 = min (var_1_10 , (256 + var_1_125));
	if ((var_1_121 / (var_1_70 + var_1_75)) < stepLocal_10) {
		var_1_74 = (max ((min ((var_1_24 - var_1_44) , var_1_57)) , var_1_41));
	}


	// From: Req30Batch62Amount500
	unsigned long int stepLocal_13 = var_1_24 ^ (var_1_75 / var_1_10);
	unsigned char stepLocal_12 = var_1_113;
	if (stepLocal_12 || (var_1_56 >= var_1_44)) {
		if (stepLocal_13 <= 1u) {
			if (var_1_113) {
				var_1_81 = (var_1_11 - (abs (var_1_80 - var_1_56)));
			}
		} else {
			var_1_81 = (var_1_52 + var_1_75);
		}
	} else {
		if (var_1_26) {
			var_1_81 = ((5 + var_1_51) + var_1_46);
		} else {
			var_1_81 = (abs (var_1_107));
		}
	}


	// From: Req31Batch62Amount500
	signed long int stepLocal_14 = abs (var_1_57);
	if (! (var_1_117 > (min (var_1_131 , var_1_33)))) {
		if ((var_1_8 | var_1_77) > stepLocal_14) {
			if (! (var_1_63 >= var_1_72)) {
				var_1_82 = (5 + (max (var_1_80 , (var_1_79 + var_1_46))));
			}
		}
	}


	// From: Req34Batch62Amount500
	unsigned long int stepLocal_17 = var_1_7;
	if (stepLocal_17 > var_1_10) {
		var_1_88 = (min ((var_1_89 - var_1_80) , ((var_1_70 - var_1_62) + var_1_75)));
	} else {
		if ((var_1_102 + var_1_4) != (- var_1_33)) {
			var_1_88 = (min ((var_1_71 + var_1_80) , var_1_75));
		}
	}


	// From: Req37Batch62Amount500
	if ((max (var_1_62 , var_1_81)) > (var_1_46 + var_1_41)) {
		var_1_95 = (10.7f - (var_1_22 + (var_1_96 + var_1_97)));
	}


	// From: Req38Batch62Amount500
	unsigned char stepLocal_20 = var_1_113;
	if ((var_1_66 <= 100u) && stepLocal_20) {
		var_1_98 = ((var_1_10 - var_1_91) + (var_1_99 - var_1_46));
	} else {
		var_1_98 = var_1_56;
	}


	// From: Req53Batch62Amount500
	if (var_1_26) {
		var_1_119 = var_1_121;
	} else {
		var_1_119 = var_1_93;
	}


	// From: Req64Batch62Amount500
	var_1_133 = var_1_81;


	// From: Req24Batch62Amount500
	if (var_1_61 > var_1_98) {
		if (var_1_42 <= var_1_32) {
			if ((min (var_1_31 , var_1_16)) != ((var_1_1 * var_1_131) + var_1_15)) {
				var_1_68 = var_1_74;
			} else {
				var_1_68 = (abs (var_1_116));
			}
		} else {
			var_1_68 = var_1_55;
		}
	}


	// From: Req12Batch62Amount500
	signed short int stepLocal_4 = var_1_24;
	unsigned long int stepLocal_3 = var_1_100;
	if (var_1_28) {
		var_1_43 = (abs (var_1_42));
	} else {
		if (((var_1_44 - var_1_45) - var_1_46) <= stepLocal_3) {
			if (var_1_45 < stepLocal_4) {
				var_1_43 = (abs (var_1_98));
			}
		} else {
			var_1_43 = ((1576379696 - (var_1_45 + 5)) - 100000);
		}
	}


	// From: Req36Batch62Amount500
	signed long int stepLocal_19 = (1 + var_1_79) << (max (10u , var_1_93));
	if (var_1_62 < stepLocal_19) {
		var_1_92 = (abs (min ((var_1_9 - var_1_66) , (min (var_1_45 , var_1_43)))));
	} else {
		var_1_92 = (max (var_1_85 , ((abs (var_1_94)) + (var_1_79 + 64u))));
	}


	// From: Req4Batch62Amount500
	if (var_1_35) {
		if ((min (var_1_67 , var_1_100)) == (- (- var_1_9))) {
			if (((var_1_133 / var_1_10) / var_1_20) > var_1_9) {
				var_1_18 = (max (var_1_17 , 10.25));
			}
		} else {
			var_1_18 = (min ((var_1_16 - (var_1_21 - var_1_22)) , var_1_4));
		}
	}


	// From: Req11Batch62Amount500
	if (var_1_37) {
		if (var_1_92 <= var_1_121) {
			var_1_38 = (abs (var_1_40));
		} else {
			var_1_38 = (1 + (abs (1)));
		}
	} else {
		var_1_38 = (var_1_41 + var_1_42);
	}


	// From: Req17Batch62Amount500
	if (! (var_1_98 < 100)) {
		if ((4.25 < var_1_6) || var_1_26) {
			var_1_53 = var_1_50;
		} else {
			var_1_53 = ((max (var_1_16 , (var_1_21 - var_1_22))) - var_1_15);
		}
	}


	// From: Req19Batch62Amount500
	if (var_1_18 < var_1_21) {
		var_1_58 = (abs (var_1_40));
	}


	// From: Req25Batch62Amount500
	unsigned long int stepLocal_9 = max (var_1_11 , var_1_44);
	signed long int stepLocal_8 = var_1_46 - var_1_61;
	signed long int stepLocal_7 = var_1_43;
	unsigned long int stepLocal_6 = var_1_92;
	if (! var_1_37) {
		var_1_69 = ((var_1_70 - var_1_61) + (max (var_1_46 , (max (64 , var_1_45)))));
	} else {
		if (stepLocal_9 == (var_1_9 * var_1_77)) {
			if ((var_1_46 - var_1_62) >= stepLocal_6) {
				var_1_69 = var_1_46;
			} else {
				if (var_1_124 >= stepLocal_8) {
					var_1_69 = (abs (var_1_45));
				}
			}
		} else {
			if ((var_1_11 | (4 / var_1_20)) > stepLocal_7) {
				var_1_69 = (min (var_1_45 , var_1_46));
			} else {
				var_1_69 = (var_1_62 + (var_1_70 - (var_1_71 + var_1_72)));
			}
		}
	}


	// From: Req35Batch62Amount500
	unsigned char stepLocal_18 = var_1_64 != var_1_119;
	if (stepLocal_18 || (var_1_27 || (var_1_17 >= var_1_14))) {
		var_1_90 = var_1_91;
	}


	// From: Req42Batch62Amount500
	signed long int stepLocal_24 = var_1_8;
	unsigned short int stepLocal_23 = var_1_133;
	if (stepLocal_23 == (max (-64 , var_1_55))) {
		if ((max (var_1_1 , var_1_48)) < var_1_31) {
			if (stepLocal_24 < var_1_100) {
				var_1_103 = (! (var_1_84 && var_1_105));
			}
		} else {
			var_1_103 = ((var_1_56 >= var_1_64) && var_1_27);
		}
	}


	// From: Req32Batch62Amount500
	signed long int stepLocal_16 = var_1_43;
	signed long int stepLocal_15 = abs (1);
	if (var_1_103) {
		if (! (var_1_44 <= 4)) {
			var_1_83 = ((var_1_36 && var_1_37) && ((var_1_34 >= var_1_90) || var_1_84));
		} else {
			if (var_1_78 < stepLocal_15) {
				if (stepLocal_16 > ((var_1_98 / var_1_70) & var_1_68)) {
					var_1_83 = (! (var_1_27 && var_1_28));
				}
			} else {
				var_1_83 = (! var_1_28);
			}
		}
	}


	// From: Req63Batch62Amount500
	if (var_1_83 && var_1_28) {
		if (var_1_113) {
			var_1_132 = (var_1_81 + (abs (128)));
		} else {
			var_1_132 = (var_1_55 - 32);
		}
	}


	// From: Req45Batch62Amount500
	if (var_1_83 || var_1_36) {
		var_1_110 = (min (var_1_111 , ((var_1_41 + var_1_70) + var_1_79)));
	}


	// From: Req59Batch62Amount500
	if (var_1_113) {
		var_1_127 = var_1_71;
	} else {
		var_1_127 = var_1_132;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967294);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 1073741823);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -2147483648);
	assume_abort_if_not(var_1_20 <= 2147483647);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 4611686.018427383000e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -1);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	assume_abort_if_not(var_1_33 != 0.0F);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -126);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -63);
	assume_abort_if_not(var_1_41 <= 63);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -63);
	assume_abort_if_not(var_1_42 <= 63);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 191);
	assume_abort_if_not(var_1_44 <= 255);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 64);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -230584.3009213691400e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691400e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= -230584.3009213691400e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 49150);
	assume_abort_if_not(var_1_55 <= 65534);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 32767);
	var_1_57 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_57 >= 16383);
	assume_abort_if_not(var_1_57 <= 32767);
	var_1_61 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 63);
	var_1_62 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 63);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 0);
	assume_abort_if_not(var_1_63 <= 126);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 536870911);
	assume_abort_if_not(var_1_65 <= 1073741824);
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 536870912);
	assume_abort_if_not(var_1_66 <= 1073741823);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 63);
	assume_abort_if_not(var_1_70 <= 127);
	var_1_71 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 32);
	var_1_72 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 31);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 1);
	assume_abort_if_not(var_1_75 <= 127);
	var_1_79 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_79 >= 0);
	assume_abort_if_not(var_1_79 <= 32);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 31);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 1);
	assume_abort_if_not(var_1_84 <= 1);
	var_1_86 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_86 >= 0.0F && var_1_86 <= -1.0e-20F) || (var_1_86 <= 4611686.018427388000e+12F && var_1_86 >= 1.0e-20F ));
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 127);
	assume_abort_if_not(var_1_89 <= 254);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 254);
	var_1_93 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_93 >= 0);
	assume_abort_if_not(var_1_93 <= 25);
	var_1_94 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 2147483647);
	var_1_96 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_96 >= 0.0F && var_1_96 <= -1.0e-20F) || (var_1_96 <= 2305843.009213691400e+12F && var_1_96 >= 1.0e-20F ));
	var_1_97 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_97 >= 0.0F && var_1_97 <= -1.0e-20F) || (var_1_97 <= 2305843.009213691400e+12F && var_1_97 >= 1.0e-20F ));
	var_1_99 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_99 >= 1073741823);
	assume_abort_if_not(var_1_99 <= 2147483647);
	var_1_105 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_105 >= 1);
	assume_abort_if_not(var_1_105 <= 1);
	var_1_108 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_108 >= 0);
	assume_abort_if_not(var_1_108 <= 32767);
	var_1_109 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_109 >= 0);
	assume_abort_if_not(var_1_109 <= 32767);
	var_1_111 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_111 >= -32767);
	assume_abort_if_not(var_1_111 <= 32766);
	var_1_123 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_123 >= -32767);
	assume_abort_if_not(var_1_123 <= 32766);
	var_1_129 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_129 >= -32767);
	assume_abort_if_not(var_1_129 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
	last_1_var_1_35 = var_1_35;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_117 = var_1_117;
	last_1_var_1_121 = var_1_121;
	last_1_var_1_127 = var_1_127;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_124 >= var_1_51) ? (var_1_1 == ((double) (abs ((max (var_1_4 , var_1_5)) + var_1_6)))) : (var_1_1 == ((double) (var_1_4 + var_1_5)))) && ((32 > var_1_106) ? (((- var_1_100) != (var_1_106 - var_1_8)) ? (var_1_7 == ((unsigned long int) (min ((min (5u , var_1_8)) , var_1_100)))) : (var_1_7 == ((unsigned long int) (var_1_9 - 32u)))) : (var_1_7 == ((unsigned long int) (min ((max (var_1_8 , (var_1_100 + var_1_106))) , (var_1_9 - (var_1_10 - var_1_11)))))))) && (((min (var_1_4 , var_1_6)) <= (var_1_13 - var_1_14)) ? (var_1_12 == ((double) (var_1_15 - var_1_16))) : (var_1_12 == ((double) (max ((var_1_6 + var_1_5) , (var_1_4 + var_1_17))))))) && (var_1_35 ? (((min (var_1_67 , var_1_100)) == (- (- var_1_9))) ? ((((var_1_133 / var_1_10) / var_1_20) > var_1_9) ? (var_1_18 == ((double) (max (var_1_17 , 10.25)))) : 1) : (var_1_18 == ((double) (min ((var_1_16 - (var_1_21 - var_1_22)) , var_1_4))))) : 1)) && ((var_1_8 != (var_1_20 * var_1_11)) ? ((var_1_64 > var_1_9) ? (var_1_23 == ((signed short int) (var_1_24 - 4))) : 1) : 1)) && ((((25u * var_1_11) * 5u) > (var_1_64 + var_1_20)) ? (var_1_25 == ((float) var_1_17)) : 1)) && (var_1_26 == ((unsigned char) ((var_1_27 || var_1_28) || var_1_29)))) && ((var_1_13 < var_1_5) ? (var_1_30 == ((double) ((abs (var_1_31 + 256.6)) + var_1_22))) : 1)) && (((var_1_21 / var_1_33) >= var_1_17) ? (var_1_32 == ((unsigned long int) ((min (last_1_var_1_127 , var_1_11)) + var_1_34))) : 1)) && (var_1_35 == ((unsigned char) (var_1_36 && var_1_37)))) && (var_1_37 ? ((var_1_92 <= var_1_121) ? (var_1_38 == ((signed char) (abs (var_1_40)))) : (var_1_38 == ((signed char) (1 + (abs (1)))))) : (var_1_38 == ((signed char) (var_1_41 + var_1_42))))) && (var_1_28 ? (var_1_43 == ((signed long int) (abs (var_1_42)))) : ((((var_1_44 - var_1_45) - var_1_46) <= var_1_100) ? ((var_1_45 < var_1_24) ? (var_1_43 == ((signed long int) (abs (var_1_98)))) : 1) : (var_1_43 == ((signed long int) ((1576379696 - (var_1_45 + 5)) - 100000)))))) && (var_1_47 == ((signed short int) (min (-256 , (max (-64 , var_1_45))))))) && ((last_1_var_1_48 >= (var_1_5 + var_1_17)) ? (var_1_48 == ((double) (var_1_31 + (max (var_1_5 , var_1_6))))) : ((((var_1_34 & var_1_44) + var_1_10) >= var_1_100) ? (var_1_48 == ((double) (var_1_31 + (var_1_49 + var_1_50)))) : (var_1_48 == ((double) var_1_6))))) && (var_1_27 ? (var_1_51 == ((signed long int) var_1_46)) : 1)) && (var_1_52 == ((signed char) var_1_41))) && ((! (var_1_98 < 100)) ? (((4.25 < var_1_6) || var_1_26) ? (var_1_53 == ((double) var_1_50)) : (var_1_53 == ((double) ((max (var_1_16 , (var_1_21 - var_1_22))) - var_1_15)))) : 1)) && ((var_1_46 >= var_1_34) ? (var_1_54 == ((unsigned short int) (max (((var_1_55 - var_1_46) - var_1_45) , (var_1_44 + var_1_56))))) : (var_1_54 == ((unsigned short int) ((var_1_57 - var_1_45) + var_1_44))))) && ((var_1_18 < var_1_21) ? (var_1_58 == ((signed char) (abs (var_1_40)))) : 1)) && (var_1_59 == ((signed long int) (var_1_55 + var_1_56)))) && (var_1_60 == ((signed char) (min ((var_1_45 - 100) , ((var_1_61 + var_1_62) - var_1_63)))))) && (var_1_64 == ((unsigned long int) (((var_1_65 + var_1_66) - var_1_46) + var_1_62)))) && (((max (var_1_5 , (var_1_14 - var_1_15))) < var_1_49) ? (var_1_67 == ((signed long int) (max (5 , 100000)))) : 1)) && ((var_1_61 > var_1_98) ? ((var_1_42 <= var_1_32) ? (((min (var_1_31 , var_1_16)) != ((var_1_1 * var_1_131) + var_1_15)) ? (var_1_68 == ((signed long int) var_1_74)) : (var_1_68 == ((signed long int) (abs (var_1_116))))) : (var_1_68 == ((signed long int) var_1_55))) : 1)) && ((! var_1_37) ? (var_1_69 == ((unsigned char) ((var_1_70 - var_1_61) + (max (var_1_46 , (max (64 , var_1_45))))))) : (((max (var_1_11 , var_1_44)) == (var_1_9 * var_1_77)) ? (((var_1_46 - var_1_62) >= var_1_92) ? (var_1_69 == ((unsigned char) var_1_46)) : ((var_1_124 >= (var_1_46 - var_1_61)) ? (var_1_69 == ((unsigned char) (abs (var_1_45)))) : 1)) : (((var_1_11 | (4 / var_1_20)) > var_1_43) ? (var_1_69 == ((unsigned char) (min (var_1_45 , var_1_46)))) : (var_1_69 == ((unsigned char) (var_1_62 + (var_1_70 - (var_1_71 + var_1_72))))))))) && ((var_1_33 < var_1_13) ? (var_1_73 == ((float) (var_1_4 + var_1_50))) : (var_1_73 == ((float) (abs (var_1_5)))))) && (((var_1_121 / (var_1_70 + var_1_75)) < (min (var_1_10 , (256 + var_1_125)))) ? (var_1_74 == ((signed long int) (max ((min ((var_1_24 - var_1_44) , var_1_57)) , var_1_41)))) : 1)) && ((! (128 > var_1_62)) ? (var_1_77 == ((unsigned long int) (min ((64u + (var_1_10 - var_1_63)) , var_1_8)))) : 1)) && (var_1_28 ? ((var_1_57 == (abs (var_1_20))) ? (var_1_78 == ((signed char) (var_1_71 - var_1_72))) : (var_1_78 == ((signed char) ((var_1_71 + var_1_62) - (var_1_72 + (var_1_79 + var_1_80)))))) : (var_1_37 ? (var_1_78 == ((signed char) var_1_45)) : (var_1_78 == ((signed char) (min (var_1_63 , ((max (var_1_71 , var_1_79)) - var_1_45)))))))) && ((var_1_113 || (var_1_56 >= var_1_44)) ? (((var_1_24 ^ (var_1_75 / var_1_10)) <= 1u) ? (var_1_113 ? (var_1_81 == ((signed long int) (var_1_11 - (abs (var_1_80 - var_1_56))))) : 1) : (var_1_81 == ((signed long int) (var_1_52 + var_1_75)))) : (var_1_26 ? (var_1_81 == ((signed long int) ((5 + var_1_51) + var_1_46))) : (var_1_81 == ((signed long int) (abs (var_1_107))))))) && ((! (var_1_117 > (min (var_1_131 , var_1_33)))) ? (((var_1_8 | var_1_77) > (abs (var_1_57))) ? ((! (var_1_63 >= var_1_72)) ? (var_1_82 == ((signed short int) (5 + (max (var_1_80 , (var_1_79 + var_1_46)))))) : 1) : 1) : 1)) && (var_1_103 ? ((! (var_1_44 <= 4)) ? (var_1_83 == ((unsigned char) ((var_1_36 && var_1_37) && ((var_1_34 >= var_1_90) || var_1_84)))) : ((var_1_78 < (abs (1))) ? ((var_1_43 > ((var_1_98 / var_1_70) & var_1_68)) ? (var_1_83 == ((unsigned char) (! (var_1_27 && var_1_28)))) : 1) : (var_1_83 == ((unsigned char) (! var_1_28))))) : 1)) && ((((var_1_22 + var_1_86) - var_1_13) <= last_1_var_1_117) ? ((last_1_var_1_106 != ((last_1_var_1_92 / 50) * var_1_45)) ? (var_1_85 == ((unsigned short int) ((var_1_44 + (min (var_1_61 , last_1_var_1_106))) + var_1_79))) : (var_1_85 == ((unsigned short int) (abs ((var_1_71 + var_1_70) + var_1_46))))) : ((last_1_var_1_35 && var_1_84) ? (var_1_85 == ((unsigned short int) (last_1_var_1_106 + var_1_61))) : (var_1_85 == ((unsigned short int) (min ((min ((var_1_55 - var_1_80) , var_1_61)) , var_1_70))))))) && ((var_1_7 > var_1_10) ? (var_1_88 == ((unsigned char) (min ((var_1_89 - var_1_80) , ((var_1_70 - var_1_62) + var_1_75))))) : (((var_1_102 + var_1_4) != (- var_1_33)) ? (var_1_88 == ((unsigned char) (min ((var_1_71 + var_1_80) , var_1_75)))) : 1))) && (((var_1_64 != var_1_119) || (var_1_27 || (var_1_17 >= var_1_14))) ? (var_1_90 == ((unsigned char) var_1_91)) : 1)) && ((var_1_62 < ((1 + var_1_79) << (max (10u , var_1_93)))) ? (var_1_92 == ((unsigned long int) (abs (min ((var_1_9 - var_1_66) , (min (var_1_45 , var_1_43))))))) : (var_1_92 == ((unsigned long int) (max (var_1_85 , ((abs (var_1_94)) + (var_1_79 + 64u)))))))) && (((max (var_1_62 , var_1_81)) > (var_1_46 + var_1_41)) ? (var_1_95 == ((float) (10.7f - (var_1_22 + (var_1_96 + var_1_97))))) : 1)) && (((var_1_66 <= 100u) && var_1_113) ? (var_1_98 == ((unsigned long int) ((var_1_10 - var_1_91) + (var_1_99 - var_1_46)))) : (var_1_98 == ((unsigned long int) var_1_56)))) && ((((last_1_var_1_54 + -5) + (last_1_var_1_7 + -50)) >= -1) ? ((last_1_var_1_81 >= last_1_var_1_98) ? (var_1_100 == ((unsigned long int) (abs (last_1_var_1_85)))) : 1) : (var_1_100 == ((unsigned long int) last_1_var_1_121)))) && (((! var_1_26) && (var_1_89 <= var_1_77)) ? ((var_1_5 > (var_1_30 + (var_1_13 - var_1_15))) ? (var_1_101 == ((double) (var_1_4 + var_1_49))) : (var_1_101 == ((double) (var_1_96 + var_1_31)))) : 1)) && (((last_1_var_1_102 <= 7.75) && var_1_84) ? (var_1_102 == ((double) (max (var_1_17 , var_1_96)))) : (var_1_102 == ((double) ((min (255.3 , var_1_96)) - 199.5))))) && ((var_1_133 == (max (-64 , var_1_55))) ? (((max (var_1_1 , var_1_48)) < var_1_31) ? ((var_1_8 < var_1_100) ? (var_1_103 == ((unsigned char) (! (var_1_84 && var_1_105)))) : 1) : (var_1_103 == ((unsigned char) ((var_1_56 >= var_1_64) && var_1_27)))) : 1)) && ((var_1_86 < ((var_1_97 / 128.625) + var_1_12)) ? (var_1_106 == ((unsigned short int) (max ((64 + var_1_44) , var_1_89)))) : (var_1_106 == ((unsigned short int) var_1_80)))) && ((var_1_66 > 1u) ? (var_1_107 == ((unsigned short int) (var_1_80 + 2))) : (var_1_107 == ((unsigned short int) ((max (var_1_108 , var_1_109)) + var_1_61))))) && ((var_1_83 || var_1_36) ? (var_1_110 == ((signed short int) (min (var_1_111 , ((var_1_41 + var_1_70) + var_1_79))))) : 1)) && ((var_1_29 && var_1_84) ? ((var_1_73 <= (- (max (var_1_31 , var_1_86)))) ? (var_1_112 == ((float) (min (((var_1_21 - var_1_22) - var_1_97) , var_1_4)))) : (var_1_112 == ((float) var_1_4))) : 1)) && (var_1_113 == ((unsigned char) (var_1_29 || var_1_28)))) && (var_1_29 ? (var_1_114 == ((float) var_1_6)) : (var_1_114 == ((float) var_1_15)))) && (var_1_26 ? (var_1_115 == ((unsigned char) var_1_29)) : (var_1_115 == ((unsigned char) var_1_84)))) && (var_1_113 ? (var_1_116 == ((signed char) var_1_72)) : 1)) && (var_1_35 ? (var_1_117 == ((double) var_1_49)) : 1)) && (var_1_118 == ((signed short int) var_1_46))) && (var_1_26 ? (var_1_119 == ((signed long int) var_1_121)) : (var_1_119 == ((signed long int) var_1_93)))) && (var_1_121 == ((unsigned long int) var_1_89))) && (var_1_37 ? (var_1_122 == ((signed short int) var_1_123)) : 1)) && (var_1_124 == ((unsigned short int) var_1_79))) && (var_1_84 ? (var_1_125 == ((signed short int) -1)) : (var_1_125 == ((signed short int) var_1_72)))) && (var_1_126 == ((unsigned char) var_1_45))) && (var_1_113 ? (var_1_127 == ((unsigned short int) var_1_71)) : (var_1_127 == ((unsigned short int) var_1_132)))) && (var_1_128 == ((signed short int) var_1_129))) && (var_1_36 ? (var_1_130 == ((unsigned char) var_1_91)) : (var_1_130 == ((unsigned char) var_1_62)))) && (var_1_131 == ((double) var_1_86))) && ((var_1_83 && var_1_28) ? (var_1_113 ? (var_1_132 == ((unsigned short int) (var_1_81 + (abs (128))))) : (var_1_132 == ((unsigned short int) (var_1_55 - 32)))) : 1)) && (var_1_133 == ((unsigned short int) var_1_81))) && (var_1_134 == ((unsigned short int) var_1_93))
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
