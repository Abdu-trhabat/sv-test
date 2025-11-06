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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch0Filler_PS_CI.c", 13, "reach_error"); }
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
signed long int var_1_1 = 0;
signed long int var_1_4 = -32;
signed long int var_1_5 = 2;
signed short int var_1_6 = -10;
unsigned long int var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 3470417420;
unsigned char var_1_10 = 0;
double var_1_12 = 25.6;
float var_1_14 = 5.4;
float var_1_15 = 127.5;
float var_1_16 = 3.5;
double var_1_17 = 64.4;
double var_1_18 = 5.5;
double var_1_19 = 256.5;
unsigned long int var_1_20 = 1;
unsigned long int var_1_21 = 0;
double var_1_22 = 0.0;
unsigned short int var_1_23 = 10;
double var_1_24 = 4.75;
double var_1_25 = 4.6;
unsigned char var_1_26 = 0;
signed long int var_1_31 = 8;
signed long int var_1_33 = 5;
signed long int var_1_34 = 100;
signed long int var_1_35 = -8;
signed long int var_1_36 = 10;
float var_1_37 = 31.8;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 0;
unsigned long int var_1_40 = 1;
signed long int var_1_41 = 500;
unsigned long int var_1_42 = 2882328056;
unsigned short int var_1_43 = 5;
unsigned short int var_1_44 = 2;
unsigned short int var_1_45 = 50;
unsigned short int var_1_46 = 4;
unsigned char var_1_47 = 0;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = 0;
signed long int last_1_var_1_5 = 2;
signed short int last_1_var_1_6 = -10;
double last_1_var_1_17 = 64.4;
unsigned long int last_1_var_1_21 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 344L, 128L) */ if (/* 345L, 110L, 111L) */ ((/* 346L, 108L, 112L) */ ((32) / (var_1_23))) > (-500))) {
		/* 350L, 127L) */ var_1_22 = (
			/* 353L, 126L) */ (abs (
				/* 354L, 125L) */ ((
					var_1_24
				) - (
					var_1_25
				))
			))
		);
	}


	// From: CodeObject2
	/* 359L, 161L) */ if (var_1_10) {
		/* 361L, 159L) */ if (/* 362L, 139L, 140L) */ ((var_1_10) && (/* 364L, 138L, 142L) */ ((1) >= (var_1_21))))) {
			/* 367L, 157L) */ if (var_1_10) {
				/* 369L, 156L) */ var_1_26 = (
					var_1_10
				);
			}
		}
	}


	// From: CodeObject3
	/* 402L, 208L) */ if (/* 403L, 173L, 174L) */ ((/* 404L, 171L, 175L) */ ((var_1_23) & (var_1_21))) >= (var_1_1))) {
		/* 408L, 189L) */ var_1_31 = (
			/* 411L, 188L) */ (abs (
				/* 412L, 187L) */ (abs (
					var_1_23
				))
			))
		);
	} else {
		/* 414L, 206L) */ if (var_1_10) {
			/* 416L, 205L) */ var_1_31 = (
				/* 419L, 204L) */ (max (
					/* 419L, 204L) */ (
						/* 420L, 199L) */ ((
							var_1_23
						) - (
							/* 422L, 198L) */ (max (
								/* 422L, 198L) */ (
									var_1_33
								) , (
									var_1_34
								)
							))
						))
					) , (
						/* 425L, 203L) */ (abs (
							/* 426L, 202L) */ (min (
								/* 426L, 202L) */ (
									var_1_35
								) , (
									var_1_36
								)
							))
						))
					)
				))
			);
		}
	}


	// From: CodeObject4
	/* 429L, 227L) */ if (/* 430L, 216L, 217L) */ ((var_1_34) > (var_1_33))) {
		/* 433L, 226L) */ var_1_37 = (
			var_1_25
		);
	}


	// From: CodeObject5
	/* 437L, 251L) */ if (/* 438L, 235L, 236L) */ ((/* 439L, 233L, 237L) */ ((var_1_23) & (-100))) <= (var_1_4))) {
		/* 443L, 250L) */ var_1_38 = (
			/* 446L, 249L) */ (! (
				var_1_39
			))
		);
	}


	// From: CodeObject6
	/* 453L, 299L) */ if (/* 454L, 265L, 266L) */ ((/* 455L, 263L, 267L) */ ((/* 456L, 259L, 268L) */ (abs (var_1_4))) - (/* 458L, 262L, 270L) */ ((var_1_23) + (var_1_41))))) <= (var_1_33))) {
		/* 462L, 298L) */ var_1_40 = (
			/* 465L, 297L) */ (max (
				/* 465L, 297L) */ (
					var_1_41
				) , (
					/* 467L, 296L) */ (min (
						/* 467L, 296L) */ (
							var_1_33
						) , (
							/* 469L, 295L) */ ((
								var_1_42
							) - (
								var_1_34
							))
						)
					))
				)
			))
		);
	}


	// From: CodeObject7
	/* 473L, 320L) */ var_1_43 = (
		/* 476L, 319L) */ ((
			var_1_44
		) + (
			/* 478L, 318L) */ ((
				var_1_45
			) + (
				var_1_46
			))
		))
	);


	// From: CodeObject8
	/* 493L, 342L) */ if (/* 494L, 327L, 328L) */ ((var_1_17) <= (var_1_18))) {
		/* 497L, 341L) */ var_1_47 = (
			/* 500L, 340L) */ ((
				/* 501L, 338L) */ ((
					1
				) >= (
					var_1_45
				))
			) && (
				var_1_39
			))
		);
	}


	// From: Req5Batch0Filler_PS_CI
	unsigned long int stepLocal_4 = /* 52L, 125L, 130L, 498L, 521L, 813L, 955L) */ ((var_1_9) - (last_1_var_1_6));
	/* 75L, 154L, 494L, 517L, 832L, 980L) */ if (/* 57L, 126L, 127L, 495L, 518L, 814L, 962L) */ ((/* 55L, 122L, 128L, 496L, 519L, 809L, 961L) */ (- (8u))) >= (stepLocal_4))) {
		/* 62L, 143L, 501L, 524L, 819L, 967L) */ var_1_8 = (
			/* 61L, 142L, 504L, 527L, 818L, 966L) */ (! (
				var_1_10
			))
		);
	} else {
		/* 74L, 153L, 506L, 529L, 831L, 979L) */ var_1_8 = (
			/* 73L, 152L, 509L, 532L, 830L, 978L) */ ((
				/* 71L, 150L, 510L, 533L, 828L, 976L) */ ((
					/* 68L, 148L, 511L, 534L, 825L, 973L) */ ((
						last_1_var_1_17
					) / (
						var_1_12
					))
				) >= (
					last_1_var_1_17
				))
			) || (
				var_1_10
			))
		);
	}


	// From: Req7Batch0Filler_PS_CI
	/* 1012L, 220L, 679L, 692L) */ if (var_1_8) {
		/* 1014L, 219L, 681L, 694L) */ var_1_17 = (
			/* 1017L, 218L, 684L, 697L) */ (max (
				/* 1017L, 218L, 684L, 697L) */ (
					/* 1018L, 214L, 685L, 698L) */ (abs (
						15.45
					))
				) , (
					/* 1020L, 217L, 687L, 700L) */ ((
						var_1_18
					) + (
						var_1_19
					))
				)
			))
		);
	}


	// From: Req8Batch0Filler_PS_CI
	/* 38L, 231L, 731L, 737L, 864L, 1025L) */ var_1_20 = (
		last_1_var_1_21
	);


	// From: Req9Batch0Filler_PS_CI
	/* 1032L, 241L, 755L, 761L) */ var_1_21 = (
		var_1_20
	);


	// From: Req3Batch0Filler_PS_CI
	signed long int stepLocal_1 = /* 3L, 63L, 67L, 393L, 405L, 782L, 915L) */ (- (last_1_var_1_1));
	/* 16L, 79L, 390L, 402L, 791L, 929L) */ if (/* 8L, 64L, 65L, 391L, 403L, 783L, 921L) */ ((last_1_var_1_1) < (stepLocal_1))) {
		/* 15L, 78L, 395L, 407L, 790L, 928L) */ var_1_6 = (
			/* 14L, 77L, 398L, 410L, 789L, 927L) */ ((
				32
			) - (
				last_1_var_1_5
			))
		);
	}


	// From: Req1Batch0Filler_PS_CI
	/* 875L, 30L, 247L, 270L) */ if (/* 876L, 5L, 6L, 248L, 271L) */ ((var_1_21) > (/* 878L, 4L, 8L, 250L, 273L) */ (- (var_1_6))))) {
		/* 880L, 21L, 252L, 275L) */ var_1_1 = (
			/* 883L, 20L, 255L, 278L) */ (max (
				/* 883L, 20L, 255L, 278L) */ (
					var_1_6
				) , (
					/* 885L, 19L, 257L, 280L) */ ((
						var_1_21
					) + (
						var_1_4
					))
				)
			))
		);
	} else {
		/* 888L, 29L, 260L, 283L) */ var_1_1 = (
			/* 891L, 28L, 263L, 286L) */ (min (
				/* 891L, 28L, 263L, 286L) */ (
					/* 892L, 26L, 264L, 287L) */ ((
						1
					) - (
						var_1_21
					))
				) , (
					16
				)
			))
		);
	}


	// From: Req4Batch0Filler_PS_CI
	unsigned long int stepLocal_3 = var_1_20;
	unsigned long int stepLocal_2 = var_1_20;
	/* 949L, 110L, 438L, 452L) */ if (/* 940L, 87L, 88L, 439L, 453L) */ ((var_1_21) > (stepLocal_3))) {
		/* 948L, 108L, 442L, 456L) */ if (/* 942L, 96L, 97L, 443L, 457L) */ ((var_1_4) <= (stepLocal_2))) {
			/* 947L, 107L, 446L, 460L) */ var_1_7 = (
				/* 946L, 106L, 449L, 463L) */ (abs (
					var_1_20
				))
			);
		}
	}


	// From: Req6Batch0Filler_PS_CI
	unsigned long int stepLocal_5 = var_1_9;
	/* 1007L, 202L, 586L, 609L) */ if (/* 991L, 164L, 165L, 587L, 610L) */ ((/* 989L, 162L, 166L, 588L, 611L) */ ((var_1_12) * (var_1_17))) > (var_1_17))) {
		/* 1002L, 196L, 592L, 615L) */ if (/* 993L, 177L, 178L, 593L, 616L) */ ((stepLocal_5) < (var_1_21))) {
			/* 997L, 187L, 596L, 619L) */ var_1_14 = (
				var_1_15
			);
		} else {
			/* 1001L, 195L, 600L, 623L) */ var_1_14 = (
				var_1_16
			);
		}
	} else {
		/* 1006L, 201L, 604L, 627L) */ var_1_14 = (
			7.75f
		);
	}


	// From: Req2Batch0Filler_PS_CI
	unsigned long int stepLocal_0 = var_1_7;
	/* 910L, 55L, 338L, 351L) */ if (/* 901L, 40L, 41L, 339L, 352L) */ ((var_1_6) < (stepLocal_0))) {
		/* 909L, 54L, 342L, 355L) */ var_1_5 = (
			/* 908L, 53L, 345L, 358L) */ ((
				/* 906L, 51L, 346L, 359L) */ ((
					var_1_7
				) - (
					var_1_6
				))
			) + (
				var_1_4
			))
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1073741823);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -922337.2036854776000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	assume_abort_if_not(var_1_12 != 0.0F);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854766000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 2147483646);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 2147483646);
	var_1_35 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_35 >= -2147483646);
	assume_abort_if_not(var_1_35 <= 2147483646);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= -2147483646);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 0);
	var_1_41 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 1073741823);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 2147483647);
	assume_abort_if_not(var_1_42 <= 4294967294);
	var_1_44 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 32767);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 16384);
	var_1_46 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 16383);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_5 = var_1_5;
	last_1_var_1_6 = var_1_6;
	last_1_var_1_17 = var_1_17;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (/* 507L, 5L, 10L, 294L, 317L, 1039L) */ ((var_1_21) > (/* 509L, 4L, 12L, 296L, 319L, 1041L) */ (- (var_1_6))))) {
	} else {
	}
	if (/* 529L, 40L, 44L, 365L, 378L, 1061L) */ ((var_1_6) < (var_1_7))) {
	}
	if (/* 542L, 64L, 69L, 415L, 427L, 798L, 1074L, 24L) */ ((last_1_var_1_1) < (/* 545L, 63L, 71L, 417L, 429L, 797L, 1077L, 23L) */ (- (last_1_var_1_1))))) {
	}
	if (/* 557L, 87L, 91L, 467L, 481L, 1089L) */ ((var_1_21) > (var_1_20))) {
		if (/* 561L, 96L, 100L, 471L, 485L, 1093L) */ ((var_1_4) <= (var_1_20))) {
		}
	}
	if (/* 571L, 126L, 133L, 541L, 564L, 840L, 1103L, 84L) */ ((/* 572L, 122L, 134L, 542L, 565L, 835L, 1104L, 79L) */ (- (8u))) >= (/* 574L, 125L, 136L, 544L, 567L, 839L, 1106L, 83L) */ ((var_1_9) - (last_1_var_1_6))))) {
	} else {
	}
	if (/* 597L, 164L, 170L, 633L, 656L, 1129L) */ ((/* 598L, 162L, 171L, 634L, 657L, 1130L) */ ((var_1_12) * (var_1_17))) > (var_1_17))) {
		if (/* 603L, 177L, 181L, 639L, 662L, 1135L) */ ((var_1_9) < (var_1_21))) {
		} else {
		}
	} else {
	}
	if (var_1_8) {
	}
	return /* 652L) */ ((
	/* 651L) */ ((
		/* 650L) */ ((
			/* 649L) */ ((
				/* 648L) */ ((
					/* 647L) */ ((
						/* 646L) */ ((
							/* 645L) */ ((
								/* 506L, 31L, 293L, 316L, 1038L) */ ((
									/* 507L, 5L, 10L, 294L, 317L, 1039L) */ ((
										var_1_21
									) > (
										/* 509L, 4L, 12L, 296L, 319L, 1041L) */ (- (
											var_1_6
										))
									))
								) ? (
									/* 511L, 21L, 298L, 321L, 1043L) */ ((
										var_1_1
									) == (
										/* 511L, 21L, 298L, 321L, 1043L) */ ((signed long int) (
											/* 514L, 20L, 301L, 324L, 1046L) */ (max (
												/* 514L, 20L, 301L, 324L, 1046L) */ (
													var_1_6
												) , (
													/* 516L, 19L, 303L, 326L, 1048L) */ ((
														var_1_21
													) + (
														var_1_4
													))
												)
											))
										))
									))
								) : (
									/* 519L, 29L, 306L, 329L, 1051L) */ ((
										var_1_1
									) == (
										/* 519L, 29L, 306L, 329L, 1051L) */ ((signed long int) (
											/* 522L, 28L, 309L, 332L, 1054L) */ (min (
												/* 522L, 28L, 309L, 332L, 1054L) */ (
													/* 523L, 26L, 310L, 333L, 1055L) */ ((
														1
													) - (
														var_1_21
													))
												) , (
													16
												)
											))
										))
									))
								))
							) && (
								/* 528L, 56L, 364L, 377L, 1060L) */ ((
									/* 529L, 40L, 44L, 365L, 378L, 1061L) */ ((
										var_1_6
									) < (
										var_1_7
									))
								) ? (
									/* 532L, 54L, 368L, 381L, 1064L) */ ((
										var_1_5
									) == (
										/* 532L, 54L, 368L, 381L, 1064L) */ ((signed long int) (
											/* 535L, 53L, 371L, 384L, 1067L) */ ((
												/* 536L, 51L, 372L, 385L, 1068L) */ ((
													var_1_7
												) - (
													var_1_6
												))
											) + (
												var_1_4
											))
										))
									))
								) : (
									1
								))
							))
						) && (
							/* 541L, 80L, 414L, 426L, 806L, 1073L, 32L) */ ((
								/* 542L, 64L, 69L, 415L, 427L, 798L, 1074L, 24L) */ ((
									last_1_var_1_1
								) < (
									/* 545L, 63L, 71L, 417L, 429L, 797L, 1077L, 23L) */ (- (
										last_1_var_1_1
									))
								))
							) ? (
								/* 548L, 78L, 419L, 431L, 805L, 1080L, 31L) */ ((
									var_1_6
								) == (
									/* 548L, 78L, 419L, 431L, 805L, 1080L, 31L) */ ((signed short int) (
										/* 551L, 77L, 422L, 434L, 804L, 1083L, 30L) */ ((
											32
										) - (
											last_1_var_1_5
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 556L, 111L, 466L, 480L, 1088L) */ ((
							/* 557L, 87L, 91L, 467L, 481L, 1089L) */ ((
								var_1_21
							) > (
								var_1_20
							))
						) ? (
							/* 560L, 109L, 470L, 484L, 1092L) */ ((
								/* 561L, 96L, 100L, 471L, 485L, 1093L) */ ((
									var_1_4
								) <= (
									var_1_20
								))
							) ? (
								/* 564L, 107L, 474L, 488L, 1096L) */ ((
									var_1_7
								) == (
									/* 564L, 107L, 474L, 488L, 1096L) */ ((unsigned long int) (
										/* 567L, 106L, 477L, 491L, 1099L) */ (abs (
											var_1_20
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
					/* 570L, 155L, 540L, 563L, 858L, 1102L, 102L) */ ((
						/* 571L, 126L, 133L, 541L, 564L, 840L, 1103L, 84L) */ ((
							/* 572L, 122L, 134L, 542L, 565L, 835L, 1104L, 79L) */ (- (
								8u
							))
						) >= (
							/* 574L, 125L, 136L, 544L, 567L, 839L, 1106L, 83L) */ ((
								var_1_9
							) - (
								last_1_var_1_6
							))
						))
					) ? (
						/* 578L, 143L, 547L, 570L, 845L, 1110L, 89L) */ ((
							var_1_8
						) == (
							/* 578L, 143L, 547L, 570L, 845L, 1110L, 89L) */ ((unsigned char) (
								/* 581L, 142L, 550L, 573L, 844L, 1113L, 88L) */ (! (
									var_1_10
								))
							))
						))
					) : (
						/* 583L, 153L, 552L, 575L, 857L, 1115L, 101L) */ ((
							var_1_8
						) == (
							/* 583L, 153L, 552L, 575L, 857L, 1115L, 101L) */ ((unsigned char) (
								/* 586L, 152L, 555L, 578L, 856L, 1118L, 100L) */ ((
									/* 587L, 150L, 556L, 579L, 854L, 1119L, 98L) */ ((
										/* 588L, 148L, 557L, 580L, 851L, 1120L, 95L) */ ((
											last_1_var_1_17
										) / (
											var_1_12
										))
									) >= (
										last_1_var_1_17
									))
								) || (
									var_1_10
								))
							))
						))
					))
				))
			) && (
				/* 596L, 203L, 632L, 655L, 1128L) */ ((
					/* 597L, 164L, 170L, 633L, 656L, 1129L) */ ((
						/* 598L, 162L, 171L, 634L, 657L, 1130L) */ ((
							var_1_12
						) * (
							var_1_17
						))
					) > (
						var_1_17
					))
				) ? (
					/* 602L, 197L, 638L, 661L, 1134L) */ ((
						/* 603L, 177L, 181L, 639L, 662L, 1135L) */ ((
							var_1_9
						) < (
							var_1_21
						))
					) ? (
						/* 606L, 187L, 642L, 665L, 1138L) */ ((
							var_1_14
						) == (
							/* 606L, 187L, 642L, 665L, 1138L) */ ((float) (
								var_1_15
							))
						))
					) : (
						/* 610L, 195L, 646L, 669L, 1142L) */ ((
							var_1_14
						) == (
							/* 610L, 195L, 646L, 669L, 1142L) */ ((float) (
								var_1_16
							))
						))
					))
				) : (
					/* 614L, 201L, 650L, 673L, 1146L) */ ((
						var_1_14
					) == (
						/* 614L, 201L, 650L, 673L, 1146L) */ ((float) (
							7.75f
						))
					))
				))
			))
		) && (
			/* 620L, 221L, 705L, 718L, 1152L) */ ((
				var_1_8
			) ? (
				/* 622L, 219L, 707L, 720L, 1154L) */ ((
					var_1_17
				) == (
					/* 622L, 219L, 707L, 720L, 1154L) */ ((double) (
						/* 625L, 218L, 710L, 723L, 1157L) */ (max (
							/* 625L, 218L, 710L, 723L, 1157L) */ (
								/* 626L, 214L, 711L, 724L, 1158L) */ (abs (
									15.45
								))
							) , (
								/* 628L, 217L, 713L, 726L, 1160L) */ ((
									var_1_18
								) + (
									var_1_19
								))
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 633L, 231L, 743L, 749L, 871L, 1165L, 45L) */ ((
			var_1_20
		) == (
			/* 633L, 231L, 743L, 749L, 871L, 1165L, 45L) */ ((unsigned long int) (
				last_1_var_1_21
			))
		))
	))
) && (
	/* 640L, 241L, 767L, 773L, 1172L) */ ((
		var_1_21
	) == (
		/* 640L, 241L, 767L, 773L, 1172L) */ ((unsigned long int) (
			var_1_20
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
