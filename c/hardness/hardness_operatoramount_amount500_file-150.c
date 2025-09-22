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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch150Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = 5;
signed long int var_1_2 = -64;
unsigned char var_1_3 = 25;
unsigned short int var_1_4 = 500;
unsigned char var_1_7 = 25;
unsigned char var_1_8 = 8;
unsigned char var_1_9 = 32;
unsigned char var_1_10 = 0;
signed long int var_1_12 = -256;
unsigned char var_1_13 = 0;
double var_1_15 = 15.2;
double var_1_16 = 63.5;
double var_1_17 = 64.5;
double var_1_18 = 10.25;
signed char var_1_19 = -64;
signed char var_1_20 = 0;
signed char var_1_21 = 50;
signed char var_1_22 = 32;
signed char var_1_23 = 16;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
float var_1_26 = 10.25;
float var_1_28 = 63.25;
float var_1_29 = 16.75;
float var_1_30 = 32.75;
float var_1_31 = 128.5;
signed char var_1_32 = -2;
unsigned char var_1_33 = 4;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 8;
unsigned char var_1_36 = 5;
signed long int var_1_37 = -4;
unsigned short int var_1_38 = 8;
unsigned short int var_1_39 = 22894;
unsigned short int var_1_40 = 55440;
double var_1_41 = 3.5;
float var_1_42 = -0.75;
float var_1_43 = 24.5;
double var_1_44 = 10000000.25;
double var_1_45 = 0.0;
double var_1_46 = 49.25;
double var_1_47 = 64.5;
unsigned char var_1_48 = 2;
unsigned char var_1_49 = 64;
unsigned char var_1_50 = 100;
unsigned char var_1_51 = 128;
unsigned char var_1_52 = 128;
signed long int var_1_53 = 1000;
unsigned char var_1_54 = 64;
unsigned char var_1_55 = 128;
signed long int var_1_56 = 16;
signed long int var_1_57 = 5;
unsigned long int var_1_58 = 25;
unsigned char var_1_59 = 1;
signed long int var_1_60 = -128;
unsigned char var_1_61 = 1;
unsigned char var_1_63 = 1;
unsigned char var_1_64 = 1;
unsigned char var_1_65 = 0;
unsigned long int var_1_66 = 10;
unsigned char var_1_68 = 10;
unsigned long int var_1_69 = 3957841357;
signed short int var_1_70 = 1;
double var_1_71 = 16.4;
double var_1_72 = 25.35;
unsigned long int var_1_73 = 4;
signed short int var_1_74 = -256;
signed short int var_1_75 = 28035;
signed short int var_1_76 = 5;
unsigned char var_1_77 = 1;
unsigned long int var_1_78 = 25;
unsigned long int var_1_79 = 4257432189;
float var_1_80 = 128.3;
float var_1_81 = 32.75;
float var_1_82 = 25.38;
signed short int var_1_83 = -50;
signed short int var_1_84 = 4;
unsigned char var_1_85 = 1;
unsigned char var_1_86 = 64;
unsigned char var_1_87 = 0;
signed long int var_1_88 = 256;
signed long int var_1_89 = 1863392559;
signed long int var_1_90 = 32;
signed short int var_1_91 = -2;
signed long int var_1_93 = 500;
signed short int var_1_94 = 32;
signed short int var_1_96 = -2;
signed char var_1_97 = 32;
float var_1_98 = 3.4;
unsigned long int var_1_99 = 1000000;
double var_1_100 = -0.2;
signed char var_1_101 = -10;
signed char var_1_102 = -2;
signed char var_1_103 = 10;
signed long int var_1_104 = -64;
unsigned char var_1_105 = 0;
unsigned long int var_1_106 = 5;
signed long int var_1_107 = 5;
signed short int var_1_108 = -4;
signed short int var_1_109 = 16;
signed short int var_1_110 = 10;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_3 = 25;
double last_1_var_1_15 = 15.2;
unsigned char last_1_var_1_24 = 1;
float last_1_var_1_26 = 10.25;
signed long int last_1_var_1_37 = -4;
signed long int last_1_var_1_56 = 16;
unsigned long int last_1_var_1_58 = 25;
signed long int last_1_var_1_60 = -128;
unsigned char last_1_var_1_64 = 1;
unsigned long int last_1_var_1_66 = 10;
double last_1_var_1_71 = 16.4;
unsigned long int last_1_var_1_73 = 4;
unsigned char last_1_var_1_77 = 1;
unsigned long int last_1_var_1_78 = 25;
signed short int last_1_var_1_91 = -2;
signed long int last_1_var_1_93 = 500;
signed char last_1_var_1_101 = -10;
signed long int last_1_var_1_104 = -64;
unsigned long int last_1_var_1_106 = 5;
signed long int last_1_var_1_107 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req29Batch150Amount500
	if (256 <= last_1_var_1_58) {
		if (((var_1_29 - var_1_46) > (max (var_1_72 , last_1_var_1_26))) || last_1_var_1_77) {
			var_1_78 = (min ((var_1_79 - last_1_var_1_104) , last_1_var_1_91));
		}
	}


	// From: Req23Batch150Amount500
	signed long int stepLocal_21 = last_1_var_1_107;
	signed long int stepLocal_20 = min (var_1_49 , var_1_39);
	signed long int stepLocal_19 = max (var_1_9 , var_1_12);
	signed long int stepLocal_18 = var_1_9 / (min (1 , var_1_68));
	if (last_1_var_1_93 >= stepLocal_21) {
		if (stepLocal_20 > last_1_var_1_66) {
			if (last_1_var_1_24) {
				var_1_66 = (max (var_1_9 , (var_1_4 + var_1_23)));
			} else {
				var_1_66 = var_1_40;
			}
		} else {
			var_1_66 = var_1_8;
		}
	} else {
		if (var_1_28 >= (max (var_1_16 , var_1_45))) {
			var_1_66 = (min (((abs (var_1_22)) + last_1_var_1_107) , last_1_var_1_37));
		} else {
			if (stepLocal_18 <= (last_1_var_1_101 + last_1_var_1_60)) {
				var_1_66 = (max (var_1_39 , (var_1_8 + last_1_var_1_37)));
			} else {
				if (last_1_var_1_58 == stepLocal_19) {
					var_1_66 = (max (var_1_21 , var_1_39));
				} else {
					var_1_66 = (max (var_1_9 , (var_1_69 - var_1_49)));
				}
			}
		}
	}


	// From: Req19Batch150Amount500
	signed long int stepLocal_15 = var_1_40 + last_1_var_1_93;
	if (stepLocal_15 >= (last_1_var_1_66 ^ (max (last_1_var_1_3 , var_1_8)))) {
		if (var_1_28 <= last_1_var_1_71) {
			var_1_59 = ((! var_1_25) || var_1_13);
		} else {
			var_1_59 = (! var_1_25);
		}
	}


	// From: Req2Batch150Amount500
	unsigned long int stepLocal_1 = last_1_var_1_58 | last_1_var_1_106;
	signed long int stepLocal_0 = var_1_2;
	if (stepLocal_0 <= (~ last_1_var_1_78)) {
		if (((var_1_2 & last_1_var_1_78) / var_1_4) <= stepLocal_1) {
			var_1_3 = (max ((max (var_1_7 , var_1_8)) , var_1_9));
		}
	} else {
		var_1_3 = var_1_9;
	}


	// From: Req47Batch150Amount500
	if (last_1_var_1_24) {
		var_1_105 = 1;
	}


	// From: Req4Batch150Amount500
	unsigned char stepLocal_5 = var_1_7;
	if (stepLocal_5 > var_1_78) {
		var_1_15 = (max (var_1_16 , var_1_17));
	} else {
		var_1_15 = (min (var_1_16 , (min (var_1_17 , var_1_18))));
	}


	// From: Req13Batch150Amount500
	if (((- var_1_15) / (max (var_1_42 , var_1_43))) == var_1_18) {
		if (var_1_17 > (var_1_43 / (max (var_1_42 , var_1_44)))) {
			var_1_41 = (((var_1_45 - var_1_46) - var_1_30) + (max (var_1_29 , (min (var_1_31 , var_1_47)))));
		}
	}


	// From: Req17Batch150Amount500
	if (var_1_44 <= var_1_41) {
		var_1_56 = var_1_57;
	}


	// From: Req12Batch150Amount500
	unsigned char stepLocal_10 = var_1_105;
	if (stepLocal_10 && var_1_13) {
		var_1_38 = ((max (var_1_34 , (var_1_39 - 5))) + (26778 - var_1_22));
	} else {
		var_1_38 = (var_1_40 - var_1_7);
	}


	// From: Req18Batch150Amount500
	signed long int stepLocal_14 = var_1_49 / (abs (var_1_21));
	signed long int stepLocal_13 = last_1_var_1_107;
	unsigned long int stepLocal_12 = (var_1_34 * 8u) % (var_1_55 + var_1_39);
	if ((var_1_50 << var_1_55) >= stepLocal_13) {
		if (((- last_1_var_1_15) + last_1_var_1_26) < (var_1_17 + var_1_31)) {
			var_1_58 = (var_1_55 + last_1_var_1_56);
		} else {
			if (last_1_var_1_64) {
				if (stepLocal_14 < last_1_var_1_3) {
					var_1_58 = (var_1_8 + (var_1_22 + last_1_var_1_58));
				}
			}
		}
	} else {
		if (stepLocal_12 <= (min (var_1_49 , var_1_4))) {
			var_1_58 = var_1_51;
		} else {
			var_1_58 = (min (last_1_var_1_58 , var_1_7));
		}
	}


	// From: Req1Batch150Amount500
	var_1_1 = var_1_2;


	// From: Req10Batch150Amount500
	signed long int stepLocal_9 = 5;
	if (var_1_9 > stepLocal_9) {
		var_1_36 = (abs (var_1_8));
	}


	// From: Req20Batch150Amount500
	var_1_60 = ((max (var_1_34 , var_1_55)) - var_1_22);


	// From: Req24Batch150Amount500
	var_1_70 = (max (var_1_51 , var_1_55));


	// From: Req39Batch150Amount500
	if (var_1_65) {
		var_1_97 = var_1_35;
	} else {
		var_1_97 = var_1_22;
	}


	// From: Req41Batch150Amount500
	var_1_99 = var_1_86;


	// From: Req42Batch150Amount500
	if (var_1_13) {
		var_1_100 = var_1_72;
	}


	// From: Req43Batch150Amount500
	if (var_1_25) {
		var_1_101 = var_1_20;
	} else {
		var_1_101 = var_1_21;
	}


	// From: Req44Batch150Amount500
	var_1_102 = var_1_20;


	// From: Req45Batch150Amount500
	var_1_103 = var_1_22;


	// From: Req46Batch150Amount500
	if (var_1_13) {
		var_1_104 = var_1_89;
	} else {
		var_1_104 = var_1_90;
	}


	// From: Req48Batch150Amount500
	var_1_106 = 8u;


	// From: Req36Batch150Amount500
	signed long int stepLocal_33 = var_1_56;
	if (var_1_66 > stepLocal_33) {
		if (! var_1_105) {
			var_1_93 = ((var_1_39 + var_1_55) + var_1_50);
		}
	} else {
		var_1_93 = ((var_1_89 - var_1_55) - var_1_106);
	}


	// From: Req22Batch150Amount500
	unsigned char stepLocal_17 = var_1_3;
	signed long int stepLocal_16 = -8;
	if (var_1_1 < stepLocal_16) {
		if (stepLocal_17 > var_1_38) {
			var_1_64 = (! var_1_13);
		}
	} else {
		var_1_64 = (((! var_1_25) || var_1_13) || var_1_65);
	}


	// From: Req7Batch150Amount500
	unsigned char stepLocal_8 = (min (var_1_21 , var_1_8)) <= var_1_9;
	if (stepLocal_8 || (var_1_22 > (var_1_3 * var_1_60))) {
		var_1_26 = (min ((max (var_1_16 , var_1_18)) , (min (var_1_17 , var_1_28))));
	} else {
		var_1_26 = ((var_1_29 - var_1_30) + var_1_31);
	}


	// From: Req21Batch150Amount500
	if (var_1_105) {
		if ((var_1_46 != var_1_44) || (var_1_41 != (var_1_15 * var_1_18))) {
			var_1_61 = ((! var_1_25) || (var_1_64 && (! var_1_63)));
		}
	}


	// From: Req49Batch150Amount500
	if (var_1_61) {
		var_1_107 = 25;
	} else {
		var_1_107 = last_1_var_1_107;
	}


	// From: Req34Batch150Amount500
	if (var_1_64) {
		if (var_1_63) {
			var_1_88 = ((var_1_75 + var_1_4) - (var_1_89 - (max (var_1_90 , var_1_35))));
		} else {
			var_1_88 = ((var_1_39 - var_1_9) + var_1_23);
		}
	} else {
		var_1_88 = (2 - (max (var_1_90 , var_1_55)));
	}


	// From: Req16Batch150Amount500
	if (var_1_64) {
		if ((var_1_30 - var_1_45) < var_1_18) {
			var_1_54 = ((max (var_1_52 , var_1_55)) - var_1_22);
		}
	} else {
		var_1_54 = ((abs (var_1_22)) + var_1_21);
	}


	// From: Req30Batch150Amount500
	signed long int stepLocal_26 = var_1_88;
	if (stepLocal_26 < var_1_1) {
		var_1_80 = ((var_1_29 - (var_1_46 + 99.15f)) + (var_1_81 + var_1_82));
	} else {
		var_1_80 = (min (1.255f , var_1_28));
	}


	// From: Req31Batch150Amount500
	signed long int stepLocal_27 = var_1_57 + var_1_104;
	if ((var_1_8 * var_1_34) < stepLocal_27) {
		if (! var_1_63) {
			var_1_83 = (var_1_84 - var_1_68);
		}
	} else {
		var_1_83 = var_1_51;
	}


	// From: Req32Batch150Amount500
	if (((var_1_68 * var_1_104) + 1) <= (var_1_49 / var_1_12)) {
		var_1_85 = (((max (var_1_49 , var_1_50)) + (abs (var_1_86))) - var_1_21);
	} else {
		var_1_85 = (max (var_1_21 , var_1_35));
	}


	// From: Req37Batch150Amount500
	signed long int stepLocal_34 = var_1_107;
	if (stepLocal_34 > var_1_49) {
		var_1_94 = (min ((var_1_106 - var_1_7) , ((var_1_75 - var_1_9) - var_1_51)));
	} else {
		var_1_94 = ((var_1_8 + var_1_83) - var_1_21);
	}


	// From: Req40Batch150Amount500
	if (var_1_64) {
		var_1_98 = var_1_72;
	} else {
		var_1_98 = 1.6f;
	}


	// From: Req50Batch150Amount500
	if (var_1_61) {
		var_1_108 = var_1_22;
	}


	// From: Req35Batch150Amount500
	signed long int stepLocal_32 = var_1_104;
	signed long int stepLocal_31 = 256;
	unsigned long int stepLocal_30 = var_1_78;
	if (stepLocal_31 <= (var_1_75 + var_1_78)) {
		if (stepLocal_30 <= (var_1_106 * (max (var_1_51 , last_1_var_1_91)))) {
			if ((min (var_1_58 , (var_1_4 + var_1_69))) < stepLocal_32) {
				var_1_91 = (var_1_51 - var_1_75);
			}
		} else {
			var_1_91 = (abs (var_1_85));
		}
	} else {
		var_1_91 = 25;
	}


	// From: Req11Batch150Amount500
	if ((min (var_1_16 , var_1_28)) < (var_1_30 - var_1_29)) {
		if (var_1_30 < (- (min (var_1_16 , var_1_17)))) {
			var_1_37 = (min ((var_1_88 + var_1_8) , (var_1_35 + (min (var_1_23 , var_1_104)))));
		}
	} else {
		var_1_37 = (var_1_88 - (min ((max (var_1_35 , var_1_9)) , (max (var_1_34 , 5)))));
	}


	// From: Req26Batch150Amount500
	if (! var_1_65) {
		var_1_73 = (var_1_8 + (var_1_83 + last_1_var_1_73));
	} else {
		var_1_73 = var_1_40;
	}


	// From: Req33Batch150Amount500
	unsigned long int stepLocal_29 = var_1_99;
	unsigned long int stepLocal_28 = min ((min (var_1_52 , var_1_79)) , var_1_99);
	if (var_1_73 >= stepLocal_28) {
		if (256 < stepLocal_29) {
			var_1_87 = (var_1_105 || (! (! var_1_63)));
		} else {
			var_1_87 = (var_1_59 && (var_1_13 || var_1_65));
		}
	} else {
		var_1_87 = (var_1_25 && var_1_63);
	}


	// From: Req6Batch150Amount500
	unsigned char stepLocal_7 = var_1_13;
	signed char stepLocal_6 = var_1_21;
	if (stepLocal_7 || var_1_87) {
		var_1_24 = (! var_1_13);
	} else {
		if (var_1_16 != var_1_17) {
			if (var_1_7 != stepLocal_6) {
				var_1_24 = var_1_25;
			}
		} else {
			var_1_24 = var_1_13;
		}
	}


	// From: Req15Batch150Amount500
	unsigned char stepLocal_11 = var_1_87;
	if (var_1_61 && stepLocal_11) {
		if (var_1_29 == (var_1_46 - var_1_30)) {
			var_1_53 = ((max ((min (16 , var_1_49)) , var_1_20)) - var_1_21);
		} else {
			if (var_1_28 > var_1_44) {
				var_1_53 = -32;
			}
		}
	} else {
		var_1_53 = ((var_1_51 - 256) + (abs (var_1_60 - var_1_4)));
	}


	// From: Req27Batch150Amount500
	unsigned char stepLocal_24 = var_1_34;
	if (var_1_53 >= stepLocal_24) {
		var_1_74 = (min (((var_1_75 - var_1_23) - var_1_76) , (var_1_9 - var_1_34)));
	} else {
		var_1_74 = (var_1_55 + var_1_52);
	}


	// From: Req38Batch150Amount500
	signed long int stepLocal_37 = (var_1_75 + var_1_60) + (var_1_20 - var_1_35);
	unsigned char stepLocal_36 = var_1_86;
	signed long int stepLocal_35 = (max (var_1_90 , var_1_21)) - var_1_85;
	if ((var_1_23 % var_1_75) == stepLocal_36) {
		if (var_1_21 != stepLocal_37) {
			if (var_1_2 != stepLocal_35) {
				if ((var_1_29 - var_1_46) > var_1_15) {
					var_1_96 = (min ((min ((var_1_99 - var_1_74) , -1)) , var_1_34));
				}
			}
		}
	} else {
		var_1_96 = var_1_22;
	}


	// From: Req3Batch150Amount500
	unsigned long int stepLocal_4 = min (var_1_2 , (var_1_99 + var_1_4));
	unsigned long int stepLocal_3 = var_1_73;
	unsigned char stepLocal_2 = ! 1;
	if (stepLocal_2 && var_1_64) {
		if (stepLocal_3 >= ((var_1_104 & var_1_9) * var_1_99)) {
			if (stepLocal_4 <= (var_1_8 / var_1_12)) {
				var_1_10 = (! var_1_13);
			}
		}
	} else {
		var_1_10 = (var_1_64 && var_1_13);
	}


	// From: Req28Batch150Amount500
	unsigned char stepLocal_25 = var_1_49;
	if (stepLocal_25 < (var_1_9 + var_1_58)) {
		var_1_77 = ((var_1_10 || last_1_var_1_77) || var_1_63);
	} else {
		var_1_77 = var_1_65;
	}


	// From: Req5Batch150Amount500
	if (var_1_10) {
		var_1_19 = (var_1_20 - ((var_1_21 + var_1_22) - var_1_23));
	}


	// From: Req8Batch150Amount500
	if (((var_1_2 + var_1_54) * var_1_93) <= var_1_7) {
		if (var_1_87 && ((- var_1_8) > var_1_21)) {
			var_1_32 = var_1_23;
		}
	}


	// From: Req9Batch150Amount500
	if (! var_1_13) {
		var_1_33 = (abs (25));
	} else {
		if ((var_1_34 - (min (var_1_22 , 10))) == var_1_53) {
			var_1_33 = ((var_1_23 + var_1_21) + ((max (var_1_22 , var_1_35)) + 25));
		}
	}


	// From: Req14Batch150Amount500
	if (var_1_10 && var_1_13) {
		if (var_1_47 > var_1_41) {
			var_1_48 = (abs ((var_1_49 + var_1_50) - var_1_21));
		} else {
			if (var_1_45 <= (max ((var_1_47 / var_1_44) , (15.6 + var_1_30)))) {
				var_1_48 = (abs (var_1_50 + var_1_22));
			} else {
				var_1_48 = (var_1_23 + ((min (var_1_50 , var_1_49)) - var_1_21));
			}
		}
	} else {
		if (! var_1_87) {
			if (((min (var_1_34 , var_1_51)) - var_1_49) != var_1_66) {
				if (var_1_31 < var_1_18) {
					if (var_1_17 > var_1_41) {
						if ((min (var_1_41 , (min (var_1_28 , var_1_29)))) <= var_1_44) {
							var_1_48 = (var_1_35 + var_1_49);
						} else {
							if (var_1_13 && var_1_59) {
								var_1_48 = (var_1_52 - var_1_22);
							} else {
								var_1_48 = var_1_7;
							}
						}
					} else {
						var_1_48 = (abs (var_1_7));
					}
				}
			}
		}
	}


	// From: Req51Batch150Amount500
	if (var_1_87) {
		var_1_109 = var_1_52;
	} else {
		var_1_109 = var_1_36;
	}


	// From: Req52Batch150Amount500
	if ((var_1_30 - var_1_46) == var_1_81) {
		var_1_110 = (min ((64 - var_1_54) , var_1_35));
	} else {
		var_1_110 = ((var_1_9 - var_1_33) + var_1_48);
	}


	// From: Req25Batch150Amount500
	unsigned long int stepLocal_23 = var_1_69 * var_1_96;
	unsigned char stepLocal_22 = var_1_59;
	if (128u != stepLocal_23) {
		if (stepLocal_22 || (var_1_31 >= var_1_42)) {
			var_1_71 = (min (var_1_72 , var_1_45));
		} else {
			if (var_1_13) {
				var_1_71 = (abs (var_1_45 - var_1_46));
			}
		}
	} else {
		var_1_71 = var_1_47;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483647);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	assume_abort_if_not(var_1_4 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -2147483648);
	assume_abort_if_not(var_1_12 <= 2147483647);
	assume_abort_if_not(var_1_12 != 0);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 31);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 32);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 1);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 4611686.018427383000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -461168.6018427383000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 4611686.018427383000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 127);
	assume_abort_if_not(var_1_34 <= 255);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 64);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 16383);
	assume_abort_if_not(var_1_39 <= 32767);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	assume_abort_if_not(var_1_42 != 0.0F);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
	assume_abort_if_not(var_1_43 != 0.0F);
	var_1_44 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	assume_abort_if_not(var_1_44 != 0.0F);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 2305843.009213691400e+12F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 2305843.009213691400e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -461168.6018427383000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 63);
	assume_abort_if_not(var_1_49 <= 127);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 64);
	assume_abort_if_not(var_1_50 <= 127);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 127);
	assume_abort_if_not(var_1_51 <= 255);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 127);
	assume_abort_if_not(var_1_52 <= 254);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_57 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_57 >= -2147483647);
	assume_abort_if_not(var_1_57 <= 2147483646);
	var_1_63 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_63 >= 1);
	assume_abort_if_not(var_1_63 <= 1);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 0);
	var_1_68 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_68 >= 0);
	assume_abort_if_not(var_1_68 <= 255);
	assume_abort_if_not(var_1_68 != 0);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 2147483647);
	assume_abort_if_not(var_1_69 <= 4294967294);
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= -922337.2036854766000e+13F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854766000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_75 >= 16382);
	assume_abort_if_not(var_1_75 <= 32766);
	var_1_76 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_76 >= 0);
	assume_abort_if_not(var_1_76 <= 32766);
	var_1_79 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_79 >= 2147483647);
	assume_abort_if_not(var_1_79 <= 4294967294);
	var_1_81 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_81 >= -230584.3009213691400e+13F && var_1_81 <= -1.0e-20F) || (var_1_81 <= 2305843.009213691400e+12F && var_1_81 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_82 >= -230584.3009213691400e+13F && var_1_82 <= -1.0e-20F) || (var_1_82 <= 2305843.009213691400e+12F && var_1_82 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_84 >= -1);
	assume_abort_if_not(var_1_84 <= 32766);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 64);
	assume_abort_if_not(var_1_86 <= 127);
	var_1_89 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_89 >= 1073741823);
	assume_abort_if_not(var_1_89 <= 2147483646);
	var_1_90 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_3 = var_1_3;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_37 = var_1_37;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_58 = var_1_58;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_66 = var_1_66;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_93 = var_1_93;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_107 = var_1_107;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((signed long int) var_1_2)) && ((var_1_2 <= (~ last_1_var_1_78)) ? ((((var_1_2 & last_1_var_1_78) / var_1_4) <= (last_1_var_1_58 | last_1_var_1_106)) ? (var_1_3 == ((unsigned char) (max ((max (var_1_7 , var_1_8)) , var_1_9)))) : 1) : (var_1_3 == ((unsigned char) var_1_9)))) && (((! 1) && var_1_64) ? ((var_1_73 >= ((var_1_104 & var_1_9) * var_1_99)) ? (((min (var_1_2 , (var_1_99 + var_1_4))) <= (var_1_8 / var_1_12)) ? (var_1_10 == ((unsigned char) (! var_1_13))) : 1) : 1) : (var_1_10 == ((unsigned char) (var_1_64 && var_1_13))))) && ((var_1_7 > var_1_78) ? (var_1_15 == ((double) (max (var_1_16 , var_1_17)))) : (var_1_15 == ((double) (min (var_1_16 , (min (var_1_17 , var_1_18)))))))) && (var_1_10 ? (var_1_19 == ((signed char) (var_1_20 - ((var_1_21 + var_1_22) - var_1_23)))) : 1)) && ((var_1_13 || var_1_87) ? (var_1_24 == ((unsigned char) (! var_1_13))) : ((var_1_16 != var_1_17) ? ((var_1_7 != var_1_21) ? (var_1_24 == ((unsigned char) var_1_25)) : 1) : (var_1_24 == ((unsigned char) var_1_13))))) && ((((min (var_1_21 , var_1_8)) <= var_1_9) || (var_1_22 > (var_1_3 * var_1_60))) ? (var_1_26 == ((float) (min ((max (var_1_16 , var_1_18)) , (min (var_1_17 , var_1_28)))))) : (var_1_26 == ((float) ((var_1_29 - var_1_30) + var_1_31))))) && ((((var_1_2 + var_1_54) * var_1_93) <= var_1_7) ? ((var_1_87 && ((- var_1_8) > var_1_21)) ? (var_1_32 == ((signed char) var_1_23)) : 1) : 1)) && ((! var_1_13) ? (var_1_33 == ((unsigned char) (abs (25)))) : (((var_1_34 - (min (var_1_22 , 10))) == var_1_53) ? (var_1_33 == ((unsigned char) ((var_1_23 + var_1_21) + ((max (var_1_22 , var_1_35)) + 25)))) : 1))) && ((var_1_9 > 5) ? (var_1_36 == ((unsigned char) (abs (var_1_8)))) : 1)) && (((min (var_1_16 , var_1_28)) < (var_1_30 - var_1_29)) ? ((var_1_30 < (- (min (var_1_16 , var_1_17)))) ? (var_1_37 == ((signed long int) (min ((var_1_88 + var_1_8) , (var_1_35 + (min (var_1_23 , var_1_104))))))) : 1) : (var_1_37 == ((signed long int) (var_1_88 - (min ((max (var_1_35 , var_1_9)) , (max (var_1_34 , 5))))))))) && ((var_1_105 && var_1_13) ? (var_1_38 == ((unsigned short int) ((max (var_1_34 , (var_1_39 - 5))) + (26778 - var_1_22)))) : (var_1_38 == ((unsigned short int) (var_1_40 - var_1_7))))) && ((((- var_1_15) / (max (var_1_42 , var_1_43))) == var_1_18) ? ((var_1_17 > (var_1_43 / (max (var_1_42 , var_1_44)))) ? (var_1_41 == ((double) (((var_1_45 - var_1_46) - var_1_30) + (max (var_1_29 , (min (var_1_31 , var_1_47))))))) : 1) : 1)) && ((var_1_10 && var_1_13) ? ((var_1_47 > var_1_41) ? (var_1_48 == ((unsigned char) (abs ((var_1_49 + var_1_50) - var_1_21)))) : ((var_1_45 <= (max ((var_1_47 / var_1_44) , (15.6 + var_1_30)))) ? (var_1_48 == ((unsigned char) (abs (var_1_50 + var_1_22)))) : (var_1_48 == ((unsigned char) (var_1_23 + ((min (var_1_50 , var_1_49)) - var_1_21)))))) : ((! var_1_87) ? ((((min (var_1_34 , var_1_51)) - var_1_49) != var_1_66) ? ((var_1_31 < var_1_18) ? ((var_1_17 > var_1_41) ? (((min (var_1_41 , (min (var_1_28 , var_1_29)))) <= var_1_44) ? (var_1_48 == ((unsigned char) (var_1_35 + var_1_49))) : ((var_1_13 && var_1_59) ? (var_1_48 == ((unsigned char) (var_1_52 - var_1_22))) : (var_1_48 == ((unsigned char) var_1_7)))) : (var_1_48 == ((unsigned char) (abs (var_1_7))))) : 1) : 1) : 1))) && ((var_1_61 && var_1_87) ? ((var_1_29 == (var_1_46 - var_1_30)) ? (var_1_53 == ((signed long int) ((max ((min (16 , var_1_49)) , var_1_20)) - var_1_21))) : ((var_1_28 > var_1_44) ? (var_1_53 == ((signed long int) -32)) : 1)) : (var_1_53 == ((signed long int) ((var_1_51 - 256) + (abs (var_1_60 - var_1_4))))))) && (var_1_64 ? (((var_1_30 - var_1_45) < var_1_18) ? (var_1_54 == ((unsigned char) ((max (var_1_52 , var_1_55)) - var_1_22))) : 1) : (var_1_54 == ((unsigned char) ((abs (var_1_22)) + var_1_21))))) && ((var_1_44 <= var_1_41) ? (var_1_56 == ((signed long int) var_1_57)) : 1)) && (((var_1_50 << var_1_55) >= last_1_var_1_107) ? ((((- last_1_var_1_15) + last_1_var_1_26) < (var_1_17 + var_1_31)) ? (var_1_58 == ((unsigned long int) (var_1_55 + last_1_var_1_56))) : (last_1_var_1_64 ? (((var_1_49 / (abs (var_1_21))) < last_1_var_1_3) ? (var_1_58 == ((unsigned long int) (var_1_8 + (var_1_22 + last_1_var_1_58)))) : 1) : 1)) : ((((var_1_34 * 8u) % (var_1_55 + var_1_39)) <= (min (var_1_49 , var_1_4))) ? (var_1_58 == ((unsigned long int) var_1_51)) : (var_1_58 == ((unsigned long int) (min (last_1_var_1_58 , var_1_7))))))) && (((var_1_40 + last_1_var_1_93) >= (last_1_var_1_66 ^ (max (last_1_var_1_3 , var_1_8)))) ? ((var_1_28 <= last_1_var_1_71) ? (var_1_59 == ((unsigned char) ((! var_1_25) || var_1_13))) : (var_1_59 == ((unsigned char) (! var_1_25)))) : 1)) && (var_1_60 == ((signed long int) ((max (var_1_34 , var_1_55)) - var_1_22)))) && (var_1_105 ? (((var_1_46 != var_1_44) || (var_1_41 != (var_1_15 * var_1_18))) ? (var_1_61 == ((unsigned char) ((! var_1_25) || (var_1_64 && (! var_1_63))))) : 1) : 1)) && ((var_1_1 < -8) ? ((var_1_3 > var_1_38) ? (var_1_64 == ((unsigned char) (! var_1_13))) : 1) : (var_1_64 == ((unsigned char) (((! var_1_25) || var_1_13) || var_1_65))))) && ((last_1_var_1_93 >= last_1_var_1_107) ? (((min (var_1_49 , var_1_39)) > last_1_var_1_66) ? (last_1_var_1_24 ? (var_1_66 == ((unsigned long int) (max (var_1_9 , (var_1_4 + var_1_23))))) : (var_1_66 == ((unsigned long int) var_1_40))) : (var_1_66 == ((unsigned long int) var_1_8))) : ((var_1_28 >= (max (var_1_16 , var_1_45))) ? (var_1_66 == ((unsigned long int) (min (((abs (var_1_22)) + last_1_var_1_107) , last_1_var_1_37)))) : (((var_1_9 / (min (1 , var_1_68))) <= (last_1_var_1_101 + last_1_var_1_60)) ? (var_1_66 == ((unsigned long int) (max (var_1_39 , (var_1_8 + last_1_var_1_37))))) : ((last_1_var_1_58 == (max (var_1_9 , var_1_12))) ? (var_1_66 == ((unsigned long int) (max (var_1_21 , var_1_39)))) : (var_1_66 == ((unsigned long int) (max (var_1_9 , (var_1_69 - var_1_49)))))))))) && (var_1_70 == ((signed short int) (max (var_1_51 , var_1_55))))) && ((128u != (var_1_69 * var_1_96)) ? ((var_1_59 || (var_1_31 >= var_1_42)) ? (var_1_71 == ((double) (min (var_1_72 , var_1_45)))) : (var_1_13 ? (var_1_71 == ((double) (abs (var_1_45 - var_1_46)))) : 1)) : (var_1_71 == ((double) var_1_47)))) && ((! var_1_65) ? (var_1_73 == ((unsigned long int) (var_1_8 + (var_1_83 + last_1_var_1_73)))) : (var_1_73 == ((unsigned long int) var_1_40)))) && ((var_1_53 >= var_1_34) ? (var_1_74 == ((signed short int) (min (((var_1_75 - var_1_23) - var_1_76) , (var_1_9 - var_1_34))))) : (var_1_74 == ((signed short int) (var_1_55 + var_1_52))))) && ((var_1_49 < (var_1_9 + var_1_58)) ? (var_1_77 == ((unsigned char) ((var_1_10 || last_1_var_1_77) || var_1_63))) : (var_1_77 == ((unsigned char) var_1_65)))) && ((256 <= last_1_var_1_58) ? ((((var_1_29 - var_1_46) > (max (var_1_72 , last_1_var_1_26))) || last_1_var_1_77) ? (var_1_78 == ((unsigned long int) (min ((var_1_79 - last_1_var_1_104) , last_1_var_1_91)))) : 1) : 1)) && ((var_1_88 < var_1_1) ? (var_1_80 == ((float) ((var_1_29 - (var_1_46 + 99.15f)) + (var_1_81 + var_1_82)))) : (var_1_80 == ((float) (min (1.255f , var_1_28)))))) && (((var_1_8 * var_1_34) < (var_1_57 + var_1_104)) ? ((! var_1_63) ? (var_1_83 == ((signed short int) (var_1_84 - var_1_68))) : 1) : (var_1_83 == ((signed short int) var_1_51)))) && ((((var_1_68 * var_1_104) + 1) <= (var_1_49 / var_1_12)) ? (var_1_85 == ((unsigned char) (((max (var_1_49 , var_1_50)) + (abs (var_1_86))) - var_1_21))) : (var_1_85 == ((unsigned char) (max (var_1_21 , var_1_35)))))) && ((var_1_73 >= (min ((min (var_1_52 , var_1_79)) , var_1_99))) ? ((256 < var_1_99) ? (var_1_87 == ((unsigned char) (var_1_105 || (! (! var_1_63))))) : (var_1_87 == ((unsigned char) (var_1_59 && (var_1_13 || var_1_65))))) : (var_1_87 == ((unsigned char) (var_1_25 && var_1_63))))) && (var_1_64 ? (var_1_63 ? (var_1_88 == ((signed long int) ((var_1_75 + var_1_4) - (var_1_89 - (max (var_1_90 , var_1_35)))))) : (var_1_88 == ((signed long int) ((var_1_39 - var_1_9) + var_1_23)))) : (var_1_88 == ((signed long int) (2 - (max (var_1_90 , var_1_55))))))) && ((256 <= (var_1_75 + var_1_78)) ? ((var_1_78 <= (var_1_106 * (max (var_1_51 , last_1_var_1_91)))) ? (((min (var_1_58 , (var_1_4 + var_1_69))) < var_1_104) ? (var_1_91 == ((signed short int) (var_1_51 - var_1_75))) : 1) : (var_1_91 == ((signed short int) (abs (var_1_85))))) : (var_1_91 == ((signed short int) 25)))) && ((var_1_66 > var_1_56) ? ((! var_1_105) ? (var_1_93 == ((signed long int) ((var_1_39 + var_1_55) + var_1_50))) : 1) : (var_1_93 == ((signed long int) ((var_1_89 - var_1_55) - var_1_106))))) && ((var_1_107 > var_1_49) ? (var_1_94 == ((signed short int) (min ((var_1_106 - var_1_7) , ((var_1_75 - var_1_9) - var_1_51))))) : (var_1_94 == ((signed short int) ((var_1_8 + var_1_83) - var_1_21))))) && (((var_1_23 % var_1_75) == var_1_86) ? ((var_1_21 != ((var_1_75 + var_1_60) + (var_1_20 - var_1_35))) ? ((var_1_2 != ((max (var_1_90 , var_1_21)) - var_1_85)) ? (((var_1_29 - var_1_46) > var_1_15) ? (var_1_96 == ((signed short int) (min ((min ((var_1_99 - var_1_74) , -1)) , var_1_34)))) : 1) : 1) : 1) : (var_1_96 == ((signed short int) var_1_22)))) && (var_1_65 ? (var_1_97 == ((signed char) var_1_35)) : (var_1_97 == ((signed char) var_1_22)))) && (var_1_64 ? (var_1_98 == ((float) var_1_72)) : (var_1_98 == ((float) 1.6f)))) && (var_1_99 == ((unsigned long int) var_1_86))) && (var_1_13 ? (var_1_100 == ((double) var_1_72)) : 1)) && (var_1_25 ? (var_1_101 == ((signed char) var_1_20)) : (var_1_101 == ((signed char) var_1_21)))) && (var_1_102 == ((signed char) var_1_20))) && (var_1_103 == ((signed char) var_1_22))) && (var_1_13 ? (var_1_104 == ((signed long int) var_1_89)) : (var_1_104 == ((signed long int) var_1_90)))) && (last_1_var_1_24 ? (var_1_105 == ((unsigned char) 1)) : 1)) && (var_1_106 == ((unsigned long int) 8u))) && (var_1_61 ? (var_1_107 == ((signed long int) 25)) : (var_1_107 == ((signed long int) last_1_var_1_107)))) && (var_1_61 ? (var_1_108 == ((signed short int) var_1_22)) : 1)) && (var_1_87 ? (var_1_109 == ((signed short int) var_1_52)) : (var_1_109 == ((signed short int) var_1_36)))) && (((var_1_30 - var_1_46) == var_1_81) ? (var_1_110 == ((signed short int) (min ((64 - var_1_54) , var_1_35)))) : (var_1_110 == ((signed short int) ((var_1_9 - var_1_33) + var_1_48))))
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
