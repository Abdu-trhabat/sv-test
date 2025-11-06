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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch63Filler_PR_CI.c", 13, "reach_error"); }
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
signed long int var_1_1 = 64;
unsigned long int var_1_2 = 50;
unsigned long int var_1_3 = 8;
signed long int var_1_4 = 25;
signed long int var_1_5 = -100;
signed long int var_1_6 = 8;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 128;
signed long int var_1_9 = 2;
signed long int var_1_10 = 128;
unsigned short int var_1_11 = 500;
signed char var_1_12 = 1;
unsigned char var_1_13 = 64;
signed char var_1_14 = -5;
double var_1_15 = 499.5;
double var_1_16 = 64.1;
double var_1_17 = 10.5;
double var_1_18 = 2.5;
double var_1_19 = 127.8;
double var_1_20 = 2.051;
double var_1_21 = 128.25;
signed char var_1_22 = -10;
unsigned short int var_1_23 = 100;
unsigned short int var_1_24 = 64;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 4;
signed short int var_1_27 = -16;
unsigned char var_1_28 = 8;
unsigned char var_1_33 = 8;
unsigned char var_1_34 = 10;
double var_1_35 = 8.35;
unsigned short int var_1_40 = 50;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 5;
unsigned char var_1_43 = 1;
signed char var_1_44 = -16;
signed char var_1_45 = 2;
signed char var_1_46 = 16;
signed char var_1_47 = 0;
signed long int var_1_48 = 256;
double var_1_49 = 1.25;
unsigned long int var_1_50 = 5;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch63Filler_PR_CI
	/* 845L, 53L, 273L, 308L) */ if (/* 846L, 8L, 9L, 274L, 309L) */ ((32u) < (/* 848L, 7L, 11L, 276L, 311L) */ ((/* 849L, 5L, 12L, 277L, 312L) */ ((var_1_2) + (4u))) | (var_1_3))))) {
		/* 853L, 30L, 281L, 316L) */ var_1_1 = (
			/* 856L, 29L, 284L, 319L) */ ((
				var_1_4
			) + (
				/* 858L, 28L, 286L, 321L) */ ((
					var_1_5
				) + (
					var_1_6
				))
			))
		);
	} else {
		/* 861L, 51L, 289L, 324L) */ if (/* 862L, 32L, 33L, 290L, 325L) */ (! (var_1_7))) {
			/* 864L, 44L, 292L, 327L) */ var_1_1 = (
				/* 867L, 43L, 295L, 330L) */ (min (
					/* 867L, 43L, 295L, 330L) */ (
						var_1_4
					) , (
						/* 869L, 42L, 297L, 332L) */ ((
							var_1_8
						) - (
							var_1_9
						))
					)
				))
			);
		} else {
			/* 872L, 50L, 300L, 335L) */ var_1_1 = (
				/* 875L, 49L, 303L, 338L) */ ((
					var_1_9
				) - (
					var_1_10
				))
			);
		}
	}


	// From: Req2Batch63Filler_PR_CI
	unsigned long int stepLocal_0 = var_1_3;
	/* 890L, 80L, 412L, 423L) */ if (/* 885L, 65L, 66L, 413L, 424L) */ ((/* 884L, 63L, 67L, 414L, 425L) */ ((var_1_9) >> (var_1_12))) < (stepLocal_0))) {
		/* 889L, 79L, 418L, 429L) */ var_1_11 = (
			var_1_12
		);
	}


	// From: CodeObject9
	/* 478L, 251L) */ var_1_50 = (
		var_1_34
	);


	// From: Req3Batch63Filler_PR_CI
	signed long int stepLocal_1 = var_1_9;
	/* 907L, 111L, 456L, 469L) */ if (/* 902L, 92L, 93L, 457L, 470L) */ ((/* 901L, 90L, 94L, 458L, 471L) */ ((var_1_3) + (/* 900L, 89L, 96L, 460L, 473L) */ ((var_1_12) / (var_1_14))))) >= (stepLocal_1))) {
		/* 906L, 110L, 464L, 477L) */ var_1_13 = (
			var_1_12
		);
	}


	// From: Req4Batch63Filler_PR_CI
	unsigned char stepLocal_2 = var_1_7;
	/* 933L, 153L, 508L, 530L) */ if (/* 920L, 124L, 125L, 509L, 531L) */ ((/* 919L, 122L, 126L, 510L, 532L) */ ((/* 915L, 118L, 127L, 511L, 533L) */ (abs (var_1_12))) >= (/* 918L, 121L, 129L, 513L, 535L) */ ((var_1_1) & (var_1_10))))) && (stepLocal_2))) {
		/* 928L, 148L, 517L, 539L) */ var_1_15 = (
			/* 927L, 147L, 520L, 542L) */ ((
				/* 925L, 145L, 521L, 543L) */ (max (
					/* 925L, 145L, 521L, 543L) */ (
						var_1_16
					) , (
						var_1_17
					)
				))
			) - (
				var_1_18
			))
		);
	} else {
		/* 932L, 152L, 525L, 547L) */ var_1_15 = (
			var_1_18
		);
	}


	// From: CodeObject4
	/* 393L, 185L) */ if (/* 394L, 150L, 151L) */ ((var_1_21) > (/* 396L, 149L, 153L) */ ((var_1_18) + (var_1_17))))) {
		/* 399L, 183L) */ if (/* 400L, 163L, 164L) */ ((var_1_9) > (var_1_2))) {
			/* 403L, 178L) */ var_1_41 = (
				/* 406L, 177L) */ ((
					128
				) - (
					/* 408L, 176L) */ (min (
						/* 408L, 176L) */ (
							/* 409L, 174L) */ (abs (
								var_1_42
							))
						) , (
							32
						)
					))
				))
			);
		} else {
			/* 412L, 182L) */ var_1_41 = (
				var_1_33
			);
		}
	}


	// From: CodeObject5
	/* 417L, 192L) */ var_1_43 = (
		var_1_34
	);


	// From: Req5Batch63Filler_PR_CI
	/* 938L, 179L, 597L, 611L) */ if (/* 939L, 164L, 165L, 598L, 612L) */ ((var_1_18) != (999999.5))) {
		/* 942L, 178L, 601L, 615L) */ var_1_19 = (
			/* 945L, 177L, 604L, 618L) */ ((
				15.75
			) + (
				/* 947L, 176L, 606L, 620L) */ ((
					var_1_20
				) - (
					var_1_21
				))
			))
		);
	}


	// From: CodeObject8
	/* 473L, 243L) */ var_1_49 = (
		var_1_16
	);


	// From: Req6Batch63Filler_PR_CI
	/* 955L, 205L, 656L, 671L) */ if (var_1_7) {
		/* 957L, 203L, 658L, 673L) */ if (/* 958L, 192L, 193L, 659L, 674L) */ ((-128) < (var_1_5))) {
			/* 961L, 202L, 662L, 677L) */ var_1_22 = (
				var_1_12
			);
		}
	}


	// From: Req8Batch63Filler_PR_CI
	/* 982L, 247L, 773L, 779L) */ var_1_25 = (
		var_1_12
	);


	// From: CodeObject2
	/* 325L, 71L) */ if (/* 326L, 48L, 49L) */ ((/* 327L, 46L, 50L) */ ((-32) & (var_1_3))) > (var_1_3))) {
		/* 331L, 64L) */ var_1_35 = (
			/* 334L, 63L) */ (max (
				/* 334L, 63L) */ (
					var_1_17
				) , (
					var_1_20
				)
			))
		);
	} else {
		/* 337L, 70L) */ var_1_35 = (
			/* 340L, 69L) */ ((
				var_1_21
			) + (
				var_1_20
			))
		);
	}


	// From: CodeObject3
	/* 343L, 142L) */ if (/* 344L, 86L, 87L) */ ((var_1_20) >= (/* 346L, 85L, 89L) */ (abs (var_1_16))))) {
		/* 348L, 119L) */ if (/* 349L, 97L, 98L) */ ((var_1_20) > (var_1_21))) {
			/* 352L, 117L) */ if (/* 353L, 106L, 107L) */ ((var_1_20) < (var_1_16))) {
				/* 356L, 116L) */ var_1_40 = (
					var_1_9
				);
			}
		}
	} else {
		/* 360L, 140L) */ if (/* 361L, 125L, 126L) */ ((var_1_20) <= (/* 363L, 124L, 128L) */ ((var_1_21) + (var_1_20))))) {
			/* 366L, 139L) */ var_1_40 = (
				var_1_34
			);
		}
	}


	// From: CodeObject6
	/* 447L, 222L) */ if (/* 448L, 199L, 200L) */ ((var_1_3) < (var_1_34))) {
		/* 451L, 213L) */ var_1_44 = (
			/* 454L, 212L) */ ((
				/* 455L, 210L) */ ((
					var_1_45
				) - (
					var_1_46
				))
			) + (
				var_1_47
			))
		);
	} else {
		/* 459L, 221L) */ var_1_44 = (
			/* 462L, 220L) */ (max (
				/* 462L, 220L) */ (
					/* 463L, 218L) */ (min (
						/* 463L, 218L) */ (
							var_1_46
						) , (
							var_1_47
						)
					))
				) , (
					var_1_45
				)
			))
		);
	}


	// From: Req9Batch63Filler_PR_CI
	/* 988L, 257L, 797L, 803L) */ var_1_26 = (
		var_1_12
	);


	// From: CodeObject7
	/* 468L, 235L) */ var_1_48 = (
		var_1_12
	);


	// From: Req10Batch63Filler_PR_CI
	/* 994L, 267L, 821L, 827L) */ var_1_27 = (
		var_1_26
	);


	// From: Req7Batch63Filler_PR_CI
	/* 966L, 238L, 712L, 727L) */ if (/* 967L, 221L, 222L, 713L, 728L) */ ((var_1_16) > (var_1_21))) {
		/* 970L, 237L, 716L, 731L) */ var_1_23 = (
			/* 973L, 236L, 719L, 734L) */ (min (
				/* 973L, 236L, 719L, 734L) */ (
					var_1_26
				) , (
					/* 975L, 235L, 721L, 736L) */ (min (
						/* 975L, 235L, 721L, 736L) */ (
							var_1_12
						) , (
							/* 977L, 234L, 723L, 738L) */ (min (
								/* 977L, 234L, 723L, 738L) */ (
									8
								) , (
									var_1_24
								)
							))
						)
					))
				)
			))
		);
	}


	// From: CodeObject1
	/* 256L, 36L) */ if (/* 257L, 8L, 9L) */ ((/* 258L, 4L, 10L) */ ((var_1_2) ^ (var_1_3))) < (/* 261L, 7L, 13L) */ ((var_1_2) | (var_1_3))))) {
		/* 264L, 28L) */ var_1_28 = (
			/* 267L, 27L) */ (max (
				/* 267L, 27L) */ (
					var_1_33
				) , (
					var_1_34
				)
			))
		);
	} else {
		/* 270L, 35L) */ var_1_28 = (
			/* 273L, 34L) */ (abs (
				/* 274L, 33L) */ (min (
					/* 274L, 33L) */ (
						var_1_33
					) , (
						var_1_34
					)
				))
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1073741823);
	assume_abort_if_not(var_1_4 <= 1073741823);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -536870911);
	assume_abort_if_not(var_1_5 <= 536870912);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -536870911);
	assume_abort_if_not(var_1_6 <= 536870911);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 30);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -128);
	assume_abort_if_not(var_1_14 <= 127);
	assume_abort_if_not(var_1_14 != 0);
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 65534);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 127);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 63);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 63);
	var_1_47 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_47 >= -63);
	assume_abort_if_not(var_1_47 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 484L, 8L, 16L, 344L, 379L, 1001L) */ ((32u) < (/* 486L, 7L, 18L, 346L, 381L, 1003L) */ ((/* 487L, 5L, 19L, 347L, 382L, 1004L) */ ((var_1_2) + (4u))) | (var_1_3))))) {
	} else {
		if (/* 500L, 32L, 35L, 360L, 395L, 1017L) */ (! (var_1_7))) {
		} else {
		}
	}
	if (/* 518L, 65L, 71L, 435L, 446L, 1035L) */ ((/* 519L, 63L, 72L, 436L, 447L, 1036L) */ ((var_1_9) >> (var_1_12))) < (var_1_3))) {
	}
	if (/* 529L, 92L, 100L, 483L, 496L, 1046L) */ ((/* 530L, 90L, 101L, 484L, 497L, 1047L) */ ((var_1_3) + (/* 532L, 89L, 103L, 486L, 499L, 1049L) */ ((var_1_12) / (var_1_14))))) >= (var_1_9))) {
	}
	if (/* 542L, 124L, 133L, 553L, 575L, 1059L) */ ((/* 543L, 122L, 134L, 554L, 576L, 1060L) */ ((/* 544L, 118L, 135L, 555L, 577L, 1061L) */ (abs (var_1_12))) >= (/* 546L, 121L, 137L, 557L, 579L, 1063L) */ ((var_1_1) & (var_1_10))))) && (var_1_7))) {
	} else {
	}
	if (/* 565L, 164L, 168L, 626L, 640L, 1082L) */ ((var_1_18) != (999999.5))) {
	}
	if (var_1_7) {
		if (/* 584L, 192L, 196L, 689L, 704L, 1101L) */ ((-128) < (var_1_5))) {
		}
	}
	if (/* 593L, 221L, 225L, 743L, 758L, 1110L) */ ((var_1_16) > (var_1_21))) {
	}
	return /* 633L) */ ((
	/* 632L) */ ((
		/* 631L) */ ((
			/* 630L) */ ((
				/* 629L) */ ((
					/* 628L) */ ((
						/* 627L) */ ((
							/* 626L) */ ((
								/* 625L) */ ((
									/* 483L, 54L, 343L, 378L, 1000L) */ ((
										/* 484L, 8L, 16L, 344L, 379L, 1001L) */ ((
											32u
										) < (
											/* 486L, 7L, 18L, 346L, 381L, 1003L) */ ((
												/* 487L, 5L, 19L, 347L, 382L, 1004L) */ ((
													var_1_2
												) + (
													4u
												))
											) | (
												var_1_3
											))
										))
									) ? (
										/* 491L, 30L, 351L, 386L, 1008L) */ ((
											var_1_1
										) == (
											/* 491L, 30L, 351L, 386L, 1008L) */ ((signed long int) (
												/* 494L, 29L, 354L, 389L, 1011L) */ ((
													var_1_4
												) + (
													/* 496L, 28L, 356L, 391L, 1013L) */ ((
														var_1_5
													) + (
														var_1_6
													))
												))
											))
										))
									) : (
										/* 499L, 52L, 359L, 394L, 1016L) */ ((
											/* 500L, 32L, 35L, 360L, 395L, 1017L) */ (! (
												var_1_7
											))
										) ? (
											/* 502L, 44L, 362L, 397L, 1019L) */ ((
												var_1_1
											) == (
												/* 502L, 44L, 362L, 397L, 1019L) */ ((signed long int) (
													/* 505L, 43L, 365L, 400L, 1022L) */ (min (
														/* 505L, 43L, 365L, 400L, 1022L) */ (
															var_1_4
														) , (
															/* 507L, 42L, 367L, 402L, 1024L) */ ((
																var_1_8
															) - (
																var_1_9
															))
														)
													))
												))
											))
										) : (
											/* 510L, 50L, 370L, 405L, 1027L) */ ((
												var_1_1
											) == (
												/* 510L, 50L, 370L, 405L, 1027L) */ ((signed long int) (
													/* 513L, 49L, 373L, 408L, 1030L) */ ((
														var_1_9
													) - (
														var_1_10
													))
												))
											))
										))
									))
								) && (
									/* 517L, 81L, 434L, 445L, 1034L) */ ((
										/* 518L, 65L, 71L, 435L, 446L, 1035L) */ ((
											/* 519L, 63L, 72L, 436L, 447L, 1036L) */ ((
												var_1_9
											) >> (
												var_1_12
											))
										) < (
											var_1_3
										))
									) ? (
										/* 523L, 79L, 440L, 451L, 1040L) */ ((
											var_1_11
										) == (
											/* 523L, 79L, 440L, 451L, 1040L) */ ((unsigned short int) (
												var_1_12
											))
										))
									) : (
										1
									))
								))
							) && (
								/* 528L, 112L, 482L, 495L, 1045L) */ ((
									/* 529L, 92L, 100L, 483L, 496L, 1046L) */ ((
										/* 530L, 90L, 101L, 484L, 497L, 1047L) */ ((
											var_1_3
										) + (
											/* 532L, 89L, 103L, 486L, 499L, 1049L) */ ((
												var_1_12
											) / (
												var_1_14
											))
										))
									) >= (
										var_1_9
									))
								) ? (
									/* 536L, 110L, 490L, 503L, 1053L) */ ((
										var_1_13
									) == (
										/* 536L, 110L, 490L, 503L, 1053L) */ ((unsigned char) (
											var_1_12
										))
									))
								) : (
									1
								))
							))
						) && (
							/* 541L, 154L, 552L, 574L, 1058L) */ ((
								/* 542L, 124L, 133L, 553L, 575L, 1059L) */ ((
									/* 543L, 122L, 134L, 554L, 576L, 1060L) */ ((
										/* 544L, 118L, 135L, 555L, 577L, 1061L) */ (abs (
											var_1_12
										))
									) >= (
										/* 546L, 121L, 137L, 557L, 579L, 1063L) */ ((
											var_1_1
										) & (
											var_1_10
										))
									))
								) && (
									var_1_7
								))
							) ? (
								/* 550L, 148L, 561L, 583L, 1067L) */ ((
									var_1_15
								) == (
									/* 550L, 148L, 561L, 583L, 1067L) */ ((double) (
										/* 553L, 147L, 564L, 586L, 1070L) */ ((
											/* 554L, 145L, 565L, 587L, 1071L) */ (max (
												/* 554L, 145L, 565L, 587L, 1071L) */ (
													var_1_16
												) , (
													var_1_17
												)
											))
										) - (
											var_1_18
										))
									))
								))
							) : (
								/* 558L, 152L, 569L, 591L, 1075L) */ ((
									var_1_15
								) == (
									/* 558L, 152L, 569L, 591L, 1075L) */ ((double) (
										var_1_18
									))
								))
							))
						))
					) && (
						/* 564L, 180L, 625L, 639L, 1081L) */ ((
							/* 565L, 164L, 168L, 626L, 640L, 1082L) */ ((
								var_1_18
							) != (
								999999.5
							))
						) ? (
							/* 568L, 178L, 629L, 643L, 1085L) */ ((
								var_1_19
							) == (
								/* 568L, 178L, 629L, 643L, 1085L) */ ((double) (
									/* 571L, 177L, 632L, 646L, 1088L) */ ((
										15.75
									) + (
										/* 573L, 176L, 634L, 648L, 1090L) */ ((
											var_1_20
										) - (
											var_1_21
										))
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 581L, 206L, 686L, 701L, 1098L) */ ((
						var_1_7
					) ? (
						/* 583L, 204L, 688L, 703L, 1100L) */ ((
							/* 584L, 192L, 196L, 689L, 704L, 1101L) */ ((
								-128
							) < (
								var_1_5
							))
						) ? (
							/* 587L, 202L, 692L, 707L, 1104L) */ ((
								var_1_22
							) == (
								/* 587L, 202L, 692L, 707L, 1104L) */ ((signed char) (
									var_1_12
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
				/* 592L, 239L, 742L, 757L, 1109L) */ ((
					/* 593L, 221L, 225L, 743L, 758L, 1110L) */ ((
						var_1_16
					) > (
						var_1_21
					))
				) ? (
					/* 596L, 237L, 746L, 761L, 1113L) */ ((
						var_1_23
					) == (
						/* 596L, 237L, 746L, 761L, 1113L) */ ((unsigned short int) (
							/* 599L, 236L, 749L, 764L, 1116L) */ (min (
								/* 599L, 236L, 749L, 764L, 1116L) */ (
									var_1_26
								) , (
									/* 601L, 235L, 751L, 766L, 1118L) */ (min (
										/* 601L, 235L, 751L, 766L, 1118L) */ (
											var_1_12
										) , (
											/* 603L, 234L, 753L, 768L, 1120L) */ (min (
												/* 603L, 234L, 753L, 768L, 1120L) */ (
													8
												) , (
													var_1_24
												)
											))
										)
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
			/* 608L, 247L, 785L, 791L, 1125L) */ ((
				var_1_25
			) == (
				/* 608L, 247L, 785L, 791L, 1125L) */ ((unsigned char) (
					var_1_12
				))
			))
		))
	) && (
		/* 614L, 257L, 809L, 815L, 1131L) */ ((
			var_1_26
		) == (
			/* 614L, 257L, 809L, 815L, 1131L) */ ((unsigned char) (
				var_1_12
			))
		))
	))
) && (
	/* 620L, 267L, 833L, 839L, 1137L) */ ((
		var_1_27
	) == (
		/* 620L, 267L, 833L, 839L, 1137L) */ ((signed short int) (
			var_1_26
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
