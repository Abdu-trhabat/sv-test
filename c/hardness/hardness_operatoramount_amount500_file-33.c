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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch33Amount500.c", 13, "reach_error"); }
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
signed long int var_1_1 = 128;
signed long int var_1_2 = 1420370654;
signed long int var_1_3 = 10;
signed char var_1_4 = -2;
signed char var_1_5 = 25;
signed char var_1_6 = -16;
signed char var_1_7 = -50;
signed char var_1_8 = -16;
unsigned char var_1_9 = 25;
unsigned char var_1_10 = 32;
float var_1_11 = 256.5;
float var_1_12 = -0.25;
float var_1_13 = 0.30000000000000004;
float var_1_14 = 49.5;
signed long int var_1_15 = -8;
signed long int var_1_17 = 64;
signed long int var_1_18 = 16;
float var_1_19 = 32.3;
signed short int var_1_20 = -50;
float var_1_21 = 1.25;
float var_1_22 = 99999.375;
float var_1_23 = 1000000.5;
signed long int var_1_24 = -2;
signed long int var_1_25 = 1000000000;
signed long int var_1_26 = 128;
signed char var_1_27 = -5;
signed char var_1_28 = 0;
signed char var_1_29 = 10;
signed char var_1_31 = -4;
signed char var_1_32 = 64;
unsigned long int var_1_33 = 64;
unsigned long int var_1_34 = 0;
signed long int var_1_35 = -100;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
unsigned short int var_1_39 = 64;
signed short int var_1_40 = -2;
unsigned short int var_1_41 = 18110;
double var_1_42 = 4.6;
double var_1_43 = 32.3;
unsigned long int var_1_44 = 1;
unsigned long int var_1_45 = 1564050909;
float var_1_46 = 999.5;
double var_1_48 = 5.6;
double var_1_49 = 0.0;
unsigned char var_1_50 = 4;
float var_1_51 = 255.25;
unsigned char var_1_52 = 0;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
unsigned char var_1_55 = 0;
double var_1_56 = 128.4;
double var_1_57 = 0.0;
double var_1_58 = 15.8;
double var_1_59 = 7.9;
double var_1_60 = 255.75;
double var_1_61 = 128.25;
unsigned short int var_1_62 = 50;
unsigned short int var_1_63 = 24787;
signed short int var_1_64 = -8;
signed short int var_1_65 = 27206;
unsigned long int var_1_66 = 2;
unsigned long int var_1_67 = 3358943862;
unsigned long int var_1_69 = 2;
unsigned long int var_1_70 = 16;
unsigned char var_1_71 = 8;
unsigned char var_1_73 = 25;
unsigned char var_1_74 = 16;
signed short int var_1_75 = 10;
float var_1_76 = 7.8;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 0;
unsigned char var_1_79 = 1;
float var_1_80 = 255.75;
unsigned char var_1_81 = 128;
unsigned char var_1_82 = 200;
unsigned char var_1_83 = 1;
signed char var_1_84 = -10;
unsigned char var_1_85 = 1;
unsigned char var_1_86 = 0;
unsigned long int var_1_87 = 256;
float var_1_88 = -0.05;
unsigned char var_1_90 = 64;
unsigned char var_1_91 = 128;
unsigned char var_1_92 = 0;
unsigned char var_1_93 = 200;
signed long int var_1_94 = -1000000;
float var_1_95 = 5.8;
signed char var_1_96 = 4;
float var_1_97 = 127.8;
unsigned char var_1_98 = 0;
signed short int var_1_99 = 64;
unsigned long int var_1_100 = 100000;
unsigned char var_1_101 = 1;
unsigned char var_1_102 = 0;
signed short int var_1_103 = 10;
double var_1_104 = 25.825;
unsigned short int var_1_105 = 128;
signed long int var_1_106 = 128;
unsigned char var_1_107 = 1;
float var_1_108 = 5.8;
double var_1_109 = 1.575;
unsigned char var_1_110 = 1;
signed long int var_1_111 = 1;
unsigned char var_1_112 = 4;

// Calibration values

// Last'ed variables
double last_1_var_1_58 = 15.8;
signed short int last_1_var_1_64 = -8;
unsigned long int last_1_var_1_87 = 256;
unsigned char last_1_var_1_101 = 1;
signed long int last_1_var_1_106 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req13Batch33Amount500
	if (var_1_28 < last_1_var_1_106) {
		if ((var_1_7 % 256) <= -50) {
			if (var_1_13 != last_1_var_1_58) {
				var_1_36 = var_1_37;
			} else {
				var_1_36 = (! var_1_37);
			}
		} else {
			var_1_36 = (! (! var_1_38));
		}
	}


	// From: Req49Batch33Amount500
	if (var_1_36) {
		var_1_106 = var_1_3;
	} else {
		var_1_106 = last_1_var_1_106;
	}


	// From: Req1Batch33Amount500
	var_1_1 = ((var_1_2 - 256) - var_1_3);


	// From: Req2Batch33Amount500
	var_1_4 = (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8));


	// From: Req3Batch33Amount500
	signed long int stepLocal_0 = var_1_3;
	if (stepLocal_0 < var_1_7) {
		var_1_9 = (var_1_10 + 1);
	}


	// From: Req4Batch33Amount500
	if (var_1_1 < (var_1_9 & (var_1_10 | var_1_7))) {
		var_1_11 = (abs (var_1_12 + (var_1_13 - var_1_14)));
	}


	// From: Req16Batch33Amount500
	var_1_44 = (max ((max (var_1_106 , var_1_2)) , (var_1_3 + (var_1_45 - var_1_25))));


	// From: Req18Batch33Amount500
	unsigned char stepLocal_14 = var_1_37;
	if (var_1_43 > var_1_23) {
		if (stepLocal_14 || var_1_38) {
			var_1_48 = (min (var_1_22 , (var_1_14 - (var_1_49 - 49.25))));
		}
	}


	// From: Req33Batch33Amount500
	var_1_84 = (max (var_1_7 , var_1_73));


	// From: Req38Batch33Amount500
	signed char stepLocal_33 = var_1_4;
	if (((16 - var_1_73) ^ var_1_7) <= stepLocal_33) {
		var_1_94 = var_1_20;
	} else {
		if ((var_1_13 - var_1_61) > (var_1_14 + (- var_1_23))) {
			if (! (var_1_3 < var_1_28)) {
				if (1000.5 != (var_1_61 - var_1_59)) {
					var_1_94 = (var_1_81 - var_1_2);
				}
			} else {
				var_1_94 = ((abs (var_1_73)) + (abs (var_1_92)));
			}
		} else {
			var_1_94 = (var_1_10 - var_1_69);
		}
	}


	// From: Req42Batch33Amount500
	if (var_1_54) {
		var_1_98 = var_1_79;
	} else {
		var_1_98 = var_1_78;
	}


	// From: Req43Batch33Amount500
	var_1_99 = -2;


	// From: Req44Batch33Amount500
	var_1_100 = var_1_34;


	// From: Req45Batch33Amount500
	if (last_1_var_1_101) {
		var_1_101 = var_1_102;
	} else {
		var_1_101 = var_1_37;
	}


	// From: Req47Batch33Amount500
	if (var_1_86) {
		var_1_104 = var_1_49;
	} else {
		var_1_104 = var_1_21;
	}


	// From: Req50Batch33Amount500
	if (var_1_101) {
		var_1_107 = var_1_86;
	} else {
		var_1_107 = var_1_38;
	}


	// From: Req51Batch33Amount500
	if (var_1_37) {
		var_1_108 = var_1_57;
	}


	// From: Req52Batch33Amount500
	if (! var_1_98) {
		var_1_109 = var_1_60;
	} else {
		var_1_109 = (min (((max (var_1_13 , var_1_12)) + var_1_43) , (var_1_60 - var_1_59)));
	}


	// From: Req53Batch33Amount500
	var_1_110 = var_1_55;


	// From: Req54Batch33Amount500
	var_1_111 = var_1_28;


	// From: Req55Batch33Amount500
	var_1_112 = var_1_74;


	// From: Req8Batch33Amount500
	signed long int stepLocal_6 = var_1_17 / var_1_2;
	unsigned char stepLocal_5 = var_1_36;
	if (64.5f < var_1_12) {
		if (-64 <= stepLocal_6) {
			var_1_27 = (var_1_28 - var_1_29);
		} else {
			if (var_1_98 || stepLocal_5) {
				var_1_27 = (max (var_1_5 , var_1_8));
			} else {
				var_1_27 = (max (var_1_5 , (min (var_1_7 , (var_1_28 - var_1_29)))));
			}
		}
	}


	// From: Req23Batch33Amount500
	unsigned char stepLocal_17 = ! (var_1_43 <= var_1_49);
	if ((var_1_13 + var_1_22) != (var_1_49 * var_1_43)) {
		if (var_1_49 > (var_1_14 - 25.1)) {
			var_1_58 = (var_1_59 - var_1_13);
		}
	} else {
		if ((var_1_29 > (var_1_10 << var_1_111)) || stepLocal_17) {
			var_1_58 = (var_1_14 - (max (var_1_57 , var_1_59)));
		} else {
			var_1_58 = (((var_1_60 + var_1_61) - var_1_57) + (max ((abs (var_1_12)) , var_1_13)));
		}
	}


	// From: Req24Batch33Amount500
	if (var_1_58 == var_1_13) {
		if (var_1_55) {
			var_1_62 = var_1_29;
		}
	} else {
		var_1_62 = ((25706 + var_1_63) - 2);
	}


	// From: Req29Batch33Amount500
	var_1_75 = (var_1_29 - var_1_62);


	// From: Req31Batch33Amount500
	if ((- 199.75f) != (- (var_1_108 + var_1_58))) {
		var_1_77 = (! var_1_78);
	} else {
		var_1_77 = (var_1_55 || (var_1_38 && var_1_79));
	}


	// From: Req32Batch33Amount500
	signed long int stepLocal_24 = (min (var_1_81 , var_1_82)) - (var_1_74 + var_1_83);
	if (var_1_55) {
		if (var_1_110) {
			if (var_1_10 < stepLocal_24) {
				if (var_1_77) {
					if (var_1_79) {
						var_1_80 = (max (var_1_43 , ((var_1_49 - var_1_57) - var_1_13)));
					}
				} else {
					var_1_80 = (abs (var_1_49));
				}
			}
		}
	} else {
		var_1_80 = ((max (var_1_14 , (var_1_13 + var_1_57))) - var_1_60);
	}


	// From: Req41Batch33Amount500
	if (var_1_101) {
		var_1_97 = var_1_43;
	} else {
		var_1_97 = var_1_49;
	}


	// From: Req5Batch33Amount500
	if (! var_1_77) {
		var_1_15 = var_1_5;
	} else {
		if (var_1_12 > (var_1_14 - var_1_13)) {
			var_1_15 = (var_1_17 + (var_1_18 - var_1_9));
		} else {
			var_1_15 = ((min (var_1_9 , var_1_5)) + (var_1_4 + var_1_6));
		}
	}


	// From: Req7Batch33Amount500
	var_1_24 = ((var_1_62 + (var_1_25 - var_1_10)) - (var_1_18 + var_1_26));


	// From: Req12Batch33Amount500
	if (var_1_77) {
		var_1_35 = ((var_1_10 - var_1_18) + var_1_94);
	} else {
		var_1_35 = (var_1_29 - var_1_10);
	}


	// From: Req19Batch33Amount500
	signed long int stepLocal_15 = var_1_106 * (var_1_8 + var_1_2);
	if (var_1_7 >= stepLocal_15) {
		if (! var_1_77) {
			var_1_50 = (var_1_29 + (abs (var_1_10)));
		}
	} else {
		var_1_50 = var_1_10;
	}


	// From: Req21Batch33Amount500
	if ((var_1_40 * var_1_9) != var_1_35) {
		if (var_1_34 > var_1_26) {
			var_1_52 = (var_1_37 || var_1_53);
		}
	} else {
		if (var_1_37) {
			var_1_52 = ((var_1_54 || var_1_53) || (! (! var_1_55)));
		} else {
			var_1_52 = (var_1_55 || var_1_53);
		}
	}


	// From: Req26Batch33Amount500
	unsigned char stepLocal_19 = var_1_38;
	signed long int stepLocal_18 = var_1_18;
	if (var_1_22 > var_1_23) {
		if (var_1_36) {
			var_1_66 = (max ((var_1_67 - var_1_26) , var_1_18));
		} else {
			if (var_1_98) {
				var_1_66 = (var_1_67 - var_1_2);
			}
		}
	} else {
		if (stepLocal_19 && var_1_52) {
			if (var_1_62 < stepLocal_18) {
				var_1_66 = (var_1_24 + (max ((var_1_29 + var_1_69) , var_1_1)));
			} else {
				var_1_66 = (abs (var_1_41));
			}
		}
	}


	// From: Req28Batch33Amount500
	unsigned char stepLocal_21 = var_1_77;
	if (stepLocal_21 || var_1_107) {
		var_1_71 = (min ((var_1_10 + (var_1_73 + var_1_74)) , var_1_29));
	}


	// From: Req30Batch33Amount500
	unsigned char stepLocal_23 = var_1_77;
	signed long int stepLocal_22 = -5;
	if (var_1_60 < (- var_1_14)) {
		if (stepLocal_23 && var_1_37) {
			var_1_76 = (min ((var_1_59 - var_1_14) , (128.2f - (100000.75f + 1.75f))));
		}
	} else {
		if (var_1_17 > stepLocal_22) {
			var_1_76 = (max (var_1_57 , 1.05f));
		}
	}


	// From: Req34Batch33Amount500
	unsigned long int stepLocal_25 = var_1_66;
	if (stepLocal_25 != (var_1_74 ^ var_1_7)) {
		var_1_85 = var_1_79;
	} else {
		var_1_85 = (! ((! var_1_86) || var_1_37));
	}


	// From: Req36Batch33Amount500
	signed long int stepLocal_32 = (var_1_4 ^ var_1_17) / var_1_20;
	signed long int stepLocal_31 = var_1_24;
	unsigned char stepLocal_30 = var_1_74;
	unsigned char stepLocal_29 = var_1_48 >= (var_1_59 - var_1_60);
	unsigned long int stepLocal_28 = var_1_81 + (- var_1_100);
	if (stepLocal_28 > var_1_66) {
		if (var_1_52) {
			if (stepLocal_32 <= var_1_73) {
				if (var_1_38 || stepLocal_29) {
					if (var_1_65 >= stepLocal_30) {
						var_1_88 = var_1_21;
					} else {
						var_1_88 = (abs (min ((var_1_59 - var_1_61) , 2.75f)));
					}
				}
			} else {
				var_1_88 = (var_1_12 + var_1_21);
			}
		} else {
			if (var_1_18 <= stepLocal_31) {
				var_1_88 = (min ((var_1_21 + var_1_43) , (min ((min (var_1_12 , var_1_13)) , var_1_57))));
			}
		}
	}


	// From: Req37Batch33Amount500
	if (var_1_52 || var_1_101) {
		var_1_90 = (var_1_91 - var_1_74);
	} else {
		if ((var_1_29 + var_1_44) > var_1_94) {
			if (var_1_74 != var_1_81) {
				var_1_90 = (min (var_1_92 , var_1_91));
			}
		} else {
			if (var_1_86 || var_1_110) {
				if (var_1_43 > var_1_23) {
					var_1_90 = (var_1_73 + var_1_74);
				} else {
					var_1_90 = ((var_1_93 - var_1_83) - var_1_74);
				}
			} else {
				var_1_90 = (var_1_93 - var_1_10);
			}
		}
	}


	// From: Req48Batch33Amount500
	if (var_1_52) {
		var_1_105 = var_1_93;
	} else {
		var_1_105 = var_1_62;
	}


	// From: Req6Batch33Amount500
	signed long int stepLocal_4 = - var_1_3;
	unsigned char stepLocal_3 = var_1_110;
	unsigned char stepLocal_2 = var_1_10;
	unsigned char stepLocal_1 = (var_1_6 / var_1_20) > var_1_106;
	if (stepLocal_1 || (-50 > var_1_18)) {
		if (stepLocal_2 <= var_1_18) {
			if ((var_1_13 < var_1_88) || stepLocal_3) {
				var_1_19 = ((min (var_1_13 , (var_1_21 + var_1_22))) + var_1_23);
			}
		} else {
			if (stepLocal_4 <= var_1_8) {
				var_1_19 = var_1_14;
			}
		}
	} else {
		var_1_19 = var_1_13;
	}


	// From: Req10Batch33Amount500
	unsigned char stepLocal_7 = var_1_77;
	if (stepLocal_7 || var_1_52) {
		var_1_32 = var_1_8;
	}


	// From: Req11Batch33Amount500
	if (var_1_24 <= var_1_28) {
		var_1_33 = (abs (var_1_10));
	} else {
		if (var_1_101) {
			var_1_33 = (min (var_1_25 , (min (var_1_2 , (max (var_1_66 , var_1_26))))));
		} else {
			if (var_1_98) {
				var_1_33 = (abs (var_1_2));
			} else {
				var_1_33 = ((min (var_1_3 , var_1_26)) + var_1_34);
			}
		}
	}


	// From: Req14Batch33Amount500
	if ((var_1_15 / (max (var_1_20 , var_1_40))) != var_1_6) {
		if (! var_1_85) {
			var_1_39 = ((var_1_41 - var_1_29) + var_1_44);
		}
	} else {
		var_1_39 = var_1_41;
	}


	// From: Req20Batch33Amount500
	if (! var_1_52) {
		var_1_51 = (var_1_14 - var_1_49);
	} else {
		var_1_51 = var_1_23;
	}


	// From: Req22Batch33Amount500
	signed long int stepLocal_16 = 8;
	if (! var_1_85) {
		if (var_1_33 > stepLocal_16) {
			if (! (var_1_33 < var_1_29)) {
				var_1_56 = ((var_1_14 - (var_1_57 - 1.4)) + var_1_21);
			} else {
				var_1_56 = var_1_21;
			}
		}
	}


	// From: Req27Batch33Amount500
	unsigned char stepLocal_20 = var_1_85;
	if (var_1_55 || stepLocal_20) {
		var_1_70 = 256u;
	} else {
		var_1_70 = (max (((min (var_1_10 , 128u)) + (max (var_1_15 , var_1_45))) , (min (var_1_25 , var_1_29))));
	}


	// From: Req35Batch33Amount500
	unsigned long int stepLocal_27 = var_1_65 - (var_1_44 + var_1_81);
	unsigned long int stepLocal_26 = var_1_33 / (max (var_1_81 , var_1_40));
	if ((var_1_41 + last_1_var_1_87) > stepLocal_27) {
		if (stepLocal_26 != ((var_1_69 * var_1_82) / var_1_65)) {
			var_1_87 = (min (var_1_69 , var_1_34));
		}
	} else {
		var_1_87 = (max (var_1_69 , last_1_var_1_87));
	}


	// From: Req40Batch33Amount500
	if ((abs (var_1_51 * var_1_80)) >= var_1_61) {
		var_1_96 = (max (var_1_8 , var_1_93));
	} else {
		var_1_96 = (abs (min (var_1_28 , (var_1_74 - var_1_83))));
	}


	// From: Req46Batch33Amount500
	var_1_103 = var_1_39;


	// From: Req15Batch33Amount500
	signed short int stepLocal_9 = var_1_20;
	unsigned long int stepLocal_8 = ~ var_1_66;
	if (stepLocal_8 < var_1_29) {
		if (var_1_56 <= var_1_21) {
			if (stepLocal_9 < var_1_103) {
				var_1_42 = var_1_13;
			} else {
				var_1_42 = (max (var_1_22 , var_1_12));
			}
		} else {
			var_1_42 = (abs (var_1_12));
		}
	} else {
		if (var_1_110) {
			var_1_42 = (var_1_21 + (abs (var_1_12)));
		} else {
			var_1_42 = (var_1_12 + (min (var_1_43 , (var_1_21 + var_1_22))));
		}
	}


	// From: Req17Batch33Amount500
	signed long int stepLocal_13 = -8;
	unsigned long int stepLocal_12 = var_1_100;
	unsigned long int stepLocal_11 = - var_1_87;
	unsigned char stepLocal_10 = var_1_20 < (var_1_28 - 256);
	if (var_1_38 && stepLocal_10) {
		if (var_1_8 >= stepLocal_13) {
			var_1_46 = (var_1_13 - var_1_14);
		}
	} else {
		if (stepLocal_11 > (var_1_100 / var_1_41)) {
			if (var_1_110) {
				var_1_46 = (min (var_1_14 , 7.175f));
			} else {
				if (var_1_18 == stepLocal_12) {
					var_1_46 = var_1_13;
				}
			}
		} else {
			var_1_46 = (abs (var_1_14 - var_1_13));
		}
	}


	// From: Req25Batch33Amount500
	if ((var_1_3 * var_1_34) < (min (var_1_33 , 100u))) {
		var_1_64 = ((min (var_1_29 , (var_1_65 - last_1_var_1_64))) - var_1_10);
	} else {
		var_1_64 = (var_1_24 + (min (var_1_96 , var_1_50)));
	}


	// From: Req39Batch33Amount500
	signed long int stepLocal_34 = var_1_5 / (min (var_1_65 , var_1_81));
	if (! (var_1_52 || var_1_107)) {
		if (var_1_103 >= stepLocal_34) {
			var_1_95 = ((15.8f + var_1_57) - var_1_14);
		}
	}


	// From: Req9Batch33Amount500
	if (((var_1_42 + var_1_14) * var_1_13) > (abs (255.8f))) {
		var_1_31 = (max (var_1_5 , var_1_28));
	} else {
		var_1_31 = var_1_8;
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 1073741822);
	assume_abort_if_not(var_1_2 <= 2147483646);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= -31);
	assume_abort_if_not(var_1_5 <= 32);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -31);
	assume_abort_if_not(var_1_6 <= 31);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -63);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -1073741823);
	assume_abort_if_not(var_1_17 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
	assume_abort_if_not(var_1_20 != 0);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -461168.6018427383000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 536870911);
	assume_abort_if_not(var_1_25 <= 1073741823);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 1073741823);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= -1);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 0);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 1);
	var_1_40 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_40 >= -32768);
	assume_abort_if_not(var_1_40 <= 32767);
	assume_abort_if_not(var_1_40 != 0);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 1073741823);
	assume_abort_if_not(var_1_45 <= 2147483647);
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 4611686.018427383000e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 0);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 0);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 0);
	var_1_57 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_57 >= 2305843.009213691400e+12F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 4611686.018427383000e+12F && var_1_57 >= 1.0e-20F ));
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 0.0F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691400e+12F && var_1_60 >= 1.0e-20F ));
	var_1_61 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 2305843.009213691400e+12F && var_1_61 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_63 >= 16384);
	assume_abort_if_not(var_1_63 <= 32767);
	var_1_65 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_65 >= 16382);
	assume_abort_if_not(var_1_65 <= 32766);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 2147483647);
	assume_abort_if_not(var_1_67 <= 4294967294);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 0);
	assume_abort_if_not(var_1_69 <= 1073741823);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 0);
	assume_abort_if_not(var_1_73 <= 64);
	var_1_74 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_74 >= 0);
	assume_abort_if_not(var_1_74 <= 63);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 0);
	assume_abort_if_not(var_1_78 <= 0);
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 1);
	assume_abort_if_not(var_1_79 <= 1);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 127);
	assume_abort_if_not(var_1_81 <= 255);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 127);
	assume_abort_if_not(var_1_82 <= 255);
	var_1_83 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_83 >= 0);
	assume_abort_if_not(var_1_83 <= 63);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 1);
	assume_abort_if_not(var_1_86 <= 1);
	var_1_91 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_91 >= 127);
	assume_abort_if_not(var_1_91 <= 254);
	var_1_92 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_92 >= 0);
	assume_abort_if_not(var_1_92 <= 254);
	var_1_93 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_93 >= 190);
	assume_abort_if_not(var_1_93 <= 254);
	var_1_102 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_102 >= 0);
	assume_abort_if_not(var_1_102 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_58 = var_1_58;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_106 = var_1_106;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_1 == ((signed long int) ((var_1_2 - 256) - var_1_3))) && (var_1_4 == ((signed char) (max (((var_1_5 + var_1_6) + var_1_7) , var_1_8))))) && ((var_1_3 < var_1_7) ? (var_1_9 == ((unsigned char) (var_1_10 + 1))) : 1)) && ((var_1_1 < (var_1_9 & (var_1_10 | var_1_7))) ? (var_1_11 == ((float) (abs (var_1_12 + (var_1_13 - var_1_14))))) : 1)) && ((! var_1_77) ? (var_1_15 == ((signed long int) var_1_5)) : ((var_1_12 > (var_1_14 - var_1_13)) ? (var_1_15 == ((signed long int) (var_1_17 + (var_1_18 - var_1_9)))) : (var_1_15 == ((signed long int) ((min (var_1_9 , var_1_5)) + (var_1_4 + var_1_6))))))) && ((((var_1_6 / var_1_20) > var_1_106) || (-50 > var_1_18)) ? ((var_1_10 <= var_1_18) ? (((var_1_13 < var_1_88) || var_1_110) ? (var_1_19 == ((float) ((min (var_1_13 , (var_1_21 + var_1_22))) + var_1_23))) : 1) : (((- var_1_3) <= var_1_8) ? (var_1_19 == ((float) var_1_14)) : 1)) : (var_1_19 == ((float) var_1_13)))) && (var_1_24 == ((signed long int) ((var_1_62 + (var_1_25 - var_1_10)) - (var_1_18 + var_1_26))))) && ((64.5f < var_1_12) ? ((-64 <= (var_1_17 / var_1_2)) ? (var_1_27 == ((signed char) (var_1_28 - var_1_29))) : ((var_1_98 || var_1_36) ? (var_1_27 == ((signed char) (max (var_1_5 , var_1_8)))) : (var_1_27 == ((signed char) (max (var_1_5 , (min (var_1_7 , (var_1_28 - var_1_29))))))))) : 1)) && ((((var_1_42 + var_1_14) * var_1_13) > (abs (255.8f))) ? (var_1_31 == ((signed char) (max (var_1_5 , var_1_28)))) : (var_1_31 == ((signed char) var_1_8)))) && ((var_1_77 || var_1_52) ? (var_1_32 == ((signed char) var_1_8)) : 1)) && ((var_1_24 <= var_1_28) ? (var_1_33 == ((unsigned long int) (abs (var_1_10)))) : (var_1_101 ? (var_1_33 == ((unsigned long int) (min (var_1_25 , (min (var_1_2 , (max (var_1_66 , var_1_26)))))))) : (var_1_98 ? (var_1_33 == ((unsigned long int) (abs (var_1_2)))) : (var_1_33 == ((unsigned long int) ((min (var_1_3 , var_1_26)) + var_1_34))))))) && (var_1_77 ? (var_1_35 == ((signed long int) ((var_1_10 - var_1_18) + var_1_94))) : (var_1_35 == ((signed long int) (var_1_29 - var_1_10))))) && ((var_1_28 < last_1_var_1_106) ? (((var_1_7 % 256) <= -50) ? ((var_1_13 != last_1_var_1_58) ? (var_1_36 == ((unsigned char) var_1_37)) : (var_1_36 == ((unsigned char) (! var_1_37)))) : (var_1_36 == ((unsigned char) (! (! var_1_38))))) : 1)) && (((var_1_15 / (max (var_1_20 , var_1_40))) != var_1_6) ? ((! var_1_85) ? (var_1_39 == ((unsigned short int) ((var_1_41 - var_1_29) + var_1_44))) : 1) : (var_1_39 == ((unsigned short int) var_1_41)))) && (((~ var_1_66) < var_1_29) ? ((var_1_56 <= var_1_21) ? ((var_1_20 < var_1_103) ? (var_1_42 == ((double) var_1_13)) : (var_1_42 == ((double) (max (var_1_22 , var_1_12))))) : (var_1_42 == ((double) (abs (var_1_12))))) : (var_1_110 ? (var_1_42 == ((double) (var_1_21 + (abs (var_1_12))))) : (var_1_42 == ((double) (var_1_12 + (min (var_1_43 , (var_1_21 + var_1_22))))))))) && (var_1_44 == ((unsigned long int) (max ((max (var_1_106 , var_1_2)) , (var_1_3 + (var_1_45 - var_1_25))))))) && ((var_1_38 && (var_1_20 < (var_1_28 - 256))) ? ((var_1_8 >= -8) ? (var_1_46 == ((float) (var_1_13 - var_1_14))) : 1) : (((- var_1_87) > (var_1_100 / var_1_41)) ? (var_1_110 ? (var_1_46 == ((float) (min (var_1_14 , 7.175f)))) : ((var_1_18 == var_1_100) ? (var_1_46 == ((float) var_1_13)) : 1)) : (var_1_46 == ((float) (abs (var_1_14 - var_1_13))))))) && ((var_1_43 > var_1_23) ? ((var_1_37 || var_1_38) ? (var_1_48 == ((double) (min (var_1_22 , (var_1_14 - (var_1_49 - 49.25)))))) : 1) : 1)) && ((var_1_7 >= (var_1_106 * (var_1_8 + var_1_2))) ? ((! var_1_77) ? (var_1_50 == ((unsigned char) (var_1_29 + (abs (var_1_10))))) : 1) : (var_1_50 == ((unsigned char) var_1_10)))) && ((! var_1_52) ? (var_1_51 == ((float) (var_1_14 - var_1_49))) : (var_1_51 == ((float) var_1_23)))) && (((var_1_40 * var_1_9) != var_1_35) ? ((var_1_34 > var_1_26) ? (var_1_52 == ((unsigned char) (var_1_37 || var_1_53))) : 1) : (var_1_37 ? (var_1_52 == ((unsigned char) ((var_1_54 || var_1_53) || (! (! var_1_55))))) : (var_1_52 == ((unsigned char) (var_1_55 || var_1_53)))))) && ((! var_1_85) ? ((var_1_33 > 8) ? ((! (var_1_33 < var_1_29)) ? (var_1_56 == ((double) ((var_1_14 - (var_1_57 - 1.4)) + var_1_21))) : (var_1_56 == ((double) var_1_21))) : 1) : 1)) && (((var_1_13 + var_1_22) != (var_1_49 * var_1_43)) ? ((var_1_49 > (var_1_14 - 25.1)) ? (var_1_58 == ((double) (var_1_59 - var_1_13))) : 1) : (((var_1_29 > (var_1_10 << var_1_111)) || (! (var_1_43 <= var_1_49))) ? (var_1_58 == ((double) (var_1_14 - (max (var_1_57 , var_1_59))))) : (var_1_58 == ((double) (((var_1_60 + var_1_61) - var_1_57) + (max ((abs (var_1_12)) , var_1_13)))))))) && ((var_1_58 == var_1_13) ? (var_1_55 ? (var_1_62 == ((unsigned short int) var_1_29)) : 1) : (var_1_62 == ((unsigned short int) ((25706 + var_1_63) - 2))))) && (((var_1_3 * var_1_34) < (min (var_1_33 , 100u))) ? (var_1_64 == ((signed short int) ((min (var_1_29 , (var_1_65 - last_1_var_1_64))) - var_1_10))) : (var_1_64 == ((signed short int) (var_1_24 + (min (var_1_96 , var_1_50))))))) && ((var_1_22 > var_1_23) ? (var_1_36 ? (var_1_66 == ((unsigned long int) (max ((var_1_67 - var_1_26) , var_1_18)))) : (var_1_98 ? (var_1_66 == ((unsigned long int) (var_1_67 - var_1_2))) : 1)) : ((var_1_38 && var_1_52) ? ((var_1_62 < var_1_18) ? (var_1_66 == ((unsigned long int) (var_1_24 + (max ((var_1_29 + var_1_69) , var_1_1))))) : (var_1_66 == ((unsigned long int) (abs (var_1_41))))) : 1))) && ((var_1_55 || var_1_85) ? (var_1_70 == ((unsigned long int) 256u)) : (var_1_70 == ((unsigned long int) (max (((min (var_1_10 , 128u)) + (max (var_1_15 , var_1_45))) , (min (var_1_25 , var_1_29)))))))) && ((var_1_77 || var_1_107) ? (var_1_71 == ((unsigned char) (min ((var_1_10 + (var_1_73 + var_1_74)) , var_1_29)))) : 1)) && (var_1_75 == ((signed short int) (var_1_29 - var_1_62)))) && ((var_1_60 < (- var_1_14)) ? ((var_1_77 && var_1_37) ? (var_1_76 == ((float) (min ((var_1_59 - var_1_14) , (128.2f - (100000.75f + 1.75f)))))) : 1) : ((var_1_17 > -5) ? (var_1_76 == ((float) (max (var_1_57 , 1.05f)))) : 1))) && (((- 199.75f) != (- (var_1_108 + var_1_58))) ? (var_1_77 == ((unsigned char) (! var_1_78))) : (var_1_77 == ((unsigned char) (var_1_55 || (var_1_38 && var_1_79)))))) && (var_1_55 ? (var_1_110 ? ((var_1_10 < ((min (var_1_81 , var_1_82)) - (var_1_74 + var_1_83))) ? (var_1_77 ? (var_1_79 ? (var_1_80 == ((float) (max (var_1_43 , ((var_1_49 - var_1_57) - var_1_13))))) : 1) : (var_1_80 == ((float) (abs (var_1_49))))) : 1) : 1) : (var_1_80 == ((float) ((max (var_1_14 , (var_1_13 + var_1_57))) - var_1_60))))) && (var_1_84 == ((signed char) (max (var_1_7 , var_1_73))))) && ((var_1_66 != (var_1_74 ^ var_1_7)) ? (var_1_85 == ((unsigned char) var_1_79)) : (var_1_85 == ((unsigned char) (! ((! var_1_86) || var_1_37)))))) && (((var_1_41 + last_1_var_1_87) > (var_1_65 - (var_1_44 + var_1_81))) ? (((var_1_33 / (max (var_1_81 , var_1_40))) != ((var_1_69 * var_1_82) / var_1_65)) ? (var_1_87 == ((unsigned long int) (min (var_1_69 , var_1_34)))) : 1) : (var_1_87 == ((unsigned long int) (max (var_1_69 , last_1_var_1_87)))))) && (((var_1_81 + (- var_1_100)) > var_1_66) ? (var_1_52 ? ((((var_1_4 ^ var_1_17) / var_1_20) <= var_1_73) ? ((var_1_38 || (var_1_48 >= (var_1_59 - var_1_60))) ? ((var_1_65 >= var_1_74) ? (var_1_88 == ((float) var_1_21)) : (var_1_88 == ((float) (abs (min ((var_1_59 - var_1_61) , 2.75f)))))) : 1) : (var_1_88 == ((float) (var_1_12 + var_1_21)))) : ((var_1_18 <= var_1_24) ? (var_1_88 == ((float) (min ((var_1_21 + var_1_43) , (min ((min (var_1_12 , var_1_13)) , var_1_57)))))) : 1)) : 1)) && ((var_1_52 || var_1_101) ? (var_1_90 == ((unsigned char) (var_1_91 - var_1_74))) : (((var_1_29 + var_1_44) > var_1_94) ? ((var_1_74 != var_1_81) ? (var_1_90 == ((unsigned char) (min (var_1_92 , var_1_91)))) : 1) : ((var_1_86 || var_1_110) ? ((var_1_43 > var_1_23) ? (var_1_90 == ((unsigned char) (var_1_73 + var_1_74))) : (var_1_90 == ((unsigned char) ((var_1_93 - var_1_83) - var_1_74)))) : (var_1_90 == ((unsigned char) (var_1_93 - var_1_10))))))) && ((((16 - var_1_73) ^ var_1_7) <= var_1_4) ? (var_1_94 == ((signed long int) var_1_20)) : (((var_1_13 - var_1_61) > (var_1_14 + (- var_1_23))) ? ((! (var_1_3 < var_1_28)) ? ((1000.5 != (var_1_61 - var_1_59)) ? (var_1_94 == ((signed long int) (var_1_81 - var_1_2))) : 1) : (var_1_94 == ((signed long int) ((abs (var_1_73)) + (abs (var_1_92)))))) : (var_1_94 == ((signed long int) (var_1_10 - var_1_69)))))) && ((! (var_1_52 || var_1_107)) ? ((var_1_103 >= (var_1_5 / (min (var_1_65 , var_1_81)))) ? (var_1_95 == ((float) ((15.8f + var_1_57) - var_1_14))) : 1) : 1)) && (((abs (var_1_51 * var_1_80)) >= var_1_61) ? (var_1_96 == ((signed char) (max (var_1_8 , var_1_93)))) : (var_1_96 == ((signed char) (abs (min (var_1_28 , (var_1_74 - var_1_83)))))))) && (var_1_101 ? (var_1_97 == ((float) var_1_43)) : (var_1_97 == ((float) var_1_49)))) && (var_1_54 ? (var_1_98 == ((unsigned char) var_1_79)) : (var_1_98 == ((unsigned char) var_1_78)))) && (var_1_99 == ((signed short int) -2))) && (var_1_100 == ((unsigned long int) var_1_34))) && (last_1_var_1_101 ? (var_1_101 == ((unsigned char) var_1_102)) : (var_1_101 == ((unsigned char) var_1_37)))) && (var_1_103 == ((signed short int) var_1_39))) && (var_1_86 ? (var_1_104 == ((double) var_1_49)) : (var_1_104 == ((double) var_1_21)))) && (var_1_52 ? (var_1_105 == ((unsigned short int) var_1_93)) : (var_1_105 == ((unsigned short int) var_1_62)))) && (var_1_36 ? (var_1_106 == ((signed long int) var_1_3)) : (var_1_106 == ((signed long int) last_1_var_1_106)))) && (var_1_101 ? (var_1_107 == ((unsigned char) var_1_86)) : (var_1_107 == ((unsigned char) var_1_38)))) && (var_1_37 ? (var_1_108 == ((float) var_1_57)) : 1)) && ((! var_1_98) ? (var_1_109 == ((double) var_1_60)) : (var_1_109 == ((double) (min (((max (var_1_13 , var_1_12)) + var_1_43) , (var_1_60 - var_1_59))))))) && (var_1_110 == ((unsigned char) var_1_55))) && (var_1_111 == ((signed long int) var_1_28))) && (var_1_112 == ((unsigned char) var_1_74))
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
