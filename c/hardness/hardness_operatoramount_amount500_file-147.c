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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch147Amount500.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 100;
unsigned char var_1_3 = 1;
unsigned short int var_1_5 = 56408;
unsigned short int var_1_6 = 53053;
signed short int var_1_7 = -256;
signed short int var_1_8 = -64;
double var_1_9 = 100.18;
double var_1_10 = 0.0;
double var_1_11 = 1000000000000.5;
double var_1_12 = 0.0;
double var_1_13 = 32.9;
unsigned char var_1_14 = 2;
unsigned char var_1_16 = 0;
signed long int var_1_19 = -32;
unsigned long int var_1_20 = 5;
unsigned long int var_1_21 = 1385754225;
unsigned short int var_1_24 = 256;
unsigned short int var_1_25 = 1;
signed long int var_1_26 = 128;
signed long int var_1_27 = 1816065827;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
signed short int var_1_33 = -256;
signed short int var_1_34 = 0;
signed short int var_1_35 = -8;
signed short int var_1_36 = 0;
signed short int var_1_37 = 28125;
signed short int var_1_38 = -10;
double var_1_39 = 5.8;
unsigned short int var_1_40 = 500;
double var_1_41 = 31.2;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
signed char var_1_44 = -32;
signed char var_1_45 = -32;
signed short int var_1_46 = 5;
float var_1_47 = 255.75;
float var_1_48 = 63.1;
signed long int var_1_49 = -32;
unsigned long int var_1_50 = 10;
unsigned long int var_1_52 = 4276135963;
unsigned long int var_1_53 = 64;
unsigned long int var_1_54 = 1411882211;
float var_1_55 = 64.7;
signed long int var_1_56 = 0;
unsigned long int var_1_57 = 4;
unsigned long int var_1_58 = 1000000000;
float var_1_59 = 50.4;
float var_1_60 = 25.375;
float var_1_61 = 1.5;
unsigned char var_1_62 = 128;
unsigned char var_1_64 = 4;
unsigned char var_1_65 = 128;
unsigned char var_1_66 = 200;
unsigned char var_1_67 = 32;
double var_1_68 = 999999999999999.5;
unsigned char var_1_69 = 1;
signed short int var_1_70 = 4;
double var_1_72 = 0.0;
unsigned short int var_1_73 = 64;
unsigned char var_1_74 = 4;
signed long int var_1_75 = -4;
unsigned char var_1_77 = 8;
unsigned char var_1_79 = 100;
unsigned char var_1_80 = 128;
unsigned char var_1_81 = 0;
unsigned char var_1_82 = 0;
unsigned char var_1_83 = 50;
unsigned char var_1_84 = 5;
unsigned char var_1_86 = 8;
unsigned char var_1_87 = 200;
unsigned char var_1_88 = 64;
float var_1_89 = 2.5;
signed short int var_1_90 = 25;
unsigned char var_1_91 = 1;
double var_1_92 = 256.4;
double var_1_93 = 63.95;
signed long int var_1_94 = -64;
signed char var_1_95 = -32;
unsigned long int var_1_96 = 32;
signed char var_1_97 = -128;
unsigned char var_1_98 = 8;

// Calibration values

// Last'ed variables
double last_1_var_1_9 = 100.18;
signed long int last_1_var_1_19 = -32;
unsigned long int last_1_var_1_20 = 5;
unsigned short int last_1_var_1_24 = 256;
signed long int last_1_var_1_26 = 128;
unsigned char last_1_var_1_28 = 1;
signed short int last_1_var_1_33 = -256;
double last_1_var_1_39 = 5.8;
unsigned long int last_1_var_1_50 = 10;
signed long int last_1_var_1_56 = 0;
float last_1_var_1_60 = 25.375;
unsigned char last_1_var_1_62 = 128;
unsigned short int last_1_var_1_73 = 64;
signed long int last_1_var_1_75 = -4;
unsigned char last_1_var_1_81 = 0;
unsigned char last_1_var_1_83 = 50;
signed short int last_1_var_1_90 = 25;
signed long int last_1_var_1_94 = -64;
unsigned long int last_1_var_1_96 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req29Batch147Amount500
	unsigned char stepLocal_31 = var_1_32;
	unsigned long int stepLocal_30 = last_1_var_1_20;
	if (stepLocal_31 && (last_1_var_1_94 < last_1_var_1_33)) {
		if (stepLocal_30 != last_1_var_1_75) {
			var_1_69 = (((var_1_27 / var_1_37) != -32) || var_1_30);
		} else {
			var_1_69 = var_1_43;
		}
	}


	// From: Req24Batch147Amount500
	unsigned long int stepLocal_29 = last_1_var_1_20;
	if ((var_1_36 + var_1_37) != stepLocal_29) {
		var_1_57 = (var_1_25 + (var_1_54 - last_1_var_1_96));
	} else {
		if (var_1_31) {
			var_1_57 = (((min (var_1_21 , var_1_27)) + 1861607828u) - ((var_1_58 - last_1_var_1_90) + var_1_37));
		} else {
			var_1_57 = (max ((last_1_var_1_90 + var_1_16) , ((abs (var_1_52)) - var_1_6)));
		}
	}


	// From: Req6Batch147Amount500
	unsigned char stepLocal_7 = last_1_var_1_81;
	signed short int stepLocal_6 = var_1_8;
	signed long int stepLocal_5 = last_1_var_1_94 * (- var_1_5);
	if (stepLocal_6 == (~ last_1_var_1_94)) {
		var_1_20 = ((4130577948u - last_1_var_1_94) - (var_1_21 - (max (last_1_var_1_94 , var_1_3))));
	} else {
		if (last_1_var_1_56 > stepLocal_5) {
			if (last_1_var_1_28 || stepLocal_7) {
				var_1_20 = (abs (var_1_3));
			} else {
				var_1_20 = (last_1_var_1_56 + last_1_var_1_24);
			}
		}
	}


	// From: Req9Batch147Amount500
	signed long int stepLocal_10 = last_1_var_1_73;
	unsigned long int stepLocal_9 = 16u * (50u * var_1_5);
	if (((last_1_var_1_56 * last_1_var_1_50) + (var_1_6 * last_1_var_1_20)) != stepLocal_9) {
		if (stepLocal_10 == var_1_5) {
			var_1_28 = (var_1_29 && var_1_30);
		} else {
			var_1_28 = ((last_1_var_1_81 && var_1_31) || var_1_32);
		}
	} else {
		var_1_28 = (! var_1_29);
	}


	// From: Req42Batch147Amount500
	if (var_1_28) {
		var_1_93 = var_1_12;
	} else {
		var_1_93 = var_1_11;
	}


	// From: Req21Batch147Amount500
	unsigned short int stepLocal_26 = var_1_6;
	signed long int stepLocal_25 = last_1_var_1_19;
	if (last_1_var_1_83 > stepLocal_26) {
		if (var_1_12 < (max (last_1_var_1_9 , last_1_var_1_39))) {
			if (stepLocal_25 != last_1_var_1_50) {
				var_1_50 = last_1_var_1_19;
			} else {
				var_1_50 = (var_1_52 - var_1_16);
			}
		} else {
			var_1_50 = (min (var_1_53 , ((2062634650u + var_1_54) - var_1_36)));
		}
	} else {
		var_1_50 = (last_1_var_1_19 + (var_1_54 - var_1_6));
	}


	// From: Req33Batch147Amount500
	unsigned short int stepLocal_33 = var_1_6;
	if (stepLocal_33 < (var_1_50 * var_1_58)) {
		var_1_75 = var_1_25;
	}


	// From: Req5Batch147Amount500
	unsigned short int stepLocal_4 = var_1_5;
	if (stepLocal_4 <= var_1_75) {
		var_1_19 = (256 + -10);
	}


	// From: Req3Batch147Amount500
	if ((- var_1_5) >= var_1_50) {
		var_1_9 = ((max (var_1_11 , 15.7)) - (8.5 + (var_1_12 - var_1_13)));
	}


	// From: Req16Batch147Amount500
	var_1_44 = (min (var_1_3 , var_1_45));


	// From: Req25Batch147Amount500
	var_1_59 = (var_1_11 + var_1_13);


	// From: Req38Batch147Amount500
	if (var_1_69) {
		var_1_89 = var_1_13;
	}


	// From: Req40Batch147Amount500
	var_1_91 = var_1_43;


	// From: Req41Batch147Amount500
	if (var_1_30) {
		var_1_92 = var_1_61;
	} else {
		var_1_92 = var_1_10;
	}


	// From: Req45Batch147Amount500
	if (var_1_32) {
		var_1_96 = var_1_64;
	} else {
		var_1_96 = var_1_25;
	}


	// From: Req46Batch147Amount500
	var_1_97 = var_1_45;


	// From: Req23Batch147Amount500
	unsigned char stepLocal_28 = var_1_31;
	if (stepLocal_28 && (var_1_28 && var_1_69)) {
		var_1_56 = (var_1_6 + var_1_50);
	} else {
		var_1_56 = (abs (var_1_16));
	}


	// From: Req35Batch147Amount500
	if (var_1_30 && ((var_1_72 - var_1_12) > var_1_93)) {
		if (var_1_28 || var_1_31) {
			var_1_81 = ((var_1_29 || (var_1_43 && var_1_30)) && (var_1_32 || var_1_82));
		} else {
			var_1_81 = (((var_1_19 <= var_1_50) || var_1_82) && var_1_30);
		}
	} else {
		var_1_81 = (! var_1_43);
	}


	// From: Req43Batch147Amount500
	if (var_1_43) {
		var_1_94 = var_1_19;
	}


	// From: Req12Batch147Amount500
	signed long int stepLocal_16 = var_1_94;
	signed long int stepLocal_15 = -4;
	if ((var_1_21 & var_1_3) <= stepLocal_16) {
		if (var_1_36 <= stepLocal_15) {
			var_1_39 = var_1_12;
		} else {
			var_1_39 = var_1_11;
		}
	} else {
		var_1_39 = var_1_10;
	}


	// From: Req30Batch147Amount500
	signed long int stepLocal_32 = var_1_45 & var_1_27;
	if (16 <= stepLocal_32) {
		if (var_1_12 < ((var_1_10 - var_1_13) - (var_1_72 - var_1_11))) {
			var_1_70 = (var_1_45 + var_1_75);
		}
	} else {
		var_1_70 = ((max ((min (-100 , var_1_44)) , var_1_36)) + var_1_50);
	}


	// From: Req7Batch147Amount500
	unsigned short int stepLocal_8 = var_1_6;
	if (stepLocal_8 > var_1_96) {
		var_1_24 = (max (2 , (min (1 , var_1_25))));
	}


	// From: Req26Batch147Amount500
	if ((last_1_var_1_60 / var_1_10) <= (- var_1_12)) {
		if (! var_1_43) {
			var_1_60 = (max (var_1_10 , var_1_12));
		}
	} else {
		if ((var_1_57 / var_1_3) >= var_1_96) {
			var_1_60 = (var_1_13 - ((min (var_1_11 , var_1_12)) + var_1_61));
		}
	}


	// From: Req32Batch147Amount500
	if (((128 + var_1_24) - var_1_65) >= var_1_50) {
		if ((var_1_72 >= var_1_12) && var_1_43) {
			var_1_74 = (min ((var_1_67 + var_1_16) , 64));
		}
	}


	// From: Req31Batch147Amount500
	if (var_1_69) {
		if (var_1_81) {
			var_1_73 = (var_1_75 + var_1_65);
		} else {
			var_1_73 = var_1_36;
		}
	}


	// From: Req10Batch147Amount500
	unsigned char stepLocal_14 = var_1_30 && (! var_1_91);
	unsigned char stepLocal_13 = var_1_32;
	signed long int stepLocal_12 = var_1_94;
	unsigned short int stepLocal_11 = var_1_6;
	if (var_1_73 == stepLocal_11) {
		if (var_1_30 && stepLocal_13) {
			if (stepLocal_14 || (! var_1_69)) {
				var_1_33 = ((var_1_3 - var_1_70) + var_1_16);
			} else {
				var_1_33 = (var_1_16 - var_1_70);
			}
		} else {
			var_1_33 = ((max (var_1_16 , (min (var_1_8 , var_1_57)))) + (min ((var_1_70 - var_1_3) , var_1_34)));
		}
	} else {
		if (stepLocal_12 >= (var_1_50 / var_1_3)) {
			var_1_33 = (var_1_8 + ((var_1_70 + var_1_35) + var_1_3));
		} else {
			var_1_33 = ((26055 - var_1_36) - (min (var_1_3 , (var_1_37 - var_1_57))));
		}
	}


	// From: Req20Batch147Amount500
	unsigned char stepLocal_24 = var_1_29;
	signed long int stepLocal_23 = var_1_56;
	if (stepLocal_24 && (! (var_1_20 == var_1_25))) {
		if (stepLocal_23 <= var_1_75) {
			var_1_49 = (min ((min (var_1_3 , var_1_57)) , (min (var_1_75 , var_1_6))));
		} else {
			var_1_49 = (min (var_1_8 , var_1_94));
		}
	}


	// From: Req36Batch147Amount500
	signed long int stepLocal_34 = var_1_3 >> var_1_84;
	if (stepLocal_34 > var_1_80) {
		if (! (var_1_73 == (var_1_50 & var_1_84))) {
			var_1_83 = (var_1_67 + var_1_64);
		} else {
			if (var_1_28) {
				var_1_83 = (var_1_3 + (var_1_79 - var_1_84));
			} else {
				var_1_83 = (max (var_1_65 , ((max (var_1_86 , var_1_79)) + 32)));
			}
		}
	} else {
		var_1_83 = (((var_1_67 + 32) - var_1_3) + 25);
	}


	// From: Req17Batch147Amount500
	signed short int stepLocal_20 = var_1_36;
	if (stepLocal_20 == var_1_49) {
		var_1_46 = var_1_35;
	}


	// From: Req27Batch147Amount500
	if ((var_1_9 / var_1_12) < var_1_11) {
		if (var_1_29) {
			var_1_62 = (var_1_16 + var_1_64);
		} else {
			if (var_1_50 <= (var_1_73 % 4u)) {
				var_1_62 = (max ((var_1_65 - var_1_64) , ((var_1_66 - var_1_3) - var_1_16)));
			}
		}
	} else {
		if ((last_1_var_1_62 == var_1_19) || var_1_31) {
			if (var_1_52 < (var_1_96 / (min (var_1_66 , 5u)))) {
				var_1_62 = (max (var_1_3 , var_1_65));
			} else {
				var_1_62 = (((var_1_67 + 32) - var_1_3) + var_1_16);
			}
		} else {
			var_1_62 = (min (0 , (var_1_3 + var_1_16)));
		}
	}


	// From: Req28Batch147Amount500
	if ((var_1_43 || var_1_91) && (var_1_73 < var_1_49)) {
		var_1_68 = (max ((var_1_61 - var_1_11) , (abs (var_1_10))));
	} else {
		var_1_68 = 9.75;
	}


	// From: Req4Batch147Amount500
	unsigned long int stepLocal_3 = var_1_96 / var_1_3;
	unsigned long int stepLocal_2 = var_1_20 % var_1_3;
	signed long int stepLocal_1 = 25 | (var_1_3 + var_1_49);
	if (stepLocal_3 <= var_1_5) {
		var_1_14 = (var_1_16 + var_1_3);
	} else {
		if (stepLocal_2 > var_1_75) {
			if (var_1_6 != stepLocal_1) {
				var_1_14 = var_1_3;
			} else {
				var_1_14 = var_1_16;
			}
		}
	}


	// From: Req8Batch147Amount500
	if (var_1_28) {
		if (var_1_50 == var_1_6) {
			var_1_26 = (max ((abs (var_1_8)) , last_1_var_1_26));
		} else {
			var_1_26 = (256 - (var_1_27 - (abs (last_1_var_1_26))));
		}
	} else {
		if (var_1_39 <= var_1_13) {
			var_1_26 = (last_1_var_1_26 - (var_1_25 + var_1_16));
		} else {
			if (100000 <= ((~ var_1_14) * var_1_57)) {
				var_1_26 = (var_1_16 - var_1_14);
			}
		}
	}


	// From: Req37Batch147Amount500
	if (0 >= var_1_26) {
		var_1_87 = ((max ((min (var_1_65 , var_1_66)) , (var_1_79 + var_1_88))) - var_1_64);
	}


	// From: Req11Batch147Amount500
	if (var_1_31) {
		var_1_38 = (var_1_8 + var_1_35);
	} else {
		if (var_1_32) {
			var_1_38 = (min (var_1_36 , var_1_16));
		} else {
			var_1_38 = (min ((min (var_1_35 , var_1_46)) , var_1_3));
		}
	}


	// From: Req14Batch147Amount500
	unsigned long int stepLocal_18 = var_1_26 * (min (var_1_50 , var_1_20));
	signed short int stepLocal_17 = var_1_46;
	if (var_1_19 <= stepLocal_18) {
		var_1_41 = var_1_10;
	} else {
		if (stepLocal_17 < var_1_34) {
			var_1_41 = (9.99999999925E9 + var_1_13);
		} else {
			var_1_41 = (min ((var_1_10 - var_1_12) , var_1_13));
		}
	}


	// From: Req18Batch147Amount500
	signed long int stepLocal_21 = var_1_26;
	if (stepLocal_21 >= var_1_37) {
		var_1_47 = var_1_13;
	} else {
		var_1_47 = (max (var_1_13 , (max ((var_1_12 + var_1_11) , var_1_10))));
	}


	// From: Req19Batch147Amount500
	signed long int stepLocal_22 = var_1_36 / var_1_6;
	if (stepLocal_22 > (var_1_26 * var_1_73)) {
		var_1_48 = (min (256.85f , var_1_11));
	} else {
		var_1_48 = var_1_10;
	}


	// From: Req22Batch147Amount500
	signed long int stepLocal_27 = var_1_94;
	if (stepLocal_27 > ((max (var_1_25 , var_1_50)) + var_1_19)) {
		var_1_55 = (min (9.25f , (min (var_1_12 , var_1_11))));
	} else {
		if (var_1_48 <= var_1_10) {
			var_1_55 = var_1_10;
		} else {
			var_1_55 = ((max (var_1_13 , var_1_12)) + var_1_11);
		}
	}


	// From: Req34Batch147Amount500
	if ((var_1_65 - var_1_67) > var_1_56) {
		if (var_1_27 != var_1_75) {
			if ((var_1_60 / (min (var_1_10 , var_1_72))) > var_1_12) {
				if ((min (var_1_75 , (var_1_24 + var_1_75))) < var_1_45) {
					if (var_1_30 || (var_1_41 >= 8.5)) {
						if (var_1_21 < var_1_50) {
							if (var_1_28) {
								if (var_1_69 && var_1_29) {
									var_1_77 = ((64 + var_1_79) - var_1_3);
								} else {
									var_1_77 = (max (((max (var_1_80 , var_1_65)) - (var_1_79 - var_1_3)) , 64));
								}
							} else {
								var_1_77 = var_1_80;
							}
						} else {
							var_1_77 = (abs (var_1_67));
						}
					} else {
						var_1_77 = var_1_79;
					}
				} else {
					var_1_77 = ((max (var_1_66 , var_1_65)) - 1);
				}
			} else {
				var_1_77 = (var_1_66 - 64);
			}
		}
	} else {
		var_1_77 = (var_1_64 + 10);
	}


	// From: Req47Batch147Amount500
	signed long int stepLocal_35 = var_1_19;
	if ((var_1_9 * (5.25 + var_1_92)) != var_1_41) {
		if (stepLocal_35 == (max (var_1_57 , var_1_21))) {
			if (! ((10 >> var_1_3) != var_1_19)) {
				var_1_98 = var_1_67;
			} else {
				var_1_98 = var_1_84;
			}
		} else {
			var_1_98 = var_1_80;
		}
	}


	// From: Req15Batch147Amount500
	unsigned long int stepLocal_19 = var_1_96 + (var_1_87 - var_1_37);
	if (stepLocal_19 >= var_1_27) {
		var_1_42 = (var_1_29 && var_1_30);
	} else {
		if ((- var_1_10) > var_1_12) {
			var_1_42 = ((var_1_81 && var_1_29) && (! (var_1_30 && var_1_43)));
		}
	}


	// From: Req39Batch147Amount500
	if (var_1_42) {
		var_1_90 = var_1_35;
	} else {
		var_1_90 = var_1_75;
	}


	// From: Req1Batch147Amount500
	signed long int stepLocal_0 = var_1_56;
	if ((var_1_38 >> var_1_3) < stepLocal_0) {
		var_1_1 = (max ((min (var_1_3 , 256)) , ((max (var_1_5 , var_1_6)) - (abs (var_1_38)))));
	}


	// From: Req2Batch147Amount500
	if ((128 | var_1_1) < (var_1_56 - var_1_5)) {
		if (((var_1_56 + var_1_6) + (50 << var_1_3)) > -128) {
			if (((-100 + var_1_3) + var_1_5) >= var_1_56) {
				var_1_7 = (min ((abs (var_1_1)) , (var_1_3 + (max (var_1_8 , -16)))));
			}
		} else {
			var_1_7 = (abs (var_1_8));
		}
	} else {
		var_1_7 = (min (var_1_1 , var_1_3));
	}


	// From: Req13Batch147Amount500
	if (var_1_41 > var_1_10) {
		var_1_40 = var_1_25;
	} else {
		var_1_40 = (max (var_1_16 , 10));
	}


	// From: Req44Batch147Amount500
	if (var_1_42) {
		var_1_95 = var_1_66;
	} else {
		var_1_95 = var_1_3;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 7);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 32767);
	assume_abort_if_not(var_1_5 <= 65534);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 32767);
	assume_abort_if_not(var_1_6 <= 65534);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -16383);
	assume_abort_if_not(var_1_8 <= 16383);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 6917529.027641074000e+12F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 2305843.009213691400e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 2305843.009213691400e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_21 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_21 >= 1073741823);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65534);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= 1073741823);
	assume_abort_if_not(var_1_27 <= 2147483646);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 1);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= -16383);
	assume_abort_if_not(var_1_34 <= 16383);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= -4095);
	assume_abort_if_not(var_1_35 <= 4096);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 16383);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 16383);
	assume_abort_if_not(var_1_37 <= 32766);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -127);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_52 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_52 >= 2147483647);
	assume_abort_if_not(var_1_52 <= 4294967294);
	var_1_53 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 4294967294);
	var_1_54 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_54 >= 1073741824);
	assume_abort_if_not(var_1_54 <= 2147483647);
	var_1_58 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_58 >= 536870912);
	assume_abort_if_not(var_1_58 <= 1073741824);
	var_1_61 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_61 >= 0.0F && var_1_61 <= -1.0e-20F) || (var_1_61 <= 4611686.018427383000e+12F && var_1_61 >= 1.0e-20F ));
	var_1_64 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_64 >= 0);
	assume_abort_if_not(var_1_64 <= 127);
	var_1_65 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_65 >= 127);
	assume_abort_if_not(var_1_65 <= 254);
	var_1_66 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_66 >= 190);
	assume_abort_if_not(var_1_66 <= 254);
	var_1_67 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_67 >= 31);
	assume_abort_if_not(var_1_67 <= 64);
	var_1_72 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_72 >= 4611686.018427388000e+12F && var_1_72 <= -1.0e-20F) || (var_1_72 <= 9223372.036854776000e+12F && var_1_72 >= 1.0e-20F ));
	var_1_79 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_79 >= 64);
	assume_abort_if_not(var_1_79 <= 127);
	var_1_80 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_80 >= 127);
	assume_abort_if_not(var_1_80 <= 254);
	var_1_82 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_82 >= 1);
	assume_abort_if_not(var_1_82 <= 1);
	var_1_84 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_84 >= 1);
	assume_abort_if_not(var_1_84 <= 7);
	var_1_86 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_86 >= 0);
	assume_abort_if_not(var_1_86 <= 127);
	var_1_88 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_88 >= 64);
	assume_abort_if_not(var_1_88 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_19 = var_1_19;
	last_1_var_1_20 = var_1_20;
	last_1_var_1_24 = var_1_24;
	last_1_var_1_26 = var_1_26;
	last_1_var_1_28 = var_1_28;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_39 = var_1_39;
	last_1_var_1_50 = var_1_50;
	last_1_var_1_56 = var_1_56;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_73 = var_1_73;
	last_1_var_1_75 = var_1_75;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_83 = var_1_83;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_94 = var_1_94;
	last_1_var_1_96 = var_1_96;
}

int property(void) {
	return ((((((((((((((((((((((((((((((((((((((((((((((((var_1_38 >> var_1_3) < var_1_56) ? (var_1_1 == ((unsigned short int) (max ((min (var_1_3 , 256)) , ((max (var_1_5 , var_1_6)) - (abs (var_1_38))))))) : 1) && (((128 | var_1_1) < (var_1_56 - var_1_5)) ? ((((var_1_56 + var_1_6) + (50 << var_1_3)) > -128) ? ((((-100 + var_1_3) + var_1_5) >= var_1_56) ? (var_1_7 == ((signed short int) (min ((abs (var_1_1)) , (var_1_3 + (max (var_1_8 , -16))))))) : 1) : (var_1_7 == ((signed short int) (abs (var_1_8))))) : (var_1_7 == ((signed short int) (min (var_1_1 , var_1_3)))))) && (((- var_1_5) >= var_1_50) ? (var_1_9 == ((double) ((max (var_1_11 , 15.7)) - (8.5 + (var_1_12 - var_1_13))))) : 1)) && (((var_1_96 / var_1_3) <= var_1_5) ? (var_1_14 == ((unsigned char) (var_1_16 + var_1_3))) : (((var_1_20 % var_1_3) > var_1_75) ? ((var_1_6 != (25 | (var_1_3 + var_1_49))) ? (var_1_14 == ((unsigned char) var_1_3)) : (var_1_14 == ((unsigned char) var_1_16))) : 1))) && ((var_1_5 <= var_1_75) ? (var_1_19 == ((signed long int) (256 + -10))) : 1)) && ((var_1_8 == (~ last_1_var_1_94)) ? (var_1_20 == ((unsigned long int) ((4130577948u - last_1_var_1_94) - (var_1_21 - (max (last_1_var_1_94 , var_1_3)))))) : ((last_1_var_1_56 > (last_1_var_1_94 * (- var_1_5))) ? ((last_1_var_1_28 || last_1_var_1_81) ? (var_1_20 == ((unsigned long int) (abs (var_1_3)))) : (var_1_20 == ((unsigned long int) (last_1_var_1_56 + last_1_var_1_24)))) : 1))) && ((var_1_6 > var_1_96) ? (var_1_24 == ((unsigned short int) (max (2 , (min (1 , var_1_25)))))) : 1)) && (var_1_28 ? ((var_1_50 == var_1_6) ? (var_1_26 == ((signed long int) (max ((abs (var_1_8)) , last_1_var_1_26)))) : (var_1_26 == ((signed long int) (256 - (var_1_27 - (abs (last_1_var_1_26))))))) : ((var_1_39 <= var_1_13) ? (var_1_26 == ((signed long int) (last_1_var_1_26 - (var_1_25 + var_1_16)))) : ((100000 <= ((~ var_1_14) * var_1_57)) ? (var_1_26 == ((signed long int) (var_1_16 - var_1_14))) : 1)))) && ((((last_1_var_1_56 * last_1_var_1_50) + (var_1_6 * last_1_var_1_20)) != (16u * (50u * var_1_5))) ? ((last_1_var_1_73 == var_1_5) ? (var_1_28 == ((unsigned char) (var_1_29 && var_1_30))) : (var_1_28 == ((unsigned char) ((last_1_var_1_81 && var_1_31) || var_1_32)))) : (var_1_28 == ((unsigned char) (! var_1_29))))) && ((var_1_73 == var_1_6) ? ((var_1_30 && var_1_32) ? (((var_1_30 && (! var_1_91)) || (! var_1_69)) ? (var_1_33 == ((signed short int) ((var_1_3 - var_1_70) + var_1_16))) : (var_1_33 == ((signed short int) (var_1_16 - var_1_70)))) : (var_1_33 == ((signed short int) ((max (var_1_16 , (min (var_1_8 , var_1_57)))) + (min ((var_1_70 - var_1_3) , var_1_34)))))) : ((var_1_94 >= (var_1_50 / var_1_3)) ? (var_1_33 == ((signed short int) (var_1_8 + ((var_1_70 + var_1_35) + var_1_3)))) : (var_1_33 == ((signed short int) ((26055 - var_1_36) - (min (var_1_3 , (var_1_37 - var_1_57))))))))) && (var_1_31 ? (var_1_38 == ((signed short int) (var_1_8 + var_1_35))) : (var_1_32 ? (var_1_38 == ((signed short int) (min (var_1_36 , var_1_16)))) : (var_1_38 == ((signed short int) (min ((min (var_1_35 , var_1_46)) , var_1_3))))))) && (((var_1_21 & var_1_3) <= var_1_94) ? ((var_1_36 <= -4) ? (var_1_39 == ((double) var_1_12)) : (var_1_39 == ((double) var_1_11))) : (var_1_39 == ((double) var_1_10)))) && ((var_1_41 > var_1_10) ? (var_1_40 == ((unsigned short int) var_1_25)) : (var_1_40 == ((unsigned short int) (max (var_1_16 , 10)))))) && ((var_1_19 <= (var_1_26 * (min (var_1_50 , var_1_20)))) ? (var_1_41 == ((double) var_1_10)) : ((var_1_46 < var_1_34) ? (var_1_41 == ((double) (9.99999999925E9 + var_1_13))) : (var_1_41 == ((double) (min ((var_1_10 - var_1_12) , var_1_13))))))) && (((var_1_96 + (var_1_87 - var_1_37)) >= var_1_27) ? (var_1_42 == ((unsigned char) (var_1_29 && var_1_30))) : (((- var_1_10) > var_1_12) ? (var_1_42 == ((unsigned char) ((var_1_81 && var_1_29) && (! (var_1_30 && var_1_43))))) : 1))) && (var_1_44 == ((signed char) (min (var_1_3 , var_1_45))))) && ((var_1_36 == var_1_49) ? (var_1_46 == ((signed short int) var_1_35)) : 1)) && ((var_1_26 >= var_1_37) ? (var_1_47 == ((float) var_1_13)) : (var_1_47 == ((float) (max (var_1_13 , (max ((var_1_12 + var_1_11) , var_1_10)))))))) && (((var_1_36 / var_1_6) > (var_1_26 * var_1_73)) ? (var_1_48 == ((float) (min (256.85f , var_1_11)))) : (var_1_48 == ((float) var_1_10)))) && ((var_1_29 && (! (var_1_20 == var_1_25))) ? ((var_1_56 <= var_1_75) ? (var_1_49 == ((signed long int) (min ((min (var_1_3 , var_1_57)) , (min (var_1_75 , var_1_6)))))) : (var_1_49 == ((signed long int) (min (var_1_8 , var_1_94))))) : 1)) && ((last_1_var_1_83 > var_1_6) ? ((var_1_12 < (max (last_1_var_1_9 , last_1_var_1_39))) ? ((last_1_var_1_19 != last_1_var_1_50) ? (var_1_50 == ((unsigned long int) last_1_var_1_19)) : (var_1_50 == ((unsigned long int) (var_1_52 - var_1_16)))) : (var_1_50 == ((unsigned long int) (min (var_1_53 , ((2062634650u + var_1_54) - var_1_36)))))) : (var_1_50 == ((unsigned long int) (last_1_var_1_19 + (var_1_54 - var_1_6)))))) && ((var_1_94 > ((max (var_1_25 , var_1_50)) + var_1_19)) ? (var_1_55 == ((float) (min (9.25f , (min (var_1_12 , var_1_11)))))) : ((var_1_48 <= var_1_10) ? (var_1_55 == ((float) var_1_10)) : (var_1_55 == ((float) ((max (var_1_13 , var_1_12)) + var_1_11)))))) && ((var_1_31 && (var_1_28 && var_1_69)) ? (var_1_56 == ((signed long int) (var_1_6 + var_1_50))) : (var_1_56 == ((signed long int) (abs (var_1_16)))))) && (((var_1_36 + var_1_37) != last_1_var_1_20) ? (var_1_57 == ((unsigned long int) (var_1_25 + (var_1_54 - last_1_var_1_96)))) : (var_1_31 ? (var_1_57 == ((unsigned long int) (((min (var_1_21 , var_1_27)) + 1861607828u) - ((var_1_58 - last_1_var_1_90) + var_1_37)))) : (var_1_57 == ((unsigned long int) (max ((last_1_var_1_90 + var_1_16) , ((abs (var_1_52)) - var_1_6)))))))) && (var_1_59 == ((float) (var_1_11 + var_1_13)))) && (((last_1_var_1_60 / var_1_10) <= (- var_1_12)) ? ((! var_1_43) ? (var_1_60 == ((float) (max (var_1_10 , var_1_12)))) : 1) : (((var_1_57 / var_1_3) >= var_1_96) ? (var_1_60 == ((float) (var_1_13 - ((min (var_1_11 , var_1_12)) + var_1_61)))) : 1))) && (((var_1_9 / var_1_12) < var_1_11) ? (var_1_29 ? (var_1_62 == ((unsigned char) (var_1_16 + var_1_64))) : ((var_1_50 <= (var_1_73 % 4u)) ? (var_1_62 == ((unsigned char) (max ((var_1_65 - var_1_64) , ((var_1_66 - var_1_3) - var_1_16))))) : 1)) : (((last_1_var_1_62 == var_1_19) || var_1_31) ? ((var_1_52 < (var_1_96 / (min (var_1_66 , 5u)))) ? (var_1_62 == ((unsigned char) (max (var_1_3 , var_1_65)))) : (var_1_62 == ((unsigned char) (((var_1_67 + 32) - var_1_3) + var_1_16)))) : (var_1_62 == ((unsigned char) (min (0 , (var_1_3 + var_1_16)))))))) && (((var_1_43 || var_1_91) && (var_1_73 < var_1_49)) ? (var_1_68 == ((double) (max ((var_1_61 - var_1_11) , (abs (var_1_10)))))) : (var_1_68 == ((double) 9.75)))) && ((var_1_32 && (last_1_var_1_94 < last_1_var_1_33)) ? ((last_1_var_1_20 != last_1_var_1_75) ? (var_1_69 == ((unsigned char) (((var_1_27 / var_1_37) != -32) || var_1_30))) : (var_1_69 == ((unsigned char) var_1_43))) : 1)) && ((16 <= (var_1_45 & var_1_27)) ? ((var_1_12 < ((var_1_10 - var_1_13) - (var_1_72 - var_1_11))) ? (var_1_70 == ((signed short int) (var_1_45 + var_1_75))) : 1) : (var_1_70 == ((signed short int) ((max ((min (-100 , var_1_44)) , var_1_36)) + var_1_50))))) && (var_1_69 ? (var_1_81 ? (var_1_73 == ((unsigned short int) (var_1_75 + var_1_65))) : (var_1_73 == ((unsigned short int) var_1_36))) : 1)) && ((((128 + var_1_24) - var_1_65) >= var_1_50) ? (((var_1_72 >= var_1_12) && var_1_43) ? (var_1_74 == ((unsigned char) (min ((var_1_67 + var_1_16) , 64)))) : 1) : 1)) && ((var_1_6 < (var_1_50 * var_1_58)) ? (var_1_75 == ((signed long int) var_1_25)) : 1)) && (((var_1_65 - var_1_67) > var_1_56) ? ((var_1_27 != var_1_75) ? (((var_1_60 / (min (var_1_10 , var_1_72))) > var_1_12) ? (((min (var_1_75 , (var_1_24 + var_1_75))) < var_1_45) ? ((var_1_30 || (var_1_41 >= 8.5)) ? ((var_1_21 < var_1_50) ? (var_1_28 ? ((var_1_69 && var_1_29) ? (var_1_77 == ((unsigned char) ((64 + var_1_79) - var_1_3))) : (var_1_77 == ((unsigned char) (max (((max (var_1_80 , var_1_65)) - (var_1_79 - var_1_3)) , 64))))) : (var_1_77 == ((unsigned char) var_1_80))) : (var_1_77 == ((unsigned char) (abs (var_1_67))))) : (var_1_77 == ((unsigned char) var_1_79))) : (var_1_77 == ((unsigned char) ((max (var_1_66 , var_1_65)) - 1)))) : (var_1_77 == ((unsigned char) (var_1_66 - 64)))) : 1) : (var_1_77 == ((unsigned char) (var_1_64 + 10))))) && ((var_1_30 && ((var_1_72 - var_1_12) > var_1_93)) ? ((var_1_28 || var_1_31) ? (var_1_81 == ((unsigned char) ((var_1_29 || (var_1_43 && var_1_30)) && (var_1_32 || var_1_82)))) : (var_1_81 == ((unsigned char) (((var_1_19 <= var_1_50) || var_1_82) && var_1_30)))) : (var_1_81 == ((unsigned char) (! var_1_43))))) && (((var_1_3 >> var_1_84) > var_1_80) ? ((! (var_1_73 == (var_1_50 & var_1_84))) ? (var_1_83 == ((unsigned char) (var_1_67 + var_1_64))) : (var_1_28 ? (var_1_83 == ((unsigned char) (var_1_3 + (var_1_79 - var_1_84)))) : (var_1_83 == ((unsigned char) (max (var_1_65 , ((max (var_1_86 , var_1_79)) + 32))))))) : (var_1_83 == ((unsigned char) (((var_1_67 + 32) - var_1_3) + 25))))) && ((0 >= var_1_26) ? (var_1_87 == ((unsigned char) ((max ((min (var_1_65 , var_1_66)) , (var_1_79 + var_1_88))) - var_1_64))) : 1)) && (var_1_69 ? (var_1_89 == ((float) var_1_13)) : 1)) && (var_1_42 ? (var_1_90 == ((signed short int) var_1_35)) : (var_1_90 == ((signed short int) var_1_75)))) && (var_1_91 == ((unsigned char) var_1_43))) && (var_1_30 ? (var_1_92 == ((double) var_1_61)) : (var_1_92 == ((double) var_1_10)))) && (var_1_28 ? (var_1_93 == ((double) var_1_12)) : (var_1_93 == ((double) var_1_11)))) && (var_1_43 ? (var_1_94 == ((signed long int) var_1_19)) : 1)) && (var_1_42 ? (var_1_95 == ((signed char) var_1_66)) : (var_1_95 == ((signed char) var_1_3)))) && (var_1_32 ? (var_1_96 == ((unsigned long int) var_1_64)) : (var_1_96 == ((unsigned long int) var_1_25)))) && (var_1_97 == ((signed char) var_1_45))) && (((var_1_9 * (5.25 + var_1_92)) != var_1_41) ? ((var_1_19 == (max (var_1_57 , var_1_21))) ? ((! ((10 >> var_1_3) != var_1_19)) ? (var_1_98 == ((unsigned char) var_1_67)) : (var_1_98 == ((unsigned char) var_1_84))) : (var_1_98 == ((unsigned char) var_1_80))) : 1)
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
