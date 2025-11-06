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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch174Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 4;
signed short int var_1_4 = 50;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 16;
double var_1_14 = 0.5;
unsigned char var_1_15 = 1;
double var_1_16 = 500.75;
double var_1_17 = 1.8;
double var_1_18 = 0.0;
double var_1_19 = 64.8;
unsigned long int var_1_20 = 200;
float var_1_21 = 256.5;
float var_1_22 = 2.875;
unsigned short int var_1_23 = 128;
signed char var_1_24 = -50;
signed short int var_1_31 = 0;
signed char var_1_33 = 32;
signed short int var_1_34 = -16;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
signed long int var_1_39 = -64;
signed long int var_1_42 = 4;
unsigned short int var_1_43 = 5;
unsigned char var_1_44 = 2;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_20 = 200;
unsigned short int last_1_var_1_23 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch174Filler_PR_CI
	signed long int stepLocal_0 = last_1_var_1_23;
	/* 34L, 78L, 314L, 345L, 833L, 915L) */ if (var_1_8) {
		/* 10L, 39L, 316L, 347L, 808L, 892L) */ if (var_1_9) {
			/* 9L, 38L, 318L, 349L, 807L, 891L) */ var_1_7 = (
				var_1_5
			);
		}
	} else {
		/* 33L, 76L, 322L, 353L, 832L, 914L) */ if (/* 18L, 47L, 48L, 323L, 354L, 817L, 899L) */ ((stepLocal_0) == (/* 17L, 46L, 50L, 325L, 356L, 816L, 898L) */ ((last_1_var_1_20) & (/* 16L, 45L, 52L, 327L, 358L, 815L, 897L) */ (min (/* 16L, 45L, 52L, 327L, 358L, 815L, 897L) */ (var_1_6) , (var_1_5)))))))) {
			/* 28L, 71L, 330L, 361L, 827L, 909L) */ var_1_7 = (
				/* 27L, 70L, 333L, 364L, 826L, 908L) */ ((
					/* 23L, 66L, 334L, 365L, 822L, 904L) */ ((
						var_1_10
					) - (
						var_1_11
					))
				) - (
					/* 26L, 69L, 337L, 368L, 825L, 907L) */ ((
						var_1_12
					) + (
						var_1_13
					))
				))
			);
		} else {
			/* 32L, 75L, 340L, 371L, 831L, 913L) */ var_1_7 = (
				var_1_11
			);
		}
	}


	// From: CodeObject1
	/* 349L, 102L) */ if (/* 350L, 76L, 77L) */ ((var_1_6) != (/* 352L, 75L, 79L) */ ((var_1_20) / (var_1_10))))) {
		/* 355L, 95L) */ var_1_24 = (
			/* 358L, 94L) */ (abs (
				/* 359L, 93L) */ ((
					/* 360L, 91L) */ (max (
						/* 360L, 91L) */ (
							var_1_12
						) , (
							var_1_13
						)
					))
				) - (
					var_1_12
				))
			))
		);
	} else {
		/* 364L, 101L) */ var_1_24 = (
			/* 367L, 100L) */ ((
				var_1_12
			) - (
				var_1_13
			))
		);
	}


	// From: CodeObject3
	/* 385L, 140L) */ var_1_33 = (
		var_1_11
	);


	// From: Req3Batch174Filler_PR_CI
	unsigned char stepLocal_2 = var_1_15;
	signed long int stepLocal_1 = /* 920L, 88L, 92L, 440L, 469L) */ ((var_1_11) / (var_1_10));
	/* 950L, 130L, 438L, 467L) */ if (/* 928L, 90L, 91L, 439L, 468L) */ ((stepLocal_1) == (var_1_6))) {
		/* 943L, 122L, 444L, 473L) */ if (/* 930L, 103L, 104L, 445L, 474L) */ ((stepLocal_2) || (var_1_8))) {
			/* 942L, 121L, 448L, 477L) */ var_1_14 = (
				/* 941L, 120L, 451L, 480L) */ ((
					/* 939L, 118L, 452L, 481L) */ (min (
						/* 939L, 118L, 452L, 481L) */ (
							/* 935L, 114L, 453L, 482L) */ (max (
								/* 935L, 114L, 453L, 482L) */ (
									var_1_16
								) , (
									var_1_17
								)
							))
						) , (
							/* 938L, 117L, 456L, 485L) */ ((
								var_1_18
							) - (
								var_1_19
							))
						)
					))
				) - (
					49.6
				))
			);
		}
	} else {
		/* 949L, 129L, 460L, 489L) */ var_1_14 = (
			/* 948L, 128L, 463L, 492L) */ ((
				256.5
			) - (
				var_1_19
			))
		);
	}


	// From: Req5Batch174Filler_PR_CI
	unsigned char stepLocal_5 = var_1_6;
	/* 999L, 207L, 650L, 663L) */ if (/* 992L, 187L, 188L, 651L, 664L) */ ((stepLocal_5) >= (/* 991L, 186L, 190L, 653L, 666L) */ ((var_1_4) % (var_1_10))))) {
		/* 998L, 205L, 656L, 669L) */ if (var_1_15) {
			/* 997L, 204L, 658L, 671L) */ var_1_21 = (
				var_1_17
			);
		}
	}


	// From: CodeObject2
	/* 371L, 131L) */ if (/* 372L, 112L, 113L) */ ((/* 373L, 110L, 114L) */ ((/* 374L, 108L, 115L) */ (abs (var_1_10))) % (var_1_4))) > (var_1_12))) {
		/* 378L, 130L) */ var_1_31 = (
			/* 381L, 129L) */ (min (
				/* 381L, 129L) */ (
					var_1_12
				) , (
					var_1_13
				)
			))
		);
	}


	// From: CodeObject5
	/* 494L, 259L) */ if (var_1_8) {
		/* 496L, 253L) */ if (/* 497L, 207L, 208L) */ ((var_1_13) == (var_1_11))) {
			/* 500L, 227L) */ var_1_39 = (
				/* 503L, 226L) */ (min (
					/* 503L, 226L) */ (
						/* 504L, 220L) */ (max (
							/* 504L, 220L) */ (
								var_1_12
							) , (
								/* 506L, 219L) */ ((
									var_1_4
								) + (
									var_1_6
								))
							)
						))
					) , (
						/* 509L, 225L) */ ((
							var_1_13
						) - (
							/* 511L, 224L) */ ((
								var_1_11
							) + (
								var_1_42
							))
						))
					)
				))
			);
		} else {
			/* 514L, 251L) */ if (/* 515L, 232L, 233L) */ ((/* 516L, 230L, 234L) */ ((var_1_20) >> (var_1_43))) != (var_1_4))) {
				/* 520L, 246L) */ var_1_39 = (
					var_1_23
				);
			} else {
				/* 524L, 250L) */ var_1_39 = (
					var_1_12
				);
			}
		}
	} else {
		/* 528L, 258L) */ var_1_39 = (
			var_1_5
		);
	}


	// From: Req6Batch174Filler_PR_CI
	/* 1008L, 218L, 707L, 719L) */ var_1_22 = (
		/* 1011L, 217L, 710L, 722L) */ ((
			var_1_16
		) - (
			var_1_19
		))
	);


	// From: Req7Batch174Filler_PR_CI
	/* 1015L, 254L, 750L, 763L) */ if (/* 1016L, 237L, 238L, 751L, 764L) */ ((var_1_16) < (/* 1018L, 236L, 240L, 753L, 766L) */ ((var_1_18) + (var_1_22))))) {
		/* 1021L, 253L, 756L, 769L) */ var_1_23 = (
			/* 1024L, 252L, 759L, 772L) */ ((
				54981
			) - (
				var_1_12
			))
		);
	}


	// From: Req4Batch174Filler_PR_CI
	unsigned char stepLocal_4 = var_1_7;
	signed long int stepLocal_3 = /* 956L, 138L, 142L, 557L, 581L) */ (- (var_1_23));
	/* 981L, 177L, 554L, 578L) */ if (/* 963L, 139L, 140L, 555L, 579L) */ ((var_1_13) < (stepLocal_3))) {
		/* 976L, 171L, 559L, 583L) */ if (/* 967L, 152L, 153L, 560L, 584L) */ ((stepLocal_4) == (/* 966L, 151L, 155L, 562L, 586L) */ ((var_1_10) - (var_1_13))))) {
			/* 971L, 166L, 565L, 589L) */ var_1_20 = (
				var_1_11
			);
		} else {
			/* 975L, 170L, 569L, 593L) */ var_1_20 = (
				var_1_7
			);
		}
	} else {
		/* 980L, 176L, 573L, 597L) */ var_1_20 = (
			var_1_6
		);
	}


	// From: CodeObject6
	/* 533L, 324L) */ if (/* 534L, 268L, 269L) */ ((/* 535L, 266L, 270L) */ (~ (/* 536L, 265L, 271L) */ ((var_1_4) * (var_1_6))))) >= (var_1_42))) {
		/* 540L, 318L) */ if (/* 541L, 283L, 284L) */ ((var_1_6) < (var_1_11))) {
			/* 544L, 316L) */ if (/* 545L, 292L, 293L) */ ((var_1_15) || (var_1_8))) {
				/* 548L, 310L) */ if (var_1_8) {
					/* 550L, 305L) */ var_1_44 = (
						var_1_11
					);
				} else {
					/* 554L, 309L) */ var_1_44 = (
						var_1_12
					);
				}
			} else {
				/* 558L, 315L) */ var_1_44 = (
					var_1_11
				);
			}
		}
	} else {
		/* 562L, 323L) */ var_1_44 = (
			var_1_11
		);
	}


	// From: Req1Batch174Filler_PR_CI
	/* 869L, 23L, 259L, 273L) */ if (/* 870L, 6L, 7L, 260L, 274L) */ ((var_1_20) < (/* 872L, 5L, 9L, 262L, 276L) */ ((var_1_20) / (var_1_4))))) {
		/* 875L, 22L, 265L, 279L) */ var_1_1 = (
			/* 878L, 21L, 268L, 282L) */ ((
				var_1_5
			) + (
				var_1_6
			))
		);
	}


	// From: CodeObject4
	/* 473L, 191L) */ if (/* 474L, 148L, 149L) */ (! (/* 475L, 147L, 150L) */ ((var_1_35) || (var_1_36))))) {
		/* 478L, 189L) */ if (/* 479L, 161L, 162L) */ ((/* 480L, 159L, 163L) */ (min (/* 480L, 159L, 163L) */ (var_1_16) , (3.25)))) >= (var_1_16))) {
			/* 484L, 187L) */ if (/* 485L, 174L, 175L) */ ((var_1_35) && (var_1_36))) {
				/* 488L, 186L) */ var_1_34 = (
					/* 491L, 185L) */ (min (
						/* 491L, 185L) */ (
							var_1_6
						) , (
							var_1_4
						)
					))
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 190);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 64);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1073741823);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 6);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
	last_1_var_1_23 = var_1_23;
}

int property(void) {
	if (/* 568L, 6L, 12L, 288L, 302L, 1030L) */ ((var_1_20) < (/* 570L, 5L, 14L, 290L, 304L, 1032L) */ ((var_1_20) / (var_1_4))))) {
	}
	if (var_1_8) {
		if (var_1_9) {
		}
	} else {
		if (/* 589L, 47L, 55L, 385L, 416L, 850L, 1051L, 52L) */ ((last_1_var_1_23) == (/* 592L, 46L, 57L, 387L, 418L, 849L, 1054L, 51L) */ ((last_1_var_1_20) & (/* 595L, 45L, 59L, 389L, 420L, 848L, 1057L, 50L) */ (min (/* 595L, 45L, 59L, 389L, 420L, 848L, 1057L, 50L) */ (var_1_6) , (var_1_5)))))))) {
		} else {
		}
	}
	if (/* 614L, 90L, 96L, 497L, 526L, 1076L) */ ((/* 615L, 88L, 97L, 498L, 527L, 1077L) */ ((var_1_11) / (var_1_10))) == (var_1_6))) {
		if (/* 620L, 103L, 107L, 503L, 532L, 1082L) */ ((var_1_15) || (var_1_8))) {
		}
	} else {
	}
	if (/* 643L, 139L, 144L, 603L, 627L, 1105L) */ ((var_1_13) < (/* 645L, 138L, 146L, 605L, 629L, 1107L) */ (- (var_1_23))))) {
		if (/* 648L, 152L, 158L, 608L, 632L, 1110L) */ ((var_1_7) == (/* 650L, 151L, 160L, 610L, 634L, 1112L) */ ((var_1_10) - (var_1_13))))) {
		} else {
		}
	} else {
	}
	if (/* 667L, 187L, 193L, 677L, 690L, 1129L) */ ((var_1_6) >= (/* 669L, 186L, 195L, 679L, 692L, 1131L) */ ((var_1_4) % (var_1_10))))) {
		if (var_1_15) {
		}
	}
	if (/* 692L, 237L, 243L, 777L, 790L, 1154L) */ ((var_1_16) < (/* 694L, 236L, 245L, 779L, 792L, 1156L) */ ((var_1_18) + (var_1_22))))) {
	}
	return /* 709L) */ ((
	/* 708L) */ ((
		/* 707L) */ ((
			/* 706L) */ ((
				/* 705L) */ ((
					/* 704L) */ ((
						/* 567L, 24L, 287L, 301L, 1029L) */ ((
							/* 568L, 6L, 12L, 288L, 302L, 1030L) */ ((
								var_1_20
							) < (
								/* 570L, 5L, 14L, 290L, 304L, 1032L) */ ((
									var_1_20
								) / (
									var_1_4
								))
							))
						) ? (
							/* 573L, 22L, 293L, 307L, 1035L) */ ((
								var_1_1
							) == (
								/* 573L, 22L, 293L, 307L, 1035L) */ ((unsigned char) (
									/* 576L, 21L, 296L, 310L, 1038L) */ ((
										var_1_5
									) + (
										var_1_6
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 580L, 79L, 376L, 407L, 866L, 1042L, 68L) */ ((
							var_1_8
						) ? (
							/* 582L, 40L, 378L, 409L, 841L, 1044L, 43L) */ ((
								var_1_9
							) ? (
								/* 584L, 38L, 380L, 411L, 840L, 1046L, 42L) */ ((
									var_1_7
								) == (
									/* 584L, 38L, 380L, 411L, 840L, 1046L, 42L) */ ((unsigned char) (
										var_1_5
									))
								))
							) : (
								1
							))
						) : (
							/* 588L, 77L, 384L, 415L, 865L, 1050L, 67L) */ ((
								/* 589L, 47L, 55L, 385L, 416L, 850L, 1051L, 52L) */ ((
									last_1_var_1_23
								) == (
									/* 592L, 46L, 57L, 387L, 418L, 849L, 1054L, 51L) */ ((
										last_1_var_1_20
									) & (
										/* 595L, 45L, 59L, 389L, 420L, 848L, 1057L, 50L) */ (min (
											/* 595L, 45L, 59L, 389L, 420L, 848L, 1057L, 50L) */ (
												var_1_6
											) , (
												var_1_5
											)
										))
									))
								))
							) ? (
								/* 598L, 71L, 392L, 423L, 860L, 1060L, 62L) */ ((
									var_1_7
								) == (
									/* 598L, 71L, 392L, 423L, 860L, 1060L, 62L) */ ((unsigned char) (
										/* 601L, 70L, 395L, 426L, 859L, 1063L, 61L) */ ((
											/* 602L, 66L, 396L, 427L, 855L, 1064L, 57L) */ ((
												var_1_10
											) - (
												var_1_11
											))
										) - (
											/* 605L, 69L, 399L, 430L, 858L, 1067L, 60L) */ ((
												var_1_12
											) + (
												var_1_13
											))
										))
									))
								))
							) : (
								/* 608L, 75L, 402L, 433L, 864L, 1070L, 66L) */ ((
									var_1_7
								) == (
									/* 608L, 75L, 402L, 433L, 864L, 1070L, 66L) */ ((unsigned char) (
										var_1_11
									))
								))
							))
						))
					))
				) && (
					/* 613L, 131L, 496L, 525L, 1075L) */ ((
						/* 614L, 90L, 96L, 497L, 526L, 1076L) */ ((
							/* 615L, 88L, 97L, 498L, 527L, 1077L) */ ((
								var_1_11
							) / (
								var_1_10
							))
						) == (
							var_1_6
						))
					) ? (
						/* 619L, 123L, 502L, 531L, 1081L) */ ((
							/* 620L, 103L, 107L, 503L, 532L, 1082L) */ ((
								var_1_15
							) || (
								var_1_8
							))
						) ? (
							/* 623L, 121L, 506L, 535L, 1085L) */ ((
								var_1_14
							) == (
								/* 623L, 121L, 506L, 535L, 1085L) */ ((double) (
									/* 626L, 120L, 509L, 538L, 1088L) */ ((
										/* 627L, 118L, 510L, 539L, 1089L) */ (min (
											/* 627L, 118L, 510L, 539L, 1089L) */ (
												/* 628L, 114L, 511L, 540L, 1090L) */ (max (
													/* 628L, 114L, 511L, 540L, 1090L) */ (
														var_1_16
													) , (
														var_1_17
													)
												))
											) , (
												/* 631L, 117L, 514L, 543L, 1093L) */ ((
													var_1_18
												) - (
													var_1_19
												))
											)
										))
									) - (
										49.6
									))
								))
							))
						) : (
							1
						))
					) : (
						/* 635L, 129L, 518L, 547L, 1097L) */ ((
							var_1_14
						) == (
							/* 635L, 129L, 518L, 547L, 1097L) */ ((double) (
								/* 638L, 128L, 521L, 550L, 1100L) */ ((
									256.5
								) - (
									var_1_19
								))
							))
						))
					))
				))
			) && (
				/* 642L, 178L, 602L, 626L, 1104L) */ ((
					/* 643L, 139L, 144L, 603L, 627L, 1105L) */ ((
						var_1_13
					) < (
						/* 645L, 138L, 146L, 605L, 629L, 1107L) */ (- (
							var_1_23
						))
					))
				) ? (
					/* 647L, 172L, 607L, 631L, 1109L) */ ((
						/* 648L, 152L, 158L, 608L, 632L, 1110L) */ ((
							var_1_7
						) == (
							/* 650L, 151L, 160L, 610L, 634L, 1112L) */ ((
								var_1_10
							) - (
								var_1_13
							))
						))
					) ? (
						/* 653L, 166L, 613L, 637L, 1115L) */ ((
							var_1_20
						) == (
							/* 653L, 166L, 613L, 637L, 1115L) */ ((unsigned long int) (
								var_1_11
							))
						))
					) : (
						/* 657L, 170L, 617L, 641L, 1119L) */ ((
							var_1_20
						) == (
							/* 657L, 170L, 617L, 641L, 1119L) */ ((unsigned long int) (
								var_1_7
							))
						))
					))
				) : (
					/* 661L, 176L, 621L, 645L, 1123L) */ ((
						var_1_20
					) == (
						/* 661L, 176L, 621L, 645L, 1123L) */ ((unsigned long int) (
							var_1_6
						))
					))
				))
			))
		) && (
			/* 666L, 208L, 676L, 689L, 1128L) */ ((
				/* 667L, 187L, 193L, 677L, 690L, 1129L) */ ((
					var_1_6
				) >= (
					/* 669L, 186L, 195L, 679L, 692L, 1131L) */ ((
						var_1_4
					) % (
						var_1_10
					))
				))
			) ? (
				/* 672L, 206L, 682L, 695L, 1134L) */ ((
					var_1_15
				) ? (
					/* 674L, 204L, 684L, 697L, 1136L) */ ((
						var_1_21
					) == (
						/* 674L, 204L, 684L, 697L, 1136L) */ ((float) (
							var_1_17
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
		/* 684L, 218L, 731L, 743L, 1146L) */ ((
			var_1_22
		) == (
			/* 684L, 218L, 731L, 743L, 1146L) */ ((float) (
				/* 687L, 217L, 734L, 746L, 1149L) */ ((
					var_1_16
				) - (
					var_1_19
				))
			))
		))
	))
) && (
	/* 691L, 255L, 776L, 789L, 1153L) */ ((
		/* 692L, 237L, 243L, 777L, 790L, 1154L) */ ((
			var_1_16
		) < (
			/* 694L, 236L, 245L, 779L, 792L, 1156L) */ ((
				var_1_18
			) + (
				var_1_22
			))
		))
	) ? (
		/* 697L, 253L, 782L, 795L, 1159L) */ ((
			var_1_23
		) == (
			/* 697L, 253L, 782L, 795L, 1159L) */ ((unsigned short int) (
				/* 700L, 252L, 785L, 798L, 1162L) */ ((
					54981
				) - (
					var_1_12
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
