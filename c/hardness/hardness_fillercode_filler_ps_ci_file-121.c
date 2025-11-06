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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch121Filler_PS_CI.c", 13, "reach_error"); }
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
signed char var_1_1 = 1;
double var_1_2 = 99.5;
double var_1_3 = 128.625;
double var_1_4 = 0.6;
double var_1_5 = 15.7;
double var_1_6 = 16.5;
double var_1_7 = 24.5;
unsigned char var_1_8 = 0;
signed char var_1_9 = 100;
signed long int var_1_10 = 64;
signed long int var_1_11 = 64;
signed long int var_1_12 = 25;
signed long int var_1_13 = 1537575239;
signed long int var_1_14 = 100;
signed long int var_1_15 = 128;
signed char var_1_16 = 32;
signed char var_1_17 = -4;
signed char var_1_18 = 16;
signed char var_1_19 = -1;
signed char var_1_20 = 8;
signed char var_1_21 = 32;
signed short int var_1_22 = 25;
unsigned short int var_1_23 = 16;
float var_1_24 = 7.5;
float var_1_25 = 1.75;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned long int var_1_30 = 256;
unsigned long int var_1_38 = 8;
signed char var_1_39 = -10;
signed long int var_1_41 = 5;
signed char var_1_42 = -32;
double var_1_44 = 25.8;
double var_1_45 = 99.6;
double var_1_46 = 4.5;
double var_1_47 = 0.53;
unsigned char var_1_48 = 1;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
float var_1_55 = 255.6;
signed long int var_1_57 = -10;
double var_1_58 = 99999999.5;
double var_1_59 = 49.17;

// Calibration values

// Last'ed variables
signed char last_1_var_1_16 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 296L, 114L) */ if (/* 297L, 55L, 56L) */ ((/* 298L, 53L, 57L) */ (- (/* 299L, 52L, 58L) */ ((var_1_3) + (var_1_6))))) <= (var_1_2))) {
		/* 303L, 112L) */ if (/* 304L, 75L, 76L) */ ((/* 305L, 69L, 77L) */ (~ (var_1_14))) > (/* 307L, 74L, 79L) */ ((var_1_12) | (/* 309L, 73L, 81L) */ ((var_1_10) | (var_1_11))))))) {
			/* 312L, 105L) */ if (/* 313L, 94L, 95L) */ ((var_1_6) <= (var_1_3))) {
				/* 316L, 104L) */ var_1_30 = (
					var_1_38
				);
			}
		} else {
			/* 320L, 111L) */ var_1_30 = (
				/* 323L, 110L) */ (abs (
					var_1_38
				))
			);
		}
	}


	// From: CodeObject2
	/* 326L, 121L) */ var_1_39 = (
		var_1_9
	);


	// From: CodeObject3
	/* 331L, 129L) */ var_1_41 = (
		var_1_18
	);


	// From: CodeObject4
	/* 335L, 152L) */ if (/* 336L, 137L, 138L) */ (! (/* 337L, 136L, 139L) */ ((var_1_15) >= (var_1_12))))) {
		/* 340L, 151L) */ var_1_42 = (
			/* 343L, 150L) */ ((
				var_1_18
			) + (
				1
			))
		);
	}


	// From: CodeObject5
	/* 347L, 173L) */ if (/* 348L, 158L, 159L) */ ((var_1_25) <= (var_1_7))) {
		/* 351L, 172L) */ var_1_44 = (
			/* 354L, 171L) */ ((
				/* 355L, 169L) */ ((
					var_1_45
				) - (
					var_1_46
				))
			) + (
				var_1_47
			))
		);
	}


	// From: CodeObject6
	/* 473L, 245L) */ if (/* 474L, 190L, 191L) */ ((var_1_11) >= (/* 476L, 189L, 193L) */ ((/* 477L, 187L, 194L) */ ((64) - (var_1_13))) * (var_1_13))))) {
		/* 481L, 236L) */ if (/* 482L, 207L, 208L) */ ((var_1_7) >= (var_1_4))) {
			/* 485L, 228L) */ if (var_1_26) {
				/* 487L, 222L) */ var_1_48 = (
					/* 490L, 221L) */ ((
						var_1_26
					) || (
						var_1_27
					))
				);
			} else {
				/* 493L, 227L) */ var_1_48 = (
					/* 496L, 226L) */ (! (
						var_1_27
					))
				);
			}
		} else {
			/* 498L, 235L) */ var_1_48 = (
				/* 501L, 234L) */ ((
					var_1_53
				) || (
					var_1_54
				))
			);
		}
	} else {
		/* 504L, 244L) */ var_1_48 = (
			/* 507L, 243L) */ ((
				var_1_53
			) || (
				/* 509L, 242L) */ (! (
					var_1_27
				))
			))
		);
	}


	// From: CodeObject7
	/* 511L, 270L) */ if (/* 512L, 253L, 254L) */ ((var_1_5) > (/* 514L, 252L, 256L) */ ((var_1_45) / (var_1_6))))) {
		/* 517L, 269L) */ var_1_55 = (
			/* 520L, 268L) */ (min (
				/* 520L, 268L) */ (
					var_1_47
				) , (
					var_1_45
				)
			))
		);
	}


	// From: CodeObject8
	/* 524L, 277L) */ var_1_57 = (
		var_1_19
	);


	// From: CodeObject9
	/* 529L, 285L) */ var_1_58 = (
		var_1_46
	);


	// From: CodeObject10
	/* 534L, 293L) */ var_1_59 = (
		var_1_45
	);


	// From: Req2Batch121Filler_PS_CI
	/* 22L, 121L, 410L, 433L, 928L, 983L) */ if (/* 2L, 96L, 97L, 411L, 434L, 908L, 984L) */ ((var_1_5) < (var_1_2))) {
		/* 11L, 110L, 414L, 437L, 917L, 987L) */ var_1_10 = (
			/* 10L, 109L, 417L, 440L, 916L, 990L) */ (min (
				/* 10L, 109L, 417L, 440L, 916L, 990L) */ (
					/* 7L, 107L, 418L, 441L, 913L, 991L) */ ((
						var_1_11
					) - (
						var_1_12
					))
				) , (
					last_1_var_1_16
				)
			))
		);
	} else {
		/* 21L, 120L, 422L, 445L, 927L, 996L) */ var_1_10 = (
			/* 20L, 119L, 425L, 448L, 926L, 999L) */ ((
				var_1_12
			) - (
				/* 19L, 118L, 427L, 450L, 925L, 1001L) */ ((
					var_1_13
				) - (
					/* 18L, 117L, 429L, 452L, 924L, 1003L) */ (max (
						/* 18L, 117L, 429L, 452L, 924L, 1003L) */ (
							var_1_14
						) , (
							var_1_15
						)
					))
				))
			))
		);
	}


	// From: Req4Batch121Filler_PS_CI
	signed long int stepLocal_0 = var_1_11;
	/* 1039L, 175L, 546L, 567L) */ if (/* 1022L, 152L, 153L, 547L, 568L) */ ((var_1_13) == (stepLocal_0))) {
		/* 1034L, 170L, 550L, 571L) */ var_1_17 = (
			/* 1033L, 169L, 553L, 574L) */ ((
				/* 1029L, 165L, 554L, 575L) */ (min (
					/* 1029L, 165L, 554L, 575L) */ (
						/* 1027L, 163L, 555L, 576L) */ ((
							var_1_18
						) + (
							50
						))
					) , (
						var_1_19
					)
				))
			) - (
				/* 1032L, 168L, 559L, 580L) */ ((
					var_1_20
				) + (
					var_1_21
				))
			))
		);
	} else {
		/* 1038L, 174L, 562L, 583L) */ var_1_17 = (
			var_1_20
		);
	}


	// From: Req6Batch121Filler_PS_CI
	/* 1061L, 230L, 702L, 717L) */ if (/* 1062L, 213L, 214L, 703L, 718L) */ ((var_1_5) >= (var_1_3))) {
		/* 1065L, 223L, 706L, 721L) */ var_1_23 = (
			var_1_21
		);
	} else {
		/* 1069L, 229L, 710L, 725L) */ var_1_23 = (
			/* 1072L, 228L, 713L, 728L) */ (max (
				/* 1072L, 228L, 713L, 728L) */ (
					var_1_18
				) , (
					var_1_21
				)
			))
		);
	}


	// From: Req7Batch121Filler_PS_CI
	/* 1079L, 241L, 765L, 775L) */ var_1_24 = (
		/* 1082L, 240L, 768L, 778L) */ (min (
			/* 1082L, 240L, 768L, 778L) */ (
				4.4f
			) , (
				var_1_25
			)
		))
	);


	// From: Req8Batch121Filler_PS_CI
	/* 1087L, 288L, 803L, 829L) */ if (/* 1088L, 256L, 257L, 804L, 830L) */ ((var_1_15) <= (/* 1090L, 255L, 259L, 806L, 832L) */ (max (/* 1090L, 255L, 259L, 806L, 832L) */ (-5) , (var_1_10)))))) {
		/* 1093L, 274L, 809L, 835L) */ var_1_26 = (
			/* 1096L, 273L, 812L, 838L) */ ((
				var_1_8
			) || (
				/* 1098L, 272L, 814L, 840L) */ ((
					var_1_27
				) && (
					var_1_28
				))
			))
		);
	} else {
		/* 1101L, 286L, 817L, 843L) */ if (var_1_27) {
			/* 1103L, 281L, 819L, 845L) */ var_1_26 = (
				var_1_29
			);
		} else {
			/* 1107L, 285L, 823L, 849L) */ var_1_26 = (
				var_1_28
			);
		}
	}


	// From: Req1Batch121Filler_PS_CI
	/* 956L, 84L, 296L, 325L) */ if (/* 957L, 12L, 13L, 297L, 326L) */ ((/* 958L, 6L, 14L, 298L, 327L) */ ((var_1_2) / (/* 960L, 5L, 16L, 300L, 329L) */ (min (/* 960L, 5L, 16L, 300L, 329L) */ (var_1_3) , (var_1_4)))))) <= (/* 963L, 11L, 19L, 303L, 332L) */ ((var_1_5) / (/* 965L, 10L, 21L, 305L, 334L) */ (min (/* 965L, 10L, 21L, 305L, 334L) */ (var_1_6) , (var_1_7)))))))) {
		/* 968L, 78L, 308L, 337L) */ if (var_1_26) {
			/* 970L, 41L, 310L, 339L) */ var_1_1 = (
				var_1_9
			);
		} else {
			/* 974L, 77L, 314L, 343L) */ var_1_1 = (
				64
			);
		}
	} else {
		/* 978L, 83L, 318L, 347L) */ var_1_1 = (
			var_1_9
		);
	}


	// From: Req5Batch121Filler_PS_CI
	/* 1044L, 198L, 631L, 649L) */ if (var_1_26) {
		/* 1046L, 193L, 633L, 651L) */ var_1_22 = (
			/* 1049L, 192L, 636L, 654L) */ (min (
				/* 1049L, 192L, 636L, 654L) */ (
					/* 1050L, 188L, 637L, 655L) */ ((
						var_1_18
					) - (
						var_1_20
					))
				) , (
					/* 1053L, 191L, 640L, 658L) */ ((
						var_1_19
					) + (
						var_1_9
					))
				)
			))
		);
	} else {
		/* 1056L, 197L, 643L, 661L) */ var_1_22 = (
			4
		);
	}


	// From: Req3Batch121Filler_PS_CI
	/* 1009L, 140L, 504L, 515L) */ if (/* 1010L, 129L, 130L, 505L, 516L) */ ((var_1_17) < (var_1_10))) {
		/* 1013L, 139L, 508L, 519L) */ var_1_16 = (
			var_1_9
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(var_1_3 != 0.0F);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	assume_abort_if_not(var_1_4 != 0.0F);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	assume_abort_if_not(var_1_6 != 0.0F);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	assume_abort_if_not(var_1_7 != 0.0F);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_9 >= -127);
	assume_abort_if_not(var_1_9 <= 126);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -1);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 1073741823);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1073741823);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 1);
	assume_abort_if_not(var_1_28 <= 1);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -461168.6018427383000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_53 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_53 >= 0);
	assume_abort_if_not(var_1_53 <= 0);
	var_1_54 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_54 >= 0);
	assume_abort_if_not(var_1_54 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	if (/* 541L, 12L, 24L, 355L, 384L, 1115L) */ ((/* 542L, 6L, 25L, 356L, 385L, 1116L) */ ((var_1_2) / (/* 544L, 5L, 27L, 358L, 387L, 1118L) */ (min (/* 544L, 5L, 27L, 358L, 387L, 1118L) */ (var_1_3) , (var_1_4)))))) <= (/* 547L, 11L, 30L, 361L, 390L, 1121L) */ ((var_1_5) / (/* 549L, 10L, 32L, 363L, 392L, 1123L) */ (min (/* 549L, 10L, 32L, 363L, 392L, 1123L) */ (var_1_6) , (var_1_7)))))))) {
		if (var_1_26) {
		} else {
		}
	} else {
	}
	if (/* 568L, 96L, 100L, 457L, 480L, 932L, 1142L, 26L) */ ((var_1_5) < (var_1_2))) {
	} else {
	}
	if (/* 594L, 129L, 133L, 527L, 538L, 1168L) */ ((var_1_17) < (var_1_10))) {
	}
	if (/* 603L, 152L, 156L, 589L, 610L, 1177L) */ ((var_1_13) == (var_1_11))) {
	} else {
	}
	if (var_1_26) {
	} else {
	}
	if (/* 642L, 213L, 217L, 733L, 748L, 1216L) */ ((var_1_5) >= (var_1_3))) {
	} else {
	}
	if (/* 668L, 256L, 262L, 856L, 882L, 1242L) */ ((var_1_15) <= (/* 670L, 255L, 264L, 858L, 884L, 1244L) */ (max (/* 670L, 255L, 264L, 858L, 884L, 1244L) */ (-5) , (var_1_10)))))) {
	} else {
		if (var_1_27) {
		} else {
		}
	}
	return /* 698L) */ ((
	/* 697L) */ ((
		/* 696L) */ ((
			/* 695L) */ ((
				/* 694L) */ ((
					/* 693L) */ ((
						/* 692L) */ ((
							/* 540L, 85L, 354L, 383L, 1114L) */ ((
								/* 541L, 12L, 24L, 355L, 384L, 1115L) */ ((
									/* 542L, 6L, 25L, 356L, 385L, 1116L) */ ((
										var_1_2
									) / (
										/* 544L, 5L, 27L, 358L, 387L, 1118L) */ (min (
											/* 544L, 5L, 27L, 358L, 387L, 1118L) */ (
												var_1_3
											) , (
												var_1_4
											)
										))
									))
								) <= (
									/* 547L, 11L, 30L, 361L, 390L, 1121L) */ ((
										var_1_5
									) / (
										/* 549L, 10L, 32L, 363L, 392L, 1123L) */ (min (
											/* 549L, 10L, 32L, 363L, 392L, 1123L) */ (
												var_1_6
											) , (
												var_1_7
											)
										))
									))
								))
							) ? (
								/* 552L, 79L, 366L, 395L, 1126L) */ ((
									var_1_26
								) ? (
									/* 554L, 41L, 368L, 397L, 1128L) */ ((
										var_1_1
									) == (
										/* 554L, 41L, 368L, 397L, 1128L) */ ((signed char) (
											var_1_9
										))
									))
								) : (
									/* 558L, 77L, 372L, 401L, 1132L) */ ((
										var_1_1
									) == (
										/* 558L, 77L, 372L, 401L, 1132L) */ ((signed char) (
											64
										))
									))
								))
							) : (
								/* 562L, 83L, 376L, 405L, 1136L) */ ((
									var_1_1
								) == (
									/* 562L, 83L, 376L, 405L, 1136L) */ ((signed char) (
										var_1_9
									))
								))
							))
						) && (
							/* 567L, 122L, 456L, 479L, 952L, 1141L, 46L) */ ((
								/* 568L, 96L, 100L, 457L, 480L, 932L, 1142L, 26L) */ ((
									var_1_5
								) < (
									var_1_2
								))
							) ? (
								/* 571L, 110L, 460L, 483L, 941L, 1145L, 35L) */ ((
									var_1_10
								) == (
									/* 571L, 110L, 460L, 483L, 941L, 1145L, 35L) */ ((signed long int) (
										/* 574L, 109L, 463L, 486L, 940L, 1148L, 34L) */ (min (
											/* 574L, 109L, 463L, 486L, 940L, 1148L, 34L) */ (
												/* 575L, 107L, 464L, 487L, 937L, 1149L, 31L) */ ((
													var_1_11
												) - (
													var_1_12
												))
											) , (
												last_1_var_1_16
											)
										))
									))
								))
							) : (
								/* 580L, 120L, 468L, 491L, 951L, 1154L, 45L) */ ((
									var_1_10
								) == (
									/* 580L, 120L, 468L, 491L, 951L, 1154L, 45L) */ ((signed long int) (
										/* 583L, 119L, 471L, 494L, 950L, 1157L, 44L) */ ((
											var_1_12
										) - (
											/* 585L, 118L, 473L, 496L, 949L, 1159L, 43L) */ ((
												var_1_13
											) - (
												/* 587L, 117L, 475L, 498L, 948L, 1161L, 42L) */ (max (
													/* 587L, 117L, 475L, 498L, 948L, 1161L, 42L) */ (
														var_1_14
													) , (
														var_1_15
													)
												))
											))
										))
									))
								))
							))
						))
					) && (
						/* 593L, 141L, 526L, 537L, 1167L) */ ((
							/* 594L, 129L, 133L, 527L, 538L, 1168L) */ ((
								var_1_17
							) < (
								var_1_10
							))
						) ? (
							/* 597L, 139L, 530L, 541L, 1171L) */ ((
								var_1_16
							) == (
								/* 597L, 139L, 530L, 541L, 1171L) */ ((signed char) (
									var_1_9
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 602L, 176L, 588L, 609L, 1176L) */ ((
						/* 603L, 152L, 156L, 589L, 610L, 1177L) */ ((
							var_1_13
						) == (
							var_1_11
						))
					) ? (
						/* 606L, 170L, 592L, 613L, 1180L) */ ((
							var_1_17
						) == (
							/* 606L, 170L, 592L, 613L, 1180L) */ ((signed char) (
								/* 609L, 169L, 595L, 616L, 1183L) */ ((
									/* 610L, 165L, 596L, 617L, 1184L) */ (min (
										/* 610L, 165L, 596L, 617L, 1184L) */ (
											/* 611L, 163L, 597L, 618L, 1185L) */ ((
												var_1_18
											) + (
												50
											))
										) , (
											var_1_19
										)
									))
								) - (
									/* 615L, 168L, 601L, 622L, 1189L) */ ((
										var_1_20
									) + (
										var_1_21
									))
								))
							))
						))
					) : (
						/* 618L, 174L, 604L, 625L, 1192L) */ ((
							var_1_17
						) == (
							/* 618L, 174L, 604L, 625L, 1192L) */ ((signed char) (
								var_1_20
							))
						))
					))
				))
			) && (
				/* 624L, 199L, 667L, 685L, 1198L) */ ((
					var_1_26
				) ? (
					/* 626L, 193L, 669L, 687L, 1200L) */ ((
						var_1_22
					) == (
						/* 626L, 193L, 669L, 687L, 1200L) */ ((signed short int) (
							/* 629L, 192L, 672L, 690L, 1203L) */ (min (
								/* 629L, 192L, 672L, 690L, 1203L) */ (
									/* 630L, 188L, 673L, 691L, 1204L) */ ((
										var_1_18
									) - (
										var_1_20
									))
								) , (
									/* 633L, 191L, 676L, 694L, 1207L) */ ((
										var_1_19
									) + (
										var_1_9
									))
								)
							))
						))
					))
				) : (
					/* 636L, 197L, 679L, 697L, 1210L) */ ((
						var_1_22
					) == (
						/* 636L, 197L, 679L, 697L, 1210L) */ ((signed short int) (
							4
						))
					))
				))
			))
		) && (
			/* 641L, 231L, 732L, 747L, 1215L) */ ((
				/* 642L, 213L, 217L, 733L, 748L, 1216L) */ ((
					var_1_5
				) >= (
					var_1_3
				))
			) ? (
				/* 645L, 223L, 736L, 751L, 1219L) */ ((
					var_1_23
				) == (
					/* 645L, 223L, 736L, 751L, 1219L) */ ((unsigned short int) (
						var_1_21
					))
				))
			) : (
				/* 649L, 229L, 740L, 755L, 1223L) */ ((
					var_1_23
				) == (
					/* 649L, 229L, 740L, 755L, 1223L) */ ((unsigned short int) (
						/* 652L, 228L, 743L, 758L, 1226L) */ (max (
							/* 652L, 228L, 743L, 758L, 1226L) */ (
								var_1_18
							) , (
								var_1_21
							)
						))
					))
				))
			))
		))
	) && (
		/* 659L, 241L, 785L, 795L, 1233L) */ ((
			var_1_24
		) == (
			/* 659L, 241L, 785L, 795L, 1233L) */ ((float) (
				/* 662L, 240L, 788L, 798L, 1236L) */ (min (
					/* 662L, 240L, 788L, 798L, 1236L) */ (
						4.4f
					) , (
						var_1_25
					)
				))
			))
		))
	))
) && (
	/* 667L, 289L, 855L, 881L, 1241L) */ ((
		/* 668L, 256L, 262L, 856L, 882L, 1242L) */ ((
			var_1_15
		) <= (
			/* 670L, 255L, 264L, 858L, 884L, 1244L) */ (max (
				/* 670L, 255L, 264L, 858L, 884L, 1244L) */ (
					-5
				) , (
					var_1_10
				)
			))
		))
	) ? (
		/* 673L, 274L, 861L, 887L, 1247L) */ ((
			var_1_26
		) == (
			/* 673L, 274L, 861L, 887L, 1247L) */ ((unsigned char) (
				/* 676L, 273L, 864L, 890L, 1250L) */ ((
					var_1_8
				) || (
					/* 678L, 272L, 866L, 892L, 1252L) */ ((
						var_1_27
					) && (
						var_1_28
					))
				))
			))
		))
	) : (
		/* 681L, 287L, 869L, 895L, 1255L) */ ((
			var_1_27
		) ? (
			/* 683L, 281L, 871L, 897L, 1257L) */ ((
				var_1_26
			) == (
				/* 683L, 281L, 871L, 897L, 1257L) */ ((unsigned char) (
					var_1_29
				))
			))
		) : (
			/* 687L, 285L, 875L, 901L, 1261L) */ ((
				var_1_26
			) == (
				/* 687L, 285L, 875L, 901L, 1261L) */ ((unsigned char) (
					var_1_28
				))
			))
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
