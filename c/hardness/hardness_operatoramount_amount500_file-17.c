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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 0;
double var_1_12 = 7.3;
double var_1_13 = 0.2;
double var_1_14 = 99.75;
double var_1_15 = 4.75;
float var_1_16 = 256.3;
signed long int var_1_17 = 10;
signed long int var_1_18 = 64;
signed long int var_1_19 = 16;
float var_1_20 = 3.875;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed long int var_1_24 = -25;
signed long int var_1_25 = 32;
signed long int var_1_26 = 1000000000;
signed long int var_1_27 = 50;
signed long int var_1_28 = 1;
unsigned char var_1_29 = 0;
signed char var_1_30 = -16;
signed char var_1_31 = -25;
unsigned long int var_1_32 = 128;
double var_1_33 = 64.5;
double var_1_34 = -0.25;
double var_1_36 = 256.75;
double var_1_37 = 100.25;
double var_1_38 = 9.3;
double var_1_39 = 0.0;
double var_1_40 = 9999999999999.25;
double var_1_41 = 0.0;
double var_1_42 = 10000000.125;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 128;
unsigned char var_1_45 = 128;
unsigned char var_1_46 = 32;
unsigned long int var_1_47 = 256;
unsigned long int var_1_48 = 3976838315;
unsigned long int var_1_49 = 4;
signed short int var_1_50 = -32;
unsigned short int var_1_51 = 50;
unsigned short int var_1_52 = 32638;
unsigned char var_1_53 = 128;
unsigned char var_1_54 = 64;
unsigned char var_1_55 = 25;
signed short int var_1_56 = 0;
signed short int var_1_57 = 25871;
signed short int var_1_58 = 256;
unsigned char var_1_59 = 128;
unsigned char var_1_60 = 32;
unsigned char var_1_61 = 200;
unsigned char var_1_62 = 0;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 0;
unsigned char var_1_65 = 0;
signed short int var_1_67 = 100;
unsigned char var_1_68 = 1;
double var_1_69 = 1.95;
double var_1_70 = 16.8;
double var_1_71 = 128.7;
double var_1_72 = 9999999999999.125;
double var_1_73 = 0.875;
unsigned short int var_1_74 = 64;
signed char var_1_75 = 1;
signed char var_1_76 = 8;
signed short int var_1_77 = -32;
signed short int var_1_78 = -10;
unsigned char var_1_79 = 0;
unsigned char var_1_80 = 8;
float var_1_81 = 128.5;
float var_1_82 = 4.375;
float var_1_83 = 64.5;
unsigned long int var_1_84 = 64;
unsigned short int var_1_85 = 8;
unsigned short int var_1_86 = 37516;
unsigned short int var_1_87 = 41929;
unsigned long int var_1_88 = 4;
unsigned long int var_1_89 = 1000;
unsigned long int var_1_90 = 10;
signed short int var_1_91 = 4;
signed short int var_1_93 = 31973;
signed short int var_1_94 = 10000;
signed char var_1_95 = 5;
unsigned short int var_1_96 = 25;
double var_1_97 = 1.7;
double var_1_98 = 127.207;
unsigned short int var_1_99 = 10;
signed short int var_1_100 = 10;
signed char var_1_101 = -1;
signed long int var_1_102 = 4;
signed char var_1_103 = -100;
float var_1_104 = 5.31;
unsigned long int var_1_105 = 16;
unsigned char var_1_106 = 0;
unsigned short int var_1_107 = 256;
signed short int var_1_108 = -8;
signed short int var_1_109 = -8;
unsigned char var_1_110 = 128;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_9 = 1;
unsigned char last_1_var_1_21 = 0;
signed long int last_1_var_1_24 = -25;
unsigned char last_1_var_1_29 = 0;
unsigned long int last_1_var_1_32 = 128;
double last_1_var_1_34 = -0.25;
double last_1_var_1_38 = 9.3;
unsigned char last_1_var_1_53 = 128;
signed short int last_1_var_1_58 = 256;
unsigned char last_1_var_1_59 = 128;
unsigned char last_1_var_1_65 = 0;
signed short int last_1_var_1_67 = 100;
unsigned short int last_1_var_1_74 = 64;
signed char last_1_var_1_75 = 1;
signed short int last_1_var_1_77 = -32;
unsigned char last_1_var_1_79 = 0;
unsigned long int last_1_var_1_84 = 64;
unsigned short int last_1_var_1_85 = 8;
unsigned long int last_1_var_1_88 = 4;
signed short int last_1_var_1_91 = 4;
unsigned short int last_1_var_1_96 = 25;
double last_1_var_1_98 = 127.207;
unsigned short int last_1_var_1_99 = 10;
unsigned long int last_1_var_1_105 = 16;
unsigned short int last_1_var_1_107 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req10Batch17Amount500
	signed long int stepLocal_7 = -128;
	signed long int stepLocal_6 = (var_1_26 & last_1_var_1_58) + var_1_18;
	if (var_1_31 <= stepLocal_7) {
		if (! (last_1_var_1_98 > var_1_14)) {
			var_1_33 = var_1_20;
		} else {
			if (stepLocal_6 < -256) {
				var_1_33 = var_1_14;
			} else {
				var_1_33 = var_1_20;
			}
		}
	} else {
		var_1_33 = var_1_14;
	}


	// From: Req37Batch17Amount500
	unsigned char stepLocal_26 = var_1_23;
	if (((last_1_var_1_67 + last_1_var_1_77) <= -100) || stepLocal_26) {
		var_1_91 = var_1_45;
	} else {
		if ((- last_1_var_1_34) >= 10.5) {
			if (last_1_var_1_29) {
				var_1_91 = last_1_var_1_107;
			} else {
				var_1_91 = ((min ((last_1_var_1_77 + last_1_var_1_105) , (var_1_57 - 8))) - (var_1_93 - (var_1_94 - last_1_var_1_53)));
			}
		} else {
			var_1_91 = (-256 + var_1_62);
		}
	}


	// From: Req45Batch17Amount500
	if (last_1_var_1_79) {
		var_1_102 = var_1_26;
	} else {
		var_1_102 = var_1_31;
	}


	// From: Req3Batch17Amount500
	unsigned long int stepLocal_1 = 100 * last_1_var_1_32;
	if (last_1_var_1_59 == stepLocal_1) {
		var_1_12 = (max ((0.875 + (var_1_13 + 64.4)) , 1.0000000000000005E15));
	} else {
		var_1_12 = (max ((var_1_14 - var_1_15) , var_1_13));
	}


	// From: Req2Batch17Amount500
	if (last_1_var_1_84 < last_1_var_1_85) {
		var_1_9 = ((var_1_8 || (last_1_var_1_9 || var_1_10)) && var_1_11);
	} else {
		var_1_9 = (! var_1_11);
	}


	// From: Req28Batch17Amount500
	unsigned char stepLocal_17 = var_1_9;
	signed long int stepLocal_16 = var_1_17;
	if ((16.8 != (5.5 + 1.1)) || stepLocal_17) {
		if (last_1_var_1_75 > stepLocal_16) {
			var_1_75 = (max ((var_1_62 - var_1_76) , var_1_31));
		} else {
			var_1_75 = (abs (min (10 , var_1_61)));
		}
	} else {
		var_1_75 = 0;
	}


	// From: Req49Batch17Amount500
	if (var_1_9) {
		var_1_106 = var_1_22;
	} else {
		var_1_106 = var_1_23;
	}


	// From: Req33Batch17Amount500
	if (last_1_var_1_21 || (last_1_var_1_65 || var_1_68)) {
		if (last_1_var_1_38 < (var_1_40 / var_1_39)) {
			var_1_84 = (max (var_1_61 , var_1_19));
		}
	} else {
		var_1_84 = (min ((min (var_1_27 , var_1_44)) , (last_1_var_1_74 + var_1_76)));
	}


	// From: Req1Batch17Amount500
	unsigned char stepLocal_0 = (last_1_var_1_107 | last_1_var_1_24) <= last_1_var_1_105;
	if (stepLocal_0 || ((min (last_1_var_1_91 , last_1_var_1_96)) > last_1_var_1_105)) {
		var_1_1 = ((! 1) && ((last_1_var_1_105 < last_1_var_1_24) && var_1_8));
	} else {
		var_1_1 = 1;
	}


	// From: Req5Batch17Amount500
	if (var_1_8) {
		var_1_21 = ((var_1_11 && var_1_10) && var_1_22);
	} else {
		var_1_21 = (var_1_1 || ((! var_1_23) && var_1_22));
	}


	// From: Req50Batch17Amount500
	if (var_1_21) {
		var_1_107 = var_1_94;
	} else {
		var_1_107 = var_1_54;
	}


	// From: Req42Batch17Amount500
	if (var_1_1) {
		var_1_99 = 25;
	} else {
		var_1_99 = 4;
	}


	// From: Req35Batch17Amount500
	signed long int stepLocal_24 = last_1_var_1_99;
	if (stepLocal_24 >= last_1_var_1_88) {
		var_1_88 = (min (var_1_61 , (var_1_48 - last_1_var_1_96)));
	}


	// From: Req29Batch17Amount500
	if (var_1_8) {
		var_1_77 = (var_1_44 - var_1_57);
	} else {
		if ((- (var_1_71 / var_1_41)) <= (var_1_14 - var_1_20)) {
			var_1_77 = ((var_1_88 + var_1_78) + var_1_46);
		}
	}


	// From: Req16Batch17Amount500
	if (var_1_10) {
		if (2.5f > (min ((var_1_40 - var_1_42) , var_1_39))) {
			var_1_51 = (min (var_1_44 , var_1_45));
		} else {
			var_1_51 = (min ((var_1_46 + (var_1_52 - var_1_77)) , (abs (var_1_45))));
		}
	}


	// From: Req6Batch17Amount500
	signed long int stepLocal_4 = -50;
	signed long int stepLocal_3 = -1 / var_1_25;
	if (var_1_19 == stepLocal_3) {
		if (last_1_var_1_99 > stepLocal_4) {
			var_1_24 = (((var_1_26 - var_1_27) - var_1_28) + -256);
		}
	} else {
		var_1_24 = (abs (var_1_27 + var_1_28));
	}


	// From: Req12Batch17Amount500
	if ((var_1_14 - var_1_20) <= ((var_1_39 - var_1_40) - var_1_15)) {
		var_1_38 = (min (var_1_40 , var_1_36));
	} else {
		var_1_38 = (((var_1_41 - 255.8) - var_1_42) - var_1_20);
	}


	// From: Req13Batch17Amount500
	signed long int stepLocal_8 = var_1_18 % var_1_25;
	if (stepLocal_8 == ((var_1_31 | var_1_84) + var_1_107)) {
		var_1_43 = ((min (var_1_44 , var_1_45)) - var_1_46);
	}


	// From: Req20Batch17Amount500
	var_1_59 = (var_1_54 + var_1_55);


	// From: Req25Batch17Amount500
	if (! var_1_10) {
		var_1_69 = (var_1_37 + var_1_36);
	} else {
		if (var_1_20 <= (max (var_1_41 , var_1_12))) {
			var_1_69 = (min (var_1_36 , var_1_20));
		} else {
			var_1_69 = var_1_42;
		}
	}


	// From: Req26Batch17Amount500
	var_1_70 = ((var_1_42 - var_1_71) + (var_1_72 - var_1_73));


	// From: Req31Batch17Amount500
	if (var_1_8) {
		var_1_80 = (abs (25));
	} else {
		var_1_80 = (var_1_45 - var_1_46);
	}


	// From: Req39Batch17Amount500
	if (var_1_68) {
		var_1_96 = var_1_93;
	} else {
		var_1_96 = var_1_44;
	}


	// From: Req40Batch17Amount500
	if (var_1_106) {
		var_1_97 = var_1_71;
	} else {
		var_1_97 = var_1_15;
	}


	// From: Req43Batch17Amount500
	var_1_100 = var_1_62;


	// From: Req44Batch17Amount500
	var_1_101 = var_1_62;


	// From: Req46Batch17Amount500
	if (var_1_8) {
		var_1_103 = var_1_76;
	}


	// From: Req47Batch17Amount500
	if (var_1_23) {
		var_1_104 = var_1_13;
	}


	// From: Req48Batch17Amount500
	var_1_105 = 16u;


	// From: Req51Batch17Amount500
	var_1_108 = (var_1_44 + var_1_109);


	// From: Req52Batch17Amount500
	signed long int stepLocal_30 = var_1_54 << var_1_88;
	if (stepLocal_30 == var_1_84) {
		var_1_110 = var_1_76;
	} else {
		var_1_110 = ((min ((var_1_61 - var_1_62) , var_1_45)) - var_1_54);
	}


	// From: Req21Batch17Amount500
	if (((var_1_91 ^ var_1_45) * (var_1_25 + -128)) >= var_1_88) {
		if (var_1_10) {
			var_1_60 = (min ((var_1_44 - var_1_55) , var_1_46));
		} else {
			var_1_60 = ((min (128 , (var_1_61 - var_1_62))) - var_1_55);
		}
	} else {
		if (var_1_14 > (var_1_33 / (max (0.5 , var_1_39)))) {
			var_1_60 = (max (((min (var_1_62 , var_1_55)) + var_1_46) , var_1_45));
		}
	}


	// From: Req23Batch17Amount500
	signed long int stepLocal_13 = var_1_27 + var_1_45;
	signed short int stepLocal_12 = var_1_57;
	if (stepLocal_12 != ((var_1_19 / var_1_25) * var_1_24)) {
		if (stepLocal_13 >= (var_1_102 / var_1_25)) {
			var_1_65 = var_1_10;
		}
	} else {
		var_1_65 = (var_1_21 && var_1_8);
	}


	// From: Req9Batch17Amount500
	signed long int stepLocal_5 = var_1_25;
	if (((var_1_19 + var_1_102) + (var_1_26 + var_1_88)) == stepLocal_5) {
		var_1_32 = (max (var_1_28 , var_1_19));
	} else {
		var_1_32 = (abs (var_1_27));
	}


	// From: Req18Batch17Amount500
	unsigned char stepLocal_10 = var_1_106;
	if ((var_1_84 != var_1_46) || stepLocal_10) {
		var_1_56 = (var_1_96 - (var_1_57 - var_1_45));
	} else {
		var_1_56 = var_1_88;
	}


	// From: Req27Batch17Amount500
	unsigned char stepLocal_15 = var_1_39 < var_1_15;
	unsigned long int stepLocal_14 = (min (var_1_84 , var_1_54)) & (abs (var_1_91));
	if (var_1_1 && stepLocal_15) {
		var_1_74 = ((min ((abs (10)) , (max (var_1_52 , var_1_61)))) + var_1_99);
	} else {
		if (var_1_52 == stepLocal_14) {
			var_1_74 = ((min (var_1_52 , (var_1_57 - var_1_45))) + var_1_62);
		} else {
			var_1_74 = (min (var_1_62 , (var_1_54 + (max (var_1_99 , last_1_var_1_74)))));
		}
	}


	// From: Req24Batch17Amount500
	if (var_1_1 || ((- var_1_57) > var_1_105)) {
		var_1_67 = (var_1_44 + var_1_62);
	} else {
		var_1_67 = (var_1_55 - last_1_var_1_67);
	}


	// From: Req17Batch17Amount500
	unsigned long int stepLocal_9 = (var_1_88 * var_1_105) + (var_1_88 - 25);
	if (var_1_24 < stepLocal_9) {
		var_1_53 = ((64 + var_1_54) - (max ((max (var_1_46 , 50)) , var_1_55)));
	}


	// From: Req19Batch17Amount500
	unsigned long int stepLocal_11 = 4u;
	if (stepLocal_11 <= var_1_25) {
		var_1_58 = (last_1_var_1_58 + (32 - var_1_96));
	}


	// From: Req38Batch17Amount500
	unsigned char stepLocal_29 = var_1_45;
	unsigned char stepLocal_28 = (abs (var_1_84)) > var_1_93;
	unsigned char stepLocal_27 = var_1_54;
	if (var_1_96 == stepLocal_27) {
		if (var_1_64 && stepLocal_28) {
			if (stepLocal_29 < var_1_44) {
				var_1_95 = var_1_76;
			} else {
				var_1_95 = var_1_61;
			}
		} else {
			var_1_95 = 50;
		}
	}


	// From: Req34Batch17Amount500
	unsigned long int stepLocal_23 = var_1_84;
	signed long int stepLocal_22 = var_1_17 / var_1_25;
	signed long int stepLocal_21 = - var_1_107;
	unsigned short int stepLocal_20 = var_1_107;
	if ((var_1_57 + var_1_91) > stepLocal_22) {
		if ((var_1_33 / var_1_39) >= (var_1_42 * var_1_83)) {
			var_1_85 = ((var_1_91 + var_1_61) + var_1_44);
		}
	} else {
		if (var_1_24 >= stepLocal_20) {
			if (var_1_52 < stepLocal_23) {
				var_1_85 = (var_1_52 + (var_1_55 + (abs (var_1_91))));
			} else {
				if (stepLocal_21 <= var_1_51) {
					if (! (var_1_72 >= var_1_73)) {
						var_1_85 = (max (var_1_52 , 1));
					} else {
						var_1_85 = ((min (var_1_86 , var_1_87)) - var_1_58);
					}
				}
			}
		} else {
			var_1_85 = var_1_55;
		}
	}


	// From: Req11Batch17Amount500
	if ((var_1_14 + var_1_13) == (- var_1_15)) {
		if (var_1_85 > var_1_24) {
			if (-4 < var_1_26) {
				var_1_34 = var_1_20;
			} else {
				var_1_34 = (max (var_1_13 , (var_1_36 + var_1_37)));
			}
		}
	}


	// From: Req14Batch17Amount500
	if (var_1_12 < var_1_13) {
		var_1_47 = (var_1_18 + var_1_26);
	} else {
		if ((min ((min (var_1_18 , var_1_27)) , 2)) >= var_1_105) {
			var_1_47 = ((var_1_48 - var_1_46) - var_1_58);
		} else {
			var_1_47 = (var_1_49 + var_1_27);
		}
	}


	// From: Req8Batch17Amount500
	if (var_1_47 < (var_1_18 / var_1_25)) {
		var_1_30 = var_1_31;
	} else {
		var_1_30 = -8;
	}


	// From: Req22Batch17Amount500
	if ((min (var_1_61 , var_1_67)) <= 16) {
		if ((5 > var_1_62) && var_1_65) {
			if ((var_1_54 < var_1_28) || var_1_8) {
				var_1_63 = 0;
			} else {
				var_1_63 = (((var_1_60 % var_1_57) <= var_1_28) && var_1_8);
			}
		} else {
			if (var_1_12 <= (- var_1_12)) {
				var_1_63 = (var_1_8 && var_1_23);
			} else {
				if (var_1_57 >= (var_1_31 * var_1_26)) {
					if (! (var_1_47 == var_1_62)) {
						var_1_63 = (! 0);
					} else {
						var_1_63 = (! (! var_1_8));
					}
				} else {
					var_1_63 = (var_1_22 && ((var_1_23 || var_1_8) || var_1_64));
				}
			}
		}
	} else {
		var_1_63 = var_1_23;
	}


	// From: Req7Batch17Amount500
	if ((var_1_56 >= var_1_27) || (var_1_25 > var_1_47)) {
		if (127.1 == (var_1_20 + var_1_15)) {
			if (var_1_102 < (min (var_1_19 , var_1_47))) {
				var_1_29 = (((var_1_15 != var_1_13) || var_1_9) || var_1_22);
			} else {
				var_1_29 = var_1_8;
			}
		} else {
			var_1_29 = var_1_8;
		}
	}


	// From: Req4Batch17Amount500
	signed long int stepLocal_2 = var_1_17 - (var_1_18 + var_1_19);
	if ((var_1_30 + var_1_108) != stepLocal_2) {
		var_1_16 = (abs (var_1_20 - var_1_15));
	} else {
		var_1_16 = var_1_14;
	}


	// From: Req36Batch17Amount500
	unsigned char stepLocal_25 = var_1_63;
	if (var_1_29) {
		var_1_89 = (max (var_1_57 , var_1_44));
	} else {
		if ((var_1_33 >= (var_1_42 + var_1_37)) && stepLocal_25) {
			var_1_89 = (var_1_48 - (max (var_1_84 , var_1_45)));
		} else {
			var_1_89 = (var_1_90 + (max (var_1_61 , var_1_46)));
		}
	}


	// From: Req41Batch17Amount500
	if (var_1_63) {
		var_1_98 = var_1_42;
	} else {
		var_1_98 = 99.625;
	}


	// From: Req30Batch17Amount500
	if (var_1_60 == (var_1_75 | var_1_24)) {
		if (last_1_var_1_79) {
			var_1_79 = (var_1_22 && (var_1_11 || (var_1_68 && var_1_10)));
		} else {
			var_1_79 = var_1_68;
		}
	} else {
		if (256.6f >= (var_1_40 * var_1_98)) {
			if (var_1_12 > var_1_14) {
				var_1_79 = ((2 < var_1_48) || ((! var_1_64) && (! var_1_8)));
			}
		} else {
			var_1_79 = ((var_1_22 && (! var_1_64)) && var_1_11);
		}
	}


	// From: Req15Batch17Amount500
	if ((var_1_98 * 1.7f) > (- var_1_70)) {
		var_1_50 = (var_1_77 + (var_1_45 - var_1_80));
	}


	// From: Req32Batch17Amount500
	unsigned char stepLocal_19 = var_1_110;
	signed short int stepLocal_18 = var_1_67;
	if (2 > stepLocal_18) {
		if ((32 << var_1_50) <= stepLocal_19) {
			var_1_81 = (16.8f - (var_1_41 - (max (var_1_72 , var_1_71))));
		} else {
			var_1_81 = (max (((var_1_13 + var_1_82) + var_1_36) , (var_1_83 + (var_1_73 - var_1_42))));
		}
	} else {
		var_1_81 = (max ((min (var_1_14 , (var_1_37 + var_1_42))) , var_1_41));
	}
}



void updateVariables(void) {
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -230584.3009213691400e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1073741824);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 1);
	assume_abort_if_not(var_1_22 <= 1);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= -2147483648);
	assume_abort_if_not(var_1_25 <= 2147483647);
	assume_abort_if_not(var_1_25 != 0);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= 536870911);
	assume_abort_if_not(var_1_26 <= 1073741823);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 536870911);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 1073741823);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -461168.6018427383000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -461168.6018427383000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 4611686.018427388000e+12F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427388000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 6917529.027641074000e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 127);
	assume_abort_if_not(var_1_44 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 127);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 127);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 3221225470);
	assume_abort_if_not(var_1_48 <= 4294967294);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_52 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_52 >= 16383);
	assume_abort_if_not(var_1_52 <= 32767);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 64);
	assume_abort_if_not(var_1_54 <= 127);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 127);
	var_1_57 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_57 >= 16383);
	assume_abort_if_not(var_1_57 <= 32766);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 190);
	assume_abort_if_not(var_1_61 <= 254);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 0);
	assume_abort_if_not(var_1_62 <= 63);
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 0);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 1);
	assume_abort_if_not(var_1_68 <= 1);
	var_1_71 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_71 >= 0.0F && var_1_71 <= -1.0e-20F) || (var_1_71 <= 4611686.018427383000e+12F && var_1_71 >= 1.0e-20F ));
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 0.0F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 4611686.018427383000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427383000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 126);
	var_1_78 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_78 >= -8191);
	assume_abort_if_not(var_1_78 <= 8191);
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= -230584.3009213691400e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 2305843.009213691400e+12F && var_1_82 >= 1.0e-20F ));
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= -461168.6018427383000e+13F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427383000e+12F && var_1_83 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_86 >= 32767);
	assume_abort_if_not(var_1_86 <= 65534);
	var_1_87 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_87 >= 32767);
	assume_abort_if_not(var_1_87 <= 65534);
	var_1_90 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 2147483647);
	var_1_93 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_93 >= 16383);
	assume_abort_if_not(var_1_93 <= 32766);
	var_1_94 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_94 >= 8191);
	assume_abort_if_not(var_1_94 <= 16383);
	var_1_109 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_109 >= -16383);
	assume_abort_if_not(var_1_109 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_32 = var_1_32;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_38 = var_1_38;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_85 = var_1_85;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_107 = var_1_107;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_107 | last_1_var_1_24) <= last_1_var_1_105) || ((min (last_1_var_1_91 , last_1_var_1_96)) > last_1_var_1_105)) ? (var_1_1 == ((unsigned char) ((! 1) && ((last_1_var_1_105 < last_1_var_1_24) && var_1_8)))) : (var_1_1 == ((unsigned char) 1))) && ((last_1_var_1_84 < last_1_var_1_85) ? (var_1_9 == ((unsigned char) ((var_1_8 || (last_1_var_1_9 || var_1_10)) && var_1_11))) : (var_1_9 == ((unsigned char) (! var_1_11))))) && ((last_1_var_1_59 == (100 * last_1_var_1_32)) ? (var_1_12 == ((double) (max ((0.875 + (var_1_13 + 64.4)) , 1.0000000000000005E15)))) : (var_1_12 == ((double) (max ((var_1_14 - var_1_15) , var_1_13)))))) && (((var_1_30 + var_1_108) != (var_1_17 - (var_1_18 + var_1_19))) ? (var_1_16 == ((float) (abs (var_1_20 - var_1_15)))) : (var_1_16 == ((float) var_1_14)))) && (var_1_8 ? (var_1_21 == ((unsigned char) ((var_1_11 && var_1_10) && var_1_22))) : (var_1_21 == ((unsigned char) (var_1_1 || ((! var_1_23) && var_1_22)))))) && ((var_1_19 == (-1 / var_1_25)) ? ((last_1_var_1_99 > -50) ? (var_1_24 == ((signed long int) (((var_1_26 - var_1_27) - var_1_28) + -256))) : 1) : (var_1_24 == ((signed long int) (abs (var_1_27 + var_1_28)))))) && (((var_1_56 >= var_1_27) || (var_1_25 > var_1_47)) ? ((127.1 == (var_1_20 + var_1_15)) ? ((var_1_102 < (min (var_1_19 , var_1_47))) ? (var_1_29 == ((unsigned char) (((var_1_15 != var_1_13) || var_1_9) || var_1_22))) : (var_1_29 == ((unsigned char) var_1_8))) : (var_1_29 == ((unsigned char) var_1_8))) : 1)) && ((var_1_47 < (var_1_18 / var_1_25)) ? (var_1_30 == ((signed char) var_1_31)) : (var_1_30 == ((signed char) -8)))) && ((((var_1_19 + var_1_102) + (var_1_26 + var_1_88)) == var_1_25) ? (var_1_32 == ((unsigned long int) (max (var_1_28 , var_1_19)))) : (var_1_32 == ((unsigned long int) (abs (var_1_27)))))) && ((var_1_31 <= -128) ? ((! (last_1_var_1_98 > var_1_14)) ? (var_1_33 == ((double) var_1_20)) : ((((var_1_26 & last_1_var_1_58) + var_1_18) < -256) ? (var_1_33 == ((double) var_1_14)) : (var_1_33 == ((double) var_1_20)))) : (var_1_33 == ((double) var_1_14)))) && (((var_1_14 + var_1_13) == (- var_1_15)) ? ((var_1_85 > var_1_24) ? ((-4 < var_1_26) ? (var_1_34 == ((double) var_1_20)) : (var_1_34 == ((double) (max (var_1_13 , (var_1_36 + var_1_37)))))) : 1) : 1)) && (((var_1_14 - var_1_20) <= ((var_1_39 - var_1_40) - var_1_15)) ? (var_1_38 == ((double) (min (var_1_40 , var_1_36)))) : (var_1_38 == ((double) (((var_1_41 - 255.8) - var_1_42) - var_1_20))))) && (((var_1_18 % var_1_25) == ((var_1_31 | var_1_84) + var_1_107)) ? (var_1_43 == ((unsigned char) ((min (var_1_44 , var_1_45)) - var_1_46))) : 1)) && ((var_1_12 < var_1_13) ? (var_1_47 == ((unsigned long int) (var_1_18 + var_1_26))) : (((min ((min (var_1_18 , var_1_27)) , 2)) >= var_1_105) ? (var_1_47 == ((unsigned long int) ((var_1_48 - var_1_46) - var_1_58))) : (var_1_47 == ((unsigned long int) (var_1_49 + var_1_27)))))) && (((var_1_98 * 1.7f) > (- var_1_70)) ? (var_1_50 == ((signed short int) (var_1_77 + (var_1_45 - var_1_80)))) : 1)) && (var_1_10 ? ((2.5f > (min ((var_1_40 - var_1_42) , var_1_39))) ? (var_1_51 == ((unsigned short int) (min (var_1_44 , var_1_45)))) : (var_1_51 == ((unsigned short int) (min ((var_1_46 + (var_1_52 - var_1_77)) , (abs (var_1_45))))))) : 1)) && ((var_1_24 < ((var_1_88 * var_1_105) + (var_1_88 - 25))) ? (var_1_53 == ((unsigned char) ((64 + var_1_54) - (max ((max (var_1_46 , 50)) , var_1_55))))) : 1)) && (((var_1_84 != var_1_46) || var_1_106) ? (var_1_56 == ((signed short int) (var_1_96 - (var_1_57 - var_1_45)))) : (var_1_56 == ((signed short int) var_1_88)))) && ((4u <= var_1_25) ? (var_1_58 == ((signed short int) (last_1_var_1_58 + (32 - var_1_96)))) : 1)) && (var_1_59 == ((unsigned char) (var_1_54 + var_1_55)))) && ((((var_1_91 ^ var_1_45) * (var_1_25 + -128)) >= var_1_88) ? (var_1_10 ? (var_1_60 == ((unsigned char) (min ((var_1_44 - var_1_55) , var_1_46)))) : (var_1_60 == ((unsigned char) ((min (128 , (var_1_61 - var_1_62))) - var_1_55)))) : ((var_1_14 > (var_1_33 / (max (0.5 , var_1_39)))) ? (var_1_60 == ((unsigned char) (max (((min (var_1_62 , var_1_55)) + var_1_46) , var_1_45)))) : 1))) && (((min (var_1_61 , var_1_67)) <= 16) ? (((5 > var_1_62) && var_1_65) ? (((var_1_54 < var_1_28) || var_1_8) ? (var_1_63 == ((unsigned char) 0)) : (var_1_63 == ((unsigned char) (((var_1_60 % var_1_57) <= var_1_28) && var_1_8)))) : ((var_1_12 <= (- var_1_12)) ? (var_1_63 == ((unsigned char) (var_1_8 && var_1_23))) : ((var_1_57 >= (var_1_31 * var_1_26)) ? ((! (var_1_47 == var_1_62)) ? (var_1_63 == ((unsigned char) (! 0))) : (var_1_63 == ((unsigned char) (! (! var_1_8))))) : (var_1_63 == ((unsigned char) (var_1_22 && ((var_1_23 || var_1_8) || var_1_64))))))) : (var_1_63 == ((unsigned char) var_1_23)))) && ((var_1_57 != ((var_1_19 / var_1_25) * var_1_24)) ? (((var_1_27 + var_1_45) >= (var_1_102 / var_1_25)) ? (var_1_65 == ((unsigned char) var_1_10)) : 1) : (var_1_65 == ((unsigned char) (var_1_21 && var_1_8))))) && ((var_1_1 || ((- var_1_57) > var_1_105)) ? (var_1_67 == ((signed short int) (var_1_44 + var_1_62))) : (var_1_67 == ((signed short int) (var_1_55 - last_1_var_1_67))))) && ((! var_1_10) ? (var_1_69 == ((double) (var_1_37 + var_1_36))) : ((var_1_20 <= (max (var_1_41 , var_1_12))) ? (var_1_69 == ((double) (min (var_1_36 , var_1_20)))) : (var_1_69 == ((double) var_1_42))))) && (var_1_70 == ((double) ((var_1_42 - var_1_71) + (var_1_72 - var_1_73))))) && ((var_1_1 && (var_1_39 < var_1_15)) ? (var_1_74 == ((unsigned short int) ((min ((abs (10)) , (max (var_1_52 , var_1_61)))) + var_1_99))) : ((var_1_52 == ((min (var_1_84 , var_1_54)) & (abs (var_1_91)))) ? (var_1_74 == ((unsigned short int) ((min (var_1_52 , (var_1_57 - var_1_45))) + var_1_62))) : (var_1_74 == ((unsigned short int) (min (var_1_62 , (var_1_54 + (max (var_1_99 , last_1_var_1_74)))))))))) && (((16.8 != (5.5 + 1.1)) || var_1_9) ? ((last_1_var_1_75 > var_1_17) ? (var_1_75 == ((signed char) (max ((var_1_62 - var_1_76) , var_1_31)))) : (var_1_75 == ((signed char) (abs (min (10 , var_1_61)))))) : (var_1_75 == ((signed char) 0)))) && (var_1_8 ? (var_1_77 == ((signed short int) (var_1_44 - var_1_57))) : (((- (var_1_71 / var_1_41)) <= (var_1_14 - var_1_20)) ? (var_1_77 == ((signed short int) ((var_1_88 + var_1_78) + var_1_46))) : 1))) && ((var_1_60 == (var_1_75 | var_1_24)) ? (last_1_var_1_79 ? (var_1_79 == ((unsigned char) (var_1_22 && (var_1_11 || (var_1_68 && var_1_10))))) : (var_1_79 == ((unsigned char) var_1_68))) : ((256.6f >= (var_1_40 * var_1_98)) ? ((var_1_12 > var_1_14) ? (var_1_79 == ((unsigned char) ((2 < var_1_48) || ((! var_1_64) && (! var_1_8))))) : 1) : (var_1_79 == ((unsigned char) ((var_1_22 && (! var_1_64)) && var_1_11)))))) && (var_1_8 ? (var_1_80 == ((unsigned char) (abs (25)))) : (var_1_80 == ((unsigned char) (var_1_45 - var_1_46))))) && ((2 > var_1_67) ? (((32 << var_1_50) <= var_1_110) ? (var_1_81 == ((float) (16.8f - (var_1_41 - (max (var_1_72 , var_1_71)))))) : (var_1_81 == ((float) (max (((var_1_13 + var_1_82) + var_1_36) , (var_1_83 + (var_1_73 - var_1_42))))))) : (var_1_81 == ((float) (max ((min (var_1_14 , (var_1_37 + var_1_42))) , var_1_41)))))) && ((last_1_var_1_21 || (last_1_var_1_65 || var_1_68)) ? ((last_1_var_1_38 < (var_1_40 / var_1_39)) ? (var_1_84 == ((unsigned long int) (max (var_1_61 , var_1_19)))) : 1) : (var_1_84 == ((unsigned long int) (min ((min (var_1_27 , var_1_44)) , (last_1_var_1_74 + var_1_76))))))) && (((var_1_57 + var_1_91) > (var_1_17 / var_1_25)) ? (((var_1_33 / var_1_39) >= (var_1_42 * var_1_83)) ? (var_1_85 == ((unsigned short int) ((var_1_91 + var_1_61) + var_1_44))) : 1) : ((var_1_24 >= var_1_107) ? ((var_1_52 < var_1_84) ? (var_1_85 == ((unsigned short int) (var_1_52 + (var_1_55 + (abs (var_1_91)))))) : (((- var_1_107) <= var_1_51) ? ((! (var_1_72 >= var_1_73)) ? (var_1_85 == ((unsigned short int) (max (var_1_52 , 1)))) : (var_1_85 == ((unsigned short int) ((min (var_1_86 , var_1_87)) - var_1_58)))) : 1)) : (var_1_85 == ((unsigned short int) var_1_55))))) && ((last_1_var_1_99 >= last_1_var_1_88) ? (var_1_88 == ((unsigned long int) (min (var_1_61 , (var_1_48 - last_1_var_1_96))))) : 1)) && (var_1_29 ? (var_1_89 == ((unsigned long int) (max (var_1_57 , var_1_44)))) : (((var_1_33 >= (var_1_42 + var_1_37)) && var_1_63) ? (var_1_89 == ((unsigned long int) (var_1_48 - (max (var_1_84 , var_1_45))))) : (var_1_89 == ((unsigned long int) (var_1_90 + (max (var_1_61 , var_1_46)))))))) && ((((last_1_var_1_67 + last_1_var_1_77) <= -100) || var_1_23) ? (var_1_91 == ((signed short int) var_1_45)) : (((- last_1_var_1_34) >= 10.5) ? (last_1_var_1_29 ? (var_1_91 == ((signed short int) last_1_var_1_107)) : (var_1_91 == ((signed short int) ((min ((last_1_var_1_77 + last_1_var_1_105) , (var_1_57 - 8))) - (var_1_93 - (var_1_94 - last_1_var_1_53)))))) : (var_1_91 == ((signed short int) (-256 + var_1_62)))))) && ((var_1_96 == var_1_54) ? ((var_1_64 && ((abs (var_1_84)) > var_1_93)) ? ((var_1_45 < var_1_44) ? (var_1_95 == ((signed char) var_1_76)) : (var_1_95 == ((signed char) var_1_61))) : (var_1_95 == ((signed char) 50))) : 1)) && (var_1_68 ? (var_1_96 == ((unsigned short int) var_1_93)) : (var_1_96 == ((unsigned short int) var_1_44)))) && (var_1_106 ? (var_1_97 == ((double) var_1_71)) : (var_1_97 == ((double) var_1_15)))) && (var_1_63 ? (var_1_98 == ((double) var_1_42)) : (var_1_98 == ((double) 99.625)))) && (var_1_1 ? (var_1_99 == ((unsigned short int) 25)) : (var_1_99 == ((unsigned short int) 4)))) && (var_1_100 == ((signed short int) var_1_62))) && (var_1_101 == ((signed char) var_1_62))) && (last_1_var_1_79 ? (var_1_102 == ((signed long int) var_1_26)) : (var_1_102 == ((signed long int) var_1_31)))) && (var_1_8 ? (var_1_103 == ((signed char) var_1_76)) : 1)) && (var_1_23 ? (var_1_104 == ((float) var_1_13)) : 1)) && (var_1_105 == ((unsigned long int) 16u))) && (var_1_9 ? (var_1_106 == ((unsigned char) var_1_22)) : (var_1_106 == ((unsigned char) var_1_23)))) && (var_1_21 ? (var_1_107 == ((unsigned short int) var_1_94)) : (var_1_107 == ((unsigned short int) var_1_54)))) && (var_1_108 == ((signed short int) (var_1_44 + var_1_109)))) && (((var_1_54 << var_1_88) == var_1_84) ? (var_1_110 == ((unsigned char) var_1_76)) : (var_1_110 == ((unsigned char) ((min ((var_1_61 - var_1_62) , var_1_45)) - var_1_54))))
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
