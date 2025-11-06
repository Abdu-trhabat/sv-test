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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch76Filler_PR_CN.c", 13, "reach_error"); }
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
double var_1_1 = 256.5;
unsigned char var_1_2 = 0;
double var_1_3 = 7.5;
double var_1_4 = 256.2;
double var_1_5 = 2.75;
signed long int var_1_6 = -64;
double var_1_7 = 8.05;
float var_1_8 = 5.25;
signed long int var_1_11 = 4;
signed long int var_1_12 = 0;
signed long int var_1_13 = -16;
unsigned short int var_1_14 = 10000;
unsigned short int var_1_15 = 5;
unsigned short int var_1_16 = 5;
unsigned short int var_1_17 = 4;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 8;
double var_1_21 = 63.25;
double var_1_22 = 1.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed long int var_1_27 = 0;
signed long int var_1_28 = -128;
signed short int var_1_29 = 2;
signed short int var_1_30 = 5;
unsigned char var_1_31 = 1;
signed long int var_1_32 = 32;
signed short int var_1_33 = -10;
signed long int var_1_34 = 0;
signed long int var_1_35 = 64;
signed long int var_1_36 = 1;
unsigned char var_1_37 = 1;
unsigned long int var_1_38 = 16;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch76Filler_PR_CN
	/* 851L, 20L, 259L, 275L) */ if (/* 852L, 3L, 4L, 260L, 276L) */ (! (var_1_2))) {
		/* 854L, 15L, 262L, 278L) */ var_1_1 = (
			/* 857L, 14L, 265L, 281L) */ (min (
				/* 857L, 14L, 265L, 281L) */ (
					/* 858L, 12L, 266L, 282L) */ (min (
						/* 858L, 12L, 266L, 282L) */ (
							var_1_3
						) , (
							var_1_4
						)
					))
				) , (
					var_1_5
				)
			))
		);
	} else {
		/* 862L, 19L, 270L, 286L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: CodeObject5
	/* 72L) */ if (/* 61L, 60L) */ ((var_1_29) == (var_1_30))) {
		/* 71L) */ var_1_31 = (
			/* 70L) */ (! (
				var_1_26
			))
		);
	}


	// From: CodeObject7
	/* 166L) */ if (/* 119L, 118L) */ ((var_1_28) < (var_1_32))) {
		/* 128L) */ var_1_34 = (
			var_1_28
		);
	} else {
		/* 164L) */ if (/* 133L, 132L) */ ((/* 134L, 130L) */ (- (var_1_22))) > (var_1_21))) {
			/* 162L) */ if (/* 144L, 143L) */ ((var_1_21) >= (var_1_22))) {
				/* 157L) */ var_1_34 = (
					/* 156L) */ (abs (
						/* 155L) */ (abs (
							/* 154L) */ ((
								var_1_35
							) - (
								var_1_36
							))
						))
					))
				);
			} else {
				/* 161L) */ var_1_34 = (
					var_1_29
				);
			}
		}
	}


	// From: CodeObject9
	/* 212L) */ if (/* 189L, 188L) */ ((/* 190L, 182L) */ (max (/* 190L, 182L) */ (var_1_32) , (var_1_30)))) <= (/* 193L, 187L) */ ((/* 194L, 185L) */ ((var_1_28) & (var_1_36))) & (var_1_35))))) {
		/* 211L) */ var_1_38 = (
			/* 210L) */ (abs (
				var_1_35
			))
		);
	}


	// From: Req2Batch76Filler_PR_CN
	/* 868L, 53L, 324L, 339L) */ if (/* 869L, 30L, 31L, 325L, 340L) */ ((var_1_5) > (/* 871L, 29L, 33L, 327L, 342L) */ ((var_1_3) / (var_1_7))))) {
		/* 874L, 51L, 330L, 345L) */ if (/* 875L, 42L, 43L, 331L, 346L) */ (! (var_1_2))) {
			/* 877L, 50L, 333L, 348L) */ var_1_6 = (
				-10
			);
		}
	}


	// From: Req5Batch76Filler_PR_CN
	/* 926L, 159L, 540L, 559L) */ if (/* 927L, 130L, 131L, 541L, 560L) */ ((var_1_5) >= (var_1_1))) {
		/* 930L, 157L, 544L, 563L) */ if (/* 931L, 140L, 141L, 545L, 564L) */ ((/* 932L, 138L, 142L, 546L, 565L) */ (abs (1.2))) < (var_1_4))) {
			/* 935L, 152L, 549L, 568L) */ var_1_14 = (
				var_1_15
			);
		} else {
			/* 939L, 156L, 553L, 572L) */ var_1_14 = (
				var_1_16
			);
		}
	}


	// From: CodeObject3
	/* 45L) */ var_1_27 = (
		var_1_28
	);


	// From: CodeObject10
	/* 233L) */ if (/* 219L, 218L) */ ((var_1_30) < (var_1_28))) {
		/* 232L) */ var_1_39 = (
			/* 231L) */ (! (
				/* 230L) */ ((
					var_1_26
				) && (
					var_1_40
				))
			))
		);
	}


	// From: Req6Batch76Filler_PR_CN
	/* 945L, 218L, 672L, 700L) */ if (var_1_2) {
		/* 947L, 212L, 674L, 702L) */ if (/* 948L, 174L, 175L, 675L, 703L) */ ((var_1_1) == (var_1_5))) {
			/* 951L, 206L, 678L, 706L) */ if (/* 952L, 187L, 188L, 679L, 707L) */ ((/* 953L, 185L, 189L, 680L, 708L) */ ((128) * (/* 955L, 184L, 191L, 682L, 710L) */ (min (/* 955L, 184L, 191L, 682L, 710L) */ (var_1_14) , (var_1_6)))))) > (1))) {
				/* 959L, 205L, 686L, 714L) */ var_1_17 = (
					var_1_16
				);
			}
		} else {
			/* 963L, 211L, 690L, 718L) */ var_1_17 = (
				var_1_15
			);
		}
	} else {
		/* 967L, 217L, 694L, 722L) */ var_1_17 = (
			var_1_16
		);
	}


	// From: CodeObject4
	/* 53L) */ var_1_29 = (
		var_1_30
	);


	// From: Req4Batch76Filler_PR_CN
	/* 902L, 118L, 438L, 464L) */ if (/* 903L, 93L, 94L, 439L, 465L) */ ((var_1_4) <= (var_1_1))) {
		/* 906L, 105L, 442L, 468L) */ var_1_11 = (
			/* 909L, 104L, 445L, 471L) */ ((
				var_1_14
			) + (
				-128
			))
		);
	} else {
		/* 912L, 117L, 448L, 474L) */ var_1_11 = (
			/* 915L, 116L, 451L, 477L) */ ((
				/* 916L, 110L, 452L, 478L) */ (min (
					/* 916L, 110L, 452L, 478L) */ (
						-256
					) , (
						var_1_14
					)
				))
			) + (
				/* 919L, 115L, 455L, 481L) */ (min (
					/* 919L, 115L, 455L, 481L) */ (
						var_1_12
					) , (
						/* 921L, 114L, 457L, 483L) */ (max (
							/* 921L, 114L, 457L, 483L) */ (
								var_1_13
							) , (
								256
							)
						))
					)
				))
			))
		);
	}


	// From: Req7Batch76Filler_PR_CN
	unsigned short int stepLocal_1 = var_1_16;
	/* 989L, 255L, 783L, 800L) */ if (/* 980L, 232L, 233L, 784L, 801L) */ ((/* 979L, 230L, 234L, 785L, 802L) */ ((var_1_14) + (/* 978L, 229L, 236L, 787L, 804L) */ ((var_1_11) | (var_1_6))))) > (stepLocal_1))) {
		/* 988L, 254L, 791L, 808L) */ var_1_18 = (
			/* 987L, 253L, 794L, 811L) */ ((
				128
			) - (
				/* 986L, 252L, 796L, 813L) */ ((
					var_1_19
				) + (
					var_1_20
				))
			))
		);
	}


	// From: CodeObject1
	/* 5L) */ var_1_21 = (
		var_1_22
	);


	// From: CodeObject8
	/* 175L) */ var_1_37 = (
		/* 174L) */ ((
			var_1_23
		) && (
			var_1_25
		))
	);


	// From: Req3Batch76Filler_PR_CN
	signed long int stepLocal_0 = /* 883L, 63L, 67L, 385L, 398L) */ ((var_1_11) * (var_1_17));
	/* 895L, 85L, 383L, 396L) */ if (/* 888L, 65L, 66L, 384L, 397L) */ ((stepLocal_0) >= (var_1_6))) {
		/* 894L, 83L, 389L, 402L) */ if (var_1_2) {
			/* 893L, 82L, 391L, 404L) */ var_1_8 = (
				var_1_4
			);
		}
	}


	// From: CodeObject2
	/* 38L) */ if (/* 14L, 13L) */ ((var_1_22) < (/* 16L, 12L) */ (- (var_1_21))))) {
		/* 36L) */ if (var_1_24) {
			/* 28L) */ var_1_23 = (
				var_1_25
			);
		} else {
			/* 35L) */ var_1_23 = (
				/* 34L) */ ((
					var_1_25
				) || (
					/* 33L) */ (! (
						var_1_26
					))
				))
			);
		}
	}


	// From: CodeObject6
	/* 112L) */ if (/* 80L, 79L) */ ((var_1_30) < (/* 82L, 78L) */ (abs (var_1_33))))) {
		/* 110L) */ if (/* 94L, 93L) */ ((var_1_25) && (/* 96L, 92L) */ ((/* 97L, 90L) */ (~ (0u))) > (var_1_27))))) {
			/* 109L) */ var_1_32 = (
				var_1_33
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	assume_abort_if_not(var_1_7 != 0.0F);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1073741823);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -1073741823);
	assume_abort_if_not(var_1_13 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 65534);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 64);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -2147483647);
	assume_abort_if_not(var_1_28 <= 2147483646);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -32767);
	assume_abort_if_not(var_1_33 <= 32767);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 2147483646);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 1);
	assume_abort_if_not(var_1_40 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 238L, 3L, 6L, 292L, 308L, 994L) */ (! (var_1_2))) {
	} else {
	}
	if (/* 255L, 30L, 36L, 355L, 370L, 1011L) */ ((var_1_5) > (/* 257L, 29L, 38L, 357L, 372L, 1013L) */ ((var_1_3) / (var_1_7))))) {
		if (/* 261L, 42L, 45L, 361L, 376L, 1017L) */ (! (var_1_2))) {
		}
	}
	if (/* 269L, 65L, 71L, 410L, 423L, 1025L) */ ((/* 270L, 63L, 72L, 411L, 424L, 1026L) */ ((var_1_11) * (var_1_17))) >= (var_1_6))) {
		if (var_1_2) {
		}
	}
	if (/* 285L, 93L, 97L, 491L, 517L, 1041L) */ ((var_1_4) <= (var_1_1))) {
	} else {
	}
	if (/* 309L, 130L, 134L, 579L, 598L, 1065L) */ ((var_1_5) >= (var_1_1))) {
		if (/* 313L, 140L, 145L, 583L, 602L, 1069L) */ ((/* 314L, 138L, 146L, 584L, 603L, 1070L) */ (abs (1.2))) < (var_1_4))) {
		} else {
		}
	}
	if (var_1_2) {
		if (/* 330L, 174L, 178L, 731L, 759L, 1086L) */ ((var_1_1) == (var_1_5))) {
			if (/* 334L, 187L, 195L, 735L, 763L, 1090L) */ ((/* 335L, 185L, 196L, 736L, 764L, 1091L) */ ((128) * (/* 337L, 184L, 198L, 738L, 766L, 1093L) */ (min (/* 337L, 184L, 198L, 738L, 766L, 1093L) */ (var_1_14) , (var_1_6)))))) > (1))) {
			}
		} else {
		}
	} else {
	}
	if (/* 355L, 232L, 240L, 818L, 835L, 1111L) */ ((/* 356L, 230L, 241L, 819L, 836L, 1112L) */ ((var_1_14) + (/* 358L, 229L, 243L, 821L, 838L, 1114L) */ ((var_1_11) | (var_1_6))))) > (var_1_16))) {
	}
	return /* 376L) */ ((
	/* 375L) */ ((
		/* 374L) */ ((
			/* 373L) */ ((
				/* 372L) */ ((
					/* 371L) */ ((
						/* 237L, 21L, 291L, 307L, 993L) */ ((
							/* 238L, 3L, 6L, 292L, 308L, 994L) */ (! (
								var_1_2
							))
						) ? (
							/* 240L, 15L, 294L, 310L, 996L) */ ((
								var_1_1
							) == (
								/* 240L, 15L, 294L, 310L, 996L) */ ((double) (
									/* 243L, 14L, 297L, 313L, 999L) */ (min (
										/* 243L, 14L, 297L, 313L, 999L) */ (
											/* 244L, 12L, 298L, 314L, 1000L) */ (min (
												/* 244L, 12L, 298L, 314L, 1000L) */ (
													var_1_3
												) , (
													var_1_4
												)
											))
										) , (
											var_1_5
										)
									))
								))
							))
						) : (
							/* 248L, 19L, 302L, 318L, 1004L) */ ((
								var_1_1
							) == (
								/* 248L, 19L, 302L, 318L, 1004L) */ ((double) (
									var_1_4
								))
							))
						))
					) && (
						/* 254L, 54L, 354L, 369L, 1010L) */ ((
							/* 255L, 30L, 36L, 355L, 370L, 1011L) */ ((
								var_1_5
							) > (
								/* 257L, 29L, 38L, 357L, 372L, 1013L) */ ((
									var_1_3
								) / (
									var_1_7
								))
							))
						) ? (
							/* 260L, 52L, 360L, 375L, 1016L) */ ((
								/* 261L, 42L, 45L, 361L, 376L, 1017L) */ (! (
									var_1_2
								))
							) ? (
								/* 263L, 50L, 363L, 378L, 1019L) */ ((
									var_1_6
								) == (
									/* 263L, 50L, 363L, 378L, 1019L) */ ((signed long int) (
										-10
									))
								))
							) : (
								1
							))
						) : (
							1
						))
					))
				) && (
					/* 268L, 86L, 409L, 422L, 1024L) */ ((
						/* 269L, 65L, 71L, 410L, 423L, 1025L) */ ((
							/* 270L, 63L, 72L, 411L, 424L, 1026L) */ ((
								var_1_11
							) * (
								var_1_17
							))
						) >= (
							var_1_6
						))
					) ? (
						/* 274L, 84L, 415L, 428L, 1030L) */ ((
							var_1_2
						) ? (
							/* 276L, 82L, 417L, 430L, 1032L) */ ((
								var_1_8
							) == (
								/* 276L, 82L, 417L, 430L, 1032L) */ ((float) (
									var_1_4
								))
							))
						) : (
							1
						))
					) : (
						1
					))
				))
			) && (
				/* 284L, 119L, 490L, 516L, 1040L) */ ((
					/* 285L, 93L, 97L, 491L, 517L, 1041L) */ ((
						var_1_4
					) <= (
						var_1_1
					))
				) ? (
					/* 288L, 105L, 494L, 520L, 1044L) */ ((
						var_1_11
					) == (
						/* 288L, 105L, 494L, 520L, 1044L) */ ((signed long int) (
							/* 291L, 104L, 497L, 523L, 1047L) */ ((
								var_1_14
							) + (
								-128
							))
						))
					))
				) : (
					/* 294L, 117L, 500L, 526L, 1050L) */ ((
						var_1_11
					) == (
						/* 294L, 117L, 500L, 526L, 1050L) */ ((signed long int) (
							/* 297L, 116L, 503L, 529L, 1053L) */ ((
								/* 298L, 110L, 504L, 530L, 1054L) */ (min (
									/* 298L, 110L, 504L, 530L, 1054L) */ (
										-256
									) , (
										var_1_14
									)
								))
							) + (
								/* 301L, 115L, 507L, 533L, 1057L) */ (min (
									/* 301L, 115L, 507L, 533L, 1057L) */ (
										var_1_12
									) , (
										/* 303L, 114L, 509L, 535L, 1059L) */ (max (
											/* 303L, 114L, 509L, 535L, 1059L) */ (
												var_1_13
											) , (
												256
											)
										))
									)
								))
							))
						))
					))
				))
			))
		) && (
			/* 308L, 160L, 578L, 597L, 1064L) */ ((
				/* 309L, 130L, 134L, 579L, 598L, 1065L) */ ((
					var_1_5
				) >= (
					var_1_1
				))
			) ? (
				/* 312L, 158L, 582L, 601L, 1068L) */ ((
					/* 313L, 140L, 145L, 583L, 602L, 1069L) */ ((
						/* 314L, 138L, 146L, 584L, 603L, 1070L) */ (abs (
							1.2
						))
					) < (
						var_1_4
					))
				) ? (
					/* 317L, 152L, 587L, 606L, 1073L) */ ((
						var_1_14
					) == (
						/* 317L, 152L, 587L, 606L, 1073L) */ ((unsigned short int) (
							var_1_15
						))
					))
				) : (
					/* 321L, 156L, 591L, 610L, 1077L) */ ((
						var_1_14
					) == (
						/* 321L, 156L, 591L, 610L, 1077L) */ ((unsigned short int) (
							var_1_16
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 327L, 219L, 728L, 756L, 1083L) */ ((
			var_1_2
		) ? (
			/* 329L, 213L, 730L, 758L, 1085L) */ ((
				/* 330L, 174L, 178L, 731L, 759L, 1086L) */ ((
					var_1_1
				) == (
					var_1_5
				))
			) ? (
				/* 333L, 207L, 734L, 762L, 1089L) */ ((
					/* 334L, 187L, 195L, 735L, 763L, 1090L) */ ((
						/* 335L, 185L, 196L, 736L, 764L, 1091L) */ ((
							128
						) * (
							/* 337L, 184L, 198L, 738L, 766L, 1093L) */ (min (
								/* 337L, 184L, 198L, 738L, 766L, 1093L) */ (
									var_1_14
								) , (
									var_1_6
								)
							))
						))
					) > (
						1
					))
				) ? (
					/* 341L, 205L, 742L, 770L, 1097L) */ ((
						var_1_17
					) == (
						/* 341L, 205L, 742L, 770L, 1097L) */ ((unsigned short int) (
							var_1_16
						))
					))
				) : (
					1
				))
			) : (
				/* 345L, 211L, 746L, 774L, 1101L) */ ((
					var_1_17
				) == (
					/* 345L, 211L, 746L, 774L, 1101L) */ ((unsigned short int) (
						var_1_15
					))
				))
			))
		) : (
			/* 349L, 217L, 750L, 778L, 1105L) */ ((
				var_1_17
			) == (
				/* 349L, 217L, 750L, 778L, 1105L) */ ((unsigned short int) (
					var_1_16
				))
			))
		))
	))
) && (
	/* 354L, 256L, 817L, 834L, 1110L) */ ((
		/* 355L, 232L, 240L, 818L, 835L, 1111L) */ ((
			/* 356L, 230L, 241L, 819L, 836L, 1112L) */ ((
				var_1_14
			) + (
				/* 358L, 229L, 243L, 821L, 838L, 1114L) */ ((
					var_1_11
				) | (
					var_1_6
				))
			))
		) > (
			var_1_16
		))
	) ? (
		/* 362L, 254L, 825L, 842L, 1118L) */ ((
			var_1_18
		) == (
			/* 362L, 254L, 825L, 842L, 1118L) */ ((unsigned char) (
				/* 365L, 253L, 828L, 845L, 1121L) */ ((
					128
				) - (
					/* 367L, 252L, 830L, 847L, 1123L) */ ((
						var_1_19
					) + (
						var_1_20
					))
				))
			))
		))
	) : (
		1
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
