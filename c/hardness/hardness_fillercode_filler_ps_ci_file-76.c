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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch76Filler_PS_CI.c", 13, "reach_error"); }
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
unsigned char var_1_23 = 0;
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
	// From: CodeObject1
	/* 238L, 5L) */ var_1_21 = (
		var_1_4
	);


	// From: CodeObject2
	/* 242L, 38L) */ if (/* 243L, 13L, 14L) */ ((var_1_3) < (/* 245L, 12L, 16L) */ (- (var_1_5))))) {
		/* 247L, 36L) */ if (var_1_2) {
			/* 249L, 28L) */ var_1_23 = (
				var_1_25
			);
		} else {
			/* 253L, 35L) */ var_1_23 = (
				/* 256L, 34L) */ ((
					var_1_25
				) || (
					/* 258L, 33L) */ (! (
						var_1_26
					))
				))
			);
		}
	}


	// From: CodeObject3
	/* 261L, 45L) */ var_1_27 = (
		var_1_13
	);


	// From: CodeObject4
	/* 266L, 53L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject5
	/* 270L, 72L) */ if (/* 271L, 60L, 61L) */ ((var_1_13) == (var_1_30))) {
		/* 274L, 71L) */ var_1_31 = (
			/* 277L, 70L) */ (! (
				var_1_26
			))
		);
	}


	// From: CodeObject6
	/* 279L, 112L) */ if (/* 280L, 79L, 80L) */ ((var_1_30) < (/* 282L, 78L, 82L) */ (abs (var_1_33))))) {
		/* 284L, 110L) */ if (/* 285L, 93L, 94L) */ ((var_1_25) && (/* 287L, 92L, 96L) */ ((/* 288L, 90L, 97L) */ (~ (0u))) > (var_1_6))))) {
			/* 291L, 109L) */ var_1_32 = (
				var_1_33
			);
		}
	}


	// From: CodeObject7
	/* 353L, 166L) */ if (/* 354L, 118L, 119L) */ ((var_1_28) < (var_1_6))) {
		/* 357L, 128L) */ var_1_34 = (
			var_1_28
		);
	} else {
		/* 361L, 164L) */ if (/* 362L, 132L, 133L) */ ((/* 363L, 130L, 134L) */ (- (var_1_5))) > (var_1_1))) {
			/* 366L, 162L) */ if (/* 367L, 143L, 144L) */ ((var_1_1) >= (var_1_5))) {
				/* 370L, 157L) */ var_1_34 = (
					/* 373L, 156L) */ (abs (
						/* 374L, 155L) */ (abs (
							/* 375L, 154L) */ ((
								var_1_35
							) - (
								var_1_36
							))
						))
					))
				);
			} else {
				/* 378L, 161L) */ var_1_34 = (
					var_1_6
				);
			}
		}
	}


	// From: CodeObject8
	/* 383L, 175L) */ var_1_37 = (
		/* 386L, 174L) */ ((
			var_1_2
		) && (
			var_1_25
		))
	);


	// From: CodeObject9
	/* 389L, 212L) */ if (/* 390L, 188L, 189L) */ ((/* 391L, 182L, 190L) */ (max (/* 391L, 182L, 190L) */ (var_1_11) , (var_1_30)))) <= (/* 394L, 187L, 193L) */ ((/* 395L, 185L, 194L) */ ((var_1_12) & (var_1_36))) & (var_1_35))))) {
		/* 399L, 211L) */ var_1_38 = (
			/* 402L, 210L) */ (abs (
				var_1_35
			))
		);
	}


	// From: CodeObject10
	/* 405L, 233L) */ if (/* 406L, 218L, 219L) */ ((var_1_30) < (var_1_12))) {
		/* 409L, 232L) */ var_1_39 = (
			/* 412L, 231L) */ (! (
				/* 413L, 230L) */ ((
					var_1_26
				) && (
					var_1_40
				))
			))
		);
	}


	// From: Req1Batch76Filler_PS_CI
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


	// From: Req2Batch76Filler_PS_CI
	/* 868L, 53L, 324L, 339L) */ if (/* 869L, 30L, 31L, 325L, 340L) */ ((var_1_5) > (/* 871L, 29L, 33L, 327L, 342L) */ ((var_1_3) / (var_1_7))))) {
		/* 874L, 51L, 330L, 345L) */ if (/* 875L, 42L, 43L, 331L, 346L) */ (! (var_1_2))) {
			/* 877L, 50L, 333L, 348L) */ var_1_6 = (
				-10
			);
		}
	}


	// From: Req5Batch76Filler_PS_CI
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


	// From: Req6Batch76Filler_PS_CI
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


	// From: Req4Batch76Filler_PS_CI
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


	// From: Req7Batch76Filler_PS_CI
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


	// From: Req3Batch76Filler_PS_CI
	signed long int stepLocal_0 = /* 883L, 63L, 67L, 385L, 398L) */ ((var_1_11) * (var_1_17));
	/* 895L, 85L, 383L, 396L) */ if (/* 888L, 65L, 66L, 384L, 397L) */ ((stepLocal_0) >= (var_1_6))) {
		/* 894L, 83L, 389L, 402L) */ if (var_1_2) {
			/* 893L, 82L, 391L, 404L) */ var_1_8 = (
				var_1_4
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
	if (/* 417L, 3L, 6L, 292L, 308L, 994L) */ (! (var_1_2))) {
	} else {
	}
	if (/* 434L, 30L, 36L, 355L, 370L, 1011L) */ ((var_1_5) > (/* 436L, 29L, 38L, 357L, 372L, 1013L) */ ((var_1_3) / (var_1_7))))) {
		if (/* 440L, 42L, 45L, 361L, 376L, 1017L) */ (! (var_1_2))) {
		}
	}
	if (/* 448L, 65L, 71L, 410L, 423L, 1025L) */ ((/* 449L, 63L, 72L, 411L, 424L, 1026L) */ ((var_1_11) * (var_1_17))) >= (var_1_6))) {
		if (var_1_2) {
		}
	}
	if (/* 464L, 93L, 97L, 491L, 517L, 1041L) */ ((var_1_4) <= (var_1_1))) {
	} else {
	}
	if (/* 488L, 130L, 134L, 579L, 598L, 1065L) */ ((var_1_5) >= (var_1_1))) {
		if (/* 492L, 140L, 145L, 583L, 602L, 1069L) */ ((/* 493L, 138L, 146L, 584L, 603L, 1070L) */ (abs (1.2))) < (var_1_4))) {
		} else {
		}
	}
	if (var_1_2) {
		if (/* 509L, 174L, 178L, 731L, 759L, 1086L) */ ((var_1_1) == (var_1_5))) {
			if (/* 513L, 187L, 195L, 735L, 763L, 1090L) */ ((/* 514L, 185L, 196L, 736L, 764L, 1091L) */ ((128) * (/* 516L, 184L, 198L, 738L, 766L, 1093L) */ (min (/* 516L, 184L, 198L, 738L, 766L, 1093L) */ (var_1_14) , (var_1_6)))))) > (1))) {
			}
		} else {
		}
	} else {
	}
	if (/* 534L, 232L, 240L, 818L, 835L, 1111L) */ ((/* 535L, 230L, 241L, 819L, 836L, 1112L) */ ((var_1_14) + (/* 537L, 229L, 243L, 821L, 838L, 1114L) */ ((var_1_11) | (var_1_6))))) > (var_1_16))) {
	}
	return /* 555L) */ ((
	/* 554L) */ ((
		/* 553L) */ ((
			/* 552L) */ ((
				/* 551L) */ ((
					/* 550L) */ ((
						/* 416L, 21L, 291L, 307L, 993L) */ ((
							/* 417L, 3L, 6L, 292L, 308L, 994L) */ (! (
								var_1_2
							))
						) ? (
							/* 419L, 15L, 294L, 310L, 996L) */ ((
								var_1_1
							) == (
								/* 419L, 15L, 294L, 310L, 996L) */ ((double) (
									/* 422L, 14L, 297L, 313L, 999L) */ (min (
										/* 422L, 14L, 297L, 313L, 999L) */ (
											/* 423L, 12L, 298L, 314L, 1000L) */ (min (
												/* 423L, 12L, 298L, 314L, 1000L) */ (
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
							/* 427L, 19L, 302L, 318L, 1004L) */ ((
								var_1_1
							) == (
								/* 427L, 19L, 302L, 318L, 1004L) */ ((double) (
									var_1_4
								))
							))
						))
					) && (
						/* 433L, 54L, 354L, 369L, 1010L) */ ((
							/* 434L, 30L, 36L, 355L, 370L, 1011L) */ ((
								var_1_5
							) > (
								/* 436L, 29L, 38L, 357L, 372L, 1013L) */ ((
									var_1_3
								) / (
									var_1_7
								))
							))
						) ? (
							/* 439L, 52L, 360L, 375L, 1016L) */ ((
								/* 440L, 42L, 45L, 361L, 376L, 1017L) */ (! (
									var_1_2
								))
							) ? (
								/* 442L, 50L, 363L, 378L, 1019L) */ ((
									var_1_6
								) == (
									/* 442L, 50L, 363L, 378L, 1019L) */ ((signed long int) (
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
					/* 447L, 86L, 409L, 422L, 1024L) */ ((
						/* 448L, 65L, 71L, 410L, 423L, 1025L) */ ((
							/* 449L, 63L, 72L, 411L, 424L, 1026L) */ ((
								var_1_11
							) * (
								var_1_17
							))
						) >= (
							var_1_6
						))
					) ? (
						/* 453L, 84L, 415L, 428L, 1030L) */ ((
							var_1_2
						) ? (
							/* 455L, 82L, 417L, 430L, 1032L) */ ((
								var_1_8
							) == (
								/* 455L, 82L, 417L, 430L, 1032L) */ ((float) (
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
				/* 463L, 119L, 490L, 516L, 1040L) */ ((
					/* 464L, 93L, 97L, 491L, 517L, 1041L) */ ((
						var_1_4
					) <= (
						var_1_1
					))
				) ? (
					/* 467L, 105L, 494L, 520L, 1044L) */ ((
						var_1_11
					) == (
						/* 467L, 105L, 494L, 520L, 1044L) */ ((signed long int) (
							/* 470L, 104L, 497L, 523L, 1047L) */ ((
								var_1_14
							) + (
								-128
							))
						))
					))
				) : (
					/* 473L, 117L, 500L, 526L, 1050L) */ ((
						var_1_11
					) == (
						/* 473L, 117L, 500L, 526L, 1050L) */ ((signed long int) (
							/* 476L, 116L, 503L, 529L, 1053L) */ ((
								/* 477L, 110L, 504L, 530L, 1054L) */ (min (
									/* 477L, 110L, 504L, 530L, 1054L) */ (
										-256
									) , (
										var_1_14
									)
								))
							) + (
								/* 480L, 115L, 507L, 533L, 1057L) */ (min (
									/* 480L, 115L, 507L, 533L, 1057L) */ (
										var_1_12
									) , (
										/* 482L, 114L, 509L, 535L, 1059L) */ (max (
											/* 482L, 114L, 509L, 535L, 1059L) */ (
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
			/* 487L, 160L, 578L, 597L, 1064L) */ ((
				/* 488L, 130L, 134L, 579L, 598L, 1065L) */ ((
					var_1_5
				) >= (
					var_1_1
				))
			) ? (
				/* 491L, 158L, 582L, 601L, 1068L) */ ((
					/* 492L, 140L, 145L, 583L, 602L, 1069L) */ ((
						/* 493L, 138L, 146L, 584L, 603L, 1070L) */ (abs (
							1.2
						))
					) < (
						var_1_4
					))
				) ? (
					/* 496L, 152L, 587L, 606L, 1073L) */ ((
						var_1_14
					) == (
						/* 496L, 152L, 587L, 606L, 1073L) */ ((unsigned short int) (
							var_1_15
						))
					))
				) : (
					/* 500L, 156L, 591L, 610L, 1077L) */ ((
						var_1_14
					) == (
						/* 500L, 156L, 591L, 610L, 1077L) */ ((unsigned short int) (
							var_1_16
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 506L, 219L, 728L, 756L, 1083L) */ ((
			var_1_2
		) ? (
			/* 508L, 213L, 730L, 758L, 1085L) */ ((
				/* 509L, 174L, 178L, 731L, 759L, 1086L) */ ((
					var_1_1
				) == (
					var_1_5
				))
			) ? (
				/* 512L, 207L, 734L, 762L, 1089L) */ ((
					/* 513L, 187L, 195L, 735L, 763L, 1090L) */ ((
						/* 514L, 185L, 196L, 736L, 764L, 1091L) */ ((
							128
						) * (
							/* 516L, 184L, 198L, 738L, 766L, 1093L) */ (min (
								/* 516L, 184L, 198L, 738L, 766L, 1093L) */ (
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
					/* 520L, 205L, 742L, 770L, 1097L) */ ((
						var_1_17
					) == (
						/* 520L, 205L, 742L, 770L, 1097L) */ ((unsigned short int) (
							var_1_16
						))
					))
				) : (
					1
				))
			) : (
				/* 524L, 211L, 746L, 774L, 1101L) */ ((
					var_1_17
				) == (
					/* 524L, 211L, 746L, 774L, 1101L) */ ((unsigned short int) (
						var_1_15
					))
				))
			))
		) : (
			/* 528L, 217L, 750L, 778L, 1105L) */ ((
				var_1_17
			) == (
				/* 528L, 217L, 750L, 778L, 1105L) */ ((unsigned short int) (
					var_1_16
				))
			))
		))
	))
) && (
	/* 533L, 256L, 817L, 834L, 1110L) */ ((
		/* 534L, 232L, 240L, 818L, 835L, 1111L) */ ((
			/* 535L, 230L, 241L, 819L, 836L, 1112L) */ ((
				var_1_14
			) + (
				/* 537L, 229L, 243L, 821L, 838L, 1114L) */ ((
					var_1_11
				) | (
					var_1_6
				))
			))
		) > (
			var_1_16
		))
	) ? (
		/* 541L, 254L, 825L, 842L, 1118L) */ ((
			var_1_18
		) == (
			/* 541L, 254L, 825L, 842L, 1118L) */ ((unsigned char) (
				/* 544L, 253L, 828L, 845L, 1121L) */ ((
					128
				) - (
					/* 546L, 252L, 830L, 847L, 1123L) */ ((
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
