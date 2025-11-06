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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch13Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 32;
signed long int var_1_3 = 10;
signed char var_1_4 = 10;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned short int var_1_7 = 50;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 128;
unsigned char var_1_11 = 64;
signed char var_1_12 = -10;
signed char var_1_13 = -10;
signed char var_1_14 = -25;
double var_1_15 = 64.875;
double var_1_17 = 1.625;
double var_1_18 = 32.2;
double var_1_19 = 8.6;
double var_1_20 = 10.5;
signed short int var_1_21 = -64;
unsigned char var_1_22 = 25;
unsigned char var_1_23 = 0;
unsigned long int var_1_24 = 5;
double var_1_25 = 0.75;
double var_1_26 = 99999999999999.5;
unsigned char var_1_27 = 4;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 50;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 50;
unsigned char var_1_34 = 64;
signed short int var_1_35 = -64;
signed char var_1_36 = -10;
unsigned char var_1_37 = 2;
signed char var_1_38 = -2;
signed long int var_1_39 = 256;
double var_1_40 = 31.6;
double var_1_41 = 5.4;
signed short int var_1_42 = 5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_24 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 294L, 63L) */ var_1_25 = (
		var_1_26
	);


	// From: CodeObject2
	/* 298L, 114L) */ if (/* 299L, 78L, 79L) */ ((/* 300L, 74L, 80L) */ ((var_1_26) >= (var_1_15))) && (/* 303L, 77L, 83L) */ ((var_1_12) >= (var_1_22))))) {
		/* 306L, 112L) */ if (var_1_30) {
			/* 308L, 104L) */ var_1_27 = (
				/* 311L, 103L) */ (max (
					/* 311L, 103L) */ (
						/* 312L, 100L) */ (min (
							/* 312L, 100L) */ (
								var_1_31
							) , (
								var_1_32
							)
						))
					) , (
						/* 315L, 102L) */ (abs (
							var_1_33
						))
					)
				))
			);
		} else {
			/* 317L, 111L) */ var_1_27 = (
				/* 320L, 110L) */ ((
					/* 321L, 108L) */ (abs (
						128
					))
				) - (
					var_1_34
				))
			);
		}
	}


	// From: CodeObject3
	/* 324L, 147L) */ if (/* 325L, 120L, 121L) */ ((var_1_26) > (var_1_15))) {
		/* 328L, 145L) */ if (/* 329L, 129L, 130L) */ ((var_1_22) >= (var_1_34))) {
			/* 332L, 144L) */ var_1_35 = (
				/* 335L, 143L) */ (abs (
					/* 336L, 142L) */ (min (
						/* 336L, 142L) */ (
							/* 337L, 140L) */ ((
								var_1_33
							) + (
								var_1_23
							))
						) , (
							var_1_34
						)
					))
				))
			);
		}
	}


	// From: CodeObject4
	/* 341L, 204L) */ if (/* 342L, 156L, 157L) */ ((var_1_33) >= (/* 344L, 155L, 159L) */ ((var_1_23) % (/* 346L, 154L, 161L) */ (abs (var_1_37))))))) {
		/* 348L, 202L) */ if (/* 349L, 171L, 172L) */ ((var_1_32) < (var_1_34))) {
			/* 352L, 200L) */ if (/* 353L, 183L, 184L) */ ((var_1_30) && (/* 355L, 182L, 186L) */ ((/* 356L, 180L, 187L) */ (abs (var_1_31))) <= (var_1_37))))) {
				/* 359L, 199L) */ var_1_36 = (
					var_1_38
				);
			}
		}
	}


	// From: CodeObject5
	/* 363L, 227L) */ if (/* 364L, 213L, 214L) */ ((var_1_8) > (var_1_23))) {
		/* 367L, 226L) */ var_1_39 = (
			/* 370L, 225L) */ (min (
				/* 370L, 225L) */ (
					var_1_8
				) , (
					/* 372L, 224L) */ (abs (
						var_1_24
					))
				)
			))
		);
	}


	// From: CodeObject6
	/* 375L, 281L) */ if (/* 376L, 235L, 236L) */ ((var_1_24) < (/* 378L, 234L, 238L) */ (min (/* 378L, 234L, 238L) */ (var_1_38) , (-64)))))) {
		/* 381L, 249L) */ var_1_40 = (
			var_1_26
		);
	} else {
		/* 385L, 279L) */ if (/* 386L, 256L, 257L) */ ((/* 387L, 252L, 258L) */ ((var_1_37) | (var_1_31))) < (/* 390L, 255L, 261L) */ ((8) + (var_1_21))))) {
			/* 393L, 278L) */ var_1_40 = (
				/* 396L, 277L) */ (abs (
					/* 397L, 276L) */ (max (
						/* 397L, 276L) */ (
							/* 398L, 274L) */ (abs (
								var_1_26
							))
						) , (
							var_1_41
						)
					))
				))
			);
		}
	}


	// From: CodeObject7
	/* 402L, 290L) */ var_1_42 = (
		var_1_12
	);


	// From: Req1Batch13Filler_PS_CO
	unsigned char stepLocal_1 = var_1_6;
	signed long int stepLocal_0 = /* 6L, 6L, 11L, 251L, 275L, 784L, 830L) */ ((var_1_3) >> (var_1_4));
	/* 30L, 43L, 247L, 271L, 802L, 856L) */ if (/* 13L, 7L, 8L, 248L, 272L, 785L, 840L) */ ((/* 11L, 3L, 9L, 249L, 273L, 781L, 839L) */ (~ (last_1_var_1_24))) != (stepLocal_0))) {
		/* 25L, 37L, 254L, 278L, 797L, 851L) */ if (/* 16L, 22L, 23L, 255L, 279L, 788L, 842L) */ ((var_1_5) || (stepLocal_1))) {
			/* 20L, 32L, 258L, 282L, 792L, 846L) */ var_1_1 = (
				var_1_4
			);
		} else {
			/* 24L, 36L, 262L, 286L, 796L, 850L) */ var_1_1 = (
				var_1_7
			);
		}
	} else {
		/* 29L, 42L, 266L, 290L, 801L, 855L) */ var_1_1 = (
			100
		);
	}


	// From: Req2Batch13Filler_PS_CO
	/* 861L, 60L, 343L, 354L) */ if (var_1_9) {
		/* 863L, 59L, 345L, 356L) */ var_1_8 = (
			/* 866L, 58L, 348L, 359L) */ ((
				var_1_10
			) - (
				/* 868L, 57L, 350L, 361L) */ ((
					var_1_11
				) - (
					var_1_4
				))
			))
		);
	}


	// From: Req6Batch13Filler_PS_CO
	/* 934L, 191L, 600L, 616L) */ if (/* 935L, 171L, 172L, 601L, 617L) */ ((/* 936L, 169L, 173L, 602L, 618L) */ ((/* 937L, 167L, 174L, 603L, 619L) */ (- (var_1_11))) < (8))) || (var_1_9))) {
		/* 941L, 190L, 607L, 623L) */ var_1_22 = (
			/* 944L, 189L, 610L, 626L) */ ((
				var_1_4
			) + (
				/* 946L, 188L, 612L, 628L) */ (abs (
					var_1_11
				))
			))
		);
	}


	// From: Req7Batch13Filler_PS_CO
	/* 950L, 204L, 664L, 672L) */ var_1_23 = (
		/* 953L, 203L, 667L, 675L) */ ((
			var_1_11
		) + (
			var_1_4
		))
	);


	// From: Req3Batch13Filler_PS_CO
	unsigned char stepLocal_2 = var_1_23;
	/* 885L, 83L, 387L, 400L) */ if (/* 876L, 68L, 69L, 388L, 401L) */ ((var_1_10) > (stepLocal_2))) {
		/* 884L, 82L, 391L, 404L) */ var_1_12 = (
			/* 883L, 81L, 394L, 407L) */ ((
				/* 881L, 79L, 395L, 408L) */ ((
					var_1_4
				) + (
					var_1_13
				))
			) + (
				var_1_14
			))
		);
	}


	// From: Req8Batch13Filler_PS_CO
	/* 957L, 243L, 695L, 716L) */ if (/* 958L, 213L, 214L, 696L, 717L) */ ((var_1_18) <= (var_1_20))) {
		/* 961L, 227L, 699L, 720L) */ var_1_24 = (
			/* 964L, 226L, 702L, 723L) */ (min (
				/* 964L, 226L, 702L, 723L) */ (
					var_1_4
				) , (
					/* 966L, 225L, 704L, 725L) */ ((
						var_1_1
					) + (
						var_1_8
					))
				)
			))
		);
	} else {
		/* 969L, 241L, 707L, 728L) */ if (/* 970L, 230L, 231L, 708L, 729L) */ ((9.99999999999998E13) < (var_1_20))) {
			/* 973L, 240L, 711L, 732L) */ var_1_24 = (
				var_1_10
			);
		}
	}


	// From: Req4Batch13Filler_PS_CO
	signed char stepLocal_3 = var_1_4;
	/* 910L, 119L, 439L, 460L) */ if (/* 893L, 96L, 97L, 440L, 461L) */ ((stepLocal_3) > (var_1_24))) {
		/* 905L, 114L, 443L, 464L) */ var_1_15 = (
			/* 904L, 113L, 446L, 467L) */ ((
				/* 898L, 107L, 447L, 468L) */ ((
					var_1_17
				) - (
					var_1_18
				))
			) + (
				/* 903L, 112L, 450L, 471L) */ ((
					/* 901L, 110L, 451L, 472L) */ (max (
						/* 901L, 110L, 451L, 472L) */ (
							var_1_19
						) , (
							499.25
						)
					))
				) + (
					var_1_20
				))
			))
		);
	} else {
		/* 909L, 118L, 455L, 476L) */ var_1_15 = (
			var_1_17
		);
	}


	// From: Req5Batch13Filler_PS_CO
	/* 915L, 158L, 524L, 543L) */ if (/* 916L, 127L, 128L, 525L, 544L) */ ((var_1_6) || (var_1_9))) {
		/* 919L, 156L, 528L, 547L) */ if (/* 920L, 138L, 139L, 529L, 548L) */ ((/* 921L, 136L, 140L, 530L, 549L) */ ((var_1_22) % (var_1_10))) > (var_1_24))) {
			/* 925L, 155L, 534L, 553L) */ var_1_21 = (
				/* 928L, 154L, 537L, 556L) */ ((
					/* 929L, 152L, 538L, 557L) */ (abs (
						var_1_11
					))
				) + (
					var_1_14
				))
			);
		}
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= 1);
	assume_abort_if_not(var_1_4 <= 30);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 65534);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 63);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -31);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -230584.3009213691400e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 2305843.009213691400e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -230584.3009213691400e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= -922337.2036854766000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854766000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 254);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 254);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 255);
	assume_abort_if_not(var_1_37 != 0);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -127);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= -922337.2036854766000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_24 = var_1_24;
}

int property(void) {
	if (/* 407L, 7L, 14L, 296L, 320L, 810L, 979L, 39L) */ ((/* 408L, 3L, 15L, 297L, 321L, 806L, 980L, 35L) */ (~ (last_1_var_1_24))) != (/* 411L, 6L, 17L, 299L, 323L, 809L, 983L, 38L) */ ((var_1_3) >> (var_1_4))))) {
		if (/* 415L, 22L, 26L, 303L, 327L, 813L, 987L, 42L) */ ((var_1_5) || (var_1_6))) {
		} else {
		}
	} else {
	}
	if (var_1_9) {
	}
	if (/* 443L, 68L, 72L, 414L, 427L, 1015L) */ ((var_1_10) > (var_1_23))) {
	}
	if (/* 456L, 96L, 100L, 482L, 503L, 1028L) */ ((var_1_4) > (var_1_24))) {
	} else {
	}
	if (/* 478L, 127L, 131L, 563L, 582L, 1050L) */ ((var_1_6) || (var_1_9))) {
		if (/* 482L, 138L, 144L, 567L, 586L, 1054L) */ ((/* 483L, 136L, 145L, 568L, 587L, 1055L) */ ((var_1_22) % (var_1_10))) > (var_1_24))) {
		}
	}
	if (/* 497L, 171L, 178L, 633L, 649L, 1069L) */ ((/* 498L, 169L, 179L, 634L, 650L, 1070L) */ ((/* 499L, 167L, 180L, 635L, 651L, 1071L) */ (- (var_1_11))) < (8))) || (var_1_9))) {
	}
	if (/* 520L, 213L, 217L, 738L, 759L, 1092L) */ ((var_1_18) <= (var_1_20))) {
	} else {
		if (/* 532L, 230L, 234L, 750L, 771L, 1104L) */ ((9.99999999999998E13) < (var_1_20))) {
		}
	}
	return /* 546L) */ ((
	/* 545L) */ ((
		/* 544L) */ ((
			/* 543L) */ ((
				/* 542L) */ ((
					/* 541L) */ ((
						/* 540L) */ ((
							/* 406L, 44L, 295L, 319L, 827L, 978L, 56L) */ ((
								/* 407L, 7L, 14L, 296L, 320L, 810L, 979L, 39L) */ ((
									/* 408L, 3L, 15L, 297L, 321L, 806L, 980L, 35L) */ (~ (
										last_1_var_1_24
									))
								) != (
									/* 411L, 6L, 17L, 299L, 323L, 809L, 983L, 38L) */ ((
										var_1_3
									) >> (
										var_1_4
									))
								))
							) ? (
								/* 414L, 38L, 302L, 326L, 822L, 986L, 51L) */ ((
									/* 415L, 22L, 26L, 303L, 327L, 813L, 987L, 42L) */ ((
										var_1_5
									) || (
										var_1_6
									))
								) ? (
									/* 418L, 32L, 306L, 330L, 817L, 990L, 46L) */ ((
										var_1_1
									) == (
										/* 418L, 32L, 306L, 330L, 817L, 990L, 46L) */ ((unsigned short int) (
											var_1_4
										))
									))
								) : (
									/* 422L, 36L, 310L, 334L, 821L, 994L, 50L) */ ((
										var_1_1
									) == (
										/* 422L, 36L, 310L, 334L, 821L, 994L, 50L) */ ((unsigned short int) (
											var_1_7
										))
									))
								))
							) : (
								/* 426L, 42L, 314L, 338L, 826L, 998L, 55L) */ ((
									var_1_1
								) == (
									/* 426L, 42L, 314L, 338L, 826L, 998L, 55L) */ ((unsigned short int) (
										100
									))
								))
							))
						) && (
							/* 431L, 61L, 365L, 376L, 1003L) */ ((
								var_1_9
							) ? (
								/* 433L, 59L, 367L, 378L, 1005L) */ ((
									var_1_8
								) == (
									/* 433L, 59L, 367L, 378L, 1005L) */ ((unsigned char) (
										/* 436L, 58L, 370L, 381L, 1008L) */ ((
											var_1_10
										) - (
											/* 438L, 57L, 372L, 383L, 1010L) */ ((
												var_1_11
											) - (
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
						/* 442L, 84L, 413L, 426L, 1014L) */ ((
							/* 443L, 68L, 72L, 414L, 427L, 1015L) */ ((
								var_1_10
							) > (
								var_1_23
							))
						) ? (
							/* 446L, 82L, 417L, 430L, 1018L) */ ((
								var_1_12
							) == (
								/* 446L, 82L, 417L, 430L, 1018L) */ ((signed char) (
									/* 449L, 81L, 420L, 433L, 1021L) */ ((
										/* 450L, 79L, 421L, 434L, 1022L) */ ((
											var_1_4
										) + (
											var_1_13
										))
									) + (
										var_1_14
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 455L, 120L, 481L, 502L, 1027L) */ ((
						/* 456L, 96L, 100L, 482L, 503L, 1028L) */ ((
							var_1_4
						) > (
							var_1_24
						))
					) ? (
						/* 459L, 114L, 485L, 506L, 1031L) */ ((
							var_1_15
						) == (
							/* 459L, 114L, 485L, 506L, 1031L) */ ((double) (
								/* 462L, 113L, 488L, 509L, 1034L) */ ((
									/* 463L, 107L, 489L, 510L, 1035L) */ ((
										var_1_17
									) - (
										var_1_18
									))
								) + (
									/* 466L, 112L, 492L, 513L, 1038L) */ ((
										/* 467L, 110L, 493L, 514L, 1039L) */ (max (
											/* 467L, 110L, 493L, 514L, 1039L) */ (
												var_1_19
											) , (
												499.25
											)
										))
									) + (
										var_1_20
									))
								))
							))
						))
					) : (
						/* 471L, 118L, 497L, 518L, 1043L) */ ((
							var_1_15
						) == (
							/* 471L, 118L, 497L, 518L, 1043L) */ ((double) (
								var_1_17
							))
						))
					))
				))
			) && (
				/* 477L, 159L, 562L, 581L, 1049L) */ ((
					/* 478L, 127L, 131L, 563L, 582L, 1050L) */ ((
						var_1_6
					) || (
						var_1_9
					))
				) ? (
					/* 481L, 157L, 566L, 585L, 1053L) */ ((
						/* 482L, 138L, 144L, 567L, 586L, 1054L) */ ((
							/* 483L, 136L, 145L, 568L, 587L, 1055L) */ ((
								var_1_22
							) % (
								var_1_10
							))
						) > (
							var_1_24
						))
					) ? (
						/* 487L, 155L, 572L, 591L, 1059L) */ ((
							var_1_21
						) == (
							/* 487L, 155L, 572L, 591L, 1059L) */ ((signed short int) (
								/* 490L, 154L, 575L, 594L, 1062L) */ ((
									/* 491L, 152L, 576L, 595L, 1063L) */ (abs (
										var_1_11
									))
								) + (
									var_1_14
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
			/* 496L, 192L, 632L, 648L, 1068L) */ ((
				/* 497L, 171L, 178L, 633L, 649L, 1069L) */ ((
					/* 498L, 169L, 179L, 634L, 650L, 1070L) */ ((
						/* 499L, 167L, 180L, 635L, 651L, 1071L) */ (- (
							var_1_11
						))
					) < (
						8
					))
				) || (
					var_1_9
				))
			) ? (
				/* 503L, 190L, 639L, 655L, 1075L) */ ((
					var_1_22
				) == (
					/* 503L, 190L, 639L, 655L, 1075L) */ ((unsigned char) (
						/* 506L, 189L, 642L, 658L, 1078L) */ ((
							var_1_4
						) + (
							/* 508L, 188L, 644L, 660L, 1080L) */ (abs (
								var_1_11
							))
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 512L, 204L, 680L, 688L, 1084L) */ ((
			var_1_23
		) == (
			/* 512L, 204L, 680L, 688L, 1084L) */ ((unsigned char) (
				/* 515L, 203L, 683L, 691L, 1087L) */ ((
					var_1_11
				) + (
					var_1_4
				))
			))
		))
	))
) && (
	/* 519L, 244L, 737L, 758L, 1091L) */ ((
		/* 520L, 213L, 217L, 738L, 759L, 1092L) */ ((
			var_1_18
		) <= (
			var_1_20
		))
	) ? (
		/* 523L, 227L, 741L, 762L, 1095L) */ ((
			var_1_24
		) == (
			/* 523L, 227L, 741L, 762L, 1095L) */ ((unsigned long int) (
				/* 526L, 226L, 744L, 765L, 1098L) */ (min (
					/* 526L, 226L, 744L, 765L, 1098L) */ (
						var_1_4
					) , (
						/* 528L, 225L, 746L, 767L, 1100L) */ ((
							var_1_1
						) + (
							var_1_8
						))
					)
				))
			))
		))
	) : (
		/* 531L, 242L, 749L, 770L, 1103L) */ ((
			/* 532L, 230L, 234L, 750L, 771L, 1104L) */ ((
				9.99999999999998E13
			) < (
				var_1_20
			))
		) ? (
			/* 535L, 240L, 753L, 774L, 1107L) */ ((
				var_1_24
			) == (
				/* 535L, 240L, 753L, 774L, 1107L) */ ((unsigned long int) (
					var_1_10
				))
			))
		) : (
			1
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
