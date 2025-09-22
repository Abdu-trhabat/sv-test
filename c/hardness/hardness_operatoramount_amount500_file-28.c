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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch28Amount500.c", 13, "reach_error"); }
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
float var_1_1 = 64.4;
float var_1_4 = 5.5;
float var_1_5 = 64.6;
float var_1_6 = 4.4;
unsigned short int var_1_7 = 32;
signed long int var_1_9 = 5;
float var_1_10 = 5.75;
unsigned short int var_1_11 = 128;
unsigned short int var_1_12 = 5;
unsigned short int var_1_13 = 10;
unsigned short int var_1_14 = 5;
unsigned char var_1_15 = 0;
unsigned char var_1_18 = 32;
unsigned char var_1_19 = 50;
unsigned char var_1_20 = 5;
unsigned char var_1_21 = 10;
unsigned char var_1_22 = 10;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 128;
unsigned char var_1_25 = 200;
unsigned char var_1_26 = 64;
double var_1_27 = 4.7;
double var_1_28 = 63.375;
double var_1_29 = 32.2;
signed long int var_1_30 = 4;
double var_1_31 = 4.75;
float var_1_32 = 9.4;
float var_1_33 = 16.8;
double var_1_34 = 64.5;
double var_1_35 = 0.0;
unsigned long int var_1_36 = 1;
unsigned long int var_1_38 = 3645979545;
unsigned long int var_1_39 = 1000000000;
signed char var_1_40 = -32;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned short int var_1_44 = 4;
unsigned short int var_1_45 = 52417;
signed long int var_1_46 = 0;
double var_1_47 = 32.2;
double var_1_48 = 100.5;
double var_1_49 = 0.0;
signed long int var_1_50 = 64;
unsigned char var_1_51 = 25;
double var_1_54 = 64.5;
signed short int var_1_55 = -10;
signed short int var_1_56 = 18347;
signed short int var_1_57 = -16;
unsigned char var_1_58 = 128;
unsigned short int var_1_59 = 2;
signed char var_1_60 = -8;
signed char var_1_61 = 4;
signed char var_1_62 = 64;
signed char var_1_63 = 100;
unsigned char var_1_64 = 5;
unsigned short int var_1_65 = 200;
float var_1_66 = 128.75;
signed char var_1_67 = 64;
signed long int var_1_70 = -128;
unsigned short int var_1_71 = 0;
unsigned char var_1_72 = 1;
unsigned char var_1_73 = 0;
signed char var_1_74 = -128;
unsigned short int var_1_75 = 0;
unsigned char var_1_76 = 0;
unsigned char var_1_77 = 0;
unsigned char var_1_78 = 128;
unsigned char var_1_79 = 5;
unsigned char var_1_80 = 1;
unsigned char var_1_81 = 0;
double var_1_83 = 0.0;
double var_1_84 = 200.5;
float var_1_85 = 1000.5;
float var_1_87 = 16.5;
unsigned long int var_1_88 = 10000;
signed short int var_1_89 = 2;
unsigned short int var_1_90 = 4;
unsigned short int var_1_91 = 54871;
float var_1_92 = 8.5;
unsigned char var_1_93 = 0;
float var_1_94 = -0.4;
unsigned long int var_1_95 = 500;
double var_1_96 = 31.75;
signed char var_1_97 = 25;
signed short int var_1_98 = 256;
double var_1_99 = -0.4;
unsigned char var_1_100 = 1;
unsigned char var_1_101 = 0;
unsigned short int var_1_102 = 100;
signed short int var_1_103 = -10;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_36 = 1;
unsigned char last_1_var_1_41 = 0;
double last_1_var_1_47 = 32.2;
unsigned char last_1_var_1_51 = 25;
unsigned short int last_1_var_1_59 = 2;
signed long int last_1_var_1_70 = -128;
unsigned short int last_1_var_1_71 = 0;
signed char last_1_var_1_74 = -128;
unsigned long int last_1_var_1_88 = 10000;
signed short int last_1_var_1_89 = 2;
unsigned long int last_1_var_1_95 = 500;
unsigned char last_1_var_1_100 = 1;
unsigned char last_1_var_1_101 = 0;
signed short int last_1_var_1_103 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req37Batch28Amount500
	unsigned long int stepLocal_29 = (last_1_var_1_36 * var_1_63) / var_1_26;
	if (stepLocal_29 != (last_1_var_1_59 - var_1_20)) {
		var_1_88 = (min ((min (last_1_var_1_88 , var_1_23)) , (min (var_1_45 , var_1_13))));
	} else {
		var_1_88 = (max ((var_1_38 - (var_1_19 + last_1_var_1_95)) , var_1_56));
	}


	// From: Req35Batch28Amount500
	if (last_1_var_1_100) {
		var_1_80 = (var_1_43 || var_1_81);
	} else {
		if (var_1_43 || var_1_42) {
			var_1_80 = ((last_1_var_1_74 <= var_1_30) && (! var_1_73));
		} else {
			if (((var_1_83 - var_1_33) - var_1_84) != last_1_var_1_47) {
				var_1_80 = ((last_1_var_1_101 && (! var_1_73)) || var_1_77);
			}
		}
	}


	// From: Req14Batch28Amount500
	if (var_1_25 > var_1_14) {
		if (! last_1_var_1_100) {
			var_1_50 = (max (last_1_var_1_51 , (abs (var_1_23))));
		} else {
			var_1_50 = (abs (last_1_var_1_59 + var_1_22));
		}
	} else {
		if (var_1_39 <= last_1_var_1_95) {
			var_1_50 = (min (var_1_23 , (min (last_1_var_1_51 , -4))));
		}
	}


	// From: Req6Batch28Amount500
	if (-64 >= (var_1_50 / var_1_9)) {
		var_1_34 = (((var_1_35 - 1.25) + 255.25) - var_1_10);
	} else {
		var_1_34 = (min ((var_1_35 + var_1_6) , var_1_29));
	}


	// From: Req10Batch28Amount500
	if (var_1_80) {
		var_1_44 = (max ((min (var_1_23 , var_1_24)) , var_1_22));
	} else {
		var_1_44 = (var_1_45 - var_1_19);
	}


	// From: Req11Batch28Amount500
	if ((2192881108u - var_1_24) <= (var_1_14 | var_1_39)) {
		if (var_1_24 != var_1_18) {
			var_1_46 = var_1_12;
		}
	}


	// From: Req16Batch28Amount500
	if (var_1_42) {
		var_1_54 = ((var_1_5 - var_1_35) + var_1_31);
	}


	// From: Req17Batch28Amount500
	unsigned char stepLocal_16 = var_1_42;
	if (var_1_43 || stepLocal_16) {
		var_1_55 = var_1_23;
	} else {
		var_1_55 = ((var_1_56 - var_1_20) - var_1_25);
	}


	// From: Req23Batch28Amount500
	var_1_62 = (max (var_1_30 , ((var_1_63 - var_1_19) - 8)));


	// From: Req24Batch28Amount500
	var_1_64 = ((max (var_1_23 , var_1_25)) - var_1_22);


	// From: Req26Batch28Amount500
	if (var_1_49 < 0.5) {
		var_1_66 = (min (var_1_29 , var_1_10));
	} else {
		var_1_66 = (min ((max (var_1_5 , var_1_33)) , var_1_35));
	}


	// From: Req29Batch28Amount500
	if (var_1_42) {
		var_1_71 = last_1_var_1_71;
	}


	// From: Req31Batch28Amount500
	var_1_74 = (var_1_30 + var_1_19);


	// From: Req41Batch28Amount500
	if (var_1_78 > var_1_56) {
		var_1_93 = (! var_1_81);
	} else {
		var_1_93 = (var_1_77 || var_1_73);
	}


	// From: Req43Batch28Amount500
	var_1_95 = var_1_19;


	// From: Req45Batch28Amount500
	if (var_1_42) {
		var_1_97 = var_1_30;
	} else {
		var_1_97 = var_1_18;
	}


	// From: Req46Batch28Amount500
	var_1_98 = var_1_50;


	// From: Req47Batch28Amount500
	if (var_1_77) {
		var_1_99 = var_1_5;
	}


	// From: Req48Batch28Amount500
	var_1_100 = var_1_42;


	// From: Req49Batch28Amount500
	var_1_101 = var_1_42;


	// From: Req50Batch28Amount500
	if (var_1_77) {
		var_1_102 = var_1_20;
	}


	// From: Req20Batch28Amount500
	if ((last_1_var_1_59 < 1000) || var_1_42) {
		if (((var_1_88 * var_1_12) + (min (var_1_56 , var_1_30))) <= var_1_46) {
			var_1_59 = var_1_14;
		}
	} else {
		var_1_59 = var_1_20;
	}


	// From: Req25Batch28Amount500
	signed long int stepLocal_20 = var_1_25 * var_1_12;
	if (var_1_50 <= stepLocal_20) {
		if (! var_1_80) {
			var_1_65 = (var_1_102 + (min (var_1_25 , var_1_56)));
		} else {
			var_1_65 = var_1_12;
		}
	} else {
		var_1_65 = (var_1_45 - (min (var_1_56 , var_1_25)));
	}


	// From: Req36Batch28Amount500
	signed long int stepLocal_28 = var_1_50;
	unsigned short int stepLocal_27 = var_1_71;
	if (stepLocal_28 > 4) {
		if (stepLocal_27 < var_1_19) {
			var_1_85 = 15.25f;
		}
	} else {
		var_1_85 = ((var_1_4 - (var_1_33 + var_1_87)) + 0.5f);
	}


	// From: Req30Batch28Amount500
	signed long int stepLocal_21 = (var_1_56 + var_1_50) + 4;
	if (stepLocal_21 == (var_1_9 * var_1_46)) {
		var_1_72 = ((var_1_101 && var_1_80) || var_1_73);
	} else {
		var_1_72 = (var_1_42 && var_1_43);
	}


	// From: Req1Batch28Amount500
	signed long int stepLocal_3 = -32;
	unsigned long int stepLocal_2 = var_1_95;
	unsigned long int stepLocal_1 = var_1_95;
	unsigned long int stepLocal_0 = (var_1_95 * var_1_50) / var_1_7;
	if (var_1_50 <= stepLocal_2) {
		if (var_1_50 > stepLocal_1) {
			var_1_1 = (((var_1_4 + 25.2f) - var_1_5) + var_1_6);
		}
	} else {
		if (stepLocal_0 >= (var_1_88 / var_1_9)) {
			if (stepLocal_3 > ((var_1_95 + var_1_7) | var_1_88)) {
				var_1_1 = (var_1_4 - (var_1_5 + var_1_10));
			} else {
				var_1_1 = (min (var_1_5 , var_1_6));
			}
		} else {
			var_1_1 = (var_1_5 - var_1_4);
		}
	}


	// From: Req2Batch28Amount500
	signed long int stepLocal_5 = var_1_46;
	unsigned long int stepLocal_4 = - var_1_95;
	if (var_1_7 < stepLocal_4) {
		if (var_1_9 < stepLocal_5) {
			var_1_11 = (min (var_1_12 , (var_1_13 + var_1_14)));
		} else {
			var_1_11 = var_1_13;
		}
	}


	// From: Req9Batch28Amount500
	if (var_1_35 > var_1_10) {
		var_1_41 = 0;
	} else {
		if (var_1_100 || last_1_var_1_41) {
			var_1_41 = var_1_42;
		} else {
			var_1_41 = (var_1_42 || var_1_43);
		}
	}


	// From: Req18Batch28Amount500
	if (var_1_41) {
		var_1_57 = (max (-1 , var_1_21));
	}


	// From: Req21Batch28Amount500
	if (var_1_100) {
		var_1_60 = var_1_19;
	} else {
		var_1_60 = var_1_30;
	}


	// From: Req22Batch28Amount500
	unsigned short int stepLocal_19 = var_1_13;
	unsigned char stepLocal_18 = var_1_64;
	if (var_1_95 <= stepLocal_19) {
		var_1_61 = (min (var_1_25 , -2));
	} else {
		if (stepLocal_18 < var_1_25) {
			var_1_61 = var_1_19;
		}
	}


	// From: Req34Batch28Amount500
	unsigned char stepLocal_26 = var_1_42;
	if (stepLocal_26 || (32u <= var_1_23)) {
		var_1_79 = (min ((var_1_19 + (var_1_30 + var_1_20)) , var_1_24));
	} else {
		if (var_1_101) {
			var_1_79 = (min (var_1_30 , (var_1_63 + (var_1_26 - var_1_19))));
		} else {
			var_1_79 = (var_1_18 + (var_1_19 + var_1_20));
		}
	}


	// From: Req39Batch28Amount500
	if (! var_1_93) {
		if (var_1_81) {
			var_1_90 = var_1_18;
		} else {
			if (var_1_77) {
				var_1_90 = (min ((var_1_45 - var_1_14) , (var_1_91 - var_1_26)));
			} else {
				var_1_90 = (min ((var_1_91 - var_1_56) , var_1_18));
			}
		}
	}


	// From: Req44Batch28Amount500
	if (var_1_41) {
		var_1_96 = 10.7;
	}


	// From: Req7Batch28Amount500
	unsigned short int stepLocal_12 = var_1_7;
	if (var_1_4 > var_1_85) {
		if (var_1_100) {
			var_1_36 = (var_1_38 - var_1_26);
		} else {
			var_1_36 = (min (var_1_20 , (var_1_38 - var_1_30)));
		}
	} else {
		if (var_1_31 < (var_1_10 - var_1_4)) {
			var_1_36 = (min (var_1_21 , (3134995290u - var_1_12)));
		} else {
			if (var_1_24 == stepLocal_12) {
				var_1_36 = ((var_1_19 + (var_1_39 - var_1_20)) + var_1_30);
			}
		}
	}


	// From: Req51Batch28Amount500
	unsigned long int stepLocal_32 = 1u;
	unsigned char stepLocal_31 = var_1_64;
	if (stepLocal_32 > (- var_1_18)) {
		var_1_103 = (max (var_1_36 , ((var_1_22 - var_1_50) + last_1_var_1_103)));
	} else {
		if (stepLocal_31 < var_1_95) {
			var_1_103 = var_1_20;
		} else {
			var_1_103 = var_1_36;
		}
	}


	// From: Req8Batch28Amount500
	if (var_1_41) {
		if ((var_1_5 - (var_1_33 + var_1_35)) <= var_1_99) {
			var_1_40 = (min (var_1_20 , 32));
		} else {
			var_1_40 = (abs (min (var_1_30 , var_1_25)));
		}
	} else {
		var_1_40 = (min (var_1_25 , -4));
	}


	// From: Req32Batch28Amount500
	unsigned long int stepLocal_22 = var_1_103 + (- var_1_95);
	if (stepLocal_22 < var_1_88) {
		var_1_75 = (var_1_103 + var_1_65);
	} else {
		var_1_75 = (max (((min (var_1_13 , var_1_103)) + 10) , var_1_24));
	}


	// From: Req12Batch28Amount500
	unsigned char stepLocal_15 = var_1_101;
	unsigned char stepLocal_14 = var_1_85 < (- var_1_6);
	unsigned char stepLocal_13 = var_1_101;
	if (stepLocal_15 || var_1_100) {
		if (var_1_42 && stepLocal_13) {
			if (64.5f == (var_1_35 - var_1_33)) {
				var_1_47 = (min (var_1_4 , var_1_6));
			} else {
				if (((var_1_39 + var_1_75) < (var_1_24 / var_1_30)) && stepLocal_14) {
					var_1_47 = (min (var_1_4 , var_1_6));
				} else {
					var_1_47 = (var_1_4 - var_1_5);
				}
			}
		} else {
			var_1_47 = (var_1_35 + var_1_5);
		}
	} else {
		var_1_47 = var_1_29;
	}


	// From: Req33Batch28Amount500
	unsigned long int stepLocal_25 = var_1_36;
	unsigned long int stepLocal_24 = (var_1_78 - var_1_30) ^ var_1_95;
	unsigned char stepLocal_23 = var_1_39 > (3988876102u - var_1_22);
	if (var_1_30 <= stepLocal_25) {
		var_1_76 = (var_1_72 && var_1_43);
	} else {
		if (stepLocal_23 || (var_1_19 >= (var_1_14 + var_1_103))) {
			if (! var_1_43) {
				var_1_76 = (var_1_73 && ((! var_1_42) && var_1_77));
			} else {
				var_1_76 = var_1_73;
			}
		} else {
			if (stepLocal_24 >= ((var_1_88 + var_1_7) | var_1_75)) {
				var_1_76 = (var_1_73 && var_1_77);
			}
		}
	}


	// From: Req5Batch28Amount500
	unsigned char stepLocal_11 = var_1_80;
	if (stepLocal_11 && ((var_1_14 > var_1_12) || var_1_76)) {
		var_1_32 = ((abs (var_1_10)) - ((var_1_4 + var_1_33) + var_1_5));
	}


	// From: Req27Batch28Amount500
	if (var_1_90 < ((var_1_13 * var_1_95) / 1)) {
		if ((max ((var_1_66 + 1.2f) , var_1_32)) > ((var_1_34 + 64.2f) + var_1_33)) {
			var_1_67 = ((var_1_30 + (var_1_19 - 16)) - var_1_63);
		} else {
			var_1_67 = (var_1_63 - ((var_1_19 - var_1_30) + var_1_20));
		}
	} else {
		var_1_67 = ((max (var_1_18 , var_1_20)) - (min (var_1_30 , (var_1_19 + 4))));
	}


	// From: Req38Batch28Amount500
	unsigned char stepLocal_30 = var_1_81;
	if (((var_1_50 * var_1_40) >= var_1_75) && stepLocal_30) {
		var_1_89 = (max (var_1_88 , last_1_var_1_89));
	}


	// From: Req42Batch28Amount500
	if (var_1_76) {
		var_1_94 = 4.25f;
	} else {
		var_1_94 = 1.2f;
	}


	// From: Req3Batch28Amount500
	unsigned char stepLocal_8 = var_1_93;
	signed long int stepLocal_7 = var_1_14 / var_1_7;
	unsigned char stepLocal_6 = var_1_18 < var_1_22;
	if (var_1_76 || stepLocal_8) {
		if (stepLocal_7 >= var_1_13) {
			var_1_15 = (((var_1_18 + var_1_19) - var_1_20) + (min (var_1_21 , var_1_22)));
		} else {
			if (var_1_76 || stepLocal_6) {
				var_1_15 = (min (((min (var_1_23 , var_1_24)) - var_1_19) , var_1_22));
			} else {
				var_1_15 = ((var_1_25 - var_1_19) - (max (var_1_22 , var_1_20)));
			}
		}
	} else {
		var_1_15 = (min ((var_1_19 + (var_1_26 - 4)) , var_1_23));
	}


	// From: Req28Batch28Amount500
	if ((-1 / var_1_19) > (var_1_20 - last_1_var_1_70)) {
		if (var_1_80 || (var_1_15 == var_1_30)) {
			var_1_70 = (max (5 , (var_1_21 + var_1_25)));
		} else {
			var_1_70 = (10 - var_1_57);
		}
	} else {
		var_1_70 = (min (var_1_50 , -32));
	}


	// From: Req4Batch28Amount500
	signed long int stepLocal_10 = var_1_70;
	signed long int stepLocal_9 = var_1_9 >> var_1_30;
	if (! var_1_80) {
		if (var_1_13 <= stepLocal_10) {
			var_1_27 = ((var_1_4 + 31.875) - var_1_10);
		} else {
			if (((var_1_6 * var_1_99) / var_1_28) != var_1_10) {
				var_1_27 = (min ((min (var_1_4 , var_1_10)) , (max ((var_1_6 + var_1_5) , var_1_29))));
			} else {
				if (var_1_41) {
					if (stepLocal_9 <= var_1_88) {
						var_1_27 = var_1_29;
					} else {
						var_1_27 = ((max (var_1_5 , (var_1_4 + var_1_31))) + var_1_10);
					}
				} else {
					var_1_27 = var_1_31;
				}
			}
		}
	}


	// From: Req13Batch28Amount500
	if (64 < ((max (var_1_20 , var_1_26)) * var_1_70)) {
		var_1_48 = ((var_1_49 - var_1_10) - (min (var_1_33 , var_1_4)));
	} else {
		var_1_48 = ((min (var_1_35 , var_1_33)) - ((abs (var_1_6)) + (max (var_1_5 , var_1_4))));
	}


	// From: Req19Batch28Amount500
	unsigned char stepLocal_17 = var_1_21;
	if (((var_1_95 * var_1_70) * var_1_20) < stepLocal_17) {
		var_1_58 = (var_1_25 - var_1_21);
	}


	// From: Req40Batch28Amount500
	if (((var_1_5 + var_1_49) * var_1_29) > var_1_48) {
		if ((var_1_36 + var_1_46) >= var_1_46) {
			if (var_1_45 > (var_1_95 + var_1_18)) {
				var_1_92 = ((abs (var_1_33 + var_1_31)) + var_1_6);
			} else {
				var_1_92 = (var_1_6 + (var_1_33 - var_1_87));
			}
		} else {
			var_1_92 = var_1_29;
		}
	} else {
		if (var_1_77) {
			var_1_92 = (var_1_35 + var_1_33);
		}
	}


	// From: Req15Batch28Amount500
	if ((var_1_70 + var_1_38) >= (2719934374u - var_1_12)) {
		if (var_1_34 >= var_1_28) {
			if (var_1_46 > var_1_36) {
				var_1_51 = (var_1_25 - var_1_18);
			} else {
				var_1_51 = (min (16 , (var_1_21 + var_1_18)));
			}
		}
	} else {
		var_1_51 = (min (var_1_23 , (abs (max (var_1_18 , var_1_24)))));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65535);
	assume_abort_if_not(var_1_7 != 0);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	assume_abort_if_not(var_1_9 != 0);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 31);
	assume_abort_if_not(var_1_18 <= 64);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 32);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 127);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 127);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 190);
	assume_abort_if_not(var_1_25 <= 254);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 63);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	assume_abort_if_not(var_1_28 != 0.0F);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 30);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= 2305843.009213691400e+12F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 2147483647);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 536870911);
	assume_abort_if_not(var_1_39 <= 1073741823);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 0);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 32767);
	assume_abort_if_not(var_1_45 <= 65534);
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= 4611686.018427383000e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_56 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_56 >= 16382);
	assume_abort_if_not(var_1_56 <= 32766);
	var_1_63 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_63 >= 62);
	assume_abort_if_not(var_1_63 <= 126);
	var_1_73 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_73 >= 1);
	assume_abort_if_not(var_1_73 <= 1);
	var_1_77 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_77 >= 1);
	assume_abort_if_not(var_1_77 <= 1);
	var_1_78 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_78 >= 127);
	assume_abort_if_not(var_1_78 <= 255);
	var_1_81 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_81 >= 0);
	assume_abort_if_not(var_1_81 <= 0);
	var_1_83 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_83 >= 4611686.018427388000e+12F && var_1_83 <= -1.0e-20F) || (var_1_83 <= 9223372.036854776000e+12F && var_1_83 >= 1.0e-20F ));
	var_1_84 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_84 >= 0.0F && var_1_84 <= -1.0e-20F) || (var_1_84 <= 9223372.036854776000e+12F && var_1_84 >= 1.0e-20F ));
	var_1_87 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_87 >= 0.0F && var_1_87 <= -1.0e-20F) || (var_1_87 <= 2305843.009213691400e+12F && var_1_87 >= 1.0e-20F ));
	var_1_91 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_91 >= 32767);
	assume_abort_if_not(var_1_91 <= 65534);
}



void updateLastVariables(void) {
	last_1_var_1_36 = var_1_36;
	last_1_var_1_41 = var_1_41;
	last_1_var_1_47 = var_1_47;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_70 = var_1_70;
	last_1_var_1_71 = var_1_71;
	last_1_var_1_74 = var_1_74;
	last_1_var_1_88 = var_1_88;
	last_1_var_1_89 = var_1_89;
	last_1_var_1_95 = var_1_95;
	last_1_var_1_100 = var_1_100;
	last_1_var_1_101 = var_1_101;
	last_1_var_1_103 = var_1_103;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((((var_1_50 <= var_1_95) ? ((var_1_50 > var_1_95) ? (var_1_1 == ((float) (((var_1_4 + 25.2f) - var_1_5) + var_1_6))) : 1) : ((((var_1_95 * var_1_50) / var_1_7) >= (var_1_88 / var_1_9)) ? ((-32 > ((var_1_95 + var_1_7) | var_1_88)) ? (var_1_1 == ((float) (var_1_4 - (var_1_5 + var_1_10)))) : (var_1_1 == ((float) (min (var_1_5 , var_1_6))))) : (var_1_1 == ((float) (var_1_5 - var_1_4))))) && ((var_1_7 < (- var_1_95)) ? ((var_1_9 < var_1_46) ? (var_1_11 == ((unsigned short int) (min (var_1_12 , (var_1_13 + var_1_14))))) : (var_1_11 == ((unsigned short int) var_1_13))) : 1)) && ((var_1_76 || var_1_93) ? (((var_1_14 / var_1_7) >= var_1_13) ? (var_1_15 == ((unsigned char) (((var_1_18 + var_1_19) - var_1_20) + (min (var_1_21 , var_1_22))))) : ((var_1_76 || (var_1_18 < var_1_22)) ? (var_1_15 == ((unsigned char) (min (((min (var_1_23 , var_1_24)) - var_1_19) , var_1_22)))) : (var_1_15 == ((unsigned char) ((var_1_25 - var_1_19) - (max (var_1_22 , var_1_20))))))) : (var_1_15 == ((unsigned char) (min ((var_1_19 + (var_1_26 - 4)) , var_1_23)))))) && ((! var_1_80) ? ((var_1_13 <= var_1_70) ? (var_1_27 == ((double) ((var_1_4 + 31.875) - var_1_10))) : ((((var_1_6 * var_1_99) / var_1_28) != var_1_10) ? (var_1_27 == ((double) (min ((min (var_1_4 , var_1_10)) , (max ((var_1_6 + var_1_5) , var_1_29)))))) : (var_1_41 ? (((var_1_9 >> var_1_30) <= var_1_88) ? (var_1_27 == ((double) var_1_29)) : (var_1_27 == ((double) ((max (var_1_5 , (var_1_4 + var_1_31))) + var_1_10)))) : (var_1_27 == ((double) var_1_31))))) : 1)) && ((var_1_80 && ((var_1_14 > var_1_12) || var_1_76)) ? (var_1_32 == ((float) ((abs (var_1_10)) - ((var_1_4 + var_1_33) + var_1_5)))) : 1)) && ((-64 >= (var_1_50 / var_1_9)) ? (var_1_34 == ((double) (((var_1_35 - 1.25) + 255.25) - var_1_10))) : (var_1_34 == ((double) (min ((var_1_35 + var_1_6) , var_1_29)))))) && ((var_1_4 > var_1_85) ? (var_1_100 ? (var_1_36 == ((unsigned long int) (var_1_38 - var_1_26))) : (var_1_36 == ((unsigned long int) (min (var_1_20 , (var_1_38 - var_1_30)))))) : ((var_1_31 < (var_1_10 - var_1_4)) ? (var_1_36 == ((unsigned long int) (min (var_1_21 , (3134995290u - var_1_12))))) : ((var_1_24 == var_1_7) ? (var_1_36 == ((unsigned long int) ((var_1_19 + (var_1_39 - var_1_20)) + var_1_30))) : 1)))) && (var_1_41 ? (((var_1_5 - (var_1_33 + var_1_35)) <= var_1_99) ? (var_1_40 == ((signed char) (min (var_1_20 , 32)))) : (var_1_40 == ((signed char) (abs (min (var_1_30 , var_1_25)))))) : (var_1_40 == ((signed char) (min (var_1_25 , -4)))))) && ((var_1_35 > var_1_10) ? (var_1_41 == ((unsigned char) 0)) : ((var_1_100 || last_1_var_1_41) ? (var_1_41 == ((unsigned char) var_1_42)) : (var_1_41 == ((unsigned char) (var_1_42 || var_1_43)))))) && (var_1_80 ? (var_1_44 == ((unsigned short int) (max ((min (var_1_23 , var_1_24)) , var_1_22)))) : (var_1_44 == ((unsigned short int) (var_1_45 - var_1_19))))) && (((2192881108u - var_1_24) <= (var_1_14 | var_1_39)) ? ((var_1_24 != var_1_18) ? (var_1_46 == ((signed long int) var_1_12)) : 1) : 1)) && ((var_1_101 || var_1_100) ? ((var_1_42 && var_1_101) ? ((64.5f == (var_1_35 - var_1_33)) ? (var_1_47 == ((double) (min (var_1_4 , var_1_6)))) : ((((var_1_39 + var_1_75) < (var_1_24 / var_1_30)) && (var_1_85 < (- var_1_6))) ? (var_1_47 == ((double) (min (var_1_4 , var_1_6)))) : (var_1_47 == ((double) (var_1_4 - var_1_5))))) : (var_1_47 == ((double) (var_1_35 + var_1_5)))) : (var_1_47 == ((double) var_1_29)))) && ((64 < ((max (var_1_20 , var_1_26)) * var_1_70)) ? (var_1_48 == ((double) ((var_1_49 - var_1_10) - (min (var_1_33 , var_1_4))))) : (var_1_48 == ((double) ((min (var_1_35 , var_1_33)) - ((abs (var_1_6)) + (max (var_1_5 , var_1_4)))))))) && ((var_1_25 > var_1_14) ? ((! last_1_var_1_100) ? (var_1_50 == ((signed long int) (max (last_1_var_1_51 , (abs (var_1_23)))))) : (var_1_50 == ((signed long int) (abs (last_1_var_1_59 + var_1_22))))) : ((var_1_39 <= last_1_var_1_95) ? (var_1_50 == ((signed long int) (min (var_1_23 , (min (last_1_var_1_51 , -4)))))) : 1))) && (((var_1_70 + var_1_38) >= (2719934374u - var_1_12)) ? ((var_1_34 >= var_1_28) ? ((var_1_46 > var_1_36) ? (var_1_51 == ((unsigned char) (var_1_25 - var_1_18))) : (var_1_51 == ((unsigned char) (min (16 , (var_1_21 + var_1_18)))))) : 1) : (var_1_51 == ((unsigned char) (min (var_1_23 , (abs (max (var_1_18 , var_1_24))))))))) && (var_1_42 ? (var_1_54 == ((double) ((var_1_5 - var_1_35) + var_1_31))) : 1)) && ((var_1_43 || var_1_42) ? (var_1_55 == ((signed short int) var_1_23)) : (var_1_55 == ((signed short int) ((var_1_56 - var_1_20) - var_1_25))))) && (var_1_41 ? (var_1_57 == ((signed short int) (max (-1 , var_1_21)))) : 1)) && ((((var_1_95 * var_1_70) * var_1_20) < var_1_21) ? (var_1_58 == ((unsigned char) (var_1_25 - var_1_21))) : 1)) && (((last_1_var_1_59 < 1000) || var_1_42) ? ((((var_1_88 * var_1_12) + (min (var_1_56 , var_1_30))) <= var_1_46) ? (var_1_59 == ((unsigned short int) var_1_14)) : 1) : (var_1_59 == ((unsigned short int) var_1_20)))) && (var_1_100 ? (var_1_60 == ((signed char) var_1_19)) : (var_1_60 == ((signed char) var_1_30)))) && ((var_1_95 <= var_1_13) ? (var_1_61 == ((signed char) (min (var_1_25 , -2)))) : ((var_1_64 < var_1_25) ? (var_1_61 == ((signed char) var_1_19)) : 1))) && (var_1_62 == ((signed char) (max (var_1_30 , ((var_1_63 - var_1_19) - 8)))))) && (var_1_64 == ((unsigned char) ((max (var_1_23 , var_1_25)) - var_1_22)))) && ((var_1_50 <= (var_1_25 * var_1_12)) ? ((! var_1_80) ? (var_1_65 == ((unsigned short int) (var_1_102 + (min (var_1_25 , var_1_56))))) : (var_1_65 == ((unsigned short int) var_1_12))) : (var_1_65 == ((unsigned short int) (var_1_45 - (min (var_1_56 , var_1_25))))))) && ((var_1_49 < 0.5) ? (var_1_66 == ((float) (min (var_1_29 , var_1_10)))) : (var_1_66 == ((float) (min ((max (var_1_5 , var_1_33)) , var_1_35)))))) && ((var_1_90 < ((var_1_13 * var_1_95) / 1)) ? (((max ((var_1_66 + 1.2f) , var_1_32)) > ((var_1_34 + 64.2f) + var_1_33)) ? (var_1_67 == ((signed char) ((var_1_30 + (var_1_19 - 16)) - var_1_63))) : (var_1_67 == ((signed char) (var_1_63 - ((var_1_19 - var_1_30) + var_1_20))))) : (var_1_67 == ((signed char) ((max (var_1_18 , var_1_20)) - (min (var_1_30 , (var_1_19 + 4)))))))) && (((-1 / var_1_19) > (var_1_20 - last_1_var_1_70)) ? ((var_1_80 || (var_1_15 == var_1_30)) ? (var_1_70 == ((signed long int) (max (5 , (var_1_21 + var_1_25))))) : (var_1_70 == ((signed long int) (10 - var_1_57)))) : (var_1_70 == ((signed long int) (min (var_1_50 , -32)))))) && (var_1_42 ? (var_1_71 == ((unsigned short int) last_1_var_1_71)) : 1)) && ((((var_1_56 + var_1_50) + 4) == (var_1_9 * var_1_46)) ? (var_1_72 == ((unsigned char) ((var_1_101 && var_1_80) || var_1_73))) : (var_1_72 == ((unsigned char) (var_1_42 && var_1_43))))) && (var_1_74 == ((signed char) (var_1_30 + var_1_19)))) && (((var_1_103 + (- var_1_95)) < var_1_88) ? (var_1_75 == ((unsigned short int) (var_1_103 + var_1_65))) : (var_1_75 == ((unsigned short int) (max (((min (var_1_13 , var_1_103)) + 10) , var_1_24)))))) && ((var_1_30 <= var_1_36) ? (var_1_76 == ((unsigned char) (var_1_72 && var_1_43))) : (((var_1_39 > (3988876102u - var_1_22)) || (var_1_19 >= (var_1_14 + var_1_103))) ? ((! var_1_43) ? (var_1_76 == ((unsigned char) (var_1_73 && ((! var_1_42) && var_1_77)))) : (var_1_76 == ((unsigned char) var_1_73))) : ((((var_1_78 - var_1_30) ^ var_1_95) >= ((var_1_88 + var_1_7) | var_1_75)) ? (var_1_76 == ((unsigned char) (var_1_73 && var_1_77))) : 1)))) && ((var_1_42 || (32u <= var_1_23)) ? (var_1_79 == ((unsigned char) (min ((var_1_19 + (var_1_30 + var_1_20)) , var_1_24)))) : (var_1_101 ? (var_1_79 == ((unsigned char) (min (var_1_30 , (var_1_63 + (var_1_26 - var_1_19)))))) : (var_1_79 == ((unsigned char) (var_1_18 + (var_1_19 + var_1_20))))))) && (last_1_var_1_100 ? (var_1_80 == ((unsigned char) (var_1_43 || var_1_81))) : ((var_1_43 || var_1_42) ? (var_1_80 == ((unsigned char) ((last_1_var_1_74 <= var_1_30) && (! var_1_73)))) : ((((var_1_83 - var_1_33) - var_1_84) != last_1_var_1_47) ? (var_1_80 == ((unsigned char) ((last_1_var_1_101 && (! var_1_73)) || var_1_77))) : 1)))) && ((var_1_50 > 4) ? ((var_1_71 < var_1_19) ? (var_1_85 == ((float) 15.25f)) : 1) : (var_1_85 == ((float) ((var_1_4 - (var_1_33 + var_1_87)) + 0.5f))))) && ((((last_1_var_1_36 * var_1_63) / var_1_26) != (last_1_var_1_59 - var_1_20)) ? (var_1_88 == ((unsigned long int) (min ((min (last_1_var_1_88 , var_1_23)) , (min (var_1_45 , var_1_13)))))) : (var_1_88 == ((unsigned long int) (max ((var_1_38 - (var_1_19 + last_1_var_1_95)) , var_1_56)))))) && ((((var_1_50 * var_1_40) >= var_1_75) && var_1_81) ? (var_1_89 == ((signed short int) (max (var_1_88 , last_1_var_1_89)))) : 1)) && ((! var_1_93) ? (var_1_81 ? (var_1_90 == ((unsigned short int) var_1_18)) : (var_1_77 ? (var_1_90 == ((unsigned short int) (min ((var_1_45 - var_1_14) , (var_1_91 - var_1_26))))) : (var_1_90 == ((unsigned short int) (min ((var_1_91 - var_1_56) , var_1_18)))))) : 1)) && ((((var_1_5 + var_1_49) * var_1_29) > var_1_48) ? (((var_1_36 + var_1_46) >= var_1_46) ? ((var_1_45 > (var_1_95 + var_1_18)) ? (var_1_92 == ((float) ((abs (var_1_33 + var_1_31)) + var_1_6))) : (var_1_92 == ((float) (var_1_6 + (var_1_33 - var_1_87))))) : (var_1_92 == ((float) var_1_29))) : (var_1_77 ? (var_1_92 == ((float) (var_1_35 + var_1_33))) : 1))) && ((var_1_78 > var_1_56) ? (var_1_93 == ((unsigned char) (! var_1_81))) : (var_1_93 == ((unsigned char) (var_1_77 || var_1_73))))) && (var_1_76 ? (var_1_94 == ((float) 4.25f)) : (var_1_94 == ((float) 1.2f)))) && (var_1_95 == ((unsigned long int) var_1_19))) && (var_1_41 ? (var_1_96 == ((double) 10.7)) : 1)) && (var_1_42 ? (var_1_97 == ((signed char) var_1_30)) : (var_1_97 == ((signed char) var_1_18)))) && (var_1_98 == ((signed short int) var_1_50))) && (var_1_77 ? (var_1_99 == ((double) var_1_5)) : 1)) && (var_1_100 == ((unsigned char) var_1_42))) && (var_1_101 == ((unsigned char) var_1_42))) && (var_1_77 ? (var_1_102 == ((unsigned short int) var_1_20)) : 1)) && ((1u > (- var_1_18)) ? (var_1_103 == ((signed short int) (max (var_1_36 , ((var_1_22 - var_1_50) + last_1_var_1_103))))) : ((var_1_64 < var_1_95) ? (var_1_103 == ((signed short int) var_1_20)) : (var_1_103 == ((signed short int) var_1_36))))
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
