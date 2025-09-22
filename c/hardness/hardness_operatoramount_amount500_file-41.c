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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch41Amount500.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 100000;
unsigned long int var_1_4 = 0;
unsigned long int var_1_5 = 5;
unsigned long int var_1_6 = 100;
unsigned long int var_1_7 = 128;
unsigned long int var_1_8 = 4;
signed long int var_1_9 = -5;
signed long int var_1_10 = 1484384233;
signed long int var_1_11 = 1;
signed long int var_1_12 = 32;
signed long int var_1_13 = 100;
signed long int var_1_14 = 100000000;
float var_1_15 = 15.88;
signed long int var_1_17 = -1;
float var_1_18 = 32.4;
float var_1_19 = 9.2;
float var_1_20 = 5.75;
float var_1_21 = 64.4;
float var_1_22 = 0.0;
float var_1_23 = 0.0;
float var_1_24 = 0.4;
signed char var_1_25 = -128;
signed char var_1_26 = 32;
signed char var_1_27 = 32;
signed char var_1_28 = 16;
signed char var_1_29 = 0;
signed short int var_1_30 = -10;
double var_1_31 = -0.5;
unsigned long int var_1_34 = 2;
unsigned long int var_1_35 = 2170635401;
signed char var_1_36 = 8;
signed char var_1_37 = 1;
signed char var_1_38 = -8;
double var_1_39 = 16.25;
double var_1_40 = 256.75;
float var_1_41 = 1.4;
float var_1_42 = 15.5;
unsigned char var_1_43 = 10;
unsigned short int var_1_44 = 0;
unsigned long int var_1_46 = 32;
unsigned long int var_1_47 = 1431494432;
float var_1_48 = 255.5;
float var_1_49 = 7.475;
float var_1_50 = 99999999.1;
float var_1_51 = 0.0;
unsigned char var_1_52 = 16;
unsigned char var_1_53 = 5;
unsigned char var_1_55 = 128;
unsigned char var_1_57 = 100;
unsigned char var_1_58 = 2;
unsigned short int var_1_59 = 16;
unsigned char var_1_60 = 0;
unsigned char var_1_61 = 0;
unsigned char var_1_62 = 0;
signed long int var_1_63 = -16;
unsigned char var_1_64 = 0;
float var_1_65 = 0.0;
float var_1_66 = 127.5;
unsigned char var_1_67 = 4;
signed char var_1_69 = -32;
signed long int var_1_70 = -256;
signed long int var_1_71 = 1205403466;
signed long int var_1_72 = 2128480068;
signed long int var_1_73 = 1000000000;
signed long int var_1_74 = -32;
signed long int var_1_75 = 4;
unsigned long int var_1_76 = 64;
unsigned long int var_1_77 = 128;
unsigned long int var_1_78 = 64;
unsigned short int var_1_80 = 2;
signed long int var_1_81 = -8;
signed long int var_1_82 = 8;
signed short int var_1_83 = -100;
unsigned char var_1_84 = 1;
unsigned char var_1_85 = 0;
signed char var_1_86 = -2;
float var_1_87 = 99.5;
float var_1_88 = 8.2;
unsigned short int var_1_89 = 4;
unsigned char var_1_90 = 1;
signed short int var_1_91 = 100;
signed short int var_1_92 = -8;
signed char var_1_93 = -128;
double var_1_94 = 31.8;
unsigned char var_1_95 = 64;
signed short int var_1_96 = -256;
float var_1_97 = 100.05;
float var_1_98 = 50.875;
unsigned short int var_1_99 = 2;
float var_1_100 = 8.8;
unsigned char var_1_102 = 0;
double var_1_103 = 1.7;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_9 = -5;
float last_1_var_1_15 = 15.88;
double last_1_var_1_40 = 256.75;
unsigned short int last_1_var_1_44 = 0;
unsigned long int last_1_var_1_46 = 32;
unsigned char last_1_var_1_57 = 100;
unsigned short int last_1_var_1_59 = 16;
unsigned char last_1_var_1_60 = 0;
signed long int last_1_var_1_63 = -16;
unsigned char last_1_var_1_64 = 0;
signed char last_1_var_1_69 = -32;
unsigned long int last_1_var_1_76 = 64;
unsigned long int last_1_var_1_78 = 64;
signed long int last_1_var_1_81 = -8;
signed long int last_1_var_1_82 = 8;
unsigned char last_1_var_1_84 = 1;
float last_1_var_1_87 = 99.5;
unsigned char last_1_var_1_90 = 1;
signed short int last_1_var_1_92 = -8;
unsigned short int last_1_var_1_99 = 2;
double last_1_var_1_103 = 1.7;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req18Batch41Amount500
	if (last_1_var_1_60) {
		var_1_59 = (last_1_var_1_99 + (max (var_1_55 , last_1_var_1_59)));
	}


	// From: Req16Batch41Amount500
	unsigned char stepLocal_13 = last_1_var_1_69 <= var_1_38;
	unsigned long int stepLocal_12 = var_1_7 + last_1_var_1_46;
	unsigned char stepLocal_11 = last_1_var_1_84 && (last_1_var_1_82 <= last_1_var_1_44);
	if (last_1_var_1_64) {
		if (last_1_var_1_44 != stepLocal_12) {
			var_1_52 = ((var_1_28 + var_1_26) + (var_1_27 + (var_1_53 + 16)));
		}
	} else {
		if (! (last_1_var_1_59 < last_1_var_1_46)) {
			var_1_52 = ((abs (var_1_55)) - var_1_29);
		} else {
			if (last_1_var_1_90 || stepLocal_13) {
				if ((var_1_55 > var_1_27) && stepLocal_11) {
					var_1_52 = (var_1_26 + 50);
				} else {
					var_1_52 = (abs (var_1_26));
				}
			} else {
				var_1_52 = 8;
			}
		}
	}


	// From: Req28Batch41Amount500
	if (! (var_1_42 <= (var_1_22 * last_1_var_1_103))) {
		var_1_80 = ((max (last_1_var_1_81 , var_1_29)) + last_1_var_1_99);
	}


	// From: Req26Batch41Amount500
	unsigned long int stepLocal_22 = var_1_4;
	signed long int stepLocal_21 = var_1_75;
	if (stepLocal_21 == 1) {
		if (last_1_var_1_76 < stepLocal_22) {
			var_1_76 = (((max (last_1_var_1_57 , last_1_var_1_9)) + (min (var_1_27 , last_1_var_1_46))) + (var_1_47 - last_1_var_1_92));
		}
	} else {
		var_1_76 = ((min ((var_1_71 - var_1_77) , var_1_75)) + (abs (var_1_29)));
	}


	// From: Req19Batch41Amount500
	if ((- var_1_18) < last_1_var_1_15) {
		var_1_60 = (last_1_var_1_90 && var_1_61);
	} else {
		var_1_60 = ((! var_1_62) || var_1_61);
	}


	// From: Req10Batch41Amount500
	unsigned char stepLocal_7 = var_1_22 <= (var_1_18 / var_1_23);
	if (stepLocal_7 && var_1_60) {
		if (var_1_23 >= var_1_21) {
			var_1_40 = (4.5 - 16.85);
		} else {
			var_1_40 = (var_1_23 - var_1_24);
		}
	}


	// From: Req1Batch41Amount500
	if ((- last_1_var_1_40) == last_1_var_1_87) {
		var_1_1 = (min (((abs (var_1_4)) + var_1_5) , var_1_6));
	} else {
		if (var_1_5 != (var_1_4 / (min (var_1_7 , var_1_8)))) {
			var_1_1 = (min (100000000u , (min ((2998348225u - var_1_5) , var_1_4))));
		}
	}


	// From: Req23Batch41Amount500
	unsigned long int stepLocal_16 = var_1_1 % var_1_27;
	if (var_1_7 < stepLocal_16) {
		var_1_67 = (min (var_1_26 , (25 + (var_1_53 + var_1_28))));
	}


	// From: Req38Batch41Amount500
	if (var_1_62) {
		var_1_92 = var_1_67;
	} else {
		var_1_92 = var_1_37;
	}


	// From: Req20Batch41Amount500
	if ((last_1_var_1_81 < var_1_6) || last_1_var_1_84) {
		if (((var_1_50 + var_1_23) + (var_1_18 + 1.5)) >= var_1_24) {
			if (last_1_var_1_63 > (min (last_1_var_1_78 , var_1_7))) {
				var_1_63 = ((max (var_1_28 , var_1_11)) - var_1_13);
			}
		} else {
			var_1_63 = (((min (var_1_58 , var_1_55)) + last_1_var_1_9) + var_1_38);
		}
	} else {
		var_1_63 = (max (((last_1_var_1_63 - var_1_53) + 4) , (max (var_1_28 , var_1_11))));
	}


	// From: Req33Batch41Amount500
	if ((min (var_1_53 , var_1_63)) < -256) {
		var_1_86 = (var_1_26 + var_1_28);
	}


	// From: Req2Batch41Amount500
	if (var_1_6 >= (var_1_5 / var_1_8)) {
		var_1_9 = ((var_1_10 - var_1_11) - var_1_12);
	} else {
		var_1_9 = ((min ((var_1_10 - var_1_11) , var_1_12)) - (max (var_1_13 , var_1_14)));
	}


	// From: Req4Batch41Amount500
	var_1_25 = (((var_1_26 + var_1_27) - var_1_28) - (min (var_1_29 , (5 + 1))));


	// From: Req5Batch41Amount500
	var_1_30 = (max (var_1_29 , var_1_28));


	// From: Req14Batch41Amount500
	unsigned char stepLocal_9 = var_1_4 <= var_1_17;
	unsigned long int stepLocal_8 = var_1_4;
	if (var_1_60 || stepLocal_9) {
		if (last_1_var_1_46 >= stepLocal_8) {
			var_1_46 = (min ((var_1_35 - var_1_26) , 256u));
		} else {
			var_1_46 = (min (var_1_5 , ((var_1_47 - var_1_27) + var_1_29)));
		}
	} else {
		var_1_46 = ((4118864680u - var_1_27) - var_1_47);
	}


	// From: Req22Batch41Amount500
	var_1_66 = (min (var_1_20 , 7.5f));


	// From: Req24Batch41Amount500
	if (var_1_62) {
		var_1_69 = (max (var_1_29 , var_1_26));
	} else {
		var_1_69 = (abs ((abs (-50)) + var_1_53));
	}


	// From: Req36Batch41Amount500
	var_1_90 = var_1_62;


	// From: Req37Batch41Amount500
	var_1_91 = 128;


	// From: Req39Batch41Amount500
	if (var_1_61) {
		var_1_93 = 25;
	} else {
		var_1_93 = var_1_29;
	}


	// From: Req40Batch41Amount500
	if (var_1_62) {
		var_1_94 = var_1_24;
	}


	// From: Req41Batch41Amount500
	var_1_95 = var_1_26;


	// From: Req43Batch41Amount500
	var_1_97 = var_1_24;


	// From: Req44Batch41Amount500
	var_1_98 = var_1_24;


	// From: Req47Batch41Amount500
	var_1_102 = var_1_55;


	// From: Req48Batch41Amount500
	var_1_103 = var_1_19;


	// From: Req45Batch41Amount500
	if (var_1_90) {
		var_1_99 = var_1_29;
	} else {
		var_1_99 = var_1_59;
	}


	// From: Req8Batch41Amount500
	signed char stepLocal_6 = var_1_27;
	signed long int stepLocal_5 = var_1_14;
	signed long int stepLocal_4 = var_1_63;
	if (stepLocal_5 != var_1_80) {
		if ((var_1_10 / var_1_8) == stepLocal_6) {
			var_1_36 = (min ((min ((var_1_26 + var_1_27) , (var_1_29 - var_1_28))) , (min (var_1_37 , var_1_38))));
		} else {
			var_1_36 = var_1_38;
		}
	} else {
		if (stepLocal_4 < (~ var_1_11)) {
			var_1_36 = (var_1_26 - var_1_29);
		} else {
			var_1_36 = (var_1_29 - var_1_27);
		}
	}


	// From: Req21Batch41Amount500
	if (var_1_40 == var_1_66) {
		var_1_64 = var_1_61;
	} else {
		if ((var_1_23 + var_1_49) != (var_1_22 - (var_1_65 - var_1_50))) {
			var_1_64 = (! var_1_62);
		} else {
			var_1_64 = ((var_1_49 <= (var_1_65 - var_1_24)) || (var_1_60 || var_1_62));
		}
	}


	// From: Req32Batch41Amount500
	if (! (var_1_19 < var_1_23)) {
		if (var_1_64) {
			var_1_84 = (! (! var_1_62));
		} else {
			var_1_84 = (! (! var_1_61));
		}
	} else {
		if ((var_1_9 <= var_1_10) || var_1_90) {
			var_1_84 = (var_1_62 && var_1_85);
		} else {
			var_1_84 = (! (last_1_var_1_84 || var_1_62));
		}
	}


	// From: Req15Batch41Amount500
	signed char stepLocal_10 = var_1_86;
	if ((var_1_22 * var_1_42) < (- var_1_98)) {
		var_1_48 = (2.75f - ((min (var_1_42 , 9.5f)) + (var_1_49 + var_1_50)));
	} else {
		if (var_1_64) {
			if (var_1_63 <= stepLocal_10) {
				var_1_48 = (var_1_18 + (min (var_1_50 , (min (var_1_24 , var_1_42)))));
			} else {
				var_1_48 = (var_1_20 - (var_1_23 - (var_1_51 - var_1_49)));
			}
		}
	}


	// From: Req42Batch41Amount500
	if (var_1_90) {
		var_1_96 = var_1_52;
	} else {
		var_1_96 = var_1_59;
	}


	// From: Req6Batch41Amount500
	signed char stepLocal_3 = var_1_29;
	unsigned char stepLocal_2 = var_1_13 == var_1_11;
	if (var_1_64) {
		if (64 < stepLocal_3) {
			if (stepLocal_2 || var_1_60) {
				var_1_31 = var_1_18;
			}
		} else {
			var_1_31 = (var_1_24 - var_1_23);
		}
	} else {
		var_1_31 = (max (var_1_20 , var_1_21));
	}


	// From: Req7Batch41Amount500
	if (var_1_90) {
		if (var_1_90) {
			var_1_34 = (max ((var_1_35 - var_1_12) , (var_1_27 + var_1_5)));
		}
	} else {
		var_1_34 = var_1_12;
	}


	// From: Req12Batch41Amount500
	if (var_1_64) {
		var_1_43 = (var_1_26 + var_1_27);
	}


	// From: Req13Batch41Amount500
	if (! var_1_90) {
		if (var_1_90) {
			var_1_44 = var_1_29;
		}
	} else {
		var_1_44 = (var_1_27 + var_1_26);
	}


	// From: Req46Batch41Amount500
	if (! (var_1_40 != (var_1_31 / var_1_65))) {
		var_1_100 = var_1_22;
	} else {
		var_1_100 = (var_1_24 - var_1_49);
	}


	// From: Req25Batch41Amount500
	unsigned char stepLocal_20 = var_1_64;
	unsigned long int stepLocal_19 = var_1_46;
	signed long int stepLocal_18 = 0;
	unsigned char stepLocal_17 = ! 1;
	if (var_1_64) {
		if (var_1_98 >= (var_1_49 + var_1_18)) {
			if (stepLocal_20 || ((var_1_22 > 3.2f) || (var_1_90 || var_1_61))) {
				if (stepLocal_18 != var_1_7) {
					if (stepLocal_19 != var_1_34) {
						var_1_70 = ((min (var_1_38 , var_1_28)) + (var_1_58 - 256));
					} else {
						var_1_70 = (5 - ((max (var_1_71 , var_1_72)) - (var_1_29 + var_1_28)));
					}
				} else {
					var_1_70 = (var_1_52 - ((var_1_73 - 1) + var_1_92));
				}
			} else {
				var_1_70 = (var_1_80 - var_1_29);
			}
		} else {
			var_1_70 = ((max (var_1_26 , (1 + var_1_74))) + (min (var_1_55 , var_1_63)));
		}
	} else {
		if (stepLocal_17 && (var_1_26 > var_1_63)) {
			var_1_70 = (var_1_12 - var_1_75);
		}
	}


	// From: Req35Batch41Amount500
	signed long int stepLocal_25 = var_1_70;
	if (var_1_34 != stepLocal_25) {
		var_1_89 = var_1_102;
	} else {
		var_1_89 = var_1_67;
	}


	// From: Req27Batch41Amount500
	if (var_1_8 >= (var_1_13 + var_1_6)) {
		if (var_1_64) {
			if (var_1_76 != var_1_4) {
				var_1_78 = ((var_1_55 + var_1_28) + var_1_26);
			} else {
				var_1_78 = ((max (var_1_13 , var_1_4)) + (min (var_1_76 , var_1_10)));
			}
		} else {
			var_1_78 = (abs (var_1_35 - var_1_11));
		}
	} else {
		if (var_1_90 && var_1_84) {
			var_1_78 = (var_1_5 + var_1_95);
		}
	}


	// From: Req9Batch41Amount500
	if (var_1_29 > var_1_11) {
		if (var_1_84 || var_1_64) {
			if ((- var_1_35) <= var_1_10) {
				if ((var_1_6 * var_1_29) >= (min ((abs (var_1_35)) , var_1_11))) {
					var_1_39 = (var_1_20 - var_1_22);
				} else {
					var_1_39 = (abs (31.5));
				}
			} else {
				var_1_39 = var_1_21;
			}
		}
	} else {
		var_1_39 = var_1_19;
	}


	// From: Req11Batch41Amount500
	if ((- 128) > var_1_14) {
		if ((- var_1_31) < (var_1_21 * var_1_39)) {
			var_1_41 = ((var_1_24 + var_1_42) - var_1_22);
		} else {
			var_1_41 = (abs (var_1_24));
		}
	}


	// From: Req29Batch41Amount500
	unsigned long int stepLocal_24 = var_1_34;
	signed long int stepLocal_23 = 100;
	if (stepLocal_23 <= (max (var_1_37 , (min (var_1_9 , var_1_96))))) {
		if (! var_1_90) {
			var_1_81 = (var_1_95 - var_1_89);
		}
	} else {
		if (-4 > stepLocal_24) {
			var_1_81 = (var_1_29 + var_1_55);
		} else {
			var_1_81 = ((min (var_1_29 , var_1_11)) + var_1_36);
		}
	}


	// From: Req34Batch41Amount500
	if (var_1_90) {
		var_1_87 = (var_1_20 - var_1_42);
	} else {
		if (var_1_84 || var_1_62) {
			if (((var_1_73 / var_1_7) * var_1_78) < (var_1_12 / 50u)) {
				var_1_87 = (max ((abs (var_1_24)) , var_1_22));
			} else {
				if (! var_1_84) {
					var_1_87 = (abs (var_1_18));
				} else {
					var_1_87 = var_1_20;
				}
			}
		} else {
			if (128.625 >= (- (var_1_23 - var_1_22))) {
				if (var_1_29 >= (var_1_1 + var_1_12)) {
					var_1_87 = ((var_1_23 - (var_1_51 - var_1_50)) - var_1_22);
				} else {
					var_1_87 = (var_1_23 - (var_1_22 - (abs (var_1_51))));
				}
			} else {
				var_1_87 = ((var_1_22 - var_1_49) - (var_1_23 - (var_1_50 + var_1_88)));
			}
		}
	}


	// From: Req17Batch41Amount500
	unsigned char stepLocal_15 = var_1_21 <= var_1_39;
	unsigned long int stepLocal_14 = var_1_5;
	if ((var_1_1 + var_1_76) >= stepLocal_14) {
		if ((var_1_87 + (var_1_31 / var_1_51)) >= var_1_48) {
			if (stepLocal_15 && (! var_1_64)) {
				var_1_57 = (var_1_55 - (abs (var_1_28)));
			} else {
				var_1_57 = (max ((abs (var_1_58)) , var_1_26));
			}
		}
	}


	// From: Req3Batch41Amount500
	unsigned long int stepLocal_1 = (var_1_12 / var_1_17) / var_1_8;
	signed long int stepLocal_0 = var_1_13 * var_1_12;
	if (var_1_94 != (min ((min (var_1_103 , 7.375f)) , var_1_39))) {
		if (stepLocal_1 > var_1_13) {
			var_1_15 = ((abs (var_1_18 + var_1_19)) - var_1_20);
		}
	} else {
		if (var_1_5 != stepLocal_0) {
			var_1_15 = (min ((min ((var_1_19 + var_1_18) , var_1_20)) , var_1_21));
		} else {
			var_1_15 = (9999999.25f - ((min (var_1_22 , var_1_23)) - var_1_24));
		}
	}


	// From: Req31Batch41Amount500
	if (! var_1_62) {
		var_1_83 = (var_1_29 - var_1_57);
	}


	// From: Req30Batch41Amount500
	if (((var_1_21 * var_1_23) + (16.4 / var_1_51)) < ((var_1_20 * var_1_22) / (abs (var_1_65)))) {
		var_1_82 = ((var_1_71 - (min (var_1_29 , var_1_26))) - var_1_28);
	} else {
		var_1_82 = (min ((max (var_1_11 , (max (var_1_13 , var_1_52)))) , (var_1_29 + (max (var_1_99 , var_1_83)))));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 4294967295);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 4294967295);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 1073741822);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1073741823);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
	assume_abort_if_not(var_1_17 != 0);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= 4611686.018427383000e+12F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 4611686.018427383000e+12F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= 31);
	assume_abort_if_not(var_1_26 <= 63);
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 31);
	assume_abort_if_not(var_1_27 <= 63);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -127);
	assume_abort_if_not(var_1_37 <= 126);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -127);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_42 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 1073741823);
	assume_abort_if_not(var_1_47 <= 2147483647);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 2305843.009213691400e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 2305843.009213691400e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 2305843.009213691400e+12F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 32);
	var_1_55 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_55 >= 127);
	assume_abort_if_not(var_1_55 <= 254);
	var_1_58 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_58 >= 0);
	assume_abort_if_not(var_1_58 <= 254);
	var_1_61 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_61 >= 0);
	assume_abort_if_not(var_1_61 <= 0);
	var_1_62 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_62 >= 1);
	assume_abort_if_not(var_1_62 <= 1);
	var_1_65 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_65 >= 4611686.018427388000e+12F && var_1_65 <= -1.0e-20F) || (var_1_65 <= 9223372.036854776000e+12F && var_1_65 >= 1.0e-20F ));
	var_1_71 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_71 >= 1073741823);
	assume_abort_if_not(var_1_71 <= 2147483646);
	var_1_72 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_72 >= 1073741823);
	assume_abort_if_not(var_1_72 <= 2147483646);
	var_1_73 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_73 >= 536870911);
	assume_abort_if_not(var_1_73 <= 1073741823);
	var_1_74 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_74 >= -536870911);
	assume_abort_if_not(var_1_74 <= 536870911);
	var_1_75 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_75 >= 0);
	assume_abort_if_not(var_1_75 <= 2147483646);
	var_1_77 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_77 >= 0);
	assume_abort_if_not(var_1_77 <= 1073741823);
	var_1_85 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_85 >= 1);
	assume_abort_if_not(var_1_85 <= 1);
	var_1_88 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_88 >= 0.0F && var_1_88 <= -1.0e-20F) || (var_1_88 <= 2305843.009213691400e+12F && var_1_88 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_15 = var_1_15;
	last_1_var_1_40 = var_1_40;
	last_1_var_1_44 = var_1_44;
	last_1_var_1_46 = var_1_46;
	last_1_var_1_57 = var_1_57;
	last_1_var_1_59 = var_1_59;
	last_1_var_1_60 = var_1_60;
	last_1_var_1_63 = var_1_63;
	last_1_var_1_64 = var_1_64;
	last_1_var_1_69 = var_1_69;
	last_1_var_1_76 = var_1_76;
	last_1_var_1_78 = var_1_78;
	last_1_var_1_81 = var_1_81;
	last_1_var_1_82 = var_1_82;
	last_1_var_1_84 = var_1_84;
	last_1_var_1_87 = var_1_87;
	last_1_var_1_90 = var_1_90;
	last_1_var_1_92 = var_1_92;
	last_1_var_1_99 = var_1_99;
	last_1_var_1_103 = var_1_103;
}

int property(void) {
	return (((((((((((((((((((((((((((((((((((((((((((((((((- last_1_var_1_40) == last_1_var_1_87) ? (var_1_1 == ((unsigned long int) (min (((abs (var_1_4)) + var_1_5) , var_1_6)))) : ((var_1_5 != (var_1_4 / (min (var_1_7 , var_1_8)))) ? (var_1_1 == ((unsigned long int) (min (100000000u , (min ((2998348225u - var_1_5) , var_1_4)))))) : 1)) && ((var_1_6 >= (var_1_5 / var_1_8)) ? (var_1_9 == ((signed long int) ((var_1_10 - var_1_11) - var_1_12))) : (var_1_9 == ((signed long int) ((min ((var_1_10 - var_1_11) , var_1_12)) - (max (var_1_13 , var_1_14))))))) && ((var_1_94 != (min ((min (var_1_103 , 7.375f)) , var_1_39))) ? ((((var_1_12 / var_1_17) / var_1_8) > var_1_13) ? (var_1_15 == ((float) ((abs (var_1_18 + var_1_19)) - var_1_20))) : 1) : ((var_1_5 != (var_1_13 * var_1_12)) ? (var_1_15 == ((float) (min ((min ((var_1_19 + var_1_18) , var_1_20)) , var_1_21)))) : (var_1_15 == ((float) (9999999.25f - ((min (var_1_22 , var_1_23)) - var_1_24))))))) && (var_1_25 == ((signed char) (((var_1_26 + var_1_27) - var_1_28) - (min (var_1_29 , (5 + 1))))))) && (var_1_30 == ((signed short int) (max (var_1_29 , var_1_28))))) && (var_1_64 ? ((64 < var_1_29) ? (((var_1_13 == var_1_11) || var_1_60) ? (var_1_31 == ((double) var_1_18)) : 1) : (var_1_31 == ((double) (var_1_24 - var_1_23)))) : (var_1_31 == ((double) (max (var_1_20 , var_1_21)))))) && (var_1_90 ? (var_1_90 ? (var_1_34 == ((unsigned long int) (max ((var_1_35 - var_1_12) , (var_1_27 + var_1_5))))) : 1) : (var_1_34 == ((unsigned long int) var_1_12)))) && ((var_1_14 != var_1_80) ? (((var_1_10 / var_1_8) == var_1_27) ? (var_1_36 == ((signed char) (min ((min ((var_1_26 + var_1_27) , (var_1_29 - var_1_28))) , (min (var_1_37 , var_1_38)))))) : (var_1_36 == ((signed char) var_1_38))) : ((var_1_63 < (~ var_1_11)) ? (var_1_36 == ((signed char) (var_1_26 - var_1_29))) : (var_1_36 == ((signed char) (var_1_29 - var_1_27)))))) && ((var_1_29 > var_1_11) ? ((var_1_84 || var_1_64) ? (((- var_1_35) <= var_1_10) ? (((var_1_6 * var_1_29) >= (min ((abs (var_1_35)) , var_1_11))) ? (var_1_39 == ((double) (var_1_20 - var_1_22))) : (var_1_39 == ((double) (abs (31.5))))) : (var_1_39 == ((double) var_1_21))) : 1) : (var_1_39 == ((double) var_1_19)))) && (((var_1_22 <= (var_1_18 / var_1_23)) && var_1_60) ? ((var_1_23 >= var_1_21) ? (var_1_40 == ((double) (4.5 - 16.85))) : (var_1_40 == ((double) (var_1_23 - var_1_24)))) : 1)) && (((- 128) > var_1_14) ? (((- var_1_31) < (var_1_21 * var_1_39)) ? (var_1_41 == ((float) ((var_1_24 + var_1_42) - var_1_22))) : (var_1_41 == ((float) (abs (var_1_24))))) : 1)) && (var_1_64 ? (var_1_43 == ((unsigned char) (var_1_26 + var_1_27))) : 1)) && ((! var_1_90) ? (var_1_90 ? (var_1_44 == ((unsigned short int) var_1_29)) : 1) : (var_1_44 == ((unsigned short int) (var_1_27 + var_1_26))))) && ((var_1_60 || (var_1_4 <= var_1_17)) ? ((last_1_var_1_46 >= var_1_4) ? (var_1_46 == ((unsigned long int) (min ((var_1_35 - var_1_26) , 256u)))) : (var_1_46 == ((unsigned long int) (min (var_1_5 , ((var_1_47 - var_1_27) + var_1_29)))))) : (var_1_46 == ((unsigned long int) ((4118864680u - var_1_27) - var_1_47))))) && (((var_1_22 * var_1_42) < (- var_1_98)) ? (var_1_48 == ((float) (2.75f - ((min (var_1_42 , 9.5f)) + (var_1_49 + var_1_50))))) : (var_1_64 ? ((var_1_63 <= var_1_86) ? (var_1_48 == ((float) (var_1_18 + (min (var_1_50 , (min (var_1_24 , var_1_42))))))) : (var_1_48 == ((float) (var_1_20 - (var_1_23 - (var_1_51 - var_1_49)))))) : 1))) && (last_1_var_1_64 ? ((last_1_var_1_44 != (var_1_7 + last_1_var_1_46)) ? (var_1_52 == ((unsigned char) ((var_1_28 + var_1_26) + (var_1_27 + (var_1_53 + 16))))) : 1) : ((! (last_1_var_1_59 < last_1_var_1_46)) ? (var_1_52 == ((unsigned char) ((abs (var_1_55)) - var_1_29))) : ((last_1_var_1_90 || (last_1_var_1_69 <= var_1_38)) ? (((var_1_55 > var_1_27) && (last_1_var_1_84 && (last_1_var_1_82 <= last_1_var_1_44))) ? (var_1_52 == ((unsigned char) (var_1_26 + 50))) : (var_1_52 == ((unsigned char) (abs (var_1_26))))) : (var_1_52 == ((unsigned char) 8)))))) && (((var_1_1 + var_1_76) >= var_1_5) ? (((var_1_87 + (var_1_31 / var_1_51)) >= var_1_48) ? (((var_1_21 <= var_1_39) && (! var_1_64)) ? (var_1_57 == ((unsigned char) (var_1_55 - (abs (var_1_28))))) : (var_1_57 == ((unsigned char) (max ((abs (var_1_58)) , var_1_26))))) : 1) : 1)) && (last_1_var_1_60 ? (var_1_59 == ((unsigned short int) (last_1_var_1_99 + (max (var_1_55 , last_1_var_1_59))))) : 1)) && (((- var_1_18) < last_1_var_1_15) ? (var_1_60 == ((unsigned char) (last_1_var_1_90 && var_1_61))) : (var_1_60 == ((unsigned char) ((! var_1_62) || var_1_61))))) && (((last_1_var_1_81 < var_1_6) || last_1_var_1_84) ? ((((var_1_50 + var_1_23) + (var_1_18 + 1.5)) >= var_1_24) ? ((last_1_var_1_63 > (min (last_1_var_1_78 , var_1_7))) ? (var_1_63 == ((signed long int) ((max (var_1_28 , var_1_11)) - var_1_13))) : 1) : (var_1_63 == ((signed long int) (((min (var_1_58 , var_1_55)) + last_1_var_1_9) + var_1_38)))) : (var_1_63 == ((signed long int) (max (((last_1_var_1_63 - var_1_53) + 4) , (max (var_1_28 , var_1_11)))))))) && ((var_1_40 == var_1_66) ? (var_1_64 == ((unsigned char) var_1_61)) : (((var_1_23 + var_1_49) != (var_1_22 - (var_1_65 - var_1_50))) ? (var_1_64 == ((unsigned char) (! var_1_62))) : (var_1_64 == ((unsigned char) ((var_1_49 <= (var_1_65 - var_1_24)) || (var_1_60 || var_1_62))))))) && (var_1_66 == ((float) (min (var_1_20 , 7.5f))))) && ((var_1_7 < (var_1_1 % var_1_27)) ? (var_1_67 == ((unsigned char) (min (var_1_26 , (25 + (var_1_53 + var_1_28)))))) : 1)) && (var_1_62 ? (var_1_69 == ((signed char) (max (var_1_29 , var_1_26)))) : (var_1_69 == ((signed char) (abs ((abs (-50)) + var_1_53)))))) && (var_1_64 ? ((var_1_98 >= (var_1_49 + var_1_18)) ? ((var_1_64 || ((var_1_22 > 3.2f) || (var_1_90 || var_1_61))) ? ((0 != var_1_7) ? ((var_1_46 != var_1_34) ? (var_1_70 == ((signed long int) ((min (var_1_38 , var_1_28)) + (var_1_58 - 256)))) : (var_1_70 == ((signed long int) (5 - ((max (var_1_71 , var_1_72)) - (var_1_29 + var_1_28)))))) : (var_1_70 == ((signed long int) (var_1_52 - ((var_1_73 - 1) + var_1_92))))) : (var_1_70 == ((signed long int) (var_1_80 - var_1_29)))) : (var_1_70 == ((signed long int) ((max (var_1_26 , (1 + var_1_74))) + (min (var_1_55 , var_1_63)))))) : (((! 1) && (var_1_26 > var_1_63)) ? (var_1_70 == ((signed long int) (var_1_12 - var_1_75))) : 1))) && ((var_1_75 == 1) ? ((last_1_var_1_76 < var_1_4) ? (var_1_76 == ((unsigned long int) (((max (last_1_var_1_57 , last_1_var_1_9)) + (min (var_1_27 , last_1_var_1_46))) + (var_1_47 - last_1_var_1_92)))) : 1) : (var_1_76 == ((unsigned long int) ((min ((var_1_71 - var_1_77) , var_1_75)) + (abs (var_1_29))))))) && ((var_1_8 >= (var_1_13 + var_1_6)) ? (var_1_64 ? ((var_1_76 != var_1_4) ? (var_1_78 == ((unsigned long int) ((var_1_55 + var_1_28) + var_1_26))) : (var_1_78 == ((unsigned long int) ((max (var_1_13 , var_1_4)) + (min (var_1_76 , var_1_10)))))) : (var_1_78 == ((unsigned long int) (abs (var_1_35 - var_1_11))))) : ((var_1_90 && var_1_84) ? (var_1_78 == ((unsigned long int) (var_1_5 + var_1_95))) : 1))) && ((! (var_1_42 <= (var_1_22 * last_1_var_1_103))) ? (var_1_80 == ((unsigned short int) ((max (last_1_var_1_81 , var_1_29)) + last_1_var_1_99))) : 1)) && ((100 <= (max (var_1_37 , (min (var_1_9 , var_1_96))))) ? ((! var_1_90) ? (var_1_81 == ((signed long int) (var_1_95 - var_1_89))) : 1) : ((-4 > var_1_34) ? (var_1_81 == ((signed long int) (var_1_29 + var_1_55))) : (var_1_81 == ((signed long int) ((min (var_1_29 , var_1_11)) + var_1_36)))))) && ((((var_1_21 * var_1_23) + (16.4 / var_1_51)) < ((var_1_20 * var_1_22) / (abs (var_1_65)))) ? (var_1_82 == ((signed long int) ((var_1_71 - (min (var_1_29 , var_1_26))) - var_1_28))) : (var_1_82 == ((signed long int) (min ((max (var_1_11 , (max (var_1_13 , var_1_52)))) , (var_1_29 + (max (var_1_99 , var_1_83))))))))) && ((! var_1_62) ? (var_1_83 == ((signed short int) (var_1_29 - var_1_57))) : 1)) && ((! (var_1_19 < var_1_23)) ? (var_1_64 ? (var_1_84 == ((unsigned char) (! (! var_1_62)))) : (var_1_84 == ((unsigned char) (! (! var_1_61))))) : (((var_1_9 <= var_1_10) || var_1_90) ? (var_1_84 == ((unsigned char) (var_1_62 && var_1_85))) : (var_1_84 == ((unsigned char) (! (last_1_var_1_84 || var_1_62))))))) && (((min (var_1_53 , var_1_63)) < -256) ? (var_1_86 == ((signed char) (var_1_26 + var_1_28))) : 1)) && (var_1_90 ? (var_1_87 == ((float) (var_1_20 - var_1_42))) : ((var_1_84 || var_1_62) ? ((((var_1_73 / var_1_7) * var_1_78) < (var_1_12 / 50u)) ? (var_1_87 == ((float) (max ((abs (var_1_24)) , var_1_22)))) : ((! var_1_84) ? (var_1_87 == ((float) (abs (var_1_18)))) : (var_1_87 == ((float) var_1_20)))) : ((128.625 >= (- (var_1_23 - var_1_22))) ? ((var_1_29 >= (var_1_1 + var_1_12)) ? (var_1_87 == ((float) ((var_1_23 - (var_1_51 - var_1_50)) - var_1_22))) : (var_1_87 == ((float) (var_1_23 - (var_1_22 - (abs (var_1_51))))))) : (var_1_87 == ((float) ((var_1_22 - var_1_49) - (var_1_23 - (var_1_50 + var_1_88))))))))) && ((var_1_34 != var_1_70) ? (var_1_89 == ((unsigned short int) var_1_102)) : (var_1_89 == ((unsigned short int) var_1_67)))) && (var_1_90 == ((unsigned char) var_1_62))) && (var_1_91 == ((signed short int) 128))) && (var_1_62 ? (var_1_92 == ((signed short int) var_1_67)) : (var_1_92 == ((signed short int) var_1_37)))) && (var_1_61 ? (var_1_93 == ((signed char) 25)) : (var_1_93 == ((signed char) var_1_29)))) && (var_1_62 ? (var_1_94 == ((double) var_1_24)) : 1)) && (var_1_95 == ((unsigned char) var_1_26))) && (var_1_90 ? (var_1_96 == ((signed short int) var_1_52)) : (var_1_96 == ((signed short int) var_1_59)))) && (var_1_97 == ((float) var_1_24))) && (var_1_98 == ((float) var_1_24))) && (var_1_90 ? (var_1_99 == ((unsigned short int) var_1_29)) : (var_1_99 == ((unsigned short int) var_1_59)))) && ((! (var_1_40 != (var_1_31 / var_1_65))) ? (var_1_100 == ((float) var_1_22)) : (var_1_100 == ((float) (var_1_24 - var_1_49))))) && (var_1_102 == ((unsigned char) var_1_55))) && (var_1_103 == ((double) var_1_19))
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
