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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch59Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 50;
unsigned char var_1_5 = 200;
unsigned char var_1_6 = 64;
signed short int var_1_7 = -2;
signed short int var_1_8 = 1;
unsigned long int var_1_9 = 4064846883;
signed short int var_1_10 = 50;
unsigned long int var_1_12 = 1;
unsigned long int var_1_14 = 3912727740;
unsigned long int var_1_15 = 1798943342;
double var_1_16 = 16.25;
double var_1_17 = 8.9;
double var_1_18 = 100.25;
double var_1_19 = 0.375;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 64;
float var_1_22 = 16.8;
float var_1_23 = 8.2;
float var_1_24 = 128.6;
unsigned long int var_1_25 = 10;
unsigned long int var_1_27 = 3497399989;
unsigned char var_1_28 = 32;
unsigned char var_1_29 = 16;
float var_1_30 = 255.5;
float var_1_31 = 1.25;
unsigned char var_1_32 = 2;
unsigned char var_1_34 = 128;
unsigned char var_1_35 = 100;
unsigned long int var_1_36 = 256;
signed char var_1_37 = -1;
unsigned long int var_1_38 = 3400649248;
signed char var_1_39 = 16;
unsigned short int var_1_40 = 16;
signed short int var_1_41 = 25;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 1;
unsigned long int var_1_47 = 32;
double var_1_48 = 31.5;
signed short int var_1_49 = -4;
float var_1_52 = 8.5;
signed short int var_1_53 = 32;
unsigned short int var_1_55 = 200;
signed long int var_1_56 = 0;
signed long int var_1_58 = -256;
unsigned short int var_1_59 = 10;
unsigned short int var_1_60 = 57336;
float var_1_61 = 99.25;
float var_1_62 = 8.5;
float var_1_63 = 999999999999999.5;
float var_1_64 = 0.0;
float var_1_65 = 0.75;
signed char var_1_66 = 25;
unsigned short int var_1_67 = 32;
unsigned char var_1_68 = 1;
unsigned char var_1_69 = 0;
unsigned short int var_1_70 = 5;
signed short int var_1_71 = 0;
unsigned char var_1_72 = 0;
unsigned short int var_1_73 = 500;
signed char var_1_74 = -32;
signed char var_1_75 = 32;
unsigned char var_1_76 = 100;
float var_1_77 = 8.4;
float var_1_80 = 127.5;
signed short int var_1_81 = 5;
signed short int var_1_82 = -128;
signed short int var_1_83 = 27637;
signed long int var_1_84 = 1;
signed long int var_1_85 = 1883003951;
float var_1_86 = -0.5;
unsigned char var_1_87 = 4;
unsigned char var_1_88 = 2;
unsigned char var_1_89 = 50;
unsigned char var_1_90 = 8;
unsigned char var_1_91 = 64;
double var_1_92 = 64.3;
double var_1_93 = 3.5;
unsigned char var_1_94 = 2;
unsigned long int var_1_95 = 8;
unsigned char var_1_96 = 8;
signed short int var_1_97 = 64;
float var_1_98 = 200.8;
float var_1_99 = 16.5;
unsigned char var_1_100 = 0;
float var_1_101 = 32.25;
unsigned long int var_1_103 = 8;
signed char var_1_104 = -10;
signed long int var_1_105 = -4;
unsigned short int var_1_106 = 256;
unsigned char var_1_107 = 1;
signed long int var_1_108 = 100;
signed char var_1_109 = 16;
signed long int var_1_110 = -256;
unsigned short int var_1_111 = 8;
unsigned char var_1_112 = 64;
signed long int var_1_113 = 5;
float var_1_114 = 128.5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_12 = 1;
unsigned char last_1_var_1_34 = 128;
unsigned short int last_1_var_1_40 = 16;
signed short int last_1_var_1_41 = 25;
unsigned long int last_1_var_1_47 = 32;
double last_1_var_1_48 = 31.5;
unsigned short int last_1_var_1_55 = 200;
unsigned char last_1_var_1_68 = 1;
unsigned short int last_1_var_1_70 = 5;
signed short int last_1_var_1_71 = 0;
unsigned char last_1_var_1_72 = 0;
signed short int last_1_var_1_81 = 5;
signed long int last_1_var_1_84 = 1;
unsigned long int last_1_var_1_103 = 8;
signed long int last_1_var_1_105 = -4;
unsigned short int last_1_var_1_106 = 256;
signed long int last_1_var_1_110 = -256;
signed long int last_1_var_1_113 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req20Batch59Amount500
	if (last_1_var_1_48 < ((var_1_18 - var_1_19) / var_1_52)) {
		if (var_1_27 != var_1_6) {
			var_1_53 = (256 - var_1_21);
		} else {
			if (last_1_var_1_110 != var_1_8) {
				var_1_53 = (last_1_var_1_110 + (max ((last_1_var_1_41 + last_1_var_1_71) , last_1_var_1_81)));
			} else {
				var_1_53 = (min (var_1_10 , -256));
			}
		}
	} else {
		if (last_1_var_1_72 && (last_1_var_1_12 < var_1_14)) {
			if (last_1_var_1_71 == (max (last_1_var_1_103 , (var_1_5 - var_1_21)))) {
				var_1_53 = var_1_29;
			} else {
				var_1_53 = ((var_1_35 + 5) - var_1_10);
			}
		} else {
			var_1_53 = last_1_var_1_110;
		}
	}


	// From: Req29Batch59Amount500
	var_1_71 = ((abs (var_1_8 - var_1_6)) - var_1_53);


	// From: Req8Batch59Amount500
	unsigned long int stepLocal_7 = max (last_1_var_1_47 , last_1_var_1_106);
	if (last_1_var_1_103 <= stepLocal_7) {
		var_1_28 = (max ((var_1_5 - var_1_8) , (16 + var_1_29)));
	}


	// From: Req3Batch59Amount500
	if (! last_1_var_1_68) {
		var_1_12 = (max (var_1_10 , var_1_5));
	} else {
		var_1_12 = (min ((var_1_14 - (var_1_15 - last_1_var_1_34)) , 32u));
	}


	// From: Req54Batch59Amount500
	var_1_111 = last_1_var_1_70;


	// From: Req35Batch59Amount500
	unsigned long int stepLocal_25 = - (var_1_111 / var_1_15);
	if (var_1_38 != stepLocal_25) {
		var_1_81 = (abs (var_1_82));
	} else {
		var_1_81 = ((var_1_83 - (min (var_1_10 , var_1_29))) - 4);
	}


	// From: Req39Batch59Amount500
	unsigned short int stepLocal_28 = var_1_111;
	if (stepLocal_28 < var_1_6) {
		if (var_1_46) {
			var_1_92 = (min (((5.8 + var_1_65) + var_1_64) , (min (var_1_63 , var_1_93))));
		} else {
			var_1_92 = (abs (var_1_65 + var_1_23));
		}
	} else {
		var_1_92 = (min ((max (var_1_93 , (var_1_80 - var_1_31))) , var_1_62));
	}


	// From: Req46Batch59Amount500
	if (last_1_var_1_68) {
		var_1_103 = var_1_83;
	} else {
		var_1_103 = var_1_75;
	}


	// From: Req49Batch59Amount500
	var_1_106 = var_1_103;


	// From: Req12Batch59Amount500
	unsigned long int stepLocal_12 = - var_1_9;
	if (last_1_var_1_113 >= stepLocal_12) {
		var_1_36 = var_1_5;
	} else {
		var_1_36 = var_1_35;
	}


	// From: Req5Batch59Amount500
	var_1_20 = ((var_1_21 - var_1_8) + var_1_6);


	// From: Req6Batch59Amount500
	var_1_22 = (var_1_23 + var_1_24);


	// From: Req15Batch59Amount500
	var_1_41 = ((var_1_21 + (max (var_1_29 , last_1_var_1_41))) + var_1_35);


	// From: Req16Batch59Amount500
	var_1_42 = ((var_1_43 && (var_1_44 && var_1_45)) && var_1_46);


	// From: Req32Batch59Amount500
	if (var_1_43) {
		var_1_74 = (var_1_8 - var_1_75);
	}


	// From: Req33Batch59Amount500
	if (var_1_46) {
		var_1_76 = var_1_35;
	}


	// From: Req42Batch59Amount500
	var_1_98 = var_1_63;


	// From: Req43Batch59Amount500
	if (var_1_42) {
		var_1_99 = var_1_24;
	} else {
		var_1_99 = var_1_23;
	}


	// From: Req45Batch59Amount500
	if (var_1_42) {
		var_1_101 = var_1_23;
	}


	// From: Req47Batch59Amount500
	var_1_104 = var_1_75;


	// From: Req48Batch59Amount500
	var_1_105 = last_1_var_1_105;


	// From: Req50Batch59Amount500
	if (var_1_45) {
		var_1_107 = var_1_43;
	} else {
		var_1_107 = var_1_69;
	}


	// From: Req52Batch59Amount500
	var_1_109 = var_1_88;


	// From: Req55Batch59Amount500
	if (var_1_107) {
		var_1_112 = var_1_75;
	} else {
		var_1_112 = var_1_90;
	}


	// From: Req57Batch59Amount500
	var_1_114 = var_1_80;


	// From: Req1Batch59Amount500
	if ((var_1_12 + (var_1_36 + 4u)) != var_1_103) {
		var_1_1 = ((var_1_5 - 2) - var_1_6);
	} else {
		var_1_1 = var_1_6;
	}


	// From: Req38Batch59Amount500
	signed long int stepLocal_27 = var_1_111 * (var_1_21 / var_1_8);
	if (var_1_53 > stepLocal_27) {
		var_1_87 = (((var_1_8 + 32) + (max (16 , var_1_88))) + ((abs (var_1_89)) + var_1_90));
	} else {
		var_1_87 = (var_1_5 - ((max (var_1_21 , var_1_91)) - (abs (var_1_8))));
	}


	// From: Req27Batch59Amount500
	unsigned long int stepLocal_22 = var_1_36;
	if (var_1_18 >= (var_1_63 * var_1_92)) {
		if (-50 <= stepLocal_22) {
			var_1_68 = (! var_1_69);
		}
	} else {
		var_1_68 = (! var_1_43);
	}


	// From: Req51Batch59Amount500
	if (var_1_68) {
		var_1_108 = var_1_88;
	} else {
		var_1_108 = -4;
	}


	// From: Req4Batch59Amount500
	unsigned long int stepLocal_6 = var_1_103;
	unsigned char stepLocal_5 = var_1_5;
	if (stepLocal_6 <= var_1_36) {
		var_1_16 = (abs (var_1_17));
	} else {
		if (stepLocal_5 < var_1_15) {
			var_1_16 = 256.5;
		} else {
			var_1_16 = (abs (var_1_18 - var_1_19));
		}
	}


	// From: Req56Batch59Amount500
	if (var_1_68) {
		if ((var_1_17 * var_1_92) > (var_1_31 - var_1_18)) {
			var_1_113 = (var_1_28 + (var_1_71 + var_1_29));
		} else {
			var_1_113 = (var_1_28 - var_1_81);
		}
	}


	// From: Req37Batch59Amount500
	unsigned char stepLocal_26 = ! var_1_68;
	if (stepLocal_26 && var_1_68) {
		var_1_86 = (var_1_23 + (24.85f + var_1_65));
	}


	// From: Req44Batch59Amount500
	if (var_1_107) {
		var_1_100 = var_1_91;
	}


	// From: Req28Batch59Amount500
	if ((min (var_1_103 , var_1_108)) <= (last_1_var_1_70 + (- var_1_60))) {
		var_1_70 = (max (var_1_8 , var_1_111));
	} else {
		if ((var_1_103 < var_1_87) && var_1_69) {
			if (8 == var_1_58) {
				var_1_70 = (abs (var_1_29));
			} else {
				var_1_70 = var_1_5;
			}
		} else {
			var_1_70 = (abs (var_1_87));
		}
	}


	// From: Req53Batch59Amount500
	var_1_110 = var_1_1;


	// From: Req18Batch59Amount500
	if ((var_1_27 - (var_1_15 - var_1_100)) < (var_1_103 >> var_1_8)) {
		var_1_48 = ((24.8 + 2.375) - var_1_19);
	} else {
		var_1_48 = (var_1_23 + 9.99999999925E9);
	}


	// From: Req9Batch59Amount500
	if (var_1_17 <= (- (64.75 - var_1_19))) {
		if ((var_1_16 * var_1_48) > var_1_23) {
			var_1_30 = (min (var_1_19 , var_1_23));
		} else {
			var_1_30 = (var_1_19 - 64.75f);
		}
	} else {
		var_1_30 = ((max (var_1_18 , var_1_19)) - var_1_31);
	}


	// From: Req30Batch59Amount500
	if (var_1_45 && var_1_68) {
		if (var_1_41 != var_1_36) {
			var_1_72 = (((var_1_114 + var_1_48) >= var_1_23) || (! var_1_69));
		}
	} else {
		var_1_72 = (! (var_1_43 && var_1_44));
	}


	// From: Req7Batch59Amount500
	if (var_1_17 > ((var_1_48 * var_1_24) * (- var_1_92))) {
		if (var_1_101 > var_1_24) {
			var_1_25 = ((max (var_1_14 , var_1_27)) - var_1_6);
		}
	}


	// From: Req10Batch59Amount500
	unsigned char stepLocal_9 = (var_1_10 & var_1_21) > var_1_111;
	unsigned char stepLocal_8 = var_1_72;
	if (var_1_107) {
		if (stepLocal_9 || var_1_72) {
			if (stepLocal_8 || (var_1_6 == var_1_36)) {
				var_1_32 = (abs (var_1_29));
			}
		}
	}


	// From: Req22Batch59Amount500
	if (! var_1_72) {
		if (var_1_42) {
			var_1_56 = ((abs (var_1_71)) + var_1_58);
		} else {
			var_1_56 = (8 - var_1_32);
		}
	} else {
		if (var_1_46) {
			var_1_56 = ((max (var_1_29 , var_1_103)) + var_1_6);
		} else {
			var_1_56 = (var_1_21 - (abs (var_1_35)));
		}
	}


	// From: Req34Batch59Amount500
	unsigned long int stepLocal_24 = var_1_25;
	signed char stepLocal_23 = var_1_109;
	if (stepLocal_23 != var_1_60) {
		if (((var_1_60 - var_1_35) * var_1_111) < stepLocal_24) {
			var_1_77 = (min (var_1_31 , (min (var_1_23 , 199.125f))));
		} else {
			var_1_77 = var_1_18;
		}
	} else {
		var_1_77 = (((var_1_64 - var_1_65) - var_1_80) + var_1_23);
	}


	// From: Req36Batch59Amount500
	if (var_1_45) {
		if (var_1_43) {
			var_1_84 = ((var_1_85 - var_1_29) - last_1_var_1_84);
		}
	} else {
		var_1_84 = (min (var_1_75 , (var_1_25 - var_1_28)));
	}


	// From: Req2Batch59Amount500
	unsigned long int stepLocal_4 = var_1_9 - var_1_5;
	unsigned long int stepLocal_3 = ~ (min (var_1_28 , var_1_12));
	unsigned char stepLocal_2 = var_1_28;
	signed long int stepLocal_1 = min ((var_1_5 - var_1_6) , 4);
	signed long int stepLocal_0 = var_1_5 ^ (var_1_8 + var_1_6);
	if (var_1_5 >= stepLocal_3) {
		if (stepLocal_2 <= (var_1_25 >> var_1_8)) {
			if (var_1_25 > stepLocal_0) {
				var_1_7 = (min ((var_1_8 + 128) , var_1_28));
			} else {
				if (var_1_25 > stepLocal_4) {
					if (var_1_8 >= stepLocal_1) {
						var_1_7 = ((var_1_6 + var_1_8) + ((min (var_1_10 , var_1_5)) - 16));
					}
				} else {
					if (256.1 < var_1_16) {
						var_1_7 = -256;
					} else {
						var_1_7 = -16;
					}
				}
			}
		}
	} else {
		var_1_7 = var_1_5;
	}


	// From: Req11Batch59Amount500
	unsigned char stepLocal_11 = var_1_29;
	unsigned long int stepLocal_10 = var_1_36;
	if ((var_1_71 - var_1_15) <= stepLocal_10) {
		var_1_34 = var_1_5;
	} else {
		if (stepLocal_11 >= var_1_7) {
			var_1_34 = var_1_21;
		} else {
			if (var_1_72) {
				var_1_34 = (var_1_5 - var_1_35);
			}
		}
	}


	// From: Req14Batch59Amount500
	unsigned long int stepLocal_16 = 3678214906u - var_1_110;
	unsigned char stepLocal_15 = var_1_107;
	if (((max (var_1_34 , var_1_6)) == var_1_39) || stepLocal_15) {
		if (((var_1_21 * var_1_25) + (var_1_34 * var_1_36)) >= stepLocal_16) {
			var_1_40 = var_1_110;
		} else {
			var_1_40 = ((var_1_35 + last_1_var_1_40) + var_1_5);
		}
	}


	// From: Req40Batch59Amount500
	signed long int stepLocal_32 = var_1_85;
	unsigned char stepLocal_31 = (3753723283u - var_1_95) != var_1_12;
	signed short int stepLocal_30 = var_1_8;
	signed long int stepLocal_29 = var_1_53 / (abs (var_1_91));
	if (stepLocal_32 > var_1_103) {
		if ((var_1_16 * (max (var_1_80 , var_1_64))) != var_1_65) {
			if (stepLocal_29 > (var_1_32 * -2)) {
				var_1_94 = (min ((var_1_5 - var_1_91) , var_1_90));
			} else {
				if (stepLocal_31 || var_1_42) {
					var_1_94 = (min (var_1_96 , (min ((min (var_1_89 , var_1_75)) , var_1_5))));
				} else {
					var_1_94 = ((max ((abs (var_1_6)) , var_1_91)) + (var_1_8 + var_1_88));
				}
			}
		} else {
			var_1_94 = var_1_96;
		}
	} else {
		if (stepLocal_30 < -256) {
			var_1_94 = (abs (min ((max (var_1_29 , var_1_75)) , (var_1_5 - var_1_35))));
		} else {
			var_1_94 = (var_1_89 + var_1_8);
		}
	}


	// From: Req41Batch59Amount500
	unsigned short int stepLocal_33 = var_1_70;
	if (var_1_72) {
		if (var_1_85 > stepLocal_33) {
			if ((var_1_17 / (max (var_1_52 , var_1_64))) > var_1_23) {
				var_1_97 = var_1_83;
			} else {
				var_1_97 = var_1_89;
			}
		} else {
			var_1_97 = var_1_10;
		}
	} else {
		var_1_97 = var_1_35;
	}


	// From: Req21Batch59Amount500
	signed long int stepLocal_17 = -16 ^ var_1_40;
	if (var_1_107) {
		if (last_1_var_1_55 > stepLocal_17) {
			if (! (var_1_35 >= 5)) {
				var_1_55 = (((var_1_25 + var_1_105) + var_1_35) + var_1_29);
			}
		}
	} else {
		var_1_55 = (var_1_29 + var_1_105);
	}


	// From: Req31Batch59Amount500
	if ((var_1_27 > (var_1_111 * var_1_8)) || var_1_42) {
		var_1_73 = (var_1_21 + var_1_5);
	} else {
		if (var_1_8 != ((abs (var_1_7)) - var_1_35)) {
			var_1_73 = (max (8 , (var_1_60 - var_1_40)));
		} else {
			var_1_73 = var_1_70;
		}
	}


	// From: Req26Batch59Amount500
	var_1_67 = (var_1_73 + var_1_10);


	// From: Req24Batch59Amount500
	if ((var_1_25 & (min (var_1_110 , var_1_67))) == (var_1_106 + (-64 / var_1_5))) {
		var_1_61 = (var_1_62 - (var_1_63 + (var_1_64 - var_1_65)));
	}


	// From: Req19Batch59Amount500
	if (var_1_21 != (var_1_67 + var_1_12)) {
		if (var_1_23 > (var_1_30 / var_1_52)) {
			var_1_49 = (var_1_35 - (max (var_1_21 , var_1_8)));
		} else {
			if ((var_1_18 <= (var_1_30 * var_1_24)) && var_1_44) {
				var_1_49 = (abs (var_1_21 + (var_1_94 - var_1_20)));
			}
		}
	}


	// From: Req23Batch59Amount500
	if (var_1_45) {
		if (var_1_36 <= var_1_97) {
			var_1_59 = (var_1_28 + ((var_1_29 + 10) + var_1_49));
		} else {
			if (var_1_9 >= var_1_15) {
				var_1_59 = (var_1_5 + (var_1_97 + var_1_76));
			} else {
				var_1_59 = (var_1_60 - var_1_81);
			}
		}
	}


	// From: Req25Batch59Amount500
	unsigned long int stepLocal_21 = 100000u;
	signed long int stepLocal_20 = (var_1_5 + var_1_67) - var_1_59;
	signed long int stepLocal_19 = abs (min (25 , var_1_8));
	unsigned long int stepLocal_18 = max (64 , var_1_14);
	if (var_1_6 > stepLocal_19) {
		if (var_1_38 == stepLocal_21) {
			var_1_66 = var_1_5;
		} else {
			if (stepLocal_20 < (var_1_35 - var_1_25)) {
				if (stepLocal_18 > ((- var_1_15) + var_1_59)) {
					var_1_66 = var_1_5;
				}
			}
		}
	}


	// From: Req17Batch59Amount500
	if (! var_1_44) {
		var_1_47 = (var_1_14 - (var_1_59 + var_1_73));
	}


	// From: Req13Batch59Amount500
	unsigned long int stepLocal_14 = (var_1_38 - var_1_21) - var_1_47;
	unsigned long int stepLocal_13 = var_1_27;
	if (stepLocal_14 < (var_1_9 - var_1_10)) {
		if (var_1_5 < stepLocal_13) {
			var_1_37 = var_1_5;
		} else {
			var_1_37 = (abs (max (var_1_5 , (min (var_1_8 , var_1_39)))));
		}
	} else {
		var_1_37 = var_1_8;
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 190);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 1);
	assume_abort_if_not(var_1_8 <= 31);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967294);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 1073741823);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 63);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 2147483647);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 3221225471);
	assume_abort_if_not(var_1_38 <= 4294967295);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -126);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 1);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= -922337.2036854776000e+13F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	assume_abort_if_not(var_1_52 != 0.0F);
	var_1_58 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_58 >= -1073741823);
	assume_abort_if_not(var_1_58 <= 1073741823);
	var_1_60 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_60 >= 32767);
	assume_abort_if_not(var_1_60 <= 65534);
	var_1_62 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854766000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_63 >= 0.0F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 4611686.018427383000e+12F && var_1_63 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_64 >= 2305843.009213691400e+12F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427383000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= 0.0F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 2305843.009213691400e+12F && var_1_65 >= 1.0e-20F ));
	var_1_69 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 0);
	var_1_75 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 126);
	var_1_80 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_80 >= 0.0F && var_1_80 <= -1.0e-20F) || (var_1_80 <= 4611686.018427383000e+12F && var_1_80 >= 1.0e-20F ));
	var_1_82 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_82 >= -32766);
	assume_abort_if_not(var_1_82 <= 32766);
	var_1_83 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_83 >= 16382);
	assume_abort_if_not(var_1_83 <= 32766);
	var_1_85 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_85 >= 1073741822);
	assume_abort_if_not(var_1_85 <= 2147483646);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 63);
	var_1_89 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_89 >= 0);
	assume_abort_if_not(var_1_89 <= 64);
	var_1_90 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_90 >= 0);
	assume_abort_if_not(var_1_90 <= 63);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 63);
	assume_abort_if_not(var_1_91 <= 127);
	var_1_93 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_93 >= -922337.2036854766000e+13F && var_1_93 <= -1.0e-20F) || (var_1_93 <= 9223372.036854766000e+12F && var_1_93 >= 1.0e-20F ));
	var_1_95 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_95 >= 0);
	assume_abort_if_not(var_1_95 <= 2147483647);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 0);
	assume_abort_if_not(var_1_96 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_55 = var_1_55;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_105 = var_1_105;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_110 = var_1_110;
	last_1_var_1_113 = var_1_113;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_12 + (var_1_36 + 4u)) != var_1_103) ? (var_1_1 == ((unsigned char) ((var_1_5 - 2) - var_1_6))) : (var_1_1 == ((unsigned char) var_1_6))) && ((var_1_5 >= (~ (min (var_1_28 , var_1_12)))) ? ((var_1_28 <= (var_1_25 >> var_1_8)) ? ((var_1_25 > (var_1_5 ^ (var_1_8 + var_1_6))) ? (var_1_7 == ((signed short int) (min ((var_1_8 + 128) , var_1_28)))) : ((var_1_25 > (var_1_9 - var_1_5)) ? ((var_1_8 >= (min ((var_1_5 - var_1_6) , 4))) ? (var_1_7 == ((signed short int) ((var_1_6 + var_1_8) + ((min (var_1_10 , var_1_5)) - 16)))) : 1) : ((256.1 < var_1_16) ? (var_1_7 == ((signed short int) -256)) : (var_1_7 == ((signed short int) -16))))) : 1) : (var_1_7 == ((signed short int) var_1_5)))) && ((! last_1_var_1_68) ? (var_1_12 == ((unsigned long int) (max (var_1_10 , var_1_5)))) : (var_1_12 == ((unsigned long int) (min ((var_1_14 - (var_1_15 - last_1_var_1_34)) , 32u)))))) && ((var_1_103 <= var_1_36) ? (var_1_16 == ((double) (abs (var_1_17)))) : ((var_1_5 < var_1_15) ? (var_1_16 == ((double) 256.5)) : (var_1_16 == ((double) (abs (var_1_18 - var_1_19))))))) && (var_1_20 == ((unsigned char) ((var_1_21 - var_1_8) + var_1_6)))) && (var_1_22 == ((float) (var_1_23 + var_1_24)))) && ((var_1_17 > ((var_1_48 * var_1_24) * (- var_1_92))) ? ((var_1_101 > var_1_24) ? (var_1_25 == ((unsigned long int) ((max (var_1_14 , var_1_27)) - var_1_6))) : 1) : 1)) && ((last_1_var_1_103 <= (max (last_1_var_1_47 , last_1_var_1_106))) ? (var_1_28 == ((unsigned char) (max ((var_1_5 - var_1_8) , (16 + var_1_29))))) : 1)) && ((var_1_17 <= (- (64.75 - var_1_19))) ? (((var_1_16 * var_1_48) > var_1_23) ? (var_1_30 == ((float) (min (var_1_19 , var_1_23)))) : (var_1_30 == ((float) (var_1_19 - 64.75f)))) : (var_1_30 == ((float) ((max (var_1_18 , var_1_19)) - var_1_31))))) && (var_1_107 ? ((((var_1_10 & var_1_21) > var_1_111) || var_1_72) ? ((var_1_72 || (var_1_6 == var_1_36)) ? (var_1_32 == ((unsigned char) (abs (var_1_29)))) : 1) : 1) : 1)) && (((var_1_71 - var_1_15) <= var_1_36) ? (var_1_34 == ((unsigned char) var_1_5)) : ((var_1_29 >= var_1_7) ? (var_1_34 == ((unsigned char) var_1_21)) : (var_1_72 ? (var_1_34 == ((unsigned char) (var_1_5 - var_1_35))) : 1)))) && ((last_1_var_1_113 >= (- var_1_9)) ? (var_1_36 == ((unsigned long int) var_1_5)) : (var_1_36 == ((unsigned long int) var_1_35)))) && ((((var_1_38 - var_1_21) - var_1_47) < (var_1_9 - var_1_10)) ? ((var_1_5 < var_1_27) ? (var_1_37 == ((signed char) var_1_5)) : (var_1_37 == ((signed char) (abs (max (var_1_5 , (min (var_1_8 , var_1_39)))))))) : (var_1_37 == ((signed char) var_1_8)))) && ((((max (var_1_34 , var_1_6)) == var_1_39) || var_1_107) ? ((((var_1_21 * var_1_25) + (var_1_34 * var_1_36)) >= (3678214906u - var_1_110)) ? (var_1_40 == ((unsigned short int) var_1_110)) : (var_1_40 == ((unsigned short int) ((var_1_35 + last_1_var_1_40) + var_1_5)))) : 1)) && (var_1_41 == ((signed short int) ((var_1_21 + (max (var_1_29 , last_1_var_1_41))) + var_1_35)))) && (var_1_42 == ((unsigned char) ((var_1_43 && (var_1_44 && var_1_45)) && var_1_46)))) && ((! var_1_44) ? (var_1_47 == ((unsigned long int) (var_1_14 - (var_1_59 + var_1_73)))) : 1)) && (((var_1_27 - (var_1_15 - var_1_100)) < (var_1_103 >> var_1_8)) ? (var_1_48 == ((double) ((24.8 + 2.375) - var_1_19))) : (var_1_48 == ((double) (var_1_23 + 9.99999999925E9))))) && ((var_1_21 != (var_1_67 + var_1_12)) ? ((var_1_23 > (var_1_30 / var_1_52)) ? (var_1_49 == ((signed short int) (var_1_35 - (max (var_1_21 , var_1_8))))) : (((var_1_18 <= (var_1_30 * var_1_24)) && var_1_44) ? (var_1_49 == ((signed short int) (abs (var_1_21 + (var_1_94 - var_1_20))))) : 1)) : 1)) && ((last_1_var_1_48 < ((var_1_18 - var_1_19) / var_1_52)) ? ((var_1_27 != var_1_6) ? (var_1_53 == ((signed short int) (256 - var_1_21))) : ((last_1_var_1_110 != var_1_8) ? (var_1_53 == ((signed short int) (last_1_var_1_110 + (max ((last_1_var_1_41 + last_1_var_1_71) , last_1_var_1_81))))) : (var_1_53 == ((signed short int) (min (var_1_10 , -256)))))) : ((last_1_var_1_72 && (last_1_var_1_12 < var_1_14)) ? ((last_1_var_1_71 == (max (last_1_var_1_103 , (var_1_5 - var_1_21)))) ? (var_1_53 == ((signed short int) var_1_29)) : (var_1_53 == ((signed short int) ((var_1_35 + 5) - var_1_10)))) : (var_1_53 == ((signed short int) last_1_var_1_110))))) && (var_1_107 ? ((last_1_var_1_55 > (-16 ^ var_1_40)) ? ((! (var_1_35 >= 5)) ? (var_1_55 == ((unsigned short int) (((var_1_25 + var_1_105) + var_1_35) + var_1_29))) : 1) : 1) : (var_1_55 == ((unsigned short int) (var_1_29 + var_1_105))))) && ((! var_1_72) ? (var_1_42 ? (var_1_56 == ((signed long int) ((abs (var_1_71)) + var_1_58))) : (var_1_56 == ((signed long int) (8 - var_1_32)))) : (var_1_46 ? (var_1_56 == ((signed long int) ((max (var_1_29 , var_1_103)) + var_1_6))) : (var_1_56 == ((signed long int) (var_1_21 - (abs (var_1_35)))))))) && (var_1_45 ? ((var_1_36 <= var_1_97) ? (var_1_59 == ((unsigned short int) (var_1_28 + ((var_1_29 + 10) + var_1_49)))) : ((var_1_9 >= var_1_15) ? (var_1_59 == ((unsigned short int) (var_1_5 + (var_1_97 + var_1_76)))) : (var_1_59 == ((unsigned short int) (var_1_60 - var_1_81))))) : 1)) && (((var_1_25 & (min (var_1_110 , var_1_67))) == (var_1_106 + (-64 / var_1_5))) ? (var_1_61 == ((float) (var_1_62 - (var_1_63 + (var_1_64 - var_1_65))))) : 1)) && ((var_1_6 > (abs (min (25 , var_1_8)))) ? ((var_1_38 == 100000u) ? (var_1_66 == ((signed char) var_1_5)) : ((((var_1_5 + var_1_67) - var_1_59) < (var_1_35 - var_1_25)) ? (((max (64 , var_1_14)) > ((- var_1_15) + var_1_59)) ? (var_1_66 == ((signed char) var_1_5)) : 1) : 1)) : 1)) && (var_1_67 == ((unsigned short int) (var_1_73 + var_1_10)))) && ((var_1_18 >= (var_1_63 * var_1_92)) ? ((-50 <= var_1_36) ? (var_1_68 == ((unsigned char) (! var_1_69))) : 1) : (var_1_68 == ((unsigned char) (! var_1_43))))) && (((min (var_1_103 , var_1_108)) <= (last_1_var_1_70 + (- var_1_60))) ? (var_1_70 == ((unsigned short int) (max (var_1_8 , var_1_111)))) : (((var_1_103 < var_1_87) && var_1_69) ? ((8 == var_1_58) ? (var_1_70 == ((unsigned short int) (abs (var_1_29)))) : (var_1_70 == ((unsigned short int) var_1_5))) : (var_1_70 == ((unsigned short int) (abs (var_1_87))))))) && (var_1_71 == ((signed short int) ((abs (var_1_8 - var_1_6)) - var_1_53)))) && ((var_1_45 && var_1_68) ? ((var_1_41 != var_1_36) ? (var_1_72 == ((unsigned char) (((var_1_114 + var_1_48) >= var_1_23) || (! var_1_69)))) : 1) : (var_1_72 == ((unsigned char) (! (var_1_43 && var_1_44)))))) && (((var_1_27 > (var_1_111 * var_1_8)) || var_1_42) ? (var_1_73 == ((unsigned short int) (var_1_21 + var_1_5))) : ((var_1_8 != ((abs (var_1_7)) - var_1_35)) ? (var_1_73 == ((unsigned short int) (max (8 , (var_1_60 - var_1_40))))) : (var_1_73 == ((unsigned short int) var_1_70))))) && (var_1_43 ? (var_1_74 == ((signed char) (var_1_8 - var_1_75))) : 1)) && (var_1_46 ? (var_1_76 == ((unsigned char) var_1_35)) : 1)) && ((var_1_109 != var_1_60) ? ((((var_1_60 - var_1_35) * var_1_111) < var_1_25) ? (var_1_77 == ((float) (min (var_1_31 , (min (var_1_23 , 199.125f)))))) : (var_1_77 == ((float) var_1_18))) : (var_1_77 == ((float) (((var_1_64 - var_1_65) - var_1_80) + var_1_23))))) && ((var_1_38 != (- (var_1_111 / var_1_15))) ? (var_1_81 == ((signed short int) (abs (var_1_82)))) : (var_1_81 == ((signed short int) ((var_1_83 - (min (var_1_10 , var_1_29))) - 4))))) && (var_1_45 ? (var_1_43 ? (var_1_84 == ((signed long int) ((var_1_85 - var_1_29) - last_1_var_1_84))) : 1) : (var_1_84 == ((signed long int) (min (var_1_75 , (var_1_25 - var_1_28))))))) && (((! var_1_68) && var_1_68) ? (var_1_86 == ((float) (var_1_23 + (24.85f + var_1_65)))) : 1)) && ((var_1_53 > (var_1_111 * (var_1_21 / var_1_8))) ? (var_1_87 == ((unsigned char) (((var_1_8 + 32) + (max (16 , var_1_88))) + ((abs (var_1_89)) + var_1_90)))) : (var_1_87 == ((unsigned char) (var_1_5 - ((max (var_1_21 , var_1_91)) - (abs (var_1_8)))))))) && ((var_1_111 < var_1_6) ? (var_1_46 ? (var_1_92 == ((double) (min (((5.8 + var_1_65) + var_1_64) , (min (var_1_63 , var_1_93)))))) : (var_1_92 == ((double) (abs (var_1_65 + var_1_23))))) : (var_1_92 == ((double) (min ((max (var_1_93 , (var_1_80 - var_1_31))) , var_1_62)))))) && ((var_1_85 > var_1_103) ? (((var_1_16 * (max (var_1_80 , var_1_64))) != var_1_65) ? (((var_1_53 / (abs (var_1_91))) > (var_1_32 * -2)) ? (var_1_94 == ((unsigned char) (min ((var_1_5 - var_1_91) , var_1_90)))) : ((((3753723283u - var_1_95) != var_1_12) || var_1_42) ? (var_1_94 == ((unsigned char) (min (var_1_96 , (min ((min (var_1_89 , var_1_75)) , var_1_5)))))) : (var_1_94 == ((unsigned char) ((max ((abs (var_1_6)) , var_1_91)) + (var_1_8 + var_1_88)))))) : (var_1_94 == ((unsigned char) var_1_96))) : ((var_1_8 < -256) ? (var_1_94 == ((unsigned char) (abs (min ((max (var_1_29 , var_1_75)) , (var_1_5 - var_1_35)))))) : (var_1_94 == ((unsigned char) (var_1_89 + var_1_8)))))) && (var_1_72 ? ((var_1_85 > var_1_70) ? (((var_1_17 / (max (var_1_52 , var_1_64))) > var_1_23) ? (var_1_97 == ((signed short int) var_1_83)) : (var_1_97 == ((signed short int) var_1_89))) : (var_1_97 == ((signed short int) var_1_10))) : (var_1_97 == ((signed short int) var_1_35)))) && (var_1_98 == ((float) var_1_63))) && (var_1_42 ? (var_1_99 == ((float) var_1_24)) : (var_1_99 == ((float) var_1_23)))) && (var_1_107 ? (var_1_100 == ((unsigned char) var_1_91)) : 1)) && (var_1_42 ? (var_1_101 == ((float) var_1_23)) : 1)) && (last_1_var_1_68 ? (var_1_103 == ((unsigned long int) var_1_83)) : (var_1_103 == ((unsigned long int) var_1_75)))) && (var_1_104 == ((signed char) var_1_75))) && (var_1_105 == ((signed long int) last_1_var_1_105))) && (var_1_106 == ((unsigned short int) var_1_103))) && (var_1_45 ? (var_1_107 == ((unsigned char) var_1_43)) : (var_1_107 == ((unsigned char) var_1_69)))) && (var_1_68 ? (var_1_108 == ((signed long int) var_1_88)) : (var_1_108 == ((signed long int) -4)))) && (var_1_109 == ((signed char) var_1_88))) && (var_1_110 == ((signed long int) var_1_1))) && (var_1_111 == ((unsigned short int) last_1_var_1_70))) && (var_1_107 ? (var_1_112 == ((unsigned char) var_1_75)) : (var_1_112 == ((unsigned char) var_1_90)))) && (var_1_68 ? (((var_1_17 * var_1_92) > (var_1_31 - var_1_18)) ? (var_1_113 == ((signed long int) (var_1_28 + (var_1_71 + var_1_29)))) : (var_1_113 == ((signed long int) (var_1_28 - var_1_81)))) : 1)) && (var_1_114 == ((float) var_1_80))
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
