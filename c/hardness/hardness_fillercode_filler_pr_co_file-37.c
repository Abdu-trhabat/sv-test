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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch37Filler_PR_CO.c", 13, "reach_error"); }
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
signed long int var_1_1 = 256;
unsigned short int var_1_2 = 51640;
unsigned short int var_1_3 = 5;
signed long int var_1_4 = -100;
signed long int var_1_5 = 0;
signed long int var_1_6 = -1000000;
float var_1_7 = 128.8;
unsigned char var_1_8 = 2;
float var_1_9 = 256.5;
float var_1_10 = 7.25;
signed char var_1_11 = 64;
signed char var_1_12 = -16;
double var_1_13 = 0.9;
unsigned char var_1_14 = 1;
double var_1_15 = 0.0;
double var_1_16 = 1.275;
unsigned short int var_1_17 = 8;
unsigned short int var_1_18 = 35331;
signed char var_1_19 = -128;
double var_1_20 = 0.0;
double var_1_21 = 0.0;
signed char var_1_22 = -8;
signed char var_1_23 = 50;
signed char var_1_26 = 5;
signed long int var_1_27 = 32;
unsigned char var_1_28 = 64;
signed char var_1_29 = 100;
signed char var_1_30 = -1;
signed char var_1_31 = 10;
signed char var_1_32 = 5;
signed char var_1_33 = 1;
unsigned short int var_1_34 = 32;
unsigned char var_1_35 = 1;
signed long int var_1_36 = -8;
unsigned char var_1_37 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch37Filler_PR_CO
	/* 855L, 31L, 287L, 309L) */ if (/* 856L, 6L, 7L, 288L, 310L) */ ((/* 857L, 4L, 8L, 289L, 311L) */ ((var_1_2) - (var_1_3))) > (var_1_4))) {
		/* 861L, 26L, 293L, 315L) */ var_1_1 = (
			/* 864L, 25L, 296L, 318L) */ (min (
				/* 864L, 25L, 296L, 318L) */ (
					/* 865L, 23L, 297L, 319L) */ (min (
						/* 865L, 23L, 297L, 319L) */ (
							/* 866L, 21L, 298L, 320L) */ ((
								var_1_5
							) + (
								var_1_3
							))
						) , (
							var_1_2
						)
					))
				) , (
					var_1_6
				)
			))
		);
	} else {
		/* 871L, 30L, 303L, 325L) */ var_1_1 = (
			0
		);
	}


	// From: CodeObject1
	/* 219L, 32L) */ if (/* 220L, 6L, 7L) */ ((/* 221L, 4L, 8L) */ (~ (/* 222L, 3L, 9L) */ (- (var_1_17))))) < (var_1_1))) {
		/* 225L, 30L) */ if (/* 226L, 19L, 20L) */ ((var_1_1) < (-64))) {
			/* 229L, 29L) */ var_1_23 = (
				var_1_26
			);
		}
	}


	// From: CodeObject7
	/* 304L, 217L) */ if (/* 305L, 181L, 182L) */ ((/* 306L, 179L, 183L) */ ((var_1_1) & (/* 308L, 178L, 185L) */ (~ (var_1_17))))) <= (var_1_17))) {
		/* 311L, 206L) */ if (var_1_35) {
			/* 313L, 205L) */ var_1_36 = (
				/* 316L, 204L) */ (max (
					/* 316L, 204L) */ (
						var_1_17
					) , (
						/* 318L, 203L) */ (min (
							/* 318L, 203L) */ (
								var_1_1
							) , (
								/* 320L, 202L) */ (abs (
									var_1_17
								))
							)
						))
					)
				))
			);
		}
	} else {
		/* 322L, 215L) */ if (var_1_37) {
			/* 324L, 214L) */ var_1_36 = (
				-128
			);
		}
	}


	// From: Req2Batch37Filler_PR_CO
	signed long int stepLocal_1 = var_1_1;
	signed long int stepLocal_0 = /* 877L, 41L, 49L, 376L, 399L) */ ((var_1_5) / (var_1_8));
	/* 901L, 85L, 374L, 397L) */ if (/* 889L, 47L, 48L, 375L, 398L) */ ((stepLocal_0) < (/* 888L, 46L, 52L, 379L, 402L) */ ((var_1_1) / (/* 887L, 45L, 54L, 381L, 404L) */ (min (/* 887L, 45L, 54L, 381L, 404L) */ (2) , (var_1_2)))))))) {
		/* 900L, 83L, 384L, 407L) */ if (/* 891L, 68L, 69L, 385L, 408L) */ ((stepLocal_1) >= (var_1_3))) {
			/* 895L, 78L, 388L, 411L) */ var_1_7 = (
				0.75f
			);
		} else {
			/* 899L, 82L, 392L, 415L) */ var_1_7 = (
				var_1_9
			);
		}
	}


	// From: Req3Batch37Filler_PR_CO
	/* 907L, 116L, 467L, 481L) */ if (/* 908L, 97L, 98L, 468L, 482L) */ ((/* 909L, 93L, 99L, 469L, 483L) */ ((var_1_6) >= (var_1_1))) || (/* 912L, 96L, 102L, 472L, 486L) */ ((var_1_9) > (var_1_7))))) {
		/* 915L, 115L, 475L, 489L) */ var_1_10 = (
			var_1_9
		);
	}


	// From: CodeObject2
	/* 233L, 51L) */ if (/* 234L, 38L, 39L) */ ((var_1_17) > (var_1_1))) {
		/* 237L, 50L) */ var_1_27 = (
			/* 240L, 49L) */ (max (
				/* 240L, 49L) */ (
					var_1_17
				) , (
					var_1_1
				)
			))
		);
	}


	// From: CodeObject4
	/* 253L, 94L) */ if (/* 254L, 80L, 81L) */ ((var_1_26) <= (16))) {
		/* 257L, 93L) */ var_1_29 = (
			/* 260L, 92L) */ ((
				/* 261L, 90L) */ (abs (
					var_1_30
				))
			) - (
				var_1_31
			))
		);
	}


	// From: CodeObject5
	/* 264L, 121L) */ if (/* 265L, 100L, 101L) */ ((var_1_19) >= (var_1_1))) {
		/* 268L, 116L) */ var_1_32 = (
			/* 271L, 115L) */ (min (
				/* 271L, 115L) */ (
					4
				) , (
					/* 273L, 114L) */ (min (
						/* 273L, 114L) */ (
							var_1_26
						) , (
							/* 275L, 113L) */ ((
								var_1_31
							) - (
								var_1_33
							))
						)
					))
				)
			))
		);
	} else {
		/* 278L, 120L) */ var_1_32 = (
			var_1_26
		);
	}


	// From: Req4Batch37Filler_PR_CO
	/* 921L, 148L, 523L, 537L) */ if (/* 922L, 126L, 127L, 524L, 538L) */ ((var_1_7) >= (var_1_10))) {
		/* 925L, 146L, 527L, 541L) */ if (/* 926L, 135L, 136L, 528L, 542L) */ ((var_1_9) < (var_1_7))) {
			/* 929L, 145L, 531L, 545L) */ var_1_11 = (
				var_1_12
			);
		}
	}


	// From: CodeObject3
	/* 243L, 74L) */ if (/* 244L, 59L, 60L) */ ((var_1_17) <= (/* 246L, 58L, 62L) */ (abs (/* 247L, 57L, 63L) */ (abs (var_1_1))))))) {
		/* 249L, 73L) */ var_1_28 = (
			4
		);
	}


	// From: CodeObject6
	/* 282L, 172L) */ if (/* 283L, 133L, 134L) */ ((/* 284L, 129L, 135L) */ ((/* 285L, 127L, 136L) */ ((var_1_17) & (var_1_11))) ^ (var_1_17))) < (/* 289L, 132L, 140L) */ ((var_1_19) & (var_1_33))))) {
		/* 292L, 170L) */ if (/* 293L, 155L, 156L) */ ((var_1_19) > (var_1_33))) {
			/* 296L, 169L) */ var_1_34 = (
				/* 299L, 168L) */ ((
					/* 300L, 166L) */ (abs (
						/* 301L, 165L) */ (abs (
							55383
						))
					))
				) - (
					var_1_33
				))
			);
		}
	}


	// From: Req5Batch37Filler_PR_CO
	signed long int stepLocal_2 = /* 935L, 176L, 182L, 590L, 625L) */ (min (/* 935L, 176L, 182L, 590L, 625L) */ (var_1_5) , (/* 937L, 175L, 184L, 592L, 627L) */ ((var_1_2) * (var_1_1)))));
	/* 969L, 217L, 578L, 613L) */ if (var_1_14) {
		/* 968L, 215L, 580L, 615L) */ if (/* 944L, 161L, 162L, 581L, 616L) */ ((var_1_7) <= (var_1_9))) {
			/* 948L, 171L, 584L, 619L) */ var_1_13 = (
				var_1_9
			);
		} else {
			/* 967L, 213L, 588L, 623L) */ if (/* 952L, 180L, 181L, 589L, 624L) */ ((stepLocal_2) == (/* 951L, 179L, 187L, 595L, 630L) */ ((var_1_3) + (var_1_6))))) {
				/* 956L, 202L, 598L, 633L) */ var_1_13 = (
					8.75
				);
			} else {
				/* 966L, 212L, 602L, 637L) */ var_1_13 = (
					/* 965L, 211L, 605L, 640L) */ ((
						16.5
					) + (
						/* 964L, 210L, 607L, 642L) */ ((
							/* 962L, 208L, 608L, 643L) */ ((
								var_1_15
							) - (
								49.35
							))
						) - (
							var_1_16
						))
					))
				);
			}
		}
	}


	// From: Req6Batch37Filler_PR_CO
	/* 978L, 228L, 723L, 735L) */ var_1_17 = (
		/* 981L, 227L, 726L, 738L) */ ((
			var_1_18
		) - (
			var_1_3
		))
	);


	// From: Req7Batch37Filler_PR_CO
	/* 986L, 280L, 767L, 789L) */ if (/* 987L, 251L, 252L, 768L, 790L) */ ((var_1_13) > (/* 989L, 250L, 254L, 770L, 792L) */ ((/* 990L, 246L, 255L, 771L, 793L) */ ((var_1_20) - (var_1_15))) - (/* 993L, 249L, 258L, 774L, 796L) */ ((var_1_21) - (var_1_16))))))) {
		/* 996L, 275L, 777L, 799L) */ var_1_19 = (
			/* 999L, 274L, 780L, 802L) */ (max (
				/* 999L, 274L, 780L, 802L) */ (
					var_1_12
				) , (
					var_1_22
				)
			))
		);
	} else {
		/* 1002L, 279L, 783L, 805L) */ var_1_19 = (
			var_1_12
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 32767);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -1073741823);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483647);
	assume_abort_if_not(var_1_6 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 255);
	assume_abort_if_not(var_1_8 != 0);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 2305843.009213691400e+12F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 32767);
	assume_abort_if_not(var_1_18 <= 65534);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= 4611686.018427388000e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= 4611686.018427388000e+12F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -127);
	assume_abort_if_not(var_1_22 <= 126);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -127);
	assume_abort_if_not(var_1_26 <= 126);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -126);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 330L, 6L, 12L, 332L, 354L, 1009L) */ ((/* 331L, 4L, 13L, 333L, 355L, 1010L) */ ((var_1_2) - (var_1_3))) > (var_1_4))) {
	} else {
	}
	if (/* 351L, 47L, 57L, 421L, 444L, 1030L) */ ((/* 352L, 41L, 58L, 422L, 445L, 1031L) */ ((var_1_5) / (var_1_8))) < (/* 355L, 46L, 61L, 425L, 448L, 1034L) */ ((var_1_1) / (/* 357L, 45L, 63L, 427L, 450L, 1036L) */ (min (/* 357L, 45L, 63L, 427L, 450L, 1036L) */ (2) , (var_1_2)))))))) {
		if (/* 361L, 68L, 72L, 431L, 454L, 1040L) */ ((var_1_1) >= (var_1_3))) {
		} else {
		}
	}
	if (/* 375L, 97L, 105L, 496L, 510L, 1054L) */ ((/* 376L, 93L, 106L, 497L, 511L, 1055L) */ ((var_1_6) >= (var_1_1))) || (/* 379L, 96L, 109L, 500L, 514L, 1058L) */ ((var_1_9) > (var_1_7))))) {
	}
	if (/* 389L, 126L, 130L, 552L, 566L, 1068L) */ ((var_1_7) >= (var_1_10))) {
		if (/* 393L, 135L, 139L, 556L, 570L, 1072L) */ ((var_1_9) < (var_1_7))) {
		}
	}
	if (var_1_14) {
		if (/* 404L, 161L, 165L, 651L, 686L, 1083L) */ ((var_1_7) <= (var_1_9))) {
		} else {
			if (/* 412L, 180L, 190L, 659L, 694L, 1091L) */ ((/* 413L, 176L, 191L, 660L, 695L, 1092L) */ (min (/* 413L, 176L, 191L, 660L, 695L, 1092L) */ (var_1_5) , (/* 415L, 175L, 193L, 662L, 697L, 1094L) */ ((var_1_2) * (var_1_1)))))) == (/* 418L, 179L, 196L, 665L, 700L, 1097L) */ ((var_1_3) + (var_1_6))))) {
			} else {
			}
		}
	}
	if (/* 450L, 251L, 261L, 812L, 834L, 1129L) */ ((var_1_13) > (/* 452L, 250L, 263L, 814L, 836L, 1131L) */ ((/* 453L, 246L, 264L, 815L, 837L, 1132L) */ ((var_1_20) - (var_1_15))) - (/* 456L, 249L, 267L, 818L, 840L, 1135L) */ ((var_1_21) - (var_1_16))))))) {
	} else {
	}
	return /* 475L) */ ((
	/* 474L) */ ((
		/* 473L) */ ((
			/* 472L) */ ((
				/* 471L) */ ((
					/* 470L) */ ((
						/* 329L, 32L, 331L, 353L, 1008L) */ ((
							/* 330L, 6L, 12L, 332L, 354L, 1009L) */ ((
								/* 331L, 4L, 13L, 333L, 355L, 1010L) */ ((
									var_1_2
								) - (
									var_1_3
								))
							) > (
								var_1_4
							))
						) ? (
							/* 335L, 26L, 337L, 359L, 1014L) */ ((
								var_1_1
							) == (
								/* 335L, 26L, 337L, 359L, 1014L) */ ((signed long int) (
									/* 338L, 25L, 340L, 362L, 1017L) */ (min (
										/* 338L, 25L, 340L, 362L, 1017L) */ (
											/* 339L, 23L, 341L, 363L, 1018L) */ (min (
												/* 339L, 23L, 341L, 363L, 1018L) */ (
													/* 340L, 21L, 342L, 364L, 1019L) */ ((
														var_1_5
													) + (
														var_1_3
													))
												) , (
													var_1_2
												)
											))
										) , (
											var_1_6
										)
									))
								))
							))
						) : (
							/* 345L, 30L, 347L, 369L, 1024L) */ ((
								var_1_1
							) == (
								/* 345L, 30L, 347L, 369L, 1024L) */ ((signed long int) (
									0
								))
							))
						))
					) && (
						/* 350L, 86L, 420L, 443L, 1029L) */ ((
							/* 351L, 47L, 57L, 421L, 444L, 1030L) */ ((
								/* 352L, 41L, 58L, 422L, 445L, 1031L) */ ((
									var_1_5
								) / (
									var_1_8
								))
							) < (
								/* 355L, 46L, 61L, 425L, 448L, 1034L) */ ((
									var_1_1
								) / (
									/* 357L, 45L, 63L, 427L, 450L, 1036L) */ (min (
										/* 357L, 45L, 63L, 427L, 450L, 1036L) */ (
											2
										) , (
											var_1_2
										)
									))
								))
							))
						) ? (
							/* 360L, 84L, 430L, 453L, 1039L) */ ((
								/* 361L, 68L, 72L, 431L, 454L, 1040L) */ ((
									var_1_1
								) >= (
									var_1_3
								))
							) ? (
								/* 364L, 78L, 434L, 457L, 1043L) */ ((
									var_1_7
								) == (
									/* 364L, 78L, 434L, 457L, 1043L) */ ((float) (
										0.75f
									))
								))
							) : (
								/* 368L, 82L, 438L, 461L, 1047L) */ ((
									var_1_7
								) == (
									/* 368L, 82L, 438L, 461L, 1047L) */ ((float) (
										var_1_9
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 374L, 117L, 495L, 509L, 1053L) */ ((
						/* 375L, 97L, 105L, 496L, 510L, 1054L) */ ((
							/* 376L, 93L, 106L, 497L, 511L, 1055L) */ ((
								var_1_6
							) >= (
								var_1_1
							))
						) || (
							/* 379L, 96L, 109L, 500L, 514L, 1058L) */ ((
								var_1_9
							) > (
								var_1_7
							))
						))
					) ? (
						/* 382L, 115L, 503L, 517L, 1061L) */ ((
							var_1_10
						) == (
							/* 382L, 115L, 503L, 517L, 1061L) */ ((float) (
								var_1_9
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 388L, 149L, 551L, 565L, 1067L) */ ((
					/* 389L, 126L, 130L, 552L, 566L, 1068L) */ ((
						var_1_7
					) >= (
						var_1_10
					))
				) ? (
					/* 392L, 147L, 555L, 569L, 1071L) */ ((
						/* 393L, 135L, 139L, 556L, 570L, 1072L) */ ((
							var_1_9
						) < (
							var_1_7
						))
					) ? (
						/* 396L, 145L, 559L, 573L, 1075L) */ ((
							var_1_11
						) == (
							/* 396L, 145L, 559L, 573L, 1075L) */ ((signed char) (
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
			/* 401L, 218L, 648L, 683L, 1080L) */ ((
				var_1_14
			) ? (
				/* 403L, 216L, 650L, 685L, 1082L) */ ((
					/* 404L, 161L, 165L, 651L, 686L, 1083L) */ ((
						var_1_7
					) <= (
						var_1_9
					))
				) ? (
					/* 407L, 171L, 654L, 689L, 1086L) */ ((
						var_1_13
					) == (
						/* 407L, 171L, 654L, 689L, 1086L) */ ((double) (
							var_1_9
						))
					))
				) : (
					/* 411L, 214L, 658L, 693L, 1090L) */ ((
						/* 412L, 180L, 190L, 659L, 694L, 1091L) */ ((
							/* 413L, 176L, 191L, 660L, 695L, 1092L) */ (min (
								/* 413L, 176L, 191L, 660L, 695L, 1092L) */ (
									var_1_5
								) , (
									/* 415L, 175L, 193L, 662L, 697L, 1094L) */ ((
										var_1_2
									) * (
										var_1_1
									))
								)
							))
						) == (
							/* 418L, 179L, 196L, 665L, 700L, 1097L) */ ((
								var_1_3
							) + (
								var_1_6
							))
						))
					) ? (
						/* 421L, 202L, 668L, 703L, 1100L) */ ((
							var_1_13
						) == (
							/* 421L, 202L, 668L, 703L, 1100L) */ ((double) (
								8.75
							))
						))
					) : (
						/* 425L, 212L, 672L, 707L, 1104L) */ ((
							var_1_13
						) == (
							/* 425L, 212L, 672L, 707L, 1104L) */ ((double) (
								/* 428L, 211L, 675L, 710L, 1107L) */ ((
									16.5
								) + (
									/* 430L, 210L, 677L, 712L, 1109L) */ ((
										/* 431L, 208L, 678L, 713L, 1110L) */ ((
											var_1_15
										) - (
											49.35
										))
									) - (
										var_1_16
									))
								))
							))
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 441L, 228L, 747L, 759L, 1120L) */ ((
			var_1_17
		) == (
			/* 441L, 228L, 747L, 759L, 1120L) */ ((unsigned short int) (
				/* 444L, 227L, 750L, 762L, 1123L) */ ((
					var_1_18
				) - (
					var_1_3
				))
			))
		))
	))
) && (
	/* 449L, 281L, 811L, 833L, 1128L) */ ((
		/* 450L, 251L, 261L, 812L, 834L, 1129L) */ ((
			var_1_13
		) > (
			/* 452L, 250L, 263L, 814L, 836L, 1131L) */ ((
				/* 453L, 246L, 264L, 815L, 837L, 1132L) */ ((
					var_1_20
				) - (
					var_1_15
				))
			) - (
				/* 456L, 249L, 267L, 818L, 840L, 1135L) */ ((
					var_1_21
				) - (
					var_1_16
				))
			))
		))
	) ? (
		/* 459L, 275L, 821L, 843L, 1138L) */ ((
			var_1_19
		) == (
			/* 459L, 275L, 821L, 843L, 1138L) */ ((signed char) (
				/* 462L, 274L, 824L, 846L, 1141L) */ (max (
					/* 462L, 274L, 824L, 846L, 1141L) */ (
						var_1_12
					) , (
						var_1_22
					)
				))
			))
		))
	) : (
		/* 465L, 279L, 827L, 849L, 1144L) */ ((
			var_1_19
		) == (
			/* 465L, 279L, 827L, 849L, 1144L) */ ((signed char) (
				var_1_12
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
