// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1Filler_PE_CN.c", 13, "reach_error"); }
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
signed short int var_1_1 = 64;
unsigned long int var_1_2 = 256;
unsigned long int var_1_3 = 0;
unsigned long int var_1_4 = 8;
signed short int var_1_5 = 50;
double var_1_6 = 31.5;
signed short int var_1_7 = 128;
signed short int var_1_8 = 64;
double var_1_9 = 1000000000.25;
float var_1_10 = 1.1;
float var_1_11 = 8.75;
float var_1_12 = 63.8;
unsigned char var_1_13 = 1;
float var_1_14 = 127.5;
signed char var_1_15 = -2;
signed char var_1_16 = 1;
signed char var_1_17 = 1;
signed char var_1_18 = 1;
signed char var_1_19 = -2;
signed char var_1_20 = 16;
signed char var_1_21 = 2;
signed char var_1_22 = 8;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 50;
unsigned long int var_1_30 = 1000000000;
unsigned long int var_1_31 = 4;
unsigned long int var_1_32 = 100000;
unsigned long int var_1_33 = 10;
unsigned long int var_1_34 = 8;
unsigned char var_1_35 = 1;
unsigned long int var_1_36 = 2632045268;
signed long int var_1_37 = 32;
unsigned long int var_1_38 = 128;
float var_1_39 = 8.78;
unsigned long int var_1_40 = 1877460848;
unsigned long int var_1_41 = 1831388024;
unsigned long int var_1_42 = 1967003719;
unsigned char var_1_43 = 0;
float var_1_44 = 199.5;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
signed long int var_1_47 = 0;
unsigned short int var_1_48 = 0;
float var_1_49 = 0.0;
float var_1_50 = 9.25;
float var_1_51 = 100000000000.25;
float var_1_52 = 8.6;
unsigned short int var_1_55 = 100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch1Filler_PE_CN
	unsigned long int stepLocal_1 = /* 799L, 26L, 30L, 264L, 291L) */ ((var_1_4) * (var_1_3));
	unsigned long int stepLocal_0 = /* 794L, 4L, 8L, 251L, 278L) */ ((var_1_2) + (var_1_3));
	/* 822L, 48L, 249L, 276L) */ if (/* 804L, 6L, 7L, 250L, 277L) */ ((stepLocal_0) <= (var_1_4))) {
		/* 810L, 22L, 255L, 282L) */ var_1_1 = (
			/* 809L, 21L, 258L, 285L) */ ((
				128
			) + (
				var_1_5
			))
		);
	} else {
		/* 821L, 46L, 261L, 288L) */ if (/* 812L, 27L, 28L, 262L, 289L) */ ((var_1_5) >= (stepLocal_1))) {
			/* 816L, 41L, 267L, 294L) */ var_1_1 = (
				var_1_5
			);
		} else {
			/* 820L, 45L, 271L, 298L) */ var_1_1 = (
				1
			);
		}
	}


	// From: Req2Batch1Filler_PE_CN
	/* 829L, 73L, 359L, 372L) */ if (/* 830L, 58L, 59L, 360L, 373L) */ ((var_1_5) < (/* 832L, 57L, 61L, 362L, 375L) */ ((var_1_7) - (var_1_8))))) {
		/* 835L, 72L, 365L, 378L) */ var_1_6 = (
			var_1_9
		);
	}


	// From: Req3Batch1Filler_PE_CN
	unsigned long int stepLocal_2 = var_1_4;
	/* 855L, 102L, 409L, 424L) */ if (/* 844L, 85L, 86L, 410L, 425L) */ ((stepLocal_2) > (var_1_3))) {
		/* 850L, 97L, 413L, 428L) */ var_1_10 = (
			/* 849L, 96L, 416L, 431L) */ ((
				1.00000000000009E13f
			) - (
				var_1_11
			))
		);
	} else {
		/* 854L, 101L, 419L, 434L) */ var_1_10 = (
			9.75f
		);
	}


	// From: Req5Batch1Filler_PE_CN
	/* 890L, 157L, 562L, 570L) */ var_1_15 = (
		/* 893L, 156L, 565L, 573L) */ ((
			var_1_16
		) - (
			var_1_17
		))
	);


	// From: Req6Batch1Filler_PE_CN
	/* 898L, 191L, 594L, 614L) */ if (/* 899L, 168L, 169L, 595L, 615L) */ ((/* 900L, 166L, 170L, 596L, 616L) */ (min (/* 900L, 166L, 170L, 596L, 616L) */ (var_1_3) , (var_1_2)))) < (25u))) {
		/* 904L, 190L, 600L, 620L) */ var_1_18 = (
			/* 907L, 189L, 603L, 623L) */ ((
				/* 908L, 185L, 604L, 624L) */ (max (
					/* 908L, 185L, 604L, 624L) */ (
						var_1_19
					) , (
						/* 910L, 184L, 606L, 626L) */ ((
							var_1_20
						) - (
							var_1_21
						))
					)
				))
			) + (
				/* 913L, 188L, 609L, 629L) */ (abs (
					/* 914L, 187L, 610L, 630L) */ (abs (
						var_1_22
					))
				))
			))
		);
	}


	// From: Req7Batch1Filler_PE_CN
	signed long int stepLocal_5 = /* 918L, 203L, 207L, 677L, 701L) */ (~ (var_1_21));
	/* 941L, 235L, 673L, 697L) */ if (var_1_13) {
		/* 940L, 233L, 675L, 699L) */ if (/* 923L, 205L, 206L, 676L, 700L) */ ((stepLocal_5) > (var_1_8))) {
			/* 930L, 220L, 680L, 704L) */ var_1_23 = (
				/* 929L, 219L, 683L, 707L) */ ((
					var_1_24
				) && (
					/* 928L, 218L, 685L, 709L) */ (! (
						var_1_25
					))
				))
			);
		} else {
			/* 939L, 231L, 687L, 711L) */ if (var_1_24) {
				/* 938L, 230L, 689L, 713L) */ var_1_23 = (
					/* 937L, 229L, 692L, 716L) */ ((
						/* 935L, 227L, 693L, 717L) */ (! (
							var_1_25
						))
					) || (
						var_1_26
					))
				);
			}
		}
	}


	// From: Req8Batch1Filler_PE_CN
	/* 946L, 244L, 770L, 776L) */ var_1_27 = (
		var_1_21
	);


	// From: Req4Batch1Filler_PE_CN
	unsigned char stepLocal_4 = var_1_23;
	signed long int stepLocal_3 = 1;
	/* 884L, 146L, 469L, 492L) */ if (/* 868L, 112L, 113L, 470L, 493L) */ ((stepLocal_4) && (/* 867L, 111L, 115L, 472L, 495L) */ ((var_1_5) >= (var_1_2))))) {
		/* 872L, 126L, 475L, 498L) */ var_1_12 = (
			var_1_11
		);
	} else {
		/* 883L, 144L, 479L, 502L) */ if (/* 874L, 129L, 130L, 480L, 503L) */ ((stepLocal_3) >= (var_1_2))) {
			/* 878L, 139L, 483L, 506L) */ var_1_12 = (
				var_1_11
			);
		} else {
			/* 882L, 143L, 487L, 510L) */ var_1_12 = (
				var_1_14
			);
		}
	}


	// From: CodeObject1
	/* 27L) */ if (/* 9L, 8L) */ ((var_1_29) < (/* 11L, 7L) */ ((var_1_30) | (/* 13L, 6L) */ ((var_1_31) + (var_1_32))))))) {
		/* 26L) */ var_1_28 = (
			200
		);
	}


	// From: CodeObject2
	/* 70L) */ if (/* 36L, 35L) */ ((var_1_32) >= (/* 38L, 34L) */ ((var_1_31) >> (var_1_34))))) {
		/* 68L) */ if (/* 51L, 50L) */ ((var_1_35) || (/* 53L, 49L) */ ((var_1_31) < (var_1_32))))) {
			/* 67L) */ var_1_33 = (
				/* 66L) */ (abs (
					/* 65L) */ ((
						var_1_36
					) - (
						var_1_28
					))
				))
			);
		}
	}


	// From: CodeObject3
	/* 94L) */ if (/* 79L, 78L) */ ((var_1_34) > (/* 81L, 77L) */ ((var_1_29) / (var_1_36))))) {
		/* 93L) */ var_1_37 = (
			/* 92L) */ (abs (
				var_1_34
			))
		);
	}


	// From: CodeObject4
	/* 120L) */ if (/* 103L, 102L) */ ((63.75f) <= (var_1_39))) {
		/* 119L) */ var_1_38 = (
			/* 118L) */ ((
				/* 115L) */ ((
					var_1_40
				) + (
					/* 114L) */ (max (
						/* 114L) */ (
							var_1_41
						) , (
							var_1_42
						)
					))
				))
			) - (
				/* 117L) */ (abs (
					var_1_28
				))
			))
		);
	}


	// From: CodeObject5
	/* 150L) */ if (/* 128L, 127L) */ ((var_1_39) < (/* 130L, 126L) */ (abs (var_1_44))))) {
		/* 141L) */ var_1_43 = (
			/* 140L) */ ((
				var_1_45
			) || (
				var_1_46
			))
		);
	} else {
		/* 149L) */ var_1_43 = (
			/* 148L) */ ((
				var_1_35
			) && (
				/* 147L) */ ((
					var_1_46
				) && (
					var_1_45
				))
			))
		);
	}


	// From: CodeObject6
	/* 158L) */ var_1_47 = (
		/* 157L) */ (abs (
			var_1_28
		))
	);


	// From: CodeObject7
	/* 236L) */ if (/* 172L, 171L) */ ((/* 173L, 169L) */ ((/* 174L, 165L) */ ((var_1_49) - (var_1_50))) - (/* 177L, 168L) */ (min (/* 177L, 168L) */ (var_1_51) , (var_1_52)))))) > (var_1_44))) {
		/* 230L) */ if (/* 203L, 202L) */ ((/* 204L, 197L) */ (min (/* 204L, 197L) */ (var_1_49) , (var_1_44)))) <= (/* 207L, 201L) */ (- (/* 208L, 200L) */ (min (/* 208L, 200L) */ (var_1_51) , (9.99999999999995E13f)))))))) {
			/* 225L) */ var_1_48 = (
				/* 224L) */ (abs (
					/* 223L) */ (max (
						/* 223L) */ (
							var_1_55
						) , (
							var_1_34
						)
					))
				))
			);
		} else {
			/* 229L) */ var_1_48 = (
				var_1_34
			);
		}
	} else {
		/* 235L) */ var_1_48 = (
			var_1_34
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -16383);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -1);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -1);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -63);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -63);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	var_1_31 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 4294967295);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 31);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 2147483647);
	assume_abort_if_not(var_1_36 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 1073741823);
	assume_abort_if_not(var_1_40 <= 2147483647);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 1073741824);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 1073741824);
	assume_abort_if_not(var_1_42 <= 2147483647);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= 4611686.018427388000e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427388000e+12F && var_1_50 >= 1.0e-20F ));
	var_1_51 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
	var_1_52 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
	var_1_55 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_55 >= 0);
	assume_abort_if_not(var_1_55 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 239L, 6L, 12L, 304L, 331L, 952L) */ ((/* 240L, 4L, 13L, 305L, 332L, 953L) */ ((var_1_2) + (var_1_3))) <= (var_1_4))) {
	} else {
		if (/* 251L, 27L, 33L, 316L, 343L, 964L) */ ((var_1_5) >= (/* 253L, 26L, 35L, 318L, 345L, 966L) */ ((var_1_4) * (var_1_3))))) {
		} else {
		}
	}
	if (/* 268L, 58L, 64L, 386L, 399L, 981L) */ ((var_1_5) < (/* 270L, 57L, 66L, 388L, 401L, 983L) */ ((var_1_7) - (var_1_8))))) {
	}
	if (/* 279L, 85L, 89L, 440L, 455L, 992L) */ ((var_1_4) > (var_1_3))) {
	} else {
	}
	if (/* 294L, 112L, 118L, 516L, 539L, 1007L) */ ((var_1_23) && (/* 296L, 111L, 120L, 518L, 541L, 1009L) */ ((var_1_5) >= (var_1_2))))) {
	} else {
		if (/* 304L, 129L, 133L, 526L, 549L, 1017L) */ ((1) >= (var_1_2))) {
		} else {
		}
	}
	if (/* 326L, 168L, 174L, 635L, 655L, 1039L) */ ((/* 327L, 166L, 175L, 636L, 656L, 1040L) */ (min (/* 327L, 166L, 175L, 636L, 656L, 1040L) */ (var_1_3) , (var_1_2)))) < (25u))) {
	}
	if (var_1_13) {
		if (/* 347L, 205L, 210L, 724L, 748L, 1060L) */ ((/* 348L, 203L, 211L, 725L, 749L, 1061L) */ (~ (var_1_21))) > (var_1_8))) {
		} else {
			if (var_1_24) {
			}
		}
	}
	return /* 380L) */ ((
	/* 379L) */ ((
		/* 378L) */ ((
			/* 377L) */ ((
				/* 376L) */ ((
					/* 375L) */ ((
						/* 374L) */ ((
							/* 238L, 49L, 303L, 330L, 951L) */ ((
								/* 239L, 6L, 12L, 304L, 331L, 952L) */ ((
									/* 240L, 4L, 13L, 305L, 332L, 953L) */ ((
										var_1_2
									) + (
										var_1_3
									))
								) <= (
									var_1_4
								))
							) ? (
								/* 244L, 22L, 309L, 336L, 957L) */ ((
									var_1_1
								) == (
									/* 244L, 22L, 309L, 336L, 957L) */ ((signed short int) (
										/* 247L, 21L, 312L, 339L, 960L) */ ((
											128
										) + (
											var_1_5
										))
									))
								))
							) : (
								/* 250L, 47L, 315L, 342L, 963L) */ ((
									/* 251L, 27L, 33L, 316L, 343L, 964L) */ ((
										var_1_5
									) >= (
										/* 253L, 26L, 35L, 318L, 345L, 966L) */ ((
											var_1_4
										) * (
											var_1_3
										))
									))
								) ? (
									/* 256L, 41L, 321L, 348L, 969L) */ ((
										var_1_1
									) == (
										/* 256L, 41L, 321L, 348L, 969L) */ ((signed short int) (
											var_1_5
										))
									))
								) : (
									/* 260L, 45L, 325L, 352L, 973L) */ ((
										var_1_1
									) == (
										/* 260L, 45L, 325L, 352L, 973L) */ ((signed short int) (
											1
										))
									))
								))
							))
						) && (
							/* 267L, 74L, 385L, 398L, 980L) */ ((
								/* 268L, 58L, 64L, 386L, 399L, 981L) */ ((
									var_1_5
								) < (
									/* 270L, 57L, 66L, 388L, 401L, 983L) */ ((
										var_1_7
									) - (
										var_1_8
									))
								))
							) ? (
								/* 273L, 72L, 391L, 404L, 986L) */ ((
									var_1_6
								) == (
									/* 273L, 72L, 391L, 404L, 986L) */ ((double) (
										var_1_9
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 278L, 103L, 439L, 454L, 991L) */ ((
							/* 279L, 85L, 89L, 440L, 455L, 992L) */ ((
								var_1_4
							) > (
								var_1_3
							))
						) ? (
							/* 282L, 97L, 443L, 458L, 995L) */ ((
								var_1_10
							) == (
								/* 282L, 97L, 443L, 458L, 995L) */ ((float) (
									/* 285L, 96L, 446L, 461L, 998L) */ ((
										1.00000000000009E13f
									) - (
										var_1_11
									))
								))
							))
						) : (
							/* 288L, 101L, 449L, 464L, 1001L) */ ((
								var_1_10
							) == (
								/* 288L, 101L, 449L, 464L, 1001L) */ ((float) (
									9.75f
								))
							))
						))
					))
				) && (
					/* 293L, 147L, 515L, 538L, 1006L) */ ((
						/* 294L, 112L, 118L, 516L, 539L, 1007L) */ ((
							var_1_23
						) && (
							/* 296L, 111L, 120L, 518L, 541L, 1009L) */ ((
								var_1_5
							) >= (
								var_1_2
							))
						))
					) ? (
						/* 299L, 126L, 521L, 544L, 1012L) */ ((
							var_1_12
						) == (
							/* 299L, 126L, 521L, 544L, 1012L) */ ((float) (
								var_1_11
							))
						))
					) : (
						/* 303L, 145L, 525L, 548L, 1016L) */ ((
							/* 304L, 129L, 133L, 526L, 549L, 1017L) */ ((
								1
							) >= (
								var_1_2
							))
						) ? (
							/* 307L, 139L, 529L, 552L, 1020L) */ ((
								var_1_12
							) == (
								/* 307L, 139L, 529L, 552L, 1020L) */ ((float) (
									var_1_11
								))
							))
						) : (
							/* 311L, 143L, 533L, 556L, 1024L) */ ((
								var_1_12
							) == (
								/* 311L, 143L, 533L, 556L, 1024L) */ ((float) (
									var_1_14
								))
							))
						))
					))
				))
			) && (
				/* 317L, 157L, 578L, 586L, 1030L) */ ((
					var_1_15
				) == (
					/* 317L, 157L, 578L, 586L, 1030L) */ ((signed char) (
						/* 320L, 156L, 581L, 589L, 1033L) */ ((
							var_1_16
						) - (
							var_1_17
						))
					))
				))
			))
		) && (
			/* 325L, 192L, 634L, 654L, 1038L) */ ((
				/* 326L, 168L, 174L, 635L, 655L, 1039L) */ ((
					/* 327L, 166L, 175L, 636L, 656L, 1040L) */ (min (
						/* 327L, 166L, 175L, 636L, 656L, 1040L) */ (
							var_1_3
						) , (
							var_1_2
						)
					))
				) < (
					25u
				))
			) ? (
				/* 331L, 190L, 640L, 660L, 1044L) */ ((
					var_1_18
				) == (
					/* 331L, 190L, 640L, 660L, 1044L) */ ((signed char) (
						/* 334L, 189L, 643L, 663L, 1047L) */ ((
							/* 335L, 185L, 644L, 664L, 1048L) */ (max (
								/* 335L, 185L, 644L, 664L, 1048L) */ (
									var_1_19
								) , (
									/* 337L, 184L, 646L, 666L, 1050L) */ ((
										var_1_20
									) - (
										var_1_21
									))
								)
							))
						) + (
							/* 340L, 188L, 649L, 669L, 1053L) */ (abs (
								/* 341L, 187L, 650L, 670L, 1054L) */ (abs (
									var_1_22
								))
							))
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 344L, 236L, 721L, 745L, 1057L) */ ((
			var_1_13
		) ? (
			/* 346L, 234L, 723L, 747L, 1059L) */ ((
				/* 347L, 205L, 210L, 724L, 748L, 1060L) */ ((
					/* 348L, 203L, 211L, 725L, 749L, 1061L) */ (~ (
						var_1_21
					))
				) > (
					var_1_8
				))
			) ? (
				/* 351L, 220L, 728L, 752L, 1064L) */ ((
					var_1_23
				) == (
					/* 351L, 220L, 728L, 752L, 1064L) */ ((unsigned char) (
						/* 354L, 219L, 731L, 755L, 1067L) */ ((
							var_1_24
						) && (
							/* 356L, 218L, 733L, 757L, 1069L) */ (! (
								var_1_25
							))
						))
					))
				))
			) : (
				/* 358L, 232L, 735L, 759L, 1071L) */ ((
					var_1_24
				) ? (
					/* 360L, 230L, 737L, 761L, 1073L) */ ((
						var_1_23
					) == (
						/* 360L, 230L, 737L, 761L, 1073L) */ ((unsigned char) (
							/* 363L, 229L, 740L, 764L, 1076L) */ ((
								/* 364L, 227L, 741L, 765L, 1077L) */ (! (
									var_1_25
								))
							) || (
								var_1_26
							))
						))
					))
				) : (
					1
				))
			))
		) : (
			1
		))
	))
) && (
	/* 369L, 244L, 782L, 788L, 1082L) */ ((
		var_1_27
	) == (
		/* 369L, 244L, 782L, 788L, 1082L) */ ((unsigned char) (
			var_1_21
		))
	))
))
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
