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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch171Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned char var_1_44 = 0;
signed long int var_1_45 = 1;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 242L, 23L) */ if (/* 243L, 5L, 6L) */ ((/* 244L, 3L, 7L) */ (abs (var_1_26))) > (31.5f))) {
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


	// From: CodeObject2
	/* 256L, 72L) */ if (/* 257L, 35L, 36L) */ ((/* 258L, 33L, 37L) */ ((/* 259L, 31L, 38L) */ (abs (var_1_26))) - (var_1_31))) > (var_1_32))) {
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


	// From: CodeObject3
	/* 278L, 106L) */ if (var_1_20) {
		/* 280L, 104L) */ if (/* 281L, 85L, 86L) */ ((/* 282L, 83L, 87L) */ (max (/* 282L, 83L, 87L) */ (/* 283L, 81L, 88L) */ ((var_1_32) * (var_1_33))) , (var_1_34)))) < (var_1_31))) {
			/* 288L, 103L) */ var_1_35 = (
				var_1_27
			);
		}
	}


	// From: CodeObject4
	/* 294L, 155L) */ if (/* 295L, 114L, 115L) */ ((var_1_31) >= (/* 297L, 113L, 117L) */ ((var_1_26) * (var_1_32))))) {
		/* 300L, 149L) */ if (/* 301L, 129L, 130L) */ ((/* 302L, 127L, 131L) */ ((var_1_31) > (var_1_26))) || (var_1_16))) {
			/* 306L, 148L) */ var_1_37 = (
				/* 309L, 147L) */ (abs (
					/* 310L, 146L) */ ((
						/* 311L, 144L) */ ((
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
		/* 315L, 154L) */ var_1_37 = (
			var_1_33
		);
	}


	// From: CodeObject5
	/* 319L, 223L) */ if (var_1_16) {
		/* 321L, 217L) */ if (/* 322L, 168L, 169L) */ ((var_1_32) < (10.4f))) {
			/* 325L, 193L) */ if (var_1_16) {
				/* 327L, 181L) */ var_1_41 = (
					var_1_29
				);
			} else {
				/* 331L, 192L) */ var_1_41 = (
					/* 334L, 191L) */ (min (
						/* 334L, 191L) */ (
							/* 335L, 189L) */ (abs (
								var_1_27
							))
						) , (
							var_1_1
						)
					))
				);
			}
		} else {
			/* 338L, 215L) */ if (/* 339L, 198L, 199L) */ ((var_1_37) != (/* 341L, 197L, 201L) */ (abs (var_1_39))))) {
				/* 343L, 210L) */ var_1_41 = (
					var_1_29
				);
			} else {
				/* 347L, 214L) */ var_1_41 = (
					var_1_28
				);
			}
		}
	} else {
		/* 351L, 222L) */ var_1_41 = (
			var_1_28
		);
	}


	// From: CodeObject6
	/* 356L, 230L) */ var_1_43 = (
		var_1_44
	);


	// From: CodeObject7
	/* 361L, 238L) */ var_1_45 = (
		var_1_22
	);


	// From: Req2Batch171Filler_PS_CO
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


	// From: Req3Batch171Filler_PS_CO
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


	// From: Req5Batch171Filler_PS_CO
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


	// From: Req6Batch171Filler_PS_CO
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


	// From: Req1Batch171Filler_PS_CO
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


	// From: Req4Batch171Filler_PS_CO
	/* 885L, 143L, 506L, 525L) */ if (/* 886L, 108L, 109L, 507L, 526L) */ ((var_1_19) <= (var_1_7))) {
		/* 889L, 141L, 510L, 529L) */ if (/* 890L, 122L, 123L, 511L, 530L) */ ((-5) <= (/* 892L, 121L, 125L, 513L, 532L) */ ((/* 893L, 119L, 126L, 514L, 533L) */ ((1221592084) - (5))) - (var_1_17))))) {
			/* 897L, 140L, 518L, 537L) */ var_1_16 = (
				var_1_18
			);
		}
	}


	// From: Req7Batch171Filler_PS_CO
	/* 959L, 260L, 758L, 773L) */ if (/* 960L, 238L, 239L, 759L, 774L) */ (! (/* 961L, 237L, 240L, 760L, 775L) */ (! (var_1_16))))) {
		/* 963L, 258L, 762L, 777L) */ if (/* 964L, 247L, 248L, 763L, 778L) */ ((var_1_12) > (var_1_15))) {
			/* 967L, 257L, 766L, 781L) */ var_1_22 = (
				var_1_24
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
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	if (/* 367L, 4L, 8L, 312L, 333L, 974L) */ ((last_1_var_1_1) != (var_1_19))) {
	} else {
	}
	if (/* 387L, 37L, 43L, 391L, 410L, 994L) */ ((/* 388L, 35L, 44L, 392L, 411L, 995L) */ ((var_1_9) * (50.7))) <= (var_1_10))) {
		if (/* 393L, 52L, 58L, 397L, 416L, 1000L) */ ((/* 394L, 50L, 59L, 398L, 417L, 1001L) */ ((-64) * (var_1_5))) >= (var_1_7))) {
		}
	}
	if (/* 406L, 79L, 83L, 467L, 486L, 1013L) */ ((var_1_6) >= (var_1_5))) {
	} else {
	}
	if (/* 427L, 108L, 112L, 545L, 564L, 1034L) */ ((var_1_19) <= (var_1_7))) {
		if (/* 431L, 122L, 130L, 549L, 568L, 1038L) */ ((-5) <= (/* 433L, 121L, 132L, 551L, 570L, 1040L) */ ((/* 434L, 119L, 133L, 552L, 571L, 1041L) */ ((1221592084) - (5))) - (var_1_17))))) {
		}
	}
	if (/* 444L, 155L, 159L, 627L, 650L, 1051L) */ ((var_1_8) <= (var_1_6))) {
		if (/* 448L, 164L, 168L, 631L, 654L, 1055L) */ ((var_1_7) <= (var_1_15))) {
		} else {
		}
	} else {
	}
	if (/* 467L, 199L, 207L, 715L, 736L, 1074L) */ ((var_1_11) >= (/* 469L, 198L, 209L, 717L, 738L, 1076L) */ ((var_1_17) + (/* 471L, 197L, 211L, 719L, 740L, 1078L) */ ((var_1_19) * (var_1_6))))))) {
	} else {
	}
	if (/* 490L, 238L, 242L, 789L, 804L, 1097L) */ (! (/* 491L, 237L, 243L, 790L, 805L, 1098L) */ (! (var_1_16))))) {
		if (/* 494L, 247L, 251L, 793L, 808L, 1101L) */ ((var_1_12) > (var_1_15))) {
		}
	}
	return /* 507L) */ ((
	/* 506L) */ ((
		/* 505L) */ ((
			/* 504L) */ ((
				/* 503L) */ ((
					/* 502L) */ ((
						/* 366L, 26L, 311L, 332L, 973L) */ ((
							/* 367L, 4L, 8L, 312L, 333L, 974L) */ ((
								last_1_var_1_1
							) != (
								var_1_19
							))
						) ? (
							/* 371L, 20L, 316L, 337L, 978L) */ ((
								var_1_1
							) == (
								/* 371L, 20L, 316L, 337L, 978L) */ ((signed short int) (
									/* 374L, 19L, 319L, 340L, 981L) */ ((
										/* 375L, 15L, 320L, 341L, 982L) */ ((
											var_1_4
										) + (
											var_1_5
										))
									) - (
										/* 378L, 18L, 323L, 344L, 985L) */ ((
											var_1_6
										) - (
											var_1_7
										))
									))
								))
							))
						) : (
							/* 381L, 24L, 326L, 347L, 988L) */ ((
								var_1_1
							) == (
								/* 381L, 24L, 326L, 347L, 988L) */ ((signed short int) (
									var_1_6
								))
							))
						))
					) && (
						/* 386L, 72L, 390L, 409L, 993L) */ ((
							/* 387L, 37L, 43L, 391L, 410L, 994L) */ ((
								/* 388L, 35L, 44L, 392L, 411L, 995L) */ ((
									var_1_9
								) * (
									50.7
								))
							) <= (
								var_1_10
							))
						) ? (
							/* 392L, 70L, 396L, 415L, 999L) */ ((
								/* 393L, 52L, 58L, 397L, 416L, 1000L) */ ((
									/* 394L, 50L, 59L, 398L, 417L, 1001L) */ ((
										-64
									) * (
										var_1_5
									))
								) >= (
									var_1_7
								))
							) ? (
								/* 398L, 68L, 402L, 421L, 1005L) */ ((
									var_1_8
								) == (
									/* 398L, 68L, 402L, 421L, 1005L) */ ((unsigned long int) (
										/* 401L, 67L, 405L, 424L, 1008L) */ (max (
											/* 401L, 67L, 405L, 424L, 1008L) */ (
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
					/* 405L, 101L, 466L, 485L, 1012L) */ ((
						/* 406L, 79L, 83L, 467L, 486L, 1013L) */ ((
							var_1_6
						) >= (
							var_1_5
						))
					) ? (
						/* 409L, 95L, 470L, 489L, 1016L) */ ((
							var_1_11
						) == (
							/* 409L, 95L, 470L, 489L, 1016L) */ ((signed char) (
								/* 412L, 94L, 473L, 492L, 1019L) */ (min (
									/* 412L, 94L, 473L, 492L, 1019L) */ (
										/* 413L, 92L, 474L, 493L, 1020L) */ ((
											var_1_12
										) + (
											/* 415L, 91L, 476L, 495L, 1022L) */ (min (
												/* 415L, 91L, 476L, 495L, 1022L) */ (
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
						/* 419L, 99L, 480L, 499L, 1026L) */ ((
							var_1_11
						) == (
							/* 419L, 99L, 480L, 499L, 1026L) */ ((signed char) (
								var_1_14
							))
						))
					))
				))
			) && (
				/* 426L, 144L, 544L, 563L, 1033L) */ ((
					/* 427L, 108L, 112L, 545L, 564L, 1034L) */ ((
						var_1_19
					) <= (
						var_1_7
					))
				) ? (
					/* 430L, 142L, 548L, 567L, 1037L) */ ((
						/* 431L, 122L, 130L, 549L, 568L, 1038L) */ ((
							-5
						) <= (
							/* 433L, 121L, 132L, 551L, 570L, 1040L) */ ((
								/* 434L, 119L, 133L, 552L, 571L, 1041L) */ ((
									1221592084
								) - (
									5
								))
							) - (
								var_1_17
							))
						))
					) ? (
						/* 438L, 140L, 556L, 575L, 1045L) */ ((
							var_1_16
						) == (
							/* 438L, 140L, 556L, 575L, 1045L) */ ((unsigned char) (
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
			/* 443L, 188L, 626L, 649L, 1050L) */ ((
				/* 444L, 155L, 159L, 627L, 650L, 1051L) */ ((
					var_1_8
				) <= (
					var_1_6
				))
			) ? (
				/* 447L, 182L, 630L, 653L, 1054L) */ ((
					/* 448L, 164L, 168L, 631L, 654L, 1055L) */ ((
						var_1_7
					) <= (
						var_1_15
					))
				) ? (
					/* 451L, 176L, 634L, 657L, 1058L) */ ((
						var_1_19
					) == (
						/* 451L, 176L, 634L, 657L, 1058L) */ ((unsigned long int) (
							/* 454L, 175L, 637L, 660L, 1061L) */ (min (
								/* 454L, 175L, 637L, 660L, 1061L) */ (
									var_1_5
								) , (
									var_1_6
								)
							))
						))
					))
				) : (
					/* 457L, 180L, 640L, 663L, 1064L) */ ((
						var_1_19
					) == (
						/* 457L, 180L, 640L, 663L, 1064L) */ ((unsigned long int) (
							var_1_7
						))
					))
				))
			) : (
				/* 461L, 186L, 644L, 667L, 1068L) */ ((
					var_1_19
				) == (
					/* 461L, 186L, 644L, 667L, 1068L) */ ((unsigned long int) (
						var_1_4
					))
				))
			))
		))
	) && (
		/* 466L, 227L, 714L, 735L, 1073L) */ ((
			/* 467L, 199L, 207L, 715L, 736L, 1074L) */ ((
				var_1_11
			) >= (
				/* 469L, 198L, 209L, 717L, 738L, 1076L) */ ((
					var_1_17
				) + (
					/* 471L, 197L, 211L, 719L, 740L, 1078L) */ ((
						var_1_19
					) * (
						var_1_6
					))
				))
			))
		) ? (
			/* 474L, 217L, 722L, 743L, 1081L) */ ((
				var_1_20
			) == (
				/* 474L, 217L, 722L, 743L, 1081L) */ ((unsigned char) (
					var_1_21
				))
			))
		) : (
			/* 478L, 225L, 726L, 747L, 1085L) */ ((
				var_1_20
			) == (
				/* 478L, 225L, 726L, 747L, 1085L) */ ((unsigned char) (
					/* 481L, 224L, 729L, 750L, 1088L) */ ((
						/* 482L, 222L, 730L, 751L, 1089L) */ ((
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
	/* 489L, 261L, 788L, 803L, 1096L) */ ((
		/* 490L, 238L, 242L, 789L, 804L, 1097L) */ (! (
			/* 491L, 237L, 243L, 790L, 805L, 1098L) */ (! (
				var_1_16
			))
		))
	) ? (
		/* 493L, 259L, 792L, 807L, 1100L) */ ((
			/* 494L, 247L, 251L, 793L, 808L, 1101L) */ ((
				var_1_12
			) > (
				var_1_15
			))
		) ? (
			/* 497L, 257L, 796L, 811L, 1104L) */ ((
				var_1_22
			) == (
				/* 497L, 257L, 796L, 811L, 1104L) */ ((unsigned char) (
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
