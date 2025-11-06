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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch101Filler_PS_CI.c", 13, "reach_error"); }
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
signed long int var_1_1 = -5;
unsigned char var_1_2 = 1;
signed long int var_1_3 = 128;
signed long int var_1_4 = 25;
unsigned short int var_1_5 = 256;
unsigned char var_1_6 = 0;
signed char var_1_7 = 5;
double var_1_8 = 1.425;
float var_1_10 = 1.75;
double var_1_11 = 7.6;
signed char var_1_12 = 100;
signed char var_1_13 = 64;
signed char var_1_14 = 16;
signed char var_1_15 = 0;
double var_1_16 = 99.25;
double var_1_17 = 7.5;
double var_1_18 = 3.5;
double var_1_19 = 2.2;
double var_1_20 = 1.8;
double var_1_21 = 50.31;
signed short int var_1_22 = 128;
unsigned short int var_1_23 = 128;
unsigned char var_1_24 = 1;
signed long int var_1_27 = 256;
unsigned char var_1_28 = 0;
unsigned short int var_1_29 = 256;
unsigned long int var_1_30 = 1;
unsigned short int var_1_31 = 500;
unsigned short int var_1_32 = 8;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 2;
unsigned char var_1_35 = 4;
unsigned short int var_1_36 = 4;
unsigned char var_1_37 = 0;
unsigned long int var_1_38 = 10;
unsigned long int var_1_39 = 1000;
unsigned long int var_1_40 = 0;
unsigned short int var_1_41 = 64;
signed char var_1_42 = 5;
unsigned char var_1_44 = 16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 239L, 12L) */ var_1_24 = (
		/* 242L, 11L) */ ((
			/* 243L, 9L) */ ((
				var_1_1
			) < (
				/* 245L, 8L) */ ((
					var_1_4
				) / (
					var_1_27
				))
			))
		) && (
			var_1_28
		))
	);


	// From: CodeObject2
	/* 249L, 135L) */ if (/* 250L, 23L, 24L) */ ((var_1_4) >= (var_1_27))) {
		/* 253L, 133L) */ if (/* 254L, 38L, 39L) */ ((/* 255L, 34L, 40L) */ ((var_1_27) ^ (/* 257L, 33L, 42L) */ (min (/* 257L, 33L, 42L) */ (var_1_4) , (2u)))))) != (/* 260L, 37L, 45L) */ ((var_1_4) ^ (var_1_30))))) {
			/* 263L, 60L) */ var_1_29 = (
				var_1_31
			);
		} else {
			/* 267L, 131L) */ if (/* 268L, 63L, 64L) */ ((var_1_4) <= (var_1_31))) {
				/* 271L, 125L) */ if (/* 272L, 72L, 73L) */ ((var_1_4) >= (-256))) {
					/* 275L, 85L) */ var_1_29 = (
						/* 278L, 84L) */ (abs (
							/* 279L, 83L) */ (max (
								/* 279L, 83L) */ (
									2
								) , (
									var_1_32
								)
							))
						))
					);
				} else {
					/* 282L, 123L) */ if (/* 283L, 93L, 94L) */ ((/* 284L, 91L, 95L) */ ((/* 285L, 87L, 96L) */ (abs (var_1_33))) - (/* 287L, 90L, 98L) */ (max (/* 287L, 90L, 98L) */ (var_1_34) , (var_1_35)))))) >= (var_1_32))) {
						/* 291L, 118L) */ var_1_29 = (
							/* 294L, 117L) */ (abs (
								/* 295L, 116L) */ (max (
									/* 295L, 116L) */ (
										/* 296L, 114L) */ (min (
											/* 296L, 114L) */ (
												4
											) , (
												var_1_31
											)
										))
									) , (
										var_1_34
									)
								))
							))
						);
					} else {
						/* 300L, 122L) */ var_1_29 = (
							var_1_32
						);
					}
				}
			} else {
				/* 304L, 130L) */ var_1_29 = (
					var_1_36
				);
			}
		}
	}


	// From: CodeObject3
	/* 308L, 177L) */ if (/* 309L, 142L, 143L) */ (! (/* 310L, 141L, 144L) */ ((var_1_35) >= (var_1_4))))) {
		/* 313L, 175L) */ if (/* 314L, 155L, 156L) */ ((/* 315L, 153L, 157L) */ (abs (/* 316L, 152L, 158L) */ (abs (var_1_4))))) > (var_1_32))) {
			/* 319L, 170L) */ var_1_37 = (
				/* 322L, 169L) */ (abs (
					var_1_35
				))
			);
		} else {
			/* 324L, 174L) */ var_1_37 = (
				var_1_35
			);
		}
	}


	// From: CodeObject4
	/* 329L, 184L) */ var_1_38 = (
		var_1_39
	);


	// From: CodeObject5
	/* 333L, 210L) */ if (/* 334L, 193L, 194L) */ ((var_1_5) != (/* 336L, 192L, 196L) */ (min (/* 336L, 192L, 196L) */ (64) , (var_1_3)))))) {
		/* 339L, 209L) */ var_1_40 = (
			/* 342L, 208L) */ (abs (
				/* 343L, 207L) */ (abs (
					var_1_34
				))
			))
		);
	}


	// From: CodeObject6
	/* 346L, 217L) */ var_1_41 = (
		var_1_32
	);


	// From: CodeObject7
	/* 351L, 225L) */ var_1_42 = (
		var_1_12
	);


	// From: CodeObject8
	/* 356L, 233L) */ var_1_44 = (
		var_1_35
	);


	// From: Req1Batch101Filler_PS_CI
	/* 812L, 17L, 252L, 265L) */ if (var_1_2) {
		/* 814L, 16L, 254L, 267L) */ var_1_1 = (
			/* 817L, 15L, 257L, 270L) */ ((
				/* 818L, 13L, 258L, 271L) */ ((
					/* 819L, 11L, 259L, 272L) */ ((
						1000000000
					) - (
						64
					))
				) + (
					var_1_3
				))
			) - (
				var_1_4
			))
		);
	}


	// From: Req2Batch101Filler_PS_CI
	unsigned char stepLocal_1 = var_1_6;
	signed long int stepLocal_0 = var_1_1;
	/* 841L, 50L, 304L, 318L) */ if (/* 832L, 25L, 26L, 305L, 319L) */ ((var_1_2) || (stepLocal_1))) {
		/* 840L, 48L, 308L, 322L) */ if (/* 835L, 35L, 36L, 309L, 323L) */ ((/* 834L, 33L, 37L, 310L, 324L) */ (- (var_1_4))) <= (stepLocal_0))) {
			/* 839L, 47L, 313L, 327L) */ var_1_5 = (
				5
			);
		}
	}


	// From: Req4Batch101Filler_PS_CI
	/* 877L, 140L, 475L, 491L) */ if (/* 878L, 121L, 122L, 476L, 492L) */ ((/* 879L, 119L, 123L, 477L, 493L) */ ((/* 880L, 117L, 124L, 478L, 494L) */ (max (/* 880L, 117L, 124L, 478L, 494L) */ (var_1_4) , (var_1_13)))) <= (var_1_14))) || (var_1_6))) {
		/* 885L, 139L, 483L, 499L) */ var_1_15 = (
			var_1_13
		);
	}


	// From: Req5Batch101Filler_PS_CI
	signed long int stepLocal_2 = 0;
	/* 901L, 170L, 536L, 547L) */ if (/* 894L, 154L, 155L, 537L, 548L) */ ((var_1_5) < (stepLocal_2))) {
		/* 900L, 168L, 540L, 551L) */ if (var_1_2) {
			/* 899L, 167L, 542L, 553L) */ var_1_16 = (
				var_1_17
			);
		}
	}


	// From: Req6Batch101Filler_PS_CI
	/* 905L, 208L, 628L, 652L) */ if (/* 906L, 180L, 181L, 629L, 653L) */ ((var_1_8) == (/* 908L, 179L, 183L, 631L, 655L) */ ((var_1_11) + (var_1_16))))) {
		/* 911L, 198L, 634L, 658L) */ var_1_18 = (
			/* 914L, 197L, 637L, 661L) */ ((
				var_1_19
			) + (
				/* 916L, 196L, 639L, 663L) */ ((
					var_1_20
				) - (
					var_1_21
				))
			))
		);
	} else {
		/* 919L, 207L, 642L, 666L) */ var_1_18 = (
			/* 922L, 206L, 645L, 669L) */ (min (
				/* 922L, 206L, 645L, 669L) */ (
					/* 923L, 204L, 646L, 670L) */ ((
						var_1_20
					) - (
						/* 925L, 203L, 648L, 672L) */ (abs (
							var_1_17
						))
					))
				) , (
					var_1_19
				)
			))
		);
	}


	// From: Req7Batch101Filler_PS_CI
	/* 929L, 238L, 724L, 740L) */ if (/* 930L, 218L, 219L, 725L, 741L) */ ((/* 931L, 216L, 220L, 726L, 742L) */ ((var_1_17) / (var_1_10))) <= (var_1_16))) {
		/* 935L, 237L, 730L, 746L) */ var_1_22 = (
			/* 938L, 236L, 733L, 749L) */ (abs (
				/* 939L, 235L, 734L, 750L) */ (min (
					/* 939L, 235L, 734L, 750L) */ (
						var_1_12
					) , (
						/* 941L, 234L, 736L, 752L) */ ((
							var_1_13
						) + (
							var_1_15
						))
					)
				))
			))
		);
	}


	// From: Req8Batch101Filler_PS_CI
	/* 946L, 247L, 789L, 795L) */ var_1_23 = (
		var_1_13
	);


	// From: Req3Batch101Filler_PS_CI
	/* 846L, 109L, 360L, 388L) */ if (/* 847L, 61L, 62L, 361L, 389L) */ ((/* 848L, 59L, 63L, 362L, 390L) */ ((/* 849L, 57L, 64L, 363L, 391L) */ (- (var_1_16))) * (var_1_18))) == (25.75))) {
		/* 853L, 107L, 367L, 395L) */ if (/* 854L, 80L, 81L, 368L, 396L) */ ((/* 855L, 78L, 82L, 369L, 397L) */ ((var_1_16) + (/* 857L, 77L, 84L, 371L, 399L) */ ((var_1_18) / (var_1_10))))) > (var_1_16))) {
			/* 861L, 102L, 375L, 403L) */ var_1_7 = (
				/* 864L, 101L, 378L, 406L) */ ((
					var_1_12
				) - (
					/* 866L, 100L, 380L, 408L) */ ((
						var_1_13
					) - (
						var_1_14
					))
				))
			);
		} else {
			/* 869L, 106L, 383L, 411L) */ var_1_7 = (
				-25
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1073741823);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(var_1_10 != 0.0F);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 63);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	assume_abort_if_not(var_1_27 != 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 4294967295);
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65534);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 65534);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 255);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 65534);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	}
	if (/* 374L, 25L, 29L, 333L, 347L, 965L) */ ((var_1_2) || (var_1_6))) {
		if (/* 378L, 35L, 40L, 337L, 351L, 969L) */ ((/* 379L, 33L, 41L, 338L, 352L, 970L) */ (- (var_1_4))) <= (var_1_1))) {
		}
	}
	if (/* 388L, 61L, 68L, 417L, 445L, 979L) */ ((/* 389L, 59L, 69L, 418L, 446L, 980L) */ ((/* 390L, 57L, 70L, 419L, 447L, 981L) */ (- (var_1_16))) * (var_1_18))) == (25.75))) {
		if (/* 395L, 80L, 88L, 424L, 452L, 986L) */ ((/* 396L, 78L, 89L, 425L, 453L, 987L) */ ((var_1_16) + (/* 398L, 77L, 91L, 427L, 455L, 989L) */ ((var_1_18) / (var_1_10))))) > (var_1_16))) {
		} else {
		}
	}
	if (/* 419L, 121L, 129L, 508L, 524L, 1010L) */ ((/* 420L, 119L, 130L, 509L, 525L, 1011L) */ ((/* 421L, 117L, 131L, 510L, 526L, 1012L) */ (max (/* 421L, 117L, 131L, 510L, 526L, 1012L) */ (var_1_4) , (var_1_13)))) <= (var_1_14))) || (var_1_6))) {
	}
	if (/* 432L, 154L, 158L, 559L, 570L, 1023L) */ ((var_1_5) < (0))) {
		if (var_1_2) {
		}
	}
	if (/* 443L, 180L, 186L, 677L, 701L, 1034L) */ ((var_1_8) == (/* 445L, 179L, 188L, 679L, 703L, 1036L) */ ((var_1_11) + (var_1_16))))) {
	} else {
	}
	if (/* 467L, 218L, 224L, 757L, 773L, 1058L) */ ((/* 468L, 216L, 225L, 758L, 774L, 1059L) */ ((var_1_17) / (var_1_10))) <= (var_1_16))) {
	}
	return /* 494L) */ ((
	/* 493L) */ ((
		/* 492L) */ ((
			/* 491L) */ ((
				/* 490L) */ ((
					/* 489L) */ ((
						/* 488L) */ ((
							/* 360L, 18L, 278L, 291L, 951L) */ ((
								var_1_2
							) ? (
								/* 362L, 16L, 280L, 293L, 953L) */ ((
									var_1_1
								) == (
									/* 362L, 16L, 280L, 293L, 953L) */ ((signed long int) (
										/* 365L, 15L, 283L, 296L, 956L) */ ((
											/* 366L, 13L, 284L, 297L, 957L) */ ((
												/* 367L, 11L, 285L, 298L, 958L) */ ((
													1000000000
												) - (
													64
												))
											) + (
												var_1_3
											))
										) - (
											var_1_4
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 373L, 51L, 332L, 346L, 964L) */ ((
								/* 374L, 25L, 29L, 333L, 347L, 965L) */ ((
									var_1_2
								) || (
									var_1_6
								))
							) ? (
								/* 377L, 49L, 336L, 350L, 968L) */ ((
									/* 378L, 35L, 40L, 337L, 351L, 969L) */ ((
										/* 379L, 33L, 41L, 338L, 352L, 970L) */ (- (
											var_1_4
										))
									) <= (
										var_1_1
									))
								) ? (
									/* 382L, 47L, 341L, 355L, 973L) */ ((
										var_1_5
									) == (
										/* 382L, 47L, 341L, 355L, 973L) */ ((unsigned short int) (
											5
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
						/* 387L, 110L, 416L, 444L, 978L) */ ((
							/* 388L, 61L, 68L, 417L, 445L, 979L) */ ((
								/* 389L, 59L, 69L, 418L, 446L, 980L) */ ((
									/* 390L, 57L, 70L, 419L, 447L, 981L) */ (- (
										var_1_16
									))
								) * (
									var_1_18
								))
							) == (
								25.75
							))
						) ? (
							/* 394L, 108L, 423L, 451L, 985L) */ ((
								/* 395L, 80L, 88L, 424L, 452L, 986L) */ ((
									/* 396L, 78L, 89L, 425L, 453L, 987L) */ ((
										var_1_16
									) + (
										/* 398L, 77L, 91L, 427L, 455L, 989L) */ ((
											var_1_18
										) / (
											var_1_10
										))
									))
								) > (
									var_1_16
								))
							) ? (
								/* 402L, 102L, 431L, 459L, 993L) */ ((
									var_1_7
								) == (
									/* 402L, 102L, 431L, 459L, 993L) */ ((signed char) (
										/* 405L, 101L, 434L, 462L, 996L) */ ((
											var_1_12
										) - (
											/* 407L, 100L, 436L, 464L, 998L) */ ((
												var_1_13
											) - (
												var_1_14
											))
										))
									))
								))
							) : (
								/* 410L, 106L, 439L, 467L, 1001L) */ ((
									var_1_7
								) == (
									/* 410L, 106L, 439L, 467L, 1001L) */ ((signed char) (
										-25
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 418L, 141L, 507L, 523L, 1009L) */ ((
						/* 419L, 121L, 129L, 508L, 524L, 1010L) */ ((
							/* 420L, 119L, 130L, 509L, 525L, 1011L) */ ((
								/* 421L, 117L, 131L, 510L, 526L, 1012L) */ (max (
									/* 421L, 117L, 131L, 510L, 526L, 1012L) */ (
										var_1_4
									) , (
										var_1_13
									)
								))
							) <= (
								var_1_14
							))
						) || (
							var_1_6
						))
					) ? (
						/* 426L, 139L, 515L, 531L, 1017L) */ ((
							var_1_15
						) == (
							/* 426L, 139L, 515L, 531L, 1017L) */ ((signed char) (
								var_1_13
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 431L, 171L, 558L, 569L, 1022L) */ ((
					/* 432L, 154L, 158L, 559L, 570L, 1023L) */ ((
						var_1_5
					) < (
						0
					))
				) ? (
					/* 435L, 169L, 562L, 573L, 1026L) */ ((
						var_1_2
					) ? (
						/* 437L, 167L, 564L, 575L, 1028L) */ ((
							var_1_16
						) == (
							/* 437L, 167L, 564L, 575L, 1028L) */ ((double) (
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
			/* 442L, 209L, 676L, 700L, 1033L) */ ((
				/* 443L, 180L, 186L, 677L, 701L, 1034L) */ ((
					var_1_8
				) == (
					/* 445L, 179L, 188L, 679L, 703L, 1036L) */ ((
						var_1_11
					) + (
						var_1_16
					))
				))
			) ? (
				/* 448L, 198L, 682L, 706L, 1039L) */ ((
					var_1_18
				) == (
					/* 448L, 198L, 682L, 706L, 1039L) */ ((double) (
						/* 451L, 197L, 685L, 709L, 1042L) */ ((
							var_1_19
						) + (
							/* 453L, 196L, 687L, 711L, 1044L) */ ((
								var_1_20
							) - (
								var_1_21
							))
						))
					))
				))
			) : (
				/* 456L, 207L, 690L, 714L, 1047L) */ ((
					var_1_18
				) == (
					/* 456L, 207L, 690L, 714L, 1047L) */ ((double) (
						/* 459L, 206L, 693L, 717L, 1050L) */ (min (
							/* 459L, 206L, 693L, 717L, 1050L) */ (
								/* 460L, 204L, 694L, 718L, 1051L) */ ((
									var_1_20
								) - (
									/* 462L, 203L, 696L, 720L, 1053L) */ (abs (
										var_1_17
									))
								))
							) , (
								var_1_19
							)
						))
					))
				))
			))
		))
	) && (
		/* 466L, 239L, 756L, 772L, 1057L) */ ((
			/* 467L, 218L, 224L, 757L, 773L, 1058L) */ ((
				/* 468L, 216L, 225L, 758L, 774L, 1059L) */ ((
					var_1_17
				) / (
					var_1_10
				))
			) <= (
				var_1_16
			))
		) ? (
			/* 472L, 237L, 762L, 778L, 1063L) */ ((
				var_1_22
			) == (
				/* 472L, 237L, 762L, 778L, 1063L) */ ((signed short int) (
					/* 475L, 236L, 765L, 781L, 1066L) */ (abs (
						/* 476L, 235L, 766L, 782L, 1067L) */ (min (
							/* 476L, 235L, 766L, 782L, 1067L) */ (
								var_1_12
							) , (
								/* 478L, 234L, 768L, 784L, 1069L) */ ((
									var_1_13
								) + (
									var_1_15
								))
							)
						))
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 483L, 247L, 801L, 807L, 1074L) */ ((
		var_1_23
	) == (
		/* 483L, 247L, 801L, 807L, 1074L) */ ((unsigned short int) (
			var_1_13
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
