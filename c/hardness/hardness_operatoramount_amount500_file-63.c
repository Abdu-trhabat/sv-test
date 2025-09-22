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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch63Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 4;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 100;
signed long int var_1_8 = -256;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 200;
signed char var_1_14 = 16;
unsigned char var_1_15 = 64;
unsigned char var_1_16 = 100;
signed long int var_1_17 = 256;
float var_1_18 = 1.6;
signed long int var_1_20 = 16;
signed char var_1_21 = -1;
double var_1_23 = 8.6;
double var_1_24 = 32.1;
double var_1_25 = 256.4;
double var_1_26 = 255.5;
double var_1_27 = 256.5;
double var_1_28 = 10000000.25;
signed long int var_1_29 = 0;
float var_1_30 = 999999999999.2;
signed long int var_1_31 = -10000;
unsigned short int var_1_32 = 0;
signed char var_1_34 = 32;
double var_1_35 = 10.875;
double var_1_36 = 1.4;
signed short int var_1_37 = -32;
unsigned char var_1_38 = 128;
signed long int var_1_39 = 5;
signed long int var_1_40 = -128;
signed long int var_1_41 = 2044377949;
signed short int var_1_42 = 10;
float var_1_43 = 4.1;
float var_1_45 = 256.125;
float var_1_46 = 24.8;
float var_1_47 = 255.5;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 4;
unsigned char var_1_50 = 0;
unsigned char var_1_51 = 0;
float var_1_52 = 127.1;
float var_1_53 = 0.19999999999999996;
signed short int var_1_54 = -64;
signed short int var_1_56 = 19141;
signed short int var_1_57 = 29317;
signed short int var_1_58 = -25;
signed short int var_1_59 = -8;
unsigned long int var_1_60 = 16;
unsigned long int var_1_62 = 3833740561;
unsigned long int var_1_63 = 1512056449;
unsigned long int var_1_64 = 1329144994;
unsigned char var_1_65 = 1;
signed short int var_1_66 = 4;
signed short int var_1_67 = 10000;
signed short int var_1_68 = 10000;
float var_1_69 = 32.4;
float var_1_70 = 0.0;
float var_1_71 = 4.5;
float var_1_72 = 0.0;
float var_1_73 = 0.0;
float var_1_74 = 7.25;
signed char var_1_75 = -100;
signed char var_1_76 = -2;
unsigned short int var_1_77 = 256;
unsigned short int var_1_78 = 36753;
unsigned short int var_1_79 = 62814;
signed short int var_1_80 = -16;
unsigned char var_1_81 = 0;
signed char var_1_82 = 50;
signed char var_1_83 = -1;
signed char var_1_84 = -4;
signed char var_1_85 = 50;
unsigned char var_1_86 = 1;
double var_1_87 = 15.8;
signed char var_1_88 = 5;
signed char var_1_89 = -64;
unsigned char var_1_90 = 4;
unsigned char var_1_91 = 128;
double var_1_92 = 127.75;
unsigned char var_1_93 = 1;
unsigned char var_1_94 = 0;
signed char var_1_95 = 8;
signed short int var_1_96 = 8;
signed short int var_1_97 = 5;
unsigned char var_1_98 = 0;
unsigned char var_1_99 = 1;
double var_1_100 = 16.5;
double var_1_101 = 25.75;
signed long int var_1_102 = 128;
signed long int var_1_103 = 4;
float var_1_104 = 16.375;
unsigned char var_1_105 = 128;
signed long int var_1_106 = 10;
signed short int var_1_107 = -1;
double var_1_108 = 0.4;
unsigned char var_1_109 = 0;
double var_1_110 = 256.5;
signed char var_1_111 = -64;
signed char var_1_112 = -10;
signed short int var_1_113 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 1;
unsigned char last_1_var_1_13 = 200;
signed long int last_1_var_1_29 = 0;
signed long int last_1_var_1_31 = -10000;
signed char last_1_var_1_34 = 32;
signed long int last_1_var_1_40 = -128;
signed short int last_1_var_1_42 = 10;
signed short int last_1_var_1_54 = -64;
unsigned long int last_1_var_1_60 = 16;
signed short int last_1_var_1_66 = 4;
unsigned short int last_1_var_1_77 = 256;
signed short int last_1_var_1_80 = -16;
unsigned char last_1_var_1_86 = 1;
unsigned char last_1_var_1_90 = 4;
unsigned char last_1_var_1_93 = 1;
signed char last_1_var_1_95 = 8;
signed short int last_1_var_1_97 = 5;
unsigned char last_1_var_1_98 = 0;
signed long int last_1_var_1_102 = 128;
unsigned char last_1_var_1_105 = 128;
double last_1_var_1_108 = 0.4;
signed short int last_1_var_1_113 = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req11Batch63Amount500
	if (! (last_1_var_1_86 || var_1_11)) {
		var_1_31 = (last_1_var_1_42 + var_1_14);
	}


	// From: Req48Batch63Amount500
	var_1_102 = last_1_var_1_31;


	// From: Req58Batch63Amount500
	signed long int stepLocal_34 = last_1_var_1_29 / 100;
	unsigned char stepLocal_33 = last_1_var_1_98;
	if (stepLocal_34 <= ((last_1_var_1_113 & var_1_7) ^ var_1_16)) {
		if (last_1_var_1_93) {
			if (stepLocal_33 && (var_1_38 >= var_1_62)) {
				var_1_113 = last_1_var_1_90;
			} else {
				var_1_113 = var_1_16;
			}
		} else {
			var_1_113 = -256;
		}
	}


	// From: Req40Batch63Amount500
	if ((var_1_38 ^ var_1_79) >= last_1_var_1_66) {
		if (var_1_27 >= (- var_1_26)) {
			if (last_1_var_1_60 >= last_1_var_1_102) {
				var_1_93 = (last_1_var_1_9 && var_1_50);
			} else {
				var_1_93 = (! ((last_1_var_1_9 || var_1_11) || var_1_51));
			}
		} else {
			if ((var_1_62 + var_1_56) >= 0u) {
				var_1_93 = (var_1_94 || var_1_50);
			}
		}
	} else {
		var_1_93 = (((max (last_1_var_1_54 , var_1_89)) == (last_1_var_1_34 * var_1_76)) && var_1_94);
	}


	// From: Req56Batch63Amount500
	if (var_1_93) {
		var_1_110 = var_1_46;
	} else {
		var_1_110 = var_1_27;
	}


	// From: Req24Batch63Amount500
	unsigned char stepLocal_19 = (last_1_var_1_29 < var_1_16) && var_1_50;
	signed long int stepLocal_18 = var_1_7 - 5;
	signed long int stepLocal_17 = -32;
	if ((abs (last_1_var_1_42)) >= stepLocal_17) {
		if (last_1_var_1_86 && stepLocal_19) {
			var_1_60 = (max (var_1_56 , var_1_16));
		}
	} else {
		if ((var_1_49 * last_1_var_1_60) <= stepLocal_18) {
			var_1_60 = (min (var_1_7 , (var_1_56 + last_1_var_1_105)));
		} else {
			var_1_60 = ((min (var_1_62 , (var_1_63 + var_1_64))) - last_1_var_1_60);
		}
	}


	// From: Req6Batch63Amount500
	if (last_1_var_1_31 >= var_1_6) {
		if ((127.75f / (min (9.6f , var_1_18))) <= last_1_var_1_108) {
			if (var_1_16 < (var_1_15 * 10)) {
				var_1_17 = (abs (-32 + var_1_20));
			} else {
				var_1_17 = var_1_15;
			}
		} else {
			var_1_17 = (last_1_var_1_29 - last_1_var_1_97);
		}
	} else {
		if (last_1_var_1_34 < (max ((min (last_1_var_1_60 , var_1_5)) , last_1_var_1_29))) {
			var_1_17 = last_1_var_1_34;
		}
	}


	// From: Req4Batch63Amount500
	if (var_1_11) {
		var_1_12 = var_1_6;
	}


	// From: Req10Batch63Amount500
	if ((var_1_17 + (128 + var_1_15)) <= var_1_7) {
		var_1_30 = var_1_25;
	}


	// From: Req13Batch63Amount500
	var_1_34 = (var_1_14 - var_1_6);


	// From: Req14Batch63Amount500
	signed short int stepLocal_6 = var_1_113;
	if (stepLocal_6 <= (abs (var_1_7))) {
		var_1_35 = (7.15 - var_1_36);
	} else {
		var_1_35 = (min (var_1_36 , var_1_28));
	}


	// From: Req25Batch63Amount500
	var_1_65 = (! var_1_51);


	// From: Req27Batch63Amount500
	if (var_1_45 <= 31.375f) {
		var_1_69 = ((abs (var_1_70)) - ((var_1_72 + var_1_73) - var_1_46));
	}


	// From: Req29Batch63Amount500
	signed short int stepLocal_22 = var_1_68;
	if (var_1_102 < stepLocal_22) {
		var_1_75 = ((var_1_49 + var_1_76) + var_1_6);
	} else {
		var_1_75 = ((var_1_14 - var_1_6) + -10);
	}


	// From: Req31Batch63Amount500
	var_1_80 = (min (var_1_57 , last_1_var_1_80));


	// From: Req33Batch63Amount500
	if (var_1_93) {
		var_1_82 = (max ((var_1_83 - var_1_49) , var_1_76));
	}


	// From: Req34Batch63Amount500
	if (! (var_1_10 && (var_1_36 < var_1_71))) {
		var_1_84 = ((var_1_6 + (var_1_85 - 4)) - 4);
	} else {
		var_1_84 = ((var_1_76 + var_1_49) + var_1_85);
	}


	// From: Req36Batch63Amount500
	var_1_87 = (max ((var_1_53 - var_1_36) , var_1_27));


	// From: Req44Batch63Amount500
	if (var_1_51) {
		var_1_98 = var_1_10;
	}


	// From: Req45Batch63Amount500
	var_1_99 = var_1_11;


	// From: Req46Batch63Amount500
	var_1_100 = var_1_26;


	// From: Req47Batch63Amount500
	var_1_101 = 8.4;


	// From: Req49Batch63Amount500
	var_1_103 = -500;


	// From: Req51Batch63Amount500
	if (var_1_98) {
		var_1_105 = var_1_91;
	}


	// From: Req53Batch63Amount500
	var_1_107 = var_1_57;


	// From: Req54Batch63Amount500
	if (var_1_94) {
		var_1_108 = var_1_45;
	} else {
		var_1_108 = var_1_25;
	}


	// From: Req55Batch63Amount500
	var_1_109 = var_1_51;


	// From: Req57Batch63Amount500
	if (var_1_94) {
		var_1_111 = var_1_6;
	} else {
		var_1_111 = var_1_112;
	}


	// From: Req22Batch63Amount500
	unsigned char stepLocal_14 = var_1_98;
	if (stepLocal_14 || ((var_1_101 * var_1_26) > (- var_1_87))) {
		if (! (var_1_20 > var_1_17)) {
			var_1_54 = (((last_1_var_1_54 - var_1_105) + var_1_5) + (min ((var_1_14 - var_1_6) , var_1_15)));
		}
	} else {
		var_1_54 = ((var_1_56 - (max (256 , var_1_7))) - (var_1_57 - (max (var_1_15 , var_1_49))));
	}


	// From: Req41Batch63Amount500
	signed long int stepLocal_32 = var_1_103 & var_1_15;
	signed long int stepLocal_31 = (var_1_67 - var_1_5) & (var_1_17 + var_1_59);
	unsigned char stepLocal_30 = var_1_6;
	unsigned char stepLocal_29 = var_1_12;
	unsigned char stepLocal_28 = var_1_49;
	if (stepLocal_31 < var_1_41) {
		if (stepLocal_29 > 1) {
			if (var_1_5 > stepLocal_32) {
				var_1_95 = var_1_89;
			} else {
				var_1_95 = (abs (var_1_49));
			}
		}
	} else {
		if ((var_1_5 - (min (var_1_91 , 32))) >= stepLocal_28) {
			var_1_95 = (var_1_6 + var_1_76);
		} else {
			if (last_1_var_1_95 < stepLocal_30) {
				var_1_95 = (min (-16 , var_1_83));
			}
		}
	}


	// From: Req2Batch63Amount500
	if (var_1_99) {
		var_1_8 = (max (var_1_6 , var_1_7));
	} else {
		var_1_8 = (25 + var_1_6);
	}


	// From: Req7Batch63Amount500
	unsigned char stepLocal_4 = var_1_6;
	signed long int stepLocal_3 = -32;
	if (stepLocal_4 > (- (min (var_1_5 , var_1_102)))) {
		if (var_1_87 < (var_1_18 * (var_1_69 * 127.4f))) {
			if (var_1_20 == stepLocal_3) {
				if ((- var_1_18) >= (var_1_69 + var_1_87)) {
					var_1_21 = (var_1_14 + var_1_6);
				}
			} else {
				var_1_21 = var_1_5;
			}
		} else {
			var_1_21 = var_1_6;
		}
	} else {
		var_1_21 = var_1_6;
	}


	// From: Req8Batch63Amount500
	if (((min (4 , var_1_7)) * var_1_103) > 8) {
		var_1_23 = var_1_24;
	} else {
		var_1_23 = (max ((abs (0.75 + var_1_25)) , ((var_1_26 + 1.00000000075E9) + (var_1_27 + var_1_28))));
	}


	// From: Req32Batch63Amount500
	if (var_1_11) {
		var_1_81 = (! (! var_1_10));
	} else {
		var_1_81 = (var_1_109 || var_1_10);
	}


	// From: Req42Batch63Amount500
	var_1_96 = var_1_105;


	// From: Req50Batch63Amount500
	if (var_1_109) {
		var_1_104 = var_1_25;
	} else {
		var_1_104 = var_1_28;
	}


	// From: Req17Batch63Amount500
	signed long int stepLocal_10 = var_1_102;
	unsigned char stepLocal_9 = var_1_81;
	if (stepLocal_9 || (var_1_93 && var_1_11)) {
		var_1_40 = ((var_1_41 - var_1_7) - last_1_var_1_40);
	} else {
		if (var_1_31 != stepLocal_10) {
			var_1_40 = ((last_1_var_1_40 + var_1_54) - (min ((min (var_1_113 , var_1_38)) , var_1_15)));
		} else {
			var_1_40 = var_1_95;
		}
	}


	// From: Req3Batch63Amount500
	unsigned char stepLocal_0 = var_1_109;
	if ((var_1_8 < var_1_113) && stepLocal_0) {
		var_1_9 = ((var_1_8 > var_1_113) || var_1_10);
	} else {
		var_1_9 = (! var_1_11);
	}


	// From: Req12Batch63Amount500
	if (var_1_54 < (min ((var_1_60 / 25) , (var_1_6 % var_1_15)))) {
		var_1_32 = (var_1_5 + var_1_54);
	} else {
		var_1_32 = (max (8 , var_1_14));
	}


	// From: Req26Batch63Amount500
	if ((var_1_6 / var_1_15) < var_1_54) {
		var_1_66 = (var_1_32 - ((var_1_67 + var_1_68) - var_1_107));
	}


	// From: Req28Batch63Amount500
	signed long int stepLocal_21 = 25;
	unsigned long int stepLocal_20 = var_1_60;
	if (var_1_32 > stepLocal_21) {
		if (var_1_80 >= stepLocal_20) {
			var_1_74 = (var_1_28 + var_1_47);
		} else {
			var_1_74 = (abs (10.125f));
		}
	}


	// From: Req1Batch63Amount500
	if (((var_1_103 / -2) <= var_1_102) && var_1_81) {
		var_1_1 = ((var_1_5 - var_1_6) - var_1_7);
	} else {
		var_1_1 = (var_1_6 + var_1_7);
	}


	// From: Req15Batch63Amount500
	signed long int stepLocal_8 = var_1_31;
	unsigned char stepLocal_7 = var_1_105;
	if (stepLocal_7 <= var_1_31) {
		if (stepLocal_8 > ((min (var_1_5 , var_1_38)) - var_1_15)) {
			var_1_37 = (min (((var_1_15 - var_1_8) + var_1_66) , var_1_14));
		}
	}


	// From: Req20Batch63Amount500
	if (var_1_40 != (abs (var_1_32))) {
		if (var_1_41 != (var_1_14 >> var_1_49)) {
			if (! var_1_11) {
				var_1_48 = (var_1_11 || (var_1_9 && var_1_50));
			}
		} else {
			var_1_48 = (var_1_10 && (var_1_50 || (! var_1_11)));
		}
	} else {
		var_1_48 = (var_1_10 && var_1_51);
	}


	// From: Req21Batch63Amount500
	unsigned char stepLocal_13 = ! (var_1_40 < var_1_14);
	if (stepLocal_13 || var_1_11) {
		var_1_52 = ((min (var_1_27 , (abs (var_1_47)))) + (var_1_46 - var_1_53));
	} else {
		var_1_52 = (min ((max (var_1_36 , var_1_26)) , var_1_24));
	}


	// From: Req5Batch63Amount500
	signed long int stepLocal_2 = (var_1_6 + var_1_14) - var_1_7;
	signed long int stepLocal_1 = var_1_40;
	if (var_1_10) {
		var_1_13 = var_1_7;
	} else {
		if (stepLocal_2 >= (last_1_var_1_13 | (min (var_1_102 , var_1_5)))) {
			var_1_13 = ((var_1_15 + (min (64 , var_1_16))) - (min (var_1_7 , var_1_14)));
		} else {
			if (var_1_7 >= stepLocal_1) {
				var_1_13 = (max (((abs (var_1_14)) + var_1_16) , var_1_7));
			}
		}
	}


	// From: Req16Batch63Amount500
	if (var_1_11) {
		if (var_1_38 <= var_1_14) {
			if (var_1_110 >= var_1_25) {
				var_1_39 = (min (var_1_17 , var_1_15));
			} else {
				if (var_1_13 >= ((var_1_16 - var_1_14) - var_1_6)) {
					var_1_39 = var_1_12;
				}
			}
		} else {
			var_1_39 = ((abs (var_1_20)) - ((var_1_16 + var_1_15) + (min (var_1_12 , var_1_80))));
		}
	}


	// From: Req9Batch63Amount500
	unsigned char stepLocal_5 = var_1_7;
	if ((var_1_5 % var_1_15) >= stepLocal_5) {
		var_1_29 = (10000000 + last_1_var_1_29);
	} else {
		var_1_29 = var_1_66;
	}


	// From: Req23Batch63Amount500
	signed long int stepLocal_16 = ~ var_1_17;
	signed long int stepLocal_15 = var_1_41;
	if (var_1_74 <= (var_1_36 - var_1_46)) {
		var_1_58 = (100 - var_1_56);
	} else {
		if (stepLocal_15 >= (var_1_54 + (var_1_14 * var_1_15))) {
			if (stepLocal_16 == var_1_16) {
				var_1_58 = ((var_1_38 - var_1_49) + var_1_60);
			}
		} else {
			var_1_58 = (min ((5 - var_1_56) , var_1_59));
		}
	}


	// From: Req43Batch63Amount500
	if (var_1_98) {
		var_1_97 = var_1_29;
	} else {
		var_1_97 = var_1_83;
	}


	// From: Req19Batch63Amount500
	signed long int stepLocal_12 = var_1_8;
	signed short int stepLocal_11 = var_1_58;
	if ((var_1_17 + var_1_60) >= stepLocal_12) {
		var_1_43 = (var_1_26 + var_1_28);
	} else {
		if (var_1_99) {
			if (stepLocal_11 > var_1_7) {
				var_1_43 = var_1_27;
			}
		} else {
			var_1_43 = (min (var_1_45 , ((var_1_46 - var_1_47) + 0.81f)));
		}
	}


	// From: Req30Batch63Amount500
	if (! (var_1_29 < last_1_var_1_77)) {
		var_1_77 = (max (last_1_var_1_77 , (var_1_78 - var_1_57)));
	} else {
		var_1_77 = ((var_1_79 - var_1_5) - var_1_38);
	}


	// From: Req38Batch63Amount500
	if (var_1_63 <= var_1_39) {
		var_1_90 = (min (var_1_89 , ((min (var_1_5 , var_1_91)) - var_1_16)));
	}


	// From: Req52Batch63Amount500
	if (var_1_9) {
		var_1_106 = var_1_90;
	} else {
		var_1_106 = var_1_103;
	}


	// From: Req35Batch63Amount500
	if (var_1_96 > var_1_17) {
		var_1_86 = (! var_1_50);
	} else {
		var_1_86 = ((var_1_58 != var_1_85) && (! var_1_51));
	}


	// From: Req39Batch63Amount500
	signed long int stepLocal_27 = -10;
	signed long int stepLocal_26 = var_1_90 * var_1_7;
	signed short int stepLocal_25 = var_1_97;
	signed long int stepLocal_24 = 128;
	if (stepLocal_24 >= (min ((var_1_67 - var_1_41) , var_1_106))) {
		if ((var_1_67 / var_1_5) < stepLocal_25) {
			var_1_92 = (var_1_70 - var_1_73);
		} else {
			if ((max ((var_1_31 / var_1_16) , var_1_111)) > stepLocal_27) {
				if (stepLocal_26 < var_1_31) {
					var_1_92 = var_1_72;
				} else {
					var_1_92 = ((var_1_73 + var_1_53) - 1.25);
				}
			} else {
				var_1_92 = (max ((min (var_1_73 , var_1_53)) , (max ((var_1_26 + var_1_47) , (var_1_72 - var_1_46)))));
			}
		}
	} else {
		var_1_92 = (max ((min (var_1_72 , var_1_45)) , (max (var_1_36 , var_1_70))));
	}


	// From: Req18Batch63Amount500
	if (((var_1_106 * -2) / -10000) > (abs (var_1_17 - var_1_113))) {
		var_1_42 = var_1_7;
	} else {
		var_1_42 = (min ((var_1_113 - 16) , (var_1_38 + (var_1_6 - last_1_var_1_42))));
	}


	// From: Req37Batch63Amount500
	signed long int stepLocal_23 = var_1_85 - (max (var_1_78 , var_1_5));
	if (var_1_23 >= (max ((var_1_72 - var_1_53) , var_1_92))) {
		var_1_88 = ((min (32 , var_1_49)) - ((abs (var_1_89)) - var_1_14));
	} else {
		if (stepLocal_23 < (var_1_106 & var_1_15)) {
			var_1_88 = ((min (var_1_83 , var_1_49)) - var_1_85);
		} else {
			var_1_88 = (var_1_83 - var_1_14);
		}
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 0);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 63);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 64);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
	assume_abort_if_not(var_1_18 != 0.0F);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -1073741823);
	assume_abort_if_not(var_1_20 <= 1073741823);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -230584.3009213691400e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 2305843.009213691400e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= -230584.3009213691400e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 2305843.009213691400e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 127);
	assume_abort_if_not(var_1_38 <= 255);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 1073741822);
	assume_abort_if_not(var_1_41 <= 2147483646);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 1);
	assume_abort_if_not(var_1_49 <= 6);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 0);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_56 >= 16382);
	assume_abort_if_not(var_1_56 <= 32766);
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= 16383);
	assume_abort_if_not(var_1_57 <= 32766);
	var_1_59 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_59 >= -32767);
	assume_abort_if_not(var_1_59 <= 32766);
	var_1_62 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_62 >= 2147483647);
	assume_abort_if_not(var_1_62 <= 4294967294);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 1073741823);
	assume_abort_if_not(var_1_63 <= 2147483647);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 1073741824);
	assume_abort_if_not(var_1_64 <= 2147483647);
	var_1_67 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_67 >= 8191);
	assume_abort_if_not(var_1_67 <= 16383);
	var_1_68 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_68 >= 8192);
	assume_abort_if_not(var_1_68 <= 16383);
	var_1_70 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_70 >= 6917529.027641074000e+12F && var_1_70 <= -1.0e-20F) || (var_1_70 <= 9223372.036854766000e+12F && var_1_70 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 2305843.009213691400e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 2305843.009213691400e+12F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 2305843.009213691400e+12F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427383000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= -31);
	assume_abort_if_not(var_1_76 <= 31);
	var_1_78 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_78 >= 32767);
	assume_abort_if_not(var_1_78 <= 65534);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 49150);
	assume_abort_if_not(var_1_79 <= 65534);
	var_1_83 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_83 >= -1);
	assume_abort_if_not(var_1_83 <= 126);
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= 31);
	assume_abort_if_not(var_1_85 <= 63);
	var_1_89 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_89 >= -126);
	assume_abort_if_not(var_1_89 <= -63);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 127);
	assume_abort_if_not(var_1_91 <= 254);
	var_1_94 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_94 >= 0);
	assume_abort_if_not(var_1_94 <= 0);
	var_1_112 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_112 >= -127);
	assume_abort_if_not(var_1_112 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_13 = var_1_13;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_54 = var_1_54;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_80 = var_1_80;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_108 = var_1_108;
	last_1_var_1_113 = var_1_113;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_103 / -2) <= var_1_102) && var_1_81) ? (var_1_1 == ((unsigned char) ((var_1_5 - var_1_6) - var_1_7))) : (var_1_1 == ((unsigned char) (var_1_6 + var_1_7)))) && (var_1_99 ? (var_1_8 == ((signed long int) (max (var_1_6 , var_1_7)))) : (var_1_8 == ((signed long int) (25 + var_1_6))))) && (((var_1_8 < var_1_113) && var_1_109) ? (var_1_9 == ((unsigned char) ((var_1_8 > var_1_113) || var_1_10))) : (var_1_9 == ((unsigned char) (! var_1_11))))) && (var_1_11 ? (var_1_12 == ((unsigned char) var_1_6)) : 1)) && (var_1_10 ? (var_1_13 == ((unsigned char) var_1_7)) : ((((var_1_6 + var_1_14) - var_1_7) >= (last_1_var_1_13 | (min (var_1_102 , var_1_5)))) ? (var_1_13 == ((unsigned char) ((var_1_15 + (min (64 , var_1_16))) - (min (var_1_7 , var_1_14))))) : ((var_1_7 >= var_1_40) ? (var_1_13 == ((unsigned char) (max (((abs (var_1_14)) + var_1_16) , var_1_7)))) : 1)))) && ((last_1_var_1_31 >= var_1_6) ? (((127.75f / (min (9.6f , var_1_18))) <= last_1_var_1_108) ? ((var_1_16 < (var_1_15 * 10)) ? (var_1_17 == ((signed long int) (abs (-32 + var_1_20)))) : (var_1_17 == ((signed long int) var_1_15))) : (var_1_17 == ((signed long int) (last_1_var_1_29 - last_1_var_1_97)))) : ((last_1_var_1_34 < (max ((min (last_1_var_1_60 , var_1_5)) , last_1_var_1_29))) ? (var_1_17 == ((signed long int) last_1_var_1_34)) : 1))) && ((var_1_6 > (- (min (var_1_5 , var_1_102)))) ? ((var_1_87 < (var_1_18 * (var_1_69 * 127.4f))) ? ((var_1_20 == -32) ? (((- var_1_18) >= (var_1_69 + var_1_87)) ? (var_1_21 == ((signed char) (var_1_14 + var_1_6))) : 1) : (var_1_21 == ((signed char) var_1_5))) : (var_1_21 == ((signed char) var_1_6))) : (var_1_21 == ((signed char) var_1_6)))) && ((((min (4 , var_1_7)) * var_1_103) > 8) ? (var_1_23 == ((double) var_1_24)) : (var_1_23 == ((double) (max ((abs (0.75 + var_1_25)) , ((var_1_26 + 1.00000000075E9) + (var_1_27 + var_1_28)))))))) && (((var_1_5 % var_1_15) >= var_1_7) ? (var_1_29 == ((signed long int) (10000000 + last_1_var_1_29))) : (var_1_29 == ((signed long int) var_1_66)))) && (((var_1_17 + (128 + var_1_15)) <= var_1_7) ? (var_1_30 == ((float) var_1_25)) : 1)) && ((! (last_1_var_1_86 || var_1_11)) ? (var_1_31 == ((signed long int) (last_1_var_1_42 + var_1_14))) : 1)) && ((var_1_54 < (min ((var_1_60 / 25) , (var_1_6 % var_1_15)))) ? (var_1_32 == ((unsigned short int) (var_1_5 + var_1_54))) : (var_1_32 == ((unsigned short int) (max (8 , var_1_14)))))) && (var_1_34 == ((signed char) (var_1_14 - var_1_6)))) && ((var_1_113 <= (abs (var_1_7))) ? (var_1_35 == ((double) (7.15 - var_1_36))) : (var_1_35 == ((double) (min (var_1_36 , var_1_28)))))) && ((var_1_105 <= var_1_31) ? ((var_1_31 > ((min (var_1_5 , var_1_38)) - var_1_15)) ? (var_1_37 == ((signed short int) (min (((var_1_15 - var_1_8) + var_1_66) , var_1_14)))) : 1) : 1)) && (var_1_11 ? ((var_1_38 <= var_1_14) ? ((var_1_110 >= var_1_25) ? (var_1_39 == ((signed long int) (min (var_1_17 , var_1_15)))) : ((var_1_13 >= ((var_1_16 - var_1_14) - var_1_6)) ? (var_1_39 == ((signed long int) var_1_12)) : 1)) : (var_1_39 == ((signed long int) ((abs (var_1_20)) - ((var_1_16 + var_1_15) + (min (var_1_12 , var_1_80))))))) : 1)) && ((var_1_81 || (var_1_93 && var_1_11)) ? (var_1_40 == ((signed long int) ((var_1_41 - var_1_7) - last_1_var_1_40))) : ((var_1_31 != var_1_102) ? (var_1_40 == ((signed long int) ((last_1_var_1_40 + var_1_54) - (min ((min (var_1_113 , var_1_38)) , var_1_15))))) : (var_1_40 == ((signed long int) var_1_95))))) && ((((var_1_106 * -2) / -10000) > (abs (var_1_17 - var_1_113))) ? (var_1_42 == ((signed short int) var_1_7)) : (var_1_42 == ((signed short int) (min ((var_1_113 - 16) , (var_1_38 + (var_1_6 - last_1_var_1_42)))))))) && (((var_1_17 + var_1_60) >= var_1_8) ? (var_1_43 == ((float) (var_1_26 + var_1_28))) : (var_1_99 ? ((var_1_58 > var_1_7) ? (var_1_43 == ((float) var_1_27)) : 1) : (var_1_43 == ((float) (min (var_1_45 , ((var_1_46 - var_1_47) + 0.81f)))))))) && ((var_1_40 != (abs (var_1_32))) ? ((var_1_41 != (var_1_14 >> var_1_49)) ? ((! var_1_11) ? (var_1_48 == ((unsigned char) (var_1_11 || (var_1_9 && var_1_50)))) : 1) : (var_1_48 == ((unsigned char) (var_1_10 && (var_1_50 || (! var_1_11)))))) : (var_1_48 == ((unsigned char) (var_1_10 && var_1_51))))) && (((! (var_1_40 < var_1_14)) || var_1_11) ? (var_1_52 == ((float) ((min (var_1_27 , (abs (var_1_47)))) + (var_1_46 - var_1_53)))) : (var_1_52 == ((float) (min ((max (var_1_36 , var_1_26)) , var_1_24)))))) && ((var_1_98 || ((var_1_101 * var_1_26) > (- var_1_87))) ? ((! (var_1_20 > var_1_17)) ? (var_1_54 == ((signed short int) (((last_1_var_1_54 - var_1_105) + var_1_5) + (min ((var_1_14 - var_1_6) , var_1_15))))) : 1) : (var_1_54 == ((signed short int) ((var_1_56 - (max (256 , var_1_7))) - (var_1_57 - (max (var_1_15 , var_1_49)))))))) && ((var_1_74 <= (var_1_36 - var_1_46)) ? (var_1_58 == ((signed short int) (100 - var_1_56))) : ((var_1_41 >= (var_1_54 + (var_1_14 * var_1_15))) ? (((~ var_1_17) == var_1_16) ? (var_1_58 == ((signed short int) ((var_1_38 - var_1_49) + var_1_60))) : 1) : (var_1_58 == ((signed short int) (min ((5 - var_1_56) , var_1_59))))))) && (((abs (last_1_var_1_42)) >= -32) ? ((last_1_var_1_86 && ((last_1_var_1_29 < var_1_16) && var_1_50)) ? (var_1_60 == ((unsigned long int) (max (var_1_56 , var_1_16)))) : 1) : (((var_1_49 * last_1_var_1_60) <= (var_1_7 - 5)) ? (var_1_60 == ((unsigned long int) (min (var_1_7 , (var_1_56 + last_1_var_1_105))))) : (var_1_60 == ((unsigned long int) ((min (var_1_62 , (var_1_63 + var_1_64))) - last_1_var_1_60)))))) && (var_1_65 == ((unsigned char) (! var_1_51)))) && (((var_1_6 / var_1_15) < var_1_54) ? (var_1_66 == ((signed short int) (var_1_32 - ((var_1_67 + var_1_68) - var_1_107)))) : 1)) && ((var_1_45 <= 31.375f) ? (var_1_69 == ((float) ((abs (var_1_70)) - ((var_1_72 + var_1_73) - var_1_46)))) : 1)) && ((var_1_32 > 25) ? ((var_1_80 >= var_1_60) ? (var_1_74 == ((float) (var_1_28 + var_1_47))) : (var_1_74 == ((float) (abs (10.125f))))) : 1)) && ((var_1_102 < var_1_68) ? (var_1_75 == ((signed char) ((var_1_49 + var_1_76) + var_1_6))) : (var_1_75 == ((signed char) ((var_1_14 - var_1_6) + -10))))) && ((! (var_1_29 < last_1_var_1_77)) ? (var_1_77 == ((unsigned short int) (max (last_1_var_1_77 , (var_1_78 - var_1_57))))) : (var_1_77 == ((unsigned short int) ((var_1_79 - var_1_5) - var_1_38))))) && (var_1_80 == ((signed short int) (min (var_1_57 , last_1_var_1_80))))) && (var_1_11 ? (var_1_81 == ((unsigned char) (! (! var_1_10)))) : (var_1_81 == ((unsigned char) (var_1_109 || var_1_10))))) && (var_1_93 ? (var_1_82 == ((signed char) (max ((var_1_83 - var_1_49) , var_1_76)))) : 1)) && ((! (var_1_10 && (var_1_36 < var_1_71))) ? (var_1_84 == ((signed char) ((var_1_6 + (var_1_85 - 4)) - 4))) : (var_1_84 == ((signed char) ((var_1_76 + var_1_49) + var_1_85))))) && ((var_1_96 > var_1_17) ? (var_1_86 == ((unsigned char) (! var_1_50))) : (var_1_86 == ((unsigned char) ((var_1_58 != var_1_85) && (! var_1_51)))))) && (var_1_87 == ((double) (max ((var_1_53 - var_1_36) , var_1_27))))) && ((var_1_23 >= (max ((var_1_72 - var_1_53) , var_1_92))) ? (var_1_88 == ((signed char) ((min (32 , var_1_49)) - ((abs (var_1_89)) - var_1_14)))) : (((var_1_85 - (max (var_1_78 , var_1_5))) < (var_1_106 & var_1_15)) ? (var_1_88 == ((signed char) ((min (var_1_83 , var_1_49)) - var_1_85))) : (var_1_88 == ((signed char) (var_1_83 - var_1_14)))))) && ((var_1_63 <= var_1_39) ? (var_1_90 == ((unsigned char) (min (var_1_89 , ((min (var_1_5 , var_1_91)) - var_1_16))))) : 1)) && ((128 >= (min ((var_1_67 - var_1_41) , var_1_106))) ? (((var_1_67 / var_1_5) < var_1_97) ? (var_1_92 == ((double) (var_1_70 - var_1_73))) : (((max ((var_1_31 / var_1_16) , var_1_111)) > -10) ? (((var_1_90 * var_1_7) < var_1_31) ? (var_1_92 == ((double) var_1_72)) : (var_1_92 == ((double) ((var_1_73 + var_1_53) - 1.25)))) : (var_1_92 == ((double) (max ((min (var_1_73 , var_1_53)) , (max ((var_1_26 + var_1_47) , (var_1_72 - var_1_46))))))))) : (var_1_92 == ((double) (max ((min (var_1_72 , var_1_45)) , (max (var_1_36 , var_1_70)))))))) && (((var_1_38 ^ var_1_79) >= last_1_var_1_66) ? ((var_1_27 >= (- var_1_26)) ? ((last_1_var_1_60 >= last_1_var_1_102) ? (var_1_93 == ((unsigned char) (last_1_var_1_9 && var_1_50))) : (var_1_93 == ((unsigned char) (! ((last_1_var_1_9 || var_1_11) || var_1_51))))) : (((var_1_62 + var_1_56) >= 0u) ? (var_1_93 == ((unsigned char) (var_1_94 || var_1_50))) : 1)) : (var_1_93 == ((unsigned char) (((max (last_1_var_1_54 , var_1_89)) == (last_1_var_1_34 * var_1_76)) && var_1_94))))) && ((((var_1_67 - var_1_5) & (var_1_17 + var_1_59)) < var_1_41) ? ((var_1_12 > 1) ? ((var_1_5 > (var_1_103 & var_1_15)) ? (var_1_95 == ((signed char) var_1_89)) : (var_1_95 == ((signed char) (abs (var_1_49))))) : 1) : (((var_1_5 - (min (var_1_91 , 32))) >= var_1_49) ? (var_1_95 == ((signed char) (var_1_6 + var_1_76))) : ((last_1_var_1_95 < var_1_6) ? (var_1_95 == ((signed char) (min (-16 , var_1_83)))) : 1)))) && (var_1_96 == ((signed short int) var_1_105))) && (var_1_98 ? (var_1_97 == ((signed short int) var_1_29)) : (var_1_97 == ((signed short int) var_1_83)))) && (var_1_51 ? (var_1_98 == ((unsigned char) var_1_10)) : 1)) && (var_1_99 == ((unsigned char) var_1_11))) && (var_1_100 == ((double) var_1_26))) && (var_1_101 == ((double) 8.4))) && (var_1_102 == ((signed long int) last_1_var_1_31))) && (var_1_103 == ((signed long int) -500))) && (var_1_109 ? (var_1_104 == ((float) var_1_25)) : (var_1_104 == ((float) var_1_28)))) && (var_1_98 ? (var_1_105 == ((unsigned char) var_1_91)) : 1)) && (var_1_9 ? (var_1_106 == ((signed long int) var_1_90)) : (var_1_106 == ((signed long int) var_1_103)))) && (var_1_107 == ((signed short int) var_1_57))) && (var_1_94 ? (var_1_108 == ((double) var_1_45)) : (var_1_108 == ((double) var_1_25)))) && (var_1_109 == ((unsigned char) var_1_51))) && (var_1_93 ? (var_1_110 == ((double) var_1_46)) : (var_1_110 == ((double) var_1_27)))) && (var_1_94 ? (var_1_111 == ((signed char) var_1_6)) : (var_1_111 == ((signed char) var_1_112)))) && (((last_1_var_1_29 / 100) <= ((last_1_var_1_113 & var_1_7) ^ var_1_16)) ? (last_1_var_1_93 ? ((last_1_var_1_98 && (var_1_38 >= var_1_62)) ? (var_1_113 == ((signed short int) last_1_var_1_90)) : (var_1_113 == ((signed short int) var_1_16))) : (var_1_113 == ((signed short int) -256))) : 1)
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
