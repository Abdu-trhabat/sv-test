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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch92Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 100;
float var_1_4 = 15.4;
float var_1_5 = 8.35;
unsigned short int var_1_8 = 10;
unsigned short int var_1_9 = 0;
unsigned short int var_1_10 = 53946;
unsigned short int var_1_11 = 1;
unsigned long int var_1_12 = 8;
signed short int var_1_13 = 8;
unsigned long int var_1_14 = 10000;
float var_1_15 = 255.5;
signed short int var_1_16 = -100;
signed short int var_1_17 = 10000;
signed short int var_1_18 = 500;
signed short int var_1_19 = 10000;
signed short int var_1_20 = 10;
unsigned char var_1_21 = 1;
unsigned char var_1_22 = 0;
unsigned long int var_1_23 = 128;
signed long int var_1_24 = -200;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 4;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 5;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 1;
unsigned long int var_1_33 = 25;
unsigned char var_1_34 = 5;
unsigned long int var_1_35 = 2897958869;
unsigned char var_1_36 = 0;
signed char var_1_39 = 32;
double var_1_41 = 0.25;
double var_1_42 = 5.75;
signed long int var_1_43 = -32;
unsigned char var_1_44 = 0;
unsigned char var_1_47 = 0;
float var_1_48 = 100.5;
unsigned char var_1_49 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_12 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch92Filler_PR_CI
	/* 897L, 91L, 416L, 432L) */ if (/* 898L, 70L, 71L, 417L, 433L) */ ((/* 899L, 66L, 72L, 418L, 434L) */ ((/* 900L, 64L, 73L, 419L, 435L) */ (abs (var_1_10))) >> (var_1_13))) >= (/* 903L, 69L, 76L, 422L, 438L) */ (max (/* 903L, 69L, 76L, 422L, 438L) */ (last_1_var_1_12) , (var_1_9)))))) {
		/* 907L, 90L, 426L, 442L) */ var_1_12 = (
			var_1_8
		);
	}


	// From: CodeObject3
	/* 359L, 94L) */ if (/* 360L, 71L, 72L) */ ((var_1_30) > (/* 362L, 70L, 74L) */ ((var_1_29) % (var_1_34))))) {
		/* 365L, 89L) */ var_1_33 = (
			/* 368L, 88L) */ (min (
				/* 368L, 88L) */ (
					var_1_34
				) , (
					/* 370L, 87L) */ ((
						var_1_35
					) - (
						var_1_8
					))
				)
			))
		);
	} else {
		/* 373L, 93L) */ var_1_33 = (
			var_1_30
		);
	}


	// From: CodeObject8
	/* 448L, 235L) */ if (var_1_32) {
		/* 450L, 234L) */ var_1_44 = (
			/* 453L, 233L) */ ((
				var_1_22
			) || (
				/* 455L, 232L) */ ((
					var_1_22
				) || (
					/* 457L, 231L) */ (! (
						var_1_47
					))
				))
			))
		);
	}


	// From: Req6Batch92Filler_PR_CI
	/* 997L, 242L, 784L, 790L) */ var_1_23 = (
		var_1_13
	);


	// From: CodeObject4
	/* 377L, 128L) */ if (/* 378L, 107L, 108L) */ ((/* 379L, 104L, 109L) */ ((/* 380L, 102L, 110L) */ ((var_1_10) ^ (var_1_13))) & (var_1_13))) < (/* 384L, 106L, 114L) */ (~ (var_1_13))))) {
		/* 386L, 127L) */ var_1_36 = (
			var_1_32
		);
	}


	// From: CodeObject10
	/* 465L, 250L) */ var_1_49 = (
		var_1_22
	);


	// From: Req7Batch92Filler_PR_CI
	/* 1003L, 252L, 808L, 814L) */ var_1_24 = (
		var_1_8
	);


	// From: CodeObject6
	/* 417L, 188L) */ if (/* 418L, 153L, 154L) */ ((var_1_8) >= (var_1_29))) {
		/* 421L, 186L) */ if (/* 422L, 166L, 167L) */ ((var_1_8) > (/* 424L, 165L, 169L) */ ((/* 425L, 163L, 170L) */ (min (/* 425L, 163L, 170L) */ (var_1_23) , (-64)))) | (var_1_11))))) {
			/* 429L, 185L) */ var_1_41 = (
				/* 432L, 184L) */ (abs (
					var_1_42
				))
			);
		}
	}


	// From: Req8Batch92Filler_PR_CI
	/* 1009L, 262L, 832L, 838L) */ var_1_25 = (
		var_1_22
	);


	// From: CodeObject7
	/* 434L, 219L) */ if (/* 435L, 198L, 199L) */ ((/* 436L, 196L, 200L) */ ((/* 437L, 194L, 201L) */ ((var_1_10) - (var_1_13))) > (var_1_11))) && (var_1_32))) {
		/* 442L, 218L) */ var_1_43 = (
			/* 445L, 217L) */ (min (
				/* 445L, 217L) */ (
					var_1_19
				) , (
					64
				)
			))
		);
	}


	// From: CodeObject9
	/* 460L, 242L) */ var_1_48 = (
		var_1_42
	);


	// From: Req5Batch92Filler_PR_CI
	unsigned char stepLocal_2 = /* 968L, 191L, 195L, 685L, 710L) */ ((1.00000000000005E13f) == (var_1_15));
	/* 992L, 233L, 683L, 708L) */ if (/* 973L, 193L, 194L, 684L, 709L) */ ((stepLocal_2) || (var_1_25))) {
		/* 987L, 227L, 689L, 714L) */ if (/* 978L, 208L, 209L, 690L, 715L) */ ((var_1_4) > (/* 977L, 207L, 211L, 692L, 717L) */ (max (/* 977L, 207L, 211L, 692L, 717L) */ (var_1_5) , (var_1_15)))))) {
			/* 982L, 222L, 695L, 720L) */ var_1_21 = (
				var_1_22
			);
		} else {
			/* 986L, 226L, 699L, 724L) */ var_1_21 = (
				1
			);
		}
	} else {
		/* 991L, 232L, 703L, 728L) */ var_1_21 = (
			0
		);
	}


	// From: CodeObject1
	/* 307L, 55L) */ if (/* 308L, 6L, 7L) */ ((/* 309L, 4L, 8L) */ ((var_1_11) + (var_1_19))) > (16))) {
		/* 313L, 24L) */ var_1_26 = (
			/* 316L, 23L) */ ((
				/* 317L, 21L) */ ((
					var_1_29
				) + (
					2
				))
			) + (
				var_1_30
			))
		);
	} else {
		/* 321L, 53L) */ if (/* 322L, 28L, 29L) */ ((/* 323L, 26L, 30L) */ (~ (var_1_19))) <= (var_1_11))) {
			/* 326L, 40L) */ var_1_26 = (
				var_1_30
			);
		} else {
			/* 330L, 52L) */ var_1_26 = (
				var_1_29
			);
		}
	}


	// From: CodeObject2
	/* 335L, 62L) */ var_1_31 = (
		var_1_32
	);


	// From: Req1Batch92Filler_PR_CI
	unsigned char stepLocal_0 = /* 856L, 7L, 13L, 272L, 309L) */ ((var_1_4) >= (var_1_5));
	/* 892L, 57L, 267L, 304L) */ if (/* 863L, 8L, 9L, 268L, 305L) */ ((/* 862L, 4L, 10L, 269L, 306L) */ ((var_1_12) == (var_1_23))) && (stepLocal_0))) {
		/* 887L, 51L, 275L, 312L) */ if (var_1_21) {
			/* 878L, 41L, 277L, 314L) */ if (var_1_21) {
				/* 871L, 34L, 279L, 316L) */ var_1_1 = (
					/* 870L, 33L, 282L, 319L) */ (min (
						/* 870L, 33L, 282L, 319L) */ (
							var_1_8
						) , (
							var_1_9
						)
					))
				);
			} else {
				/* 877L, 40L, 285L, 322L) */ var_1_1 = (
					/* 876L, 39L, 288L, 325L) */ (max (
						/* 876L, 39L, 288L, 325L) */ (
							var_1_9
						) , (
							var_1_8
						)
					))
				);
			}
		} else {
			/* 886L, 50L, 291L, 328L) */ var_1_1 = (
				/* 885L, 49L, 294L, 331L) */ ((
					/* 883L, 47L, 295L, 332L) */ (max (
						/* 883L, 47L, 295L, 332L) */ (
							46167
						) , (
							var_1_10
						)
					))
				) - (
					var_1_11
				))
			);
		}
	} else {
		/* 891L, 56L, 299L, 336L) */ var_1_1 = (
			var_1_10
		);
	}


	// From: Req3Batch92Filler_PR_CI
	unsigned short int stepLocal_1 = var_1_11;
	/* 943L, 156L, 479L, 510L) */ if (/* 916L, 101L, 102L, 480L, 511L) */ ((var_1_13) >= (stepLocal_1))) {
		/* 922L, 113L, 483L, 514L) */ var_1_14 = (
			/* 921L, 112L, 486L, 517L) */ ((
				var_1_13
			) + (
				var_1_11
			))
		);
	} else {
		/* 942L, 154L, 489L, 520L) */ if (/* 927L, 118L, 119L, 490L, 521L) */ ((var_1_5) != (/* 926L, 117L, 121L, 492L, 523L) */ ((var_1_4) / (var_1_15))))) {
			/* 937L, 148L, 495L, 526L) */ if (var_1_21) {
				/* 932L, 135L, 497L, 528L) */ var_1_14 = (
					var_1_11
				);
			} else {
				/* 936L, 147L, 501L, 532L) */ var_1_14 = (
					var_1_10
				);
			}
		} else {
			/* 941L, 153L, 505L, 536L) */ var_1_14 = (
				var_1_11
			);
		}
	}


	// From: CodeObject5
	/* 390L, 147L) */ if (/* 391L, 134L, 135L) */ ((var_1_35) > (var_1_11))) {
		/* 394L, 146L) */ var_1_39 = (
			/* 397L, 145L) */ ((
				-16
			) + (
				var_1_13
			))
		);
	}


	// From: Req4Batch92Filler_PR_CI
	/* 948L, 181L, 604L, 624L) */ if (var_1_21) {
		/* 950L, 176L, 606L, 626L) */ var_1_16 = (
			/* 953L, 175L, 609L, 629L) */ ((
				var_1_13
			) - (
				/* 955L, 174L, 611L, 631L) */ ((
					/* 956L, 170L, 612L, 632L) */ ((
						var_1_17
					) - (
						var_1_18
					))
				) + (
					/* 959L, 173L, 615L, 635L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				))
			))
		);
	} else {
		/* 962L, 180L, 618L, 638L) */ var_1_16 = (
			var_1_18
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 65534);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 30);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_17 >= 8191);
	assume_abort_if_not(var_1_17 <= 16383);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 8191);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 8191);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 8191);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 64);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 255);
	assume_abort_if_not(var_1_34 != 0);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 2147483647);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_12 = var_1_12;
}

int property(void) {
	if (/* 470L, 8L, 16L, 342L, 379L, 1015L) */ ((/* 471L, 4L, 17L, 343L, 380L, 1016L) */ ((var_1_12) == (var_1_23))) && (/* 474L, 7L, 20L, 346L, 383L, 1019L) */ ((var_1_4) >= (var_1_5))))) {
		if (var_1_21) {
			if (var_1_21) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (/* 508L, 70L, 79L, 449L, 465L, 1053L) */ ((/* 509L, 66L, 80L, 450L, 466L, 1054L) */ ((/* 510L, 64L, 81L, 451L, 467L, 1055L) */ (abs (var_1_10))) >> (var_1_13))) >= (/* 513L, 69L, 84L, 454L, 470L, 1058L) */ (max (/* 513L, 69L, 84L, 454L, 470L, 1058L) */ (last_1_var_1_12) , (var_1_9)))))) {
	}
	if (/* 523L, 101L, 105L, 542L, 573L, 1068L) */ ((var_1_13) >= (var_1_11))) {
	} else {
		if (/* 533L, 118L, 124L, 552L, 583L, 1078L) */ ((var_1_5) != (/* 535L, 117L, 126L, 554L, 585L, 1080L) */ ((var_1_4) / (var_1_15))))) {
			if (var_1_21) {
			} else {
			}
		} else {
		}
	}
	if (var_1_21) {
	} else {
	}
	if (/* 574L, 193L, 199L, 734L, 759L, 1119L) */ ((/* 575L, 191L, 200L, 735L, 760L, 1120L) */ ((1.00000000000005E13f) == (var_1_15))) || (var_1_25))) {
		if (/* 580L, 208L, 214L, 740L, 765L, 1125L) */ ((var_1_4) > (/* 582L, 207L, 216L, 742L, 767L, 1127L) */ (max (/* 582L, 207L, 216L, 742L, 767L, 1127L) */ (var_1_5) , (var_1_15)))))) {
		} else {
		}
	} else {
	}
	return /* 622L) */ ((
	/* 621L) */ ((
		/* 620L) */ ((
			/* 619L) */ ((
				/* 618L) */ ((
					/* 617L) */ ((
						/* 616L) */ ((
							/* 469L, 58L, 341L, 378L, 1014L) */ ((
								/* 470L, 8L, 16L, 342L, 379L, 1015L) */ ((
									/* 471L, 4L, 17L, 343L, 380L, 1016L) */ ((
										var_1_12
									) == (
										var_1_23
									))
								) && (
									/* 474L, 7L, 20L, 346L, 383L, 1019L) */ ((
										var_1_4
									) >= (
										var_1_5
									))
								))
							) ? (
								/* 477L, 52L, 349L, 386L, 1022L) */ ((
									var_1_21
								) ? (
									/* 479L, 42L, 351L, 388L, 1024L) */ ((
										var_1_21
									) ? (
										/* 481L, 34L, 353L, 390L, 1026L) */ ((
											var_1_1
										) == (
											/* 481L, 34L, 353L, 390L, 1026L) */ ((unsigned short int) (
												/* 484L, 33L, 356L, 393L, 1029L) */ (min (
													/* 484L, 33L, 356L, 393L, 1029L) */ (
														var_1_8
													) , (
														var_1_9
													)
												))
											))
										))
									) : (
										/* 487L, 40L, 359L, 396L, 1032L) */ ((
											var_1_1
										) == (
											/* 487L, 40L, 359L, 396L, 1032L) */ ((unsigned short int) (
												/* 490L, 39L, 362L, 399L, 1035L) */ (max (
													/* 490L, 39L, 362L, 399L, 1035L) */ (
														var_1_9
													) , (
														var_1_8
													)
												))
											))
										))
									))
								) : (
									/* 493L, 50L, 365L, 402L, 1038L) */ ((
										var_1_1
									) == (
										/* 493L, 50L, 365L, 402L, 1038L) */ ((unsigned short int) (
											/* 496L, 49L, 368L, 405L, 1041L) */ ((
												/* 497L, 47L, 369L, 406L, 1042L) */ (max (
													/* 497L, 47L, 369L, 406L, 1042L) */ (
														46167
													) , (
														var_1_10
													)
												))
											) - (
												var_1_11
											))
										))
									))
								))
							) : (
								/* 501L, 56L, 373L, 410L, 1046L) */ ((
									var_1_1
								) == (
									/* 501L, 56L, 373L, 410L, 1046L) */ ((unsigned short int) (
										var_1_10
									))
								))
							))
						) && (
							/* 507L, 92L, 448L, 464L, 1052L) */ ((
								/* 508L, 70L, 79L, 449L, 465L, 1053L) */ ((
									/* 509L, 66L, 80L, 450L, 466L, 1054L) */ ((
										/* 510L, 64L, 81L, 451L, 467L, 1055L) */ (abs (
											var_1_10
										))
									) >> (
										var_1_13
									))
								) >= (
									/* 513L, 69L, 84L, 454L, 470L, 1058L) */ (max (
										/* 513L, 69L, 84L, 454L, 470L, 1058L) */ (
											last_1_var_1_12
										) , (
											var_1_9
										)
									))
								))
							) ? (
								/* 517L, 90L, 458L, 474L, 1062L) */ ((
									var_1_12
								) == (
									/* 517L, 90L, 458L, 474L, 1062L) */ ((unsigned long int) (
										var_1_8
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 522L, 157L, 541L, 572L, 1067L) */ ((
							/* 523L, 101L, 105L, 542L, 573L, 1068L) */ ((
								var_1_13
							) >= (
								var_1_11
							))
						) ? (
							/* 526L, 113L, 545L, 576L, 1071L) */ ((
								var_1_14
							) == (
								/* 526L, 113L, 545L, 576L, 1071L) */ ((unsigned long int) (
									/* 529L, 112L, 548L, 579L, 1074L) */ ((
										var_1_13
									) + (
										var_1_11
									))
								))
							))
						) : (
							/* 532L, 155L, 551L, 582L, 1077L) */ ((
								/* 533L, 118L, 124L, 552L, 583L, 1078L) */ ((
									var_1_5
								) != (
									/* 535L, 117L, 126L, 554L, 585L, 1080L) */ ((
										var_1_4
									) / (
										var_1_15
									))
								))
							) ? (
								/* 538L, 149L, 557L, 588L, 1083L) */ ((
									var_1_21
								) ? (
									/* 540L, 135L, 559L, 590L, 1085L) */ ((
										var_1_14
									) == (
										/* 540L, 135L, 559L, 590L, 1085L) */ ((unsigned long int) (
											var_1_11
										))
									))
								) : (
									/* 544L, 147L, 563L, 594L, 1089L) */ ((
										var_1_14
									) == (
										/* 544L, 147L, 563L, 594L, 1089L) */ ((unsigned long int) (
											var_1_10
										))
									))
								))
							) : (
								/* 548L, 153L, 567L, 598L, 1093L) */ ((
									var_1_14
								) == (
									/* 548L, 153L, 567L, 598L, 1093L) */ ((unsigned long int) (
										var_1_11
									))
								))
							))
						))
					))
				) && (
					/* 554L, 182L, 644L, 664L, 1099L) */ ((
						var_1_21
					) ? (
						/* 556L, 176L, 646L, 666L, 1101L) */ ((
							var_1_16
						) == (
							/* 556L, 176L, 646L, 666L, 1101L) */ ((signed short int) (
								/* 559L, 175L, 649L, 669L, 1104L) */ ((
									var_1_13
								) - (
									/* 561L, 174L, 651L, 671L, 1106L) */ ((
										/* 562L, 170L, 652L, 672L, 1107L) */ ((
											var_1_17
										) - (
											var_1_18
										))
									) + (
										/* 565L, 173L, 655L, 675L, 1110L) */ ((
											var_1_19
										) - (
											var_1_20
										))
									))
								))
							))
						))
					) : (
						/* 568L, 180L, 658L, 678L, 1113L) */ ((
							var_1_16
						) == (
							/* 568L, 180L, 658L, 678L, 1113L) */ ((signed short int) (
								var_1_18
							))
						))
					))
				))
			) && (
				/* 573L, 234L, 733L, 758L, 1118L) */ ((
					/* 574L, 193L, 199L, 734L, 759L, 1119L) */ ((
						/* 575L, 191L, 200L, 735L, 760L, 1120L) */ ((
							1.00000000000005E13f
						) == (
							var_1_15
						))
					) || (
						var_1_25
					))
				) ? (
					/* 579L, 228L, 739L, 764L, 1124L) */ ((
						/* 580L, 208L, 214L, 740L, 765L, 1125L) */ ((
							var_1_4
						) > (
							/* 582L, 207L, 216L, 742L, 767L, 1127L) */ (max (
								/* 582L, 207L, 216L, 742L, 767L, 1127L) */ (
									var_1_5
								) , (
									var_1_15
								)
							))
						))
					) ? (
						/* 585L, 222L, 745L, 770L, 1130L) */ ((
							var_1_21
						) == (
							/* 585L, 222L, 745L, 770L, 1130L) */ ((unsigned char) (
								var_1_22
							))
						))
					) : (
						/* 589L, 226L, 749L, 774L, 1134L) */ ((
							var_1_21
						) == (
							/* 589L, 226L, 749L, 774L, 1134L) */ ((unsigned char) (
								1
							))
						))
					))
				) : (
					/* 593L, 232L, 753L, 778L, 1138L) */ ((
						var_1_21
					) == (
						/* 593L, 232L, 753L, 778L, 1138L) */ ((unsigned char) (
							0
						))
					))
				))
			))
		) && (
			/* 599L, 242L, 796L, 802L, 1144L) */ ((
				var_1_23
			) == (
				/* 599L, 242L, 796L, 802L, 1144L) */ ((unsigned long int) (
					var_1_13
				))
			))
		))
	) && (
		/* 605L, 252L, 820L, 826L, 1150L) */ ((
			var_1_24
		) == (
			/* 605L, 252L, 820L, 826L, 1150L) */ ((signed long int) (
				var_1_8
			))
		))
	))
) && (
	/* 611L, 262L, 844L, 850L, 1156L) */ ((
		var_1_25
	) == (
		/* 611L, 262L, 844L, 850L, 1156L) */ ((unsigned char) (
			var_1_22
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
