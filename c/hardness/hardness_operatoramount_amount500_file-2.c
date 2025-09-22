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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2Amount500.c", 13, "reach_error"); }
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
double var_1_1 = -0.5;
double var_1_3 = 64.84;
double var_1_4 = 2.2;
double var_1_5 = 31.875;
signed char var_1_8 = -50;
signed char var_1_9 = 8;
signed char var_1_10 = 16;
unsigned short int var_1_11 = 4;
unsigned short int var_1_12 = 34431;
float var_1_13 = 9999999999999.9;
float var_1_14 = 4.5;
float var_1_15 = 5.9;
float var_1_16 = 5.2;
float var_1_17 = 0.0;
float var_1_18 = 4.125;
float var_1_19 = 4.8;
signed long int var_1_20 = 4;
signed char var_1_21 = 64;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
double var_1_27 = 2.4;
double var_1_28 = 50.5;
double var_1_29 = 24.5;
double var_1_30 = 3.2;
signed char var_1_31 = 64;
signed char var_1_32 = 5;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 32;
unsigned char var_1_37 = 2;
unsigned short int var_1_38 = 4;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 64;
signed short int var_1_41 = 8;
signed long int var_1_42 = 10;
unsigned long int var_1_43 = 64;
unsigned long int var_1_44 = 2869845888;
unsigned short int var_1_45 = 5;
double var_1_46 = 0.625;
signed short int var_1_48 = 128;
signed short int var_1_49 = 10000;
signed short int var_1_50 = 10000;
unsigned char var_1_51 = 1;
unsigned short int var_1_53 = 25;
unsigned short int var_1_54 = 21701;
unsigned short int var_1_55 = 28456;
unsigned short int var_1_56 = 27932;
signed short int var_1_57 = 32;
float var_1_58 = 255.45;
signed char var_1_59 = -1;
signed short int var_1_60 = 0;
signed short int var_1_61 = 8;
unsigned long int var_1_62 = 256;
unsigned long int var_1_63 = 3325580668;
unsigned long int var_1_64 = 2701085355;
unsigned long int var_1_65 = 1594207647;
signed long int var_1_66 = -200;
signed long int var_1_67 = 8;
unsigned long int var_1_68 = 0;
unsigned long int var_1_69 = 1976076145;
unsigned long int var_1_70 = 1000000000;
double var_1_71 = 127.375;
unsigned short int var_1_72 = 1;
double var_1_73 = 1000000000000.5;
double var_1_74 = 0.0;
unsigned char var_1_75 = 8;
unsigned char var_1_76 = 200;
signed short int var_1_77 = -128;
signed short int var_1_78 = 10000;
signed char var_1_79 = 64;
float var_1_80 = 16.4;
signed short int var_1_81 = -16;
unsigned short int var_1_82 = 4;
unsigned long int var_1_83 = 1;
unsigned long int var_1_84 = 10;
signed short int var_1_85 = -5;
float var_1_87 = 31.6;
double var_1_88 = 64.25;
signed short int var_1_89 = 2;
unsigned char var_1_90 = 0;
unsigned char var_1_91 = 0;
double var_1_92 = 8.7;
float var_1_93 = 4.75;
float var_1_94 = 255.375;
unsigned long int var_1_95 = 16;
unsigned short int var_1_96 = 1;
double var_1_97 = 127.25;
double var_1_98 = 99999999999.8;
double var_1_99 = 0.625;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = -0.5;
unsigned char last_1_var_1_23 = 1;
unsigned char last_1_var_1_33 = 1;
unsigned char last_1_var_1_34 = 1;
signed long int last_1_var_1_42 = 10;
double last_1_var_1_46 = 0.625;
signed short int last_1_var_1_48 = 128;
unsigned char last_1_var_1_51 = 1;
unsigned short int last_1_var_1_53 = 25;
signed char last_1_var_1_59 = -1;
unsigned long int last_1_var_1_62 = 256;
unsigned short int last_1_var_1_82 = 4;
unsigned char last_1_var_1_91 = 0;
unsigned short int last_1_var_1_96 = 1;
double last_1_var_1_99 = 0.625;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req19Batch2Amount500
	signed char stepLocal_10 = var_1_10;
	if (last_1_var_1_91) {
		if (var_1_4 < (var_1_17 * (0.28 + last_1_var_1_1))) {
			var_1_53 = (max (var_1_39 , var_1_50));
		} else {
			var_1_53 = ((62232 - var_1_50) - var_1_39);
		}
	} else {
		if ((max (last_1_var_1_42 , (var_1_9 * last_1_var_1_53))) > stepLocal_10) {
			var_1_53 = ((var_1_54 + var_1_55) - (var_1_56 - var_1_10));
		} else {
			var_1_53 = ((max (var_1_12 , 64694)) - var_1_49);
		}
	}


	// From: Req20Batch2Amount500
	unsigned char stepLocal_11 = var_1_40;
	if (var_1_32 > stepLocal_11) {
		var_1_57 = var_1_50;
	} else {
		var_1_57 = (max (var_1_40 , var_1_53));
	}


	// From: Req5Batch2Amount500
	signed long int stepLocal_4 = (var_1_9 / var_1_21) + var_1_10;
	signed char stepLocal_3 = var_1_21;
	unsigned char stepLocal_2 = last_1_var_1_51;
	unsigned char stepLocal_1 = last_1_var_1_51;
	if (last_1_var_1_91 && stepLocal_2) {
		if (stepLocal_4 < ((var_1_12 + last_1_var_1_96) - 128)) {
			var_1_20 = (min ((last_1_var_1_96 - var_1_10) , var_1_9));
		} else {
			if ((last_1_var_1_82 ^ last_1_var_1_96) > stepLocal_3) {
				if (stepLocal_1 || (var_1_19 <= last_1_var_1_46)) {
					var_1_20 = var_1_12;
				}
			} else {
				if (last_1_var_1_23) {
					var_1_20 = (max ((abs (var_1_10)) , var_1_12));
				} else {
					var_1_20 = (((abs (16)) + 256) - (max (0 , last_1_var_1_96)));
				}
			}
		}
	}


	// From: Req10Batch2Amount500
	signed long int stepLocal_5 = max (var_1_10 , last_1_var_1_59);
	if (stepLocal_5 >= var_1_12) {
		var_1_34 = (var_1_24 || (! var_1_26));
	} else {
		var_1_34 = ((! var_1_24) && var_1_26);
	}


	// From: Req35Batch2Amount500
	unsigned long int stepLocal_23 = var_1_63;
	if (var_1_9 != stepLocal_23) {
		var_1_83 = (abs (var_1_84));
	} else {
		if (var_1_34) {
			var_1_83 = var_1_78;
		}
	}


	// From: Req18Batch2Amount500
	if ((- last_1_var_1_99) >= var_1_16) {
		var_1_51 = (last_1_var_1_33 && ((last_1_var_1_34 || last_1_var_1_33) && (last_1_var_1_34 && var_1_25)));
	}


	// From: Req6Batch2Amount500
	if (var_1_16 == var_1_3) {
		var_1_23 = ((var_1_51 && var_1_24) || var_1_25);
	} else {
		var_1_23 = var_1_26;
	}


	// From: Req3Batch2Amount500
	if (var_1_51) {
		var_1_11 = (var_1_12 - var_1_10);
	}


	// From: Req38Batch2Amount500
	if (var_1_51) {
		var_1_88 = var_1_3;
	} else {
		var_1_88 = var_1_4;
	}


	// From: Req2Batch2Amount500
	var_1_8 = ((var_1_9 - var_1_10) + -2);


	// From: Req4Batch2Amount500
	if (var_1_51) {
		var_1_13 = (((min (var_1_14 , var_1_15)) + var_1_16) - ((var_1_17 + 3.2738342843526195E18f) - (var_1_18 + var_1_19)));
	} else {
		var_1_13 = (min ((var_1_16 - (var_1_14 + var_1_19)) , (abs (var_1_18 - var_1_17))));
	}


	// From: Req13Batch2Amount500
	if (var_1_25) {
		if (var_1_26) {
			var_1_41 = (min ((min ((var_1_39 + -1) , var_1_9)) , (min (var_1_38 , var_1_21))));
		}
	} else {
		var_1_41 = (var_1_39 + var_1_10);
	}


	// From: Req17Batch2Amount500
	if (var_1_5 <= (- var_1_17)) {
		if ((last_1_var_1_48 / var_1_21) > last_1_var_1_48) {
			var_1_48 = (((var_1_49 + var_1_50) - (max (var_1_38 , var_1_40))) - var_1_9);
		}
	} else {
		var_1_48 = (abs (var_1_53));
	}


	// From: Req29Batch2Amount500
	unsigned short int stepLocal_21 = var_1_72;
	unsigned short int stepLocal_20 = var_1_38;
	if (((~ var_1_38) + var_1_40) >= stepLocal_21) {
		if (var_1_40 <= stepLocal_20) {
			var_1_76 = (abs (max (var_1_39 , var_1_38)));
		}
	} else {
		var_1_76 = (min (var_1_38 , (min (var_1_10 , (128 - var_1_36)))));
	}


	// From: Req31Batch2Amount500
	unsigned char stepLocal_22 = var_1_34;
	if ((1 < 64) || stepLocal_22) {
		var_1_79 = (var_1_36 + var_1_10);
	} else {
		var_1_79 = (max ((abs (var_1_36 - var_1_10)) , (2 + var_1_9)));
	}


	// From: Req37Batch2Amount500
	if (var_1_26) {
		var_1_87 = var_1_14;
	}


	// From: Req40Batch2Amount500
	var_1_90 = var_1_10;


	// From: Req41Batch2Amount500
	var_1_91 = var_1_24;


	// From: Req42Batch2Amount500
	if (var_1_24) {
		var_1_92 = var_1_73;
	} else {
		var_1_92 = var_1_29;
	}


	// From: Req43Batch2Amount500
	if (var_1_26) {
		var_1_93 = var_1_73;
	} else {
		var_1_93 = var_1_17;
	}


	// From: Req46Batch2Amount500
	if (var_1_91) {
		var_1_96 = var_1_55;
	} else {
		var_1_96 = var_1_10;
	}


	// From: Req23Batch2Amount500
	var_1_61 = (min (((var_1_40 - var_1_10) + var_1_49) , (var_1_36 + (var_1_57 + -16))));


	// From: Req27Batch2Amount500
	signed long int stepLocal_19 = var_1_61 / var_1_72;
	unsigned char stepLocal_18 = var_1_34;
	if (var_1_91 || stepLocal_18) {
		var_1_71 = (((var_1_19 + var_1_18) - var_1_16) + var_1_28);
	} else {
		if (stepLocal_19 < (var_1_54 & var_1_20)) {
			var_1_71 = ((var_1_19 + var_1_18) + (var_1_73 - var_1_15));
		} else {
			var_1_71 = (abs ((var_1_74 - var_1_18) - (max (var_1_4 , var_1_3))));
		}
	}


	// From: Req16Batch2Amount500
	signed short int stepLocal_9 = var_1_61;
	if (var_1_21 >= stepLocal_9) {
		var_1_46 = (var_1_17 - (var_1_16 + var_1_19));
	} else {
		var_1_46 = var_1_29;
	}


	// From: Req25Batch2Amount500
	unsigned char stepLocal_17 = var_1_51;
	if (stepLocal_17 && var_1_91) {
		var_1_66 = (max (var_1_20 , var_1_67));
	} else {
		var_1_66 = (var_1_20 + (max (var_1_56 , var_1_83)));
	}


	// From: Req7Batch2Amount500
	if (127.6f >= (var_1_4 + var_1_14)) {
		var_1_27 = (var_1_18 + ((max (var_1_19 , var_1_28)) + (var_1_29 + var_1_30)));
	} else {
		if (var_1_14 <= var_1_71) {
			if (var_1_15 <= (var_1_3 + var_1_87)) {
				var_1_27 = (var_1_28 + var_1_15);
			} else {
				var_1_27 = (var_1_19 - 16.5);
			}
		}
	}


	// From: Req11Batch2Amount500
	if (var_1_91 && (var_1_8 >= var_1_10)) {
		if ((var_1_16 * var_1_3) >= var_1_92) {
			var_1_35 = (var_1_10 + (var_1_9 + var_1_36));
		} else {
			var_1_35 = (max (var_1_10 , var_1_36));
		}
	}


	// From: Req39Batch2Amount500
	if (var_1_91) {
		var_1_89 = var_1_21;
	} else {
		var_1_89 = var_1_39;
	}


	// From: Req45Batch2Amount500
	if (var_1_91) {
		var_1_95 = var_1_96;
	} else {
		var_1_95 = 8u;
	}


	// From: Req9Batch2Amount500
	if (var_1_3 <= ((var_1_5 * var_1_29) * var_1_28)) {
		var_1_33 = (! (var_1_24 || var_1_25));
	} else {
		if (var_1_71 == (var_1_19 / var_1_17)) {
			var_1_33 = ((var_1_14 != var_1_30) && var_1_24);
		} else {
			var_1_33 = var_1_26;
		}
	}


	// From: Req1Batch2Amount500
	unsigned char stepLocal_0 = var_1_23;
	if (var_1_23) {
		var_1_1 = (min ((var_1_3 - var_1_4) , var_1_5));
	} else {
		if (stepLocal_0 && var_1_33) {
			var_1_1 = (var_1_4 - var_1_3);
		}
	}


	// From: Req24Batch2Amount500
	unsigned char stepLocal_16 = var_1_51;
	unsigned char stepLocal_15 = var_1_51;
	unsigned char stepLocal_14 = (~ var_1_50) < var_1_89;
	signed short int stepLocal_13 = var_1_60;
	if (var_1_28 >= (var_1_30 * 256.75)) {
		if (stepLocal_13 <= ((var_1_21 * var_1_10) ^ var_1_20)) {
			var_1_62 = ((max (var_1_63 , var_1_64)) - var_1_89);
		} else {
			if (stepLocal_15 && (0.7 > var_1_4)) {
				var_1_62 = (max (var_1_38 , (var_1_55 + (var_1_65 - var_1_83))));
			}
		}
	} else {
		if (((var_1_4 - 9.5f) <= var_1_15) || stepLocal_16) {
			if (stepLocal_14 || (var_1_63 > last_1_var_1_62)) {
				var_1_62 = (var_1_63 - (max ((var_1_65 - var_1_38) , var_1_12)));
			} else {
				var_1_62 = (var_1_63 - var_1_54);
			}
		}
	}


	// From: Req21Batch2Amount500
	if (var_1_66 >= (var_1_83 + var_1_44)) {
		var_1_58 = (var_1_19 + ((min (var_1_14 , var_1_16)) - var_1_17));
	} else {
		if (var_1_88 < var_1_5) {
			var_1_58 = (var_1_18 + (var_1_14 - var_1_15));
		} else {
			if (((var_1_44 - var_1_83) >> var_1_38) <= var_1_54) {
				var_1_58 = ((abs (var_1_28)) - var_1_18);
			} else {
				var_1_58 = (min ((var_1_16 - var_1_14) , (min (var_1_15 , (var_1_18 - var_1_4)))));
			}
		}
	}


	// From: Req28Batch2Amount500
	if (var_1_11 != ((var_1_38 << var_1_10) * var_1_9)) {
		var_1_75 = (min (var_1_36 , var_1_9));
	} else {
		if (64 <= var_1_95) {
			var_1_75 = (min (var_1_39 , (var_1_36 + (var_1_38 + var_1_9))));
		}
	}


	// From: Req33Batch2Amount500
	var_1_81 = (abs (max (var_1_39 , var_1_75)));


	// From: Req48Batch2Amount500
	if (! ((var_1_43 + var_1_50) > var_1_69)) {
		if (var_1_33 && var_1_51) {
			var_1_99 = ((min (10.375 , var_1_17)) - var_1_3);
		} else {
			var_1_99 = var_1_98;
		}
	} else {
		var_1_99 = var_1_98;
	}


	// From: Req12Batch2Amount500
	signed char stepLocal_6 = var_1_32;
	if ((var_1_12 >> var_1_38) <= stepLocal_6) {
		if (var_1_99 == (var_1_18 - var_1_14)) {
			if (! (var_1_14 <= var_1_18)) {
				if ((var_1_3 * (var_1_30 + var_1_46)) == ((var_1_5 + var_1_14) / var_1_17)) {
					var_1_37 = (min ((var_1_39 - 64) , 0));
				}
			} else {
				var_1_37 = (var_1_9 + var_1_38);
			}
		} else {
			var_1_37 = (max (((var_1_40 - var_1_10) + var_1_36) , var_1_38));
		}
	} else {
		var_1_37 = (var_1_40 + var_1_38);
	}


	// From: Req30Batch2Amount500
	if (var_1_18 > var_1_4) {
		var_1_77 = ((min (var_1_20 , var_1_75)) + var_1_21);
	} else {
		if (var_1_46 != ((abs (var_1_18)) * var_1_29)) {
			var_1_77 = (var_1_75 - ((var_1_78 - var_1_83) + (var_1_50 - var_1_62)));
		}
	}


	// From: Req44Batch2Amount500
	if (var_1_33) {
		var_1_94 = var_1_28;
	} else {
		var_1_94 = var_1_29;
	}


	// From: Req47Batch2Amount500
	if (var_1_33) {
		var_1_97 = var_1_29;
	} else {
		var_1_97 = var_1_98;
	}


	// From: Req26Batch2Amount500
	if ((min (var_1_95 , var_1_55)) >= var_1_21) {
		if (var_1_83 > (var_1_65 / (min (16 , -256)))) {
			var_1_68 = (var_1_64 - var_1_54);
		} else {
			if ((var_1_65 / (min (var_1_40 , 200u))) > var_1_36) {
				var_1_68 = (abs (var_1_62));
			} else {
				var_1_68 = var_1_55;
			}
		}
	} else {
		var_1_68 = (var_1_64 - ((max (var_1_65 , var_1_69)) - (var_1_70 - var_1_12)));
	}


	// From: Req34Batch2Amount500
	if (var_1_16 > var_1_4) {
		var_1_82 = (var_1_36 + (min (var_1_9 , var_1_57)));
	} else {
		if ((max (var_1_38 , var_1_63)) != (var_1_61 * var_1_68)) {
			var_1_82 = (var_1_12 - var_1_78);
		}
	}


	// From: Req36Batch2Amount500
	unsigned char stepLocal_24 = var_1_23;
	if (var_1_34 && stepLocal_24) {
		if (var_1_34) {
			var_1_85 = var_1_68;
		} else {
			var_1_85 = var_1_10;
		}
	}


	// From: Req15Batch2Amount500
	if (var_1_21 < var_1_32) {
		var_1_45 = (((abs (var_1_38)) + var_1_53) + var_1_81);
	} else {
		var_1_45 = var_1_40;
	}


	// From: Req22Batch2Amount500
	unsigned long int stepLocal_12 = var_1_62 + var_1_45;
	if (((max (var_1_55 , var_1_60)) - 200) < stepLocal_12) {
		if ((var_1_14 - var_1_19) <= (var_1_29 * (var_1_58 + var_1_18))) {
			var_1_59 = (var_1_10 + (abs (var_1_36)));
		} else {
			var_1_59 = (var_1_9 + (var_1_36 - (abs (var_1_38))));
		}
	}


	// From: Req8Batch2Amount500
	if (((var_1_10 - var_1_9) / (max (var_1_21 , var_1_32))) > var_1_82) {
		var_1_31 = (var_1_10 - var_1_9);
	}


	// From: Req14Batch2Amount500
	unsigned char stepLocal_8 = var_1_34;
	unsigned long int stepLocal_7 = var_1_10 / var_1_43;
	if (stepLocal_7 == ((min (var_1_44 , 2174276204u)) - var_1_38)) {
		if (var_1_26) {
			var_1_42 = ((min ((var_1_12 + var_1_10) , 5)) + var_1_53);
		} else {
			if (stepLocal_8 && var_1_25) {
				var_1_42 = (abs ((max (var_1_12 , var_1_20)) - var_1_40));
			} else {
				var_1_42 = (min ((min (var_1_38 , (max (last_1_var_1_42 , var_1_20)))) , var_1_85));
			}
		}
	} else {
		if (var_1_91) {
			var_1_42 = (var_1_12 + (var_1_20 + var_1_53));
		} else {
			var_1_42 = (var_1_39 - (min (var_1_36 , 128)));
		}
	}


	// From: Req32Batch2Amount500
	if (var_1_26 && var_1_24) {
		if (var_1_64 == (var_1_63 * var_1_49)) {
			if (var_1_78 > ((var_1_36 - var_1_50) + var_1_42)) {
				var_1_80 = var_1_15;
			} else {
				var_1_80 = ((7.139593351128289E18f - (min (var_1_18 , var_1_16))) - ((max (var_1_19 , var_1_17)) + var_1_73));
			}
		} else {
			var_1_80 = ((var_1_15 + var_1_73) - var_1_17);
		}
	} else {
		var_1_80 = (max (var_1_29 , var_1_5));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 63);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 32767);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 2305843.009213691400e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691400e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= -128);
	assume_abort_if_not(var_1_21 <= 127);
	assume_abort_if_not(var_1_21 != 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -115292.1504606845700e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 1152921.504606845700e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -115292.1504606845700e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 1152921.504606845700e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -128);
	assume_abort_if_not(var_1_32 <= 127);
	assume_abort_if_not(var_1_32 != 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 63);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 1);
	assume_abort_if_not(var_1_38 <= 15);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 127);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 63);
	assume_abort_if_not(var_1_40 <= 127);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 4294967295);
	assume_abort_if_not(var_1_43 != 0);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 2147483647);
	assume_abort_if_not(var_1_44 <= 4294967295);
	var_1_49 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_49 >= 8191);
	assume_abort_if_not(var_1_49 <= 16383);
	var_1_50 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_50 >= 8191);
	assume_abort_if_not(var_1_50 <= 16383);
	var_1_54 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_54 >= 16383);
	assume_abort_if_not(var_1_54 <= 32767);
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 16384);
	assume_abort_if_not(var_1_55 <= 32767);
	var_1_56 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_56 >= 16383);
	assume_abort_if_not(var_1_56 <= 32767);
	var_1_60 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_60 >= -1);
	assume_abort_if_not(var_1_60 <= 32767);
	var_1_63 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_63 >= 2147483647);
	assume_abort_if_not(var_1_63 <= 4294967294);
	var_1_64 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_64 >= 2147483647);
	assume_abort_if_not(var_1_64 <= 4294967294);
	var_1_65 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_65 >= 1073741823);
	assume_abort_if_not(var_1_65 <= 2147483647);
	var_1_67 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_67 >= -2147483647);
	assume_abort_if_not(var_1_67 <= 2147483646);
	var_1_69 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_69 >= 1073741823);
	assume_abort_if_not(var_1_69 <= 2147483647);
	var_1_70 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_70 >= 536870911);
	assume_abort_if_not(var_1_70 <= 1073741823);
	var_1_72 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_72 >= 0);
	assume_abort_if_not(var_1_72 <= 65535);
	assume_abort_if_not(var_1_72 != 0);
	var_1_73 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_73 >= 0.0F && var_1_73 <= -1.0e-20F) || (var_1_73 <= 4611686.018427383000e+12F && var_1_73 >= 1.0e-20F ));
	var_1_74 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_74 >= 4611686.018427383000e+12F && var_1_74 <= -1.0e-20F) || (var_1_74 <= 9223372.036854766000e+12F && var_1_74 >= 1.0e-20F ));
	var_1_78 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_78 >= 8191);
	assume_abort_if_not(var_1_78 <= 16383);
	var_1_84 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_84 >= 0);
	assume_abort_if_not(var_1_84 <= 4294967294);
	var_1_98 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_98 >= -922337.2036854766000e+13F && var_1_98 <= -1.0e-20F) || (var_1_98 <= 9223372.036854766000e+12F && var_1_98 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_23 = var_1_23;
	last_1_var_1_33 = var_1_33;
	last_1_var_1_34 = var_1_34;
	last_1_var_1_42 = var_1_42;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_48 = var_1_48;
	last_1_var_1_51 = var_1_51;
	last_1_var_1_53 = var_1_53;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_62 = var_1_62;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_91 = var_1_91;
	last_1_var_1_96 = var_1_96;
	last_1_var_1_99 = var_1_99;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((var_1_23 ? (var_1_1 == ((double) (min ((var_1_3 - var_1_4) , var_1_5)))) : ((var_1_23 && var_1_33) ? (var_1_1 == ((double) (var_1_4 - var_1_3))) : 1)) && (var_1_8 == ((signed char) ((var_1_9 - var_1_10) + -2)))) && (var_1_51 ? (var_1_11 == ((unsigned short int) (var_1_12 - var_1_10))) : 1)) && (var_1_51 ? (var_1_13 == ((float) (((min (var_1_14 , var_1_15)) + var_1_16) - ((var_1_17 + 3.2738342843526195E18f) - (var_1_18 + var_1_19))))) : (var_1_13 == ((float) (min ((var_1_16 - (var_1_14 + var_1_19)) , (abs (var_1_18 - var_1_17)))))))) && ((last_1_var_1_91 && last_1_var_1_51) ? ((((var_1_9 / var_1_21) + var_1_10) < ((var_1_12 + last_1_var_1_96) - 128)) ? (var_1_20 == ((signed long int) (min ((last_1_var_1_96 - var_1_10) , var_1_9)))) : (((last_1_var_1_82 ^ last_1_var_1_96) > var_1_21) ? ((last_1_var_1_51 || (var_1_19 <= last_1_var_1_46)) ? (var_1_20 == ((signed long int) var_1_12)) : 1) : (last_1_var_1_23 ? (var_1_20 == ((signed long int) (max ((abs (var_1_10)) , var_1_12)))) : (var_1_20 == ((signed long int) (((abs (16)) + 256) - (max (0 , last_1_var_1_96)))))))) : 1)) && ((var_1_16 == var_1_3) ? (var_1_23 == ((unsigned char) ((var_1_51 && var_1_24) || var_1_25))) : (var_1_23 == ((unsigned char) var_1_26)))) && ((127.6f >= (var_1_4 + var_1_14)) ? (var_1_27 == ((double) (var_1_18 + ((max (var_1_19 , var_1_28)) + (var_1_29 + var_1_30))))) : ((var_1_14 <= var_1_71) ? ((var_1_15 <= (var_1_3 + var_1_87)) ? (var_1_27 == ((double) (var_1_28 + var_1_15))) : (var_1_27 == ((double) (var_1_19 - 16.5)))) : 1))) && ((((var_1_10 - var_1_9) / (max (var_1_21 , var_1_32))) > var_1_82) ? (var_1_31 == ((signed char) (var_1_10 - var_1_9))) : 1)) && ((var_1_3 <= ((var_1_5 * var_1_29) * var_1_28)) ? (var_1_33 == ((unsigned char) (! (var_1_24 || var_1_25)))) : ((var_1_71 == (var_1_19 / var_1_17)) ? (var_1_33 == ((unsigned char) ((var_1_14 != var_1_30) && var_1_24))) : (var_1_33 == ((unsigned char) var_1_26))))) && (((max (var_1_10 , last_1_var_1_59)) >= var_1_12) ? (var_1_34 == ((unsigned char) (var_1_24 || (! var_1_26)))) : (var_1_34 == ((unsigned char) ((! var_1_24) && var_1_26))))) && ((var_1_91 && (var_1_8 >= var_1_10)) ? (((var_1_16 * var_1_3) >= var_1_92) ? (var_1_35 == ((unsigned char) (var_1_10 + (var_1_9 + var_1_36)))) : (var_1_35 == ((unsigned char) (max (var_1_10 , var_1_36))))) : 1)) && (((var_1_12 >> var_1_38) <= var_1_32) ? ((var_1_99 == (var_1_18 - var_1_14)) ? ((! (var_1_14 <= var_1_18)) ? (((var_1_3 * (var_1_30 + var_1_46)) == ((var_1_5 + var_1_14) / var_1_17)) ? (var_1_37 == ((unsigned char) (min ((var_1_39 - 64) , 0)))) : 1) : (var_1_37 == ((unsigned char) (var_1_9 + var_1_38)))) : (var_1_37 == ((unsigned char) (max (((var_1_40 - var_1_10) + var_1_36) , var_1_38))))) : (var_1_37 == ((unsigned char) (var_1_40 + var_1_38))))) && (var_1_25 ? (var_1_26 ? (var_1_41 == ((signed short int) (min ((min ((var_1_39 + -1) , var_1_9)) , (min (var_1_38 , var_1_21)))))) : 1) : (var_1_41 == ((signed short int) (var_1_39 + var_1_10))))) && (((var_1_10 / var_1_43) == ((min (var_1_44 , 2174276204u)) - var_1_38)) ? (var_1_26 ? (var_1_42 == ((signed long int) ((min ((var_1_12 + var_1_10) , 5)) + var_1_53))) : ((var_1_34 && var_1_25) ? (var_1_42 == ((signed long int) (abs ((max (var_1_12 , var_1_20)) - var_1_40)))) : (var_1_42 == ((signed long int) (min ((min (var_1_38 , (max (last_1_var_1_42 , var_1_20)))) , var_1_85)))))) : (var_1_91 ? (var_1_42 == ((signed long int) (var_1_12 + (var_1_20 + var_1_53)))) : (var_1_42 == ((signed long int) (var_1_39 - (min (var_1_36 , 128)))))))) && ((var_1_21 < var_1_32) ? (var_1_45 == ((unsigned short int) (((abs (var_1_38)) + var_1_53) + var_1_81))) : (var_1_45 == ((unsigned short int) var_1_40)))) && ((var_1_21 >= var_1_61) ? (var_1_46 == ((double) (var_1_17 - (var_1_16 + var_1_19)))) : (var_1_46 == ((double) var_1_29)))) && ((var_1_5 <= (- var_1_17)) ? (((last_1_var_1_48 / var_1_21) > last_1_var_1_48) ? (var_1_48 == ((signed short int) (((var_1_49 + var_1_50) - (max (var_1_38 , var_1_40))) - var_1_9))) : 1) : (var_1_48 == ((signed short int) (abs (var_1_53)))))) && (((- last_1_var_1_99) >= var_1_16) ? (var_1_51 == ((unsigned char) (last_1_var_1_33 && ((last_1_var_1_34 || last_1_var_1_33) && (last_1_var_1_34 && var_1_25))))) : 1)) && (last_1_var_1_91 ? ((var_1_4 < (var_1_17 * (0.28 + last_1_var_1_1))) ? (var_1_53 == ((unsigned short int) (max (var_1_39 , var_1_50)))) : (var_1_53 == ((unsigned short int) ((62232 - var_1_50) - var_1_39)))) : (((max (last_1_var_1_42 , (var_1_9 * last_1_var_1_53))) > var_1_10) ? (var_1_53 == ((unsigned short int) ((var_1_54 + var_1_55) - (var_1_56 - var_1_10)))) : (var_1_53 == ((unsigned short int) ((max (var_1_12 , 64694)) - var_1_49)))))) && ((var_1_32 > var_1_40) ? (var_1_57 == ((signed short int) var_1_50)) : (var_1_57 == ((signed short int) (max (var_1_40 , var_1_53)))))) && ((var_1_66 >= (var_1_83 + var_1_44)) ? (var_1_58 == ((float) (var_1_19 + ((min (var_1_14 , var_1_16)) - var_1_17)))) : ((var_1_88 < var_1_5) ? (var_1_58 == ((float) (var_1_18 + (var_1_14 - var_1_15)))) : ((((var_1_44 - var_1_83) >> var_1_38) <= var_1_54) ? (var_1_58 == ((float) ((abs (var_1_28)) - var_1_18))) : (var_1_58 == ((float) (min ((var_1_16 - var_1_14) , (min (var_1_15 , (var_1_18 - var_1_4))))))))))) && ((((max (var_1_55 , var_1_60)) - 200) < (var_1_62 + var_1_45)) ? (((var_1_14 - var_1_19) <= (var_1_29 * (var_1_58 + var_1_18))) ? (var_1_59 == ((signed char) (var_1_10 + (abs (var_1_36))))) : (var_1_59 == ((signed char) (var_1_9 + (var_1_36 - (abs (var_1_38))))))) : 1)) && (var_1_61 == ((signed short int) (min (((var_1_40 - var_1_10) + var_1_49) , (var_1_36 + (var_1_57 + -16))))))) && ((var_1_28 >= (var_1_30 * 256.75)) ? ((var_1_60 <= ((var_1_21 * var_1_10) ^ var_1_20)) ? (var_1_62 == ((unsigned long int) ((max (var_1_63 , var_1_64)) - var_1_89))) : ((var_1_51 && (0.7 > var_1_4)) ? (var_1_62 == ((unsigned long int) (max (var_1_38 , (var_1_55 + (var_1_65 - var_1_83)))))) : 1)) : ((((var_1_4 - 9.5f) <= var_1_15) || var_1_51) ? ((((~ var_1_50) < var_1_89) || (var_1_63 > last_1_var_1_62)) ? (var_1_62 == ((unsigned long int) (var_1_63 - (max ((var_1_65 - var_1_38) , var_1_12))))) : (var_1_62 == ((unsigned long int) (var_1_63 - var_1_54)))) : 1))) && ((var_1_51 && var_1_91) ? (var_1_66 == ((signed long int) (max (var_1_20 , var_1_67)))) : (var_1_66 == ((signed long int) (var_1_20 + (max (var_1_56 , var_1_83))))))) && (((min (var_1_95 , var_1_55)) >= var_1_21) ? ((var_1_83 > (var_1_65 / (min (16 , -256)))) ? (var_1_68 == ((unsigned long int) (var_1_64 - var_1_54))) : (((var_1_65 / (min (var_1_40 , 200u))) > var_1_36) ? (var_1_68 == ((unsigned long int) (abs (var_1_62)))) : (var_1_68 == ((unsigned long int) var_1_55)))) : (var_1_68 == ((unsigned long int) (var_1_64 - ((max (var_1_65 , var_1_69)) - (var_1_70 - var_1_12))))))) && ((var_1_91 || var_1_34) ? (var_1_71 == ((double) (((var_1_19 + var_1_18) - var_1_16) + var_1_28))) : (((var_1_61 / var_1_72) < (var_1_54 & var_1_20)) ? (var_1_71 == ((double) ((var_1_19 + var_1_18) + (var_1_73 - var_1_15)))) : (var_1_71 == ((double) (abs ((var_1_74 - var_1_18) - (max (var_1_4 , var_1_3))))))))) && ((var_1_11 != ((var_1_38 << var_1_10) * var_1_9)) ? (var_1_75 == ((unsigned char) (min (var_1_36 , var_1_9)))) : ((64 <= var_1_95) ? (var_1_75 == ((unsigned char) (min (var_1_39 , (var_1_36 + (var_1_38 + var_1_9)))))) : 1))) && ((((~ var_1_38) + var_1_40) >= var_1_72) ? ((var_1_40 <= var_1_38) ? (var_1_76 == ((unsigned char) (abs (max (var_1_39 , var_1_38))))) : 1) : (var_1_76 == ((unsigned char) (min (var_1_38 , (min (var_1_10 , (128 - var_1_36))))))))) && ((var_1_18 > var_1_4) ? (var_1_77 == ((signed short int) ((min (var_1_20 , var_1_75)) + var_1_21))) : ((var_1_46 != ((abs (var_1_18)) * var_1_29)) ? (var_1_77 == ((signed short int) (var_1_75 - ((var_1_78 - var_1_83) + (var_1_50 - var_1_62))))) : 1))) && (((1 < 64) || var_1_34) ? (var_1_79 == ((signed char) (var_1_36 + var_1_10))) : (var_1_79 == ((signed char) (max ((abs (var_1_36 - var_1_10)) , (2 + var_1_9))))))) && ((var_1_26 && var_1_24) ? ((var_1_64 == (var_1_63 * var_1_49)) ? ((var_1_78 > ((var_1_36 - var_1_50) + var_1_42)) ? (var_1_80 == ((float) var_1_15)) : (var_1_80 == ((float) ((7.139593351128289E18f - (min (var_1_18 , var_1_16))) - ((max (var_1_19 , var_1_17)) + var_1_73))))) : (var_1_80 == ((float) ((var_1_15 + var_1_73) - var_1_17)))) : (var_1_80 == ((float) (max (var_1_29 , var_1_5)))))) && (var_1_81 == ((signed short int) (abs (max (var_1_39 , var_1_75)))))) && ((var_1_16 > var_1_4) ? (var_1_82 == ((unsigned short int) (var_1_36 + (min (var_1_9 , var_1_57))))) : (((max (var_1_38 , var_1_63)) != (var_1_61 * var_1_68)) ? (var_1_82 == ((unsigned short int) (var_1_12 - var_1_78))) : 1))) && ((var_1_9 != var_1_63) ? (var_1_83 == ((unsigned long int) (abs (var_1_84)))) : (var_1_34 ? (var_1_83 == ((unsigned long int) var_1_78)) : 1))) && ((var_1_34 && var_1_23) ? (var_1_34 ? (var_1_85 == ((signed short int) var_1_68)) : (var_1_85 == ((signed short int) var_1_10))) : 1)) && (var_1_26 ? (var_1_87 == ((float) var_1_14)) : 1)) && (var_1_51 ? (var_1_88 == ((double) var_1_3)) : (var_1_88 == ((double) var_1_4)))) && (var_1_91 ? (var_1_89 == ((signed short int) var_1_21)) : (var_1_89 == ((signed short int) var_1_39)))) && (var_1_90 == ((unsigned char) var_1_10))) && (var_1_91 == ((unsigned char) var_1_24))) && (var_1_24 ? (var_1_92 == ((double) var_1_73)) : (var_1_92 == ((double) var_1_29)))) && (var_1_26 ? (var_1_93 == ((float) var_1_73)) : (var_1_93 == ((float) var_1_17)))) && (var_1_33 ? (var_1_94 == ((float) var_1_28)) : (var_1_94 == ((float) var_1_29)))) && (var_1_91 ? (var_1_95 == ((unsigned long int) var_1_96)) : (var_1_95 == ((unsigned long int) 8u)))) && (var_1_91 ? (var_1_96 == ((unsigned short int) var_1_55)) : (var_1_96 == ((unsigned short int) var_1_10)))) && (var_1_33 ? (var_1_97 == ((double) var_1_29)) : (var_1_97 == ((double) var_1_98)))) && ((! ((var_1_43 + var_1_50) > var_1_69)) ? ((var_1_33 && var_1_51) ? (var_1_99 == ((double) ((min (10.375 , var_1_17)) - var_1_3))) : (var_1_99 == ((double) var_1_98))) : (var_1_99 == ((double) var_1_98)))
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
