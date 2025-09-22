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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch25Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = -64;
signed long int var_1_4 = -256;
signed char var_1_5 = 64;
signed char var_1_6 = -16;
signed char var_1_7 = -32;
signed long int var_1_8 = 200;
signed long int var_1_11 = -5;
unsigned short int var_1_13 = 64;
unsigned short int var_1_14 = 37410;
float var_1_15 = 4.5;
float var_1_16 = 3.48;
float var_1_17 = 15.2;
float var_1_18 = 4.25;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 4;
signed short int var_1_23 = 256;
signed short int var_1_24 = -8;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 64;
unsigned char var_1_27 = 64;
unsigned char var_1_28 = 64;
unsigned char var_1_29 = 5;
unsigned char var_1_30 = 4;
float var_1_31 = 2.4;
float var_1_32 = 0.0;
float var_1_33 = 0.0;
float var_1_34 = 15.8;
float var_1_35 = 127.75;
unsigned short int var_1_36 = 0;
unsigned short int var_1_37 = 0;
double var_1_38 = 256.65;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned long int var_1_42 = 8;
unsigned long int var_1_43 = 3608216710;
unsigned long int var_1_44 = 1456384942;
unsigned short int var_1_45 = 5;
unsigned short int var_1_46 = 28080;
unsigned short int var_1_47 = 21764;
unsigned long int var_1_48 = 4;
unsigned long int var_1_49 = 10;
signed char var_1_50 = -5;
float var_1_51 = 64.45;
float var_1_52 = 0.0;
float var_1_53 = 7.8;
float var_1_54 = 31.625;
signed short int var_1_55 = 128;
unsigned char var_1_56 = 0;
unsigned char var_1_57 = 128;
unsigned char var_1_58 = 50;
unsigned char var_1_59 = 32;
unsigned char var_1_60 = 4;
unsigned short int var_1_62 = 0;
float var_1_63 = 1000000000000000.5;
double var_1_64 = 10.6;
unsigned char var_1_65 = 2;
signed short int var_1_66 = 32;
signed short int var_1_67 = -5;
signed long int var_1_68 = -5;
double var_1_69 = 255.5;
signed char var_1_70 = 64;
signed long int var_1_71 = 128;
signed char var_1_72 = 64;
signed char var_1_73 = -4;
signed char var_1_75 = 8;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 0;
unsigned short int var_1_79 = 61969;
unsigned char var_1_80 = 0;
unsigned char var_1_81 = 0;
signed short int var_1_82 = 0;
unsigned char var_1_83 = 5;
unsigned char var_1_84 = 32;
unsigned char var_1_85 = 16;
signed char var_1_86 = 100;
float var_1_87 = 49.5;
float var_1_88 = 5.5;
unsigned short int var_1_89 = 5;
signed long int var_1_90 = 128;
signed char var_1_91 = 64;
signed char var_1_92 = -10;
signed long int var_1_93 = -50;
unsigned char var_1_94 = 100;
double var_1_95 = 64.75;
unsigned short int var_1_96 = 4;
float var_1_97 = 2.875;
unsigned char var_1_98 = 1;
unsigned char var_1_99 = 1;
unsigned short int var_1_100 = 256;
unsigned char var_1_101 = 0;
unsigned char var_1_102 = 0;
float var_1_103 = 0.125;
signed char var_1_104 = 0;
unsigned char var_1_105 = 0;
float var_1_106 = 255.375;
signed char var_1_107 = 50;
float var_1_108 = 255.4;
unsigned short int var_1_109 = 128;
signed char var_1_110 = 64;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -64;
signed long int last_1_var_1_11 = -5;
unsigned char last_1_var_1_19 = 0;
signed short int last_1_var_1_21 = 4;
unsigned long int last_1_var_1_42 = 8;
unsigned long int last_1_var_1_49 = 10;
unsigned char last_1_var_1_59 = 32;
unsigned short int last_1_var_1_62 = 0;
signed short int last_1_var_1_66 = 32;
double last_1_var_1_69 = 255.5;
unsigned char last_1_var_1_76 = 0;
signed short int last_1_var_1_82 = 0;
signed long int last_1_var_1_90 = 128;
signed long int last_1_var_1_93 = -50;
double last_1_var_1_95 = 64.75;
unsigned char last_1_var_1_98 = 1;
unsigned short int last_1_var_1_100 = 256;
unsigned char last_1_var_1_105 = 0;
unsigned short int last_1_var_1_109 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req41Batch25Amount500
	if (last_1_var_1_19) {
		var_1_93 = var_1_6;
	}


	// From: Req14Batch25Amount500
	if (var_1_20) {
		var_1_39 = (var_1_40 || (last_1_var_1_98 && var_1_41));
	} else {
		var_1_39 = (last_1_var_1_76 && var_1_40);
	}


	// From: Req13Batch25Amount500
	if (var_1_39) {
		var_1_38 = (max (var_1_17 , (var_1_18 - var_1_34)));
	}


	// From: Req34Batch25Amount500
	if (var_1_20) {
		var_1_82 = (min (var_1_23 , (min (last_1_var_1_11 , last_1_var_1_90))));
	} else {
		if (((- var_1_79) >= var_1_72) || last_1_var_1_105) {
			if ((max (last_1_var_1_100 , last_1_var_1_93)) > last_1_var_1_109) {
				var_1_82 = var_1_30;
			} else {
				var_1_82 = (var_1_29 - (var_1_36 + last_1_var_1_42));
			}
		} else {
			var_1_82 = ((10 + last_1_var_1_66) + (max (last_1_var_1_59 , var_1_7)));
		}
	}


	// From: Req9Batch25Amount500
	unsigned short int stepLocal_5 = var_1_14;
	if (! (last_1_var_1_21 < var_1_14)) {
		if (var_1_20) {
			var_1_24 = (min (16 , last_1_var_1_21));
		} else {
			if (var_1_7 == stepLocal_5) {
				var_1_24 = (max (var_1_7 , (max ((last_1_var_1_82 - last_1_var_1_21) , (var_1_23 - 1)))));
			}
		}
	}


	// From: Req18Batch25Amount500
	unsigned char stepLocal_11 = var_1_20;
	if (stepLocal_11 && var_1_40) {
		if (last_1_var_1_69 < (var_1_33 + last_1_var_1_69)) {
			var_1_49 = var_1_29;
		} else {
			var_1_49 = (min ((max ((var_1_43 - last_1_var_1_1) , (min (var_1_28 , var_1_14)))) , var_1_36));
		}
	} else {
		var_1_49 = var_1_29;
	}


	// From: Req26Batch25Amount500
	signed long int stepLocal_20 = var_1_93;
	if (var_1_49 <= stepLocal_20) {
		var_1_64 = (var_1_34 - var_1_53);
	}


	// From: Req15Batch25Amount500
	unsigned char stepLocal_9 = var_1_32 <= (- 0.35f);
	if (! (last_1_var_1_95 < var_1_34)) {
		var_1_42 = (abs (50u));
	} else {
		if (last_1_var_1_76 || stepLocal_9) {
			var_1_42 = (var_1_43 - (var_1_44 - var_1_14));
		}
	}


	// From: Req56Batch25Amount500
	unsigned char stepLocal_34 = var_1_60;
	if (stepLocal_34 < var_1_42) {
		var_1_109 = var_1_85;
	}


	// From: Req17Batch25Amount500
	if (last_1_var_1_98) {
		var_1_48 = (abs (last_1_var_1_42));
	} else {
		var_1_48 = (var_1_43 - last_1_var_1_49);
	}


	// From: Req2Batch25Amount500
	var_1_5 = (var_1_6 + var_1_7);


	// From: Req19Batch25Amount500
	var_1_50 = (min ((var_1_7 + var_1_29) , var_1_36));


	// From: Req20Batch25Amount500
	signed long int stepLocal_12 = var_1_46 / var_1_14;
	if (var_1_49 >= stepLocal_12) {
		if (var_1_20) {
			var_1_51 = (var_1_18 - (max (var_1_16 , (var_1_32 - var_1_34))));
		}
	} else {
		if (! (! var_1_41)) {
			var_1_51 = (abs ((var_1_34 + 2.6f) - 64.625f));
		} else {
			if (var_1_34 <= 128.6f) {
				var_1_51 = (((var_1_52 - var_1_53) + var_1_34) - var_1_17);
			} else {
				var_1_51 = var_1_54;
			}
		}
	}


	// From: Req37Batch25Amount500
	signed long int stepLocal_33 = var_1_67 * var_1_82;
	unsigned long int stepLocal_32 = var_1_42 * (var_1_57 / var_1_27);
	if (! (var_1_64 <= var_1_52)) {
		if (var_1_80) {
			if ((var_1_47 / (abs (var_1_28))) > stepLocal_32) {
				var_1_87 = var_1_17;
			} else {
				var_1_87 = var_1_33;
			}
		} else {
			var_1_87 = (var_1_52 + var_1_53);
		}
	} else {
		if (stepLocal_33 >= var_1_24) {
			var_1_87 = (var_1_52 + var_1_34);
		} else {
			var_1_87 = (max (var_1_16 , (min ((var_1_88 - var_1_33) , var_1_34))));
		}
	}


	// From: Req39Batch25Amount500
	var_1_90 = last_1_var_1_90;


	// From: Req40Batch25Amount500
	if (var_1_40) {
		var_1_91 = var_1_92;
	}


	// From: Req42Batch25Amount500
	if (var_1_40) {
		var_1_94 = var_1_28;
	}


	// From: Req43Batch25Amount500
	var_1_95 = var_1_88;


	// From: Req44Batch25Amount500
	var_1_96 = var_1_29;


	// From: Req45Batch25Amount500
	var_1_97 = var_1_52;


	// From: Req46Batch25Amount500
	if (last_1_var_1_98) {
		var_1_98 = var_1_78;
	} else {
		var_1_98 = var_1_40;
	}


	// From: Req47Batch25Amount500
	var_1_99 = var_1_77;


	// From: Req49Batch25Amount500
	var_1_101 = var_1_102;


	// From: Req50Batch25Amount500
	if (var_1_39) {
		var_1_103 = var_1_18;
	} else {
		var_1_103 = var_1_16;
	}


	// From: Req51Batch25Amount500
	var_1_104 = var_1_72;


	// From: Req52Batch25Amount500
	if (var_1_102) {
		var_1_105 = var_1_78;
	}


	// From: Req53Batch25Amount500
	if (var_1_78) {
		var_1_106 = var_1_17;
	}


	// From: Req54Batch25Amount500
	var_1_107 = var_1_58;


	// From: Req55Batch25Amount500
	if (var_1_101) {
		var_1_108 = var_1_54;
	} else {
		var_1_108 = var_1_53;
	}


	// From: Req7Batch25Amount500
	unsigned long int stepLocal_4 = var_1_48;
	if (var_1_93 == stepLocal_4) {
		var_1_19 = (! (! 0));
	} else {
		var_1_19 = var_1_20;
	}


	// From: Req4Batch25Amount500
	if (var_1_105) {
		var_1_11 = (var_1_7 + var_1_4);
	}


	// From: Req24Batch25Amount500
	unsigned char stepLocal_18 = var_1_40;
	signed long int stepLocal_17 = var_1_36 - var_1_23;
	if ((var_1_16 <= var_1_108) && stepLocal_18) {
		if ((var_1_60 % (max (var_1_26 , 5))) <= stepLocal_17) {
			var_1_62 = (abs (var_1_27));
		} else {
			var_1_62 = (var_1_14 - (abs (last_1_var_1_62)));
		}
	}


	// From: Req27Batch25Amount500
	unsigned char stepLocal_21 = 8.875f == (- var_1_64);
	if (stepLocal_21 && (var_1_40 && var_1_101)) {
		var_1_65 = ((abs (var_1_57)) - var_1_27);
	} else {
		var_1_65 = ((max (var_1_58 , var_1_30)) + var_1_26);
	}


	// From: Req38Batch25Amount500
	if (var_1_40) {
		if (var_1_98) {
			var_1_89 = var_1_36;
		} else {
			var_1_89 = var_1_23;
		}
	} else {
		var_1_89 = var_1_37;
	}


	// From: Req48Batch25Amount500
	var_1_100 = var_1_11;


	// From: Req57Batch25Amount500
	signed long int stepLocal_35 = max (var_1_72 , var_1_94);
	if (stepLocal_35 >= (var_1_11 - var_1_23)) {
		var_1_110 = (min ((var_1_75 + -4) , var_1_6));
	} else {
		var_1_110 = var_1_29;
	}


	// From: Req30Batch25Amount500
	signed long int stepLocal_24 = var_1_11;
	if (var_1_48 != stepLocal_24) {
		var_1_69 = ((3.5 - var_1_52) + 15.5);
	} else {
		var_1_69 = (var_1_16 - var_1_53);
	}


	// From: Req16Batch25Amount500
	unsigned char stepLocal_10 = var_1_30;
	if (var_1_20) {
		if (((var_1_100 & var_1_44) / var_1_28) > stepLocal_10) {
			var_1_45 = ((var_1_46 + (max (32508 , var_1_47))) - var_1_100);
		} else {
			var_1_45 = var_1_14;
		}
	}


	// From: Req35Batch25Amount500
	unsigned char stepLocal_29 = (max (var_1_24 , var_1_89)) < var_1_71;
	if (stepLocal_29 && ((var_1_26 << var_1_47) > var_1_11)) {
		var_1_83 = (var_1_57 - var_1_37);
	} else {
		if (! var_1_77) {
			var_1_83 = var_1_26;
		} else {
			if (var_1_38 < var_1_69) {
				var_1_83 = (((var_1_84 - var_1_29) + (var_1_60 + var_1_37)) + (max (var_1_85 , (var_1_26 - var_1_75))));
			}
		}
	}


	// From: Req29Batch25Amount500
	signed short int stepLocal_23 = var_1_24;
	if (stepLocal_23 < var_1_109) {
		if (var_1_20) {
			var_1_68 = (var_1_26 - var_1_37);
		} else {
			if ((- (min (4.3f , var_1_69))) > (- var_1_38)) {
				var_1_68 = (max (-8 , var_1_24));
			}
		}
	} else {
		var_1_68 = (var_1_36 - var_1_37);
	}


	// From: Req8Batch25Amount500
	if (! var_1_39) {
		if ((var_1_14 * var_1_48) > 128) {
			var_1_21 = (var_1_6 + 200);
		}
	} else {
		if (var_1_17 < var_1_95) {
			var_1_21 = (max ((max ((last_1_var_1_21 - var_1_24) , -10000)) , var_1_6));
		} else {
			if (var_1_18 > var_1_69) {
				if (var_1_39) {
					var_1_21 = (((var_1_82 + var_1_24) + (last_1_var_1_21 - var_1_23)) + var_1_7);
				}
			} else {
				var_1_21 = (min (var_1_7 , last_1_var_1_21));
			}
		}
	}


	// From: Req3Batch25Amount500
	signed long int stepLocal_2 = var_1_4;
	signed short int stepLocal_1 = var_1_82;
	if (var_1_6 >= stepLocal_1) {
		var_1_8 = (-32 + (var_1_24 - var_1_82));
	} else {
		if (128.25 < (- (var_1_69 + var_1_64))) {
			if (var_1_82 >= stepLocal_2) {
				var_1_8 = (min ((min (var_1_24 , var_1_7)) , var_1_6));
			}
		}
	}


	// From: Req23Batch25Amount500
	signed long int stepLocal_16 = var_1_11;
	signed char stepLocal_15 = var_1_6;
	signed long int stepLocal_14 = var_1_68;
	if (var_1_49 > stepLocal_16) {
		if (stepLocal_15 < -25) {
			var_1_59 = (max (var_1_30 , 10));
		} else {
			var_1_59 = (var_1_27 + ((var_1_60 + var_1_36) + (var_1_58 - var_1_37)));
		}
	} else {
		if ((min (var_1_42 , (var_1_60 / -256))) > stepLocal_14) {
			var_1_59 = (var_1_36 + (1 + var_1_29));
		}
	}


	// From: Req1Batch25Amount500
	unsigned long int stepLocal_0 = var_1_8 + var_1_49;
	if (! (var_1_49 >= var_1_8)) {
		if (256 != stepLocal_0) {
			var_1_1 = (max ((var_1_4 + -25) , (abs (var_1_8))));
		}
	} else {
		var_1_1 = var_1_4;
	}


	// From: Req5Batch25Amount500
	var_1_13 = (var_1_14 - var_1_59);


	// From: Req6Batch25Amount500
	unsigned short int stepLocal_3 = var_1_45;
	if (stepLocal_3 < -32) {
		var_1_15 = (var_1_16 - (abs (var_1_17 - var_1_18)));
	}


	// From: Req10Batch25Amount500
	unsigned short int stepLocal_7 = var_1_96;
	unsigned char stepLocal_6 = (var_1_30 + var_1_90) < var_1_49;
	if (stepLocal_7 >= (var_1_68 ^ var_1_89)) {
		var_1_25 = ((var_1_26 + (min (var_1_27 , var_1_28))) - ((16 + var_1_29) + var_1_30));
	} else {
		if (stepLocal_6 || var_1_39) {
			var_1_25 = var_1_30;
		}
	}


	// From: Req11Batch25Amount500
	signed long int stepLocal_8 = var_1_4;
	if (stepLocal_8 >= (var_1_28 - (var_1_29 + var_1_8))) {
		var_1_31 = (var_1_18 - ((min (var_1_32 , var_1_33)) - var_1_34));
	}


	// From: Req12Batch25Amount500
	if (((var_1_8 / var_1_26) * var_1_93) < (var_1_27 << (var_1_36 + var_1_37))) {
		if (var_1_14 <= var_1_30) {
			var_1_35 = (max (var_1_16 , (max (7.4f , 99.6f))));
		}
	} else {
		var_1_35 = var_1_33;
	}


	// From: Req22Batch25Amount500
	signed long int stepLocal_13 = var_1_37 - (min (var_1_68 , var_1_29));
	if (stepLocal_13 >= var_1_42) {
		var_1_56 = (abs (max (var_1_30 , (min (var_1_27 , var_1_37)))));
	} else {
		if (var_1_33 <= var_1_95) {
			if (var_1_101) {
				var_1_56 = ((max ((var_1_29 + var_1_37) , (var_1_36 + var_1_30))) + (max (var_1_28 , 5)));
			} else {
				var_1_56 = ((var_1_37 + var_1_29) + var_1_27);
			}
		} else {
			var_1_56 = (var_1_57 - (var_1_26 - (var_1_58 - var_1_37)));
		}
	}


	// From: Req31Batch25Amount500
	if ((~ var_1_8) <= ((min (var_1_27 , var_1_71)) << var_1_37)) {
		var_1_70 = (max (((-4 + var_1_37) + 8) , var_1_58));
	} else {
		if (var_1_13 == (var_1_14 - var_1_96)) {
			var_1_70 = ((var_1_72 - var_1_58) - 10);
		} else {
			var_1_70 = (min (-10 , -100));
		}
	}


	// From: Req32Batch25Amount500
	signed long int stepLocal_28 = (var_1_45 + var_1_93) / var_1_58;
	signed long int stepLocal_27 = var_1_93;
	signed long int stepLocal_26 = var_1_13 + (var_1_36 ^ -128);
	unsigned char stepLocal_25 = var_1_28;
	if (stepLocal_27 < var_1_48) {
		if ((max ((min (var_1_18 , var_1_38)) , var_1_33)) >= var_1_32) {
			var_1_73 = (min ((min (var_1_7 , var_1_60)) , var_1_72));
		} else {
			var_1_73 = (min (var_1_72 , var_1_60));
		}
	} else {
		if (var_1_67 != stepLocal_25) {
			if (stepLocal_28 < (var_1_8 & var_1_49)) {
				var_1_73 = ((var_1_75 - var_1_58) + var_1_29);
			} else {
				var_1_73 = (var_1_29 + var_1_75);
			}
		} else {
			if (stepLocal_26 >= (var_1_72 + var_1_75)) {
				var_1_73 = var_1_7;
			} else {
				var_1_73 = ((abs (var_1_36)) - var_1_37);
			}
		}
	}


	// From: Req33Batch25Amount500
	if (var_1_41) {
		var_1_76 = (! (var_1_77 && (var_1_105 || var_1_78)));
	} else {
		if (((var_1_79 - var_1_58) - var_1_37) > var_1_8) {
			if (var_1_57 > (- var_1_68)) {
				if (var_1_20 && var_1_105) {
					var_1_76 = (! var_1_78);
				}
			} else {
				var_1_76 = ((var_1_40 && var_1_20) || (var_1_101 && (var_1_80 || var_1_81)));
			}
		} else {
			var_1_76 = (! var_1_40);
		}
	}


	// From: Req36Batch25Amount500
	unsigned long int stepLocal_31 = (- var_1_48) % (abs (var_1_84));
	signed long int stepLocal_30 = - var_1_89;
	if ((var_1_16 - var_1_32) > var_1_15) {
		if (var_1_29 > stepLocal_30) {
			var_1_86 = ((var_1_72 - var_1_60) - var_1_37);
		} else {
			if (stepLocal_31 <= var_1_60) {
				var_1_86 = (var_1_60 + var_1_30);
			}
		}
	} else {
		var_1_86 = var_1_36;
	}


	// From: Req25Batch25Amount500
	unsigned char stepLocal_19 = var_1_27;
	if (-2 >= stepLocal_19) {
		if (var_1_20) {
			if (var_1_76) {
				var_1_63 = (max ((var_1_34 + (abs (var_1_52))) , var_1_33));
			}
		} else {
			var_1_63 = (max ((var_1_53 + 4.5f) , var_1_18));
		}
	}


	// From: Req21Batch25Amount500
	if (! var_1_40) {
		var_1_55 = ((min ((min (128 , var_1_86)) , var_1_23)) + var_1_7);
	}


	// From: Req28Batch25Amount500
	unsigned char stepLocal_22 = var_1_29;
	if ((var_1_30 * (32 << var_1_55)) < stepLocal_22) {
		var_1_66 = (var_1_57 - var_1_48);
	} else {
		var_1_66 = ((min ((min (var_1_21 , var_1_37)) , var_1_30)) + var_1_67);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1073741823);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -63);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 8191);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 63);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 64);
	assume_abort_if_not(var_1_27 <= 127);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 64);
	assume_abort_if_not(var_1_28 <= 127);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 63);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= 4611686.018427383000e+12F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 4611686.018427383000e+12F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 2147483647);
	assume_abort_if_not(var_1_43 <= 4294967294);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 1073741823);
	assume_abort_if_not(var_1_44 <= 2147483647);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 16383);
	assume_abort_if_not(var_1_46 <= 32767);
	var_1_47 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_47 >= 16384);
	assume_abort_if_not(var_1_47 <= 32767);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 2305843.009213691400e+12F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 2305843.009213691400e+12F && var_1_53 >= 1.0e-20F ));
	var_1_54 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_54 >= -922337.2036854766000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854766000e+12F && var_1_54 >= 1.0e-20F ));
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 127);
	assume_abort_if_not(var_1_57 <= 254);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 31);
	assume_abort_if_not(var_1_58 <= 63);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 0);
	assume_abort_if_not(var_1_60 <= 32);
	var_1_67 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_67 >= -16383);
	assume_abort_if_not(var_1_67 <= 16383);
	var_1_71 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_71 >= 0);
	assume_abort_if_not(var_1_71 <= 2147483647);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= 62);
	assume_abort_if_not(var_1_72 <= 126);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 63);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 1);
	assume_abort_if_not(var_1_77 <= 1);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 1);
	assume_abort_if_not(var_1_78 <= 1);
	var_1_79 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_79 >= 49151);
	assume_abort_if_not(var_1_79 <= 65535);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 0);
	assume_abort_if_not(var_1_80 <= 0);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 0);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 32);
	assume_abort_if_not(var_1_84 <= 64);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 0);
	assume_abort_if_not(var_1_85 <= 127);
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 9223372.036854766000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_92 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_92 >= -127);
	assume_abort_if_not(var_1_92 <= 126);
	var_1_102 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_102 >= 1);
	assume_abort_if_not(var_1_102 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_11 = var_1_11;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_109 = var_1_109;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((((! (var_1_49 >= var_1_8)) ? ((256 != (var_1_8 + var_1_49)) ? (var_1_1 == ((signed long int) (max ((var_1_4 + -25) , (abs (var_1_8)))))) : 1) : (var_1_1 == ((signed long int) var_1_4))) && (var_1_5 == ((signed char) (var_1_6 + var_1_7)))) && ((var_1_6 >= var_1_82) ? (var_1_8 == ((signed long int) (-32 + (var_1_24 - var_1_82)))) : ((128.25 < (- (var_1_69 + var_1_64))) ? ((var_1_82 >= var_1_4) ? (var_1_8 == ((signed long int) (min ((min (var_1_24 , var_1_7)) , var_1_6)))) : 1) : 1))) && (var_1_105 ? (var_1_11 == ((signed long int) (var_1_7 + var_1_4))) : 1)) && (var_1_13 == ((unsigned short int) (var_1_14 - var_1_59)))) && ((var_1_45 < -32) ? (var_1_15 == ((float) (var_1_16 - (abs (var_1_17 - var_1_18))))) : 1)) && ((var_1_93 == var_1_48) ? (var_1_19 == ((unsigned char) (! (! 0)))) : (var_1_19 == ((unsigned char) var_1_20)))) && ((! var_1_39) ? (((var_1_14 * var_1_48) > 128) ? (var_1_21 == ((signed short int) (var_1_6 + 200))) : 1) : ((var_1_17 < var_1_95) ? (var_1_21 == ((signed short int) (max ((max ((last_1_var_1_21 - var_1_24) , -10000)) , var_1_6)))) : ((var_1_18 > var_1_69) ? (var_1_39 ? (var_1_21 == ((signed short int) (((var_1_82 + var_1_24) + (last_1_var_1_21 - var_1_23)) + var_1_7))) : 1) : (var_1_21 == ((signed short int) (min (var_1_7 , last_1_var_1_21)))))))) && ((! (last_1_var_1_21 < var_1_14)) ? (var_1_20 ? (var_1_24 == ((signed short int) (min (16 , last_1_var_1_21)))) : ((var_1_7 == var_1_14) ? (var_1_24 == ((signed short int) (max (var_1_7 , (max ((last_1_var_1_82 - last_1_var_1_21) , (var_1_23 - 1))))))) : 1)) : 1)) && ((var_1_96 >= (var_1_68 ^ var_1_89)) ? (var_1_25 == ((unsigned char) ((var_1_26 + (min (var_1_27 , var_1_28))) - ((16 + var_1_29) + var_1_30)))) : ((((var_1_30 + var_1_90) < var_1_49) || var_1_39) ? (var_1_25 == ((unsigned char) var_1_30)) : 1))) && ((var_1_4 >= (var_1_28 - (var_1_29 + var_1_8))) ? (var_1_31 == ((float) (var_1_18 - ((min (var_1_32 , var_1_33)) - var_1_34)))) : 1)) && ((((var_1_8 / var_1_26) * var_1_93) < (var_1_27 << (var_1_36 + var_1_37))) ? ((var_1_14 <= var_1_30) ? (var_1_35 == ((float) (max (var_1_16 , (max (7.4f , 99.6f)))))) : 1) : (var_1_35 == ((float) var_1_33)))) && (var_1_39 ? (var_1_38 == ((double) (max (var_1_17 , (var_1_18 - var_1_34))))) : 1)) && (var_1_20 ? (var_1_39 == ((unsigned char) (var_1_40 || (last_1_var_1_98 && var_1_41)))) : (var_1_39 == ((unsigned char) (last_1_var_1_76 && var_1_40))))) && ((! (last_1_var_1_95 < var_1_34)) ? (var_1_42 == ((unsigned long int) (abs (50u)))) : ((last_1_var_1_76 || (var_1_32 <= (- 0.35f))) ? (var_1_42 == ((unsigned long int) (var_1_43 - (var_1_44 - var_1_14)))) : 1))) && (var_1_20 ? ((((var_1_100 & var_1_44) / var_1_28) > var_1_30) ? (var_1_45 == ((unsigned short int) ((var_1_46 + (max (32508 , var_1_47))) - var_1_100))) : (var_1_45 == ((unsigned short int) var_1_14))) : 1)) && (last_1_var_1_98 ? (var_1_48 == ((unsigned long int) (abs (last_1_var_1_42)))) : (var_1_48 == ((unsigned long int) (var_1_43 - last_1_var_1_49))))) && ((var_1_20 && var_1_40) ? ((last_1_var_1_69 < (var_1_33 + last_1_var_1_69)) ? (var_1_49 == ((unsigned long int) var_1_29)) : (var_1_49 == ((unsigned long int) (min ((max ((var_1_43 - last_1_var_1_1) , (min (var_1_28 , var_1_14)))) , var_1_36))))) : (var_1_49 == ((unsigned long int) var_1_29)))) && (var_1_50 == ((signed char) (min ((var_1_7 + var_1_29) , var_1_36))))) && ((var_1_49 >= (var_1_46 / var_1_14)) ? (var_1_20 ? (var_1_51 == ((float) (var_1_18 - (max (var_1_16 , (var_1_32 - var_1_34)))))) : 1) : ((! (! var_1_41)) ? (var_1_51 == ((float) (abs ((var_1_34 + 2.6f) - 64.625f)))) : ((var_1_34 <= 128.6f) ? (var_1_51 == ((float) (((var_1_52 - var_1_53) + var_1_34) - var_1_17))) : (var_1_51 == ((float) var_1_54)))))) && ((! var_1_40) ? (var_1_55 == ((signed short int) ((min ((min (128 , var_1_86)) , var_1_23)) + var_1_7))) : 1)) && (((var_1_37 - (min (var_1_68 , var_1_29))) >= var_1_42) ? (var_1_56 == ((unsigned char) (abs (max (var_1_30 , (min (var_1_27 , var_1_37))))))) : ((var_1_33 <= var_1_95) ? (var_1_101 ? (var_1_56 == ((unsigned char) ((max ((var_1_29 + var_1_37) , (var_1_36 + var_1_30))) + (max (var_1_28 , 5))))) : (var_1_56 == ((unsigned char) ((var_1_37 + var_1_29) + var_1_27)))) : (var_1_56 == ((unsigned char) (var_1_57 - (var_1_26 - (var_1_58 - var_1_37)))))))) && ((var_1_49 > var_1_11) ? ((var_1_6 < -25) ? (var_1_59 == ((unsigned char) (max (var_1_30 , 10)))) : (var_1_59 == ((unsigned char) (var_1_27 + ((var_1_60 + var_1_36) + (var_1_58 - var_1_37)))))) : (((min (var_1_42 , (var_1_60 / -256))) > var_1_68) ? (var_1_59 == ((unsigned char) (var_1_36 + (1 + var_1_29)))) : 1))) && (((var_1_16 <= var_1_108) && var_1_40) ? (((var_1_60 % (max (var_1_26 , 5))) <= (var_1_36 - var_1_23)) ? (var_1_62 == ((unsigned short int) (abs (var_1_27)))) : (var_1_62 == ((unsigned short int) (var_1_14 - (abs (last_1_var_1_62)))))) : 1)) && ((-2 >= var_1_27) ? (var_1_20 ? (var_1_76 ? (var_1_63 == ((float) (max ((var_1_34 + (abs (var_1_52))) , var_1_33)))) : 1) : (var_1_63 == ((float) (max ((var_1_53 + 4.5f) , var_1_18))))) : 1)) && ((var_1_49 <= var_1_93) ? (var_1_64 == ((double) (var_1_34 - var_1_53))) : 1)) && (((8.875f == (- var_1_64)) && (var_1_40 && var_1_101)) ? (var_1_65 == ((unsigned char) ((abs (var_1_57)) - var_1_27))) : (var_1_65 == ((unsigned char) ((max (var_1_58 , var_1_30)) + var_1_26))))) && (((var_1_30 * (32 << var_1_55)) < var_1_29) ? (var_1_66 == ((signed short int) (var_1_57 - var_1_48))) : (var_1_66 == ((signed short int) ((min ((min (var_1_21 , var_1_37)) , var_1_30)) + var_1_67))))) && ((var_1_24 < var_1_109) ? (var_1_20 ? (var_1_68 == ((signed long int) (var_1_26 - var_1_37))) : (((- (min (4.3f , var_1_69))) > (- var_1_38)) ? (var_1_68 == ((signed long int) (max (-8 , var_1_24)))) : 1)) : (var_1_68 == ((signed long int) (var_1_36 - var_1_37))))) && ((var_1_48 != var_1_11) ? (var_1_69 == ((double) ((3.5 - var_1_52) + 15.5))) : (var_1_69 == ((double) (var_1_16 - var_1_53))))) && (((~ var_1_8) <= ((min (var_1_27 , var_1_71)) << var_1_37)) ? (var_1_70 == ((signed char) (max (((-4 + var_1_37) + 8) , var_1_58)))) : ((var_1_13 == (var_1_14 - var_1_96)) ? (var_1_70 == ((signed char) ((var_1_72 - var_1_58) - 10))) : (var_1_70 == ((signed char) (min (-10 , -100))))))) && ((var_1_93 < var_1_48) ? (((max ((min (var_1_18 , var_1_38)) , var_1_33)) >= var_1_32) ? (var_1_73 == ((signed char) (min ((min (var_1_7 , var_1_60)) , var_1_72)))) : (var_1_73 == ((signed char) (min (var_1_72 , var_1_60))))) : ((var_1_67 != var_1_28) ? ((((var_1_45 + var_1_93) / var_1_58) < (var_1_8 & var_1_49)) ? (var_1_73 == ((signed char) ((var_1_75 - var_1_58) + var_1_29))) : (var_1_73 == ((signed char) (var_1_29 + var_1_75)))) : (((var_1_13 + (var_1_36 ^ -128)) >= (var_1_72 + var_1_75)) ? (var_1_73 == ((signed char) var_1_7)) : (var_1_73 == ((signed char) ((abs (var_1_36)) - var_1_37))))))) && (var_1_41 ? (var_1_76 == ((unsigned char) (! (var_1_77 && (var_1_105 || var_1_78))))) : ((((var_1_79 - var_1_58) - var_1_37) > var_1_8) ? ((var_1_57 > (- var_1_68)) ? ((var_1_20 && var_1_105) ? (var_1_76 == ((unsigned char) (! var_1_78))) : 1) : (var_1_76 == ((unsigned char) ((var_1_40 && var_1_20) || (var_1_101 && (var_1_80 || var_1_81)))))) : (var_1_76 == ((unsigned char) (! var_1_40)))))) && (var_1_20 ? (var_1_82 == ((signed short int) (min (var_1_23 , (min (last_1_var_1_11 , last_1_var_1_90)))))) : ((((- var_1_79) >= var_1_72) || last_1_var_1_105) ? (((max (last_1_var_1_100 , last_1_var_1_93)) > last_1_var_1_109) ? (var_1_82 == ((signed short int) var_1_30)) : (var_1_82 == ((signed short int) (var_1_29 - (var_1_36 + last_1_var_1_42))))) : (var_1_82 == ((signed short int) ((10 + last_1_var_1_66) + (max (last_1_var_1_59 , var_1_7)))))))) && ((((max (var_1_24 , var_1_89)) < var_1_71) && ((var_1_26 << var_1_47) > var_1_11)) ? (var_1_83 == ((unsigned char) (var_1_57 - var_1_37))) : ((! var_1_77) ? (var_1_83 == ((unsigned char) var_1_26)) : ((var_1_38 < var_1_69) ? (var_1_83 == ((unsigned char) (((var_1_84 - var_1_29) + (var_1_60 + var_1_37)) + (max (var_1_85 , (var_1_26 - var_1_75)))))) : 1)))) && (((var_1_16 - var_1_32) > var_1_15) ? ((var_1_29 > (- var_1_89)) ? (var_1_86 == ((signed char) ((var_1_72 - var_1_60) - var_1_37))) : ((((- var_1_48) % (abs (var_1_84))) <= var_1_60) ? (var_1_86 == ((signed char) (var_1_60 + var_1_30))) : 1)) : (var_1_86 == ((signed char) var_1_36)))) && ((! (var_1_64 <= var_1_52)) ? (var_1_80 ? (((var_1_47 / (abs (var_1_28))) > (var_1_42 * (var_1_57 / var_1_27))) ? (var_1_87 == ((float) var_1_17)) : (var_1_87 == ((float) var_1_33))) : (var_1_87 == ((float) (var_1_52 + var_1_53)))) : (((var_1_67 * var_1_82) >= var_1_24) ? (var_1_87 == ((float) (var_1_52 + var_1_34))) : (var_1_87 == ((float) (max (var_1_16 , (min ((var_1_88 - var_1_33) , var_1_34))))))))) && (var_1_40 ? (var_1_98 ? (var_1_89 == ((unsigned short int) var_1_36)) : (var_1_89 == ((unsigned short int) var_1_23))) : (var_1_89 == ((unsigned short int) var_1_37)))) && (var_1_90 == ((signed long int) last_1_var_1_90))) && (var_1_40 ? (var_1_91 == ((signed char) var_1_92)) : 1)) && (last_1_var_1_19 ? (var_1_93 == ((signed long int) var_1_6)) : 1)) && (var_1_40 ? (var_1_94 == ((unsigned char) var_1_28)) : 1)) && (var_1_95 == ((double) var_1_88))) && (var_1_96 == ((unsigned short int) var_1_29))) && (var_1_97 == ((float) var_1_52))) && (last_1_var_1_98 ? (var_1_98 == ((unsigned char) var_1_78)) : (var_1_98 == ((unsigned char) var_1_40)))) && (var_1_99 == ((unsigned char) var_1_77))) && (var_1_100 == ((unsigned short int) var_1_11))) && (var_1_101 == ((unsigned char) var_1_102))) && (var_1_39 ? (var_1_103 == ((float) var_1_18)) : (var_1_103 == ((float) var_1_16)))) && (var_1_104 == ((signed char) var_1_72))) && (var_1_102 ? (var_1_105 == ((unsigned char) var_1_78)) : 1)) && (var_1_78 ? (var_1_106 == ((float) var_1_17)) : 1)) && (var_1_107 == ((signed char) var_1_58))) && (var_1_101 ? (var_1_108 == ((float) var_1_54)) : (var_1_108 == ((float) var_1_53)))) && ((var_1_60 < var_1_42) ? (var_1_109 == ((unsigned short int) var_1_85)) : 1)) && (((max (var_1_72 , var_1_94)) >= (var_1_11 - var_1_23)) ? (var_1_110 == ((signed char) (min ((var_1_75 + -4) , var_1_6)))) : (var_1_110 == ((signed char) var_1_29)))
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
