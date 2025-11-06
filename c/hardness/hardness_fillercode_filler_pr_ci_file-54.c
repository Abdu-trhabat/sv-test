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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch54Filler_PR_CI.c", 13, "reach_error"); }
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
signed short int var_1_1 = -4;
double var_1_2 = 15.8;
double var_1_3 = 0.19999999999999996;
signed short int var_1_4 = 256;
signed short int var_1_5 = 0;
signed short int var_1_6 = 25;
signed short int var_1_8 = 100;
unsigned char var_1_9 = 1;
signed short int var_1_10 = -4;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 64;
double var_1_15 = 10.3;
double var_1_16 = 128.6;
unsigned long int var_1_17 = 2600113953;
float var_1_18 = 8.25;
float var_1_19 = 31.5;
float var_1_20 = 2.625;
float var_1_21 = 999999999999999.2;
float var_1_22 = 127.5;
float var_1_23 = 4.8;
float var_1_25 = 1000000.2;
float var_1_29 = 100000000000.65;
float var_1_30 = 25.4;
float var_1_31 = 255.75;
float var_1_32 = 256.625;
unsigned short int var_1_33 = 1;
unsigned short int var_1_34 = 256;
signed long int var_1_35 = 10;
signed short int var_1_36 = 2;
signed char var_1_37 = -16;
signed char var_1_39 = 5;
signed long int var_1_40 = 32;
signed char var_1_43 = -100;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch54Filler_PR_CI
	/* 762L, 25L, 242L, 261L) */ if (/* 763L, 4L, 5L, 243L, 262L) */ ((var_1_2) > (var_1_3))) {
		/* 766L, 20L, 246L, 265L) */ var_1_1 = (
			/* 769L, 19L, 249L, 268L) */ ((
				/* 770L, 17L, 250L, 269L) */ (min (
					/* 770L, 17L, 250L, 269L) */ (
						/* 771L, 15L, 251L, 270L) */ ((
							2
						) + (
							var_1_4
						))
					) , (
						var_1_5
					)
				))
			) - (
				2
			))
		);
	} else {
		/* 776L, 24L, 256L, 275L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: CodeObject7
	/* 462L, 221L) */ if (/* 463L, 187L, 188L) */ ((/* 464L, 183L, 189L) */ ((var_1_20) < (var_1_2))) && (/* 467L, 186L, 192L) */ ((var_1_36) != (var_1_5))))) {
		/* 470L, 219L) */ if (/* 471L, 204L, 205L) */ ((var_1_14) > (var_1_34))) {
			/* 474L, 214L) */ var_1_43 = (
				8
			);
		} else {
			/* 478L, 218L) */ var_1_43 = (
				var_1_39
			);
		}
	}


	// From: Req5Batch54Filler_PR_CI
	/* 853L, 184L, 571L, 589L) */ if (/* 854L, 161L, 162L, 572L, 590L) */ ((var_1_2) < (/* 856L, 160L, 164L, 574L, 592L) */ (max (/* 856L, 160L, 164L, 574L, 592L) */ (var_1_3) , (/* 858L, 159L, 166L, 576L, 594L) */ ((var_1_15) - (var_1_16)))))))) {
		/* 861L, 183L, 579L, 597L) */ var_1_14 = (
			/* 864L, 182L, 582L, 600L) */ ((
				var_1_17
			) - (
				/* 866L, 181L, 584L, 602L) */ ((
					var_1_8
				) + (
					var_1_4
				))
			))
		);
	}


	// From: CodeObject3
	/* 402L, 65L) */ var_1_33 = (
		var_1_34
	);


	// From: CodeObject4
	/* 406L, 95L) */ if (/* 407L, 76L, 77L) */ ((/* 408L, 74L, 78L) */ ((var_1_17) ^ (/* 410L, 73L, 80L) */ ((var_1_4) >> (var_1_36))))) < (var_1_34))) {
		/* 414L, 94L) */ var_1_35 = (
			var_1_17
		);
	}


	// From: Req3Batch54Filler_PR_CI
	signed short int stepLocal_0 = var_1_1;
	/* 829L, 109L, 418L, 441L) */ if (/* 816L, 78L, 79L, 419L, 442L) */ ((/* 815L, 76L, 80L, 420L, 443L) */ ((/* 811L, 72L, 81L, 421L, 444L) */ ((var_1_8) % (var_1_10))) * (/* 814L, 75L, 84L, 424L, 447L) */ ((8) + (var_1_14))))) >= (stepLocal_0))) {
		/* 823L, 103L, 428L, 451L) */ var_1_9 = (
			/* 822L, 102L, 431L, 454L) */ ((
				/* 820L, 100L, 432L, 455L) */ (! (
					var_1_11
				))
			) || (
				var_1_12
			))
		);
	} else {
		/* 828L, 108L, 435L, 458L) */ var_1_9 = (
			/* 827L, 107L, 438L, 461L) */ (! (
				var_1_12
			))
		);
	}


	// From: CodeObject2
	/* 375L, 56L) */ if (/* 376L, 27L, 28L) */ ((var_1_5) >= (var_1_14))) {
		/* 379L, 43L) */ var_1_25 = (
			/* 382L, 42L) */ (max (
				/* 382L, 42L) */ (
					/* 383L, 39L) */ (abs (
						/* 384L, 38L) */ (min (
							/* 384L, 38L) */ (
								9.999999999999962E13f
							) , (
								var_1_20
							)
						))
					))
				) , (
					/* 387L, 41L) */ (abs (
						var_1_19
					))
				)
			))
		);
	} else {
		/* 389L, 55L) */ var_1_25 = (
			/* 392L, 54L) */ ((
				/* 393L, 48L) */ ((
					var_1_29
				) + (
					4.1f
				))
			) + (
				/* 396L, 53L) */ ((
					var_1_30
				) + (
					/* 398L, 52L) */ (max (
						/* 398L, 52L) */ (
							var_1_31
						) , (
							var_1_32
						)
					))
				))
			))
		);
	}


	// From: CodeObject6
	/* 427L, 177L) */ if (/* 428L, 117L, 118L) */ ((var_1_4) >= (var_1_10))) {
		/* 431L, 146L) */ if (/* 432L, 128L, 129L) */ ((var_1_21) >= (/* 434L, 127L, 131L) */ ((var_1_20) - (var_1_15))))) {
			/* 437L, 145L) */ var_1_40 = (
				/* 440L, 144L) */ (abs (
					/* 441L, 143L) */ (abs (
						/* 442L, 142L) */ (abs (
							-4
						))
					))
				))
			);
		}
	} else {
		/* 444L, 175L) */ if (/* 445L, 153L, 154L) */ ((var_1_22) <= (/* 447L, 152L, 156L) */ (abs (/* 448L, 151L, 157L) */ ((var_1_15) * (var_1_2))))))) {
			/* 451L, 174L) */ var_1_40 = (
				/* 454L, 173L) */ ((
					/* 455L, 170L) */ (abs (
						/* 456L, 169L) */ (abs (
							var_1_8
						))
					))
				) + (
					/* 458L, 172L) */ (abs (
						var_1_14
					))
				))
			);
		}
	}


	// From: Req2Batch54Filler_PR_CI
	/* 782L, 62L, 319L, 344L) */ if (var_1_9) {
		/* 784L, 56L, 321L, 346L) */ if (/* 785L, 36L, 37L, 322L, 347L) */ ((var_1_5) == (var_1_4))) {
			/* 788L, 51L, 325L, 350L) */ var_1_6 = (
				/* 791L, 50L, 328L, 353L) */ (min (
					/* 791L, 50L, 328L, 353L) */ (
						/* 792L, 46L, 329L, 354L) */ (abs (
							var_1_5
						))
					) , (
						/* 794L, 49L, 331L, 356L) */ ((
							var_1_4
						) - (
							var_1_8
						))
					)
				))
			);
		} else {
			/* 797L, 55L, 334L, 359L) */ var_1_6 = (
				var_1_8
			);
		}
	} else {
		/* 801L, 61L, 338L, 363L) */ var_1_6 = (
			var_1_4
		);
	}


	// From: CodeObject1
	/* 229L, 17L) */ if (/* 230L, 4L, 5L) */ ((var_1_8) > (-64))) {
		/* 233L, 16L) */ var_1_23 = (
			/* 236L, 15L) */ (max (
				/* 236L, 15L) */ (
					49.2f
				) , (
					63.125f
				)
			))
		);
	}


	// From: Req4Batch54Filler_PR_CI
	signed long int stepLocal_1 = /* 834L, 122L, 128L, 512L, 527L) */ ((/* 835L, 120L, 129L, 513L, 528L) */ ((var_1_8) * (var_1_6))) + (var_1_4));
	/* 848L, 149L, 510L, 525L) */ if (/* 843L, 126L, 127L, 511L, 526L) */ ((stepLocal_1) >= (/* 842L, 125L, 133L, 517L, 532L) */ (min (/* 842L, 125L, 133L, 517L, 532L) */ (var_1_6) , (var_1_5)))))) {
		/* 847L, 148L, 520L, 535L) */ var_1_13 = (
			var_1_12
		);
	}


	// From: CodeObject5
	/* 418L, 111L) */ if (/* 419L, 100L, 101L) */ (! (var_1_12))) {
		/* 421L, 110L) */ var_1_37 = (
			/* 424L, 109L) */ (max (
				/* 424L, 109L) */ (
					var_1_36
				) , (
					var_1_39
				)
			))
		);
	}


	// From: Req6Batch54Filler_PR_CI
	/* 871L, 236L, 643L, 673L) */ if (/* 872L, 196L, 197L, 644L, 674L) */ ((-32) >= (/* 874L, 195L, 199L, 646L, 676L) */ ((var_1_5) - (var_1_8))))) {
		/* 877L, 230L, 649L, 679L) */ if (/* 878L, 209L, 210L, 650L, 680L) */ ((var_1_10) > (var_1_6))) {
			/* 881L, 225L, 653L, 683L) */ var_1_18 = (
				/* 884L, 224L, 656L, 686L) */ ((
					/* 885L, 220L, 657L, 687L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				) + (
					/* 888L, 223L, 660L, 690L) */ ((
						var_1_21
					) + (
						var_1_22
					))
				))
			);
		} else {
			/* 891L, 229L, 663L, 693L) */ var_1_18 = (
				var_1_20
			);
		}
	} else {
		/* 895L, 235L, 667L, 697L) */ var_1_18 = (
			var_1_19
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -32768);
	assume_abort_if_not(var_1_10 <= 32767);
	assume_abort_if_not(var_1_10 != 0);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -230584.3009213691400e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -230584.3009213691400e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 6);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 126);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 483L, 4L, 8L, 281L, 300L, 901L) */ ((var_1_2) > (var_1_3))) {
	} else {
	}
	if (var_1_9) {
		if (/* 505L, 36L, 40L, 372L, 397L, 923L) */ ((var_1_5) == (var_1_4))) {
		} else {
		}
	} else {
	}
	if (/* 527L, 78L, 88L, 465L, 488L, 945L) */ ((/* 528L, 76L, 89L, 466L, 489L, 946L) */ ((/* 529L, 72L, 90L, 467L, 490L, 947L) */ ((var_1_8) % (var_1_10))) * (/* 532L, 75L, 93L, 470L, 493L, 950L) */ ((8) + (var_1_14))))) >= (var_1_1))) {
	} else {
	}
	if (/* 550L, 126L, 136L, 541L, 556L, 968L) */ ((/* 551L, 122L, 137L, 542L, 557L, 969L) */ ((/* 552L, 120L, 138L, 543L, 558L, 970L) */ ((var_1_8) * (var_1_6))) + (var_1_4))) >= (/* 556L, 125L, 142L, 547L, 562L, 974L) */ (min (/* 556L, 125L, 142L, 547L, 562L, 974L) */ (var_1_6) , (var_1_5)))))) {
	}
	if (/* 566L, 161L, 169L, 608L, 626L, 984L) */ ((var_1_2) < (/* 568L, 160L, 171L, 610L, 628L, 986L) */ (max (/* 568L, 160L, 171L, 610L, 628L, 986L) */ (var_1_3) , (/* 570L, 159L, 173L, 612L, 630L, 988L) */ ((var_1_15) - (var_1_16)))))))) {
	}
	if (/* 584L, 196L, 202L, 704L, 734L, 1002L) */ ((-32) >= (/* 586L, 195L, 204L, 706L, 736L, 1004L) */ ((var_1_5) - (var_1_8))))) {
		if (/* 590L, 209L, 213L, 710L, 740L, 1008L) */ ((var_1_10) > (var_1_6))) {
		} else {
		}
	} else {
	}
	return /* 616L) */ ((
	/* 615L) */ ((
		/* 614L) */ ((
			/* 613L) */ ((
				/* 612L) */ ((
					/* 482L, 26L, 280L, 299L, 900L) */ ((
						/* 483L, 4L, 8L, 281L, 300L, 901L) */ ((
							var_1_2
						) > (
							var_1_3
						))
					) ? (
						/* 486L, 20L, 284L, 303L, 904L) */ ((
							var_1_1
						) == (
							/* 486L, 20L, 284L, 303L, 904L) */ ((signed short int) (
								/* 489L, 19L, 287L, 306L, 907L) */ ((
									/* 490L, 17L, 288L, 307L, 908L) */ (min (
										/* 490L, 17L, 288L, 307L, 908L) */ (
											/* 491L, 15L, 289L, 308L, 909L) */ ((
												2
											) + (
												var_1_4
											))
										) , (
											var_1_5
										)
									))
								) - (
									2
								))
							))
						))
					) : (
						/* 496L, 24L, 294L, 313L, 914L) */ ((
							var_1_1
						) == (
							/* 496L, 24L, 294L, 313L, 914L) */ ((signed short int) (
								var_1_4
							))
						))
					))
				) && (
					/* 502L, 63L, 369L, 394L, 920L) */ ((
						var_1_9
					) ? (
						/* 504L, 57L, 371L, 396L, 922L) */ ((
							/* 505L, 36L, 40L, 372L, 397L, 923L) */ ((
								var_1_5
							) == (
								var_1_4
							))
						) ? (
							/* 508L, 51L, 375L, 400L, 926L) */ ((
								var_1_6
							) == (
								/* 508L, 51L, 375L, 400L, 926L) */ ((signed short int) (
									/* 511L, 50L, 378L, 403L, 929L) */ (min (
										/* 511L, 50L, 378L, 403L, 929L) */ (
											/* 512L, 46L, 379L, 404L, 930L) */ (abs (
												var_1_5
											))
										) , (
											/* 514L, 49L, 381L, 406L, 932L) */ ((
												var_1_4
											) - (
												var_1_8
											))
										)
									))
								))
							))
						) : (
							/* 517L, 55L, 384L, 409L, 935L) */ ((
								var_1_6
							) == (
								/* 517L, 55L, 384L, 409L, 935L) */ ((signed short int) (
									var_1_8
								))
							))
						))
					) : (
						/* 521L, 61L, 388L, 413L, 939L) */ ((
							var_1_6
						) == (
							/* 521L, 61L, 388L, 413L, 939L) */ ((signed short int) (
								var_1_4
							))
						))
					))
				))
			) && (
				/* 526L, 110L, 464L, 487L, 944L) */ ((
					/* 527L, 78L, 88L, 465L, 488L, 945L) */ ((
						/* 528L, 76L, 89L, 466L, 489L, 946L) */ ((
							/* 529L, 72L, 90L, 467L, 490L, 947L) */ ((
								var_1_8
							) % (
								var_1_10
							))
						) * (
							/* 532L, 75L, 93L, 470L, 493L, 950L) */ ((
								8
							) + (
								var_1_14
							))
						))
					) >= (
						var_1_1
					))
				) ? (
					/* 536L, 103L, 474L, 497L, 954L) */ ((
						var_1_9
					) == (
						/* 536L, 103L, 474L, 497L, 954L) */ ((unsigned char) (
							/* 539L, 102L, 477L, 500L, 957L) */ ((
								/* 540L, 100L, 478L, 501L, 958L) */ (! (
									var_1_11
								))
							) || (
								var_1_12
							))
						))
					))
				) : (
					/* 543L, 108L, 481L, 504L, 961L) */ ((
						var_1_9
					) == (
						/* 543L, 108L, 481L, 504L, 961L) */ ((unsigned char) (
							/* 546L, 107L, 484L, 507L, 964L) */ (! (
								var_1_12
							))
						))
					))
				))
			))
		) && (
			/* 549L, 150L, 540L, 555L, 967L) */ ((
				/* 550L, 126L, 136L, 541L, 556L, 968L) */ ((
					/* 551L, 122L, 137L, 542L, 557L, 969L) */ ((
						/* 552L, 120L, 138L, 543L, 558L, 970L) */ ((
							var_1_8
						) * (
							var_1_6
						))
					) + (
						var_1_4
					))
				) >= (
					/* 556L, 125L, 142L, 547L, 562L, 974L) */ (min (
						/* 556L, 125L, 142L, 547L, 562L, 974L) */ (
							var_1_6
						) , (
							var_1_5
						)
					))
				))
			) ? (
				/* 559L, 148L, 550L, 565L, 977L) */ ((
					var_1_13
				) == (
					/* 559L, 148L, 550L, 565L, 977L) */ ((unsigned char) (
						var_1_12
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 565L, 185L, 607L, 625L, 983L) */ ((
			/* 566L, 161L, 169L, 608L, 626L, 984L) */ ((
				var_1_2
			) < (
				/* 568L, 160L, 171L, 610L, 628L, 986L) */ (max (
					/* 568L, 160L, 171L, 610L, 628L, 986L) */ (
						var_1_3
					) , (
						/* 570L, 159L, 173L, 612L, 630L, 988L) */ ((
							var_1_15
						) - (
							var_1_16
						))
					)
				))
			))
		) ? (
			/* 573L, 183L, 615L, 633L, 991L) */ ((
				var_1_14
			) == (
				/* 573L, 183L, 615L, 633L, 991L) */ ((unsigned long int) (
					/* 576L, 182L, 618L, 636L, 994L) */ ((
						var_1_17
					) - (
						/* 578L, 181L, 620L, 638L, 996L) */ ((
							var_1_8
						) + (
							var_1_4
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 583L, 237L, 703L, 733L, 1001L) */ ((
		/* 584L, 196L, 202L, 704L, 734L, 1002L) */ ((
			-32
		) >= (
			/* 586L, 195L, 204L, 706L, 736L, 1004L) */ ((
				var_1_5
			) - (
				var_1_8
			))
		))
	) ? (
		/* 589L, 231L, 709L, 739L, 1007L) */ ((
			/* 590L, 209L, 213L, 710L, 740L, 1008L) */ ((
				var_1_10
			) > (
				var_1_6
			))
		) ? (
			/* 593L, 225L, 713L, 743L, 1011L) */ ((
				var_1_18
			) == (
				/* 593L, 225L, 713L, 743L, 1011L) */ ((float) (
					/* 596L, 224L, 716L, 746L, 1014L) */ ((
						/* 597L, 220L, 717L, 747L, 1015L) */ ((
							var_1_19
						) - (
							var_1_20
						))
					) + (
						/* 600L, 223L, 720L, 750L, 1018L) */ ((
							var_1_21
						) + (
							var_1_22
						))
					))
				))
			))
		) : (
			/* 603L, 229L, 723L, 753L, 1021L) */ ((
				var_1_18
			) == (
				/* 603L, 229L, 723L, 753L, 1021L) */ ((float) (
					var_1_20
				))
			))
		))
	) : (
		/* 607L, 235L, 727L, 757L, 1025L) */ ((
			var_1_18
		) == (
			/* 607L, 235L, 727L, 757L, 1025L) */ ((float) (
				var_1_19
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
