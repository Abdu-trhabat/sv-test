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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch191Amount500.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 8;
unsigned short int var_1_6 = 32;
unsigned short int var_1_7 = 128;
unsigned long int var_1_8 = 1000;
unsigned short int var_1_10 = 25;
unsigned short int var_1_12 = 4;
unsigned short int var_1_13 = 59023;
unsigned short int var_1_14 = 23697;
unsigned short int var_1_15 = 128;
unsigned short int var_1_16 = 128;
unsigned short int var_1_17 = 64;
unsigned char var_1_18 = 0;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 100;
signed short int var_1_22 = 25;
signed short int var_1_23 = 5;
signed short int var_1_24 = 128;
signed long int var_1_25 = 32;
signed long int var_1_26 = 1000000000;
unsigned short int var_1_27 = 5;
unsigned char var_1_28 = 16;
unsigned char var_1_29 = 50;
unsigned short int var_1_30 = 5;
unsigned short int var_1_31 = 256;
signed short int var_1_32 = -10;
signed short int var_1_33 = 0;
unsigned char var_1_34 = 4;
unsigned char var_1_35 = 4;
unsigned char var_1_36 = 8;
unsigned char var_1_37 = 1;
unsigned long int var_1_38 = 8;
double var_1_39 = 99999999.25;
signed long int var_1_40 = 5;
double var_1_41 = 64.5;
double var_1_42 = 15.2;
double var_1_43 = 7.55;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
signed char var_1_47 = 64;
signed char var_1_49 = 32;
signed char var_1_50 = -16;
signed char var_1_51 = -16;
signed char var_1_52 = 4;
signed char var_1_53 = 5;
double var_1_54 = 2.2;
unsigned short int var_1_56 = 16;
float var_1_57 = 64.75;
float var_1_58 = 0.5;
float var_1_59 = 9.25;
float var_1_60 = 256.35;
signed char var_1_61 = -1;
signed long int var_1_62 = -50;
double var_1_64 = 1.75;
double var_1_65 = 199.5;
double var_1_66 = 127.375;
double var_1_67 = 127.65;
double var_1_68 = 2.5;
signed short int var_1_69 = -64;
double var_1_70 = 1000000.9;
signed long int var_1_71 = 100000000;
signed long int var_1_72 = -2;
signed long int var_1_73 = 256;
signed short int var_1_74 = -5;
signed long int var_1_75 = 16;
unsigned long int var_1_76 = 64;
unsigned long int var_1_77 = 10;
unsigned char var_1_78 = 5;
unsigned char var_1_79 = 128;
unsigned char var_1_80 = 128;
signed long int var_1_81 = -2;
signed short int var_1_82 = -5;
unsigned long int var_1_83 = 2;
double var_1_84 = 16.5;
unsigned long int var_1_85 = 2053570538;
unsigned long int var_1_86 = 1476022001;
unsigned short int var_1_87 = 8;
unsigned short int var_1_88 = 50;
unsigned short int var_1_90 = 10000;
unsigned short int var_1_91 = 10000;
unsigned short int var_1_92 = 64609;
float var_1_93 = 31.2;
unsigned short int var_1_94 = 10;
signed long int var_1_95 = 1;
signed long int var_1_96 = -16;
unsigned short int var_1_97 = 100;
signed short int var_1_98 = -16;
unsigned char var_1_99 = 25;
unsigned char var_1_100 = 200;
unsigned char var_1_101 = 64;
signed char var_1_102 = -1;
unsigned long int var_1_103 = 8;
signed long int var_1_104 = 1;
signed short int var_1_105 = -5;
double var_1_106 = 49.4;
signed short int var_1_107 = -1;
signed char var_1_108 = 10;
signed long int var_1_109 = 256;
signed char var_1_110 = -10;
double var_1_111 = 1000000000000.1;
double var_1_112 = 64.8;
double var_1_114 = 10.5;
signed long int var_1_115 = 0;
unsigned char var_1_116 = 1;
unsigned char var_1_117 = 5;
signed short int var_1_118 = -256;
signed short int var_1_119 = 31598;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 8;
unsigned long int last_1_var_1_8 = 1000;
unsigned short int last_1_var_1_10 = 25;
unsigned short int last_1_var_1_17 = 64;
unsigned char last_1_var_1_18 = 0;
unsigned short int last_1_var_1_27 = 5;
unsigned short int last_1_var_1_30 = 5;
double last_1_var_1_39 = 99999999.25;
unsigned short int last_1_var_1_56 = 16;
signed long int last_1_var_1_62 = -50;
signed short int last_1_var_1_69 = -64;
double last_1_var_1_70 = 1000000.9;
signed long int last_1_var_1_71 = 100000000;
signed long int last_1_var_1_72 = -2;
signed long int last_1_var_1_75 = 16;
unsigned long int last_1_var_1_76 = 64;
signed long int last_1_var_1_81 = -2;
signed long int last_1_var_1_95 = 1;
unsigned long int last_1_var_1_103 = 8;
signed long int last_1_var_1_104 = 1;
signed long int last_1_var_1_109 = 256;
unsigned char last_1_var_1_116 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req28Batch191Amount500
	signed long int stepLocal_21 = 5;
	if (! var_1_46) {
		if (stepLocal_21 < (last_1_var_1_95 - var_1_15)) {
			var_1_75 = (max ((min (last_1_var_1_27 , last_1_var_1_69)) , var_1_14));
		}
	}


	// From: Req33Batch191Amount500
	unsigned char stepLocal_25 = last_1_var_1_116;
	unsigned char stepLocal_24 = var_1_20;
	unsigned long int stepLocal_23 = last_1_var_1_76;
	if ((last_1_var_1_70 / var_1_84) != (min (var_1_59 , (var_1_68 - var_1_60)))) {
		var_1_83 = (last_1_var_1_27 + last_1_var_1_95);
	} else {
		if ((last_1_var_1_104 < var_1_6) && stepLocal_25) {
			if ((var_1_53 ^ (~ last_1_var_1_103)) > stepLocal_23) {
				var_1_83 = (max (var_1_40 , var_1_28));
			} else {
				var_1_83 = (((var_1_85 - last_1_var_1_103) + var_1_86) - var_1_12);
			}
		} else {
			if (last_1_var_1_116 || stepLocal_24) {
				var_1_83 = (var_1_35 + var_1_23);
			}
		}
	}


	// From: Req24Batch191Amount500
	if (! (var_1_29 == (min (var_1_22 , var_1_83)))) {
		var_1_70 = (min (((128.5 + var_1_58) + (var_1_59 + 25.5)) , ((var_1_68 + var_1_67) - var_1_66)));
	}


	// From: Req25Batch191Amount500
	if ((last_1_var_1_75 + (max (last_1_var_1_71 , last_1_var_1_72))) > (last_1_var_1_17 ^ var_1_49)) {
		if (var_1_20) {
			if (last_1_var_1_109 > ((max (last_1_var_1_30 , var_1_52)) >> 10)) {
				if ((abs (var_1_53 + var_1_49)) == 10) {
					var_1_71 = (max (var_1_28 , ((var_1_35 - var_1_16) + var_1_24)));
				} else {
					var_1_71 = (var_1_35 - var_1_14);
				}
			} else {
				var_1_71 = last_1_var_1_75;
			}
		}
	} else {
		var_1_71 = (var_1_24 - (max ((1457960045 - 8) , (last_1_var_1_56 + var_1_29))));
	}


	// From: Req17Batch191Amount500
	if ((last_1_var_1_17 / var_1_28) < last_1_var_1_10) {
		if (last_1_var_1_39 < var_1_41) {
			if (last_1_var_1_17 < (45439 - (max (var_1_16 , var_1_53)))) {
				var_1_56 = var_1_23;
			}
		}
	}


	// From: Req5Batch191Amount500
	if (last_1_var_1_27 < (abs (64))) {
		var_1_18 = (! var_1_20);
	}


	// From: Req53Batch191Amount500
	if (var_1_18) {
		var_1_116 = var_1_46;
	}


	// From: Req48Batch191Amount500
	if (last_1_var_1_116) {
		var_1_109 = last_1_var_1_62;
	} else {
		var_1_109 = var_1_24;
	}


	// From: Req14Batch191Amount500
	if ((var_1_18 && var_1_20) || var_1_18) {
		if (var_1_18) {
			var_1_44 = (((-25 > var_1_109) || (! var_1_20)) && var_1_45);
		}
	} else {
		var_1_44 = ((! var_1_45) || (! (var_1_116 || var_1_46)));
	}


	// From: Req46Batch191Amount500
	if (var_1_44) {
		var_1_107 = var_1_52;
	}


	// From: Req4Batch191Amount500
	if (-100000 > last_1_var_1_8) {
		if ((var_1_14 >= last_1_var_1_1) || last_1_var_1_18) {
			var_1_17 = var_1_14;
		}
	}


	// From: Req37Batch191Amount500
	signed long int stepLocal_28 = var_1_40 * last_1_var_1_75;
	if (((var_1_6 + last_1_var_1_81) + (last_1_var_1_75 * 8u)) > stepLocal_28) {
		var_1_95 = (((max (1891361986 , 1778225958)) - (var_1_26 - 256)) - last_1_var_1_75);
	} else {
		var_1_95 = (last_1_var_1_27 + var_1_96);
	}


	// From: Req15Batch191Amount500
	unsigned char stepLocal_14 = 3.2 == var_1_42;
	unsigned char stepLocal_13 = var_1_26 > var_1_83;
	if (stepLocal_13 && (-0.75f >= var_1_41)) {
		var_1_47 = (min ((var_1_49 + var_1_50) , (max (-64 , var_1_51))));
	} else {
		if (var_1_116 && stepLocal_14) {
			var_1_47 = ((var_1_52 - var_1_53) + var_1_50);
		} else {
			var_1_47 = var_1_50;
		}
	}


	// From: Req16Batch191Amount500
	signed long int stepLocal_15 = var_1_109 + var_1_16;
	if (stepLocal_15 < var_1_95) {
		var_1_54 = (min (var_1_43 , var_1_41));
	} else {
		var_1_54 = (var_1_42 + var_1_41);
	}


	// From: Req19Batch191Amount500
	if (var_1_23 <= ((var_1_40 / var_1_29) / (max (2 , var_1_28)))) {
		if (var_1_44) {
			var_1_61 = (var_1_53 - 4);
		} else {
			var_1_61 = (max ((max (var_1_49 , var_1_52)) , -25));
		}
	} else {
		var_1_61 = (abs (var_1_52 + -50));
	}


	// From: Req21Batch191Amount500
	var_1_64 = var_1_60;


	// From: Req22Batch191Amount500
	unsigned char stepLocal_20 = var_1_20;
	if (var_1_18 || stepLocal_20) {
		var_1_65 = ((var_1_66 + var_1_67) - ((2.4158881388211185E18 + 2.710867696951864E18) - (min (9.3 , var_1_68))));
	}


	// From: Req27Batch191Amount500
	if (var_1_42 <= var_1_68) {
		var_1_74 = (var_1_52 - 8);
	}


	// From: Req30Batch191Amount500
	var_1_78 = (min (((max (var_1_79 , var_1_80)) - (min (var_1_35 , 8))) , ((200 - var_1_53) - var_1_52)));


	// From: Req35Batch191Amount500
	if (100000000u < var_1_80) {
		var_1_93 = (var_1_68 + var_1_59);
	} else {
		var_1_93 = var_1_42;
	}


	// From: Req36Batch191Amount500
	if (var_1_45) {
		var_1_94 = (var_1_13 - (var_1_90 + (10000 - var_1_16)));
	} else {
		var_1_94 = (max (var_1_28 , var_1_23));
	}


	// From: Req40Batch191Amount500
	unsigned char stepLocal_30 = var_1_46;
	signed long int stepLocal_29 = 25;
	if (var_1_73 >= stepLocal_29) {
		var_1_99 = (abs ((var_1_100 - var_1_53) - (var_1_101 - var_1_52)));
	} else {
		if (stepLocal_30 || (var_1_22 < var_1_100)) {
			var_1_99 = var_1_80;
		}
	}


	// From: Req41Batch191Amount500
	if (var_1_45) {
		var_1_102 = var_1_51;
	} else {
		var_1_102 = var_1_49;
	}


	// From: Req42Batch191Amount500
	if (var_1_20) {
		var_1_103 = var_1_53;
	} else {
		var_1_103 = 5u;
	}


	// From: Req44Batch191Amount500
	var_1_105 = var_1_49;


	// From: Req45Batch191Amount500
	var_1_106 = 63.5;


	// From: Req47Batch191Amount500
	var_1_108 = var_1_52;


	// From: Req49Batch191Amount500
	if (var_1_18) {
		var_1_110 = var_1_49;
	}


	// From: Req50Batch191Amount500
	var_1_111 = var_1_60;


	// From: Req51Batch191Amount500
	if (var_1_18) {
		var_1_112 = var_1_114;
	} else {
		var_1_112 = 199.2;
	}


	// From: Req52Batch191Amount500
	if (var_1_20) {
		var_1_115 = var_1_37;
	} else {
		var_1_115 = var_1_101;
	}


	// From: Req54Batch191Amount500
	if (var_1_45) {
		var_1_117 = var_1_37;
	} else {
		var_1_117 = var_1_101;
	}


	// From: Req11Batch191Amount500
	if (var_1_18 && var_1_116) {
		if ((var_1_22 >= var_1_103) || var_1_18) {
			if (var_1_28 <= (var_1_83 / var_1_29)) {
				var_1_34 = (min ((var_1_35 + var_1_36) , var_1_37));
			}
		}
	}


	// From: Req20Batch191Amount500
	unsigned char stepLocal_19 = var_1_18;
	unsigned char stepLocal_18 = var_1_44;
	signed long int stepLocal_17 = var_1_71 % (128 + var_1_14);
	if (31.5f > var_1_41) {
		var_1_62 = (var_1_28 - var_1_24);
	} else {
		if (stepLocal_17 > var_1_28) {
			if (var_1_44 && stepLocal_19) {
				var_1_62 = (var_1_29 + (-128 + var_1_7));
			} else {
				if (stepLocal_18 || var_1_18) {
					var_1_62 = (var_1_95 + var_1_17);
				} else {
					var_1_62 = (var_1_12 + (last_1_var_1_62 - var_1_95));
				}
			}
		}
	}


	// From: Req31Batch191Amount500
	if (var_1_45) {
		var_1_81 = ((var_1_71 - var_1_7) + (max (var_1_117 , (var_1_52 - var_1_17))));
	}


	// From: Req2Batch191Amount500
	if (var_1_116) {
		var_1_8 = ((max (1000u , var_1_7)) + var_1_6);
	}


	// From: Req38Batch191Amount500
	if ((var_1_23 > var_1_8) && var_1_18) {
		var_1_97 = 1;
	} else {
		var_1_97 = (abs ((var_1_36 + var_1_37) + var_1_7));
	}


	// From: Req9Batch191Amount500
	if (var_1_107 <= var_1_8) {
		var_1_30 = (var_1_31 + (var_1_15 + var_1_28));
	}


	// From: Req29Batch191Amount500
	if (var_1_23 <= last_1_var_1_76) {
		var_1_76 = ((min ((min (var_1_28 , var_1_24)) , var_1_97)) + var_1_15);
	} else {
		var_1_76 = (min (var_1_77 , var_1_6));
	}


	// From: Req32Batch191Amount500
	signed long int stepLocal_22 = var_1_71 + var_1_62;
	if ((abs (var_1_24 / 5u)) < stepLocal_22) {
		var_1_82 = (max (var_1_33 , var_1_108));
	} else {
		var_1_82 = (var_1_29 - var_1_53);
	}


	// From: Req39Batch191Amount500
	var_1_98 = (var_1_37 + (min ((abs (var_1_76)) , var_1_50)));


	// From: Req43Batch191Amount500
	if (var_1_18) {
		var_1_104 = last_1_var_1_104;
	} else {
		var_1_104 = var_1_34;
	}


	// From: Req7Batch191Amount500
	signed long int stepLocal_6 = var_1_62;
	signed long int stepLocal_5 = ~ (abs (var_1_71));
	if ((var_1_24 / var_1_14) > stepLocal_5) {
		if (stepLocal_6 >= var_1_6) {
			var_1_25 = (128 + ((var_1_26 - var_1_8) - 2));
		}
	} else {
		var_1_25 = (max (50 , var_1_105));
	}


	// From: Req6Batch191Amount500
	unsigned char stepLocal_4 = var_1_44;
	unsigned short int stepLocal_3 = var_1_14;
	if ((var_1_30 + var_1_81) > stepLocal_3) {
		var_1_21 = var_1_15;
	} else {
		if (stepLocal_4 || var_1_20) {
			if (var_1_20) {
				var_1_21 = var_1_15;
			} else {
				var_1_21 = ((min ((var_1_16 + var_1_15) , (25 + var_1_22))) - (var_1_23 + var_1_24));
			}
		}
	}


	// From: Req12Batch191Amount500
	if ((var_1_6 | var_1_62) > (var_1_33 * (var_1_76 / var_1_28))) {
		if ((var_1_103 * var_1_23) < (var_1_7 / var_1_14)) {
			var_1_38 = (2637815424u - var_1_76);
		} else {
			var_1_38 = 64u;
		}
	}


	// From: Req13Batch191Amount500
	signed long int stepLocal_12 = 4;
	signed long int stepLocal_11 = abs (var_1_40 - var_1_36);
	signed long int stepLocal_10 = var_1_21 / var_1_28;
	if (stepLocal_11 > var_1_95) {
		if ((- var_1_12) >= stepLocal_10) {
			var_1_39 = (min ((var_1_41 + var_1_42) , (abs (var_1_43))));
		} else {
			if (stepLocal_12 <= (var_1_31 / 128)) {
				var_1_39 = (var_1_42 + var_1_41);
			}
		}
	}


	// From: Req8Batch191Amount500
	signed long int stepLocal_7 = abs (var_1_13);
	if ((var_1_97 / (max (var_1_28 , var_1_29))) > stepLocal_7) {
		if (var_1_20) {
			var_1_27 = (min (var_1_12 , 0));
		} else {
			var_1_27 = var_1_29;
		}
	} else {
		if (var_1_18) {
			var_1_27 = var_1_24;
		}
	}


	// From: Req10Batch191Amount500
	signed long int stepLocal_9 = abs (var_1_56);
	unsigned short int stepLocal_8 = var_1_12;
	if (stepLocal_9 <= var_1_27) {
		if (stepLocal_8 <= var_1_29) {
			var_1_32 = ((var_1_29 + var_1_28) - var_1_24);
		} else {
			var_1_32 = ((var_1_23 - (var_1_29 + var_1_16)) + var_1_33);
		}
	} else {
		var_1_32 = var_1_15;
	}


	// From: Req23Batch191Amount500
	if (! var_1_20) {
		var_1_69 = (var_1_24 + (-10 + 1));
	} else {
		if ((max (var_1_75 , var_1_33)) >= (var_1_35 - (var_1_52 + var_1_81))) {
			var_1_69 = (abs (max ((var_1_23 - var_1_53) , (2 - var_1_52))));
		} else {
			var_1_69 = (min ((var_1_35 - var_1_53) , var_1_32));
		}
	}


	// From: Req1Batch191Amount500
	signed long int stepLocal_0 = var_1_104;
	if ((max ((max (var_1_69 , last_1_var_1_1)) , var_1_109)) >= stepLocal_0) {
		var_1_1 = (var_1_6 + (abs (abs (var_1_7))));
	}


	// From: Req18Batch191Amount500
	unsigned char stepLocal_16 = var_1_26 < var_1_69;
	if (stepLocal_16 || var_1_44) {
		if (! var_1_116) {
			var_1_57 = var_1_42;
		} else {
			var_1_57 = (var_1_41 + (var_1_58 + (var_1_59 + 99.25f)));
		}
	} else {
		var_1_57 = (0.15000000000000002f - var_1_60);
	}


	// From: Req26Batch191Amount500
	if (! var_1_116) {
		if (var_1_109 <= var_1_115) {
			var_1_72 = (min (var_1_73 , var_1_25));
		} else {
			if ((2 - var_1_53) > (var_1_1 - var_1_26)) {
				var_1_72 = (var_1_12 - var_1_36);
			} else {
				var_1_72 = var_1_22;
			}
		}
	} else {
		if (var_1_95 >= (min (var_1_76 , var_1_52))) {
			var_1_72 = ((var_1_24 - var_1_95) + var_1_23);
		} else {
			var_1_72 = var_1_7;
		}
	}


	// From: Req3Batch191Amount500
	unsigned long int stepLocal_2 = var_1_7 + var_1_83;
	unsigned long int stepLocal_1 = min (var_1_72 , var_1_38);
	if (var_1_6 >= stepLocal_1) {
		if ((min ((min (var_1_38 , var_1_56)) , var_1_72)) >= stepLocal_2) {
			var_1_10 = (max ((var_1_6 + var_1_7) , var_1_12));
		} else {
			var_1_10 = (var_1_13 - (var_1_14 - (var_1_15 + var_1_16)));
		}
	} else {
		var_1_10 = var_1_15;
	}


	// From: Req34Batch191Amount500
	unsigned long int stepLocal_27 = (var_1_85 - var_1_72) - (var_1_24 + var_1_52);
	signed long int stepLocal_26 = (var_1_115 + 10) - var_1_26;
	if ((- (var_1_95 % var_1_88)) < stepLocal_27) {
		if (var_1_18) {
			var_1_87 = 256;
		} else {
			if (var_1_64 < (127.5 - var_1_60)) {
				var_1_87 = (((var_1_90 + var_1_91) - var_1_53) + var_1_28);
			} else {
				if (var_1_76 >= stepLocal_26) {
					var_1_87 = (min ((max (var_1_35 , 32)) , (var_1_13 - (var_1_14 - var_1_23))));
				} else {
					var_1_87 = (max (var_1_24 , ((abs (var_1_13)) - (var_1_22 + var_1_80))));
				}
			}
		}
	} else {
		var_1_87 = (((min (var_1_92 , 54730)) - (min (var_1_94 , var_1_52))) - (abs (var_1_15)));
	}


	// From: Req55Batch191Amount500
	if (var_1_20) {
		var_1_118 = (var_1_23 - var_1_28);
	} else {
		var_1_118 = ((max ((min (var_1_22 , var_1_103)) , (var_1_119 - var_1_87))) - var_1_29);
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 16383);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 8192);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 8191);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 0);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 16383);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 16383);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 16383);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= 536870911);
	assume_abort_if_not(var_1_26 <= 1073741823);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 255);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 255);
	assume_abort_if_not(var_1_29 != 0);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32767);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -16383);
	assume_abort_if_not(var_1_33 <= 16383);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 254);
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 2147483647);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -461168.6018427383000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 1);
	var_1_49 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_49 >= -63);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_50 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_50 >= -63);
	assume_abort_if_not(var_1_50 <= 63);
	var_1_51 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_51 >= -127);
	assume_abort_if_not(var_1_51 <= 126);
	var_1_52 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 63);
	var_1_53 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 63);
	var_1_58 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_58 >= -230584.3009213691400e+13F && var_1_58 <= -1.0e-20F) || (var_1_58 <= 2305843.009213691400e+12F && var_1_58 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_59 >= -115292.1504606845700e+13F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 1152921.504606845700e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_66 >= 0.0F && var_1_66 <= -1.0e-20F) || (var_1_66 <= 4611686.018427383000e+12F && var_1_66 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_67 >= 0.0F && var_1_67 <= -1.0e-20F) || (var_1_67 <= 4611686.018427383000e+12F && var_1_67 >= 1.0e-20F ));
	var_1_68 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_68 >= 0.0F && var_1_68 <= -1.0e-20F) || (var_1_68 <= 4611686.018427383000e+12F && var_1_68 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_73 >= -2147483647);
	assume_abort_if_not(var_1_73 <= 2147483646);
	var_1_77 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 4294967294);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 127);
	assume_abort_if_not(var_1_79 <= 254);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 127);
	assume_abort_if_not(var_1_80 <= 254);
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= -922337.2036854776000e+13F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854776000e+12F && var_1_84 >= 1.0e-20F ));
	assume_abort_if_not(var_1_84 != 0.0F);
	var_1_85 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_85 >= 1610612735);
	assume_abort_if_not(var_1_85 <= 2147483647);
	var_1_86 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_86 >= 1073741824);
	assume_abort_if_not(var_1_86 <= 2147483647);
	var_1_88 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_88 >= 0);
	assume_abort_if_not(var_1_88 <= 65535);
	assume_abort_if_not(var_1_88 != 0);
	var_1_90 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_90 >= 8191);
	assume_abort_if_not(var_1_90 <= 16384);
	var_1_91 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_91 >= 8192);
	assume_abort_if_not(var_1_91 <= 16383);
	var_1_92 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_92 >= 49150);
	assume_abort_if_not(var_1_92 <= 65534);
	var_1_96 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_96 >= -1073741823);
	assume_abort_if_not(var_1_96 <= 1073741823);
	var_1_100 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_100 >= 190);
	assume_abort_if_not(var_1_100 <= 254);
	var_1_101 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_101 >= 63);
	assume_abort_if_not(var_1_101 <= 127);
	var_1_114 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_114 >= -922337.2036854766000e+13F && var_1_114 <= -1.0e-20F) || (var_1_114 <= 9223372.036854766000e+12F && var_1_114 >= 1.0e-20F ));
	var_1_119 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_119 >= 16382);
	assume_abort_if_not(var_1_119 <= 32766);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_10 = var_1_10;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_18 = var_1_18;
	last_1_var_1_27 = var_1_27;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_72 = var_1_72;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_103 = var_1_103;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_109 = var_1_109;
	last_1_var_1_116 = var_1_116;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((((max ((max (var_1_69 , last_1_var_1_1)) , var_1_109)) >= var_1_104) ? (var_1_1 == ((unsigned short int) (var_1_6 + (abs (abs (var_1_7)))))) : 1) && (var_1_116 ? (var_1_8 == ((unsigned long int) ((max (1000u , var_1_7)) + var_1_6))) : 1)) && ((var_1_6 >= (min (var_1_72 , var_1_38))) ? (((min ((min (var_1_38 , var_1_56)) , var_1_72)) >= (var_1_7 + var_1_83)) ? (var_1_10 == ((unsigned short int) (max ((var_1_6 + var_1_7) , var_1_12)))) : (var_1_10 == ((unsigned short int) (var_1_13 - (var_1_14 - (var_1_15 + var_1_16)))))) : (var_1_10 == ((unsigned short int) var_1_15)))) && ((-100000 > last_1_var_1_8) ? (((var_1_14 >= last_1_var_1_1) || last_1_var_1_18) ? (var_1_17 == ((unsigned short int) var_1_14)) : 1) : 1)) && ((last_1_var_1_27 < (abs (64))) ? (var_1_18 == ((unsigned char) (! var_1_20))) : 1)) && (((var_1_30 + var_1_81) > var_1_14) ? (var_1_21 == ((signed short int) var_1_15)) : ((var_1_44 || var_1_20) ? (var_1_20 ? (var_1_21 == ((signed short int) var_1_15)) : (var_1_21 == ((signed short int) ((min ((var_1_16 + var_1_15) , (25 + var_1_22))) - (var_1_23 + var_1_24))))) : 1))) && (((var_1_24 / var_1_14) > (~ (abs (var_1_71)))) ? ((var_1_62 >= var_1_6) ? (var_1_25 == ((signed long int) (128 + ((var_1_26 - var_1_8) - 2)))) : 1) : (var_1_25 == ((signed long int) (max (50 , var_1_105)))))) && (((var_1_97 / (max (var_1_28 , var_1_29))) > (abs (var_1_13))) ? (var_1_20 ? (var_1_27 == ((unsigned short int) (min (var_1_12 , 0)))) : (var_1_27 == ((unsigned short int) var_1_29))) : (var_1_18 ? (var_1_27 == ((unsigned short int) var_1_24)) : 1))) && ((var_1_107 <= var_1_8) ? (var_1_30 == ((unsigned short int) (var_1_31 + (var_1_15 + var_1_28)))) : 1)) && (((abs (var_1_56)) <= var_1_27) ? ((var_1_12 <= var_1_29) ? (var_1_32 == ((signed short int) ((var_1_29 + var_1_28) - var_1_24))) : (var_1_32 == ((signed short int) ((var_1_23 - (var_1_29 + var_1_16)) + var_1_33)))) : (var_1_32 == ((signed short int) var_1_15)))) && ((var_1_18 && var_1_116) ? (((var_1_22 >= var_1_103) || var_1_18) ? ((var_1_28 <= (var_1_83 / var_1_29)) ? (var_1_34 == ((unsigned char) (min ((var_1_35 + var_1_36) , var_1_37)))) : 1) : 1) : 1)) && (((var_1_6 | var_1_62) > (var_1_33 * (var_1_76 / var_1_28))) ? (((var_1_103 * var_1_23) < (var_1_7 / var_1_14)) ? (var_1_38 == ((unsigned long int) (2637815424u - var_1_76))) : (var_1_38 == ((unsigned long int) 64u))) : 1)) && (((abs (var_1_40 - var_1_36)) > var_1_95) ? (((- var_1_12) >= (var_1_21 / var_1_28)) ? (var_1_39 == ((double) (min ((var_1_41 + var_1_42) , (abs (var_1_43)))))) : ((4 <= (var_1_31 / 128)) ? (var_1_39 == ((double) (var_1_42 + var_1_41))) : 1)) : 1)) && (((var_1_18 && var_1_20) || var_1_18) ? (var_1_18 ? (var_1_44 == ((unsigned char) (((-25 > var_1_109) || (! var_1_20)) && var_1_45))) : 1) : (var_1_44 == ((unsigned char) ((! var_1_45) || (! (var_1_116 || var_1_46))))))) && (((var_1_26 > var_1_83) && (-0.75f >= var_1_41)) ? (var_1_47 == ((signed char) (min ((var_1_49 + var_1_50) , (max (-64 , var_1_51)))))) : ((var_1_116 && (3.2 == var_1_42)) ? (var_1_47 == ((signed char) ((var_1_52 - var_1_53) + var_1_50))) : (var_1_47 == ((signed char) var_1_50))))) && (((var_1_109 + var_1_16) < var_1_95) ? (var_1_54 == ((double) (min (var_1_43 , var_1_41)))) : (var_1_54 == ((double) (var_1_42 + var_1_41))))) && (((last_1_var_1_17 / var_1_28) < last_1_var_1_10) ? ((last_1_var_1_39 < var_1_41) ? ((last_1_var_1_17 < (45439 - (max (var_1_16 , var_1_53)))) ? (var_1_56 == ((unsigned short int) var_1_23)) : 1) : 1) : 1)) && (((var_1_26 < var_1_69) || var_1_44) ? ((! var_1_116) ? (var_1_57 == ((float) var_1_42)) : (var_1_57 == ((float) (var_1_41 + (var_1_58 + (var_1_59 + 99.25f)))))) : (var_1_57 == ((float) (0.15000000000000002f - var_1_60))))) && ((var_1_23 <= ((var_1_40 / var_1_29) / (max (2 , var_1_28)))) ? (var_1_44 ? (var_1_61 == ((signed char) (var_1_53 - 4))) : (var_1_61 == ((signed char) (max ((max (var_1_49 , var_1_52)) , -25))))) : (var_1_61 == ((signed char) (abs (var_1_52 + -50)))))) && ((31.5f > var_1_41) ? (var_1_62 == ((signed long int) (var_1_28 - var_1_24))) : (((var_1_71 % (128 + var_1_14)) > var_1_28) ? ((var_1_44 && var_1_18) ? (var_1_62 == ((signed long int) (var_1_29 + (-128 + var_1_7)))) : ((var_1_44 || var_1_18) ? (var_1_62 == ((signed long int) (var_1_95 + var_1_17))) : (var_1_62 == ((signed long int) (var_1_12 + (last_1_var_1_62 - var_1_95)))))) : 1))) && (var_1_64 == ((double) var_1_60))) && ((var_1_18 || var_1_20) ? (var_1_65 == ((double) ((var_1_66 + var_1_67) - ((2.4158881388211185E18 + 2.710867696951864E18) - (min (9.3 , var_1_68)))))) : 1)) && ((! var_1_20) ? (var_1_69 == ((signed short int) (var_1_24 + (-10 + 1)))) : (((max (var_1_75 , var_1_33)) >= (var_1_35 - (var_1_52 + var_1_81))) ? (var_1_69 == ((signed short int) (abs (max ((var_1_23 - var_1_53) , (2 - var_1_52)))))) : (var_1_69 == ((signed short int) (min ((var_1_35 - var_1_53) , var_1_32))))))) && ((! (var_1_29 == (min (var_1_22 , var_1_83)))) ? (var_1_70 == ((double) (min (((128.5 + var_1_58) + (var_1_59 + 25.5)) , ((var_1_68 + var_1_67) - var_1_66))))) : 1)) && (((last_1_var_1_75 + (max (last_1_var_1_71 , last_1_var_1_72))) > (last_1_var_1_17 ^ var_1_49)) ? (var_1_20 ? ((last_1_var_1_109 > ((max (last_1_var_1_30 , var_1_52)) >> 10)) ? (((abs (var_1_53 + var_1_49)) == 10) ? (var_1_71 == ((signed long int) (max (var_1_28 , ((var_1_35 - var_1_16) + var_1_24))))) : (var_1_71 == ((signed long int) (var_1_35 - var_1_14)))) : (var_1_71 == ((signed long int) last_1_var_1_75))) : 1) : (var_1_71 == ((signed long int) (var_1_24 - (max ((1457960045 - 8) , (last_1_var_1_56 + var_1_29)))))))) && ((! var_1_116) ? ((var_1_109 <= var_1_115) ? (var_1_72 == ((signed long int) (min (var_1_73 , var_1_25)))) : (((2 - var_1_53) > (var_1_1 - var_1_26)) ? (var_1_72 == ((signed long int) (var_1_12 - var_1_36))) : (var_1_72 == ((signed long int) var_1_22)))) : ((var_1_95 >= (min (var_1_76 , var_1_52))) ? (var_1_72 == ((signed long int) ((var_1_24 - var_1_95) + var_1_23))) : (var_1_72 == ((signed long int) var_1_7))))) && ((var_1_42 <= var_1_68) ? (var_1_74 == ((signed short int) (var_1_52 - 8))) : 1)) && ((! var_1_46) ? ((5 < (last_1_var_1_95 - var_1_15)) ? (var_1_75 == ((signed long int) (max ((min (last_1_var_1_27 , last_1_var_1_69)) , var_1_14)))) : 1) : 1)) && ((var_1_23 <= last_1_var_1_76) ? (var_1_76 == ((unsigned long int) ((min ((min (var_1_28 , var_1_24)) , var_1_97)) + var_1_15))) : (var_1_76 == ((unsigned long int) (min (var_1_77 , var_1_6)))))) && (var_1_78 == ((unsigned char) (min (((max (var_1_79 , var_1_80)) - (min (var_1_35 , 8))) , ((200 - var_1_53) - var_1_52)))))) && (var_1_45 ? (var_1_81 == ((signed long int) ((var_1_71 - var_1_7) + (max (var_1_117 , (var_1_52 - var_1_17)))))) : 1)) && (((abs (var_1_24 / 5u)) < (var_1_71 + var_1_62)) ? (var_1_82 == ((signed short int) (max (var_1_33 , var_1_108)))) : (var_1_82 == ((signed short int) (var_1_29 - var_1_53))))) && (((last_1_var_1_70 / var_1_84) != (min (var_1_59 , (var_1_68 - var_1_60)))) ? (var_1_83 == ((unsigned long int) (last_1_var_1_27 + last_1_var_1_95))) : (((last_1_var_1_104 < var_1_6) && last_1_var_1_116) ? (((var_1_53 ^ (~ last_1_var_1_103)) > last_1_var_1_76) ? (var_1_83 == ((unsigned long int) (max (var_1_40 , var_1_28)))) : (var_1_83 == ((unsigned long int) (((var_1_85 - last_1_var_1_103) + var_1_86) - var_1_12)))) : ((last_1_var_1_116 || var_1_20) ? (var_1_83 == ((unsigned long int) (var_1_35 + var_1_23))) : 1)))) && (((- (var_1_95 % var_1_88)) < ((var_1_85 - var_1_72) - (var_1_24 + var_1_52))) ? (var_1_18 ? (var_1_87 == ((unsigned short int) 256)) : ((var_1_64 < (127.5 - var_1_60)) ? (var_1_87 == ((unsigned short int) (((var_1_90 + var_1_91) - var_1_53) + var_1_28))) : ((var_1_76 >= ((var_1_115 + 10) - var_1_26)) ? (var_1_87 == ((unsigned short int) (min ((max (var_1_35 , 32)) , (var_1_13 - (var_1_14 - var_1_23)))))) : (var_1_87 == ((unsigned short int) (max (var_1_24 , ((abs (var_1_13)) - (var_1_22 + var_1_80))))))))) : (var_1_87 == ((unsigned short int) (((min (var_1_92 , 54730)) - (min (var_1_94 , var_1_52))) - (abs (var_1_15))))))) && ((100000000u < var_1_80) ? (var_1_93 == ((float) (var_1_68 + var_1_59))) : (var_1_93 == ((float) var_1_42)))) && (var_1_45 ? (var_1_94 == ((unsigned short int) (var_1_13 - (var_1_90 + (10000 - var_1_16))))) : (var_1_94 == ((unsigned short int) (max (var_1_28 , var_1_23)))))) && ((((var_1_6 + last_1_var_1_81) + (last_1_var_1_75 * 8u)) > (var_1_40 * last_1_var_1_75)) ? (var_1_95 == ((signed long int) (((max (1891361986 , 1778225958)) - (var_1_26 - 256)) - last_1_var_1_75))) : (var_1_95 == ((signed long int) (last_1_var_1_27 + var_1_96))))) && (((var_1_23 > var_1_8) && var_1_18) ? (var_1_97 == ((unsigned short int) 1)) : (var_1_97 == ((unsigned short int) (abs ((var_1_36 + var_1_37) + var_1_7)))))) && (var_1_98 == ((signed short int) (var_1_37 + (min ((abs (var_1_76)) , var_1_50)))))) && ((var_1_73 >= 25) ? (var_1_99 == ((unsigned char) (abs ((var_1_100 - var_1_53) - (var_1_101 - var_1_52))))) : ((var_1_46 || (var_1_22 < var_1_100)) ? (var_1_99 == ((unsigned char) var_1_80)) : 1))) && (var_1_45 ? (var_1_102 == ((signed char) var_1_51)) : (var_1_102 == ((signed char) var_1_49)))) && (var_1_20 ? (var_1_103 == ((unsigned long int) var_1_53)) : (var_1_103 == ((unsigned long int) 5u)))) && (var_1_18 ? (var_1_104 == ((signed long int) last_1_var_1_104)) : (var_1_104 == ((signed long int) var_1_34)))) && (var_1_105 == ((signed short int) var_1_49))) && (var_1_106 == ((double) 63.5))) && (var_1_44 ? (var_1_107 == ((signed short int) var_1_52)) : 1)) && (var_1_108 == ((signed char) var_1_52))) && (last_1_var_1_116 ? (var_1_109 == ((signed long int) last_1_var_1_62)) : (var_1_109 == ((signed long int) var_1_24)))) && (var_1_18 ? (var_1_110 == ((signed char) var_1_49)) : 1)) && (var_1_111 == ((double) var_1_60))) && (var_1_18 ? (var_1_112 == ((double) var_1_114)) : (var_1_112 == ((double) 199.2)))) && (var_1_20 ? (var_1_115 == ((signed long int) var_1_37)) : (var_1_115 == ((signed long int) var_1_101)))) && (var_1_18 ? (var_1_116 == ((unsigned char) var_1_46)) : 1)) && (var_1_45 ? (var_1_117 == ((unsigned char) var_1_37)) : (var_1_117 == ((unsigned char) var_1_101)))) && (var_1_20 ? (var_1_118 == ((signed short int) (var_1_23 - var_1_28))) : (var_1_118 == ((signed short int) ((max ((min (var_1_22 , var_1_103)) , (var_1_119 - var_1_87))) - var_1_29))))
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
