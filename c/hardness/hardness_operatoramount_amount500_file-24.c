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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch24Amount500.c", 13, "reach_error"); }
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
float var_1_1 = 0.8;
unsigned char var_1_2 = 0;
float var_1_5 = 10000000000.75;
float var_1_6 = 50.5;
float var_1_7 = 3.875;
unsigned long int var_1_8 = 256;
unsigned long int var_1_9 = 4;
unsigned long int var_1_10 = 0;
unsigned long int var_1_11 = 4;
unsigned long int var_1_12 = 64;
float var_1_13 = 199.5;
float var_1_15 = -0.554;
unsigned char var_1_16 = 25;
unsigned char var_1_17 = 5;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 1;
signed short int var_1_20 = -4;
float var_1_21 = 256.8;
float var_1_22 = 50.8;
float var_1_24 = 127.3;
float var_1_25 = 64.375;
float var_1_26 = 5.6;
float var_1_27 = 255.125;
float var_1_28 = 49.2;
unsigned char var_1_29 = 100;
unsigned char var_1_30 = 128;
unsigned char var_1_31 = 4;
unsigned long int var_1_32 = 2845742848;
unsigned long int var_1_33 = 1365702656;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 64;
unsigned long int var_1_36 = 10000;
unsigned long int var_1_37 = 3310839879;
float var_1_38 = 8.2;
float var_1_39 = 10.6;
float var_1_40 = 2.7;
float var_1_41 = 0.0;
float var_1_42 = 3.5;
unsigned char var_1_43 = 32;
unsigned char var_1_44 = 100;
unsigned char var_1_45 = 100;
float var_1_46 = 9999999999.5;
signed short int var_1_48 = 1;
double var_1_49 = 4.8;
double var_1_50 = 4.875;
unsigned char var_1_51 = 25;
float var_1_52 = 0.75;
signed short int var_1_53 = 1;
double var_1_54 = 256.5;
double var_1_55 = 63.75;
unsigned long int var_1_56 = 10000000;
unsigned short int var_1_57 = 8;
unsigned short int var_1_58 = 31946;
signed long int var_1_59 = -2;
signed long int var_1_60 = 64;
signed long int var_1_61 = 8;
float var_1_62 = 499.5;
double var_1_63 = 1.25;
unsigned char var_1_64 = 4;
unsigned short int var_1_65 = 62864;
unsigned char var_1_66 = 0;
unsigned char var_1_67 = 0;
unsigned char var_1_68 = 100;
unsigned char var_1_69 = 128;
unsigned short int var_1_70 = 50;
signed char var_1_71 = -8;
signed char var_1_72 = 2;
unsigned char var_1_73 = 0;
unsigned char var_1_74 = 0;
unsigned char var_1_75 = 0;
unsigned long int var_1_76 = 5;
unsigned long int var_1_77 = 256;
signed long int var_1_78 = -16;
signed long int var_1_79 = 1456843619;
signed long int var_1_80 = 1000000000;
signed long int var_1_81 = 1000000000;
float var_1_82 = 16.7;
float var_1_83 = 0.0;
float var_1_84 = 0.6;
unsigned short int var_1_85 = 32;
unsigned char var_1_86 = 64;
unsigned short int var_1_87 = 28152;
signed char var_1_88 = 5;
float var_1_89 = 255.6;
signed short int var_1_90 = -32;
signed char var_1_91 = 0;
unsigned char var_1_92 = 1;
unsigned short int var_1_93 = 256;
unsigned short int var_1_94 = 62723;
unsigned long int var_1_95 = 1;
unsigned long int var_1_96 = 50;
unsigned long int var_1_97 = 500;
unsigned char var_1_98 = 1;
double var_1_99 = 31.625;
unsigned short int var_1_100 = 100;
float var_1_101 = 31.5;
unsigned short int var_1_102 = 0;
signed short int var_1_103 = -50;
float var_1_104 = 49.5;
unsigned char var_1_105 = 1;
signed long int var_1_106 = 256;
double var_1_107 = 1.2;
unsigned long int var_1_108 = 5;
unsigned long int var_1_109 = 25;
signed char var_1_110 = 16;
signed long int var_1_111 = 100;
signed char var_1_112 = -5;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_16 = 25;
signed short int last_1_var_1_20 = -4;
unsigned char last_1_var_1_29 = 100;
unsigned char last_1_var_1_31 = 4;
float last_1_var_1_46 = 9999999999.5;
double last_1_var_1_49 = 4.8;
unsigned char last_1_var_1_51 = 25;
unsigned short int last_1_var_1_57 = 8;
signed long int last_1_var_1_61 = 8;
unsigned long int last_1_var_1_76 = 5;
signed long int last_1_var_1_78 = -16;
float last_1_var_1_82 = 16.7;
signed short int last_1_var_1_90 = -32;
unsigned short int last_1_var_1_93 = 256;
unsigned long int last_1_var_1_95 = 1;
unsigned long int last_1_var_1_97 = 500;
unsigned char last_1_var_1_98 = 1;
unsigned short int last_1_var_1_100 = 100;
signed short int last_1_var_1_103 = -50;
signed long int last_1_var_1_106 = 256;
unsigned long int last_1_var_1_109 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch24Amount500
	signed long int stepLocal_14 = var_1_30 - var_1_44;
	if (last_1_var_1_29 > stepLocal_14) {
		var_1_56 = (var_1_37 - (var_1_33 - 5u));
	} else {
		var_1_56 = ((min (1u , var_1_9)) + 128u);
	}


	// From: Req39Batch24Amount500
	if (var_1_92) {
		var_1_95 = (min ((min (last_1_var_1_106 , var_1_80)) , var_1_96));
	} else {
		if (var_1_34 || var_1_67) {
			if ((last_1_var_1_106 <= (last_1_var_1_78 * var_1_65)) && var_1_74) {
				if (var_1_2) {
					var_1_95 = (abs (last_1_var_1_98));
				} else {
					if (var_1_86 < (max (last_1_var_1_51 , 5))) {
						var_1_95 = (min (((abs (last_1_var_1_78)) + last_1_var_1_95) , var_1_87));
					} else {
						var_1_95 = (last_1_var_1_109 + var_1_17);
					}
				}
			}
		} else {
			var_1_95 = (var_1_37 - last_1_var_1_95);
		}
	}


	// From: Req46Batch24Amount500
	var_1_103 = last_1_var_1_97;


	// From: Req30Batch24Amount500
	var_1_77 = (var_1_44 + var_1_103);


	// From: Req31Batch24Amount500
	signed long int stepLocal_23 = last_1_var_1_16;
	if (stepLocal_23 < var_1_19) {
		if (last_1_var_1_82 == (var_1_24 * (var_1_25 * last_1_var_1_49))) {
			var_1_78 = ((var_1_79 - last_1_var_1_95) - ((var_1_80 + var_1_81) - 100000000));
		} else {
			var_1_78 = (var_1_18 - (last_1_var_1_31 + var_1_58));
		}
	} else {
		var_1_78 = (min (var_1_19 , last_1_var_1_103));
	}


	// From: Req28Batch24Amount500
	if (last_1_var_1_109 < var_1_9) {
		var_1_73 = (! (var_1_74 || var_1_75));
	} else {
		var_1_73 = (var_1_74 || ((var_1_18 > last_1_var_1_57) && var_1_75));
	}


	// From: Req51Batch24Amount500
	if (var_1_73) {
		var_1_108 = var_1_18;
	} else {
		var_1_108 = var_1_48;
	}


	// From: Req6Batch24Amount500
	var_1_21 = (var_1_15 + var_1_7);


	// From: Req11Batch24Amount500
	unsigned long int stepLocal_8 = var_1_32 * 2u;
	if (var_1_95 <= stepLocal_8) {
		var_1_38 = ((var_1_39 + var_1_40) + var_1_25);
	} else {
		var_1_38 = ((var_1_41 - var_1_27) - ((var_1_42 + 2.2f) + var_1_28));
	}


	// From: Req15Batch24Amount500
	if (((- var_1_28) * var_1_39) >= var_1_7) {
		var_1_50 = (min (var_1_26 , (var_1_27 + var_1_25)));
	}


	// From: Req20Batch24Amount500
	var_1_59 = (var_1_60 + -5);


	// From: Req26Batch24Amount500
	unsigned char stepLocal_18 = var_1_34 || (var_1_67 || var_1_2);
	if (stepLocal_18 && (var_1_15 < var_1_38)) {
		var_1_70 = 50;
	} else {
		if (var_1_42 < 128.6f) {
			var_1_70 = (max (var_1_30 , var_1_58));
		}
	}


	// From: Req36Batch24Amount500
	if (var_1_75) {
		var_1_90 = (last_1_var_1_90 - var_1_86);
	}


	// From: Req41Batch24Amount500
	if (var_1_73) {
		var_1_98 = var_1_18;
	} else {
		var_1_98 = var_1_44;
	}


	// From: Req42Batch24Amount500
	var_1_99 = var_1_55;


	// From: Req43Batch24Amount500
	if (var_1_74) {
		var_1_100 = last_1_var_1_100;
	}


	// From: Req44Batch24Amount500
	if (var_1_74) {
		var_1_101 = var_1_84;
	} else {
		var_1_101 = 255.2f;
	}


	// From: Req45Batch24Amount500
	var_1_102 = var_1_86;


	// From: Req47Batch24Amount500
	var_1_104 = var_1_39;


	// From: Req48Batch24Amount500
	var_1_105 = var_1_75;


	// From: Req49Batch24Amount500
	var_1_106 = var_1_35;


	// From: Req50Batch24Amount500
	var_1_107 = var_1_84;


	// From: Req52Batch24Amount500
	var_1_109 = var_1_17;


	// From: Req53Batch24Amount500
	if (var_1_74) {
		var_1_110 = var_1_18;
	}


	// From: Req54Batch24Amount500
	var_1_111 = -16;


	// From: Req25Batch24Amount500
	if (((var_1_32 - var_1_19) != var_1_59) && var_1_73) {
		if (var_1_105 && (var_1_56 < var_1_37)) {
			var_1_66 = var_1_18;
		} else {
			var_1_66 = var_1_68;
		}
	} else {
		var_1_66 = (min (((max (var_1_69 , var_1_30)) - 64) , (max (var_1_44 , (var_1_35 + var_1_48)))));
	}


	// From: Req9Batch24Amount500
	if (var_1_9 <= (var_1_32 - (var_1_33 - 32u))) {
		var_1_31 = (8 + (16 + var_1_18));
	} else {
		if (var_1_5 <= var_1_6) {
			if (var_1_105) {
				if ((var_1_32 - 25u) <= var_1_78) {
					var_1_31 = ((var_1_17 + 4) + (abs (32)));
				} else {
					var_1_31 = (var_1_30 - (var_1_35 - var_1_19));
				}
			}
		}
	}


	// From: Req7Batch24Amount500
	unsigned long int stepLocal_7 = (var_1_17 << var_1_10) / var_1_12;
	if (var_1_104 >= var_1_101) {
		if (var_1_73) {
			var_1_22 = ((min (var_1_15 , var_1_7)) + (max ((min (var_1_24 , 9.125f)) , var_1_25)));
		} else {
			var_1_22 = (max ((var_1_15 + var_1_7) , (max (0.4f , (var_1_5 - var_1_26)))));
		}
	} else {
		if ((- var_1_108) > stepLocal_7) {
			if ((- var_1_101) != var_1_25) {
				var_1_22 = (var_1_7 + (min (var_1_15 , (var_1_27 - var_1_28))));
			} else {
				var_1_22 = ((var_1_28 + var_1_27) - var_1_26);
			}
		}
	}


	// From: Req12Batch24Amount500
	if (var_1_73) {
		var_1_43 = (((var_1_44 + var_1_45) - var_1_18) - var_1_19);
	} else {
		if (var_1_105) {
			var_1_43 = (max ((var_1_35 + var_1_44) , var_1_17));
		}
	}


	// From: Req29Batch24Amount500
	unsigned long int stepLocal_22 = 50u;
	if ((var_1_65 + (last_1_var_1_76 | var_1_48)) > stepLocal_22) {
		var_1_76 = (min (var_1_58 , var_1_68));
	} else {
		var_1_76 = (min (var_1_48 , (max (var_1_43 , (var_1_18 + var_1_44)))));
	}


	// From: Req3Batch24Amount500
	unsigned long int stepLocal_4 = var_1_10;
	unsigned long int stepLocal_3 = var_1_76;
	if (stepLocal_3 >= (10u / var_1_12)) {
		if (stepLocal_4 < (min (var_1_77 , var_1_76))) {
			var_1_13 = var_1_7;
		} else {
			var_1_13 = (var_1_7 + var_1_15);
		}
	} else {
		var_1_13 = var_1_15;
	}


	// From: Req5Batch24Amount500
	unsigned long int stepLocal_6 = min (var_1_12 , var_1_10);
	if (stepLocal_6 < last_1_var_1_20) {
		if (var_1_105) {
			var_1_20 = var_1_19;
		}
	} else {
		var_1_20 = (min (var_1_18 , var_1_17));
	}


	// From: Req10Batch24Amount500
	if (var_1_9 <= var_1_12) {
		var_1_36 = ((max (var_1_37 , 3535779678u)) - (var_1_100 + var_1_35));
	}


	// From: Req13Batch24Amount500
	unsigned long int stepLocal_10 = var_1_37;
	signed long int stepLocal_9 = (var_1_70 >> var_1_48) / var_1_44;
	if ((var_1_5 * var_1_104) < (max (last_1_var_1_46 , var_1_24))) {
		if (stepLocal_9 < (abs (var_1_10))) {
			if (stepLocal_10 > var_1_19) {
				var_1_46 = (min ((abs (var_1_42)) , var_1_39));
			} else {
				var_1_46 = (var_1_25 + (var_1_40 + var_1_39));
			}
		} else {
			var_1_46 = var_1_25;
		}
	}


	// From: Req14Batch24Amount500
	unsigned char stepLocal_11 = var_1_105;
	if ((var_1_12 > var_1_33) || stepLocal_11) {
		var_1_49 = (min (var_1_5 , (max (16.4 , var_1_39))));
	}


	// From: Req21Batch24Amount500
	var_1_61 = (max ((last_1_var_1_61 + (var_1_48 + var_1_58)) , (var_1_18 + (abs (var_1_109)))));


	// From: Req32Batch24Amount500
	if (var_1_105) {
		var_1_82 = (var_1_42 - (var_1_41 - (var_1_83 - var_1_84)));
	}


	// From: Req34Batch24Amount500
	if (var_1_75 && var_1_105) {
		if (var_1_75 || (var_1_11 == 128u)) {
			var_1_88 = (var_1_72 + var_1_48);
		} else {
			var_1_88 = (var_1_53 - var_1_18);
		}
	}


	// From: Req35Batch24Amount500
	unsigned char stepLocal_29 = var_1_43;
	unsigned char stepLocal_28 = var_1_74;
	if (var_1_103 == stepLocal_29) {
		if (var_1_105 || stepLocal_28) {
			if (! var_1_73) {
				var_1_89 = (max (var_1_15 , ((min (var_1_40 , var_1_83)) + var_1_55)));
			} else {
				var_1_89 = (min (var_1_55 , (max (var_1_25 , var_1_83))));
			}
		} else {
			var_1_89 = (min ((min (var_1_40 , var_1_55)) , var_1_39));
		}
	} else {
		var_1_89 = (min ((var_1_27 + (var_1_83 - var_1_84)) , 255.75f));
	}


	// From: Req37Batch24Amount500
	unsigned char stepLocal_30 = var_1_105;
	if (stepLocal_30 && (var_1_28 < 99.5f)) {
		var_1_91 = var_1_53;
	} else {
		if (var_1_105) {
			var_1_91 = (var_1_18 - (min (var_1_19 , (abs (var_1_53)))));
		}
	}


	// From: Req55Batch24Amount500
	unsigned long int stepLocal_32 = var_1_95;
	if ((min (var_1_49 , var_1_55)) >= var_1_27) {
		if (stepLocal_32 == (var_1_95 / (min (var_1_44 , var_1_48)))) {
			var_1_112 = (var_1_48 + var_1_18);
		} else {
			var_1_112 = var_1_53;
		}
	} else {
		var_1_112 = var_1_72;
	}


	// From: Req2Batch24Amount500
	unsigned char stepLocal_2 = var_1_66;
	unsigned long int stepLocal_1 = var_1_11;
	if (var_1_5 >= var_1_6) {
		if (var_1_108 < stepLocal_2) {
			var_1_8 = (max ((var_1_66 + (max (var_1_108 , var_1_9))) , (var_1_10 + var_1_11)));
		} else {
			var_1_8 = (var_1_11 + var_1_9);
		}
	} else {
		if (stepLocal_1 > (var_1_66 / var_1_12)) {
			var_1_8 = var_1_108;
		} else {
			var_1_8 = (var_1_108 + (abs (var_1_10)));
		}
	}


	// From: Req8Batch24Amount500
	if (var_1_73) {
		if (var_1_10 >= (- (var_1_18 + var_1_17))) {
			if (var_1_9 == var_1_8) {
				var_1_29 = (var_1_30 - var_1_17);
			}
		}
	}


	// From: Req4Batch24Amount500
	unsigned long int stepLocal_5 = min (var_1_108 , var_1_76);
	if (stepLocal_5 > 8u) {
		var_1_16 = (10 + (var_1_17 + (var_1_18 - var_1_19)));
	}


	// From: Req17Batch24Amount500
	if (var_1_21 > (var_1_52 * var_1_82)) {
		var_1_54 = ((var_1_27 + 4.55) - ((min (var_1_28 , var_1_55)) + var_1_42));
	} else {
		var_1_54 = var_1_41;
	}


	// From: Req38Batch24Amount500
	unsigned long int stepLocal_31 = var_1_108;
	if (stepLocal_31 >= var_1_10) {
		var_1_93 = (var_1_94 - last_1_var_1_93);
	} else {
		var_1_93 = (var_1_94 - (var_1_44 + var_1_8));
	}


	// From: Req16Batch24Amount500
	signed long int stepLocal_13 = var_1_19 << var_1_33;
	signed long int stepLocal_12 = var_1_16 >> var_1_53;
	if (var_1_42 >= var_1_27) {
		var_1_51 = (var_1_17 + (var_1_44 - var_1_19));
	} else {
		if (stepLocal_13 <= var_1_10) {
			if (((min (var_1_26 , var_1_6)) - var_1_5) > (var_1_50 / (max (var_1_41 , var_1_52)))) {
				var_1_51 = (max (var_1_30 , var_1_35));
			} else {
				if (stepLocal_12 > (var_1_95 / (abs (var_1_35)))) {
					var_1_51 = (var_1_48 + var_1_53);
				} else {
					var_1_51 = (abs (var_1_19));
				}
			}
		} else {
			var_1_51 = (var_1_48 + (min (var_1_53 , (max (var_1_35 , var_1_18)))));
		}
	}


	// From: Req24Batch24Amount500
	if ((var_1_65 - (max (var_1_16 , var_1_30))) >= var_1_103) {
		var_1_64 = var_1_45;
	} else {
		var_1_64 = (min (var_1_45 , 10));
	}


	// From: Req1Batch24Amount500
	unsigned char stepLocal_0 = var_1_64;
	if (stepLocal_0 <= var_1_98) {
		var_1_1 = (var_1_5 - var_1_6);
	} else {
		var_1_1 = (10.5f + var_1_7);
	}


	// From: Req23Batch24Amount500
	unsigned long int stepLocal_17 = var_1_77 * var_1_108;
	if (stepLocal_17 < var_1_64) {
		var_1_63 = (abs (abs (var_1_25)));
	}


	// From: Req33Batch24Amount500
	unsigned long int stepLocal_27 = var_1_93 / (min (var_1_86 , var_1_12));
	unsigned long int stepLocal_26 = var_1_109;
	unsigned char stepLocal_25 = var_1_53 <= var_1_18;
	signed long int stepLocal_24 = var_1_79;
	if (! (var_1_20 == var_1_11)) {
		if (stepLocal_27 >= var_1_33) {
			if (stepLocal_26 != var_1_69) {
				if (((var_1_12 & var_1_48) / 64) < stepLocal_24) {
					if (var_1_63 <= var_1_7) {
						var_1_85 = (max (var_1_43 , var_1_86));
					} else {
						var_1_85 = (abs (var_1_19));
					}
				} else {
					var_1_85 = (max ((var_1_48 + var_1_58) , var_1_93));
				}
			} else {
				if (stepLocal_25 && var_1_105) {
					var_1_85 = ((abs (var_1_87 - var_1_53)) + ((var_1_20 + var_1_19) + var_1_17));
				}
			}
		}
	} else {
		var_1_85 = (min (var_1_43 , (var_1_17 + var_1_93)));
	}


	// From: Req22Batch24Amount500
	unsigned char stepLocal_16 = var_1_34;
	unsigned long int stepLocal_15 = var_1_56;
	if (var_1_63 < ((abs (var_1_22)) - var_1_55)) {
		if (256u != stepLocal_15) {
			var_1_62 = (var_1_28 - (var_1_41 - var_1_42));
		} else {
			var_1_62 = (var_1_42 - (max (var_1_6 , var_1_28)));
		}
	} else {
		if (var_1_2 && stepLocal_16) {
			var_1_62 = ((var_1_41 - 4.7f) - (max (var_1_26 , (abs (var_1_24)))));
		} else {
			if (var_1_2) {
				var_1_62 = (var_1_27 + (var_1_40 + (10.1f - var_1_42)));
			}
		}
	}


	// From: Req27Batch24Amount500
	unsigned char stepLocal_21 = (abs (var_1_27)) < var_1_6;
	unsigned short int stepLocal_20 = var_1_85;
	unsigned long int stepLocal_19 = var_1_108;
	if (var_1_44 > stepLocal_20) {
		if (stepLocal_19 < (var_1_48 / var_1_12)) {
			if (stepLocal_21 && var_1_105) {
				if ((var_1_63 * var_1_40) == var_1_21) {
					var_1_71 = (var_1_19 + ((var_1_48 - var_1_53) + var_1_72));
				} else {
					var_1_71 = (abs ((var_1_19 - var_1_18) + var_1_48));
				}
			} else {
				var_1_71 = (var_1_17 - (var_1_19 + var_1_53));
			}
		}
	} else {
		var_1_71 = (max (var_1_18 , 32));
	}


	// From: Req40Batch24Amount500
	if (var_1_62 > 9.5f) {
		var_1_97 = var_1_35;
	} else {
		var_1_97 = 0u;
	}


	// From: Req19Batch24Amount500
	if ((10 * var_1_56) < var_1_9) {
		if (var_1_97 <= (var_1_33 / (min (var_1_44 , var_1_48)))) {
			var_1_57 = (var_1_17 + (var_1_58 - var_1_48));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 4294967295);
	assume_abort_if_not(var_1_12 != 0);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 64);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 31);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 31);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 127);
	assume_abort_if_not(var_1_30 <= 254);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 1073741823);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 63);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_37 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_37 >= 2147483647);
	assume_abort_if_not(var_1_37 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -230584.3009213691400e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 2305843.009213691400e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 4611686.018427383000e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 95);
	assume_abort_if_not(var_1_44 <= 127);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 95);
	assume_abort_if_not(var_1_45 <= 127);
	var_1_48 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 15);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	assume_abort_if_not(var_1_52 != 0.0F);
	var_1_53 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_53 >= 1);
	assume_abort_if_not(var_1_53 <= 7);
	var_1_55 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_55 >= 0.0F && var_1_55 <= -1.0e-20F) || (var_1_55 <= 4611686.018427383000e+12F && var_1_55 >= 1.0e-20F ));
	var_1_58 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_58 >= 16383);
	assume_abort_if_not(var_1_58 <= 32767);
	var_1_60 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_60 >= -1073741823);
	assume_abort_if_not(var_1_60 <= 1073741823);
	var_1_65 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_65 >= 32767);
	assume_abort_if_not(var_1_65 <= 65535);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 0);
	assume_abort_if_not(var_1_67 <= 1);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 254);
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 127);
	assume_abort_if_not(var_1_69 <= 254);
	var_1_72 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_72 >= -31);
	assume_abort_if_not(var_1_72 <= 31);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 0);
	var_1_75 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 0);
	var_1_79 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_79 >= 1073741822);
	assume_abort_if_not(var_1_79 <= 2147483646);
	var_1_80 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_80 >= 536870911);
	assume_abort_if_not(var_1_80 <= 1073741823);
	var_1_81 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_81 >= 536870912);
	assume_abort_if_not(var_1_81 <= 1073741823);
	var_1_83 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_83 >= 2305843.009213691400e+12F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 4611686.018427383000e+12F && var_1_83 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 2305843.009213691400e+12F && var_1_84 >= 1.0e-20F ));
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 255);
	assume_abort_if_not(var_1_86 != 0);
	var_1_87 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_87 >= 16383);
	assume_abort_if_not(var_1_87 <= 32767);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 1);
	var_1_94 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_94 >= 32767);
	assume_abort_if_not(var_1_94 <= 65534);
	var_1_96 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_29 = var_1_29;
	last_1_var_1_31 = var_1_31;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_49 = var_1_49;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_98 = var_1_98;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_109 = var_1_109;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_64 <= var_1_98) ? (var_1_1 == ((float) (var_1_5 - var_1_6))) : (var_1_1 == ((float) (10.5f + var_1_7)))) && ((var_1_5 >= var_1_6) ? ((var_1_108 < var_1_66) ? (var_1_8 == ((unsigned long int) (max ((var_1_66 + (max (var_1_108 , var_1_9))) , (var_1_10 + var_1_11))))) : (var_1_8 == ((unsigned long int) (var_1_11 + var_1_9)))) : ((var_1_11 > (var_1_66 / var_1_12)) ? (var_1_8 == ((unsigned long int) var_1_108)) : (var_1_8 == ((unsigned long int) (var_1_108 + (abs (var_1_10)))))))) && ((var_1_76 >= (10u / var_1_12)) ? ((var_1_10 < (min (var_1_77 , var_1_76))) ? (var_1_13 == ((float) var_1_7)) : (var_1_13 == ((float) (var_1_7 + var_1_15)))) : (var_1_13 == ((float) var_1_15)))) && (((min (var_1_108 , var_1_76)) > 8u) ? (var_1_16 == ((unsigned char) (10 + (var_1_17 + (var_1_18 - var_1_19))))) : 1)) && (((min (var_1_12 , var_1_10)) < last_1_var_1_20) ? (var_1_105 ? (var_1_20 == ((signed short int) var_1_19)) : 1) : (var_1_20 == ((signed short int) (min (var_1_18 , var_1_17)))))) && (var_1_21 == ((float) (var_1_15 + var_1_7)))) && ((var_1_104 >= var_1_101) ? (var_1_73 ? (var_1_22 == ((float) ((min (var_1_15 , var_1_7)) + (max ((min (var_1_24 , 9.125f)) , var_1_25))))) : (var_1_22 == ((float) (max ((var_1_15 + var_1_7) , (max (0.4f , (var_1_5 - var_1_26)))))))) : (((- var_1_108) > ((var_1_17 << var_1_10) / var_1_12)) ? (((- var_1_101) != var_1_25) ? (var_1_22 == ((float) (var_1_7 + (min (var_1_15 , (var_1_27 - var_1_28)))))) : (var_1_22 == ((float) ((var_1_28 + var_1_27) - var_1_26)))) : 1))) && (var_1_73 ? ((var_1_10 >= (- (var_1_18 + var_1_17))) ? ((var_1_9 == var_1_8) ? (var_1_29 == ((unsigned char) (var_1_30 - var_1_17))) : 1) : 1) : 1)) && ((var_1_9 <= (var_1_32 - (var_1_33 - 32u))) ? (var_1_31 == ((unsigned char) (8 + (16 + var_1_18)))) : ((var_1_5 <= var_1_6) ? (var_1_105 ? (((var_1_32 - 25u) <= var_1_78) ? (var_1_31 == ((unsigned char) ((var_1_17 + 4) + (abs (32))))) : (var_1_31 == ((unsigned char) (var_1_30 - (var_1_35 - var_1_19))))) : 1) : 1))) && ((var_1_9 <= var_1_12) ? (var_1_36 == ((unsigned long int) ((max (var_1_37 , 3535779678u)) - (var_1_100 + var_1_35)))) : 1)) && ((var_1_95 <= (var_1_32 * 2u)) ? (var_1_38 == ((float) ((var_1_39 + var_1_40) + var_1_25))) : (var_1_38 == ((float) ((var_1_41 - var_1_27) - ((var_1_42 + 2.2f) + var_1_28)))))) && (var_1_73 ? (var_1_43 == ((unsigned char) (((var_1_44 + var_1_45) - var_1_18) - var_1_19))) : (var_1_105 ? (var_1_43 == ((unsigned char) (max ((var_1_35 + var_1_44) , var_1_17)))) : 1))) && (((var_1_5 * var_1_104) < (max (last_1_var_1_46 , var_1_24))) ? ((((var_1_70 >> var_1_48) / var_1_44) < (abs (var_1_10))) ? ((var_1_37 > var_1_19) ? (var_1_46 == ((float) (min ((abs (var_1_42)) , var_1_39)))) : (var_1_46 == ((float) (var_1_25 + (var_1_40 + var_1_39))))) : (var_1_46 == ((float) var_1_25))) : 1)) && (((var_1_12 > var_1_33) || var_1_105) ? (var_1_49 == ((double) (min (var_1_5 , (max (16.4 , var_1_39)))))) : 1)) && ((((- var_1_28) * var_1_39) >= var_1_7) ? (var_1_50 == ((double) (min (var_1_26 , (var_1_27 + var_1_25))))) : 1)) && ((var_1_42 >= var_1_27) ? (var_1_51 == ((unsigned char) (var_1_17 + (var_1_44 - var_1_19)))) : (((var_1_19 << var_1_33) <= var_1_10) ? ((((min (var_1_26 , var_1_6)) - var_1_5) > (var_1_50 / (max (var_1_41 , var_1_52)))) ? (var_1_51 == ((unsigned char) (max (var_1_30 , var_1_35)))) : (((var_1_16 >> var_1_53) > (var_1_95 / (abs (var_1_35)))) ? (var_1_51 == ((unsigned char) (var_1_48 + var_1_53))) : (var_1_51 == ((unsigned char) (abs (var_1_19)))))) : (var_1_51 == ((unsigned char) (var_1_48 + (min (var_1_53 , (max (var_1_35 , var_1_18)))))))))) && ((var_1_21 > (var_1_52 * var_1_82)) ? (var_1_54 == ((double) ((var_1_27 + 4.55) - ((min (var_1_28 , var_1_55)) + var_1_42)))) : (var_1_54 == ((double) var_1_41)))) && ((last_1_var_1_29 > (var_1_30 - var_1_44)) ? (var_1_56 == ((unsigned long int) (var_1_37 - (var_1_33 - 5u)))) : (var_1_56 == ((unsigned long int) ((min (1u , var_1_9)) + 128u))))) && (((10 * var_1_56) < var_1_9) ? ((var_1_97 <= (var_1_33 / (min (var_1_44 , var_1_48)))) ? (var_1_57 == ((unsigned short int) (var_1_17 + (var_1_58 - var_1_48)))) : 1) : 1)) && (var_1_59 == ((signed long int) (var_1_60 + -5)))) && (var_1_61 == ((signed long int) (max ((last_1_var_1_61 + (var_1_48 + var_1_58)) , (var_1_18 + (abs (var_1_109)))))))) && ((var_1_63 < ((abs (var_1_22)) - var_1_55)) ? ((256u != var_1_56) ? (var_1_62 == ((float) (var_1_28 - (var_1_41 - var_1_42)))) : (var_1_62 == ((float) (var_1_42 - (max (var_1_6 , var_1_28)))))) : ((var_1_2 && var_1_34) ? (var_1_62 == ((float) ((var_1_41 - 4.7f) - (max (var_1_26 , (abs (var_1_24))))))) : (var_1_2 ? (var_1_62 == ((float) (var_1_27 + (var_1_40 + (10.1f - var_1_42))))) : 1)))) && (((var_1_77 * var_1_108) < var_1_64) ? (var_1_63 == ((double) (abs (abs (var_1_25))))) : 1)) && (((var_1_65 - (max (var_1_16 , var_1_30))) >= var_1_103) ? (var_1_64 == ((unsigned char) var_1_45)) : (var_1_64 == ((unsigned char) (min (var_1_45 , 10)))))) && ((((var_1_32 - var_1_19) != var_1_59) && var_1_73) ? ((var_1_105 && (var_1_56 < var_1_37)) ? (var_1_66 == ((unsigned char) var_1_18)) : (var_1_66 == ((unsigned char) var_1_68))) : (var_1_66 == ((unsigned char) (min (((max (var_1_69 , var_1_30)) - 64) , (max (var_1_44 , (var_1_35 + var_1_48))))))))) && (((var_1_34 || (var_1_67 || var_1_2)) && (var_1_15 < var_1_38)) ? (var_1_70 == ((unsigned short int) 50)) : ((var_1_42 < 128.6f) ? (var_1_70 == ((unsigned short int) (max (var_1_30 , var_1_58)))) : 1))) && ((var_1_44 > var_1_85) ? ((var_1_108 < (var_1_48 / var_1_12)) ? ((((abs (var_1_27)) < var_1_6) && var_1_105) ? (((var_1_63 * var_1_40) == var_1_21) ? (var_1_71 == ((signed char) (var_1_19 + ((var_1_48 - var_1_53) + var_1_72)))) : (var_1_71 == ((signed char) (abs ((var_1_19 - var_1_18) + var_1_48))))) : (var_1_71 == ((signed char) (var_1_17 - (var_1_19 + var_1_53))))) : 1) : (var_1_71 == ((signed char) (max (var_1_18 , 32)))))) && ((last_1_var_1_109 < var_1_9) ? (var_1_73 == ((unsigned char) (! (var_1_74 || var_1_75)))) : (var_1_73 == ((unsigned char) (var_1_74 || ((var_1_18 > last_1_var_1_57) && var_1_75)))))) && (((var_1_65 + (last_1_var_1_76 | var_1_48)) > 50u) ? (var_1_76 == ((unsigned long int) (min (var_1_58 , var_1_68)))) : (var_1_76 == ((unsigned long int) (min (var_1_48 , (max (var_1_43 , (var_1_18 + var_1_44))))))))) && (var_1_77 == ((unsigned long int) (var_1_44 + var_1_103)))) && ((last_1_var_1_16 < var_1_19) ? ((last_1_var_1_82 == (var_1_24 * (var_1_25 * last_1_var_1_49))) ? (var_1_78 == ((signed long int) ((var_1_79 - last_1_var_1_95) - ((var_1_80 + var_1_81) - 100000000)))) : (var_1_78 == ((signed long int) (var_1_18 - (last_1_var_1_31 + var_1_58))))) : (var_1_78 == ((signed long int) (min (var_1_19 , last_1_var_1_103)))))) && (var_1_105 ? (var_1_82 == ((float) (var_1_42 - (var_1_41 - (var_1_83 - var_1_84))))) : 1)) && ((! (var_1_20 == var_1_11)) ? (((var_1_93 / (min (var_1_86 , var_1_12))) >= var_1_33) ? ((var_1_109 != var_1_69) ? ((((var_1_12 & var_1_48) / 64) < var_1_79) ? ((var_1_63 <= var_1_7) ? (var_1_85 == ((unsigned short int) (max (var_1_43 , var_1_86)))) : (var_1_85 == ((unsigned short int) (abs (var_1_19))))) : (var_1_85 == ((unsigned short int) (max ((var_1_48 + var_1_58) , var_1_93))))) : (((var_1_53 <= var_1_18) && var_1_105) ? (var_1_85 == ((unsigned short int) ((abs (var_1_87 - var_1_53)) + ((var_1_20 + var_1_19) + var_1_17)))) : 1)) : 1) : (var_1_85 == ((unsigned short int) (min (var_1_43 , (var_1_17 + var_1_93))))))) && ((var_1_75 && var_1_105) ? ((var_1_75 || (var_1_11 == 128u)) ? (var_1_88 == ((signed char) (var_1_72 + var_1_48))) : (var_1_88 == ((signed char) (var_1_53 - var_1_18)))) : 1)) && ((var_1_103 == var_1_43) ? ((var_1_105 || var_1_74) ? ((! var_1_73) ? (var_1_89 == ((float) (max (var_1_15 , ((min (var_1_40 , var_1_83)) + var_1_55))))) : (var_1_89 == ((float) (min (var_1_55 , (max (var_1_25 , var_1_83))))))) : (var_1_89 == ((float) (min ((min (var_1_40 , var_1_55)) , var_1_39))))) : (var_1_89 == ((float) (min ((var_1_27 + (var_1_83 - var_1_84)) , 255.75f)))))) && (var_1_75 ? (var_1_90 == ((signed short int) (last_1_var_1_90 - var_1_86))) : 1)) && ((var_1_105 && (var_1_28 < 99.5f)) ? (var_1_91 == ((signed char) var_1_53)) : (var_1_105 ? (var_1_91 == ((signed char) (var_1_18 - (min (var_1_19 , (abs (var_1_53))))))) : 1))) && ((var_1_108 >= var_1_10) ? (var_1_93 == ((unsigned short int) (var_1_94 - last_1_var_1_93))) : (var_1_93 == ((unsigned short int) (var_1_94 - (var_1_44 + var_1_8)))))) && (var_1_92 ? (var_1_95 == ((unsigned long int) (min ((min (last_1_var_1_106 , var_1_80)) , var_1_96)))) : ((var_1_34 || var_1_67) ? (((last_1_var_1_106 <= (last_1_var_1_78 * var_1_65)) && var_1_74) ? (var_1_2 ? (var_1_95 == ((unsigned long int) (abs (last_1_var_1_98)))) : ((var_1_86 < (max (last_1_var_1_51 , 5))) ? (var_1_95 == ((unsigned long int) (min (((abs (last_1_var_1_78)) + last_1_var_1_95) , var_1_87)))) : (var_1_95 == ((unsigned long int) (last_1_var_1_109 + var_1_17))))) : 1) : (var_1_95 == ((unsigned long int) (var_1_37 - last_1_var_1_95)))))) && ((var_1_62 > 9.5f) ? (var_1_97 == ((unsigned long int) var_1_35)) : (var_1_97 == ((unsigned long int) 0u)))) && (var_1_73 ? (var_1_98 == ((unsigned char) var_1_18)) : (var_1_98 == ((unsigned char) var_1_44)))) && (var_1_99 == ((double) var_1_55))) && (var_1_74 ? (var_1_100 == ((unsigned short int) last_1_var_1_100)) : 1)) && (var_1_74 ? (var_1_101 == ((float) var_1_84)) : (var_1_101 == ((float) 255.2f)))) && (var_1_102 == ((unsigned short int) var_1_86))) && (var_1_103 == ((signed short int) last_1_var_1_97))) && (var_1_104 == ((float) var_1_39))) && (var_1_105 == ((unsigned char) var_1_75))) && (var_1_106 == ((signed long int) var_1_35))) && (var_1_107 == ((double) var_1_84))) && (var_1_73 ? (var_1_108 == ((unsigned long int) var_1_18)) : (var_1_108 == ((unsigned long int) var_1_48)))) && (var_1_109 == ((unsigned long int) var_1_17))) && (var_1_74 ? (var_1_110 == ((signed char) var_1_18)) : 1)) && (var_1_111 == ((signed long int) -16))) && (((min (var_1_49 , var_1_55)) >= var_1_27) ? ((var_1_95 == (var_1_95 / (min (var_1_44 , var_1_48)))) ? (var_1_112 == ((signed char) (var_1_48 + var_1_18))) : (var_1_112 == ((signed char) var_1_53))) : (var_1_112 == ((signed char) var_1_72)))
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
