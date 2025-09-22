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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch132Amount500.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 5;
signed long int var_1_6 = 200;
signed long int var_1_7 = 16;
signed long int var_1_8 = 32;
signed long int var_1_9 = 256;
unsigned char var_1_10 = 32;
signed char var_1_11 = -4;
signed char var_1_12 = -32;
signed char var_1_13 = -2;
signed char var_1_15 = -8;
signed char var_1_17 = 2;
signed char var_1_18 = 0;
signed short int var_1_19 = -128;
unsigned short int var_1_20 = 25;
double var_1_21 = 128.8;
unsigned short int var_1_22 = 64;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 200;
unsigned char var_1_25 = 128;
unsigned char var_1_26 = 16;
unsigned char var_1_27 = 8;
unsigned char var_1_28 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned short int var_1_34 = 1;
signed long int var_1_35 = -32;
unsigned short int var_1_37 = 57257;
unsigned short int var_1_38 = 23956;
unsigned short int var_1_39 = 31034;
float var_1_40 = 32.5;
float var_1_41 = 0.0;
float var_1_42 = 4.5;
float var_1_43 = 4.625;
double var_1_44 = 9999999999999.5;
signed short int var_1_45 = 5;
unsigned long int var_1_46 = 0;
signed char var_1_47 = 50;
signed short int var_1_48 = 100;
signed short int var_1_49 = 10000;
signed short int var_1_50 = 0;
signed char var_1_51 = -5;
unsigned char var_1_52 = 0;
signed short int var_1_53 = -16;
unsigned long int var_1_54 = 256;
unsigned long int var_1_55 = 1229564692;
double var_1_56 = 50.17;
signed char var_1_58 = 2;
double var_1_59 = 0.0;
double var_1_60 = 0.0;
unsigned long int var_1_61 = 25;
unsigned long int var_1_62 = 5;
unsigned long int var_1_63 = 4223707192;
unsigned char var_1_64 = 8;
unsigned char var_1_65 = 16;
unsigned char var_1_66 = 5;
unsigned char var_1_67 = 0;
float var_1_68 = 9.9;
unsigned char var_1_69 = 16;
unsigned char var_1_70 = 64;
float var_1_71 = -0.75;
float var_1_72 = 0.0;
float var_1_73 = 0.0;
float var_1_74 = 31.5;
signed char var_1_75 = -64;
signed char var_1_76 = -5;
signed long int var_1_78 = 50;
signed long int var_1_79 = 64;
signed short int var_1_80 = 50;
signed short int var_1_81 = -5;
unsigned long int var_1_82 = 4;
float var_1_83 = 100000000000000.12;
signed short int var_1_84 = 5;
signed short int var_1_85 = 200;
unsigned char var_1_86 = 0;
unsigned long int var_1_87 = 2;
unsigned long int var_1_88 = 1000000000;
unsigned long int var_1_89 = 1312810018;
unsigned long int var_1_90 = 1000000000;
unsigned long int var_1_91 = 1000000000;
signed short int var_1_92 = 0;
signed short int var_1_93 = 10;
signed short int var_1_94 = 20790;
unsigned char var_1_95 = 1;
unsigned char var_1_96 = 0;
signed char var_1_97 = 50;
signed char var_1_98 = 64;
signed short int var_1_99 = 32;
signed char var_1_100 = 5;
signed long int var_1_101 = -64;
signed long int var_1_102 = -5;
float var_1_103 = 3.8;
double var_1_104 = 1.4;
signed char var_1_105 = 8;
unsigned char var_1_106 = 1;
unsigned char var_1_107 = 8;
double var_1_108 = 4.5;
unsigned short int var_1_109 = 2;
float var_1_110 = 128.75;
signed long int var_1_112 = 2;
signed long int var_1_113 = 2;
unsigned long int var_1_114 = 16;
unsigned char var_1_115 = 4;
signed long int var_1_116 = 0;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_34 = 1;
unsigned long int last_1_var_1_46 = 0;
unsigned char last_1_var_1_52 = 0;
unsigned long int last_1_var_1_62 = 5;
signed long int last_1_var_1_78 = 50;
unsigned long int last_1_var_1_82 = 4;
signed short int last_1_var_1_84 = 5;
unsigned long int last_1_var_1_87 = 2;
signed long int last_1_var_1_112 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req24Batch132Amount500
	unsigned long int stepLocal_20 = min (last_1_var_1_82 , last_1_var_1_87);
	if (var_1_7 < stepLocal_20) {
		if (last_1_var_1_52) {
			if (! var_1_33) {
				var_1_69 = (var_1_25 - (var_1_70 - var_1_27));
			} else {
				var_1_69 = (min (var_1_26 , var_1_24));
			}
		}
	}


	// From: Req10Batch132Amount500
	if (var_1_31) {
		var_1_45 = (max (var_1_69 , (max (var_1_27 , (max (var_1_24 , var_1_26))))));
	}


	// From: Req20Batch132Amount500
	unsigned char stepLocal_18 = var_1_12 >= var_1_26;
	signed long int stepLocal_17 = var_1_6;
	if (stepLocal_17 <= last_1_var_1_78) {
		var_1_62 = (max (var_1_6 , 10u));
	} else {
		if (stepLocal_18 && var_1_32) {
			var_1_62 = (max (((var_1_63 - var_1_27) - last_1_var_1_84) , var_1_39));
		}
	}


	// From: Req11Batch132Amount500
	if (((var_1_24 - var_1_27) * last_1_var_1_46) <= last_1_var_1_62) {
		if ((var_1_8 * var_1_39) <= (var_1_26 / var_1_24)) {
			var_1_46 = var_1_24;
		}
	}


	// From: Req8Batch132Amount500
	signed long int stepLocal_10 = var_1_17 - var_1_27;
	if (var_1_18 == stepLocal_10) {
		var_1_40 = (var_1_41 - (var_1_42 + var_1_43));
	} else {
		var_1_40 = (max (var_1_42 , var_1_43));
	}


	// From: Req9Batch132Amount500
	signed long int stepLocal_11 = var_1_35 & var_1_10;
	if (var_1_7 >= stepLocal_11) {
		var_1_44 = var_1_42;
	} else {
		var_1_44 = (abs (var_1_42));
	}


	// From: Req12Batch132Amount500
	signed long int stepLocal_12 = - (var_1_25 ^ var_1_18);
	if (stepLocal_12 <= (~ var_1_7)) {
		var_1_47 = ((max (8 , var_1_18)) - var_1_27);
	} else {
		var_1_47 = (min (var_1_26 , (abs (max (var_1_17 , var_1_27)))));
	}


	// From: Req15Batch132Amount500
	var_1_52 = (var_1_32 && var_1_33);


	// From: Req17Batch132Amount500
	var_1_54 = ((max ((var_1_55 - var_1_18) , var_1_50)) + (var_1_7 + var_1_26));


	// From: Req19Batch132Amount500
	signed long int stepLocal_16 = var_1_24 ^ (var_1_27 * var_1_25);
	if (var_1_22 >= stepLocal_16) {
		if (var_1_33) {
			var_1_61 = 256u;
		}
	}


	// From: Req21Batch132Amount500
	unsigned char stepLocal_19 = var_1_52;
	if (var_1_33) {
		if ((32 <= (1 >> var_1_58)) || stepLocal_19) {
			var_1_64 = (min (var_1_58 , var_1_24));
		} else {
			var_1_64 = ((min (128 , var_1_25)) - (var_1_58 + var_1_65));
		}
	} else {
		var_1_64 = (var_1_24 - (min ((100 - var_1_66) , 5)));
	}


	// From: Req22Batch132Amount500
	if (var_1_31) {
		var_1_67 = (max ((var_1_24 - var_1_26) , var_1_25));
	}


	// From: Req25Batch132Amount500
	unsigned char stepLocal_21 = (max (var_1_38 , var_1_10)) <= var_1_6;
	if (stepLocal_21 || var_1_31) {
		var_1_71 = ((abs (var_1_60 - var_1_59)) - (var_1_72 - (var_1_73 - var_1_74)));
	}


	// From: Req29Batch132Amount500
	var_1_82 = (10u + var_1_8);


	// From: Req33Batch132Amount500
	if (var_1_71 >= (var_1_43 / (min (var_1_59 , var_1_73)))) {
		var_1_86 = (! (! (var_1_30 && var_1_31)));
	} else {
		if (var_1_31) {
			if (! var_1_52) {
				var_1_86 = (var_1_32 || ((var_1_71 < var_1_40) && var_1_33));
			} else {
				var_1_86 = (! var_1_30);
			}
		}
	}


	// From: Req38Batch132Amount500
	unsigned char stepLocal_29 = var_1_66;
	if (stepLocal_29 <= var_1_24) {
		if (var_1_33) {
			var_1_98 = (var_1_27 + var_1_66);
		} else {
			var_1_98 = 32;
		}
	} else {
		var_1_98 = var_1_76;
	}


	// From: Req42Batch132Amount500
	var_1_102 = var_1_24;


	// From: Req43Batch132Amount500
	if (var_1_30) {
		var_1_103 = 31.75f;
	}


	// From: Req44Batch132Amount500
	var_1_104 = var_1_72;


	// From: Req45Batch132Amount500
	var_1_105 = var_1_26;


	// From: Req47Batch132Amount500
	if (var_1_86) {
		var_1_107 = var_1_65;
	} else {
		var_1_107 = var_1_70;
	}


	// From: Req48Batch132Amount500
	var_1_108 = var_1_73;


	// From: Req50Batch132Amount500
	if (var_1_52) {
		var_1_110 = var_1_73;
	} else {
		var_1_110 = var_1_59;
	}


	// From: Req52Batch132Amount500
	var_1_114 = var_1_24;


	// From: Req53Batch132Amount500
	var_1_115 = var_1_66;


	// From: Req54Batch132Amount500
	var_1_116 = var_1_64;


	// From: Req36Batch132Amount500
	unsigned char stepLocal_28 = var_1_30;
	unsigned char stepLocal_27 = var_1_26;
	unsigned long int stepLocal_26 = 4u;
	if (stepLocal_27 > var_1_62) {
		if (stepLocal_26 == (min (var_1_82 , var_1_26))) {
			if (! var_1_86) {
				var_1_95 = (! (var_1_32 || (! var_1_31)));
			} else {
				var_1_95 = (var_1_31 && (var_1_30 && var_1_96));
			}
		} else {
			if (stepLocal_28 || (var_1_110 != (var_1_110 / 3.4f))) {
				var_1_95 = ((var_1_30 && var_1_32) || var_1_33);
			} else {
				var_1_95 = ((var_1_22 >= (var_1_37 - var_1_24)) || var_1_96);
			}
		}
	}


	// From: Req18Batch132Amount500
	signed long int stepLocal_15 = (var_1_39 >> var_1_58) / var_1_38;
	if (var_1_30) {
		if (stepLocal_15 >= var_1_46) {
			if (var_1_86) {
				var_1_56 = (500.8 - (var_1_59 - var_1_43));
			}
		} else {
			var_1_56 = ((var_1_59 - var_1_42) - (var_1_60 - (max (10.6 , var_1_43))));
		}
	}


	// From: Req28Batch132Amount500
	if ((var_1_18 + (max (var_1_70 , var_1_76))) <= (var_1_25 + var_1_10)) {
		var_1_80 = ((var_1_70 - var_1_10) + (var_1_81 + var_1_18));
	} else {
		if (var_1_86) {
			var_1_80 = (var_1_66 - var_1_46);
		}
	}


	// From: Req1Batch132Amount500
	unsigned long int stepLocal_0 = var_1_45 * var_1_54;
	if (stepLocal_0 == ((var_1_6 + var_1_7) - (min (var_1_8 , var_1_9)))) {
		var_1_1 = var_1_10;
	}


	// From: Req3Batch132Amount500
	var_1_19 = (min (((var_1_18 - 2) + var_1_12) , (abs (var_1_10 - var_1_116))));


	// From: Req4Batch132Amount500
	if (((10.6 - var_1_21) >= var_1_104) || var_1_86) {
		var_1_20 = (max (var_1_45 , var_1_22));
	}


	// From: Req14Batch132Amount500
	if (var_1_31 || var_1_86) {
		var_1_51 = (max ((min (var_1_17 , var_1_13)) , (var_1_12 + 2)));
	} else {
		if (var_1_25 < var_1_19) {
			var_1_51 = (abs ((max (var_1_18 , var_1_26)) - var_1_27));
		} else {
			var_1_51 = (min (-16 , -25));
		}
	}


	// From: Req26Batch132Amount500
	if ((abs (var_1_50)) > var_1_6) {
		if (var_1_33 && var_1_31) {
			var_1_75 = (var_1_17 - var_1_66);
		}
	} else {
		if ((var_1_58 - (var_1_26 + var_1_27)) <= var_1_18) {
			if ((abs (var_1_27)) < ((var_1_7 / var_1_25) / var_1_37)) {
				var_1_75 = (abs ((var_1_58 + var_1_76) + var_1_12));
			} else {
				if (var_1_32) {
					var_1_75 = (var_1_76 + var_1_13);
				} else {
					var_1_75 = (min (var_1_13 , var_1_27));
				}
			}
		} else {
			if (var_1_95) {
				if ((var_1_63 <= var_1_22) && (var_1_116 <= var_1_66)) {
					var_1_75 = var_1_13;
				} else {
					if (var_1_6 >= var_1_116) {
						var_1_75 = var_1_76;
					}
				}
			}
		}
	}


	// From: Req30Batch132Amount500
	if (var_1_18 == (var_1_7 / var_1_15)) {
		if (var_1_95) {
			var_1_83 = (abs (var_1_43));
		}
	} else {
		var_1_83 = (var_1_74 + (127.25f - var_1_43));
	}


	// From: Req32Batch132Amount500
	if (var_1_32 || (var_1_24 < var_1_10)) {
		var_1_85 = var_1_26;
	} else {
		if (((min (var_1_59 , var_1_104)) / var_1_60) >= var_1_110) {
			var_1_85 = (var_1_12 + (var_1_13 + var_1_15));
		}
	}


	// From: Req35Batch132Amount500
	if (var_1_89 > ((var_1_63 - var_1_114) >> var_1_58)) {
		var_1_92 = ((max (var_1_17 , (min (var_1_93 , var_1_50)))) - (min ((var_1_94 - var_1_24) , var_1_58)));
	} else {
		var_1_92 = ((max ((var_1_18 - var_1_25) , var_1_76)) + var_1_12);
	}


	// From: Req39Batch132Amount500
	var_1_99 = var_1_115;


	// From: Req41Batch132Amount500
	if (var_1_95) {
		var_1_101 = var_1_45;
	} else {
		var_1_101 = var_1_54;
	}


	// From: Req46Batch132Amount500
	if (var_1_95) {
		var_1_106 = var_1_70;
	} else {
		var_1_106 = var_1_58;
	}


	// From: Req27Batch132Amount500
	if (10 < var_1_62) {
		var_1_78 = var_1_65;
	} else {
		if ((~ var_1_62) > var_1_65) {
			var_1_78 = (var_1_99 + (max ((var_1_69 - var_1_37) , -8)));
		} else {
			if (last_1_var_1_78 != ((var_1_7 % var_1_70) + (var_1_49 / var_1_39))) {
				if (var_1_73 == var_1_110) {
					var_1_78 = ((max (var_1_49 , (var_1_26 + var_1_79))) + (max (last_1_var_1_78 , var_1_45)));
				} else {
					var_1_78 = ((1446049747 - var_1_46) - (min (var_1_18 , (min (var_1_65 , var_1_70)))));
				}
			}
		}
	}


	// From: Req34Batch132Amount500
	unsigned char stepLocal_25 = var_1_56 > var_1_71;
	unsigned long int stepLocal_24 = var_1_55;
	unsigned char stepLocal_23 = var_1_82 != var_1_18;
	if (stepLocal_23 && ((var_1_8 + var_1_37) > var_1_81)) {
		if (stepLocal_25 && var_1_95) {
			var_1_87 = (((var_1_88 + 1000000000u) + var_1_89) - ((var_1_90 + var_1_91) - var_1_39));
		}
	} else {
		if (((- last_1_var_1_87) & (var_1_61 + var_1_82)) >= stepLocal_24) {
			var_1_87 = var_1_78;
		} else {
			var_1_87 = (var_1_63 - var_1_25);
		}
	}


	// From: Req7Batch132Amount500
	signed long int stepLocal_9 = var_1_35;
	unsigned long int stepLocal_8 = max (var_1_12 , var_1_61);
	unsigned char stepLocal_7 = var_1_32;
	if (((var_1_45 ^ var_1_24) + (last_1_var_1_34 / var_1_35)) > stepLocal_8) {
		if (stepLocal_9 > (min (var_1_26 , var_1_12))) {
			if ((var_1_45 >= var_1_24) || stepLocal_7) {
				var_1_34 = (var_1_37 - var_1_25);
			}
		} else {
			if (var_1_86) {
				var_1_34 = ((var_1_38 + var_1_39) - var_1_45);
			} else {
				var_1_34 = (var_1_80 + var_1_25);
			}
		}
	} else {
		var_1_34 = var_1_45;
	}


	// From: Req23Batch132Amount500
	if ((var_1_13 < (var_1_58 << var_1_102)) && (var_1_43 >= var_1_21)) {
		if (var_1_34 <= var_1_61) {
			var_1_68 = (var_1_43 + var_1_42);
		} else {
			var_1_68 = (min (var_1_59 , var_1_42));
		}
	}


	// From: Req2Batch132Amount500
	unsigned char stepLocal_5 = var_1_64;
	signed long int stepLocal_4 = var_1_8 / var_1_15;
	signed long int stepLocal_3 = var_1_7;
	signed long int stepLocal_2 = var_1_8;
	unsigned char stepLocal_1 = var_1_52;
	if (((min (5 , var_1_64)) + (var_1_7 << var_1_20)) < stepLocal_5) {
		var_1_11 = (var_1_12 + (abs (var_1_13)));
	} else {
		if (((min (var_1_44 , var_1_68)) * var_1_44) < 4.745f) {
			if (var_1_10 > stepLocal_2) {
				if (var_1_12 < stepLocal_4) {
					var_1_11 = var_1_12;
				} else {
					if ((256u < var_1_64) || stepLocal_1) {
						var_1_11 = (min ((var_1_17 - var_1_18) , var_1_13));
					} else {
						if (var_1_18 >= stepLocal_3) {
							var_1_11 = var_1_17;
						} else {
							var_1_11 = (max (var_1_12 , var_1_13));
						}
					}
				}
			}
		} else {
			var_1_11 = var_1_18;
		}
	}


	// From: Req16Batch132Amount500
	if (var_1_44 > (- var_1_41)) {
		var_1_53 = (max ((var_1_61 - var_1_92) , var_1_27));
	} else {
		var_1_53 = var_1_12;
	}


	// From: Req51Batch132Amount500
	unsigned long int stepLocal_30 = var_1_87;
	if (stepLocal_30 < (1u / var_1_63)) {
		var_1_112 = (max (var_1_61 , (max (last_1_var_1_112 , (var_1_82 + var_1_39)))));
	} else {
		var_1_112 = (abs (var_1_113 - var_1_101));
	}


	// From: Req6Batch132Amount500
	if ((- var_1_68) < var_1_40) {
		if (var_1_52) {
			var_1_28 = ((5u != 8u) && (var_1_95 && (! var_1_30)));
		}
	} else {
		if (var_1_30) {
			var_1_28 = ((var_1_31 && (! var_1_32)) && ((var_1_15 < 16) || (! var_1_33)));
		}
	}


	// From: Req40Batch132Amount500
	if (var_1_28) {
		var_1_100 = var_1_66;
	} else {
		var_1_100 = var_1_12;
	}


	// From: Req13Batch132Amount500
	unsigned long int stepLocal_14 = var_1_54;
	unsigned char stepLocal_13 = var_1_27;
	if (stepLocal_13 <= (var_1_54 / 4)) {
		var_1_48 = ((var_1_26 - var_1_53) + var_1_54);
	} else {
		if ((max (var_1_6 , var_1_54)) > stepLocal_14) {
			var_1_48 = var_1_10;
		} else {
			var_1_48 = (((var_1_92 + var_1_10) + (var_1_49 - var_1_50)) - var_1_54);
		}
	}


	// From: Req31Batch132Amount500
	unsigned long int stepLocal_22 = max (-100 , var_1_63);
	if ((var_1_26 * var_1_92) <= stepLocal_22) {
		if (var_1_33) {
			var_1_84 = (var_1_100 + var_1_76);
		}
	}


	// From: Req49Batch132Amount500
	if (var_1_86) {
		var_1_109 = var_1_84;
	}


	// From: Req5Batch132Amount500
	signed long int stepLocal_6 = max (var_1_8 , var_1_116);
	if (var_1_109 >= stepLocal_6) {
		if (var_1_95) {
			var_1_23 = ((max (var_1_24 , var_1_25)) - (max ((var_1_26 + var_1_27) , var_1_18)));
		} else {
			var_1_23 = (min (var_1_25 , (var_1_26 + (max (var_1_27 , var_1_18)))));
		}
	} else {
		var_1_23 = var_1_27;
	}


	// From: Req37Batch132Amount500
	if (var_1_33) {
		if (var_1_81 >= var_1_109) {
			var_1_97 = ((min (var_1_66 , var_1_65)) + var_1_27);
		} else {
			var_1_97 = ((min (var_1_65 , (abs (var_1_26)))) - var_1_66);
		}
	}
}



void updateVariables(void) {
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1073741824);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1073741823);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -128);
	assume_abort_if_not(var_1_15 <= 127);
	assume_abort_if_not(var_1_15 != 0);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 65534);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 127);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 64);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483648);
	assume_abort_if_not(var_1_35 <= 2147483647);
	assume_abort_if_not(var_1_35 != 0);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 32767);
	assume_abort_if_not(var_1_37 <= 65534);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 16383);
	assume_abort_if_not(var_1_38 <= 32767);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 16384);
	assume_abort_if_not(var_1_39 <= 32767);
	var_1_41 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 8191);
	assume_abort_if_not(var_1_49 <= 16383);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 8191);
	var_1_55 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_55 >= 1073741823);
	assume_abort_if_not(var_1_55 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_58 >= 1);
	assume_abort_if_not(var_1_58 <= 15);
	var_1_59 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_59 >= 4611686.018427383000e+12F && var_1_59 <= -1.0e-20F) || (var_1_59 <= 9223372.036854766000e+12F && var_1_59 >= 1.0e-20F ));
	var_1_60 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_60 >= 4611686.018427383000e+12F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 9223372.036854766000e+12F && var_1_60 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 3221225470);
	assume_abort_if_not(var_1_63 <= 4294967294);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 0);
	assume_abort_if_not(var_1_65 <= 63);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 63);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 63);
	assume_abort_if_not(var_1_70 <= 127);
	var_1_72 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_72 >= 4611686.018427383000e+12F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854766000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_73 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_73 >= 2305843.009213691400e+12F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427383000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= 0.0F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 2305843.009213691400e+12F && var_1_74 >= 1.0e-20F ));
	var_1_76 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_76 >= -31);
	assume_abort_if_not(var_1_76 <= 31);
	var_1_79 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_79 >= -536870911);
	assume_abort_if_not(var_1_79 <= 536870911);
	var_1_81 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_81 >= -8191);
	assume_abort_if_not(var_1_81 <= 8192);
	var_1_88 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_88 >= 536870911);
	assume_abort_if_not(var_1_88 <= 1073741824);
	var_1_89 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_89 >= 1073741824);
	assume_abort_if_not(var_1_89 <= 2147483647);
	var_1_90 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_90 >= 536870911);
	assume_abort_if_not(var_1_90 <= 1073741824);
	var_1_91 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_91 >= 536870912);
	assume_abort_if_not(var_1_91 <= 1073741823);
	var_1_93 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_93 >= -1);
	assume_abort_if_not(var_1_93 <= 32766);
	var_1_94 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_94 >= 16383);
	assume_abort_if_not(var_1_94 <= 32766);
	var_1_96 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_96 >= 1);
	assume_abort_if_not(var_1_96 <= 1);
	var_1_113 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_113 >= 0);
	assume_abort_if_not(var_1_113 <= 2147483646);
}



void updateLastVariables(void) {
	last_1_var_1_34 = var_1_34;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_52 = var_1_52;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_112 = var_1_112;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((var_1_45 * var_1_54) == ((var_1_6 + var_1_7) - (min (var_1_8 , var_1_9)))) ? (var_1_1 == ((unsigned char) var_1_10)) : 1) && ((((min (5 , var_1_64)) + (var_1_7 << var_1_20)) < var_1_64) ? (var_1_11 == ((signed char) (var_1_12 + (abs (var_1_13))))) : ((((min (var_1_44 , var_1_68)) * var_1_44) < 4.745f) ? ((var_1_10 > var_1_8) ? ((var_1_12 < (var_1_8 / var_1_15)) ? (var_1_11 == ((signed char) var_1_12)) : (((256u < var_1_64) || var_1_52) ? (var_1_11 == ((signed char) (min ((var_1_17 - var_1_18) , var_1_13)))) : ((var_1_18 >= var_1_7) ? (var_1_11 == ((signed char) var_1_17)) : (var_1_11 == ((signed char) (max (var_1_12 , var_1_13))))))) : 1) : (var_1_11 == ((signed char) var_1_18))))) && (var_1_19 == ((signed short int) (min (((var_1_18 - 2) + var_1_12) , (abs (var_1_10 - var_1_116))))))) && ((((10.6 - var_1_21) >= var_1_104) || var_1_86) ? (var_1_20 == ((unsigned short int) (max (var_1_45 , var_1_22)))) : 1)) && ((var_1_109 >= (max (var_1_8 , var_1_116))) ? (var_1_95 ? (var_1_23 == ((unsigned char) ((max (var_1_24 , var_1_25)) - (max ((var_1_26 + var_1_27) , var_1_18))))) : (var_1_23 == ((unsigned char) (min (var_1_25 , (var_1_26 + (max (var_1_27 , var_1_18)))))))) : (var_1_23 == ((unsigned char) var_1_27)))) && (((- var_1_68) < var_1_40) ? (var_1_52 ? (var_1_28 == ((unsigned char) ((5u != 8u) && (var_1_95 && (! var_1_30))))) : 1) : (var_1_30 ? (var_1_28 == ((unsigned char) ((var_1_31 && (! var_1_32)) && ((var_1_15 < 16) || (! var_1_33))))) : 1))) && ((((var_1_45 ^ var_1_24) + (last_1_var_1_34 / var_1_35)) > (max (var_1_12 , var_1_61))) ? ((var_1_35 > (min (var_1_26 , var_1_12))) ? (((var_1_45 >= var_1_24) || var_1_32) ? (var_1_34 == ((unsigned short int) (var_1_37 - var_1_25))) : 1) : (var_1_86 ? (var_1_34 == ((unsigned short int) ((var_1_38 + var_1_39) - var_1_45))) : (var_1_34 == ((unsigned short int) (var_1_80 + var_1_25))))) : (var_1_34 == ((unsigned short int) var_1_45)))) && ((var_1_18 == (var_1_17 - var_1_27)) ? (var_1_40 == ((float) (var_1_41 - (var_1_42 + var_1_43)))) : (var_1_40 == ((float) (max (var_1_42 , var_1_43)))))) && ((var_1_7 >= (var_1_35 & var_1_10)) ? (var_1_44 == ((double) var_1_42)) : (var_1_44 == ((double) (abs (var_1_42)))))) && (var_1_31 ? (var_1_45 == ((signed short int) (max (var_1_69 , (max (var_1_27 , (max (var_1_24 , var_1_26)))))))) : 1)) && ((((var_1_24 - var_1_27) * last_1_var_1_46) <= last_1_var_1_62) ? (((var_1_8 * var_1_39) <= (var_1_26 / var_1_24)) ? (var_1_46 == ((unsigned long int) var_1_24)) : 1) : 1)) && (((- (var_1_25 ^ var_1_18)) <= (~ var_1_7)) ? (var_1_47 == ((signed char) ((max (8 , var_1_18)) - var_1_27))) : (var_1_47 == ((signed char) (min (var_1_26 , (abs (max (var_1_17 , var_1_27))))))))) && ((var_1_27 <= (var_1_54 / 4)) ? (var_1_48 == ((signed short int) ((var_1_26 - var_1_53) + var_1_54))) : (((max (var_1_6 , var_1_54)) > var_1_54) ? (var_1_48 == ((signed short int) var_1_10)) : (var_1_48 == ((signed short int) (((var_1_92 + var_1_10) + (var_1_49 - var_1_50)) - var_1_54)))))) && ((var_1_31 || var_1_86) ? (var_1_51 == ((signed char) (max ((min (var_1_17 , var_1_13)) , (var_1_12 + 2))))) : ((var_1_25 < var_1_19) ? (var_1_51 == ((signed char) (abs ((max (var_1_18 , var_1_26)) - var_1_27)))) : (var_1_51 == ((signed char) (min (-16 , -25))))))) && (var_1_52 == ((unsigned char) (var_1_32 && var_1_33)))) && ((var_1_44 > (- var_1_41)) ? (var_1_53 == ((signed short int) (max ((var_1_61 - var_1_92) , var_1_27)))) : (var_1_53 == ((signed short int) var_1_12)))) && (var_1_54 == ((unsigned long int) ((max ((var_1_55 - var_1_18) , var_1_50)) + (var_1_7 + var_1_26))))) && (var_1_30 ? ((((var_1_39 >> var_1_58) / var_1_38) >= var_1_46) ? (var_1_86 ? (var_1_56 == ((double) (500.8 - (var_1_59 - var_1_43)))) : 1) : (var_1_56 == ((double) ((var_1_59 - var_1_42) - (var_1_60 - (max (10.6 , var_1_43))))))) : 1)) && ((var_1_22 >= (var_1_24 ^ (var_1_27 * var_1_25))) ? (var_1_33 ? (var_1_61 == ((unsigned long int) 256u)) : 1) : 1)) && ((var_1_6 <= last_1_var_1_78) ? (var_1_62 == ((unsigned long int) (max (var_1_6 , 10u)))) : (((var_1_12 >= var_1_26) && var_1_32) ? (var_1_62 == ((unsigned long int) (max (((var_1_63 - var_1_27) - last_1_var_1_84) , var_1_39)))) : 1))) && (var_1_33 ? (((32 <= (1 >> var_1_58)) || var_1_52) ? (var_1_64 == ((unsigned char) (min (var_1_58 , var_1_24)))) : (var_1_64 == ((unsigned char) ((min (128 , var_1_25)) - (var_1_58 + var_1_65))))) : (var_1_64 == ((unsigned char) (var_1_24 - (min ((100 - var_1_66) , 5))))))) && (var_1_31 ? (var_1_67 == ((unsigned char) (max ((var_1_24 - var_1_26) , var_1_25)))) : 1)) && (((var_1_13 < (var_1_58 << var_1_102)) && (var_1_43 >= var_1_21)) ? ((var_1_34 <= var_1_61) ? (var_1_68 == ((float) (var_1_43 + var_1_42))) : (var_1_68 == ((float) (min (var_1_59 , var_1_42))))) : 1)) && ((var_1_7 < (min (last_1_var_1_82 , last_1_var_1_87))) ? (last_1_var_1_52 ? ((! var_1_33) ? (var_1_69 == ((unsigned char) (var_1_25 - (var_1_70 - var_1_27)))) : (var_1_69 == ((unsigned char) (min (var_1_26 , var_1_24))))) : 1) : 1)) && ((((max (var_1_38 , var_1_10)) <= var_1_6) || var_1_31) ? (var_1_71 == ((float) ((abs (var_1_60 - var_1_59)) - (var_1_72 - (var_1_73 - var_1_74))))) : 1)) && (((abs (var_1_50)) > var_1_6) ? ((var_1_33 && var_1_31) ? (var_1_75 == ((signed char) (var_1_17 - var_1_66))) : 1) : (((var_1_58 - (var_1_26 + var_1_27)) <= var_1_18) ? (((abs (var_1_27)) < ((var_1_7 / var_1_25) / var_1_37)) ? (var_1_75 == ((signed char) (abs ((var_1_58 + var_1_76) + var_1_12)))) : (var_1_32 ? (var_1_75 == ((signed char) (var_1_76 + var_1_13))) : (var_1_75 == ((signed char) (min (var_1_13 , var_1_27)))))) : (var_1_95 ? (((var_1_63 <= var_1_22) && (var_1_116 <= var_1_66)) ? (var_1_75 == ((signed char) var_1_13)) : ((var_1_6 >= var_1_116) ? (var_1_75 == ((signed char) var_1_76)) : 1)) : 1)))) && ((10 < var_1_62) ? (var_1_78 == ((signed long int) var_1_65)) : (((~ var_1_62) > var_1_65) ? (var_1_78 == ((signed long int) (var_1_99 + (max ((var_1_69 - var_1_37) , -8))))) : ((last_1_var_1_78 != ((var_1_7 % var_1_70) + (var_1_49 / var_1_39))) ? ((var_1_73 == var_1_110) ? (var_1_78 == ((signed long int) ((max (var_1_49 , (var_1_26 + var_1_79))) + (max (last_1_var_1_78 , var_1_45))))) : (var_1_78 == ((signed long int) ((1446049747 - var_1_46) - (min (var_1_18 , (min (var_1_65 , var_1_70)))))))) : 1)))) && (((var_1_18 + (max (var_1_70 , var_1_76))) <= (var_1_25 + var_1_10)) ? (var_1_80 == ((signed short int) ((var_1_70 - var_1_10) + (var_1_81 + var_1_18)))) : (var_1_86 ? (var_1_80 == ((signed short int) (var_1_66 - var_1_46))) : 1))) && (var_1_82 == ((unsigned long int) (10u + var_1_8)))) && ((var_1_18 == (var_1_7 / var_1_15)) ? (var_1_95 ? (var_1_83 == ((float) (abs (var_1_43)))) : 1) : (var_1_83 == ((float) (var_1_74 + (127.25f - var_1_43)))))) && (((var_1_26 * var_1_92) <= (max (-100 , var_1_63))) ? (var_1_33 ? (var_1_84 == ((signed short int) (var_1_100 + var_1_76))) : 1) : 1)) && ((var_1_32 || (var_1_24 < var_1_10)) ? (var_1_85 == ((signed short int) var_1_26)) : ((((min (var_1_59 , var_1_104)) / var_1_60) >= var_1_110) ? (var_1_85 == ((signed short int) (var_1_12 + (var_1_13 + var_1_15)))) : 1))) && ((var_1_71 >= (var_1_43 / (min (var_1_59 , var_1_73)))) ? (var_1_86 == ((unsigned char) (! (! (var_1_30 && var_1_31))))) : (var_1_31 ? ((! var_1_52) ? (var_1_86 == ((unsigned char) (var_1_32 || ((var_1_71 < var_1_40) && var_1_33)))) : (var_1_86 == ((unsigned char) (! var_1_30)))) : 1))) && (((var_1_82 != var_1_18) && ((var_1_8 + var_1_37) > var_1_81)) ? (((var_1_56 > var_1_71) && var_1_95) ? (var_1_87 == ((unsigned long int) (((var_1_88 + 1000000000u) + var_1_89) - ((var_1_90 + var_1_91) - var_1_39)))) : 1) : ((((- last_1_var_1_87) & (var_1_61 + var_1_82)) >= var_1_55) ? (var_1_87 == ((unsigned long int) var_1_78)) : (var_1_87 == ((unsigned long int) (var_1_63 - var_1_25)))))) && ((var_1_89 > ((var_1_63 - var_1_114) >> var_1_58)) ? (var_1_92 == ((signed short int) ((max (var_1_17 , (min (var_1_93 , var_1_50)))) - (min ((var_1_94 - var_1_24) , var_1_58))))) : (var_1_92 == ((signed short int) ((max ((var_1_18 - var_1_25) , var_1_76)) + var_1_12))))) && ((var_1_26 > var_1_62) ? ((4u == (min (var_1_82 , var_1_26))) ? ((! var_1_86) ? (var_1_95 == ((unsigned char) (! (var_1_32 || (! var_1_31))))) : (var_1_95 == ((unsigned char) (var_1_31 && (var_1_30 && var_1_96))))) : ((var_1_30 || (var_1_110 != (var_1_110 / 3.4f))) ? (var_1_95 == ((unsigned char) ((var_1_30 && var_1_32) || var_1_33))) : (var_1_95 == ((unsigned char) ((var_1_22 >= (var_1_37 - var_1_24)) || var_1_96))))) : 1)) && (var_1_33 ? ((var_1_81 >= var_1_109) ? (var_1_97 == ((signed char) ((min (var_1_66 , var_1_65)) + var_1_27))) : (var_1_97 == ((signed char) ((min (var_1_65 , (abs (var_1_26)))) - var_1_66)))) : 1)) && ((var_1_66 <= var_1_24) ? (var_1_33 ? (var_1_98 == ((signed char) (var_1_27 + var_1_66))) : (var_1_98 == ((signed char) 32))) : (var_1_98 == ((signed char) var_1_76)))) && (var_1_99 == ((signed short int) var_1_115))) && (var_1_28 ? (var_1_100 == ((signed char) var_1_66)) : (var_1_100 == ((signed char) var_1_12)))) && (var_1_95 ? (var_1_101 == ((signed long int) var_1_45)) : (var_1_101 == ((signed long int) var_1_54)))) && (var_1_102 == ((signed long int) var_1_24))) && (var_1_30 ? (var_1_103 == ((float) 31.75f)) : 1)) && (var_1_104 == ((double) var_1_72))) && (var_1_105 == ((signed char) var_1_26))) && (var_1_95 ? (var_1_106 == ((unsigned char) var_1_70)) : (var_1_106 == ((unsigned char) var_1_58)))) && (var_1_86 ? (var_1_107 == ((unsigned char) var_1_65)) : (var_1_107 == ((unsigned char) var_1_70)))) && (var_1_108 == ((double) var_1_73))) && (var_1_86 ? (var_1_109 == ((unsigned short int) var_1_84)) : 1)) && (var_1_52 ? (var_1_110 == ((float) var_1_73)) : (var_1_110 == ((float) var_1_59)))) && ((var_1_87 < (1u / var_1_63)) ? (var_1_112 == ((signed long int) (max (var_1_61 , (max (last_1_var_1_112 , (var_1_82 + var_1_39))))))) : (var_1_112 == ((signed long int) (abs (var_1_113 - var_1_101)))))) && (var_1_114 == ((unsigned long int) var_1_24))) && (var_1_115 == ((unsigned char) var_1_66))) && (var_1_116 == ((signed long int) var_1_64))
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
