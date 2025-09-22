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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 16;
float var_1_4 = 64.125;
float var_1_5 = 199.5;
float var_1_6 = 3.75;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 10;
float var_1_9 = 9.6;
float var_1_10 = 3.4;
float var_1_11 = 256.5;
double var_1_12 = 8.875;
float var_1_13 = 255.25;
double var_1_14 = 0.0;
double var_1_15 = 256.875;
double var_1_16 = 4.425;
double var_1_17 = 0.0;
double var_1_18 = 1.75;
double var_1_19 = 9.5;
double var_1_20 = 64.8;
unsigned char var_1_21 = 4;
signed long int var_1_22 = -4;
signed long int var_1_23 = -1;
float var_1_24 = 999999.25;
float var_1_26 = 0.2;
unsigned short int var_1_29 = 500;
unsigned short int var_1_30 = 29383;
signed char var_1_31 = 4;
unsigned short int var_1_32 = 0;
unsigned short int var_1_33 = 32010;
unsigned short int var_1_34 = 4;
unsigned short int var_1_35 = 43280;
signed short int var_1_36 = 0;
unsigned char var_1_37 = 128;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
float var_1_40 = 63.625;
signed short int var_1_41 = -4;
signed short int var_1_42 = 19929;
unsigned char var_1_43 = 128;
unsigned long int var_1_44 = 50;
unsigned char var_1_45 = 128;
unsigned long int var_1_46 = 3630647172;
unsigned long int var_1_47 = 2228372155;
unsigned long int var_1_48 = 8;
unsigned short int var_1_49 = 0;
unsigned short int var_1_50 = 50;
double var_1_51 = 63.2;
signed char var_1_52 = 8;
signed char var_1_53 = 2;
unsigned short int var_1_54 = 10;
double var_1_55 = 0.0;
double var_1_56 = 3.5;
double var_1_57 = 2.3;
unsigned char var_1_58 = 1;
unsigned char var_1_59 = 0;
unsigned char var_1_60 = 0;
signed short int var_1_61 = -256;
unsigned char var_1_62 = 1;
double var_1_64 = 63.125;
float var_1_65 = 127.625;
unsigned char var_1_66 = 0;
signed long int var_1_67 = 128;
double var_1_68 = 8.8;
unsigned char var_1_69 = 8;
signed char var_1_70 = 16;
signed char var_1_71 = -32;
signed char var_1_72 = 64;
unsigned short int var_1_73 = 64;
unsigned short int var_1_75 = 5;
unsigned long int var_1_76 = 16;
unsigned short int var_1_77 = 256;
double var_1_78 = 9.8;
unsigned short int var_1_79 = 256;
unsigned short int var_1_80 = 2;
double var_1_81 = 1.6;
double var_1_82 = 255.25;
unsigned char var_1_83 = 4;
signed char var_1_84 = 64;
signed char var_1_85 = 4;
signed char var_1_86 = 10;
signed char var_1_87 = 32;
signed char var_1_88 = 4;
unsigned short int var_1_89 = 25;
unsigned char var_1_91 = 2;
unsigned char var_1_92 = 64;
unsigned char var_1_93 = 128;
unsigned char var_1_94 = 0;
unsigned char var_1_95 = 0;
signed char var_1_96 = 10;
signed short int var_1_97 = -2;
unsigned short int var_1_98 = 256;
float var_1_101 = 4.7;
double var_1_102 = 4.3;
unsigned char var_1_103 = 1;
float var_1_104 = 10000.25;
float var_1_105 = 7.5;
signed long int var_1_106 = -1;
unsigned short int var_1_107 = 2;
double var_1_108 = 99.7;
float var_1_109 = 32.5;
unsigned char var_1_110 = 0;
double var_1_112 = 2.5;
signed char var_1_113 = 4;
unsigned short int var_1_114 = 8;
signed long int var_1_115 = 4;
signed char var_1_116 = -4;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_34 = 4;
unsigned short int last_1_var_1_49 = 0;
unsigned short int last_1_var_1_50 = 50;
float last_1_var_1_65 = 127.625;
unsigned char last_1_var_1_69 = 8;
unsigned short int last_1_var_1_73 = 64;
unsigned short int last_1_var_1_77 = 256;
unsigned short int last_1_var_1_89 = 25;
unsigned char last_1_var_1_94 = 0;
signed short int last_1_var_1_97 = -2;
unsigned short int last_1_var_1_98 = 256;
unsigned short int last_1_var_1_107 = 2;
unsigned char last_1_var_1_110 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req28Batch152Amount500
	if (! var_1_39) {
		var_1_66 = (((last_1_var_1_89 / var_1_67) < var_1_22) || var_1_39);
	}


	// From: Req24Batch152Amount500
	if (-5 > var_1_8) {
		if (last_1_var_1_77 == last_1_var_1_49) {
			var_1_61 = last_1_var_1_107;
		} else {
			if ((var_1_35 * last_1_var_1_73) != (last_1_var_1_69 - var_1_52)) {
				var_1_61 = (var_1_53 - (max (last_1_var_1_77 , (last_1_var_1_69 + var_1_45))));
			} else {
				var_1_61 = (max (last_1_var_1_49 , last_1_var_1_89));
			}
		}
	} else {
		var_1_61 = (((var_1_54 - var_1_8) + 8) + (var_1_7 - var_1_45));
	}


	// From: Req5Batch152Amount500
	if (var_1_7 <= ((last_1_var_1_89 + var_1_8) ^ last_1_var_1_34)) {
		if (((abs (var_1_22)) / var_1_23) != (var_1_7 - (max (last_1_var_1_89 , var_1_8)))) {
			var_1_21 = (var_1_7 + var_1_8);
		} else {
			var_1_21 = var_1_7;
		}
	} else {
		var_1_21 = var_1_7;
	}


	// From: Req17Batch152Amount500
	if (var_1_21 != (var_1_8 | (var_1_45 - var_1_7))) {
		var_1_44 = (2778340120u - var_1_21);
	} else {
		var_1_44 = ((min ((var_1_46 - var_1_8) , var_1_47)) - var_1_33);
	}


	// From: Req1Batch152Amount500
	signed long int stepLocal_0 = last_1_var_1_98;
	if (stepLocal_0 > 1) {
		if (127.625f != (- last_1_var_1_65)) {
			if (last_1_var_1_65 <= ((var_1_4 + var_1_5) - var_1_6)) {
				var_1_1 = (var_1_7 + var_1_8);
			}
		} else {
			if (last_1_var_1_65 >= (var_1_4 + var_1_5)) {
				var_1_1 = ((max (var_1_7 , var_1_8)) + 32);
			}
		}
	} else {
		if ((var_1_5 + last_1_var_1_65) < var_1_4) {
			var_1_1 = 4;
		} else {
			var_1_1 = (abs (var_1_7));
		}
	}


	// From: Req37Batch152Amount500
	var_1_79 = (var_1_30 + (min ((var_1_42 - var_1_80) , var_1_1)));


	// From: Req4Batch152Amount500
	if (var_1_5 >= var_1_14) {
		var_1_19 = (abs (var_1_20));
	} else {
		var_1_19 = ((min (var_1_17 , var_1_10)) + (min (var_1_18 , var_1_15)));
	}


	// From: Req8Batch152Amount500
	var_1_31 = 0;


	// From: Req12Batch152Amount500
	unsigned char stepLocal_4 = var_1_8;
	if ((var_1_79 * var_1_30) < stepLocal_4) {
		if (var_1_10 > (- var_1_6)) {
			var_1_37 = var_1_8;
		}
	} else {
		var_1_37 = var_1_7;
	}


	// From: Req22Batch152Amount500
	var_1_57 = ((var_1_18 - (min (var_1_56 , var_1_17))) + var_1_16);


	// From: Req25Batch152Amount500
	unsigned char stepLocal_11 = var_1_39;
	if (var_1_66 && stepLocal_11) {
		var_1_62 = var_1_39;
	}


	// From: Req26Batch152Amount500
	var_1_64 = (abs (var_1_15));


	// From: Req29Batch152Amount500
	var_1_68 = var_1_11;


	// From: Req30Batch152Amount500
	var_1_69 = var_1_7;


	// From: Req32Batch152Amount500
	var_1_72 = (min (var_1_52 , (var_1_71 + var_1_53)));


	// From: Req45Batch152Amount500
	var_1_97 = (last_1_var_1_97 - var_1_52);


	// From: Req47Batch152Amount500
	if (var_1_66) {
		var_1_101 = var_1_55;
	}


	// From: Req48Batch152Amount500
	if (var_1_60) {
		var_1_102 = var_1_56;
	}


	// From: Req49Batch152Amount500
	var_1_103 = 0;


	// From: Req51Batch152Amount500
	var_1_106 = var_1_97;


	// From: Req52Batch152Amount500
	if (var_1_39) {
		var_1_107 = var_1_7;
	} else {
		var_1_107 = 1;
	}


	// From: Req54Batch152Amount500
	if (var_1_103) {
		var_1_109 = var_1_18;
	}


	// From: Req55Batch152Amount500
	if (last_1_var_1_110) {
		var_1_110 = var_1_39;
	} else {
		var_1_110 = 0;
	}


	// From: Req56Batch152Amount500
	if (var_1_60) {
		var_1_112 = var_1_17;
	} else {
		var_1_112 = var_1_26;
	}


	// From: Req57Batch152Amount500
	if (var_1_106 > ((1000 + var_1_8) + 10)) {
		var_1_113 = (var_1_87 + (var_1_85 - var_1_53));
	}


	// From: Req58Batch152Amount500
	var_1_114 = var_1_86;


	// From: Req59Batch152Amount500
	var_1_115 = var_1_33;


	// From: Req60Batch152Amount500
	var_1_116 = var_1_71;


	// From: Req41Batch152Amount500
	if (var_1_110 || var_1_66) {
		if (100.1f >= var_1_26) {
			var_1_89 = (var_1_35 - 500);
		}
	}


	// From: Req38Batch152Amount500
	signed long int stepLocal_15 = - var_1_79;
	if (stepLocal_15 < var_1_61) {
		var_1_81 = (var_1_18 + var_1_10);
	} else {
		if (((var_1_16 - var_1_4) / (min (var_1_82 , var_1_13))) >= (- var_1_14)) {
			var_1_81 = (var_1_56 - var_1_18);
		} else {
			var_1_81 = ((var_1_18 + var_1_56) + var_1_10);
		}
	}


	// From: Req15Batch152Amount500
	signed long int stepLocal_5 = - (- 16);
	if (stepLocal_5 >= var_1_7) {
		var_1_41 = (256 - (var_1_42 - var_1_61));
	} else {
		if ((- var_1_10) != var_1_13) {
			var_1_41 = (var_1_69 + var_1_7);
		}
	}


	// From: Req6Batch152Amount500
	if (var_1_7 <= (max (var_1_8 , var_1_22))) {
		if (var_1_103 || ((var_1_5 < var_1_13) || (var_1_14 != var_1_15))) {
			if (var_1_103) {
				var_1_24 = 64.75f;
			} else {
				if ((var_1_14 < var_1_16) || ((~ var_1_23) < var_1_21)) {
					var_1_24 = (var_1_17 - var_1_26);
				}
			}
		} else {
			if (var_1_57 > (0.65 / (min (var_1_13 , 31.5)))) {
				var_1_24 = (min (var_1_16 , (-0.8f + var_1_17)));
			} else {
				if (var_1_103) {
					var_1_24 = var_1_17;
				}
			}
		}
	} else {
		var_1_24 = var_1_16;
	}


	// From: Req2Batch152Amount500
	if ((var_1_4 - var_1_6) < var_1_5) {
		if (var_1_7 < var_1_97) {
			if (var_1_4 != var_1_24) {
				var_1_9 = (var_1_10 + var_1_11);
			} else {
				var_1_9 = (min ((abs (var_1_5)) , var_1_10));
			}
		}
	}


	// From: Req14Batch152Amount500
	if (var_1_26 != ((var_1_15 + var_1_24) + (1.4f - 0.5f))) {
		var_1_40 = (max (var_1_15 , var_1_10));
	} else {
		var_1_40 = (abs (var_1_18));
	}


	// From: Req9Batch152Amount500
	if (var_1_7 >= (min (var_1_1 , var_1_8))) {
		var_1_32 = ((var_1_33 - var_1_7) + (abs (var_1_8)));
	} else {
		if ((var_1_107 >= 8) && (var_1_112 != var_1_17)) {
			var_1_32 = var_1_30;
		} else {
			var_1_32 = (min (var_1_30 , var_1_107));
		}
	}


	// From: Req27Batch152Amount500
	if ((var_1_44 * -200) < var_1_44) {
		if (((- var_1_68) + var_1_9) <= var_1_26) {
			var_1_65 = (min ((max (var_1_15 , var_1_4)) , var_1_20));
		}
	} else {
		var_1_65 = (abs (var_1_16));
	}


	// From: Req16Batch152Amount500
	unsigned char stepLocal_6 = var_1_39;
	if (var_1_103 && stepLocal_6) {
		var_1_43 = (var_1_8 + (min (var_1_7 , 64)));
	}


	// From: Req23Batch152Amount500
	if (var_1_103) {
		var_1_58 = ((var_1_59 || var_1_60) || (! var_1_39));
	}


	// From: Req36Batch152Amount500
	signed long int stepLocal_14 = var_1_45 * var_1_89;
	if (stepLocal_14 < ((max (var_1_53 , var_1_44)) - var_1_30)) {
		var_1_78 = (3.5 + (var_1_18 - var_1_17));
	} else {
		var_1_78 = (var_1_10 + var_1_16);
	}


	// From: Req39Batch152Amount500
	signed long int stepLocal_16 = var_1_115;
	if ((var_1_37 + var_1_106) != stepLocal_16) {
		var_1_83 = (abs (max (var_1_54 , var_1_7)));
	} else {
		var_1_83 = ((100 - var_1_53) + (max (var_1_8 , var_1_54)));
	}


	// From: Req40Batch152Amount500
	if (var_1_81 > var_1_16) {
		var_1_84 = ((var_1_54 + var_1_53) - ((max (var_1_85 , var_1_86)) + (abs (var_1_71))));
	} else {
		if (var_1_110 || var_1_60) {
			var_1_84 = (min (var_1_86 , (var_1_52 - var_1_53)));
		} else {
			var_1_84 = ((var_1_85 - (max (var_1_54 , 4))) + (var_1_86 - (var_1_87 - var_1_88)));
		}
	}


	// From: Req44Batch152Amount500
	unsigned char stepLocal_17 = var_1_58;
	if (stepLocal_17 && var_1_62) {
		var_1_96 = (var_1_87 + var_1_88);
	}


	// From: Req50Batch152Amount500
	if (var_1_58) {
		var_1_104 = var_1_105;
	} else {
		var_1_104 = var_1_14;
	}


	// From: Req20Batch152Amount500
	if (var_1_39 || (var_1_11 > (min (var_1_40 , var_1_112)))) {
		var_1_50 = (var_1_8 + ((max (var_1_30 , var_1_33)) - var_1_7));
	} else {
		var_1_50 = (max ((abs (var_1_107 + last_1_var_1_50)) , last_1_var_1_50));
	}


	// From: Req7Batch152Amount500
	if ((abs (8)) == (var_1_22 * var_1_7)) {
		var_1_29 = (min (var_1_50 , ((var_1_30 - var_1_8) + var_1_7)));
	}


	// From: Req18Batch152Amount500
	if (var_1_46 <= (var_1_32 * (var_1_30 + var_1_8))) {
		if ((var_1_26 < var_1_14) || var_1_62) {
			var_1_48 = (min ((min ((max (var_1_7 , var_1_33)) , var_1_46)) , var_1_44));
		} else {
			var_1_48 = (max (var_1_33 , var_1_35));
		}
	} else {
		var_1_48 = ((max (var_1_89 , var_1_32)) + var_1_44);
	}


	// From: Req13Batch152Amount500
	if (var_1_66) {
		var_1_38 = (var_1_58 || var_1_39);
	}


	// From: Req21Batch152Amount500
	unsigned char stepLocal_10 = var_1_62;
	unsigned long int stepLocal_9 = var_1_53 * var_1_46;
	unsigned long int stepLocal_8 = var_1_48;
	signed long int stepLocal_7 = 4 - (var_1_52 + var_1_53);
	if (var_1_4 != (var_1_17 / (abs (var_1_13)))) {
		if (stepLocal_10 && var_1_110) {
			if (stepLocal_7 <= (var_1_30 >> var_1_54)) {
				if (stepLocal_9 == 8u) {
					var_1_51 = (var_1_16 - var_1_14);
				} else {
					var_1_51 = ((min (var_1_18 , var_1_15)) + (var_1_17 - (var_1_55 - var_1_56)));
				}
			} else {
				var_1_51 = (var_1_17 - var_1_15);
			}
		} else {
			if (var_1_30 == stepLocal_8) {
				var_1_51 = ((min (var_1_18 , var_1_4)) - var_1_55);
			} else {
				var_1_51 = (abs (var_1_5));
			}
		}
	} else {
		var_1_51 = (max (var_1_4 , var_1_14));
	}


	// From: Req53Batch152Amount500
	if (var_1_38) {
		var_1_108 = var_1_18;
	}


	// From: Req34Batch152Amount500
	unsigned short int stepLocal_13 = var_1_79;
	if ((5u + var_1_30) != stepLocal_13) {
		var_1_76 = (var_1_29 + var_1_53);
	}


	// From: Req19Batch152Amount500
	if (7.5f >= var_1_108) {
		var_1_49 = (var_1_76 + var_1_89);
	}


	// From: Req42Batch152Amount500
	if (! (var_1_48 <= var_1_76)) {
		if (var_1_81 <= (var_1_11 / var_1_17)) {
			var_1_91 = 25;
		} else {
			var_1_91 = ((var_1_92 - var_1_86) + (var_1_54 + var_1_53));
		}
	} else {
		if (var_1_107 <= (var_1_8 >> (min (1 , 2)))) {
			var_1_91 = (min (var_1_92 , (var_1_93 - var_1_88)));
		} else {
			var_1_91 = (max (var_1_88 , var_1_87));
		}
	}


	// From: Req11Batch152Amount500
	if (var_1_11 < var_1_5) {
		if (var_1_66) {
			var_1_36 = (abs (var_1_79));
		} else {
			var_1_36 = (var_1_8 - var_1_79);
		}
	} else {
		var_1_36 = var_1_91;
	}


	// From: Req31Batch152Amount500
	if (var_1_7 >= (var_1_53 / var_1_45)) {
		var_1_70 = (min ((min (var_1_52 , var_1_54)) , (var_1_53 + var_1_71)));
	} else {
		if ((var_1_36 >= var_1_50) || (var_1_107 <= (var_1_106 + var_1_33))) {
			var_1_70 = (max (var_1_53 , var_1_54));
		} else {
			var_1_70 = (var_1_53 - var_1_54);
		}
	}


	// From: Req33Batch152Amount500
	signed char stepLocal_12 = var_1_116;
	if (var_1_91 < stepLocal_12) {
		if (! (var_1_41 >= var_1_53)) {
			var_1_73 = (var_1_35 - var_1_75);
		} else {
			var_1_73 = 5;
		}
	}


	// From: Req46Batch152Amount500
	unsigned short int stepLocal_19 = var_1_75;
	unsigned char stepLocal_18 = var_1_110;
	if (var_1_57 == (var_1_11 * (var_1_81 * var_1_68))) {
		if (last_1_var_1_98 > stepLocal_19) {
			if ((var_1_73 == (var_1_50 + var_1_1)) && stepLocal_18) {
				var_1_98 = (var_1_73 + 8);
			}
		} else {
			var_1_98 = var_1_75;
		}
	} else {
		var_1_98 = var_1_80;
	}


	// From: Req3Batch152Amount500
	signed long int stepLocal_1 = var_1_8 | (max (var_1_98 , 0));
	if ((var_1_5 * var_1_6) < (var_1_10 + (var_1_9 / var_1_13))) {
		var_1_12 = ((abs (var_1_10)) - (var_1_14 - (min (var_1_15 , var_1_16))));
	} else {
		if (var_1_7 >= stepLocal_1) {
			var_1_12 = ((abs (var_1_16)) - (var_1_15 + (var_1_17 - var_1_18)));
		}
	}


	// From: Req10Batch152Amount500
	unsigned char stepLocal_3 = (var_1_107 == var_1_30) && (var_1_11 <= var_1_102);
	signed long int stepLocal_2 = (var_1_22 & var_1_107) | var_1_8;
	if (stepLocal_2 < var_1_7) {
		if ((256 != var_1_22) && stepLocal_3) {
			if (var_1_12 >= var_1_102) {
				var_1_34 = (var_1_35 - var_1_8);
			}
		}
	}


	// From: Req35Batch152Amount500
	var_1_77 = (min ((min (var_1_35 , (62293 - var_1_54))) , var_1_34));


	// From: Req43Batch152Amount500
	if (last_1_var_1_94 || ((var_1_46 - var_1_42) >= (min (var_1_32 , var_1_30)))) {
		if (var_1_53 > (max (var_1_73 , (var_1_35 * var_1_34)))) {
			var_1_94 = (! var_1_95);
		} else {
			var_1_94 = ((! var_1_39) || var_1_60);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427388000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427388000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	assume_abort_if_not(var_1_13 != 0.0F);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 4611686.018427383000e+12F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 2305843.009213691400e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -922337.2036854766000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_22 >= -2147483647);
	assume_abort_if_not(var_1_22 <= 2147483647);
	var_1_23 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_23 >= -2147483648);
	assume_abort_if_not(var_1_23 <= 2147483647);
	assume_abort_if_not(var_1_23 != 0);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_30 >= 16383);
	assume_abort_if_not(var_1_30 <= 32767);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 16383);
	assume_abort_if_not(var_1_33 <= 32767);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 32767);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 1);
	assume_abort_if_not(var_1_39 <= 1);
	var_1_42 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_42 >= 16383);
	assume_abort_if_not(var_1_42 <= 32766);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 127);
	assume_abort_if_not(var_1_45 <= 255);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 3221225470);
	assume_abort_if_not(var_1_46 <= 4294967294);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 2147483647);
	assume_abort_if_not(var_1_47 <= 4294967294);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 64);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 63);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 15);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 2305843.009213691400e+12F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_56 >= 0.0F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 2305843.009213691400e+12F && var_1_56 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_59 >= 0);
	assume_abort_if_not(var_1_59 <= 0);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 0);
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= -2147483648);
	assume_abort_if_not(var_1_67 <= 2147483647);
	assume_abort_if_not(var_1_67 != 0);
	var_1_71 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_71 >= -63);
	assume_abort_if_not(var_1_71 <= 63);
	var_1_75 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 32767);
	var_1_80 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 16383);
	var_1_82 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_82 >= -922337.2036854776000e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 9223372.036854776000e+12F && var_1_82 >= 1.0e-20F ));
	assume_abort_if_not(var_1_82 != 0.0F);
	var_1_85 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 63);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 63);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= 31);
	assume_abort_if_not(var_1_87 <= 63);
	var_1_88 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 31);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 63);
	assume_abort_if_not(var_1_92 <= 127);
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 127);
	assume_abort_if_not(var_1_93 <= 254);
	var_1_95 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 0);
	var_1_105 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_105 >= -922337.2036854766000e+13F && var_1_105 <= -1.0e-20F) || (var_1_105 <= 9223372.036854766000e+12F && var_1_105 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_34 = var_1_34;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_107 = var_1_107;
	last_1_var_1_110 = var_1_110;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_98 > 1) ? ((127.625f != (- last_1_var_1_65)) ? ((last_1_var_1_65 <= ((var_1_4 + var_1_5) - var_1_6)) ? (var_1_1 == ((unsigned char) (var_1_7 + var_1_8))) : 1) : ((last_1_var_1_65 >= (var_1_4 + var_1_5)) ? (var_1_1 == ((unsigned char) ((max (var_1_7 , var_1_8)) + 32))) : 1)) : (((var_1_5 + last_1_var_1_65) < var_1_4) ? (var_1_1 == ((unsigned char) 4)) : (var_1_1 == ((unsigned char) (abs (var_1_7)))))) && (((var_1_4 - var_1_6) < var_1_5) ? ((var_1_7 < var_1_97) ? ((var_1_4 != var_1_24) ? (var_1_9 == ((float) (var_1_10 + var_1_11))) : (var_1_9 == ((float) (min ((abs (var_1_5)) , var_1_10))))) : 1) : 1)) && (((var_1_5 * var_1_6) < (var_1_10 + (var_1_9 / var_1_13))) ? (var_1_12 == ((double) ((abs (var_1_10)) - (var_1_14 - (min (var_1_15 , var_1_16)))))) : ((var_1_7 >= (var_1_8 | (max (var_1_98 , 0)))) ? (var_1_12 == ((double) ((abs (var_1_16)) - (var_1_15 + (var_1_17 - var_1_18))))) : 1))) && ((var_1_5 >= var_1_14) ? (var_1_19 == ((double) (abs (var_1_20)))) : (var_1_19 == ((double) ((min (var_1_17 , var_1_10)) + (min (var_1_18 , var_1_15))))))) && ((var_1_7 <= ((last_1_var_1_89 + var_1_8) ^ last_1_var_1_34)) ? ((((abs (var_1_22)) / var_1_23) != (var_1_7 - (max (last_1_var_1_89 , var_1_8)))) ? (var_1_21 == ((unsigned char) (var_1_7 + var_1_8))) : (var_1_21 == ((unsigned char) var_1_7))) : (var_1_21 == ((unsigned char) var_1_7)))) && ((var_1_7 <= (max (var_1_8 , var_1_22))) ? ((var_1_103 || ((var_1_5 < var_1_13) || (var_1_14 != var_1_15))) ? (var_1_103 ? (var_1_24 == ((float) 64.75f)) : (((var_1_14 < var_1_16) || ((~ var_1_23) < var_1_21)) ? (var_1_24 == ((float) (var_1_17 - var_1_26))) : 1)) : ((var_1_57 > (0.65 / (min (var_1_13 , 31.5)))) ? (var_1_24 == ((float) (min (var_1_16 , (-0.8f + var_1_17))))) : (var_1_103 ? (var_1_24 == ((float) var_1_17)) : 1))) : (var_1_24 == ((float) var_1_16)))) && (((abs (8)) == (var_1_22 * var_1_7)) ? (var_1_29 == ((unsigned short int) (min (var_1_50 , ((var_1_30 - var_1_8) + var_1_7))))) : 1)) && (var_1_31 == ((signed char) 0))) && ((var_1_7 >= (min (var_1_1 , var_1_8))) ? (var_1_32 == ((unsigned short int) ((var_1_33 - var_1_7) + (abs (var_1_8))))) : (((var_1_107 >= 8) && (var_1_112 != var_1_17)) ? (var_1_32 == ((unsigned short int) var_1_30)) : (var_1_32 == ((unsigned short int) (min (var_1_30 , var_1_107))))))) && ((((var_1_22 & var_1_107) | var_1_8) < var_1_7) ? (((256 != var_1_22) && ((var_1_107 == var_1_30) && (var_1_11 <= var_1_102))) ? ((var_1_12 >= var_1_102) ? (var_1_34 == ((unsigned short int) (var_1_35 - var_1_8))) : 1) : 1) : 1)) && ((var_1_11 < var_1_5) ? (var_1_66 ? (var_1_36 == ((signed short int) (abs (var_1_79)))) : (var_1_36 == ((signed short int) (var_1_8 - var_1_79)))) : (var_1_36 == ((signed short int) var_1_91)))) && (((var_1_79 * var_1_30) < var_1_8) ? ((var_1_10 > (- var_1_6)) ? (var_1_37 == ((unsigned char) var_1_8)) : 1) : (var_1_37 == ((unsigned char) var_1_7)))) && (var_1_66 ? (var_1_38 == ((unsigned char) (var_1_58 || var_1_39))) : 1)) && ((var_1_26 != ((var_1_15 + var_1_24) + (1.4f - 0.5f))) ? (var_1_40 == ((float) (max (var_1_15 , var_1_10)))) : (var_1_40 == ((float) (abs (var_1_18)))))) && (((- (- 16)) >= var_1_7) ? (var_1_41 == ((signed short int) (256 - (var_1_42 - var_1_61)))) : (((- var_1_10) != var_1_13) ? (var_1_41 == ((signed short int) (var_1_69 + var_1_7))) : 1))) && ((var_1_103 && var_1_39) ? (var_1_43 == ((unsigned char) (var_1_8 + (min (var_1_7 , 64))))) : 1)) && ((var_1_21 != (var_1_8 | (var_1_45 - var_1_7))) ? (var_1_44 == ((unsigned long int) (2778340120u - var_1_21))) : (var_1_44 == ((unsigned long int) ((min ((var_1_46 - var_1_8) , var_1_47)) - var_1_33))))) && ((var_1_46 <= (var_1_32 * (var_1_30 + var_1_8))) ? (((var_1_26 < var_1_14) || var_1_62) ? (var_1_48 == ((unsigned long int) (min ((min ((max (var_1_7 , var_1_33)) , var_1_46)) , var_1_44)))) : (var_1_48 == ((unsigned long int) (max (var_1_33 , var_1_35))))) : (var_1_48 == ((unsigned long int) ((max (var_1_89 , var_1_32)) + var_1_44))))) && ((7.5f >= var_1_108) ? (var_1_49 == ((unsigned short int) (var_1_76 + var_1_89))) : 1)) && ((var_1_39 || (var_1_11 > (min (var_1_40 , var_1_112)))) ? (var_1_50 == ((unsigned short int) (var_1_8 + ((max (var_1_30 , var_1_33)) - var_1_7)))) : (var_1_50 == ((unsigned short int) (max ((abs (var_1_107 + last_1_var_1_50)) , last_1_var_1_50)))))) && ((var_1_4 != (var_1_17 / (abs (var_1_13)))) ? ((var_1_62 && var_1_110) ? (((4 - (var_1_52 + var_1_53)) <= (var_1_30 >> var_1_54)) ? (((var_1_53 * var_1_46) == 8u) ? (var_1_51 == ((double) (var_1_16 - var_1_14))) : (var_1_51 == ((double) ((min (var_1_18 , var_1_15)) + (var_1_17 - (var_1_55 - var_1_56)))))) : (var_1_51 == ((double) (var_1_17 - var_1_15)))) : ((var_1_30 == var_1_48) ? (var_1_51 == ((double) ((min (var_1_18 , var_1_4)) - var_1_55))) : (var_1_51 == ((double) (abs (var_1_5)))))) : (var_1_51 == ((double) (max (var_1_4 , var_1_14)))))) && (var_1_57 == ((double) ((var_1_18 - (min (var_1_56 , var_1_17))) + var_1_16)))) && (var_1_103 ? (var_1_58 == ((unsigned char) ((var_1_59 || var_1_60) || (! var_1_39)))) : 1)) && ((-5 > var_1_8) ? ((last_1_var_1_77 == last_1_var_1_49) ? (var_1_61 == ((signed short int) last_1_var_1_107)) : (((var_1_35 * last_1_var_1_73) != (last_1_var_1_69 - var_1_52)) ? (var_1_61 == ((signed short int) (var_1_53 - (max (last_1_var_1_77 , (last_1_var_1_69 + var_1_45)))))) : (var_1_61 == ((signed short int) (max (last_1_var_1_49 , last_1_var_1_89)))))) : (var_1_61 == ((signed short int) (((var_1_54 - var_1_8) + 8) + (var_1_7 - var_1_45)))))) && ((var_1_66 && var_1_39) ? (var_1_62 == ((unsigned char) var_1_39)) : 1)) && (var_1_64 == ((double) (abs (var_1_15))))) && (((var_1_44 * -200) < var_1_44) ? ((((- var_1_68) + var_1_9) <= var_1_26) ? (var_1_65 == ((float) (min ((max (var_1_15 , var_1_4)) , var_1_20)))) : 1) : (var_1_65 == ((float) (abs (var_1_16)))))) && ((! var_1_39) ? (var_1_66 == ((unsigned char) (((last_1_var_1_89 / var_1_67) < var_1_22) || var_1_39))) : 1)) && (var_1_68 == ((double) var_1_11))) && (var_1_69 == ((unsigned char) var_1_7))) && ((var_1_7 >= (var_1_53 / var_1_45)) ? (var_1_70 == ((signed char) (min ((min (var_1_52 , var_1_54)) , (var_1_53 + var_1_71))))) : (((var_1_36 >= var_1_50) || (var_1_107 <= (var_1_106 + var_1_33))) ? (var_1_70 == ((signed char) (max (var_1_53 , var_1_54)))) : (var_1_70 == ((signed char) (var_1_53 - var_1_54)))))) && (var_1_72 == ((signed char) (min (var_1_52 , (var_1_71 + var_1_53)))))) && ((var_1_91 < var_1_116) ? ((! (var_1_41 >= var_1_53)) ? (var_1_73 == ((unsigned short int) (var_1_35 - var_1_75))) : (var_1_73 == ((unsigned short int) 5))) : 1)) && (((5u + var_1_30) != var_1_79) ? (var_1_76 == ((unsigned long int) (var_1_29 + var_1_53))) : 1)) && (var_1_77 == ((unsigned short int) (min ((min (var_1_35 , (62293 - var_1_54))) , var_1_34))))) && (((var_1_45 * var_1_89) < ((max (var_1_53 , var_1_44)) - var_1_30)) ? (var_1_78 == ((double) (3.5 + (var_1_18 - var_1_17)))) : (var_1_78 == ((double) (var_1_10 + var_1_16))))) && (var_1_79 == ((unsigned short int) (var_1_30 + (min ((var_1_42 - var_1_80) , var_1_1)))))) && (((- var_1_79) < var_1_61) ? (var_1_81 == ((double) (var_1_18 + var_1_10))) : ((((var_1_16 - var_1_4) / (min (var_1_82 , var_1_13))) >= (- var_1_14)) ? (var_1_81 == ((double) (var_1_56 - var_1_18))) : (var_1_81 == ((double) ((var_1_18 + var_1_56) + var_1_10)))))) && (((var_1_37 + var_1_106) != var_1_115) ? (var_1_83 == ((unsigned char) (abs (max (var_1_54 , var_1_7))))) : (var_1_83 == ((unsigned char) ((100 - var_1_53) + (max (var_1_8 , var_1_54))))))) && ((var_1_81 > var_1_16) ? (var_1_84 == ((signed char) ((var_1_54 + var_1_53) - ((max (var_1_85 , var_1_86)) + (abs (var_1_71)))))) : ((var_1_110 || var_1_60) ? (var_1_84 == ((signed char) (min (var_1_86 , (var_1_52 - var_1_53))))) : (var_1_84 == ((signed char) ((var_1_85 - (max (var_1_54 , 4))) + (var_1_86 - (var_1_87 - var_1_88)))))))) && ((var_1_110 || var_1_66) ? ((100.1f >= var_1_26) ? (var_1_89 == ((unsigned short int) (var_1_35 - 500))) : 1) : 1)) && ((! (var_1_48 <= var_1_76)) ? ((var_1_81 <= (var_1_11 / var_1_17)) ? (var_1_91 == ((unsigned char) 25)) : (var_1_91 == ((unsigned char) ((var_1_92 - var_1_86) + (var_1_54 + var_1_53))))) : ((var_1_107 <= (var_1_8 >> (min (1 , 2)))) ? (var_1_91 == ((unsigned char) (min (var_1_92 , (var_1_93 - var_1_88))))) : (var_1_91 == ((unsigned char) (max (var_1_88 , var_1_87))))))) && ((last_1_var_1_94 || ((var_1_46 - var_1_42) >= (min (var_1_32 , var_1_30)))) ? ((var_1_53 > (max (var_1_73 , (var_1_35 * var_1_34)))) ? (var_1_94 == ((unsigned char) (! var_1_95))) : (var_1_94 == ((unsigned char) ((! var_1_39) || var_1_60)))) : 1)) && ((var_1_58 && var_1_62) ? (var_1_96 == ((signed char) (var_1_87 + var_1_88))) : 1)) && (var_1_97 == ((signed short int) (last_1_var_1_97 - var_1_52)))) && ((var_1_57 == (var_1_11 * (var_1_81 * var_1_68))) ? ((last_1_var_1_98 > var_1_75) ? (((var_1_73 == (var_1_50 + var_1_1)) && var_1_110) ? (var_1_98 == ((unsigned short int) (var_1_73 + 8))) : 1) : (var_1_98 == ((unsigned short int) var_1_75))) : (var_1_98 == ((unsigned short int) var_1_80)))) && (var_1_66 ? (var_1_101 == ((float) var_1_55)) : 1)) && (var_1_60 ? (var_1_102 == ((double) var_1_56)) : 1)) && (var_1_103 == ((unsigned char) 0))) && (var_1_58 ? (var_1_104 == ((float) var_1_105)) : (var_1_104 == ((float) var_1_14)))) && (var_1_106 == ((signed long int) var_1_97))) && (var_1_39 ? (var_1_107 == ((unsigned short int) var_1_7)) : (var_1_107 == ((unsigned short int) 1)))) && (var_1_38 ? (var_1_108 == ((double) var_1_18)) : 1)) && (var_1_103 ? (var_1_109 == ((float) var_1_18)) : 1)) && (last_1_var_1_110 ? (var_1_110 == ((unsigned char) var_1_39)) : (var_1_110 == ((unsigned char) 0)))) && (var_1_60 ? (var_1_112 == ((double) var_1_17)) : (var_1_112 == ((double) var_1_26)))) && ((var_1_106 > ((1000 + var_1_8) + 10)) ? (var_1_113 == ((signed char) (var_1_87 + (var_1_85 - var_1_53)))) : 1)) && (var_1_114 == ((unsigned short int) var_1_86))) && (var_1_115 == ((signed long int) var_1_33))) && (var_1_116 == ((signed char) var_1_71))
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
