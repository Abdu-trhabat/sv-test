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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch137Filler_PR_CO.c", 13, "reach_error"); }
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
signed char var_1_1 = -10;
unsigned short int var_1_2 = 128;
unsigned short int var_1_3 = 5;
signed char var_1_4 = -16;
signed char var_1_5 = 2;
signed char var_1_6 = 4;
signed char var_1_7 = -10;
signed long int var_1_8 = -1;
signed long int var_1_9 = 4;
float var_1_11 = 8.75;
float var_1_13 = 99999999999.5;
unsigned short int var_1_14 = 25;
signed char var_1_15 = 1;
signed char var_1_16 = 25;
signed char var_1_17 = 5;
unsigned char var_1_18 = 0;
double var_1_19 = 63.8;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 0;
signed char var_1_22 = 50;
double var_1_23 = 1.5;
signed long int var_1_24 = 64;
signed char var_1_25 = 64;
signed char var_1_28 = 16;
signed char var_1_29 = 5;
unsigned char var_1_30 = 128;
signed short int var_1_31 = 5;
signed char var_1_32 = -128;
signed short int var_1_33 = 0;
signed long int var_1_34 = 0;
unsigned long int var_1_35 = 8;
float var_1_38 = 7.2;
float var_1_39 = 16.8;
unsigned char var_1_40 = 8;
unsigned char var_1_42 = 128;
signed long int var_1_43 = 8;
unsigned char var_1_44 = 32;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
double var_1_47 = 9.25;
signed char var_1_48 = -1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch137Filler_PR_CO
	unsigned short int stepLocal_0 = var_1_2;
	/* 950L, 21L, 363L, 378L) */ if (/* 939L, 4L, 5L, 364L, 379L) */ ((stepLocal_0) >= (var_1_3))) {
		/* 949L, 20L, 367L, 382L) */ var_1_1 = (
			/* 948L, 19L, 370L, 385L) */ (min (
				/* 948L, 19L, 370L, 385L) */ (
					/* 946L, 17L, 371L, 386L) */ ((
						var_1_4
					) + (
						/* 945L, 16L, 373L, 388L) */ ((
							var_1_5
						) - (
							var_1_6
						))
					))
				) , (
					var_1_7
				)
			))
		);
	}


	// From: CodeObject2
	/* 241L, 35L) */ var_1_30 = (
		var_1_28
	);


	// From: CodeObject11
	/* 339L, 210L) */ var_1_47 = (
		var_1_39
	);


	// From: Req4Batch137Filler_PR_CO
	/* 1017L, 138L, 629L, 642L) */ var_1_14 = (
		/* 1020L, 137L, 632L, 645L) */ (min (
			/* 1020L, 137L, 632L, 645L) */ (
				var_1_6
			) , (
				var_1_5
			)
		))
	);


	// From: Req7Batch137Filler_PR_CO
	/* 1072L, 248L, 864L, 870L) */ var_1_22 = (
		var_1_4
	);


	// From: Req8Batch137Filler_PR_CO
	/* 1078L, 258L, 888L, 894L) */ var_1_23 = (
		var_1_13
	);


	// From: CodeObject4
	/* 250L, 73L) */ if (/* 251L, 54L, 55L) */ ((/* 252L, 52L, 56L) */ ((var_1_28) << (/* 254L, 51L, 58L) */ ((1) + (var_1_33))))) < (4))) {
		/* 258L, 72L) */ var_1_32 = (
			var_1_33
		);
	}


	// From: CodeObject7
	/* 285L, 128L) */ var_1_38 = (
		/* 288L, 127L) */ ((
			/* 289L, 125L) */ (abs (
				/* 290L, 124L) */ ((
					24.4f
				) - (
					9999999.5f
				))
			))
		) - (
			var_1_39
		))
	);


	// From: Req9Batch137Filler_PR_CO
	/* 1084L, 268L, 912L, 918L) */ var_1_24 = (
		var_1_7
	);


	// From: CodeObject12
	/* 344L, 218L) */ var_1_48 = (
		var_1_28
	);


	// From: Req3Batch137Filler_PR_CO
	/* 994L, 125L, 552L, 570L) */ if (/* 995L, 98L, 99L, 553L, 571L) */ ((/* 996L, 90L, 100L, 554L, 572L) */ ((2.75f) >= (var_1_23))) && (/* 999L, 97L, 103L, 557L, 575L) */ ((/* 1000L, 93L, 104L, 558L, 576L) */ ((var_1_6) - (var_1_5))) > (/* 1003L, 96L, 107L, 561L, 579L) */ ((var_1_7) * (var_1_4))))))) {
		/* 1006L, 124L, 564L, 582L) */ var_1_11 = (
			var_1_13
		);
	}


	// From: CodeObject5
	/* 263L, 97L) */ if (/* 264L, 81L, 82L) */ ((var_1_8) > (/* 266L, 80L, 84L) */ ((-5) + (var_1_14))))) {
		/* 269L, 96L) */ var_1_34 = (
			/* 272L, 95L) */ (abs (
				var_1_22
			))
		);
	}


	// From: CodeObject8
	/* 294L, 160L) */ if (/* 295L, 137L, 138L) */ ((var_1_39) > (var_1_11))) {
		/* 298L, 150L) */ var_1_40 = (
			/* 301L, 149L) */ ((
				/* 302L, 147L) */ (abs (
					var_1_42
				))
			) - (
				var_1_28
			))
		);
	} else {
		/* 305L, 159L) */ var_1_40 = (
			/* 308L, 158L) */ ((
				var_1_33
			) + (
				/* 310L, 157L) */ (abs (
					/* 311L, 156L) */ (min (
						/* 311L, 156L) */ (
							0
						) , (
							var_1_28
						)
					))
				))
			))
		);
	}


	// From: Req5Batch137Filler_PR_CO
	/* 1024L, 182L, 675L, 694L) */ if (/* 1025L, 159L, 160L, 676L, 695L) */ ((128.8f) != (/* 1027L, 158L, 162L, 678L, 697L) */ ((1.6f) * (var_1_11))))) {
		/* 1030L, 181L, 681L, 700L) */ var_1_15 = (
			/* 1033L, 180L, 684L, 703L) */ ((
				/* 1034L, 176L, 685L, 704L) */ ((
					var_1_16
				) + (
					/* 1036L, 175L, 687L, 706L) */ (max (
						/* 1036L, 175L, 687L, 706L) */ (
							var_1_17
						) , (
							4
						)
					))
				))
			) + (
				/* 1039L, 179L, 690L, 709L) */ (min (
					/* 1039L, 179L, 690L, 709L) */ (
						var_1_5
					) , (
						var_1_4
					)
				))
			))
		);
	}


	// From: CodeObject9
	/* 315L, 189L) */ if (/* 316L, 168L, 169L) */ ((var_1_42) >= (/* 318L, 167L, 171L) */ ((var_1_35) / (var_1_44))))) {
		/* 321L, 188L) */ var_1_43 = (
			/* 324L, 187L) */ (max (
				/* 324L, 187L) */ (
					/* 325L, 183L) */ (min (
						/* 325L, 183L) */ (
							var_1_14
						) , (
							10
						)
					))
				) , (
					/* 328L, 186L) */ (max (
						/* 328L, 186L) */ (
							var_1_8
						) , (
							var_1_33
						)
					))
				)
			))
		);
	}


	// From: Req6Batch137Filler_PR_CO
	/* 1043L, 239L, 751L, 779L) */ if (/* 1044L, 194L, 195L, 752L, 780L) */ ((/* 1045L, 192L, 196L, 753L, 781L) */ (min (/* 1045L, 192L, 196L, 753L, 781L) */ (/* 1046L, 190L, 197L, 754L, 782L) */ ((24.875) - (var_1_19))) , (var_1_11)))) >= (99.2))) {
		/* 1051L, 215L, 759L, 787L) */ var_1_18 = (
			/* 1054L, 214L, 762L, 790L) */ ((
				/* 1055L, 212L, 763L, 791L) */ (! (
					var_1_20
				))
			) || (
				var_1_21
			))
		);
	} else {
		/* 1058L, 237L, 766L, 794L) */ if (/* 1059L, 218L, 219L, 767L, 795L) */ ((var_1_13) < (var_1_11))) {
			/* 1062L, 228L, 770L, 798L) */ var_1_18 = (
				var_1_20
			);
		} else {
			/* 1066L, 236L, 774L, 802L) */ var_1_18 = (
				var_1_21
			);
		}
	}


	// From: CodeObject6
	/* 274L, 116L) */ if (var_1_18) {
		/* 276L, 114L) */ if (var_1_18) {
			/* 278L, 113L) */ var_1_35 = (
				/* 281L, 112L) */ (abs (
					var_1_28
				))
			);
		}
	}


	// From: CodeObject10
	/* 331L, 203L) */ if (var_1_18) {
		/* 333L, 202L) */ var_1_45 = (
			/* 336L, 201L) */ (! (
				var_1_46
			))
		);
	}


	// From: Req2Batch137Filler_PR_CO
	signed char stepLocal_2 = var_1_5;
	signed char stepLocal_1 = var_1_6;
	/* 988L, 81L, 423L, 455L) */ if (/* 963L, 31L, 32L, 424L, 456L) */ ((stepLocal_2) > (/* 962L, 30L, 34L, 426L, 458L) */ (min (/* 962L, 30L, 34L, 426L, 458L) */ (var_1_7) , (var_1_24)))))) {
		/* 981L, 70L, 429L, 461L) */ if (/* 967L, 46L, 47L, 430L, 462L) */ ((stepLocal_1) < (/* 966L, 45L, 49L, 432L, 464L) */ ((var_1_5) << (var_1_24))))) {
			/* 975L, 64L, 435L, 467L) */ var_1_8 = (
				/* 974L, 63L, 438L, 470L) */ (max (
					/* 974L, 63L, 438L, 470L) */ (
						var_1_24
					) , (
						/* 973L, 62L, 440L, 472L) */ ((
							var_1_9
						) + (
							1
						))
					)
				))
			);
		} else {
			/* 980L, 69L, 443L, 475L) */ var_1_8 = (
				/* 979L, 68L, 446L, 478L) */ (abs (
					var_1_5
				))
			);
		}
	} else {
		/* 987L, 79L, 448L, 480L) */ if (var_1_18) {
			/* 986L, 78L, 450L, 482L) */ var_1_8 = (
				var_1_9
			);
		}
	}


	// From: CodeObject1
	/* 221L, 28L) */ if (/* 222L, 5L, 6L) */ ((/* 223L, 3L, 7L) */ (abs (var_1_23))) == (var_1_23))) {
		/* 226L, 22L) */ var_1_25 = (
			/* 229L, 21L) */ ((
				/* 230L, 18L) */ ((
					5
				) - (
					var_1_28
				))
			) + (
				/* 233L, 20L) */ (abs (
					var_1_29
				))
			))
		);
	} else {
		/* 235L, 27L) */ var_1_25 = (
			/* 238L, 26L) */ (abs (
				var_1_28
			))
		);
	}


	// From: CodeObject3
	/* 246L, 43L) */ var_1_31 = (
		var_1_24
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -1073741823);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -31);
	assume_abort_if_not(var_1_16 <= 32);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -31);
	assume_abort_if_not(var_1_17 <= 31);
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 1);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_28 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 63);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -63);
	assume_abort_if_not(var_1_29 <= 63);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 127);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 255);
	assume_abort_if_not(var_1_44 != 0);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 349L, 4L, 8L, 394L, 409L, 1090L) */ ((var_1_2) >= (var_1_3))) {
	}
	if (/* 364L, 31L, 37L, 488L, 520L, 1105L) */ ((var_1_5) > (/* 366L, 30L, 39L, 490L, 522L, 1107L) */ (min (/* 366L, 30L, 39L, 490L, 522L, 1107L) */ (var_1_7) , (var_1_24)))))) {
		if (/* 370L, 46L, 52L, 494L, 526L, 1111L) */ ((var_1_6) < (/* 372L, 45L, 54L, 496L, 528L, 1113L) */ ((var_1_5) << (var_1_24))))) {
		} else {
		}
	} else {
		if (var_1_18) {
		}
	}
	if (/* 397L, 98L, 110L, 589L, 607L, 1138L) */ ((/* 398L, 90L, 111L, 590L, 608L, 1139L) */ ((2.75f) >= (var_1_23))) && (/* 401L, 97L, 114L, 593L, 611L, 1142L) */ ((/* 402L, 93L, 115L, 594L, 612L, 1143L) */ ((var_1_6) - (var_1_5))) > (/* 405L, 96L, 118L, 597L, 615L, 1146L) */ ((var_1_7) * (var_1_4))))))) {
	}
	if (/* 427L, 159L, 165L, 714L, 733L, 1168L) */ ((128.8f) != (/* 429L, 158L, 167L, 716L, 735L, 1170L) */ ((1.6f) * (var_1_11))))) {
	}
	if (/* 446L, 194L, 202L, 808L, 836L, 1187L) */ ((/* 447L, 192L, 203L, 809L, 837L, 1188L) */ (min (/* 447L, 192L, 203L, 809L, 837L, 1188L) */ (/* 448L, 190L, 204L, 810L, 838L, 1189L) */ ((24.875) - (var_1_19))) , (var_1_11)))) >= (99.2))) {
	} else {
		if (/* 461L, 218L, 222L, 823L, 851L, 1202L) */ ((var_1_13) < (var_1_11))) {
		} else {
		}
	}
	return /* 498L) */ ((
	/* 497L) */ ((
		/* 496L) */ ((
			/* 495L) */ ((
				/* 494L) */ ((
					/* 493L) */ ((
						/* 492L) */ ((
							/* 491L) */ ((
								/* 348L, 22L, 393L, 408L, 1089L) */ ((
									/* 349L, 4L, 8L, 394L, 409L, 1090L) */ ((
										var_1_2
									) >= (
										var_1_3
									))
								) ? (
									/* 352L, 20L, 397L, 412L, 1093L) */ ((
										var_1_1
									) == (
										/* 352L, 20L, 397L, 412L, 1093L) */ ((signed char) (
											/* 355L, 19L, 400L, 415L, 1096L) */ (min (
												/* 355L, 19L, 400L, 415L, 1096L) */ (
													/* 356L, 17L, 401L, 416L, 1097L) */ ((
														var_1_4
													) + (
														/* 358L, 16L, 403L, 418L, 1099L) */ ((
															var_1_5
														) - (
															var_1_6
														))
													))
												) , (
													var_1_7
												)
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 363L, 82L, 487L, 519L, 1104L) */ ((
									/* 364L, 31L, 37L, 488L, 520L, 1105L) */ ((
										var_1_5
									) > (
										/* 366L, 30L, 39L, 490L, 522L, 1107L) */ (min (
											/* 366L, 30L, 39L, 490L, 522L, 1107L) */ (
												var_1_7
											) , (
												var_1_24
											)
										))
									))
								) ? (
									/* 369L, 71L, 493L, 525L, 1110L) */ ((
										/* 370L, 46L, 52L, 494L, 526L, 1111L) */ ((
											var_1_6
										) < (
											/* 372L, 45L, 54L, 496L, 528L, 1113L) */ ((
												var_1_5
											) << (
												var_1_24
											))
										))
									) ? (
										/* 375L, 64L, 499L, 531L, 1116L) */ ((
											var_1_8
										) == (
											/* 375L, 64L, 499L, 531L, 1116L) */ ((signed long int) (
												/* 378L, 63L, 502L, 534L, 1119L) */ (max (
													/* 378L, 63L, 502L, 534L, 1119L) */ (
														var_1_24
													) , (
														/* 380L, 62L, 504L, 536L, 1121L) */ ((
															var_1_9
														) + (
															1
														))
													)
												))
											))
										))
									) : (
										/* 383L, 69L, 507L, 539L, 1124L) */ ((
											var_1_8
										) == (
											/* 383L, 69L, 507L, 539L, 1124L) */ ((signed long int) (
												/* 386L, 68L, 510L, 542L, 1127L) */ (abs (
													var_1_5
												))
											))
										))
									))
								) : (
									/* 388L, 80L, 512L, 544L, 1129L) */ ((
										var_1_18
									) ? (
										/* 390L, 78L, 514L, 546L, 1131L) */ ((
											var_1_8
										) == (
											/* 390L, 78L, 514L, 546L, 1131L) */ ((signed long int) (
												var_1_9
											))
										))
									) : (
										1
									))
								))
							))
						) && (
							/* 396L, 126L, 588L, 606L, 1137L) */ ((
								/* 397L, 98L, 110L, 589L, 607L, 1138L) */ ((
									/* 398L, 90L, 111L, 590L, 608L, 1139L) */ ((
										2.75f
									) >= (
										var_1_23
									))
								) && (
									/* 401L, 97L, 114L, 593L, 611L, 1142L) */ ((
										/* 402L, 93L, 115L, 594L, 612L, 1143L) */ ((
											var_1_6
										) - (
											var_1_5
										))
									) > (
										/* 405L, 96L, 118L, 597L, 615L, 1146L) */ ((
											var_1_7
										) * (
											var_1_4
										))
									))
								))
							) ? (
								/* 408L, 124L, 600L, 618L, 1149L) */ ((
									var_1_11
								) == (
									/* 408L, 124L, 600L, 618L, 1149L) */ ((float) (
										var_1_13
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 419L, 138L, 655L, 668L, 1160L) */ ((
							var_1_14
						) == (
							/* 419L, 138L, 655L, 668L, 1160L) */ ((unsigned short int) (
								/* 422L, 137L, 658L, 671L, 1163L) */ (min (
									/* 422L, 137L, 658L, 671L, 1163L) */ (
										var_1_6
									) , (
										var_1_5
									)
								))
							))
						))
					))
				) && (
					/* 426L, 183L, 713L, 732L, 1167L) */ ((
						/* 427L, 159L, 165L, 714L, 733L, 1168L) */ ((
							128.8f
						) != (
							/* 429L, 158L, 167L, 716L, 735L, 1170L) */ ((
								1.6f
							) * (
								var_1_11
							))
						))
					) ? (
						/* 432L, 181L, 719L, 738L, 1173L) */ ((
							var_1_15
						) == (
							/* 432L, 181L, 719L, 738L, 1173L) */ ((signed char) (
								/* 435L, 180L, 722L, 741L, 1176L) */ ((
									/* 436L, 176L, 723L, 742L, 1177L) */ ((
										var_1_16
									) + (
										/* 438L, 175L, 725L, 744L, 1179L) */ (max (
											/* 438L, 175L, 725L, 744L, 1179L) */ (
												var_1_17
											) , (
												4
											)
										))
									))
								) + (
									/* 441L, 179L, 728L, 747L, 1182L) */ (min (
										/* 441L, 179L, 728L, 747L, 1182L) */ (
											var_1_5
										) , (
											var_1_4
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
				/* 445L, 240L, 807L, 835L, 1186L) */ ((
					/* 446L, 194L, 202L, 808L, 836L, 1187L) */ ((
						/* 447L, 192L, 203L, 809L, 837L, 1188L) */ (min (
							/* 447L, 192L, 203L, 809L, 837L, 1188L) */ (
								/* 448L, 190L, 204L, 810L, 838L, 1189L) */ ((
									24.875
								) - (
									var_1_19
								))
							) , (
								var_1_11
							)
						))
					) >= (
						99.2
					))
				) ? (
					/* 453L, 215L, 815L, 843L, 1194L) */ ((
						var_1_18
					) == (
						/* 453L, 215L, 815L, 843L, 1194L) */ ((unsigned char) (
							/* 456L, 214L, 818L, 846L, 1197L) */ ((
								/* 457L, 212L, 819L, 847L, 1198L) */ (! (
									var_1_20
								))
							) || (
								var_1_21
							))
						))
					))
				) : (
					/* 460L, 238L, 822L, 850L, 1201L) */ ((
						/* 461L, 218L, 222L, 823L, 851L, 1202L) */ ((
							var_1_13
						) < (
							var_1_11
						))
					) ? (
						/* 464L, 228L, 826L, 854L, 1205L) */ ((
							var_1_18
						) == (
							/* 464L, 228L, 826L, 854L, 1205L) */ ((unsigned char) (
								var_1_20
							))
						))
					) : (
						/* 468L, 236L, 830L, 858L, 1209L) */ ((
							var_1_18
						) == (
							/* 468L, 236L, 830L, 858L, 1209L) */ ((unsigned char) (
								var_1_21
							))
						))
					))
				))
			))
		) && (
			/* 474L, 248L, 876L, 882L, 1215L) */ ((
				var_1_22
			) == (
				/* 474L, 248L, 876L, 882L, 1215L) */ ((signed char) (
					var_1_4
				))
			))
		))
	) && (
		/* 480L, 258L, 900L, 906L, 1221L) */ ((
			var_1_23
		) == (
			/* 480L, 258L, 900L, 906L, 1221L) */ ((double) (
				var_1_13
			))
		))
	))
) && (
	/* 486L, 268L, 924L, 930L, 1227L) */ ((
		var_1_24
	) == (
		/* 486L, 268L, 924L, 930L, 1227L) */ ((signed long int) (
			var_1_7
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
