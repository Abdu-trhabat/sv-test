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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch171Filler_PR_CI.c", 13, "reach_error"); }
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
signed short int var_1_1 = -25;
signed short int var_1_4 = 500;
signed short int var_1_5 = 2;
signed short int var_1_6 = 29880;
signed short int var_1_7 = 32;
unsigned long int var_1_8 = 0;
double var_1_9 = 31.75;
double var_1_10 = 999999999999.6;
signed char var_1_11 = -25;
signed char var_1_12 = -1;
signed char var_1_13 = -5;
signed char var_1_14 = -32;
signed char var_1_15 = 64;
unsigned char var_1_16 = 0;
signed long int var_1_17 = 64;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 10000000;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 10;
unsigned char var_1_24 = 100;
signed char var_1_25 = -10;
float var_1_26 = 16.2;
signed char var_1_27 = 16;
signed char var_1_28 = 5;
signed char var_1_29 = 2;
float var_1_30 = 7.75;
float var_1_31 = 128.6;
float var_1_32 = 50.4;
float var_1_33 = 128.5;
float var_1_34 = 1.5;
unsigned char var_1_35 = 10;
double var_1_37 = 4.2;
double var_1_38 = 2.8;
double var_1_39 = 100000000000000.5;
double var_1_40 = 8.25;
signed short int var_1_41 = 32;
unsigned char var_1_43 = 0;
signed long int var_1_45 = 1;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch171Filler_PR_CI
	signed long int stepLocal_0 = /* 838L, 50L, 54L, 360L, 379L) */ ((-64) * (var_1_5));
	/* 856L, 71L, 352L, 371L) */ if (/* 846L, 37L, 38L, 353L, 372L) */ ((/* 844L, 35L, 39L, 354L, 373L) */ ((var_1_9) * (50.7))) <= (var_1_10))) {
		/* 855L, 69L, 358L, 377L) */ if (/* 848L, 52L, 53L, 359L, 378L) */ ((stepLocal_0) >= (var_1_7))) {
			/* 854L, 68L, 364L, 383L) */ var_1_8 = (
				/* 853L, 67L, 367L, 386L) */ (max (
					/* 853L, 67L, 367L, 386L) */ (
						var_1_6
					) , (
						100u
					)
				))
			);
		}
	}


	// From: CodeObject2
	/* 256L, 72L) */ if (/* 257L, 35L, 36L) */ ((/* 258L, 33L, 37L) */ ((/* 259L, 31L, 38L) */ (abs (var_1_10))) - (var_1_31))) > (var_1_9))) {
		/* 263L, 53L) */ var_1_30 = (
			/* 266L, 52L) */ ((
				var_1_33
			) + (
				var_1_34
			))
		);
	} else {
		/* 269L, 70L) */ if (/* 270L, 57L, 58L) */ ((16) <= (/* 272L, 56L, 60L) */ (abs (var_1_29))))) {
			/* 274L, 69L) */ var_1_30 = (
				var_1_33
			);
		}
	}


	// From: CodeObject7
	/* 415L, 238L) */ var_1_45 = (
		var_1_6
	);


	// From: Req3Batch171Filler_PR_CI
	signed short int stepLocal_1 = var_1_5;
	/* 879L, 100L, 428L, 447L) */ if (/* 864L, 79L, 80L, 429L, 448L) */ ((var_1_6) >= (stepLocal_1))) {
		/* 874L, 95L, 432L, 451L) */ var_1_11 = (
			/* 873L, 94L, 435L, 454L) */ (min (
				/* 873L, 94L, 435L, 454L) */ (
					/* 871L, 92L, 436L, 455L) */ ((
						var_1_12
					) + (
						/* 870L, 91L, 438L, 457L) */ (min (
							/* 870L, 91L, 438L, 457L) */ (
								var_1_13
							) , (
								var_1_14
							)
						))
					))
				) , (
					var_1_15
				)
			))
		);
	} else {
		/* 878L, 99L, 442L, 461L) */ var_1_11 = (
			var_1_14
		);
	}


	// From: CodeObject5
	/* 373L, 223L) */ if (var_1_18) {
		/* 375L, 217L) */ if (/* 376L, 168L, 169L) */ ((var_1_10) < (10.4f))) {
			/* 379L, 193L) */ if (var_1_16) {
				/* 381L, 181L) */ var_1_41 = (
					var_1_29
				);
			} else {
				/* 385L, 192L) */ var_1_41 = (
					/* 388L, 191L) */ (min (
						/* 388L, 191L) */ (
							/* 389L, 189L) */ (abs (
								var_1_27
							))
						) , (
							var_1_5
						)
					))
				);
			}
		} else {
			/* 392L, 215L) */ if (/* 393L, 198L, 199L) */ ((var_1_10) != (/* 395L, 197L, 201L) */ (abs (var_1_39))))) {
				/* 397L, 210L) */ var_1_41 = (
					var_1_29
				);
			} else {
				/* 401L, 214L) */ var_1_41 = (
					var_1_28
				);
			}
		}
	} else {
		/* 405L, 222L) */ var_1_41 = (
			var_1_28
		);
	}


	// From: Req5Batch171Filler_PR_CI
	unsigned long int stepLocal_3 = var_1_8;
	signed char stepLocal_2 = var_1_15;
	/* 927L, 187L, 580L, 603L) */ if (/* 909L, 155L, 156L, 581L, 604L) */ ((stepLocal_3) <= (var_1_6))) {
		/* 922L, 181L, 584L, 607L) */ if (/* 911L, 164L, 165L, 585L, 608L) */ ((var_1_7) <= (stepLocal_2))) {
			/* 917L, 176L, 588L, 611L) */ var_1_19 = (
				/* 916L, 175L, 591L, 614L) */ (min (
					/* 916L, 175L, 591L, 614L) */ (
						var_1_5
					) , (
						var_1_6
					)
				))
			);
		} else {
			/* 921L, 180L, 594L, 617L) */ var_1_19 = (
				var_1_7
			);
		}
	} else {
		/* 926L, 186L, 598L, 621L) */ var_1_19 = (
			var_1_4
		);
	}


	// From: Req6Batch171Filler_PR_CI
	unsigned long int stepLocal_4 = /* 933L, 198L, 202L, 675L, 696L) */ ((var_1_17) + (/* 935L, 197L, 204L, 677L, 698L) */ ((var_1_19) * (var_1_6))));
	/* 953L, 226L, 672L, 693L) */ if (/* 940L, 199L, 200L, 673L, 694L) */ ((var_1_11) >= (stepLocal_4))) {
		/* 944L, 217L, 680L, 701L) */ var_1_20 = (
			var_1_21
		);
	} else {
		/* 952L, 225L, 684L, 705L) */ var_1_20 = (
			/* 951L, 224L, 687L, 708L) */ ((
				/* 949L, 222L, 688L, 709L) */ ((
					var_1_5
				) <= (
					var_1_6
				))
			) || (
				var_1_21
			))
		);
	}


	// From: CodeObject4
	/* 348L, 155L) */ if (/* 349L, 114L, 115L) */ ((var_1_31) >= (/* 351L, 113L, 117L) */ ((var_1_26) * (var_1_32))))) {
		/* 354L, 149L) */ if (/* 355L, 129L, 130L) */ ((/* 356L, 127L, 131L) */ ((var_1_31) > (var_1_26))) || (var_1_21))) {
			/* 360L, 148L) */ var_1_37 = (
				/* 363L, 147L) */ (abs (
					/* 364L, 146L) */ ((
						/* 365L, 144L) */ ((
							var_1_38
						) + (
							var_1_39
						))
					) - (
						var_1_40
					))
				))
			);
		}
	} else {
		/* 369L, 154L) */ var_1_37 = (
			var_1_33
		);
	}


	// From: Req1Batch171Filler_PR_CI
	/* 817L, 25L, 269L, 290L) */ if (/* 818L, 4L, 5L, 270L, 291L) */ ((last_1_var_1_1) != (var_1_19))) {
		/* 822L, 20L, 274L, 295L) */ var_1_1 = (
			/* 825L, 19L, 277L, 298L) */ ((
				/* 826L, 15L, 278L, 299L) */ ((
					var_1_4
				) + (
					var_1_5
				))
			) - (
				/* 829L, 18L, 281L, 302L) */ ((
					var_1_6
				) - (
					var_1_7
				))
			))
		);
	} else {
		/* 832L, 24L, 284L, 305L) */ var_1_1 = (
			var_1_6
		);
	}


	// From: CodeObject1
	/* 242L, 23L) */ if (/* 243L, 5L, 6L) */ ((/* 244L, 3L, 7L) */ (abs (var_1_9))) > (31.5f))) {
		/* 247L, 22L) */ var_1_25 = (
			/* 250L, 21L) */ (abs (
				/* 251L, 20L) */ ((
					var_1_27
				) - (
					/* 253L, 19L) */ ((
						var_1_28
					) + (
						var_1_29
					))
				))
			))
		);
	}


	// From: CodeObject6
	/* 410L, 230L) */ var_1_43 = (
		var_1_18
	);


	// From: Req4Batch171Filler_PR_CI
	/* 885L, 143L, 506L, 525L) */ if (/* 886L, 108L, 109L, 507L, 526L) */ ((var_1_19) <= (var_1_7))) {
		/* 889L, 141L, 510L, 529L) */ if (/* 890L, 122L, 123L, 511L, 530L) */ ((-5) <= (/* 892L, 121L, 125L, 513L, 532L) */ ((/* 893L, 119L, 126L, 514L, 533L) */ ((1221592084) - (5))) - (var_1_17))))) {
			/* 897L, 140L, 518L, 537L) */ var_1_16 = (
				var_1_18
			);
		}
	}


	// From: Req7Batch171Filler_PR_CI
	/* 959L, 260L, 758L, 773L) */ if (/* 960L, 238L, 239L, 759L, 774L) */ (! (/* 961L, 237L, 240L, 760L, 775L) */ (! (var_1_16))))) {
		/* 963L, 258L, 762L, 777L) */ if (/* 964L, 247L, 248L, 763L, 778L) */ ((var_1_12) > (var_1_15))) {
			/* 967L, 257L, 766L, 781L) */ var_1_22 = (
				var_1_24
			);
		}
	}


	// From: CodeObject3
	/* 278L, 106L) */ if (var_1_16) {
		/* 280L, 104L) */ if (/* 281L, 85L, 86L) */ ((/* 282L, 83L, 87L) */ (max (/* 282L, 83L, 87L) */ (/* 283L, 81L, 88L) */ ((var_1_9) * (var_1_33))) , (var_1_34)))) < (var_1_31))) {
			/* 288L, 103L) */ var_1_35 = (
				var_1_27
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 16383);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -127);
	assume_abort_if_not(var_1_15 <= 126);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 2147483647);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 0);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 1);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 254);
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_34 >= -461168.6018427383000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 0.0F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	if (/* 421L, 4L, 8L, 312L, 333L, 974L) */ ((last_1_var_1_1) != (var_1_19))) {
	} else {
	}
	if (/* 441L, 37L, 43L, 391L, 410L, 994L) */ ((/* 442L, 35L, 44L, 392L, 411L, 995L) */ ((var_1_9) * (50.7))) <= (var_1_10))) {
		if (/* 447L, 52L, 58L, 397L, 416L, 1000L) */ ((/* 448L, 50L, 59L, 398L, 417L, 1001L) */ ((-64) * (var_1_5))) >= (var_1_7))) {
		}
	}
	if (/* 460L, 79L, 83L, 467L, 486L, 1013L) */ ((var_1_6) >= (var_1_5))) {
	} else {
	}
	if (/* 481L, 108L, 112L, 545L, 564L, 1034L) */ ((var_1_19) <= (var_1_7))) {
		if (/* 485L, 122L, 130L, 549L, 568L, 1038L) */ ((-5) <= (/* 487L, 121L, 132L, 551L, 570L, 1040L) */ ((/* 488L, 119L, 133L, 552L, 571L, 1041L) */ ((1221592084) - (5))) - (var_1_17))))) {
		}
	}
	if (/* 498L, 155L, 159L, 627L, 650L, 1051L) */ ((var_1_8) <= (var_1_6))) {
		if (/* 502L, 164L, 168L, 631L, 654L, 1055L) */ ((var_1_7) <= (var_1_15))) {
		} else {
		}
	} else {
	}
	if (/* 521L, 199L, 207L, 715L, 736L, 1074L) */ ((var_1_11) >= (/* 523L, 198L, 209L, 717L, 738L, 1076L) */ ((var_1_17) + (/* 525L, 197L, 211L, 719L, 740L, 1078L) */ ((var_1_19) * (var_1_6))))))) {
	} else {
	}
	if (/* 544L, 238L, 242L, 789L, 804L, 1097L) */ (! (/* 545L, 237L, 243L, 790L, 805L, 1098L) */ (! (var_1_16))))) {
		if (/* 548L, 247L, 251L, 793L, 808L, 1101L) */ ((var_1_12) > (var_1_15))) {
		}
	}
	return /* 561L) */ ((
	/* 560L) */ ((
		/* 559L) */ ((
			/* 558L) */ ((
				/* 557L) */ ((
					/* 556L) */ ((
						/* 420L, 26L, 311L, 332L, 973L) */ ((
							/* 421L, 4L, 8L, 312L, 333L, 974L) */ ((
								last_1_var_1_1
							) != (
								var_1_19
							))
						) ? (
							/* 425L, 20L, 316L, 337L, 978L) */ ((
								var_1_1
							) == (
								/* 425L, 20L, 316L, 337L, 978L) */ ((signed short int) (
									/* 428L, 19L, 319L, 340L, 981L) */ ((
										/* 429L, 15L, 320L, 341L, 982L) */ ((
											var_1_4
										) + (
											var_1_5
										))
									) - (
										/* 432L, 18L, 323L, 344L, 985L) */ ((
											var_1_6
										) - (
											var_1_7
										))
									))
								))
							))
						) : (
							/* 435L, 24L, 326L, 347L, 988L) */ ((
								var_1_1
							) == (
								/* 435L, 24L, 326L, 347L, 988L) */ ((signed short int) (
									var_1_6
								))
							))
						))
					) && (
						/* 440L, 72L, 390L, 409L, 993L) */ ((
							/* 441L, 37L, 43L, 391L, 410L, 994L) */ ((
								/* 442L, 35L, 44L, 392L, 411L, 995L) */ ((
									var_1_9
								) * (
									50.7
								))
							) <= (
								var_1_10
							))
						) ? (
							/* 446L, 70L, 396L, 415L, 999L) */ ((
								/* 447L, 52L, 58L, 397L, 416L, 1000L) */ ((
									/* 448L, 50L, 59L, 398L, 417L, 1001L) */ ((
										-64
									) * (
										var_1_5
									))
								) >= (
									var_1_7
								))
							) ? (
								/* 452L, 68L, 402L, 421L, 1005L) */ ((
									var_1_8
								) == (
									/* 452L, 68L, 402L, 421L, 1005L) */ ((unsigned long int) (
										/* 455L, 67L, 405L, 424L, 1008L) */ (max (
											/* 455L, 67L, 405L, 424L, 1008L) */ (
												var_1_6
											) , (
												100u
											)
										))
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
					/* 459L, 101L, 466L, 485L, 1012L) */ ((
						/* 460L, 79L, 83L, 467L, 486L, 1013L) */ ((
							var_1_6
						) >= (
							var_1_5
						))
					) ? (
						/* 463L, 95L, 470L, 489L, 1016L) */ ((
							var_1_11
						) == (
							/* 463L, 95L, 470L, 489L, 1016L) */ ((signed char) (
								/* 466L, 94L, 473L, 492L, 1019L) */ (min (
									/* 466L, 94L, 473L, 492L, 1019L) */ (
										/* 467L, 92L, 474L, 493L, 1020L) */ ((
											var_1_12
										) + (
											/* 469L, 91L, 476L, 495L, 1022L) */ (min (
												/* 469L, 91L, 476L, 495L, 1022L) */ (
													var_1_13
												) , (
													var_1_14
												)
											))
										))
									) , (
										var_1_15
									)
								))
							))
						))
					) : (
						/* 473L, 99L, 480L, 499L, 1026L) */ ((
							var_1_11
						) == (
							/* 473L, 99L, 480L, 499L, 1026L) */ ((signed char) (
								var_1_14
							))
						))
					))
				))
			) && (
				/* 480L, 144L, 544L, 563L, 1033L) */ ((
					/* 481L, 108L, 112L, 545L, 564L, 1034L) */ ((
						var_1_19
					) <= (
						var_1_7
					))
				) ? (
					/* 484L, 142L, 548L, 567L, 1037L) */ ((
						/* 485L, 122L, 130L, 549L, 568L, 1038L) */ ((
							-5
						) <= (
							/* 487L, 121L, 132L, 551L, 570L, 1040L) */ ((
								/* 488L, 119L, 133L, 552L, 571L, 1041L) */ ((
									1221592084
								) - (
									5
								))
							) - (
								var_1_17
							))
						))
					) ? (
						/* 492L, 140L, 556L, 575L, 1045L) */ ((
							var_1_16
						) == (
							/* 492L, 140L, 556L, 575L, 1045L) */ ((unsigned char) (
								var_1_18
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
			/* 497L, 188L, 626L, 649L, 1050L) */ ((
				/* 498L, 155L, 159L, 627L, 650L, 1051L) */ ((
					var_1_8
				) <= (
					var_1_6
				))
			) ? (
				/* 501L, 182L, 630L, 653L, 1054L) */ ((
					/* 502L, 164L, 168L, 631L, 654L, 1055L) */ ((
						var_1_7
					) <= (
						var_1_15
					))
				) ? (
					/* 505L, 176L, 634L, 657L, 1058L) */ ((
						var_1_19
					) == (
						/* 505L, 176L, 634L, 657L, 1058L) */ ((unsigned long int) (
							/* 508L, 175L, 637L, 660L, 1061L) */ (min (
								/* 508L, 175L, 637L, 660L, 1061L) */ (
									var_1_5
								) , (
									var_1_6
								)
							))
						))
					))
				) : (
					/* 511L, 180L, 640L, 663L, 1064L) */ ((
						var_1_19
					) == (
						/* 511L, 180L, 640L, 663L, 1064L) */ ((unsigned long int) (
							var_1_7
						))
					))
				))
			) : (
				/* 515L, 186L, 644L, 667L, 1068L) */ ((
					var_1_19
				) == (
					/* 515L, 186L, 644L, 667L, 1068L) */ ((unsigned long int) (
						var_1_4
					))
				))
			))
		))
	) && (
		/* 520L, 227L, 714L, 735L, 1073L) */ ((
			/* 521L, 199L, 207L, 715L, 736L, 1074L) */ ((
				var_1_11
			) >= (
				/* 523L, 198L, 209L, 717L, 738L, 1076L) */ ((
					var_1_17
				) + (
					/* 525L, 197L, 211L, 719L, 740L, 1078L) */ ((
						var_1_19
					) * (
						var_1_6
					))
				))
			))
		) ? (
			/* 528L, 217L, 722L, 743L, 1081L) */ ((
				var_1_20
			) == (
				/* 528L, 217L, 722L, 743L, 1081L) */ ((unsigned char) (
					var_1_21
				))
			))
		) : (
			/* 532L, 225L, 726L, 747L, 1085L) */ ((
				var_1_20
			) == (
				/* 532L, 225L, 726L, 747L, 1085L) */ ((unsigned char) (
					/* 535L, 224L, 729L, 750L, 1088L) */ ((
						/* 536L, 222L, 730L, 751L, 1089L) */ ((
							var_1_5
						) <= (
							var_1_6
						))
					) || (
						var_1_21
					))
				))
			))
		))
	))
) && (
	/* 543L, 261L, 788L, 803L, 1096L) */ ((
		/* 544L, 238L, 242L, 789L, 804L, 1097L) */ (! (
			/* 545L, 237L, 243L, 790L, 805L, 1098L) */ (! (
				var_1_16
			))
		))
	) ? (
		/* 547L, 259L, 792L, 807L, 1100L) */ ((
			/* 548L, 247L, 251L, 793L, 808L, 1101L) */ ((
				var_1_12
			) > (
				var_1_15
			))
		) ? (
			/* 551L, 257L, 796L, 811L, 1104L) */ ((
				var_1_22
			) == (
				/* 551L, 257L, 796L, 811L, 1104L) */ ((unsigned char) (
					var_1_24
				))
			))
		) : (
			1
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
