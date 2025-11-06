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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch62Filler_PR_CI.c", 13, "reach_error"); }
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
double var_1_1 = 5.25;
signed long int var_1_2 = 1;
signed long int var_1_3 = -25;
signed long int var_1_4 = -128;
signed long int var_1_5 = 8;
double var_1_6 = 2.75;
double var_1_7 = 24.5;
double var_1_8 = 199.5;
signed char var_1_9 = -1;
signed char var_1_10 = 0;
signed char var_1_11 = 1;
unsigned char var_1_12 = 0;
double var_1_13 = 10000000000000.45;
double var_1_14 = 256.9;
double var_1_15 = 4.55;
float var_1_16 = 1.25;
unsigned char var_1_17 = 50;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
double var_1_20 = 4.25;
double var_1_21 = 127.2;
unsigned long int var_1_22 = 256;
unsigned long int var_1_24 = 64;
unsigned char var_1_25 = 1;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
double var_1_30 = 32.7;
unsigned char var_1_32 = 1;
unsigned long int var_1_33 = 1000;
signed long int var_1_34 = 128;
signed long int var_1_35 = 5;
signed char var_1_37 = -32;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch62Filler_PR_CI
	signed long int stepLocal_0 = var_1_2;
	/* 848L, 65L, 261L, 292L) */ if (/* 825L, 13L, 14L, 262L, 293L) */ ((stepLocal_0) > (/* 824L, 12L, 16L, 264L, 295L) */ ((/* 822L, 10L, 17L, 265L, 296L) */ ((var_1_3) % (var_1_4))) * (var_1_5))))) {
		/* 833L, 35L, 269L, 300L) */ var_1_1 = (
			/* 832L, 34L, 272L, 303L) */ ((
				var_1_6
			) - (
				/* 831L, 33L, 274L, 305L) */ ((
					var_1_7
				) + (
					var_1_8
				))
			))
		);
	} else {
		/* 847L, 63L, 277L, 308L) */ if (/* 836L, 46L, 47L, 278L, 309L) */ ((var_1_8) > (var_1_7))) {
			/* 842L, 58L, 281L, 312L) */ var_1_1 = (
				/* 841L, 57L, 284L, 315L) */ ((
					var_1_7
				) + (
					var_1_8
				))
			);
		} else {
			/* 846L, 62L, 287L, 318L) */ var_1_1 = (
				var_1_8
			);
		}
	}


	// From: CodeObject6
	/* 293L, 160L) */ if (/* 294L, 119L, 120L) */ ((/* 295L, 117L, 121L) */ ((/* 296L, 115L, 122L) */ ((var_1_34) >> (var_1_35))) % (-10))) >= (var_1_22))) {
		/* 301L, 158L) */ if (/* 302L, 139L, 140L) */ ((/* 303L, 137L, 141L) */ ((var_1_8) - (/* 305L, 136L, 143L) */ (abs (var_1_7))))) != (var_1_8))) {
			/* 308L, 157L) */ var_1_33 = (
				/* 311L, 156L) */ (min (
					/* 311L, 156L) */ (
						var_1_35
					) , (
						var_1_34
					)
				))
			);
		}
	}


	// From: Req2Batch62Filler_PR_CI
	/* 853L, 100L, 386L, 407L) */ if (/* 854L, 74L, 75L, 387L, 408L) */ ((var_1_6) > (/* 856L, 73L, 77L, 389L, 410L) */ (- (var_1_8))))) {
		/* 858L, 88L, 391L, 412L) */ var_1_9 = (
			/* 861L, 87L, 394L, 415L) */ ((
				var_1_10
			) - (
				var_1_11
			))
		);
	} else {
		/* 864L, 98L, 397L, 418L) */ if (var_1_12) {
			/* 866L, 97L, 399L, 420L) */ var_1_9 = (
				/* 869L, 96L, 402L, 423L) */ (min (
					/* 869L, 96L, 402L, 423L) */ (
						var_1_10
					) , (
						var_1_11
					)
				))
			);
		}
	}


	// From: Req3Batch62Filler_PR_CI
	/* 874L, 117L, 470L, 482L) */ var_1_13 = (
		/* 877L, 116L, 473L, 485L) */ ((
			/* 878L, 112L, 474L, 486L) */ (min (
				/* 878L, 112L, 474L, 486L) */ (
					var_1_7
				) , (
					var_1_8
				)
			))
		) + (
			/* 881L, 115L, 477L, 489L) */ ((
				var_1_14
			) + (
				var_1_15
			))
		))
	);


	// From: CodeObject2
	/* 240L, 68L) */ if (/* 241L, 20L, 21L) */ ((var_1_24) <= (32u))) {
		/* 244L, 44L) */ if (/* 245L, 29L, 30L) */ ((var_1_24) < (var_1_22))) {
			/* 248L, 43L) */ var_1_25 = (
				/* 251L, 42L) */ ((
					var_1_12
				) || (
					/* 253L, 41L) */ ((
						var_1_12
					) || (
						var_1_27
					))
				))
			);
		}
	} else {
		/* 256L, 66L) */ if (/* 257L, 49L, 50L) */ ((/* 258L, 47L, 51L) */ (~ (var_1_22))) < (var_1_24))) {
			/* 261L, 61L) */ var_1_25 = (
				0
			);
		} else {
			/* 265L, 65L) */ var_1_25 = (
				var_1_28
			);
		}
	}


	// From: CodeObject5
	/* 285L, 107L) */ var_1_32 = (
		/* 288L, 106L) */ (! (
			/* 289L, 105L) */ ((
				var_1_12
			) && (
				var_1_28
			))
		))
	);


	// From: CodeObject9
	/* 338L, 226L) */ if (/* 339L, 209L, 210L) */ ((/* 340L, 207L, 211L) */ ((var_1_6) == (/* 342L, 206L, 213L) */ (abs (var_1_7))))) || (var_1_18))) {
		/* 345L, 225L) */ var_1_43 = (
			var_1_27
		);
	}


	// From: Req4Batch62Filler_PR_CI
	signed long int stepLocal_1 = -100000;
	/* 903L, 148L, 517L, 535L) */ if (/* 890L, 127L, 128L, 518L, 536L) */ ((/* 889L, 125L, 129L, 519L, 537L) */ (- (var_1_3))) <= (stepLocal_1))) {
		/* 898L, 143L, 522L, 540L) */ var_1_16 = (
			/* 897L, 142L, 525L, 543L) */ ((
				/* 895L, 140L, 526L, 544L) */ ((
					var_1_7
				) - (
					var_1_8
				))
			) + (
				var_1_15
			))
		);
	} else {
		/* 902L, 147L, 530L, 548L) */ var_1_16 = (
			var_1_15
		);
	}


	// From: CodeObject1
	/* 228L, 14L) */ if (var_1_18) {
		/* 230L, 13L) */ var_1_22 = (
			/* 233L, 12L) */ (max (
				/* 233L, 12L) */ (
					/* 234L, 10L) */ (min (
						/* 234L, 10L) */ (
							/* 235L, 8L) */ (abs (
								var_1_24
							))
						) , (
							64u
						)
					))
				) , (
					32u
				)
			))
		);
	}


	// From: CodeObject4
	/* 274L, 97L) */ if (/* 275L, 84L, 85L) */ ((var_1_22) <= (var_1_24))) {
		/* 278L, 96L) */ var_1_30 = (
			/* 281L, 95L) */ (abs (
				/* 282L, 94L) */ (abs (
					var_1_15
				))
			))
		);
	}


	// From: CodeObject7
	/* 314L, 183L) */ if (/* 315L, 168L, 169L) */ ((-32) >= (var_1_34))) {
		/* 318L, 182L) */ var_1_37 = (
			/* 321L, 181L) */ (max (
				/* 321L, 181L) */ (
					/* 322L, 179L) */ ((
						5
					) + (
						var_1_35
					))
				) , (
					var_1_11
				)
			))
		);
	}


	// From: Req5Batch62Filler_PR_CI
	unsigned char stepLocal_2 = var_1_18;
	/* 920L, 179L, 589L, 602L) */ if (/* 915L, 160L, 161L, 590L, 603L) */ ((/* 914L, 158L, 162L, 591L, 604L) */ ((var_1_12) || (/* 913L, 157L, 164L, 593L, 606L) */ ((var_1_4) >= (var_1_3))))) && (stepLocal_2))) {
		/* 919L, 178L, 597L, 610L) */ var_1_17 = (
			var_1_11
		);
	}


	// From: Req6Batch62Filler_PR_CI
	/* 925L, 188L, 642L, 648L) */ var_1_19 = (
		var_1_11
	);


	// From: Req7Batch62Filler_PR_CI
	/* 932L, 200L, 667L, 676L) */ var_1_20 = (
		/* 935L, 199L, 670L, 679L) */ (max (
			/* 935L, 199L, 670L, 679L) */ (
				var_1_7
			) , (
				var_1_15
			)
		))
	);


	// From: CodeObject3
	/* 270L, 77L) */ var_1_29 = (
		var_1_28
	);


	// From: Req8Batch62Filler_PR_CI
	signed long int stepLocal_3 = -5;
	/* 968L, 255L, 701L, 730L) */ if (/* 946L, 211L, 212L, 702L, 731L) */ ((var_1_13) < (/* 945L, 210L, 214L, 704L, 733L) */ (max (/* 945L, 210L, 214L, 704L, 733L) */ (var_1_7) , (var_1_1)))))) {
		/* 963L, 249L, 707L, 736L) */ if (/* 950L, 226L, 227L, 708L, 737L) */ ((stepLocal_3) < (/* 949L, 225L, 229L, 710L, 739L) */ ((var_1_17) + (var_1_4))))) {
			/* 958L, 244L, 713L, 742L) */ var_1_21 = (
				/* 957L, 243L, 716L, 745L) */ (max (
					/* 957L, 243L, 716L, 745L) */ (
						var_1_15
					) , (
						/* 956L, 242L, 718L, 747L) */ ((
							var_1_7
						) - (
							var_1_6
						))
					)
				))
			);
		} else {
			/* 962L, 248L, 721L, 750L) */ var_1_21 = (
				var_1_14
			);
		}
	} else {
		/* 967L, 254L, 725L, 754L) */ var_1_21 = (
			var_1_15
		);
	}


	// From: CodeObject8
	/* 326L, 200L) */ if (var_1_28) {
		/* 328L, 199L) */ var_1_39 = (
			/* 331L, 198L) */ ((
				var_1_27
			) && (
				/* 333L, 197L) */ ((
					var_1_40
				) || (
					/* 335L, 196L) */ ((
						var_1_41
					) || (
						var_1_42
					))
				))
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -230584.3009213691400e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967294);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 1);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 30);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 0);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 350L, 13L, 21L, 324L, 355L, 973L) */ ((var_1_2) > (/* 352L, 12L, 23L, 326L, 357L, 975L) */ ((/* 353L, 10L, 24L, 327L, 358L, 976L) */ ((var_1_3) % (var_1_4))) * (var_1_5))))) {
	} else {
		if (/* 366L, 46L, 50L, 340L, 371L, 989L) */ ((var_1_8) > (var_1_7))) {
		} else {
		}
	}
	if (/* 382L, 74L, 79L, 429L, 450L, 1005L) */ ((var_1_6) > (/* 384L, 73L, 81L, 431L, 452L, 1007L) */ (- (var_1_8))))) {
	} else {
		if (var_1_12) {
		}
	}
	if (/* 414L, 127L, 132L, 554L, 572L, 1037L) */ ((/* 415L, 125L, 133L, 555L, 573L, 1038L) */ (- (var_1_3))) <= (-100000))) {
	} else {
	}
	if (/* 432L, 160L, 168L, 616L, 629L, 1055L) */ ((/* 433L, 158L, 169L, 617L, 630L, 1056L) */ ((var_1_12) || (/* 435L, 157L, 171L, 619L, 632L, 1058L) */ ((var_1_4) >= (var_1_3))))) && (var_1_18))) {
	}
	if (/* 460L, 211L, 217L, 760L, 789L, 1083L) */ ((var_1_13) < (/* 462L, 210L, 219L, 762L, 791L, 1085L) */ (max (/* 462L, 210L, 219L, 762L, 791L, 1085L) */ (var_1_7) , (var_1_1)))))) {
		if (/* 466L, 226L, 232L, 766L, 795L, 1089L) */ ((-5) < (/* 468L, 225L, 234L, 768L, 797L, 1091L) */ ((var_1_17) + (var_1_4))))) {
		} else {
		}
	} else {
	}
	return /* 494L) */ ((
	/* 493L) */ ((
		/* 492L) */ ((
			/* 491L) */ ((
				/* 490L) */ ((
					/* 489L) */ ((
						/* 488L) */ ((
							/* 349L, 66L, 323L, 354L, 972L) */ ((
								/* 350L, 13L, 21L, 324L, 355L, 973L) */ ((
									var_1_2
								) > (
									/* 352L, 12L, 23L, 326L, 357L, 975L) */ ((
										/* 353L, 10L, 24L, 327L, 358L, 976L) */ ((
											var_1_3
										) % (
											var_1_4
										))
									) * (
										var_1_5
									))
								))
							) ? (
								/* 357L, 35L, 331L, 362L, 980L) */ ((
									var_1_1
								) == (
									/* 357L, 35L, 331L, 362L, 980L) */ ((double) (
										/* 360L, 34L, 334L, 365L, 983L) */ ((
											var_1_6
										) - (
											/* 362L, 33L, 336L, 367L, 985L) */ ((
												var_1_7
											) + (
												var_1_8
											))
										))
									))
								))
							) : (
								/* 365L, 64L, 339L, 370L, 988L) */ ((
									/* 366L, 46L, 50L, 340L, 371L, 989L) */ ((
										var_1_8
									) > (
										var_1_7
									))
								) ? (
									/* 369L, 58L, 343L, 374L, 992L) */ ((
										var_1_1
									) == (
										/* 369L, 58L, 343L, 374L, 992L) */ ((double) (
											/* 372L, 57L, 346L, 377L, 995L) */ ((
												var_1_7
											) + (
												var_1_8
											))
										))
									))
								) : (
									/* 375L, 62L, 349L, 380L, 998L) */ ((
										var_1_1
									) == (
										/* 375L, 62L, 349L, 380L, 998L) */ ((double) (
											var_1_8
										))
									))
								))
							))
						) && (
							/* 381L, 101L, 428L, 449L, 1004L) */ ((
								/* 382L, 74L, 79L, 429L, 450L, 1005L) */ ((
									var_1_6
								) > (
									/* 384L, 73L, 81L, 431L, 452L, 1007L) */ (- (
										var_1_8
									))
								))
							) ? (
								/* 386L, 88L, 433L, 454L, 1009L) */ ((
									var_1_9
								) == (
									/* 386L, 88L, 433L, 454L, 1009L) */ ((signed char) (
										/* 389L, 87L, 436L, 457L, 1012L) */ ((
											var_1_10
										) - (
											var_1_11
										))
									))
								))
							) : (
								/* 392L, 99L, 439L, 460L, 1015L) */ ((
									var_1_12
								) ? (
									/* 394L, 97L, 441L, 462L, 1017L) */ ((
										var_1_9
									) == (
										/* 394L, 97L, 441L, 462L, 1017L) */ ((signed char) (
											/* 397L, 96L, 444L, 465L, 1020L) */ (min (
												/* 397L, 96L, 444L, 465L, 1020L) */ (
													var_1_10
												) , (
													var_1_11
												)
											))
										))
									))
								) : (
									1
								))
							))
						))
					) && (
						/* 402L, 117L, 494L, 506L, 1025L) */ ((
							var_1_13
						) == (
							/* 402L, 117L, 494L, 506L, 1025L) */ ((double) (
								/* 405L, 116L, 497L, 509L, 1028L) */ ((
									/* 406L, 112L, 498L, 510L, 1029L) */ (min (
										/* 406L, 112L, 498L, 510L, 1029L) */ (
											var_1_7
										) , (
											var_1_8
										)
									))
								) + (
									/* 409L, 115L, 501L, 513L, 1032L) */ ((
										var_1_14
									) + (
										var_1_15
									))
								))
							))
						))
					))
				) && (
					/* 413L, 149L, 553L, 571L, 1036L) */ ((
						/* 414L, 127L, 132L, 554L, 572L, 1037L) */ ((
							/* 415L, 125L, 133L, 555L, 573L, 1038L) */ (- (
								var_1_3
							))
						) <= (
							-100000
						))
					) ? (
						/* 418L, 143L, 558L, 576L, 1041L) */ ((
							var_1_16
						) == (
							/* 418L, 143L, 558L, 576L, 1041L) */ ((float) (
								/* 421L, 142L, 561L, 579L, 1044L) */ ((
									/* 422L, 140L, 562L, 580L, 1045L) */ ((
										var_1_7
									) - (
										var_1_8
									))
								) + (
									var_1_15
								))
							))
						))
					) : (
						/* 426L, 147L, 566L, 584L, 1049L) */ ((
							var_1_16
						) == (
							/* 426L, 147L, 566L, 584L, 1049L) */ ((float) (
								var_1_15
							))
						))
					))
				))
			) && (
				/* 431L, 180L, 615L, 628L, 1054L) */ ((
					/* 432L, 160L, 168L, 616L, 629L, 1055L) */ ((
						/* 433L, 158L, 169L, 617L, 630L, 1056L) */ ((
							var_1_12
						) || (
							/* 435L, 157L, 171L, 619L, 632L, 1058L) */ ((
								var_1_4
							) >= (
								var_1_3
							))
						))
					) && (
						var_1_18
					))
				) ? (
					/* 439L, 178L, 623L, 636L, 1062L) */ ((
						var_1_17
					) == (
						/* 439L, 178L, 623L, 636L, 1062L) */ ((unsigned char) (
							var_1_11
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 445L, 188L, 654L, 660L, 1068L) */ ((
				var_1_19
			) == (
				/* 445L, 188L, 654L, 660L, 1068L) */ ((unsigned char) (
					var_1_11
				))
			))
		))
	) && (
		/* 452L, 200L, 685L, 694L, 1075L) */ ((
			var_1_20
		) == (
			/* 452L, 200L, 685L, 694L, 1075L) */ ((double) (
				/* 455L, 199L, 688L, 697L, 1078L) */ (max (
					/* 455L, 199L, 688L, 697L, 1078L) */ (
						var_1_7
					) , (
						var_1_15
					)
				))
			))
		))
	))
) && (
	/* 459L, 256L, 759L, 788L, 1082L) */ ((
		/* 460L, 211L, 217L, 760L, 789L, 1083L) */ ((
			var_1_13
		) < (
			/* 462L, 210L, 219L, 762L, 791L, 1085L) */ (max (
				/* 462L, 210L, 219L, 762L, 791L, 1085L) */ (
					var_1_7
				) , (
					var_1_1
				)
			))
		))
	) ? (
		/* 465L, 250L, 765L, 794L, 1088L) */ ((
			/* 466L, 226L, 232L, 766L, 795L, 1089L) */ ((
				-5
			) < (
				/* 468L, 225L, 234L, 768L, 797L, 1091L) */ ((
					var_1_17
				) + (
					var_1_4
				))
			))
		) ? (
			/* 471L, 244L, 771L, 800L, 1094L) */ ((
				var_1_21
			) == (
				/* 471L, 244L, 771L, 800L, 1094L) */ ((double) (
					/* 474L, 243L, 774L, 803L, 1097L) */ (max (
						/* 474L, 243L, 774L, 803L, 1097L) */ (
							var_1_15
						) , (
							/* 476L, 242L, 776L, 805L, 1099L) */ ((
								var_1_7
							) - (
								var_1_6
							))
						)
					))
				))
			))
		) : (
			/* 479L, 248L, 779L, 808L, 1102L) */ ((
				var_1_21
			) == (
				/* 479L, 248L, 779L, 808L, 1102L) */ ((double) (
					var_1_14
				))
			))
		))
	) : (
		/* 483L, 254L, 783L, 812L, 1106L) */ ((
			var_1_21
		) == (
			/* 483L, 254L, 783L, 812L, 1106L) */ ((double) (
				var_1_15
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
