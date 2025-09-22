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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83Amount500.c", 13, "reach_error"); }
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
signed short int var_1_1 = -256;
unsigned char var_1_2 = 0;
signed short int var_1_3 = 24009;
signed short int var_1_4 = 32;
signed short int var_1_5 = 64;
signed short int var_1_6 = 19467;
unsigned char var_1_7 = 64;
unsigned char var_1_8 = 200;
unsigned char var_1_9 = 16;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 8;
float var_1_12 = 15.4;
signed short int var_1_13 = 10;
float var_1_14 = 25.75;
float var_1_15 = 9.5;
float var_1_16 = 256.8;
float var_1_17 = 9.6;
signed long int var_1_18 = -4;
signed short int var_1_19 = 1;
float var_1_20 = 8.4;
float var_1_21 = 100.4;
signed char var_1_22 = 100;
float var_1_23 = 0.0;
unsigned short int var_1_24 = 2;
signed short int var_1_25 = -10;
unsigned long int var_1_26 = 4;
signed short int var_1_27 = 31421;
float var_1_28 = -0.125;
signed short int var_1_29 = -10;
signed short int var_1_30 = -8;
double var_1_31 = 0.75;
unsigned long int var_1_32 = 2574749322;
unsigned long int var_1_33 = 8;
unsigned short int var_1_34 = 52940;
unsigned long int var_1_35 = 3289271302;
signed short int var_1_36 = 25;
signed short int var_1_38 = 1;
signed char var_1_39 = 16;
signed char var_1_40 = 8;
signed char var_1_41 = 1;
signed char var_1_42 = 64;
signed long int var_1_43 = -128;
float var_1_44 = 64.5;
float var_1_45 = 100.8;
float var_1_46 = 0.0;
float var_1_47 = 0.0;
signed short int var_1_48 = 5;
signed short int var_1_50 = 25784;
unsigned long int var_1_51 = 128;
signed long int var_1_52 = -4;
signed long int var_1_53 = 25;
float var_1_54 = 3.5;
double var_1_56 = 49.3;
signed char var_1_57 = 50;
unsigned char var_1_58 = 0;
signed char var_1_59 = 5;
unsigned long int var_1_60 = 5;
double var_1_61 = 128.4;
double var_1_62 = 127.85;
double var_1_63 = 16.4;
signed short int var_1_64 = 32;
unsigned short int var_1_66 = 2;
unsigned short int var_1_67 = 61268;
unsigned short int var_1_68 = 16;
signed long int var_1_69 = -4;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 10;
float var_1_72 = 255.25;
float var_1_74 = 255.8;
float var_1_75 = 2.8;
signed long int var_1_77 = -8;
signed short int var_1_79 = -32;
signed short int var_1_80 = -16;
unsigned short int var_1_81 = 10;
signed long int var_1_82 = 128;
double var_1_83 = 7.15;
signed char var_1_84 = 0;
signed char var_1_86 = 64;
signed char var_1_87 = 64;
float var_1_88 = 0.375;
unsigned char var_1_89 = 2;
signed short int var_1_90 = 128;
signed short int var_1_91 = 8;
signed char var_1_92 = 25;
double var_1_93 = 4.1;
float var_1_94 = 5.6;
unsigned char var_1_95 = 16;
unsigned long int var_1_96 = 200;
signed char var_1_97 = 16;
float var_1_98 = 127.1;
unsigned char var_1_99 = 0;
unsigned char var_1_100 = 0;
float var_1_101 = 4.4;
float var_1_102 = 31.6;
unsigned char var_1_104 = 2;
unsigned short int var_1_105 = 5;
unsigned short int var_1_106 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_33 = 8;
unsigned short int last_1_var_1_68 = 16;
double last_1_var_1_83 = 7.15;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch83Amount500
	var_1_7 = ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)));


	// From: Req4Batch83Amount500
	if ((var_1_3 / var_1_8) < var_1_13) {
		var_1_18 = (var_1_5 + (var_1_10 - var_1_13));
	} else {
		if (var_1_8 <= var_1_9) {
			var_1_18 = 128;
		} else {
			var_1_18 = var_1_8;
		}
	}


	// From: Req7Batch83Amount500
	signed short int stepLocal_0 = var_1_3;
	if ((- var_1_22) < stepLocal_0) {
		var_1_24 = (var_1_10 + var_1_8);
	} else {
		var_1_24 = ((max (var_1_9 , var_1_6)) + var_1_3);
	}


	// From: Req8Batch83Amount500
	if ((min ((var_1_9 >> var_1_26) , var_1_24)) > var_1_22) {
		if ((var_1_17 - var_1_16) < (var_1_20 * var_1_15)) {
			var_1_25 = ((min ((var_1_3 - var_1_11) , (16 + var_1_4))) - var_1_8);
		} else {
			var_1_25 = (max ((min (var_1_22 , var_1_9)) , var_1_27));
		}
	} else {
		var_1_25 = ((var_1_27 - var_1_26) - var_1_3);
	}


	// From: Req9Batch83Amount500
	if (var_1_15 < (max (var_1_17 , var_1_23))) {
		var_1_28 = (max (127.8f , var_1_15));
	}


	// From: Req10Batch83Amount500
	if (var_1_23 > var_1_17) {
		var_1_29 = (max (var_1_3 , var_1_9));
	} else {
		var_1_29 = ((min ((var_1_8 + var_1_26) , 1000)) - var_1_9);
	}


	// From: Req13Batch83Amount500
	unsigned char stepLocal_6 = var_1_27 <= var_1_13;
	signed char stepLocal_5 = var_1_22;
	if ((var_1_34 - (min (var_1_27 , var_1_6))) <= stepLocal_5) {
		var_1_33 = var_1_22;
	} else {
		if ((var_1_32 < var_1_4) || stepLocal_6) {
			var_1_33 = (var_1_35 - (max (var_1_8 , last_1_var_1_33)));
		}
	}


	// From: Req19Batch83Amount500
	var_1_51 = (var_1_22 + 256u);


	// From: Req25Batch83Amount500
	signed long int stepLocal_13 = -5 + (var_1_11 + var_1_9);
	unsigned long int stepLocal_12 = var_1_32;
	unsigned long int stepLocal_11 = var_1_26;
	unsigned long int stepLocal_10 = var_1_51;
	if (stepLocal_12 > var_1_50) {
		if (var_1_35 != stepLocal_10) {
			var_1_61 = (var_1_45 - (var_1_46 - var_1_16));
		} else {
			if (-50 <= stepLocal_13) {
				if (stepLocal_11 >= var_1_51) {
					var_1_61 = ((var_1_45 + var_1_17) - var_1_62);
				}
			} else {
				var_1_61 = ((max ((var_1_14 + var_1_45) , var_1_16)) + (31.4 + var_1_63));
			}
		}
	}


	// From: Req38Batch83Amount500
	var_1_90 = var_1_91;


	// From: Req41Batch83Amount500
	var_1_94 = var_1_63;


	// From: Req46Batch83Amount500
	var_1_99 = var_1_100;


	// From: Req47Batch83Amount500
	if (var_1_99) {
		var_1_101 = var_1_14;
	}


	// From: Req48Batch83Amount500
	signed char stepLocal_23 = var_1_87;
	if ((var_1_33 / var_1_35) >= stepLocal_23) {
		var_1_102 = (abs (var_1_14));
	}


	// From: Req49Batch83Amount500
	if (var_1_13 <= (var_1_86 >> (var_1_105 - var_1_106))) {
		if (var_1_18 != -4) {
			var_1_104 = (var_1_8 - var_1_26);
		} else {
			var_1_104 = var_1_42;
		}
	} else {
		var_1_104 = var_1_11;
	}


	// From: Req1Batch83Amount500
	if (var_1_99) {
		var_1_1 = ((var_1_3 - var_1_4) - var_1_5);
	} else {
		var_1_1 = ((max (var_1_3 , (var_1_6 - var_1_4))) - var_1_5);
	}


	// From: Req3Batch83Amount500
	if (! var_1_99) {
		var_1_12 = ((var_1_14 + (abs (49.5f))) + var_1_15);
	} else {
		var_1_12 = (((max (10.6f , var_1_16)) - var_1_17) + var_1_15);
	}


	// From: Req12Batch83Amount500
	unsigned char stepLocal_4 = var_1_99;
	signed short int stepLocal_3 = var_1_5;
	if ((var_1_51 / (var_1_32 - 256u)) < stepLocal_3) {
		if (stepLocal_4 || ((var_1_11 - var_1_9) >= -200)) {
			var_1_31 = (min ((var_1_16 - var_1_17) , var_1_14));
		}
	}


	// From: Req16Batch83Amount500
	if (var_1_99) {
		var_1_43 = var_1_38;
	} else {
		var_1_43 = var_1_18;
	}


	// From: Req17Batch83Amount500
	unsigned char stepLocal_7 = var_1_41 < var_1_3;
	if (var_1_99 || stepLocal_7) {
		if (var_1_20 != var_1_17) {
			var_1_44 = (max (3.5f , (min (1.25f , var_1_23))));
		} else {
			var_1_44 = (63.73f + (5.5f - (var_1_45 + 99.2f)));
		}
	} else {
		if (var_1_99) {
			var_1_44 = ((3.5f + var_1_16) - (var_1_23 - (var_1_47 - var_1_45)));
		} else {
			var_1_44 = (abs (var_1_23));
		}
	}


	// From: Req18Batch83Amount500
	unsigned char stepLocal_9 = var_1_9;
	signed char stepLocal_8 = var_1_22;
	if (((var_1_43 / var_1_26) + (var_1_29 / var_1_8)) != stepLocal_8) {
		if (var_1_42 <= stepLocal_9) {
			var_1_48 = ((max ((var_1_50 - var_1_29) , var_1_29)) - var_1_22);
		} else {
			var_1_48 = (100 - var_1_26);
		}
	} else {
		var_1_48 = (abs (var_1_40));
	}


	// From: Req20Batch83Amount500
	var_1_52 = (((max (var_1_50 , var_1_10)) - (min (var_1_22 , var_1_53))) + var_1_1);


	// From: Req21Batch83Amount500
	if (var_1_33 >= var_1_43) {
		if ((var_1_51 != var_1_43) && var_1_99) {
			var_1_54 = (max (var_1_23 , var_1_45));
		}
	} else {
		var_1_54 = (var_1_14 + ((var_1_47 - var_1_45) - 0.48f));
	}


	// From: Req28Batch83Amount500
	if (var_1_27 <= ((var_1_42 + var_1_9) - var_1_10)) {
		if ((var_1_8 / var_1_50) >= var_1_10) {
			var_1_68 = (var_1_22 + (min ((var_1_27 - last_1_var_1_68) , var_1_42)));
		} else {
			if (var_1_99) {
				var_1_68 = (var_1_22 + (var_1_27 - 32));
			} else {
				var_1_68 = ((max ((max (var_1_26 , last_1_var_1_68)) , (var_1_4 + var_1_104))) + (var_1_27 - var_1_8));
			}
		}
	} else {
		var_1_68 = ((17354 - 50) + (var_1_27 - var_1_8));
	}


	// From: Req29Batch83Amount500
	if ((var_1_3 == var_1_10) || var_1_99) {
		var_1_69 = 64;
	}


	// From: Req30Batch83Amount500
	if (var_1_99) {
		var_1_71 = var_1_9;
	}


	// From: Req32Batch83Amount500
	unsigned char stepLocal_16 = var_1_58;
	signed long int stepLocal_15 = var_1_4 / var_1_8;
	if (var_1_48 <= stepLocal_15) {
		if (stepLocal_16 && var_1_70) {
			var_1_79 = (var_1_27 - var_1_9);
		} else {
			var_1_79 = (max (var_1_80 , var_1_9));
		}
	}


	// From: Req36Batch83Amount500
	if (var_1_99) {
		var_1_88 = var_1_16;
	}


	// From: Req37Batch83Amount500
	if (var_1_99) {
		var_1_89 = var_1_9;
	}


	// From: Req39Batch83Amount500
	if (var_1_99) {
		var_1_92 = var_1_42;
	}


	// From: Req40Batch83Amount500
	if (var_1_99) {
		var_1_93 = var_1_46;
	}


	// From: Req42Batch83Amount500
	if (var_1_99) {
		var_1_95 = var_1_26;
	}


	// From: Req43Batch83Amount500
	if (var_1_99) {
		var_1_96 = var_1_67;
	} else {
		var_1_96 = var_1_82;
	}


	// From: Req44Batch83Amount500
	if (var_1_99) {
		var_1_97 = var_1_42;
	}


	// From: Req45Batch83Amount500
	if (var_1_99) {
		var_1_98 = var_1_14;
	} else {
		var_1_98 = var_1_46;
	}


	// From: Req5Batch83Amount500
	if (var_1_11 >= (128 - var_1_10)) {
		if (var_1_8 < (var_1_9 * var_1_90)) {
			if ((var_1_101 / (min (var_1_20 , 1.5f))) < var_1_17) {
				var_1_19 = (abs (var_1_6));
			} else {
				var_1_19 = (200 + var_1_11);
			}
		} else {
			if (-128 >= (var_1_11 << var_1_3)) {
				if (var_1_51 == var_1_90) {
					var_1_19 = (min (var_1_4 , (var_1_79 + var_1_9)));
				} else {
					var_1_19 = ((var_1_6 - (10000 - var_1_79)) - var_1_9);
				}
			} else {
				var_1_19 = (max (((min (var_1_9 , var_1_79)) + var_1_4) , (max (var_1_10 , var_1_5))));
			}
		}
	}


	// From: Req22Batch83Amount500
	if (var_1_68 >= (~ var_1_9)) {
		if (var_1_14 > 7.1f) {
			var_1_56 = (var_1_23 - var_1_17);
		} else {
			if ((var_1_24 + var_1_3) <= var_1_13) {
				var_1_56 = (max (var_1_15 , var_1_47));
			} else {
				var_1_56 = ((max (var_1_17 , var_1_46)) - var_1_47);
			}
		}
	} else {
		var_1_56 = (var_1_45 - var_1_47);
	}


	// From: Req24Batch83Amount500
	if (var_1_99) {
		var_1_60 = var_1_71;
	}


	// From: Req34Batch83Amount500
	if (last_1_var_1_83 < var_1_56) {
		var_1_83 = var_1_14;
	} else {
		var_1_83 = (min (var_1_16 , var_1_74));
	}


	// From: Req35Batch83Amount500
	signed long int stepLocal_22 = 128 - var_1_6;
	signed long int stepLocal_21 = -128;
	signed long int stepLocal_20 = max (var_1_80 , var_1_97);
	signed long int stepLocal_19 = 32 * var_1_82;
	signed long int stepLocal_18 = var_1_5 + var_1_4;
	unsigned char stepLocal_17 = 1000 >= var_1_50;
	if ((max (var_1_53 , 5)) == stepLocal_22) {
		if (stepLocal_21 <= ((var_1_26 + 4) - (min (var_1_53 , var_1_67)))) {
			var_1_84 = (abs (var_1_26));
		} else {
			if ((~ var_1_7) >= stepLocal_19) {
				var_1_84 = ((var_1_86 - 32) - (max ((var_1_87 - var_1_11) , (abs (var_1_10)))));
			} else {
				if (var_1_38 < stepLocal_20) {
					if ((abs (var_1_22 - var_1_26)) <= stepLocal_18) {
						var_1_84 = (var_1_41 - var_1_10);
					}
				} else {
					if (stepLocal_17 && var_1_99) {
						var_1_84 = var_1_8;
					} else {
						var_1_84 = ((var_1_11 + var_1_10) - var_1_42);
					}
				}
			}
		}
	}


	// From: Req6Batch83Amount500
	if (var_1_99) {
		if (((max (var_1_9 , var_1_10)) - (var_1_22 - 10)) >= (min (var_1_6 , var_1_60))) {
			var_1_21 = var_1_15;
		}
	} else {
		var_1_21 = ((min (var_1_17 , 4.25f)) - (var_1_23 - var_1_16));
	}


	// From: Req14Batch83Amount500
	if (((var_1_11 >> var_1_26) / (max (var_1_22 , -16))) < var_1_60) {
		var_1_36 = (var_1_38 - (var_1_11 + 256));
	}


	// From: Req23Batch83Amount500
	if (var_1_99) {
		if (var_1_60 < var_1_50) {
			var_1_57 = var_1_10;
		} else {
			var_1_57 = 50;
		}
	} else {
		if (var_1_33 < var_1_22) {
			var_1_57 = ((min ((min (var_1_10 , var_1_41)) , (min (var_1_11 , var_1_59)))) - (max (var_1_9 , var_1_42)));
		}
	}


	// From: Req27Batch83Amount500
	if (! (16.25f != var_1_83)) {
		var_1_66 = (max (((var_1_67 - 1) - (var_1_27 - var_1_8)) , 128));
	} else {
		var_1_66 = (min (var_1_27 , var_1_4));
	}


	// From: Req33Batch83Amount500
	if ((var_1_11 - var_1_82) >= var_1_51) {
		if (var_1_2 || var_1_70) {
			var_1_81 = (var_1_50 + var_1_66);
		} else {
			var_1_81 = (var_1_4 + var_1_9);
		}
	} else {
		var_1_81 = (var_1_67 - var_1_13);
	}


	// From: Req11Batch83Amount500
	signed long int stepLocal_2 = var_1_9 << var_1_5;
	unsigned long int stepLocal_1 = var_1_51;
	if (var_1_8 >= stepLocal_1) {
		if ((abs (var_1_66)) <= stepLocal_2) {
			var_1_30 = var_1_22;
		} else {
			var_1_30 = (var_1_5 - var_1_3);
		}
	}


	// From: Req15Batch83Amount500
	if (! var_1_99) {
		if ((var_1_5 * var_1_96) <= var_1_30) {
			if ((max (var_1_33 , var_1_10)) > var_1_35) {
				if (((max (var_1_33 , var_1_11)) % var_1_8) != var_1_34) {
					var_1_39 = (var_1_26 + var_1_9);
				}
			} else {
				if (var_1_99) {
					var_1_39 = (var_1_26 + var_1_11);
				}
			}
		} else {
			var_1_39 = (var_1_9 + var_1_26);
		}
	}


	// From: Req26Batch83Amount500
	unsigned char stepLocal_14 = var_1_58 || var_1_2;
	if ((var_1_60 > (var_1_32 - 8u)) && stepLocal_14) {
		if (var_1_45 < var_1_47) {
			if (var_1_2) {
				var_1_64 = (min (var_1_26 , var_1_4));
			} else {
				var_1_64 = (max (var_1_10 , var_1_59));
			}
		} else {
			var_1_64 = (min (var_1_4 , var_1_27));
		}
	} else {
		if (! (var_1_69 >= var_1_33)) {
			var_1_64 = (abs (min (-5 , var_1_81)));
		} else {
			var_1_64 = var_1_8;
		}
	}


	// From: Req31Batch83Amount500
	if ((var_1_10 * var_1_33) >= (max (var_1_53 , var_1_3))) {
		if ((var_1_69 < (var_1_69 * var_1_53)) && (var_1_15 <= var_1_47)) {
			var_1_72 = (var_1_16 - (var_1_46 - var_1_47));
		} else {
			if (var_1_33 > (max (var_1_96 , var_1_51))) {
				if ((47930 - var_1_11) < var_1_69) {
					var_1_72 = ((max (var_1_74 , var_1_47)) + var_1_17);
				} else {
					var_1_72 = (min (var_1_75 , var_1_16));
				}
			}
		}
	} else {
		if ((var_1_43 / (max (-100 , var_1_77))) == var_1_64) {
			if ((var_1_95 * var_1_51) >= (var_1_96 ^ (var_1_32 - var_1_96))) {
				var_1_72 = (max (5.1f , ((var_1_14 + var_1_45) + var_1_74)));
			} else {
				if ((- var_1_51) >= var_1_41) {
					var_1_72 = (min (((min (var_1_47 , var_1_46)) - 100.375f) , (var_1_15 + var_1_74)));
				} else {
					var_1_72 = (min (var_1_16 , (var_1_47 + (var_1_45 - var_1_17))));
				}
			}
		} else {
			var_1_72 = ((min ((min (var_1_45 , var_1_47)) , var_1_62)) - (63.5f + var_1_17));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 16382);
	assume_abort_if_not(var_1_3 <= 32766);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 16382);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 190);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 31);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	assume_abort_if_not(var_1_20 != 0.0F);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 63);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 4611686.018427383000e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 7);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 16383);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 2147483647);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65535);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= -1);
	assume_abort_if_not(var_1_38 <= 32766);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= -63);
	assume_abort_if_not(var_1_40 <= 63);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -1);
	assume_abort_if_not(var_1_41 <= 126);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 2305843.009213691400e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= 6917529.027641074000e+12F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_47 >= 2305843.009213691400e+12F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 16382);
	assume_abort_if_not(var_1_50 <= 32766);
	var_1_53 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 1073741823);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 1);
	var_1_59 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_59 >= -1);
	assume_abort_if_not(var_1_59 <= 126);
	var_1_62 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_62 >= 0.0F && var_1_62 <= -1.0e-20F) || (var_1_62 <= 9223372.036854766000e+12F && var_1_62 >= 1.0e-20F ));
	var_1_63 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_63 >= -230584.3009213691400e+13F && var_1_63 <= -1.0e-20F) || (var_1_63 <= 2305843.009213691400e+12F && var_1_63 >= 1.0e-20F ));
	var_1_67 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_67 >= 49150);
	assume_abort_if_not(var_1_67 <= 65534);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 0);
	assume_abort_if_not(var_1_70 <= 1);
	var_1_74 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_74 >= -461168.6018427383000e+13F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 4611686.018427383000e+12F && var_1_74 >= 1.0e-20F ));
	var_1_75 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_75 >= -922337.2036854766000e+13F && var_1_75 <= -1.0e-20F) || (var_1_75 <= 9223372.036854766000e+12F && var_1_75 >= 1.0e-20F ));
	var_1_77 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_77 >= -2147483648);
	assume_abort_if_not(var_1_77 <= 2147483647);
	assume_abort_if_not(var_1_77 != 0);
	var_1_80 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_80 >= -32767);
	assume_abort_if_not(var_1_80 <= 32766);
	var_1_82 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_82 >= 0);
	assume_abort_if_not(var_1_82 <= 2147483647);
	var_1_86 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_86 >= 62);
	assume_abort_if_not(var_1_86 <= 126);
	var_1_87 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_87 >= 63);
	assume_abort_if_not(var_1_87 <= 126);
	var_1_91 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_91 >= -32767);
	assume_abort_if_not(var_1_91 <= 32766);
	var_1_100 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_100 >= 0);
	assume_abort_if_not(var_1_100 <= 0);
	var_1_105 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_105 >= 3);
	assume_abort_if_not(var_1_105 <= 6);
	var_1_106 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_106 >= 0);
	assume_abort_if_not(var_1_106 <= 2);
}



void updateLastVariables(void) {
	last_1_var_1_33 = var_1_33;
	last_1_var_1_68 = var_1_68;
	last_1_var_1_83 = var_1_83;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_99 ? (var_1_1 == ((signed short int) ((var_1_3 - var_1_4) - var_1_5))) : (var_1_1 == ((signed short int) ((max (var_1_3 , (var_1_6 - var_1_4))) - var_1_5)))) && (var_1_7 == ((unsigned char) ((var_1_8 - var_1_9) - (100 - (var_1_10 + var_1_11)))))) && ((! var_1_99) ? (var_1_12 == ((float) ((var_1_14 + (abs (49.5f))) + var_1_15))) : (var_1_12 == ((float) (((max (10.6f , var_1_16)) - var_1_17) + var_1_15))))) && (((var_1_3 / var_1_8) < var_1_13) ? (var_1_18 == ((signed long int) (var_1_5 + (var_1_10 - var_1_13)))) : ((var_1_8 <= var_1_9) ? (var_1_18 == ((signed long int) 128)) : (var_1_18 == ((signed long int) var_1_8))))) && ((var_1_11 >= (128 - var_1_10)) ? ((var_1_8 < (var_1_9 * var_1_90)) ? (((var_1_101 / (min (var_1_20 , 1.5f))) < var_1_17) ? (var_1_19 == ((signed short int) (abs (var_1_6)))) : (var_1_19 == ((signed short int) (200 + var_1_11)))) : ((-128 >= (var_1_11 << var_1_3)) ? ((var_1_51 == var_1_90) ? (var_1_19 == ((signed short int) (min (var_1_4 , (var_1_79 + var_1_9))))) : (var_1_19 == ((signed short int) ((var_1_6 - (10000 - var_1_79)) - var_1_9)))) : (var_1_19 == ((signed short int) (max (((min (var_1_9 , var_1_79)) + var_1_4) , (max (var_1_10 , var_1_5)))))))) : 1)) && (var_1_99 ? ((((max (var_1_9 , var_1_10)) - (var_1_22 - 10)) >= (min (var_1_6 , var_1_60))) ? (var_1_21 == ((float) var_1_15)) : 1) : (var_1_21 == ((float) ((min (var_1_17 , 4.25f)) - (var_1_23 - var_1_16)))))) && (((- var_1_22) < var_1_3) ? (var_1_24 == ((unsigned short int) (var_1_10 + var_1_8))) : (var_1_24 == ((unsigned short int) ((max (var_1_9 , var_1_6)) + var_1_3))))) && (((min ((var_1_9 >> var_1_26) , var_1_24)) > var_1_22) ? (((var_1_17 - var_1_16) < (var_1_20 * var_1_15)) ? (var_1_25 == ((signed short int) ((min ((var_1_3 - var_1_11) , (16 + var_1_4))) - var_1_8))) : (var_1_25 == ((signed short int) (max ((min (var_1_22 , var_1_9)) , var_1_27))))) : (var_1_25 == ((signed short int) ((var_1_27 - var_1_26) - var_1_3))))) && ((var_1_15 < (max (var_1_17 , var_1_23))) ? (var_1_28 == ((float) (max (127.8f , var_1_15)))) : 1)) && ((var_1_23 > var_1_17) ? (var_1_29 == ((signed short int) (max (var_1_3 , var_1_9)))) : (var_1_29 == ((signed short int) ((min ((var_1_8 + var_1_26) , 1000)) - var_1_9))))) && ((var_1_8 >= var_1_51) ? (((abs (var_1_66)) <= (var_1_9 << var_1_5)) ? (var_1_30 == ((signed short int) var_1_22)) : (var_1_30 == ((signed short int) (var_1_5 - var_1_3)))) : 1)) && (((var_1_51 / (var_1_32 - 256u)) < var_1_5) ? ((var_1_99 || ((var_1_11 - var_1_9) >= -200)) ? (var_1_31 == ((double) (min ((var_1_16 - var_1_17) , var_1_14)))) : 1) : 1)) && (((var_1_34 - (min (var_1_27 , var_1_6))) <= var_1_22) ? (var_1_33 == ((unsigned long int) var_1_22)) : (((var_1_32 < var_1_4) || (var_1_27 <= var_1_13)) ? (var_1_33 == ((unsigned long int) (var_1_35 - (max (var_1_8 , last_1_var_1_33))))) : 1))) && ((((var_1_11 >> var_1_26) / (max (var_1_22 , -16))) < var_1_60) ? (var_1_36 == ((signed short int) (var_1_38 - (var_1_11 + 256)))) : 1)) && ((! var_1_99) ? (((var_1_5 * var_1_96) <= var_1_30) ? (((max (var_1_33 , var_1_10)) > var_1_35) ? ((((max (var_1_33 , var_1_11)) % var_1_8) != var_1_34) ? (var_1_39 == ((signed char) (var_1_26 + var_1_9))) : 1) : (var_1_99 ? (var_1_39 == ((signed char) (var_1_26 + var_1_11))) : 1)) : (var_1_39 == ((signed char) (var_1_9 + var_1_26)))) : 1)) && (var_1_99 ? (var_1_43 == ((signed long int) var_1_38)) : (var_1_43 == ((signed long int) var_1_18)))) && ((var_1_99 || (var_1_41 < var_1_3)) ? ((var_1_20 != var_1_17) ? (var_1_44 == ((float) (max (3.5f , (min (1.25f , var_1_23)))))) : (var_1_44 == ((float) (63.73f + (5.5f - (var_1_45 + 99.2f)))))) : (var_1_99 ? (var_1_44 == ((float) ((3.5f + var_1_16) - (var_1_23 - (var_1_47 - var_1_45))))) : (var_1_44 == ((float) (abs (var_1_23))))))) && ((((var_1_43 / var_1_26) + (var_1_29 / var_1_8)) != var_1_22) ? ((var_1_42 <= var_1_9) ? (var_1_48 == ((signed short int) ((max ((var_1_50 - var_1_29) , var_1_29)) - var_1_22))) : (var_1_48 == ((signed short int) (100 - var_1_26)))) : (var_1_48 == ((signed short int) (abs (var_1_40)))))) && (var_1_51 == ((unsigned long int) (var_1_22 + 256u)))) && (var_1_52 == ((signed long int) (((max (var_1_50 , var_1_10)) - (min (var_1_22 , var_1_53))) + var_1_1)))) && ((var_1_33 >= var_1_43) ? (((var_1_51 != var_1_43) && var_1_99) ? (var_1_54 == ((float) (max (var_1_23 , var_1_45)))) : 1) : (var_1_54 == ((float) (var_1_14 + ((var_1_47 - var_1_45) - 0.48f)))))) && ((var_1_68 >= (~ var_1_9)) ? ((var_1_14 > 7.1f) ? (var_1_56 == ((double) (var_1_23 - var_1_17))) : (((var_1_24 + var_1_3) <= var_1_13) ? (var_1_56 == ((double) (max (var_1_15 , var_1_47)))) : (var_1_56 == ((double) ((max (var_1_17 , var_1_46)) - var_1_47))))) : (var_1_56 == ((double) (var_1_45 - var_1_47))))) && (var_1_99 ? ((var_1_60 < var_1_50) ? (var_1_57 == ((signed char) var_1_10)) : (var_1_57 == ((signed char) 50))) : ((var_1_33 < var_1_22) ? (var_1_57 == ((signed char) ((min ((min (var_1_10 , var_1_41)) , (min (var_1_11 , var_1_59)))) - (max (var_1_9 , var_1_42))))) : 1))) && (var_1_99 ? (var_1_60 == ((unsigned long int) var_1_71)) : 1)) && ((var_1_32 > var_1_50) ? ((var_1_35 != var_1_51) ? (var_1_61 == ((double) (var_1_45 - (var_1_46 - var_1_16)))) : ((-50 <= (-5 + (var_1_11 + var_1_9))) ? ((var_1_26 >= var_1_51) ? (var_1_61 == ((double) ((var_1_45 + var_1_17) - var_1_62))) : 1) : (var_1_61 == ((double) ((max ((var_1_14 + var_1_45) , var_1_16)) + (31.4 + var_1_63)))))) : 1)) && (((var_1_60 > (var_1_32 - 8u)) && (var_1_58 || var_1_2)) ? ((var_1_45 < var_1_47) ? (var_1_2 ? (var_1_64 == ((signed short int) (min (var_1_26 , var_1_4)))) : (var_1_64 == ((signed short int) (max (var_1_10 , var_1_59))))) : (var_1_64 == ((signed short int) (min (var_1_4 , var_1_27))))) : ((! (var_1_69 >= var_1_33)) ? (var_1_64 == ((signed short int) (abs (min (-5 , var_1_81))))) : (var_1_64 == ((signed short int) var_1_8))))) && ((! (16.25f != var_1_83)) ? (var_1_66 == ((unsigned short int) (max (((var_1_67 - 1) - (var_1_27 - var_1_8)) , 128)))) : (var_1_66 == ((unsigned short int) (min (var_1_27 , var_1_4)))))) && ((var_1_27 <= ((var_1_42 + var_1_9) - var_1_10)) ? (((var_1_8 / var_1_50) >= var_1_10) ? (var_1_68 == ((unsigned short int) (var_1_22 + (min ((var_1_27 - last_1_var_1_68) , var_1_42))))) : (var_1_99 ? (var_1_68 == ((unsigned short int) (var_1_22 + (var_1_27 - 32)))) : (var_1_68 == ((unsigned short int) ((max ((max (var_1_26 , last_1_var_1_68)) , (var_1_4 + var_1_104))) + (var_1_27 - var_1_8)))))) : (var_1_68 == ((unsigned short int) ((17354 - 50) + (var_1_27 - var_1_8)))))) && (((var_1_3 == var_1_10) || var_1_99) ? (var_1_69 == ((signed long int) 64)) : 1)) && (var_1_99 ? (var_1_71 == ((unsigned char) var_1_9)) : 1)) && (((var_1_10 * var_1_33) >= (max (var_1_53 , var_1_3))) ? (((var_1_69 < (var_1_69 * var_1_53)) && (var_1_15 <= var_1_47)) ? (var_1_72 == ((float) (var_1_16 - (var_1_46 - var_1_47)))) : ((var_1_33 > (max (var_1_96 , var_1_51))) ? (((47930 - var_1_11) < var_1_69) ? (var_1_72 == ((float) ((max (var_1_74 , var_1_47)) + var_1_17))) : (var_1_72 == ((float) (min (var_1_75 , var_1_16))))) : 1)) : (((var_1_43 / (max (-100 , var_1_77))) == var_1_64) ? (((var_1_95 * var_1_51) >= (var_1_96 ^ (var_1_32 - var_1_96))) ? (var_1_72 == ((float) (max (5.1f , ((var_1_14 + var_1_45) + var_1_74))))) : (((- var_1_51) >= var_1_41) ? (var_1_72 == ((float) (min (((min (var_1_47 , var_1_46)) - 100.375f) , (var_1_15 + var_1_74))))) : (var_1_72 == ((float) (min (var_1_16 , (var_1_47 + (var_1_45 - var_1_17)))))))) : (var_1_72 == ((float) ((min ((min (var_1_45 , var_1_47)) , var_1_62)) - (63.5f + var_1_17))))))) && ((var_1_48 <= (var_1_4 / var_1_8)) ? ((var_1_58 && var_1_70) ? (var_1_79 == ((signed short int) (var_1_27 - var_1_9))) : (var_1_79 == ((signed short int) (max (var_1_80 , var_1_9))))) : 1)) && (((var_1_11 - var_1_82) >= var_1_51) ? ((var_1_2 || var_1_70) ? (var_1_81 == ((unsigned short int) (var_1_50 + var_1_66))) : (var_1_81 == ((unsigned short int) (var_1_4 + var_1_9)))) : (var_1_81 == ((unsigned short int) (var_1_67 - var_1_13))))) && ((last_1_var_1_83 < var_1_56) ? (var_1_83 == ((double) var_1_14)) : (var_1_83 == ((double) (min (var_1_16 , var_1_74)))))) && (((max (var_1_53 , 5)) == (128 - var_1_6)) ? ((-128 <= ((var_1_26 + 4) - (min (var_1_53 , var_1_67)))) ? (var_1_84 == ((signed char) (abs (var_1_26)))) : (((~ var_1_7) >= (32 * var_1_82)) ? (var_1_84 == ((signed char) ((var_1_86 - 32) - (max ((var_1_87 - var_1_11) , (abs (var_1_10))))))) : ((var_1_38 < (max (var_1_80 , var_1_97))) ? (((abs (var_1_22 - var_1_26)) <= (var_1_5 + var_1_4)) ? (var_1_84 == ((signed char) (var_1_41 - var_1_10))) : 1) : (((1000 >= var_1_50) && var_1_99) ? (var_1_84 == ((signed char) var_1_8)) : (var_1_84 == ((signed char) ((var_1_11 + var_1_10) - var_1_42))))))) : 1)) && (var_1_99 ? (var_1_88 == ((float) var_1_16)) : 1)) && (var_1_99 ? (var_1_89 == ((unsigned char) var_1_9)) : 1)) && (var_1_90 == ((signed short int) var_1_91))) && (var_1_99 ? (var_1_92 == ((signed char) var_1_42)) : 1)) && (var_1_99 ? (var_1_93 == ((double) var_1_46)) : 1)) && (var_1_94 == ((float) var_1_63))) && (var_1_99 ? (var_1_95 == ((unsigned char) var_1_26)) : 1)) && (var_1_99 ? (var_1_96 == ((unsigned long int) var_1_67)) : (var_1_96 == ((unsigned long int) var_1_82)))) && (var_1_99 ? (var_1_97 == ((signed char) var_1_42)) : 1)) && (var_1_99 ? (var_1_98 == ((float) var_1_14)) : (var_1_98 == ((float) var_1_46)))) && (var_1_99 == ((unsigned char) var_1_100))) && (var_1_99 ? (var_1_101 == ((float) var_1_14)) : 1)) && (((var_1_33 / var_1_35) >= var_1_87) ? (var_1_102 == ((float) (abs (var_1_14)))) : 1)) && ((var_1_13 <= (var_1_86 >> (var_1_105 - var_1_106))) ? ((var_1_18 != -4) ? (var_1_104 == ((unsigned char) (var_1_8 - var_1_26))) : (var_1_104 == ((unsigned char) var_1_42))) : (var_1_104 == ((unsigned char) var_1_11)))
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
