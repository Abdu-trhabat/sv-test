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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch138Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
double var_1_7 = 4.4;
double var_1_10 = 32.5;
double var_1_11 = 128.8;
double var_1_12 = 4.8;
double var_1_13 = 128.5;
double var_1_14 = 9.75;
double var_1_15 = 32.125;
float var_1_16 = 2.5;
float var_1_17 = 10000000000000.25;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed char var_1_24 = -4;
signed char var_1_25 = 5;
signed char var_1_26 = 32;
signed char var_1_27 = 5;
signed char var_1_28 = 50;
unsigned short int var_1_29 = 500;
signed long int var_1_30 = 1197320665;
unsigned short int var_1_31 = 49339;
unsigned short int var_1_32 = 18499;
float var_1_33 = 5.4;
float var_1_34 = 99.2;
float var_1_35 = 255.3;
float var_1_36 = 4.5;
float var_1_37 = 4.5;
unsigned char var_1_38 = 1;
unsigned char var_1_40 = 0;
double var_1_41 = 0.0;
unsigned char var_1_42 = 50;
signed long int var_1_43 = 1;
unsigned char var_1_44 = 1;
float var_1_45 = 25.25;
unsigned long int var_1_46 = 4;
signed short int var_1_47 = 128;
unsigned long int var_1_48 = 32;
unsigned long int var_1_49 = 1000000000;
double var_1_50 = 1.4;
double var_1_51 = 255.5;
double var_1_52 = 3.4;
double var_1_53 = 2.75;
signed long int var_1_54 = -4;
unsigned char var_1_55 = 32;
unsigned char var_1_56 = 128;
unsigned char var_1_57 = 100;
unsigned char var_1_58 = 64;
unsigned char var_1_60 = 50;
signed long int var_1_61 = -5;
signed long int var_1_62 = -8;
signed long int var_1_63 = -100;
signed long int var_1_64 = 1000000000;
signed short int var_1_65 = 1000;
signed long int var_1_67 = -5;
signed short int var_1_68 = 1;
unsigned long int var_1_69 = 10;
unsigned long int var_1_70 = 3606366729;
unsigned long int var_1_71 = 1893040965;
signed short int var_1_72 = -32;
signed char var_1_73 = -128;
float var_1_74 = 10.75;
unsigned char var_1_75 = 32;
double var_1_76 = 127.375;
signed short int var_1_77 = -25;
signed long int var_1_78 = 100000;
unsigned short int var_1_79 = 10;
signed char var_1_80 = 5;
float var_1_82 = 25.2;
unsigned char var_1_83 = 0;
signed long int var_1_85 = 25;
double var_1_86 = 1.2;
signed char var_1_87 = -4;
double var_1_88 = 3.6;
unsigned long int var_1_89 = 16;
signed char var_1_90 = 32;
signed char var_1_91 = 2;
float var_1_92 = 9.8;
float var_1_93 = 10.5;
signed char var_1_94 = -128;
float var_1_95 = 4.25;
unsigned char var_1_96 = 0;
signed long int var_1_97 = 100;
float var_1_98 = 8.5;
unsigned char var_1_99 = 0;
double var_1_100 = 9.3;
unsigned short int var_1_101 = 16;
unsigned char var_1_102 = 8;
unsigned char var_1_103 = 1;
signed char var_1_104 = 16;
signed long int var_1_105 = -16;
unsigned long int var_1_106 = 256;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 0;
double last_1_var_1_15 = 32.125;
unsigned char last_1_var_1_42 = 50;
signed long int last_1_var_1_43 = 1;
float last_1_var_1_45 = 25.25;
unsigned long int last_1_var_1_48 = 32;
double last_1_var_1_50 = 1.4;
double last_1_var_1_51 = 255.5;
signed long int last_1_var_1_61 = -5;
signed short int last_1_var_1_65 = 1000;
signed long int last_1_var_1_67 = -5;
signed short int last_1_var_1_68 = 1;
unsigned long int last_1_var_1_69 = 10;
signed short int last_1_var_1_72 = -32;
signed short int last_1_var_1_77 = -25;
unsigned char last_1_var_1_83 = 0;
double last_1_var_1_86 = 1.2;
signed long int last_1_var_1_97 = 100;
unsigned char last_1_var_1_102 = 8;
signed long int last_1_var_1_105 = -16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req22Batch138Amount500
	if (var_1_4) {
		if (var_1_57 > var_1_30) {
			var_1_65 = var_1_25;
		} else {
			if (last_1_var_1_50 < (last_1_var_1_45 + var_1_16)) {
				var_1_65 = (var_1_58 - var_1_60);
			}
		}
	} else {
		var_1_65 = (min ((var_1_25 - var_1_58) , (min (var_1_56 , var_1_57))));
	}


	// From: Req19Batch138Amount500
	var_1_54 = (var_1_25 - last_1_var_1_72);


	// From: Req34Batch138Amount500
	signed long int stepLocal_16 = last_1_var_1_65;
	unsigned char stepLocal_15 = (last_1_var_1_97 + -128) >= last_1_var_1_69;
	signed long int stepLocal_14 = var_1_78;
	if (last_1_var_1_86 <= (max (var_1_37 , var_1_12))) {
		if (stepLocal_15 && var_1_21) {
			var_1_83 = var_1_5;
		} else {
			if (stepLocal_14 > ((var_1_85 - last_1_var_1_42) + var_1_30)) {
				if (stepLocal_16 >= 25) {
					var_1_83 = ((var_1_6 || var_1_5) && (var_1_19 && var_1_20));
				} else {
					var_1_83 = ((! (last_1_var_1_15 <= last_1_var_1_86)) && ((last_1_var_1_77 <= 8) && var_1_21));
				}
			} else {
				var_1_83 = ((var_1_20 && var_1_23) || var_1_22);
			}
		}
	}


	// From: Req47Batch138Amount500
	if (var_1_83) {
		var_1_102 = var_1_28;
	} else {
		var_1_102 = var_1_58;
	}


	// From: Req12Batch138Amount500
	signed long int stepLocal_4 = var_1_25 << last_1_var_1_48;
	if (stepLocal_4 != var_1_27) {
		var_1_44 = (((var_1_31 == last_1_var_1_48) || last_1_var_1_83) || var_1_19);
	}


	// From: Req10Batch138Amount500
	signed char stepLocal_3 = var_1_26;
	if ((last_1_var_1_105 & (max (last_1_var_1_42 , last_1_var_1_43))) <= stepLocal_3) {
		var_1_42 = (max (var_1_27 , var_1_26));
	} else {
		var_1_42 = var_1_28;
	}


	// From: Req35Batch138Amount500
	if (var_1_64 > var_1_27) {
		if (var_1_28 < (var_1_42 / (min (var_1_26 , var_1_87)))) {
			var_1_86 = ((var_1_52 + var_1_53) - ((min (var_1_37 , var_1_36)) + var_1_88));
		}
	}


	// From: Req25Batch138Amount500
	var_1_69 = ((min (var_1_70 , (var_1_30 + var_1_71))) - ((var_1_64 + var_1_49) - (max (var_1_26 , last_1_var_1_68))));


	// From: Req36Batch138Amount500
	if ((min (last_1_var_1_51 , 8.6f)) <= (var_1_35 * 7.5f)) {
		if ((var_1_64 << last_1_var_1_48) > var_1_49) {
			var_1_89 = (min ((var_1_70 - var_1_71) , last_1_var_1_97));
		} else {
			var_1_89 = (min ((min (var_1_70 , var_1_25)) , last_1_var_1_102));
		}
	} else {
		if (last_1_var_1_1) {
			var_1_89 = (var_1_70 - var_1_58);
		}
	}


	// From: Req29Batch138Amount500
	var_1_75 = (abs (2));


	// From: Req30Batch138Amount500
	if (var_1_20) {
		var_1_76 = (max (var_1_35 , var_1_13));
	}


	// From: Req38Batch138Amount500
	if (var_1_6) {
		var_1_92 = var_1_93;
	}


	// From: Req40Batch138Amount500
	var_1_95 = var_1_10;


	// From: Req41Batch138Amount500
	var_1_96 = var_1_6;


	// From: Req43Batch138Amount500
	if (var_1_21) {
		var_1_98 = var_1_88;
	} else {
		var_1_98 = 9.5f;
	}


	// From: Req44Batch138Amount500
	if (var_1_44) {
		var_1_99 = var_1_57;
	}


	// From: Req45Batch138Amount500
	if (var_1_19) {
		var_1_100 = var_1_53;
	}


	// From: Req46Batch138Amount500
	var_1_101 = var_1_60;


	// From: Req49Batch138Amount500
	var_1_104 = var_1_27;


	// From: Req50Batch138Amount500
	var_1_105 = var_1_28;


	// From: Req51Batch138Amount500
	var_1_106 = var_1_60;


	// From: Req13Batch138Amount500
	unsigned long int stepLocal_6 = min (var_1_105 , var_1_69);
	signed long int stepLocal_5 = max (var_1_30 , var_1_105);
	if (stepLocal_6 >= (var_1_105 ^ var_1_30)) {
		if (stepLocal_5 >= var_1_65) {
			var_1_45 = (25.3f - var_1_37);
		} else {
			var_1_45 = (var_1_34 + 500.75f);
		}
	}


	// From: Req20Batch138Amount500
	if ((abs (var_1_69)) >= 50u) {
		if (var_1_6) {
			var_1_55 = (var_1_56 - (var_1_57 - var_1_26));
		} else {
			var_1_55 = (min (((var_1_57 + var_1_58) - var_1_26) , var_1_28));
		}
	} else {
		if ((var_1_89 * (10 - var_1_25)) >= ((var_1_54 / var_1_58) + (var_1_31 - var_1_49))) {
			if (var_1_58 <= (abs (min (var_1_42 , var_1_89)))) {
				var_1_55 = (abs (var_1_56));
			}
		} else {
			var_1_55 = ((64 + (32 + var_1_60)) - var_1_58);
		}
	}


	// From: Req26Batch138Amount500
	var_1_72 = ((var_1_56 + (min (var_1_75 , var_1_55))) + var_1_25);


	// From: Req15Batch138Amount500
	if (var_1_83) {
		var_1_47 = ((64 + var_1_26) - var_1_28);
	} else {
		var_1_47 = (var_1_27 + ((var_1_89 + var_1_25) + (max (-128 , -50))));
	}


	// From: Req31Batch138Amount500
	if (var_1_36 <= var_1_12) {
		var_1_77 = (min (var_1_69 , (2 - (var_1_28 + 4))));
	} else {
		var_1_77 = var_1_75;
	}


	// From: Req21Batch138Amount500
	if (var_1_23) {
		if (var_1_36 < var_1_12) {
			var_1_61 = (min (var_1_62 , 256));
		}
	} else {
		if ((var_1_41 <= var_1_100) || var_1_6) {
			var_1_61 = (-256 + (var_1_63 + (min (var_1_106 , -2))));
		} else {
			if ((last_1_var_1_61 - var_1_25) < var_1_60) {
				var_1_61 = (var_1_63 + -100);
			} else {
				var_1_61 = ((1474039482 - var_1_58) - (var_1_49 + (var_1_64 - var_1_26)));
			}
		}
	}


	// From: Req23Batch138Amount500
	signed long int stepLocal_9 = var_1_30;
	if (((var_1_52 + var_1_36) - 1.0000000000000025E14) > var_1_14) {
		if (stepLocal_9 > var_1_101) {
			if (var_1_20) {
				var_1_67 = (min ((max (var_1_61 , var_1_27)) , var_1_63));
			}
		} else {
			var_1_67 = (var_1_31 - last_1_var_1_67);
		}
	}


	// From: Req33Batch138Amount500
	unsigned long int stepLocal_13 = var_1_106;
	signed long int stepLocal_12 = abs (var_1_47);
	if (8 >= stepLocal_13) {
		if (var_1_20) {
			var_1_82 = (min ((var_1_53 - (var_1_52 + var_1_36)) , ((min (var_1_12 , var_1_37)) + (var_1_34 + var_1_35))));
		} else {
			if (var_1_63 < stepLocal_12) {
				var_1_82 = (var_1_37 + var_1_10);
			} else {
				var_1_82 = (min (3.5f , var_1_36));
			}
		}
	}


	// From: Req18Batch138Amount500
	if ((var_1_89 + (var_1_61 ^ var_1_47)) >= var_1_32) {
		var_1_51 = ((min ((var_1_37 - var_1_36) , var_1_34)) + (max (var_1_12 , (var_1_52 - var_1_53))));
	} else {
		if (var_1_41 >= var_1_100) {
			var_1_51 = (min ((min (var_1_10 , var_1_11)) , 1.25));
		} else {
			var_1_51 = ((200.5 - (max (var_1_36 , 16.25))) + (var_1_52 - (min (var_1_53 , var_1_37))));
		}
	}


	// From: Req17Batch138Amount500
	signed char stepLocal_8 = var_1_28;
	if (stepLocal_8 <= (var_1_67 + -5)) {
		var_1_50 = (var_1_37 + var_1_36);
	} else {
		var_1_50 = var_1_10;
	}


	// From: Req2Batch138Amount500
	if ((min ((- var_1_76) , (- 7.75))) <= (- var_1_50)) {
		if (var_1_44) {
			var_1_7 = (abs ((min (var_1_10 , var_1_11)) + var_1_12));
		} else {
			var_1_7 = (var_1_11 + var_1_10);
		}
	} else {
		var_1_7 = (var_1_13 - var_1_14);
	}


	// From: Req27Batch138Amount500
	if (! (var_1_35 >= var_1_7)) {
		var_1_73 = (var_1_26 - (var_1_27 + var_1_25));
	}


	// From: Req16Batch138Amount500
	if (var_1_7 > (var_1_36 * var_1_35)) {
		var_1_48 = (max ((min (var_1_26 , var_1_31)) , var_1_25));
	} else {
		var_1_48 = (((1000000000u + var_1_49) - var_1_26) + 2u);
	}


	// From: Req14Batch138Amount500
	signed long int stepLocal_7 = var_1_54;
	if (stepLocal_7 <= (var_1_48 + (max (var_1_48 , var_1_28)))) {
		var_1_46 = (var_1_26 + (1293553342u - var_1_65));
	}


	// From: Req28Batch138Amount500
	if ((abs (var_1_25)) > var_1_48) {
		if (var_1_23 || (-32 >= (var_1_48 * var_1_63))) {
			var_1_74 = var_1_14;
		} else {
			var_1_74 = ((var_1_52 + var_1_53) - var_1_36);
		}
	}


	// From: Req24Batch138Amount500
	if (var_1_44 || (var_1_26 <= var_1_48)) {
		var_1_68 = (min (var_1_54 , var_1_75));
	} else {
		var_1_68 = (min (var_1_56 , var_1_27));
	}


	// From: Req4Batch138Amount500
	if (var_1_44 || var_1_4) {
		if (var_1_65 < var_1_68) {
			var_1_18 = (((var_1_5 && var_1_6) && var_1_19) && var_1_20);
		} else {
			var_1_18 = (var_1_4 || (! 1));
		}
	} else {
		var_1_18 = (((var_1_4 || var_1_21) || var_1_22) || var_1_23);
	}


	// From: Req6Batch138Amount500
	if (((var_1_30 - var_1_105) - (var_1_26 + var_1_68)) != var_1_72) {
		if (var_1_6) {
			if (var_1_76 < 127.4) {
				var_1_29 = (var_1_31 - var_1_28);
			} else {
				var_1_29 = ((21684 + (abs (var_1_32))) - var_1_68);
			}
		} else {
			if (var_1_30 <= var_1_32) {
				var_1_29 = (abs (max ((min (var_1_27 , 16)) , var_1_28)));
			} else {
				var_1_29 = (min (var_1_27 , var_1_31));
			}
		}
	}


	// From: Req8Batch138Amount500
	if ((var_1_46 * var_1_89) < (var_1_32 ^ (var_1_25 / var_1_30))) {
		var_1_38 = (! (! var_1_23));
	} else {
		if (var_1_23) {
			var_1_38 = (var_1_20 || var_1_6);
		} else {
			var_1_38 = var_1_19;
		}
	}


	// From: Req37Batch138Amount500
	unsigned long int stepLocal_17 = var_1_46;
	if (! var_1_18) {
		if ((abs (var_1_58)) >= stepLocal_17) {
			var_1_90 = ((var_1_27 + var_1_26) - ((var_1_60 - var_1_91) + var_1_25));
		} else {
			var_1_90 = var_1_26;
		}
	}


	// From: Req39Batch138Amount500
	if (var_1_18) {
		var_1_94 = var_1_91;
	} else {
		var_1_94 = var_1_27;
	}


	// From: Req48Batch138Amount500
	signed long int stepLocal_19 = 8 % var_1_26;
	unsigned short int stepLocal_18 = var_1_31;
	if (var_1_29 < stepLocal_19) {
		if (var_1_30 >= stepLocal_18) {
			var_1_103 = var_1_6;
		} else {
			var_1_103 = (! var_1_19);
		}
	} else {
		var_1_103 = (var_1_96 && var_1_21);
	}


	// From: Req3Batch138Amount500
	if (((var_1_14 - var_1_13) * (var_1_16 - var_1_17)) != var_1_100) {
		if ((min ((min (0 , 1)) , (min (64 , var_1_29)))) == var_1_102) {
			var_1_15 = var_1_12;
		} else {
			if (var_1_6) {
				var_1_15 = (max (var_1_13 , var_1_14));
			} else {
				if (var_1_7 > var_1_14) {
					var_1_15 = var_1_10;
				} else {
					var_1_15 = var_1_12;
				}
			}
		}
	} else {
		var_1_15 = var_1_13;
	}


	// From: Req42Batch138Amount500
	if (var_1_18) {
		var_1_97 = var_1_89;
	} else {
		var_1_97 = var_1_47;
	}


	// From: Req32Batch138Amount500
	unsigned long int stepLocal_11 = 100 + (min (var_1_71 , var_1_70));
	signed char stepLocal_10 = var_1_25;
	if (stepLocal_10 >= ((var_1_80 - var_1_60) / (min (var_1_26 , var_1_57)))) {
		if ((- var_1_15) != var_1_34) {
			if (stepLocal_11 < ((min (var_1_106 , var_1_64)) + var_1_56)) {
				var_1_79 = (min ((var_1_89 + (var_1_32 - var_1_25)) , var_1_27));
			} else {
				var_1_79 = (var_1_31 - (max (var_1_89 , var_1_56)));
			}
		} else {
			var_1_79 = var_1_89;
		}
	}


	// From: Req5Batch138Amount500
	unsigned short int stepLocal_1 = var_1_79;
	if (2 < stepLocal_1) {
		var_1_24 = ((var_1_25 + (var_1_26 - var_1_27)) - var_1_28);
	} else {
		if (var_1_100 >= var_1_10) {
			var_1_24 = (min (var_1_25 , -8));
		} else {
			var_1_24 = var_1_28;
		}
	}


	// From: Req7Batch138Amount500
	signed long int stepLocal_2 = var_1_97;
	if (var_1_4) {
		var_1_33 = 9.999999999999995E14f;
	} else {
		if (stepLocal_2 >= var_1_75) {
			var_1_33 = (min (((var_1_34 + var_1_35) + var_1_10) , (max (var_1_11 , var_1_13))));
		} else {
			var_1_33 = (var_1_12 + (var_1_36 - (max (10.15f , var_1_37))));
		}
	}


	// From: Req9Batch138Amount500
	if (var_1_34 != var_1_100) {
		var_1_40 = (var_1_22 || var_1_23);
	} else {
		if ((var_1_79 >= var_1_28) || var_1_83) {
			if (var_1_13 <= ((var_1_41 - var_1_36) - var_1_14)) {
				var_1_40 = (! var_1_23);
			} else {
				var_1_40 = (((var_1_25 - var_1_28) < var_1_27) && (var_1_83 && (var_1_4 || var_1_23)));
			}
		} else {
			if (var_1_11 == var_1_14) {
				var_1_40 = (var_1_23 || var_1_22);
			} else {
				if (var_1_41 == (var_1_76 / 9.4)) {
					var_1_40 = (! var_1_21);
				} else {
					var_1_40 = ((var_1_79 > var_1_105) || (var_1_20 && var_1_19));
				}
			}
		}
	}


	// From: Req1Batch138Amount500
	unsigned char stepLocal_0 = var_1_55;
	if (var_1_79 < stepLocal_0) {
		var_1_1 = (var_1_4 || (! (var_1_5 && var_1_6)));
	}


	// From: Req11Batch138Amount500
	if ((min (var_1_28 , var_1_25)) != var_1_32) {
		if (var_1_1) {
			var_1_43 = (-8 + var_1_32);
		} else {
			if (last_1_var_1_43 >= (- var_1_77)) {
				var_1_43 = last_1_var_1_43;
			} else {
				if (var_1_41 > 0.4) {
					var_1_43 = -256;
				} else {
					var_1_43 = var_1_25;
				}
			}
		}
	} else {
		var_1_43 = var_1_26;
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 1);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 63);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 31);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 31);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= 1073741823);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 32767);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 16384);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 4611686.018427388000e+12F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 536870912);
	assume_abort_if_not(var_1_49 <= 1073741823);
	var_1_52 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_56 >= 127);
	assume_abort_if_not(var_1_56 <= 254);
	var_1_57 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_57 >= 63);
	assume_abort_if_not(var_1_57 <= 127);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 64);
	assume_abort_if_not(var_1_58 <= 127);
	var_1_60 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_60 >= 32);
	assume_abort_if_not(var_1_60 <= 63);
	var_1_62 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_62 >= -2147483647);
	assume_abort_if_not(var_1_62 <= 2147483646);
	var_1_63 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_63 >= -536870911);
	assume_abort_if_not(var_1_63 <= 536870912);
	var_1_64 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_64 >= 536870911);
	assume_abort_if_not(var_1_64 <= 1073741823);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 2147483647);
	assume_abort_if_not(var_1_70 <= 4294967294);
	var_1_71 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_71 >= 1073741824);
	assume_abort_if_not(var_1_71 <= 2147483647);
	var_1_78 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_78 >= -1);
	assume_abort_if_not(var_1_78 <= 2147483647);
	var_1_80 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_80 >= -1);
	assume_abort_if_not(var_1_80 <= 127);
	var_1_85 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_85 >= -1);
	assume_abort_if_not(var_1_85 <= 2147483647);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= -128);
	assume_abort_if_not(var_1_87 <= 127);
	assume_abort_if_not(var_1_87 != 0);
	var_1_88 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 4611686.018427383000e+12F && var_1_88 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_91 >= 0);
	assume_abort_if_not(var_1_91 <= 31);
	var_1_93 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_93 >= -922337.2036854766000e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 9223372.036854766000e+12F && var_1_93 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_43 = var_1_43;
	last_1_var_1_45 = var_1_45;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_65 = var_1_65;
	last_1_var_1_67 = var_1_67;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_86 = var_1_86;
	last_1_var_1_97 = var_1_97;
	last_1_var_1_102 = var_1_102;
	last_1_var_1_105 = var_1_105;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((var_1_79 < var_1_55) ? (var_1_1 == ((unsigned char) (var_1_4 || (! (var_1_5 && var_1_6))))) : 1) && (((min ((- var_1_76) , (- 7.75))) <= (- var_1_50)) ? (var_1_44 ? (var_1_7 == ((double) (abs ((min (var_1_10 , var_1_11)) + var_1_12)))) : (var_1_7 == ((double) (var_1_11 + var_1_10)))) : (var_1_7 == ((double) (var_1_13 - var_1_14))))) && ((((var_1_14 - var_1_13) * (var_1_16 - var_1_17)) != var_1_100) ? (((min ((min (0 , 1)) , (min (64 , var_1_29)))) == var_1_102) ? (var_1_15 == ((double) var_1_12)) : (var_1_6 ? (var_1_15 == ((double) (max (var_1_13 , var_1_14)))) : ((var_1_7 > var_1_14) ? (var_1_15 == ((double) var_1_10)) : (var_1_15 == ((double) var_1_12))))) : (var_1_15 == ((double) var_1_13)))) && ((var_1_44 || var_1_4) ? ((var_1_65 < var_1_68) ? (var_1_18 == ((unsigned char) (((var_1_5 && var_1_6) && var_1_19) && var_1_20))) : (var_1_18 == ((unsigned char) (var_1_4 || (! 1))))) : (var_1_18 == ((unsigned char) (((var_1_4 || var_1_21) || var_1_22) || var_1_23))))) && ((2 < var_1_79) ? (var_1_24 == ((signed char) ((var_1_25 + (var_1_26 - var_1_27)) - var_1_28))) : ((var_1_100 >= var_1_10) ? (var_1_24 == ((signed char) (min (var_1_25 , -8)))) : (var_1_24 == ((signed char) var_1_28))))) && ((((var_1_30 - var_1_105) - (var_1_26 + var_1_68)) != var_1_72) ? (var_1_6 ? ((var_1_76 < 127.4) ? (var_1_29 == ((unsigned short int) (var_1_31 - var_1_28))) : (var_1_29 == ((unsigned short int) ((21684 + (abs (var_1_32))) - var_1_68)))) : ((var_1_30 <= var_1_32) ? (var_1_29 == ((unsigned short int) (abs (max ((min (var_1_27 , 16)) , var_1_28))))) : (var_1_29 == ((unsigned short int) (min (var_1_27 , var_1_31)))))) : 1)) && (var_1_4 ? (var_1_33 == ((float) 9.999999999999995E14f)) : ((var_1_97 >= var_1_75) ? (var_1_33 == ((float) (min (((var_1_34 + var_1_35) + var_1_10) , (max (var_1_11 , var_1_13)))))) : (var_1_33 == ((float) (var_1_12 + (var_1_36 - (max (10.15f , var_1_37))))))))) && (((var_1_46 * var_1_89) < (var_1_32 ^ (var_1_25 / var_1_30))) ? (var_1_38 == ((unsigned char) (! (! var_1_23)))) : (var_1_23 ? (var_1_38 == ((unsigned char) (var_1_20 || var_1_6))) : (var_1_38 == ((unsigned char) var_1_19))))) && ((var_1_34 != var_1_100) ? (var_1_40 == ((unsigned char) (var_1_22 || var_1_23))) : (((var_1_79 >= var_1_28) || var_1_83) ? ((var_1_13 <= ((var_1_41 - var_1_36) - var_1_14)) ? (var_1_40 == ((unsigned char) (! var_1_23))) : (var_1_40 == ((unsigned char) (((var_1_25 - var_1_28) < var_1_27) && (var_1_83 && (var_1_4 || var_1_23)))))) : ((var_1_11 == var_1_14) ? (var_1_40 == ((unsigned char) (var_1_23 || var_1_22))) : ((var_1_41 == (var_1_76 / 9.4)) ? (var_1_40 == ((unsigned char) (! var_1_21))) : (var_1_40 == ((unsigned char) ((var_1_79 > var_1_105) || (var_1_20 && var_1_19))))))))) && (((last_1_var_1_105 & (max (last_1_var_1_42 , last_1_var_1_43))) <= var_1_26) ? (var_1_42 == ((unsigned char) (max (var_1_27 , var_1_26)))) : (var_1_42 == ((unsigned char) var_1_28)))) && (((min (var_1_28 , var_1_25)) != var_1_32) ? (var_1_1 ? (var_1_43 == ((signed long int) (-8 + var_1_32))) : ((last_1_var_1_43 >= (- var_1_77)) ? (var_1_43 == ((signed long int) last_1_var_1_43)) : ((var_1_41 > 0.4) ? (var_1_43 == ((signed long int) -256)) : (var_1_43 == ((signed long int) var_1_25))))) : (var_1_43 == ((signed long int) var_1_26)))) && (((var_1_25 << last_1_var_1_48) != var_1_27) ? (var_1_44 == ((unsigned char) (((var_1_31 == last_1_var_1_48) || last_1_var_1_83) || var_1_19))) : 1)) && (((min (var_1_105 , var_1_69)) >= (var_1_105 ^ var_1_30)) ? (((max (var_1_30 , var_1_105)) >= var_1_65) ? (var_1_45 == ((float) (25.3f - var_1_37))) : (var_1_45 == ((float) (var_1_34 + 500.75f)))) : 1)) && ((var_1_54 <= (var_1_48 + (max (var_1_48 , var_1_28)))) ? (var_1_46 == ((unsigned long int) (var_1_26 + (1293553342u - var_1_65)))) : 1)) && (var_1_83 ? (var_1_47 == ((signed short int) ((64 + var_1_26) - var_1_28))) : (var_1_47 == ((signed short int) (var_1_27 + ((var_1_89 + var_1_25) + (max (-128 , -50)))))))) && ((var_1_7 > (var_1_36 * var_1_35)) ? (var_1_48 == ((unsigned long int) (max ((min (var_1_26 , var_1_31)) , var_1_25)))) : (var_1_48 == ((unsigned long int) (((1000000000u + var_1_49) - var_1_26) + 2u))))) && ((var_1_28 <= (var_1_67 + -5)) ? (var_1_50 == ((double) (var_1_37 + var_1_36))) : (var_1_50 == ((double) var_1_10)))) && (((var_1_89 + (var_1_61 ^ var_1_47)) >= var_1_32) ? (var_1_51 == ((double) ((min ((var_1_37 - var_1_36) , var_1_34)) + (max (var_1_12 , (var_1_52 - var_1_53)))))) : ((var_1_41 >= var_1_100) ? (var_1_51 == ((double) (min ((min (var_1_10 , var_1_11)) , 1.25)))) : (var_1_51 == ((double) ((200.5 - (max (var_1_36 , 16.25))) + (var_1_52 - (min (var_1_53 , var_1_37))))))))) && (var_1_54 == ((signed long int) (var_1_25 - last_1_var_1_72)))) && (((abs (var_1_69)) >= 50u) ? (var_1_6 ? (var_1_55 == ((unsigned char) (var_1_56 - (var_1_57 - var_1_26)))) : (var_1_55 == ((unsigned char) (min (((var_1_57 + var_1_58) - var_1_26) , var_1_28))))) : (((var_1_89 * (10 - var_1_25)) >= ((var_1_54 / var_1_58) + (var_1_31 - var_1_49))) ? ((var_1_58 <= (abs (min (var_1_42 , var_1_89)))) ? (var_1_55 == ((unsigned char) (abs (var_1_56)))) : 1) : (var_1_55 == ((unsigned char) ((64 + (32 + var_1_60)) - var_1_58)))))) && (var_1_23 ? ((var_1_36 < var_1_12) ? (var_1_61 == ((signed long int) (min (var_1_62 , 256)))) : 1) : (((var_1_41 <= var_1_100) || var_1_6) ? (var_1_61 == ((signed long int) (-256 + (var_1_63 + (min (var_1_106 , -2)))))) : (((last_1_var_1_61 - var_1_25) < var_1_60) ? (var_1_61 == ((signed long int) (var_1_63 + -100))) : (var_1_61 == ((signed long int) ((1474039482 - var_1_58) - (var_1_49 + (var_1_64 - var_1_26))))))))) && (var_1_4 ? ((var_1_57 > var_1_30) ? (var_1_65 == ((signed short int) var_1_25)) : ((last_1_var_1_50 < (last_1_var_1_45 + var_1_16)) ? (var_1_65 == ((signed short int) (var_1_58 - var_1_60))) : 1)) : (var_1_65 == ((signed short int) (min ((var_1_25 - var_1_58) , (min (var_1_56 , var_1_57)))))))) && ((((var_1_52 + var_1_36) - 1.0000000000000025E14) > var_1_14) ? ((var_1_30 > var_1_101) ? (var_1_20 ? (var_1_67 == ((signed long int) (min ((max (var_1_61 , var_1_27)) , var_1_63)))) : 1) : (var_1_67 == ((signed long int) (var_1_31 - last_1_var_1_67)))) : 1)) && ((var_1_44 || (var_1_26 <= var_1_48)) ? (var_1_68 == ((signed short int) (min (var_1_54 , var_1_75)))) : (var_1_68 == ((signed short int) (min (var_1_56 , var_1_27)))))) && (var_1_69 == ((unsigned long int) ((min (var_1_70 , (var_1_30 + var_1_71))) - ((var_1_64 + var_1_49) - (max (var_1_26 , last_1_var_1_68))))))) && (var_1_72 == ((signed short int) ((var_1_56 + (min (var_1_75 , var_1_55))) + var_1_25)))) && ((! (var_1_35 >= var_1_7)) ? (var_1_73 == ((signed char) (var_1_26 - (var_1_27 + var_1_25)))) : 1)) && (((abs (var_1_25)) > var_1_48) ? ((var_1_23 || (-32 >= (var_1_48 * var_1_63))) ? (var_1_74 == ((float) var_1_14)) : (var_1_74 == ((float) ((var_1_52 + var_1_53) - var_1_36)))) : 1)) && (var_1_75 == ((unsigned char) (abs (2))))) && (var_1_20 ? (var_1_76 == ((double) (max (var_1_35 , var_1_13)))) : 1)) && ((var_1_36 <= var_1_12) ? (var_1_77 == ((signed short int) (min (var_1_69 , (2 - (var_1_28 + 4)))))) : (var_1_77 == ((signed short int) var_1_75)))) && ((var_1_25 >= ((var_1_80 - var_1_60) / (min (var_1_26 , var_1_57)))) ? (((- var_1_15) != var_1_34) ? (((100 + (min (var_1_71 , var_1_70))) < ((min (var_1_106 , var_1_64)) + var_1_56)) ? (var_1_79 == ((unsigned short int) (min ((var_1_89 + (var_1_32 - var_1_25)) , var_1_27)))) : (var_1_79 == ((unsigned short int) (var_1_31 - (max (var_1_89 , var_1_56)))))) : (var_1_79 == ((unsigned short int) var_1_89))) : 1)) && ((8 >= var_1_106) ? (var_1_20 ? (var_1_82 == ((float) (min ((var_1_53 - (var_1_52 + var_1_36)) , ((min (var_1_12 , var_1_37)) + (var_1_34 + var_1_35)))))) : ((var_1_63 < (abs (var_1_47))) ? (var_1_82 == ((float) (var_1_37 + var_1_10))) : (var_1_82 == ((float) (min (3.5f , var_1_36)))))) : 1)) && ((last_1_var_1_86 <= (max (var_1_37 , var_1_12))) ? ((((last_1_var_1_97 + -128) >= last_1_var_1_69) && var_1_21) ? (var_1_83 == ((unsigned char) var_1_5)) : ((var_1_78 > ((var_1_85 - last_1_var_1_42) + var_1_30)) ? ((last_1_var_1_65 >= 25) ? (var_1_83 == ((unsigned char) ((var_1_6 || var_1_5) && (var_1_19 && var_1_20)))) : (var_1_83 == ((unsigned char) ((! (last_1_var_1_15 <= last_1_var_1_86)) && ((last_1_var_1_77 <= 8) && var_1_21))))) : (var_1_83 == ((unsigned char) ((var_1_20 && var_1_23) || var_1_22))))) : 1)) && ((var_1_64 > var_1_27) ? ((var_1_28 < (var_1_42 / (min (var_1_26 , var_1_87)))) ? (var_1_86 == ((double) ((var_1_52 + var_1_53) - ((min (var_1_37 , var_1_36)) + var_1_88)))) : 1) : 1)) && (((min (last_1_var_1_51 , 8.6f)) <= (var_1_35 * 7.5f)) ? (((var_1_64 << last_1_var_1_48) > var_1_49) ? (var_1_89 == ((unsigned long int) (min ((var_1_70 - var_1_71) , last_1_var_1_97)))) : (var_1_89 == ((unsigned long int) (min ((min (var_1_70 , var_1_25)) , last_1_var_1_102))))) : (last_1_var_1_1 ? (var_1_89 == ((unsigned long int) (var_1_70 - var_1_58))) : 1))) && ((! var_1_18) ? (((abs (var_1_58)) >= var_1_46) ? (var_1_90 == ((signed char) ((var_1_27 + var_1_26) - ((var_1_60 - var_1_91) + var_1_25)))) : (var_1_90 == ((signed char) var_1_26))) : 1)) && (var_1_6 ? (var_1_92 == ((float) var_1_93)) : 1)) && (var_1_18 ? (var_1_94 == ((signed char) var_1_91)) : (var_1_94 == ((signed char) var_1_27)))) && (var_1_95 == ((float) var_1_10))) && (var_1_96 == ((unsigned char) var_1_6))) && (var_1_18 ? (var_1_97 == ((signed long int) var_1_89)) : (var_1_97 == ((signed long int) var_1_47)))) && (var_1_21 ? (var_1_98 == ((float) var_1_88)) : (var_1_98 == ((float) 9.5f)))) && (var_1_44 ? (var_1_99 == ((unsigned char) var_1_57)) : 1)) && (var_1_19 ? (var_1_100 == ((double) var_1_53)) : 1)) && (var_1_101 == ((unsigned short int) var_1_60))) && (var_1_83 ? (var_1_102 == ((unsigned char) var_1_28)) : (var_1_102 == ((unsigned char) var_1_58)))) && ((var_1_29 < (8 % var_1_26)) ? ((var_1_30 >= var_1_31) ? (var_1_103 == ((unsigned char) var_1_6)) : (var_1_103 == ((unsigned char) (! var_1_19)))) : (var_1_103 == ((unsigned char) (var_1_96 && var_1_21))))) && (var_1_104 == ((signed char) var_1_27))) && (var_1_105 == ((signed long int) var_1_28))) && (var_1_106 == ((unsigned long int) var_1_60))
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
