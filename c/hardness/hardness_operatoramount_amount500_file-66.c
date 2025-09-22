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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch66Amount500.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 64;
unsigned short int var_1_5 = 63575;
unsigned long int var_1_6 = 10;
unsigned long int var_1_8 = 4065487788;
float var_1_9 = 99999999.5;
signed short int var_1_10 = 16;
unsigned char var_1_11 = 5;
unsigned char var_1_12 = 5;
float var_1_13 = 4.25;
float var_1_14 = 0.2;
float var_1_16 = 31.8;
float var_1_17 = 49.5;
float var_1_18 = 9999999.8;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
float var_1_23 = 99999999999999.5;
signed short int var_1_24 = 256;
signed short int var_1_25 = 28675;
signed char var_1_26 = 10;
signed char var_1_27 = 32;
signed char var_1_28 = 64;
signed char var_1_29 = 0;
double var_1_30 = 4.8;
double var_1_31 = 0.0;
double var_1_32 = 0.0;
double var_1_33 = 99.5;
double var_1_34 = 0.0;
double var_1_35 = 128.8;
signed char var_1_36 = -32;
signed char var_1_37 = 10;
signed char var_1_38 = 0;
signed char var_1_39 = 0;
double var_1_40 = 100.5;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 1;
signed short int var_1_43 = -32;
unsigned char var_1_44 = 4;
unsigned char var_1_45 = 128;
unsigned char var_1_46 = 1;
signed long int var_1_47 = -10;
double var_1_48 = 16.6;
double var_1_49 = 0.0;
double var_1_50 = 10.6;
double var_1_51 = 0.5;
unsigned char var_1_52 = 25;
unsigned char var_1_53 = 200;
unsigned char var_1_54 = 1;
signed long int var_1_55 = -16;
signed long int var_1_56 = 64;
double var_1_57 = 31.875;
float var_1_58 = 16.5;
float var_1_60 = 4.75;
double var_1_61 = 7.3;
double var_1_62 = 1.8;
double var_1_63 = 2.75;
double var_1_64 = 10.375;
unsigned long int var_1_65 = 8;
unsigned long int var_1_66 = 0;
unsigned long int var_1_67 = 3975445432;
unsigned long int var_1_68 = 1597706265;
unsigned char var_1_69 = 0;
unsigned char var_1_70 = 0;
unsigned char var_1_71 = 1;
signed long int var_1_72 = 0;
unsigned char var_1_73 = 8;
unsigned char var_1_74 = 0;
unsigned short int var_1_75 = 16;
unsigned short int var_1_76 = 47035;
signed short int var_1_77 = -100;
unsigned short int var_1_78 = 32;
unsigned long int var_1_79 = 10;
signed long int var_1_82 = 1;
signed short int var_1_83 = -2;
signed long int var_1_84 = 8;
signed long int var_1_86 = 1653532410;
unsigned char var_1_87 = 0;
float var_1_88 = 10.6;
float var_1_89 = 0.0;
float var_1_90 = 32.4;
signed short int var_1_91 = -10;
unsigned char var_1_92 = 1;
double var_1_94 = 7.5;
unsigned char var_1_95 = 0;
float var_1_96 = 3.2;
unsigned long int var_1_97 = 64;
unsigned char var_1_98 = 0;
double var_1_99 = 15.5;
unsigned char var_1_100 = 0;
unsigned char var_1_101 = 8;
float var_1_102 = 31.25;
float var_1_103 = 128.3;
unsigned long int var_1_104 = 16;
float var_1_105 = 1.5;
unsigned long int var_1_106 = 32;
signed long int var_1_107 = 16;
signed char var_1_108 = 32;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 64;
unsigned char last_1_var_1_21 = 0;
double last_1_var_1_30 = 4.8;
double last_1_var_1_40 = 100.5;
unsigned char last_1_var_1_41 = 0;
unsigned char last_1_var_1_46 = 1;
double last_1_var_1_48 = 16.6;
double last_1_var_1_61 = 7.3;
unsigned char last_1_var_1_69 = 0;
unsigned char last_1_var_1_73 = 8;
unsigned char last_1_var_1_74 = 0;
signed short int last_1_var_1_77 = -100;
unsigned short int last_1_var_1_78 = 32;
unsigned long int last_1_var_1_79 = 10;
signed short int last_1_var_1_91 = -10;
unsigned char last_1_var_1_92 = 1;
double last_1_var_1_99 = 15.5;
unsigned char last_1_var_1_100 = 0;
unsigned long int last_1_var_1_104 = 16;
unsigned long int last_1_var_1_106 = 32;
signed long int last_1_var_1_107 = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req25Batch66Amount500
	var_1_69 = (((var_1_35 - var_1_34) > last_1_var_1_48) || (var_1_42 || var_1_70));


	// From: Req35Batch66Amount500
	if ((last_1_var_1_106 > var_1_67) || (last_1_var_1_78 > (var_1_28 - var_1_29))) {
		if ((max (last_1_var_1_1 , var_1_72)) > last_1_var_1_107) {
			if (last_1_var_1_92 && last_1_var_1_46) {
				var_1_84 = (((var_1_86 - last_1_var_1_77) - var_1_66) - (min ((max (var_1_56 , var_1_29)) , (16 + var_1_5))));
			}
		} else {
			var_1_84 = (var_1_5 + (min ((-64 + var_1_27) , last_1_var_1_79)));
		}
	}


	// From: Req24Batch66Amount500
	unsigned char stepLocal_18 = var_1_27 != last_1_var_1_104;
	if (last_1_var_1_100) {
		if (stepLocal_18 || (! last_1_var_1_74)) {
			var_1_65 = (abs ((64u + var_1_66) + last_1_var_1_107));
		} else {
			if (var_1_49 <= last_1_var_1_61) {
				var_1_65 = ((max (var_1_8 , (var_1_67 - last_1_var_1_91))) - (var_1_68 - (last_1_var_1_73 + 32u)));
			} else {
				var_1_65 = (var_1_8 - var_1_53);
			}
		}
	} else {
		if (! var_1_22) {
			var_1_65 = (var_1_67 - last_1_var_1_79);
		}
	}


	// From: Req53Batch66Amount500
	if (last_1_var_1_21) {
		var_1_106 = last_1_var_1_73;
	} else {
		var_1_106 = var_1_25;
	}


	// From: Req4Batch66Amount500
	signed long int stepLocal_5 = min (var_1_12 , (~ var_1_10));
	if ((- (min (var_1_17 , var_1_16))) > last_1_var_1_30) {
		var_1_21 = (last_1_var_1_41 && (last_1_var_1_69 && var_1_22));
	} else {
		if (stepLocal_5 > 32) {
			if ((abs (var_1_17)) != (var_1_18 / var_1_23)) {
				var_1_21 = (! (! var_1_22));
			} else {
				var_1_21 = ((var_1_14 < var_1_17) && (last_1_var_1_69 && var_1_22));
			}
		}
	}


	// From: Req34Batch66Amount500
	var_1_83 = (abs (var_1_65 + var_1_53));


	// From: Req40Batch66Amount500
	if (var_1_21) {
		var_1_92 = var_1_22;
	}


	// From: Req2Batch66Amount500
	if ((last_1_var_1_99 * 8.2) < 10.4) {
		var_1_6 = (((abs (var_1_8)) - last_1_var_1_1) - (min (last_1_var_1_1 , var_1_5)));
	} else {
		var_1_6 = (abs (var_1_5 + last_1_var_1_1));
	}


	// From: Req18Batch66Amount500
	unsigned char stepLocal_16 = var_1_11;
	if (100000000u <= stepLocal_16) {
		var_1_55 = ((var_1_56 + (max (var_1_25 , var_1_28))) - (var_1_6 + var_1_53));
	}


	// From: Req6Batch66Amount500
	if ((abs (var_1_25)) >= var_1_12) {
		var_1_26 = (var_1_27 - (var_1_28 - var_1_29));
	} else {
		var_1_26 = 32;
	}


	// From: Req10Batch66Amount500
	var_1_41 = var_1_42;


	// From: Req36Batch66Amount500
	var_1_87 = (! var_1_22);


	// From: Req38Batch66Amount500
	if (var_1_21) {
		var_1_90 = var_1_18;
	} else {
		var_1_90 = var_1_17;
	}


	// From: Req39Batch66Amount500
	if (var_1_22) {
		var_1_91 = var_1_28;
	} else {
		var_1_91 = var_1_53;
	}


	// From: Req41Batch66Amount500
	var_1_94 = var_1_17;


	// From: Req42Batch66Amount500
	if (var_1_87) {
		var_1_95 = 1;
	} else {
		var_1_95 = var_1_42;
	}


	// From: Req43Batch66Amount500
	var_1_96 = var_1_13;


	// From: Req45Batch66Amount500
	var_1_98 = var_1_70;


	// From: Req46Batch66Amount500
	var_1_99 = 1.75;


	// From: Req47Batch66Amount500
	var_1_100 = var_1_70;


	// From: Req48Batch66Amount500
	var_1_101 = var_1_29;


	// From: Req49Batch66Amount500
	var_1_102 = var_1_18;


	// From: Req50Batch66Amount500
	var_1_103 = 1000.5f;


	// From: Req51Batch66Amount500
	var_1_104 = var_1_72;


	// From: Req52Batch66Amount500
	if (var_1_98) {
		var_1_105 = 32.7f;
	}


	// From: Req55Batch66Amount500
	var_1_108 = var_1_38;


	// From: Req54Batch66Amount500
	unsigned char stepLocal_28 = var_1_22;
	if ((var_1_67 >= var_1_106) && stepLocal_28) {
		var_1_107 = (((min (var_1_53 , var_1_84)) - (var_1_45 + var_1_6)) + var_1_27);
	}


	// From: Req7Batch66Amount500
	unsigned char stepLocal_6 = var_1_14 != var_1_18;
	if (((var_1_6 / var_1_12) <= var_1_83) || stepLocal_6) {
		var_1_30 = ((var_1_31 - (var_1_32 - var_1_33)) - ((var_1_34 + 3.694592331743101E18) - var_1_35));
	} else {
		var_1_30 = (abs (abs (var_1_34)));
	}


	// From: Req33Batch66Amount500
	if (var_1_95) {
		var_1_82 = var_1_39;
	} else {
		var_1_82 = var_1_6;
	}


	// From: Req31Batch66Amount500
	if (var_1_34 <= var_1_64) {
		var_1_78 = (var_1_55 + var_1_10);
	}


	// From: Req22Batch66Amount500
	signed long int stepLocal_17 = - var_1_25;
	if (! var_1_87) {
		var_1_62 = var_1_49;
	} else {
		if (stepLocal_17 < (var_1_6 + var_1_38)) {
			var_1_62 = 1.3;
		} else {
			var_1_62 = (var_1_17 + var_1_14);
		}
	}


	// From: Req11Batch66Amount500
	unsigned short int stepLocal_10 = var_1_5;
	if (var_1_104 > stepLocal_10) {
		if ((var_1_62 * 24.8) < ((var_1_31 - var_1_32) + var_1_35)) {
			var_1_43 = var_1_37;
		} else {
			var_1_43 = 10;
		}
	} else {
		var_1_43 = var_1_78;
	}


	// From: Req14Batch66Amount500
	if (! (var_1_25 <= var_1_38)) {
		var_1_47 = (var_1_28 + var_1_82);
	} else {
		var_1_47 = (var_1_10 - var_1_29);
	}


	// From: Req28Batch66Amount500
	if (var_1_22 && (var_1_45 <= (var_1_53 - var_1_28))) {
		var_1_74 = (! ((var_1_62 >= var_1_16) && (! var_1_70)));
	}


	// From: Req19Batch66Amount500
	if ((var_1_10 * var_1_65) <= var_1_37) {
		if ((var_1_35 * var_1_99) > var_1_31) {
			if ((var_1_56 - (var_1_11 + var_1_47)) >= (var_1_25 - var_1_10)) {
				var_1_57 = 100.25;
			} else {
				if (var_1_32 != (min ((var_1_31 - var_1_49) , 15.5))) {
					var_1_57 = (63.5 - var_1_32);
				} else {
					var_1_57 = (var_1_49 + (var_1_18 + var_1_17));
				}
			}
		} else {
			var_1_57 = (var_1_50 - (min (var_1_49 , var_1_34)));
		}
	}


	// From: Req21Batch66Amount500
	if (var_1_87) {
		var_1_61 = (min (var_1_16 , (var_1_35 + var_1_60)));
	}


	// From: Req37Batch66Amount500
	unsigned char stepLocal_27 = var_1_92;
	signed long int stepLocal_26 = var_1_29 + var_1_28;
	if ((var_1_14 * var_1_62) >= var_1_49) {
		if (stepLocal_26 != var_1_107) {
			if (stepLocal_27 && var_1_87) {
				var_1_88 = ((var_1_31 - var_1_32) - var_1_60);
			} else {
				var_1_88 = ((min (var_1_60 , var_1_33)) - var_1_89);
			}
		} else {
			var_1_88 = (-0.375f + var_1_16);
		}
	} else {
		var_1_88 = var_1_32;
	}


	// From: Req16Batch66Amount500
	if (var_1_21) {
		if (var_1_22) {
			var_1_52 = (min (var_1_28 , var_1_12));
		} else {
			var_1_52 = ((var_1_53 - var_1_29) - var_1_28);
		}
	} else {
		if ((min (var_1_82 , var_1_5)) >= (max (var_1_39 , 256))) {
			var_1_52 = (var_1_45 - var_1_28);
		}
	}


	// From: Req13Batch66Amount500
	if (-32 >= var_1_47) {
		var_1_46 = (! var_1_22);
	}


	// From: Req3Batch66Amount500
	unsigned long int stepLocal_4 = (max (-10000 , var_1_6)) * var_1_8;
	unsigned long int stepLocal_3 = var_1_8;
	unsigned char stepLocal_2 = var_1_106 == var_1_6;
	unsigned long int stepLocal_1 = (var_1_8 * var_1_6) * -4;
	signed long int stepLocal_0 = var_1_10 % (var_1_11 + var_1_12);
	if ((abs (5 - var_1_10)) != stepLocal_4) {
		if (stepLocal_1 < var_1_6) {
			if (var_1_6 < stepLocal_0) {
				if (! var_1_95) {
					var_1_9 = var_1_13;
				}
			} else {
				var_1_9 = (var_1_14 + 0.5f);
			}
		} else {
			if (var_1_95 || stepLocal_2) {
				var_1_9 = (var_1_14 + (min (var_1_16 , (var_1_17 + var_1_18))));
			}
		}
	} else {
		if (var_1_95) {
			if (var_1_17 <= var_1_88) {
				var_1_9 = (var_1_14 + var_1_16);
			} else {
				if (stepLocal_3 >= var_1_12) {
					if (var_1_74) {
						var_1_9 = var_1_18;
					} else {
						var_1_9 = var_1_14;
					}
				} else {
					var_1_9 = var_1_18;
				}
			}
		}
	}


	// From: Req9Batch66Amount500
	signed long int stepLocal_9 = - var_1_10;
	if (stepLocal_9 <= -1) {
		if (var_1_61 == (- last_1_var_1_40)) {
			var_1_40 = ((var_1_31 - var_1_35) - var_1_32);
		}
	}


	// From: Req1Batch66Amount500
	if (last_1_var_1_1 >= var_1_65) {
		if (var_1_46) {
			var_1_1 = (var_1_5 - last_1_var_1_1);
		}
	}


	// From: Req17Batch66Amount500
	unsigned char stepLocal_15 = var_1_46;
	if (stepLocal_15 || var_1_42) {
		var_1_54 = (! (! (var_1_21 && var_1_22)));
	}


	// From: Req44Batch66Amount500
	if (var_1_54) {
		var_1_97 = var_1_29;
	}


	// From: Req8Batch66Amount500
	unsigned char stepLocal_8 = var_1_12;
	unsigned char stepLocal_7 = var_1_69;
	if (! var_1_69) {
		if (stepLocal_8 <= (min (var_1_10 , (- var_1_97)))) {
			if (stepLocal_7 && (var_1_35 != var_1_57)) {
				var_1_36 = ((-2 + var_1_37) + (max ((var_1_38 + var_1_39) , var_1_29)));
			} else {
				var_1_36 = (abs (var_1_29));
			}
		} else {
			var_1_36 = (var_1_29 + (min (0 , var_1_39)));
		}
	} else {
		var_1_36 = (min (var_1_39 , -50));
	}


	// From: Req12Batch66Amount500
	signed long int stepLocal_11 = var_1_28 - var_1_29;
	if (var_1_14 >= (abs (var_1_32))) {
		if (var_1_97 <= stepLocal_11) {
			var_1_44 = (min ((var_1_12 + (var_1_28 - var_1_29)) , (abs (64 + 2))));
		}
	} else {
		if (var_1_34 >= (var_1_14 + 15.375)) {
			var_1_44 = (var_1_45 - (var_1_28 - var_1_29));
		}
	}


	// From: Req32Batch66Amount500
	unsigned char stepLocal_25 = var_1_52;
	signed long int stepLocal_24 = max (var_1_12 , var_1_82);
	if (stepLocal_25 <= var_1_43) {
		if (stepLocal_24 < (max (last_1_var_1_79 , 10))) {
			var_1_79 = (4260109605u - var_1_11);
		} else {
			if (var_1_54) {
				var_1_79 = (max (var_1_91 , (var_1_82 + (var_1_68 - 64u))));
			}
		}
	} else {
		var_1_79 = var_1_5;
	}


	// From: Req5Batch66Amount500
	if ((max (var_1_12 , var_1_106)) > var_1_79) {
		if (var_1_22) {
			var_1_24 = (10 + (var_1_11 + var_1_82));
		} else {
			var_1_24 = (var_1_82 - (max ((var_1_25 - var_1_65) , var_1_11)));
		}
	} else {
		var_1_24 = (var_1_11 + var_1_12);
	}


	// From: Req23Batch66Amount500
	if ((var_1_24 * (var_1_8 / var_1_11)) >= var_1_52) {
		var_1_63 = (min (var_1_49 , var_1_14));
	} else {
		if ((min ((var_1_53 + var_1_24) , var_1_97)) <= 50u) {
			var_1_63 = (min (var_1_14 , var_1_17));
		} else {
			var_1_63 = (var_1_17 + var_1_64);
		}
	}


	// From: Req26Batch66Amount500
	unsigned char stepLocal_20 = (4 ^ var_1_55) > (var_1_56 - var_1_72);
	unsigned char stepLocal_19 = var_1_87;
	if (var_1_63 >= var_1_32) {
		if (stepLocal_19 || var_1_22) {
			if (var_1_70 && stepLocal_20) {
				var_1_71 = (! (! (var_1_42 && var_1_70)));
			}
		}
	} else {
		var_1_71 = (! (var_1_98 || (var_1_70 && var_1_42)));
	}


	// From: Req29Batch66Amount500
	unsigned long int stepLocal_23 = var_1_106;
	signed long int stepLocal_22 = var_1_72 ^ (~ var_1_24);
	signed long int stepLocal_21 = abs (var_1_78);
	if ((var_1_13 / var_1_32) < var_1_16) {
		if (stepLocal_23 < var_1_5) {
			var_1_75 = (abs (var_1_12));
		} else {
			if (stepLocal_22 >= var_1_65) {
				var_1_75 = (var_1_91 + var_1_45);
			} else {
				var_1_75 = (var_1_53 + var_1_78);
			}
		}
	} else {
		if (stepLocal_21 < (var_1_53 - var_1_106)) {
			var_1_75 = (min (var_1_12 , ((min (var_1_5 , var_1_76)) - var_1_45)));
		} else {
			var_1_75 = (var_1_25 + var_1_53);
		}
	}


	// From: Req15Batch66Amount500
	unsigned char stepLocal_14 = var_1_22;
	unsigned char stepLocal_13 = var_1_46;
	signed long int stepLocal_12 = var_1_12 - (max (var_1_28 , var_1_29));
	if ((var_1_63 + var_1_61) >= var_1_14) {
		if (stepLocal_12 < var_1_10) {
			if (stepLocal_13 && var_1_69) {
				var_1_48 = (var_1_35 - (var_1_33 + (var_1_49 - var_1_50)));
			}
		} else {
			var_1_48 = (min (var_1_31 , var_1_51));
		}
	} else {
		if (var_1_46) {
			var_1_48 = (var_1_50 - var_1_33);
		} else {
			if ((- (4.5f + var_1_23)) > var_1_49) {
				var_1_48 = (abs (var_1_31));
			} else {
				if (stepLocal_14 || var_1_87) {
					var_1_48 = (var_1_50 - (var_1_31 - (var_1_34 - 16.25)));
				}
			}
		}
	}


	// From: Req30Batch66Amount500
	if (var_1_14 <= (4.8f / var_1_32)) {
		var_1_77 = ((max (var_1_27 , var_1_84)) - ((var_1_75 + var_1_53) + var_1_12));
	}


	// From: Req27Batch66Amount500
	if (var_1_71 && (var_1_35 > 1.2)) {
		var_1_73 = ((max (var_1_28 , var_1_12)) + var_1_29);
	} else {
		var_1_73 = (var_1_29 + var_1_28);
	}


	// From: Req20Batch66Amount500
	if (var_1_12 >= (- var_1_77)) {
		if (var_1_106 <= var_1_25) {
			var_1_58 = (var_1_33 - 63.15f);
		} else {
			if (var_1_41) {
				var_1_58 = var_1_18;
			} else {
				var_1_58 = ((var_1_18 + var_1_33) + ((var_1_50 + var_1_60) - (min (var_1_49 , var_1_34))));
			}
		}
	} else {
		var_1_58 = (max (var_1_49 , (var_1_31 - var_1_60)));
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 3221225470);
	assume_abort_if_not(var_1_8 <= 4294967294);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 128);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 127);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -230584.3009213691400e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	assume_abort_if_not(var_1_23 != 0.0F);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 16383);
	assume_abort_if_not(var_1_25 <= 32766);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -1);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 63);
	assume_abort_if_not(var_1_28 <= 126);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= 4611686.018427383000e+12F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_32 >= 2305843.009213691400e+12F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= 2305843.009213691400e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -31);
	assume_abort_if_not(var_1_37 <= 31);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -31);
	assume_abort_if_not(var_1_38 <= 32);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -31);
	assume_abort_if_not(var_1_39 <= 31);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 127);
	assume_abort_if_not(var_1_45 <= 254);
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 2305843.009213691400e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_51 >= -922337.2036854766000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854766000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 190);
	assume_abort_if_not(var_1_53 <= 254);
	var_1_56 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_56 >= 0);
	assume_abort_if_not(var_1_56 <= 1073741823);
	var_1_60 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_60 >= 0.0F && var_1_60 <= -1.0e-20F) || (var_1_60 <= 2305843.009213691400e+12F && var_1_60 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_64 >= -461168.6018427383000e+13F && var_1_64 <= -1.0e-20F) || (var_1_64 <= 4611686.018427383000e+12F && var_1_64 >= 1.0e-20F ));
	var_1_66 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_66 >= 0);
	assume_abort_if_not(var_1_66 <= 1073741823);
	var_1_67 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_67 >= 3221225470);
	assume_abort_if_not(var_1_67 <= 4294967294);
	var_1_68 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_68 >= 1073741823);
	assume_abort_if_not(var_1_68 <= 2147483647);
	var_1_70 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_70 >= 1);
	assume_abort_if_not(var_1_70 <= 1);
	var_1_72 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 2147483647);
	var_1_76 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_76 >= 32767);
	assume_abort_if_not(var_1_76 <= 65534);
	var_1_86 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_86 >= 1610612734);
	assume_abort_if_not(var_1_86 <= 2147483646);
	var_1_89 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_89 >= 6917529.027641074000e+12F && var_1_89 <= -1.0e-20F) || (var_1_89 <= 9223372.036854766000e+12F && var_1_89 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_21 = var_1_21;
	last_1_var_1_30 = var_1_30;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_61 = var_1_61;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_77 = var_1_77;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_79 = var_1_79;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_104 = var_1_104;
	last_1_var_1_106 = var_1_106;
	last_1_var_1_107 = var_1_107;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((((((last_1_var_1_1 >= var_1_65) ? (var_1_46 ? (var_1_1 == ((unsigned short int) (var_1_5 - last_1_var_1_1))) : 1) : 1) && (((last_1_var_1_99 * 8.2) < 10.4) ? (var_1_6 == ((unsigned long int) (((abs (var_1_8)) - last_1_var_1_1) - (min (last_1_var_1_1 , var_1_5))))) : (var_1_6 == ((unsigned long int) (abs (var_1_5 + last_1_var_1_1)))))) && (((abs (5 - var_1_10)) != ((max (-10000 , var_1_6)) * var_1_8)) ? ((((var_1_8 * var_1_6) * -4) < var_1_6) ? ((var_1_6 < (var_1_10 % (var_1_11 + var_1_12))) ? ((! var_1_95) ? (var_1_9 == ((float) var_1_13)) : 1) : (var_1_9 == ((float) (var_1_14 + 0.5f)))) : ((var_1_95 || (var_1_106 == var_1_6)) ? (var_1_9 == ((float) (var_1_14 + (min (var_1_16 , (var_1_17 + var_1_18)))))) : 1)) : (var_1_95 ? ((var_1_17 <= var_1_88) ? (var_1_9 == ((float) (var_1_14 + var_1_16))) : ((var_1_8 >= var_1_12) ? (var_1_74 ? (var_1_9 == ((float) var_1_18)) : (var_1_9 == ((float) var_1_14))) : (var_1_9 == ((float) var_1_18)))) : 1))) && (((- (min (var_1_17 , var_1_16))) > last_1_var_1_30) ? (var_1_21 == ((unsigned char) (last_1_var_1_41 && (last_1_var_1_69 && var_1_22)))) : (((min (var_1_12 , (~ var_1_10))) > 32) ? (((abs (var_1_17)) != (var_1_18 / var_1_23)) ? (var_1_21 == ((unsigned char) (! (! var_1_22)))) : (var_1_21 == ((unsigned char) ((var_1_14 < var_1_17) && (last_1_var_1_69 && var_1_22))))) : 1))) && (((max (var_1_12 , var_1_106)) > var_1_79) ? (var_1_22 ? (var_1_24 == ((signed short int) (10 + (var_1_11 + var_1_82)))) : (var_1_24 == ((signed short int) (var_1_82 - (max ((var_1_25 - var_1_65) , var_1_11)))))) : (var_1_24 == ((signed short int) (var_1_11 + var_1_12))))) && (((abs (var_1_25)) >= var_1_12) ? (var_1_26 == ((signed char) (var_1_27 - (var_1_28 - var_1_29)))) : (var_1_26 == ((signed char) 32)))) && ((((var_1_6 / var_1_12) <= var_1_83) || (var_1_14 != var_1_18)) ? (var_1_30 == ((double) ((var_1_31 - (var_1_32 - var_1_33)) - ((var_1_34 + 3.694592331743101E18) - var_1_35)))) : (var_1_30 == ((double) (abs (abs (var_1_34))))))) && ((! var_1_69) ? ((var_1_12 <= (min (var_1_10 , (- var_1_97)))) ? ((var_1_69 && (var_1_35 != var_1_57)) ? (var_1_36 == ((signed char) ((-2 + var_1_37) + (max ((var_1_38 + var_1_39) , var_1_29))))) : (var_1_36 == ((signed char) (abs (var_1_29))))) : (var_1_36 == ((signed char) (var_1_29 + (min (0 , var_1_39)))))) : (var_1_36 == ((signed char) (min (var_1_39 , -50)))))) && (((- var_1_10) <= -1) ? ((var_1_61 == (- last_1_var_1_40)) ? (var_1_40 == ((double) ((var_1_31 - var_1_35) - var_1_32))) : 1) : 1)) && (var_1_41 == ((unsigned char) var_1_42))) && ((var_1_104 > var_1_5) ? (((var_1_62 * 24.8) < ((var_1_31 - var_1_32) + var_1_35)) ? (var_1_43 == ((signed short int) var_1_37)) : (var_1_43 == ((signed short int) 10))) : (var_1_43 == ((signed short int) var_1_78)))) && ((var_1_14 >= (abs (var_1_32))) ? ((var_1_97 <= (var_1_28 - var_1_29)) ? (var_1_44 == ((unsigned char) (min ((var_1_12 + (var_1_28 - var_1_29)) , (abs (64 + 2)))))) : 1) : ((var_1_34 >= (var_1_14 + 15.375)) ? (var_1_44 == ((unsigned char) (var_1_45 - (var_1_28 - var_1_29)))) : 1))) && ((-32 >= var_1_47) ? (var_1_46 == ((unsigned char) (! var_1_22))) : 1)) && ((! (var_1_25 <= var_1_38)) ? (var_1_47 == ((signed long int) (var_1_28 + var_1_82))) : (var_1_47 == ((signed long int) (var_1_10 - var_1_29))))) && (((var_1_63 + var_1_61) >= var_1_14) ? (((var_1_12 - (max (var_1_28 , var_1_29))) < var_1_10) ? ((var_1_46 && var_1_69) ? (var_1_48 == ((double) (var_1_35 - (var_1_33 + (var_1_49 - var_1_50))))) : 1) : (var_1_48 == ((double) (min (var_1_31 , var_1_51))))) : (var_1_46 ? (var_1_48 == ((double) (var_1_50 - var_1_33))) : (((- (4.5f + var_1_23)) > var_1_49) ? (var_1_48 == ((double) (abs (var_1_31)))) : ((var_1_22 || var_1_87) ? (var_1_48 == ((double) (var_1_50 - (var_1_31 - (var_1_34 - 16.25))))) : 1))))) && (var_1_21 ? (var_1_22 ? (var_1_52 == ((unsigned char) (min (var_1_28 , var_1_12)))) : (var_1_52 == ((unsigned char) ((var_1_53 - var_1_29) - var_1_28)))) : (((min (var_1_82 , var_1_5)) >= (max (var_1_39 , 256))) ? (var_1_52 == ((unsigned char) (var_1_45 - var_1_28))) : 1))) && ((var_1_46 || var_1_42) ? (var_1_54 == ((unsigned char) (! (! (var_1_21 && var_1_22))))) : 1)) && ((100000000u <= var_1_11) ? (var_1_55 == ((signed long int) ((var_1_56 + (max (var_1_25 , var_1_28))) - (var_1_6 + var_1_53)))) : 1)) && (((var_1_10 * var_1_65) <= var_1_37) ? (((var_1_35 * var_1_99) > var_1_31) ? (((var_1_56 - (var_1_11 + var_1_47)) >= (var_1_25 - var_1_10)) ? (var_1_57 == ((double) 100.25)) : ((var_1_32 != (min ((var_1_31 - var_1_49) , 15.5))) ? (var_1_57 == ((double) (63.5 - var_1_32))) : (var_1_57 == ((double) (var_1_49 + (var_1_18 + var_1_17)))))) : (var_1_57 == ((double) (var_1_50 - (min (var_1_49 , var_1_34)))))) : 1)) && ((var_1_12 >= (- var_1_77)) ? ((var_1_106 <= var_1_25) ? (var_1_58 == ((float) (var_1_33 - 63.15f))) : (var_1_41 ? (var_1_58 == ((float) var_1_18)) : (var_1_58 == ((float) ((var_1_18 + var_1_33) + ((var_1_50 + var_1_60) - (min (var_1_49 , var_1_34)))))))) : (var_1_58 == ((float) (max (var_1_49 , (var_1_31 - var_1_60))))))) && (var_1_87 ? (var_1_61 == ((double) (min (var_1_16 , (var_1_35 + var_1_60))))) : 1)) && ((! var_1_87) ? (var_1_62 == ((double) var_1_49)) : (((- var_1_25) < (var_1_6 + var_1_38)) ? (var_1_62 == ((double) 1.3)) : (var_1_62 == ((double) (var_1_17 + var_1_14)))))) && (((var_1_24 * (var_1_8 / var_1_11)) >= var_1_52) ? (var_1_63 == ((double) (min (var_1_49 , var_1_14)))) : (((min ((var_1_53 + var_1_24) , var_1_97)) <= 50u) ? (var_1_63 == ((double) (min (var_1_14 , var_1_17)))) : (var_1_63 == ((double) (var_1_17 + var_1_64)))))) && (last_1_var_1_100 ? (((var_1_27 != last_1_var_1_104) || (! last_1_var_1_74)) ? (var_1_65 == ((unsigned long int) (abs ((64u + var_1_66) + last_1_var_1_107)))) : ((var_1_49 <= last_1_var_1_61) ? (var_1_65 == ((unsigned long int) ((max (var_1_8 , (var_1_67 - last_1_var_1_91))) - (var_1_68 - (last_1_var_1_73 + 32u))))) : (var_1_65 == ((unsigned long int) (var_1_8 - var_1_53))))) : ((! var_1_22) ? (var_1_65 == ((unsigned long int) (var_1_67 - last_1_var_1_79))) : 1))) && (var_1_69 == ((unsigned char) (((var_1_35 - var_1_34) > last_1_var_1_48) || (var_1_42 || var_1_70))))) && ((var_1_63 >= var_1_32) ? ((var_1_87 || var_1_22) ? ((var_1_70 && ((4 ^ var_1_55) > (var_1_56 - var_1_72))) ? (var_1_71 == ((unsigned char) (! (! (var_1_42 && var_1_70))))) : 1) : 1) : (var_1_71 == ((unsigned char) (! (var_1_98 || (var_1_70 && var_1_42))))))) && ((var_1_71 && (var_1_35 > 1.2)) ? (var_1_73 == ((unsigned char) ((max (var_1_28 , var_1_12)) + var_1_29))) : (var_1_73 == ((unsigned char) (var_1_29 + var_1_28))))) && ((var_1_22 && (var_1_45 <= (var_1_53 - var_1_28))) ? (var_1_74 == ((unsigned char) (! ((var_1_62 >= var_1_16) && (! var_1_70))))) : 1)) && (((var_1_13 / var_1_32) < var_1_16) ? ((var_1_106 < var_1_5) ? (var_1_75 == ((unsigned short int) (abs (var_1_12)))) : (((var_1_72 ^ (~ var_1_24)) >= var_1_65) ? (var_1_75 == ((unsigned short int) (var_1_91 + var_1_45))) : (var_1_75 == ((unsigned short int) (var_1_53 + var_1_78))))) : (((abs (var_1_78)) < (var_1_53 - var_1_106)) ? (var_1_75 == ((unsigned short int) (min (var_1_12 , ((min (var_1_5 , var_1_76)) - var_1_45))))) : (var_1_75 == ((unsigned short int) (var_1_25 + var_1_53)))))) && ((var_1_14 <= (4.8f / var_1_32)) ? (var_1_77 == ((signed short int) ((max (var_1_27 , var_1_84)) - ((var_1_75 + var_1_53) + var_1_12)))) : 1)) && ((var_1_34 <= var_1_64) ? (var_1_78 == ((unsigned short int) (var_1_55 + var_1_10))) : 1)) && ((var_1_52 <= var_1_43) ? (((max (var_1_12 , var_1_82)) < (max (last_1_var_1_79 , 10))) ? (var_1_79 == ((unsigned long int) (4260109605u - var_1_11))) : (var_1_54 ? (var_1_79 == ((unsigned long int) (max (var_1_91 , (var_1_82 + (var_1_68 - 64u)))))) : 1)) : (var_1_79 == ((unsigned long int) var_1_5)))) && (var_1_95 ? (var_1_82 == ((signed long int) var_1_39)) : (var_1_82 == ((signed long int) var_1_6)))) && (var_1_83 == ((signed short int) (abs (var_1_65 + var_1_53))))) && (((last_1_var_1_106 > var_1_67) || (last_1_var_1_78 > (var_1_28 - var_1_29))) ? (((max (last_1_var_1_1 , var_1_72)) > last_1_var_1_107) ? ((last_1_var_1_92 && last_1_var_1_46) ? (var_1_84 == ((signed long int) (((var_1_86 - last_1_var_1_77) - var_1_66) - (min ((max (var_1_56 , var_1_29)) , (16 + var_1_5)))))) : 1) : (var_1_84 == ((signed long int) (var_1_5 + (min ((-64 + var_1_27) , last_1_var_1_79)))))) : 1)) && (var_1_87 == ((unsigned char) (! var_1_22)))) && (((var_1_14 * var_1_62) >= var_1_49) ? (((var_1_29 + var_1_28) != var_1_107) ? ((var_1_92 && var_1_87) ? (var_1_88 == ((float) ((var_1_31 - var_1_32) - var_1_60))) : (var_1_88 == ((float) ((min (var_1_60 , var_1_33)) - var_1_89)))) : (var_1_88 == ((float) (-0.375f + var_1_16)))) : (var_1_88 == ((float) var_1_32)))) && (var_1_21 ? (var_1_90 == ((float) var_1_18)) : (var_1_90 == ((float) var_1_17)))) && (var_1_22 ? (var_1_91 == ((signed short int) var_1_28)) : (var_1_91 == ((signed short int) var_1_53)))) && (var_1_21 ? (var_1_92 == ((unsigned char) var_1_22)) : 1)) && (var_1_94 == ((double) var_1_17))) && (var_1_87 ? (var_1_95 == ((unsigned char) 1)) : (var_1_95 == ((unsigned char) var_1_42)))) && (var_1_96 == ((float) var_1_13))) && (var_1_54 ? (var_1_97 == ((unsigned long int) var_1_29)) : 1)) && (var_1_98 == ((unsigned char) var_1_70))) && (var_1_99 == ((double) 1.75))) && (var_1_100 == ((unsigned char) var_1_70))) && (var_1_101 == ((unsigned char) var_1_29))) && (var_1_102 == ((float) var_1_18))) && (var_1_103 == ((float) 1000.5f))) && (var_1_104 == ((unsigned long int) var_1_72))) && (var_1_98 ? (var_1_105 == ((float) 32.7f)) : 1)) && (last_1_var_1_21 ? (var_1_106 == ((unsigned long int) last_1_var_1_73)) : (var_1_106 == ((unsigned long int) var_1_25)))) && (((var_1_67 >= var_1_106) && var_1_22) ? (var_1_107 == ((signed long int) (((min (var_1_53 , var_1_84)) - (var_1_45 + var_1_6)) + var_1_27))) : 1)) && (var_1_108 == ((signed char) var_1_38))
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
